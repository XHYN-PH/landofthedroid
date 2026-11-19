#include "recomp.h"
#include "rec_mod.h"

void f_750460(void) {
  LOAD_REGS();
L_750460: /* 750460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 750461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 750462: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 750466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 750467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 750468: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 750469: mov ebx, ecx */
  ebx = ecx;
/* 75046b: call 0x6ca5a6 */
  esp -= 4; W32(esp, 0x750470u); SPILL(); f_6ca5a6(); if (g_unwind) return; RELOAD();
/* 750470: lea eax, [ebp + 0x4b4] */
  eax = (uint32_t)(ebp + 0x4b4u);
/* 750476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 750477: lea ecx, [ebx + 0x4b4] */
  ecx = (uint32_t)(ebx + 0x4b4u);
/* 75047d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750483u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750483: mov ecx, dword ptr [ebp + 0x4c0] */
  ecx = R32((uint32_t)(ebp + 0x4c0u));
/* 750489: mov edx, dword ptr [ebx + 0x4c4] */
  edx = R32((uint32_t)(ebx + 0x4c4u));
/* 75048f: mov esi, dword ptr [ebx + 0x4c4] */
  esi = R32((uint32_t)(ebx + 0x4c4u));
/* 750495: mov dword ptr [ebx + 0x4c0], ecx */
  W32((uint32_t)(ebx + 0x4c0u), ecx);
/* 75049b: xor edx, dword ptr [ebp + 0x4c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4c4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7504a1: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7504a4: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7504a6: mov dword ptr [ebx + 0x4c4], esi */
  W32((uint32_t)(ebx + 0x4c4u), esi);
/* 7504ac: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7504b2: mov ecx, esi */
  ecx = esi;
/* 7504b4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7504b6: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7504b9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7504bb: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7504c1: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7504c7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7504c9: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7504cc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7504ce: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7504d4: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7504da: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7504dc: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7504df: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7504e1: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7504e7: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7504ed: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7504ef: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7504f2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7504f4: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7504fa: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 750500: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750502: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750505: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750507: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 75050d: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750513: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750515: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750518: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75051a: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 750520: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 750526: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750528: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75052d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75052f: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 750535: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 75053b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75053d: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750543: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750545: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 75054b: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 750551: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750553: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750558: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75055a: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 750560: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750566: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750568: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75056e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750570: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 750576: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 75057c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75057e: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750583: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750585: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 75058b: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750591: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750593: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750599: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75059b: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7505a1: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7505a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7505a9: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7505ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7505b0: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7505b6: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7505bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7505be: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7505c4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7505c6: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7505cc: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7505d2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7505d4: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7505d9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7505db: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7505e1: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7505e7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7505e9: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7505ef: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7505f1: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7505f7: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7505fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7505ff: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750604: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750606: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 75060c: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750612: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750614: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75061a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75061c: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 750622: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 750628: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75062a: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75062f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750631: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 750637: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 75063d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75063f: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750645: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750647: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 75064d: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 750653: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750655: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75065a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75065c: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 750662: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750668: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75066a: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750670: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750672: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 750678: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 75067e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750680: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750685: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750687: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 75068d: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750693: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750695: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75069b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75069d: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7506a3: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7506a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7506ab: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7506b0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7506b2: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7506b8: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7506be: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7506c0: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7506c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7506c8: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7506ce: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7506d4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7506d6: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7506db: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7506dd: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 7506e3: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 7506e9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7506eb: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7506f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7506f3: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 7506f9: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 7506ff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750701: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750706: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750708: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 75070e: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 750714: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750716: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75071c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75071e: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 750724: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 75072a: mov edi, dword ptr [ebp + 0x4c4] */
  edi = R32((uint32_t)(ebp + 0x4c4u));
/* 750730: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750732: mov ecx, dword ptr [ebx + 0x4c8] */
  ecx = R32((uint32_t)(ebx + 0x4c8u));
/* 750738: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75073d: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75073f: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 750745: mov esi, dword ptr [ebp + 0x4c8] */
  esi = R32((uint32_t)(ebp + 0x4c8u));
/* 75074b: mov eax, dword ptr [ebx + 0x4c8] */
  eax = R32((uint32_t)(ebx + 0x4c8u));
/* 750751: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750753: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750756: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750758: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 75075e: mov ecx, eax */
  ecx = eax;
/* 750760: mov eax, dword ptr [ebp + 0x4c8] */
  eax = R32((uint32_t)(ebp + 0x4c8u));
/* 750766: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750768: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75076b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75076d: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 750773: mov ecx, dword ptr [ebp + 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0x4c8u));
/* 750779: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75077b: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75077e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750780: mov dword ptr [ebx + 0x4c8], ecx */
  W32((uint32_t)(ebx + 0x4c8u), ecx);
/* 750786: mov eax, dword ptr [ebp + 0x4c8] */
  eax = R32((uint32_t)(ebp + 0x4c8u));
/* 75078c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75078e: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750791: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750793: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 750799: mov edx, dword ptr [ebp + 0x4c8] */
  edx = R32((uint32_t)(ebp + 0x4c8u));
/* 75079f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7507a1: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7507a4: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7507a6: lea eax, [ebp + 0x4cc] */
  eax = (uint32_t)(ebp + 0x4ccu);
/* 7507ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7507ad: lea ecx, [ebx + 0x4cc] */
  ecx = (uint32_t)(ebx + 0x4ccu);
/* 7507b3: mov dword ptr [ebx + 0x4c8], edx */
  W32((uint32_t)(ebx + 0x4c8u), edx);
/* 7507b9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7507bfu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7507bf: lea ecx, [ebp + 0x4d8] */
  ecx = (uint32_t)(ebp + 0x4d8u);
/* 7507c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7507c6: lea ecx, [ebx + 0x4d8] */
  ecx = (uint32_t)(ebx + 0x4d8u);
/* 7507cc: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7507d2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7507d2: lea edx, [ebp + 0x4e4] */
  edx = (uint32_t)(ebp + 0x4e4u);
/* 7507d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7507d9: lea ecx, [ebx + 0x4e4] */
  ecx = (uint32_t)(ebx + 0x4e4u);
/* 7507df: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7507e5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7507e5: mov al, byte ptr [ebp + 0x4f0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4f0u))) & 0xffu);
/* 7507eb: mov byte ptr [ebx + 0x4f0], al */
  W8((uint32_t)(ebx + 0x4f0u), (eax & 0xffu));
/* 7507f1: mov cl, byte ptr [ebp + 0x4f1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4f1u))) & 0xffu);
/* 7507f7: mov byte ptr [ebx + 0x4f1], cl */
  W8((uint32_t)(ebx + 0x4f1u), (ecx & 0xffu));
/* 7507fd: mov edx, dword ptr [ebp + 0x4f4] */
  edx = R32((uint32_t)(ebp + 0x4f4u));
/* 750803: mov dword ptr [ebx + 0x4f4], edx */
  W32((uint32_t)(ebx + 0x4f4u), edx);
/* 750809: mov eax, dword ptr [ebp + 0x4f8] */
  eax = R32((uint32_t)(ebp + 0x4f8u));
/* 75080f: mov dword ptr [ebx + 0x4f8], eax */
  W32((uint32_t)(ebx + 0x4f8u), eax);
/* 750815: mov ecx, dword ptr [ebp + 0x4fc] */
  ecx = R32((uint32_t)(ebp + 0x4fcu));
/* 75081b: mov dword ptr [ebx + 0x4fc], ecx */
  W32((uint32_t)(ebx + 0x4fcu), ecx);
/* 750821: mov edx, dword ptr [ebp + 0x500] */
  edx = R32((uint32_t)(ebp + 0x500u));
/* 750827: mov dword ptr [ebx + 0x500], edx */
  W32((uint32_t)(ebx + 0x500u), edx);
/* 75082d: mov eax, dword ptr [ebp + 0x504] */
  eax = R32((uint32_t)(ebp + 0x504u));
/* 750833: mov dword ptr [ebx + 0x504], eax */
  W32((uint32_t)(ebx + 0x504u), eax);
/* 750839: mov ecx, dword ptr [ebp + 0x508] */
  ecx = R32((uint32_t)(ebp + 0x508u));
/* 75083f: mov dword ptr [ebx + 0x508], ecx */
  W32((uint32_t)(ebx + 0x508u), ecx);
/* 750845: mov edx, dword ptr [ebp + 0x50c] */
  edx = R32((uint32_t)(ebp + 0x50cu));
/* 75084b: mov dword ptr [ebx + 0x50c], edx */
  W32((uint32_t)(ebx + 0x50cu), edx);
/* 750851: mov eax, dword ptr [ebp + 0x510] */
  eax = R32((uint32_t)(ebp + 0x510u));
/* 750857: mov dword ptr [ebx + 0x510], eax */
  W32((uint32_t)(ebx + 0x510u), eax);
/* 75085d: mov ecx, dword ptr [ebp + 0x514] */
  ecx = R32((uint32_t)(ebp + 0x514u));
/* 750863: mov dword ptr [ebx + 0x514], ecx */
  W32((uint32_t)(ebx + 0x514u), ecx);
/* 750869: mov edx, dword ptr [ebp + 0x518] */
  edx = R32((uint32_t)(ebp + 0x518u));
/* 75086f: mov dword ptr [ebx + 0x518], edx */
  W32((uint32_t)(ebx + 0x518u), edx);
/* 750875: mov eax, dword ptr [ebp + 0x51c] */
  eax = R32((uint32_t)(ebp + 0x51cu));
/* 75087b: mov dword ptr [ebx + 0x51c], eax */
  W32((uint32_t)(ebx + 0x51cu), eax);
/* 750881: mov ecx, dword ptr [ebp + 0x520] */
  ecx = R32((uint32_t)(ebp + 0x520u));
/* 750887: mov dword ptr [ebx + 0x520], ecx */
  W32((uint32_t)(ebx + 0x520u), ecx);
/* 75088d: mov edx, dword ptr [ebp + 0x524] */
  edx = R32((uint32_t)(ebp + 0x524u));
/* 750893: mov dword ptr [ebx + 0x524], edx */
  W32((uint32_t)(ebx + 0x524u), edx);
/* 750899: mov al, byte ptr [ebp + 0x528] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x528u))) & 0xffu);
/* 75089f: mov byte ptr [ebx + 0x528], al */
  W8((uint32_t)(ebx + 0x528u), (eax & 0xffu));
/* 7508a5: mov cl, byte ptr [ebp + 0x529] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x529u))) & 0xffu);
/* 7508ab: mov byte ptr [ebx + 0x529], cl */
  W8((uint32_t)(ebx + 0x529u), (ecx & 0xffu));
/* 7508b1: mov dl, byte ptr [ebp + 0x52a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52au))) & 0xffu);
/* 7508b7: mov byte ptr [ebx + 0x52a], dl */
  W8((uint32_t)(ebx + 0x52au), (edx & 0xffu));
/* 7508bd: mov al, byte ptr [ebp + 0x52b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52bu))) & 0xffu);
/* 7508c3: mov byte ptr [ebx + 0x52b], al */
  W8((uint32_t)(ebx + 0x52bu), (eax & 0xffu));
/* 7508c9: mov cl, byte ptr [ebp + 0x52c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52cu))) & 0xffu);
/* 7508cf: mov byte ptr [ebx + 0x52c], cl */
  W8((uint32_t)(ebx + 0x52cu), (ecx & 0xffu));
/* 7508d5: mov dl, byte ptr [ebp + 0x52d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52du))) & 0xffu);
/* 7508db: mov byte ptr [ebx + 0x52d], dl */
  W8((uint32_t)(ebx + 0x52du), (edx & 0xffu));
/* 7508e1: mov al, byte ptr [ebp + 0x52e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52eu))) & 0xffu);
/* 7508e7: mov byte ptr [ebx + 0x52e], al */
  W8((uint32_t)(ebx + 0x52eu), (eax & 0xffu));
/* 7508ed: mov cl, byte ptr [ebp + 0x52f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52fu))) & 0xffu);
/* 7508f3: mov byte ptr [ebx + 0x52f], cl */
  W8((uint32_t)(ebx + 0x52fu), (ecx & 0xffu));
/* 7508f9: mov dl, byte ptr [ebp + 0x530] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x530u))) & 0xffu);
/* 7508ff: mov byte ptr [ebx + 0x530], dl */
  W8((uint32_t)(ebx + 0x530u), (edx & 0xffu));
/* 750905: mov eax, dword ptr [ebp + 0x534] */
  eax = R32((uint32_t)(ebp + 0x534u));
/* 75090b: mov dword ptr [ebx + 0x534], eax */
  W32((uint32_t)(ebx + 0x534u), eax);
/* 750911: mov ecx, dword ptr [ebp + 0x538] */
  ecx = R32((uint32_t)(ebp + 0x538u));
/* 750917: mov dword ptr [ebx + 0x538], ecx */
  W32((uint32_t)(ebx + 0x538u), ecx);
/* 75091d: mov edx, dword ptr [ebp + 0x53c] */
  edx = R32((uint32_t)(ebp + 0x53cu));
/* 750923: mov dword ptr [ebx + 0x53c], edx */
  W32((uint32_t)(ebx + 0x53cu), edx);
/* 750929: mov eax, dword ptr [ebp + 0x540] */
  eax = R32((uint32_t)(ebp + 0x540u));
/* 75092f: mov dword ptr [ebx + 0x540], eax */
  W32((uint32_t)(ebx + 0x540u), eax);
/* 750935: mov ecx, dword ptr [ebp + 0x544] */
  ecx = R32((uint32_t)(ebp + 0x544u));
/* 75093b: mov dword ptr [ebx + 0x544], ecx */
  W32((uint32_t)(ebx + 0x544u), ecx);
/* 750941: mov edx, dword ptr [ebp + 0x548] */
  edx = R32((uint32_t)(ebp + 0x548u));
/* 750947: mov dword ptr [ebx + 0x548], edx */
  W32((uint32_t)(ebx + 0x548u), edx);
/* 75094d: mov eax, dword ptr [ebp + 0x54c] */
  eax = R32((uint32_t)(ebp + 0x54cu));
/* 750953: mov dword ptr [ebx + 0x54c], eax */
  W32((uint32_t)(ebx + 0x54cu), eax);
/* 750959: mov ecx, dword ptr [ebp + 0x550] */
  ecx = R32((uint32_t)(ebp + 0x550u));
/* 75095f: mov dword ptr [ebx + 0x550], ecx */
  W32((uint32_t)(ebx + 0x550u), ecx);
/* 750965: mov edx, dword ptr [ebp + 0x554] */
  edx = R32((uint32_t)(ebp + 0x554u));
/* 75096b: mov dword ptr [ebx + 0x554], edx */
  W32((uint32_t)(ebx + 0x554u), edx);
/* 750971: lea eax, [ebp + 0x558] */
  eax = (uint32_t)(ebp + 0x558u);
/* 750977: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750979: lea ecx, [ebx + 0x558] */
  ecx = (uint32_t)(ebx + 0x558u);
/* 75097f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750981: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750984: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750987: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75098a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75098d: lea ecx, [ebp + 0x564] */
  ecx = (uint32_t)(ebp + 0x564u);
/* 750993: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750995: lea edx, [ebx + 0x564] */
  edx = (uint32_t)(ebx + 0x564u);
/* 75099b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75099d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7509a0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7509a3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7509a6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7509a9: lea edx, [ebp + 0x570] */
  edx = (uint32_t)(ebp + 0x570u);
/* 7509af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7509b0: lea ecx, [ebx + 0x570] */
  ecx = (uint32_t)(ebx + 0x570u);
/* 7509b6: call 0x6c3157 */
  esp -= 4; W32(esp, 0x7509bbu); SPILL(); f_6c3157(); if (g_unwind) return; RELOAD();
/* 7509bb: mov eax, dword ptr [ebp + 0x57c] */
  eax = R32((uint32_t)(ebp + 0x57cu));
/* 7509c1: mov dword ptr [ebx + 0x57c], eax */
  W32((uint32_t)(ebx + 0x57cu), eax);
/* 7509c7: mov ecx, dword ptr [ebp + 0x580] */
  ecx = R32((uint32_t)(ebp + 0x580u));
/* 7509cd: mov dword ptr [ebx + 0x580], ecx */
  W32((uint32_t)(ebx + 0x580u), ecx);
/* 7509d3: mov edx, dword ptr [ebp + 0x584] */
  edx = R32((uint32_t)(ebp + 0x584u));
/* 7509d9: mov dword ptr [ebx + 0x584], edx */
  W32((uint32_t)(ebx + 0x584u), edx);
/* 7509df: lea eax, [ebp + 0x588] */
  eax = (uint32_t)(ebp + 0x588u);
/* 7509e5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7509e7: lea ecx, [ebx + 0x588] */
  ecx = (uint32_t)(ebx + 0x588u);
/* 7509ed: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7509ef: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7509f2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7509f5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7509f8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7509fb: lea ecx, [ebp + 0x594] */
  ecx = (uint32_t)(ebp + 0x594u);
/* 750a01: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750a03: lea edx, [ebx + 0x594] */
  edx = (uint32_t)(ebx + 0x594u);
/* 750a09: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750a0b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750a0e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750a11: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750a14: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750a17: lea esi, [ebp + 0x5a0] */
  esi = (uint32_t)(ebp + 0x5a0u);
/* 750a1d: lea edi, [ebx + 0x5a0] */
  edi = (uint32_t)(ebx + 0x5a0u);
/* 750a23: mov ecx, 0x10 */
  ecx = 0x10u;
/* 750a28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 750a2a: lea edx, [ebp + 0x5e0] */
  edx = (uint32_t)(ebp + 0x5e0u);
/* 750a30: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750a32: lea eax, [ebx + 0x5e0] */
  eax = (uint32_t)(ebx + 0x5e0u);
/* 750a38: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750a3a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750a3d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750a40: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750a43: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750a46: lea eax, [ebp + 0x5ec] */
  eax = (uint32_t)(ebp + 0x5ecu);
/* 750a4c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750a4e: lea ecx, [ebx + 0x5ec] */
  ecx = (uint32_t)(ebx + 0x5ecu);
/* 750a54: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750a56: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750a59: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750a5c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 750a5f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 750a62: mov ecx, dword ptr [ebp + 0x5f8] */
  ecx = R32((uint32_t)(ebp + 0x5f8u));
/* 750a68: mov dword ptr [ebx + 0x5f8], ecx */
  W32((uint32_t)(ebx + 0x5f8u), ecx);
/* 750a6e: lea edx, [ebp + 0x5fc] */
  edx = (uint32_t)(ebp + 0x5fcu);
/* 750a74: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750a76: lea eax, [ebx + 0x5fc] */
  eax = (uint32_t)(ebx + 0x5fcu);
/* 750a7c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750a7e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750a81: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750a84: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750a87: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750a8a: mov eax, dword ptr [ebp + 0x608] */
  eax = R32((uint32_t)(ebp + 0x608u));
/* 750a90: mov dword ptr [ebx + 0x608], eax */
  W32((uint32_t)(ebx + 0x608u), eax);
/* 750a96: mov ecx, dword ptr [ebp + 0x60c] */
  ecx = R32((uint32_t)(ebp + 0x60cu));
/* 750a9c: mov dword ptr [ebx + 0x60c], ecx */
  W32((uint32_t)(ebx + 0x60cu), ecx);
/* 750aa2: mov edx, dword ptr [ebp + 0x610] */
  edx = R32((uint32_t)(ebp + 0x610u));
/* 750aa8: mov dword ptr [ebx + 0x610], edx */
  W32((uint32_t)(ebx + 0x610u), edx);
/* 750aae: mov eax, dword ptr [ebp + 0x614] */
  eax = R32((uint32_t)(ebp + 0x614u));
/* 750ab4: mov dword ptr [ebx + 0x614], eax */
  W32((uint32_t)(ebx + 0x614u), eax);
/* 750aba: mov ecx, dword ptr [ebp + 0x618] */
  ecx = R32((uint32_t)(ebp + 0x618u));
/* 750ac0: mov dword ptr [ebx + 0x618], ecx */
  W32((uint32_t)(ebx + 0x618u), ecx);
/* 750ac6: mov edx, dword ptr [ebp + 0x61c] */
  edx = R32((uint32_t)(ebp + 0x61cu));
/* 750acc: mov dword ptr [ebx + 0x61c], edx */
  W32((uint32_t)(ebx + 0x61cu), edx);
/* 750ad2: lea eax, [ebp + 0x620] */
  eax = (uint32_t)(ebp + 0x620u);
/* 750ad8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750ada: lea ecx, [ebx + 0x620] */
  ecx = (uint32_t)(ebx + 0x620u);
/* 750ae0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750ae2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750ae5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750ae8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 750aeb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 750aee: lea ecx, [ebp + 0x62c] */
  ecx = (uint32_t)(ebp + 0x62cu);
/* 750af4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750af6: lea edx, [ebx + 0x62c] */
  edx = (uint32_t)(ebx + 0x62cu);
/* 750afc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750afe: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750b01: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750b04: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750b07: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750b0a: mov edx, dword ptr [ebp + 0x638] */
  edx = R32((uint32_t)(ebp + 0x638u));
/* 750b10: mov dword ptr [ebx + 0x638], edx */
  W32((uint32_t)(ebx + 0x638u), edx);
/* 750b16: lea eax, [ebp + 0x63c] */
  eax = (uint32_t)(ebp + 0x63cu);
/* 750b1c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750b1e: lea ecx, [ebx + 0x63c] */
  ecx = (uint32_t)(ebx + 0x63cu);
/* 750b24: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750b26: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750b29: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750b2c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 750b2f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 750b32: mov ecx, dword ptr [ebp + 0x648] */
  ecx = R32((uint32_t)(ebp + 0x648u));
/* 750b38: mov dword ptr [ebx + 0x648], ecx */
  W32((uint32_t)(ebx + 0x648u), ecx);
/* 750b3e: mov edx, dword ptr [ebp + 0x64c] */
  edx = R32((uint32_t)(ebp + 0x64cu));
/* 750b44: lea ecx, [ebp + 0x654] */
  ecx = (uint32_t)(ebp + 0x654u);
/* 750b4a: mov dword ptr [ebx + 0x64c], edx */
  W32((uint32_t)(ebx + 0x64cu), edx);
/* 750b50: mov eax, dword ptr [ebp + 0x650] */
  eax = R32((uint32_t)(ebp + 0x650u));
/* 750b56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 750b57: lea ecx, [ebx + 0x654] */
  ecx = (uint32_t)(ebx + 0x654u);
/* 750b5d: mov dword ptr [ebx + 0x650], eax */
  W32((uint32_t)(ebx + 0x650u), eax);
/* 750b63: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750b69u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750b69: mov dl, byte ptr [ebp + 0x660] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x660u))) & 0xffu);
/* 750b6f: mov byte ptr [ebx + 0x660], dl */
  W8((uint32_t)(ebx + 0x660u), (edx & 0xffu));
/* 750b75: mov eax, dword ptr [ebp + 0x664] */
  eax = R32((uint32_t)(ebp + 0x664u));
/* 750b7b: mov dword ptr [ebx + 0x664], eax */
  W32((uint32_t)(ebx + 0x664u), eax);
/* 750b81: mov ecx, dword ptr [ebp + 0x668] */
  ecx = R32((uint32_t)(ebp + 0x668u));
/* 750b87: mov dword ptr [ebx + 0x668], ecx */
  W32((uint32_t)(ebx + 0x668u), ecx);
/* 750b8d: mov edx, dword ptr [ebp + 0x66c] */
  edx = R32((uint32_t)(ebp + 0x66cu));
/* 750b93: mov dword ptr [ebx + 0x66c], edx */
  W32((uint32_t)(ebx + 0x66cu), edx);
/* 750b99: mov eax, dword ptr [ebp + 0x670] */
  eax = R32((uint32_t)(ebp + 0x670u));
/* 750b9f: mov dword ptr [ebx + 0x670], eax */
  W32((uint32_t)(ebx + 0x670u), eax);
/* 750ba5: mov ecx, dword ptr [ebp + 0x674] */
  ecx = R32((uint32_t)(ebp + 0x674u));
/* 750bab: mov dword ptr [ebx + 0x674], ecx */
  W32((uint32_t)(ebx + 0x674u), ecx);
/* 750bb1: mov edx, dword ptr [ebp + 0x678] */
  edx = R32((uint32_t)(ebp + 0x678u));
/* 750bb7: mov dword ptr [ebx + 0x678], edx */
  W32((uint32_t)(ebx + 0x678u), edx);
/* 750bbd: mov eax, dword ptr [ebp + 0x67c] */
  eax = R32((uint32_t)(ebp + 0x67cu));
/* 750bc3: mov dword ptr [ebx + 0x67c], eax */
  W32((uint32_t)(ebx + 0x67cu), eax);
/* 750bc9: mov ecx, dword ptr [ebp + 0x680] */
  ecx = R32((uint32_t)(ebp + 0x680u));
/* 750bcf: mov dword ptr [ebx + 0x680], ecx */
  W32((uint32_t)(ebx + 0x680u), ecx);
/* 750bd5: mov edx, dword ptr [ebp + 0x684] */
  edx = R32((uint32_t)(ebp + 0x684u));
/* 750bdb: mov dword ptr [ebx + 0x684], edx */
  W32((uint32_t)(ebx + 0x684u), edx);
/* 750be1: mov eax, dword ptr [ebp + 0x688] */
  eax = R32((uint32_t)(ebp + 0x688u));
/* 750be7: mov dword ptr [ebx + 0x688], eax */
  W32((uint32_t)(ebx + 0x688u), eax);
/* 750bed: mov ecx, dword ptr [ebp + 0x68c] */
  ecx = R32((uint32_t)(ebp + 0x68cu));
/* 750bf3: mov esi, ebp */
  esi = ebp;
/* 750bf5: mov dword ptr [ebx + 0x68c], ecx */
  W32((uint32_t)(ebx + 0x68cu), ecx);
/* 750bfb: lea edi, [ebx + 0x690] */
  edi = (uint32_t)(ebx + 0x690u);
/* 750c01: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 750c03: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
/* 750c0b: jmp 0x750c10 */
  goto L_750c10;
L_750c10: /* 750c10: lea edx, [edi + esi] */
  edx = (uint32_t)(edi + esi);
/* 750c13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750c14: mov ecx, edi */
  ecx = edi;
/* 750c16: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c1cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c1c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 750c20: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 750c23: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 750c24: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 750c28: jne 0x750c10 */
  if (!zf) goto L_750c10;
L_750c2a: /* 750c2a: mov eax, dword ptr [ebp + 0x6c0] */
  eax = R32((uint32_t)(ebp + 0x6c0u));
/* 750c30: mov dword ptr [ebx + 0x6c0], eax */
  W32((uint32_t)(ebx + 0x6c0u), eax);
/* 750c36: mov ecx, dword ptr [ebp + 0x6c4] */
  ecx = R32((uint32_t)(ebp + 0x6c4u));
/* 750c3c: mov dword ptr [ebx + 0x6c4], ecx */
  W32((uint32_t)(ebx + 0x6c4u), ecx);
/* 750c42: mov edx, dword ptr [ebp + 0x6c8] */
  edx = R32((uint32_t)(ebp + 0x6c8u));
/* 750c48: mov dword ptr [ebx + 0x6c8], edx */
  W32((uint32_t)(ebx + 0x6c8u), edx);
/* 750c4e: mov eax, dword ptr [ebp + 0x6cc] */
  eax = R32((uint32_t)(ebp + 0x6ccu));
/* 750c54: mov dword ptr [ebx + 0x6cc], eax */
  W32((uint32_t)(ebx + 0x6ccu), eax);
/* 750c5a: mov ecx, dword ptr [ebp + 0x6d0] */
  ecx = R32((uint32_t)(ebp + 0x6d0u));
/* 750c60: lea edx, [ebp + 0x6d4] */
  edx = (uint32_t)(ebp + 0x6d4u);
/* 750c66: mov dword ptr [ebx + 0x6d0], ecx */
  W32((uint32_t)(ebx + 0x6d0u), ecx);
/* 750c6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750c6d: lea ecx, [ebx + 0x6d4] */
  ecx = (uint32_t)(ebx + 0x6d4u);
/* 750c73: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c79u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c79: lea eax, [ebp + 0x6e0] */
  eax = (uint32_t)(ebp + 0x6e0u);
/* 750c7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 750c80: lea ecx, [ebx + 0x6e0] */
  ecx = (uint32_t)(ebx + 0x6e0u);
/* 750c86: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c8cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c8c: lea ecx, [ebp + 0x6ec] */
  ecx = (uint32_t)(ebp + 0x6ecu);
/* 750c92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 750c93: lea ecx, [ebx + 0x6ec] */
  ecx = (uint32_t)(ebx + 0x6ecu);
/* 750c99: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c9fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c9f: lea edx, [ebp + 0x6f8] */
  edx = (uint32_t)(ebp + 0x6f8u);
/* 750ca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750ca6: lea ecx, [ebx + 0x6f8] */
  ecx = (uint32_t)(ebx + 0x6f8u);
/* 750cac: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750cb2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750cb2: mov eax, dword ptr [ebp + 0x704] */
  eax = R32((uint32_t)(ebp + 0x704u));
/* 750cb8: lea ecx, [ebp + 0x708] */
  ecx = (uint32_t)(ebp + 0x708u);
/* 750cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 750cbf: lea ecx, [ebx + 0x708] */
  ecx = (uint32_t)(ebx + 0x708u);
/* 750cc5: mov dword ptr [ebx + 0x704], eax */
  W32((uint32_t)(ebx + 0x704u), eax);
/* 750ccb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750cd1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750cd1: lea edx, [ebp + 0x714] */
  edx = (uint32_t)(ebp + 0x714u);
/* 750cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750cd8: lea ecx, [ebx + 0x714] */
  ecx = (uint32_t)(ebx + 0x714u);
/* 750cde: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ce4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ce4: mov eax, dword ptr [ebp + 0x720] */
  eax = R32((uint32_t)(ebp + 0x720u));
/* 750cea: mov dword ptr [ebx + 0x720], eax */
  W32((uint32_t)(ebx + 0x720u), eax);
/* 750cf0: mov ecx, dword ptr [ebp + 0x724] */
  ecx = R32((uint32_t)(ebp + 0x724u));
/* 750cf6: mov dword ptr [ebx + 0x724], ecx */
  W32((uint32_t)(ebx + 0x724u), ecx);
/* 750cfc: lea edx, [ebp + 0x728] */
  edx = (uint32_t)(ebp + 0x728u);
/* 750d02: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750d04: lea eax, [ebx + 0x728] */
  eax = (uint32_t)(ebx + 0x728u);
/* 750d0a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750d0c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750d0f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750d12: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750d15: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750d18: mov eax, dword ptr [ebp + 0x734] */
  eax = R32((uint32_t)(ebp + 0x734u));
/* 750d1e: mov dword ptr [ebx + 0x734], eax */
  W32((uint32_t)(ebx + 0x734u), eax);
/* 750d24: lea ecx, [ebp + 0x738] */
  ecx = (uint32_t)(ebp + 0x738u);
/* 750d2a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750d2c: lea edx, [ebx + 0x738] */
  edx = (uint32_t)(ebx + 0x738u);
/* 750d32: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750d34: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750d37: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750d3a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750d3d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750d40: lea edx, [ebp + 0x744] */
  edx = (uint32_t)(ebp + 0x744u);
/* 750d46: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750d48: lea eax, [ebx + 0x744] */
  eax = (uint32_t)(ebx + 0x744u);
/* 750d4e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750d50: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750d53: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750d56: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750d59: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750d5c: mov eax, dword ptr [ebp + 0x750] */
  eax = R32((uint32_t)(ebp + 0x750u));
/* 750d62: mov dword ptr [ebx + 0x750], eax */
  W32((uint32_t)(ebx + 0x750u), eax);
/* 750d68: lea ecx, [ebp + 0x754] */
  ecx = (uint32_t)(ebp + 0x754u);
/* 750d6e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750d70: lea edx, [ebx + 0x754] */
  edx = (uint32_t)(ebx + 0x754u);
/* 750d76: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750d78: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750d7b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750d7e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750d81: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750d84: mov edx, dword ptr [ebp + 0x760] */
  edx = R32((uint32_t)(ebp + 0x760u));
/* 750d8a: mov dword ptr [ebx + 0x760], edx */
  W32((uint32_t)(ebx + 0x760u), edx);
/* 750d90: mov eax, dword ptr [ebp + 0x764] */
  eax = R32((uint32_t)(ebp + 0x764u));
/* 750d96: mov dword ptr [ebx + 0x764], eax */
  W32((uint32_t)(ebx + 0x764u), eax);
/* 750d9c: mov ecx, dword ptr [ebp + 0x768] */
  ecx = R32((uint32_t)(ebp + 0x768u));
/* 750da2: mov dword ptr [ebx + 0x768], ecx */
  W32((uint32_t)(ebx + 0x768u), ecx);
/* 750da8: lea edx, [ebp + 0x76c] */
  edx = (uint32_t)(ebp + 0x76cu);
/* 750dae: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750db0: lea eax, [ebx + 0x76c] */
  eax = (uint32_t)(ebx + 0x76cu);
/* 750db6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750db8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750dbb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750dbe: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750dc1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750dc4: lea eax, [ebp + 0x778] */
  eax = (uint32_t)(ebp + 0x778u);
/* 750dca: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750dcc: lea ecx, [ebx + 0x778] */
  ecx = (uint32_t)(ebx + 0x778u);
/* 750dd2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750dd4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750dd7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750dda: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 750ddd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 750de0: mov ecx, dword ptr [ebp + 0x784] */
  ecx = R32((uint32_t)(ebp + 0x784u));
/* 750de6: mov dword ptr [ebx + 0x784], ecx */
  W32((uint32_t)(ebx + 0x784u), ecx);
/* 750dec: mov edx, dword ptr [ebp + 0x788] */
  edx = R32((uint32_t)(ebp + 0x788u));
/* 750df2: mov dword ptr [ebx + 0x788], edx */
  W32((uint32_t)(ebx + 0x788u), edx);
/* 750df8: mov eax, dword ptr [ebp + 0x78c] */
  eax = R32((uint32_t)(ebp + 0x78cu));
/* 750dfe: mov dword ptr [ebx + 0x78c], eax */
  W32((uint32_t)(ebx + 0x78cu), eax);
/* 750e04: mov ecx, dword ptr [ebp + 0x790] */
  ecx = R32((uint32_t)(ebp + 0x790u));
/* 750e0a: mov dword ptr [ebx + 0x790], ecx */
  W32((uint32_t)(ebx + 0x790u), ecx);
/* 750e10: lea edx, [ebp + 0x794] */
  edx = (uint32_t)(ebp + 0x794u);
/* 750e16: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750e18: lea eax, [ebx + 0x794] */
  eax = (uint32_t)(ebx + 0x794u);
/* 750e1e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750e20: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750e23: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750e26: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750e29: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750e2c: mov eax, dword ptr [ebp + 0x7a0] */
  eax = R32((uint32_t)(ebp + 0x7a0u));
/* 750e32: mov dword ptr [ebx + 0x7a0], eax */
  W32((uint32_t)(ebx + 0x7a0u), eax);
/* 750e38: mov ecx, dword ptr [ebp + 0x7a4] */
  ecx = R32((uint32_t)(ebp + 0x7a4u));
/* 750e3e: mov dword ptr [ebx + 0x7a4], ecx */
  W32((uint32_t)(ebx + 0x7a4u), ecx);
/* 750e44: mov edx, dword ptr [ebp + 0x7a8] */
  edx = R32((uint32_t)(ebp + 0x7a8u));
/* 750e4a: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750e50: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 750e56: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750e5c: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 750e62: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750e68: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750e6e: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 750e74: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750e7a: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750e80: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 750e86: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 750e8c: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 750e92: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 750e98: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 750e9e: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 750ea4: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 750eaa: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 750eb0: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 750eb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750eb7: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 750ebd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ec3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ec3: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 750ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 750eca: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 750ed0: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ed6u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ed6: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750edc: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 750ee2: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750ee8: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750eea: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750eed: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750eef: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750ef5: mov ecx, eax */
  ecx = eax;
/* 750ef7: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750efd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750eff: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750f02: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f04: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750f0a: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 750f10: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750f12: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750f15: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750f17: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 750f1d: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750f23: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f25: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750f28: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f2a: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750f30: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750f36: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750f39: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 750f3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 750f3d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750f3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750f40: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750f46: mov eax, ebx */
  eax = ebx;
/* 750f48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 750f49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_750c0d(void) {
  LOAD_REGS();
L_750c0d: /* 750c0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_750c10: /* 750c10: lea edx, [edi + esi] */
  edx = (uint32_t)(edi + esi);
/* 750c13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750c14: mov ecx, edi */
  ecx = edi;
/* 750c16: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c1cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c1c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 750c20: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 750c23: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 750c24: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 750c28: jne 0x750c10 */
  if (!zf) goto L_750c10;
L_750c2a: /* 750c2a: mov eax, dword ptr [ebp + 0x6c0] */
  eax = R32((uint32_t)(ebp + 0x6c0u));
/* 750c30: mov dword ptr [ebx + 0x6c0], eax */
  W32((uint32_t)(ebx + 0x6c0u), eax);
/* 750c36: mov ecx, dword ptr [ebp + 0x6c4] */
  ecx = R32((uint32_t)(ebp + 0x6c4u));
/* 750c3c: mov dword ptr [ebx + 0x6c4], ecx */
  W32((uint32_t)(ebx + 0x6c4u), ecx);
/* 750c42: mov edx, dword ptr [ebp + 0x6c8] */
  edx = R32((uint32_t)(ebp + 0x6c8u));
/* 750c48: mov dword ptr [ebx + 0x6c8], edx */
  W32((uint32_t)(ebx + 0x6c8u), edx);
/* 750c4e: mov eax, dword ptr [ebp + 0x6cc] */
  eax = R32((uint32_t)(ebp + 0x6ccu));
/* 750c54: mov dword ptr [ebx + 0x6cc], eax */
  W32((uint32_t)(ebx + 0x6ccu), eax);
/* 750c5a: mov ecx, dword ptr [ebp + 0x6d0] */
  ecx = R32((uint32_t)(ebp + 0x6d0u));
/* 750c60: lea edx, [ebp + 0x6d4] */
  edx = (uint32_t)(ebp + 0x6d4u);
/* 750c66: mov dword ptr [ebx + 0x6d0], ecx */
  W32((uint32_t)(ebx + 0x6d0u), ecx);
/* 750c6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750c6d: lea ecx, [ebx + 0x6d4] */
  ecx = (uint32_t)(ebx + 0x6d4u);
/* 750c73: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c79u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c79: lea eax, [ebp + 0x6e0] */
  eax = (uint32_t)(ebp + 0x6e0u);
/* 750c7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 750c80: lea ecx, [ebx + 0x6e0] */
  ecx = (uint32_t)(ebx + 0x6e0u);
/* 750c86: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c8cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c8c: lea ecx, [ebp + 0x6ec] */
  ecx = (uint32_t)(ebp + 0x6ecu);
/* 750c92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 750c93: lea ecx, [ebx + 0x6ec] */
  ecx = (uint32_t)(ebx + 0x6ecu);
/* 750c99: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750c9fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750c9f: lea edx, [ebp + 0x6f8] */
  edx = (uint32_t)(ebp + 0x6f8u);
/* 750ca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750ca6: lea ecx, [ebx + 0x6f8] */
  ecx = (uint32_t)(ebx + 0x6f8u);
/* 750cac: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750cb2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750cb2: mov eax, dword ptr [ebp + 0x704] */
  eax = R32((uint32_t)(ebp + 0x704u));
/* 750cb8: lea ecx, [ebp + 0x708] */
  ecx = (uint32_t)(ebp + 0x708u);
/* 750cbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 750cbf: lea ecx, [ebx + 0x708] */
  ecx = (uint32_t)(ebx + 0x708u);
/* 750cc5: mov dword ptr [ebx + 0x704], eax */
  W32((uint32_t)(ebx + 0x704u), eax);
/* 750ccb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750cd1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750cd1: lea edx, [ebp + 0x714] */
  edx = (uint32_t)(ebp + 0x714u);
/* 750cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750cd8: lea ecx, [ebx + 0x714] */
  ecx = (uint32_t)(ebx + 0x714u);
/* 750cde: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ce4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ce4: mov eax, dword ptr [ebp + 0x720] */
  eax = R32((uint32_t)(ebp + 0x720u));
/* 750cea: mov dword ptr [ebx + 0x720], eax */
  W32((uint32_t)(ebx + 0x720u), eax);
/* 750cf0: mov ecx, dword ptr [ebp + 0x724] */
  ecx = R32((uint32_t)(ebp + 0x724u));
/* 750cf6: mov dword ptr [ebx + 0x724], ecx */
  W32((uint32_t)(ebx + 0x724u), ecx);
/* 750cfc: lea edx, [ebp + 0x728] */
  edx = (uint32_t)(ebp + 0x728u);
/* 750d02: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750d04: lea eax, [ebx + 0x728] */
  eax = (uint32_t)(ebx + 0x728u);
/* 750d0a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750d0c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750d0f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750d12: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750d15: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750d18: mov eax, dword ptr [ebp + 0x734] */
  eax = R32((uint32_t)(ebp + 0x734u));
/* 750d1e: mov dword ptr [ebx + 0x734], eax */
  W32((uint32_t)(ebx + 0x734u), eax);
/* 750d24: lea ecx, [ebp + 0x738] */
  ecx = (uint32_t)(ebp + 0x738u);
/* 750d2a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750d2c: lea edx, [ebx + 0x738] */
  edx = (uint32_t)(ebx + 0x738u);
/* 750d32: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750d34: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750d37: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750d3a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750d3d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750d40: lea edx, [ebp + 0x744] */
  edx = (uint32_t)(ebp + 0x744u);
/* 750d46: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750d48: lea eax, [ebx + 0x744] */
  eax = (uint32_t)(ebx + 0x744u);
/* 750d4e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750d50: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750d53: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750d56: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750d59: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750d5c: mov eax, dword ptr [ebp + 0x750] */
  eax = R32((uint32_t)(ebp + 0x750u));
/* 750d62: mov dword ptr [ebx + 0x750], eax */
  W32((uint32_t)(ebx + 0x750u), eax);
/* 750d68: lea ecx, [ebp + 0x754] */
  ecx = (uint32_t)(ebp + 0x754u);
/* 750d6e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 750d70: lea edx, [ebx + 0x754] */
  edx = (uint32_t)(ebx + 0x754u);
/* 750d76: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 750d78: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 750d7b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 750d7e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 750d81: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 750d84: mov edx, dword ptr [ebp + 0x760] */
  edx = R32((uint32_t)(ebp + 0x760u));
/* 750d8a: mov dword ptr [ebx + 0x760], edx */
  W32((uint32_t)(ebx + 0x760u), edx);
/* 750d90: mov eax, dword ptr [ebp + 0x764] */
  eax = R32((uint32_t)(ebp + 0x764u));
/* 750d96: mov dword ptr [ebx + 0x764], eax */
  W32((uint32_t)(ebx + 0x764u), eax);
/* 750d9c: mov ecx, dword ptr [ebp + 0x768] */
  ecx = R32((uint32_t)(ebp + 0x768u));
/* 750da2: mov dword ptr [ebx + 0x768], ecx */
  W32((uint32_t)(ebx + 0x768u), ecx);
/* 750da8: lea edx, [ebp + 0x76c] */
  edx = (uint32_t)(ebp + 0x76cu);
/* 750dae: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750db0: lea eax, [ebx + 0x76c] */
  eax = (uint32_t)(ebx + 0x76cu);
/* 750db6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750db8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750dbb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750dbe: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750dc1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750dc4: lea eax, [ebp + 0x778] */
  eax = (uint32_t)(ebp + 0x778u);
/* 750dca: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 750dcc: lea ecx, [ebx + 0x778] */
  ecx = (uint32_t)(ebx + 0x778u);
/* 750dd2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 750dd4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 750dd7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 750dda: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 750ddd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 750de0: mov ecx, dword ptr [ebp + 0x784] */
  ecx = R32((uint32_t)(ebp + 0x784u));
/* 750de6: mov dword ptr [ebx + 0x784], ecx */
  W32((uint32_t)(ebx + 0x784u), ecx);
/* 750dec: mov edx, dword ptr [ebp + 0x788] */
  edx = R32((uint32_t)(ebp + 0x788u));
/* 750df2: mov dword ptr [ebx + 0x788], edx */
  W32((uint32_t)(ebx + 0x788u), edx);
/* 750df8: mov eax, dword ptr [ebp + 0x78c] */
  eax = R32((uint32_t)(ebp + 0x78cu));
/* 750dfe: mov dword ptr [ebx + 0x78c], eax */
  W32((uint32_t)(ebx + 0x78cu), eax);
/* 750e04: mov ecx, dword ptr [ebp + 0x790] */
  ecx = R32((uint32_t)(ebp + 0x790u));
/* 750e0a: mov dword ptr [ebx + 0x790], ecx */
  W32((uint32_t)(ebx + 0x790u), ecx);
/* 750e10: lea edx, [ebp + 0x794] */
  edx = (uint32_t)(ebp + 0x794u);
/* 750e16: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750e18: lea eax, [ebx + 0x794] */
  eax = (uint32_t)(ebx + 0x794u);
/* 750e1e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750e20: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 750e23: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 750e26: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750e29: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750e2c: mov eax, dword ptr [ebp + 0x7a0] */
  eax = R32((uint32_t)(ebp + 0x7a0u));
/* 750e32: mov dword ptr [ebx + 0x7a0], eax */
  W32((uint32_t)(ebx + 0x7a0u), eax);
/* 750e38: mov ecx, dword ptr [ebp + 0x7a4] */
  ecx = R32((uint32_t)(ebp + 0x7a4u));
/* 750e3e: mov dword ptr [ebx + 0x7a4], ecx */
  W32((uint32_t)(ebx + 0x7a4u), ecx);
/* 750e44: mov edx, dword ptr [ebp + 0x7a8] */
  edx = R32((uint32_t)(ebp + 0x7a8u));
/* 750e4a: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750e50: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 750e56: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750e5c: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 750e62: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750e68: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750e6e: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 750e74: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750e7a: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750e80: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 750e86: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 750e8c: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 750e92: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 750e98: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 750e9e: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 750ea4: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 750eaa: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 750eb0: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 750eb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 750eb7: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 750ebd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ec3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ec3: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 750ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 750eca: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 750ed0: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x750ed6u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 750ed6: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750edc: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 750ee2: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750ee8: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750eea: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750eed: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750eef: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750ef5: mov ecx, eax */
  ecx = eax;
/* 750ef7: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750efd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750eff: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750f02: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f04: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750f0a: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 750f10: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750f12: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750f15: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750f17: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 750f1d: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750f23: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f25: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750f28: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750f2a: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750f30: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750f36: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750f39: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 750f3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 750f3d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750f3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750f40: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750f46: mov eax, ebx */
  eax = ebx;
/* 750f48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 750f49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751210(void) {
  LOAD_REGS();
L_751210: /* 751210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751211: mov esi, ecx */
  esi = ecx;
/* 751213: call 0x6c33c8 */
  esp -= 4; W32(esp, 0x751218u); SPILL(); f_6c33c8(); if (g_unwind) return; RELOAD();
/* 751218: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75121d: je 0x75122e */
  if (zf) goto L_75122e;
L_75121f: /* 75121f: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 751224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751225: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75122bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75122b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75122e: /* 75122e: mov eax, esi */
  eax = esi;
/* 751230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751231: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751250(void) {
  LOAD_REGS();
L_751250: /* 751250: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 751251: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 751255: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751258: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751259: mov esi, ecx */
  esi = ecx;
/* 75125b: je 0x751290 */
  if (zf) goto L_751290;
L_75125d: /* 75125d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 751260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751261: push 0x6c33c8 */
  { uint32_t v = 0x6c33c8u; esp -= 4; W32(esp, v); }
/* 751266: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 751269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75126a: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 75126f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751270: call 0x99ca3d */
  esp -= 4; W32(esp, 0x751275u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 751275: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751278: je 0x751288 */
  if (zf) goto L_751288;
L_75127a: /* 75127a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 751280: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 751282: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 751284: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751285: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x751288u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_751288: /* 751288: mov eax, edi */
  eax = edi;
/* 75128a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75128b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75128c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75128d: ret 4 */
  esp += 8; SPILL(); return;
L_751290: /* 751290: mov ecx, esi */
  ecx = esi;
/* 751292: call 0x6c33c8 */
  esp -= 4; W32(esp, 0x751297u); SPILL(); f_6c33c8(); if (g_unwind) return; RELOAD();
/* 751297: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75129a: je 0x7512ab */
  if (zf) goto L_7512ab;
L_75129c: /* 75129c: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7512a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7512a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7512a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7512a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7512ab: /* 7512ab: mov eax, esi */
  eax = esi;
/* 7512ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7512ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7512af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7512e0(void) {
  LOAD_REGS();
L_7512e0: /* 7512e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7512e2: push 0x9c82e8 */
  { uint32_t v = 0x9c82e8u; esp -= 4; W32(esp, v); }
/* 7512e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7512ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7512ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7512f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7512f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7512f7: mov esi, ecx */
  esi = ecx;
/* 7512f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7512fd: mov dword ptr [esi], 0xa02ae8 */
  W32((uint32_t)(esi), 0xa02ae8u);
/* 751303: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75130b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x751311u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 751311: mov ecx, esi */
  ecx = esi;
/* 751313: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75131b: call 0x6c33c8 */
  esp -= 4; W32(esp, 0x751320u); SPILL(); f_6c33c8(); if (g_unwind) return; RELOAD();
/* 751320: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 751324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751325: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75132c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75132f: ret  */
  esp += 4; SPILL(); return;
}

void f_751350(void) {
  LOAD_REGS();
L_751350: /* 751350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751351: mov esi, ecx */
  esi = ecx;
/* 751353: call 0x6c6b7c */
  esp -= 4; W32(esp, 0x751358u); SPILL(); f_6c6b7c(); if (g_unwind) return; RELOAD();
/* 751358: mov dword ptr [esi], 0xa02ae8 */
  W32((uint32_t)(esi), 0xa02ae8u);
/* 75135e: mov eax, esi */
  eax = esi;
/* 751360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751361: ret  */
  esp += 4; SPILL(); return;
}

void f_751380(void) {
  LOAD_REGS();
L_751380: /* 751380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 751384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 751386: mov esi, ecx */
  esi = ecx;
/* 751388: call 0x6c207c */
  esp -= 4; W32(esp, 0x75138du); SPILL(); f_6c207c(); if (g_unwind) return; RELOAD();
/* 75138d: mov dword ptr [esi], 0xa02ae8 */
  W32((uint32_t)(esi), 0xa02ae8u);
/* 751393: mov eax, esi */
  eax = esi;
/* 751395: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751396: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7513b0(void) {
  LOAD_REGS();
L_7513b0: /* 7513b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7513b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7513b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7513b6: mov esi, ecx */
  esi = ecx;
/* 7513b8: call 0x6c9a25 */
  esp -= 4; W32(esp, 0x7513bdu); SPILL(); f_6c9a25(); if (g_unwind) return; RELOAD();
/* 7513bd: mov eax, esi */
  eax = esi;
/* 7513bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7513c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7513e0(void) {
  LOAD_REGS();
L_7513e0: /* 7513e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7513e1: mov esi, ecx */
  esi = ecx;
/* 7513e3: call 0x6c12f3 */
  esp -= 4; W32(esp, 0x7513e8u); SPILL(); f_6c12f3(); if (g_unwind) return; RELOAD();
/* 7513e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7513ed: je 0x7513fe */
  if (zf) goto L_7513fe;
L_7513ef: /* 7513ef: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 7513f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7513f5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7513fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7513fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7513fe: /* 7513fe: mov eax, esi */
  eax = esi;
/* 751400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751401: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751420(void) {
  LOAD_REGS();
L_751420: /* 751420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 751421: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 751425: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751429: mov esi, ecx */
  esi = ecx;
/* 75142b: je 0x751460 */
  if (zf) goto L_751460;
L_75142d: /* 75142d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 751430: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751431: push 0x6c12f3 */
  { uint32_t v = 0x6c12f3u; esp -= 4; W32(esp, v); }
/* 751436: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 751439: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75143a: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 75143f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751440: call 0x99ca3d */
  esp -= 4; W32(esp, 0x751445u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 751445: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751448: je 0x751458 */
  if (zf) goto L_751458;
L_75144a: /* 75144a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 751450: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 751452: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 751454: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751455: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x751458u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_751458: /* 751458: mov eax, edi */
  eax = edi;
/* 75145a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75145b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75145c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75145d: ret 4 */
  esp += 8; SPILL(); return;
L_751460: /* 751460: mov ecx, esi */
  ecx = esi;
/* 751462: call 0x6c12f3 */
  esp -= 4; W32(esp, 0x751467u); SPILL(); f_6c12f3(); if (g_unwind) return; RELOAD();
/* 751467: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75146a: je 0x75147b */
  if (zf) goto L_75147b;
L_75146c: /* 75146c: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 751471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751472: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x751478u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 751478: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75147b: /* 75147b: mov eax, esi */
  eax = esi;
/* 75147d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75147e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75147f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7514b0(void) {
  LOAD_REGS();
L_7514b0: /* 7514b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7514b2: push 0x9c8308 */
  { uint32_t v = 0x9c8308u; esp -= 4; W32(esp, v); }
/* 7514b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7514bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7514be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7514c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7514c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7514c7: mov esi, ecx */
  esi = ecx;
/* 7514c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7514cd: mov dword ptr [esi], 0xa02cf0 */
  W32((uint32_t)(esi), 0xa02cf0u);
/* 7514d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7514db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7514e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7514e1: mov ecx, esi */
  ecx = esi;
/* 7514e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7514eb: call 0x6c5673 */
  esp -= 4; W32(esp, 0x7514f0u); SPILL(); f_6c5673(); if (g_unwind) return; RELOAD();
/* 7514f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7514f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7514f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7514fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7514ff: ret  */
  esp += 4; SPILL(); return;
}

void f_751520(void) {
  LOAD_REGS();
L_751520: /* 751520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751521: mov esi, ecx */
  esi = ecx;
/* 751523: call 0x6c95b1 */
  esp -= 4; W32(esp, 0x751528u); SPILL(); f_6c95b1(); if (g_unwind) return; RELOAD();
/* 751528: mov dword ptr [esi], 0xa02cf0 */
  W32((uint32_t)(esi), 0xa02cf0u);
/* 75152e: mov eax, esi */
  eax = esi;
/* 751530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751531: ret  */
  esp += 4; SPILL(); return;
}

void f_751550(void) {
  LOAD_REGS();
L_751550: /* 751550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751551: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751552: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 751556: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751557: mov esi, ecx */
  esi = ecx;
/* 751559: call 0x6c4d09 */
  esp -= 4; W32(esp, 0x75155eu); SPILL(); f_6c4d09(); if (g_unwind) return; RELOAD();
/* 75155e: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 751564: mov dword ptr [esi], 0xa02cf0 */
  W32((uint32_t)(esi), 0xa02cf0u);
/* 75156a: xor eax, dword ptr [edi + 0x4b4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4b4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751570: mov ecx, dword ptr [esi + 0x4b4] */
  ecx = R32((uint32_t)(esi + 0x4b4u));
/* 751576: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751579: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75157b: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 751581: mov eax, ecx */
  eax = ecx;
/* 751583: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 751589: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75158b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75158e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751590: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 751596: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 75159c: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7515a2: mov eax, dword ptr [edi + 0x4bc] */
  eax = R32((uint32_t)(edi + 0x4bcu));
/* 7515a8: mov dword ptr [esi + 0x4bc], eax */
  W32((uint32_t)(esi + 0x4bcu), eax);
/* 7515ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7515af: mov eax, esi */
  eax = esi;
/* 7515b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7515b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7515e0(void) {
  LOAD_REGS();
L_7515e0: /* 7515e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7515e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7515e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7515e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7515e7: mov esi, ecx */
  esi = ecx;
/* 7515e9: call 0x6ca5a6 */
  esp -= 4; W32(esp, 0x7515eeu); SPILL(); f_6ca5a6(); if (g_unwind) return; RELOAD();
/* 7515ee: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 7515f4: mov eax, dword ptr [esi + 0x4b4] */
  eax = R32((uint32_t)(esi + 0x4b4u));
/* 7515fa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7515fc: mov ecx, dword ptr [esi + 0x4b4] */
  ecx = R32((uint32_t)(esi + 0x4b4u));
/* 751602: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751605: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751607: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 75160d: mov eax, ecx */
  eax = ecx;
/* 75160f: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 751615: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751617: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75161a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75161c: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 751622: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 751628: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 75162e: mov eax, dword ptr [edi + 0x4bc] */
  eax = R32((uint32_t)(edi + 0x4bcu));
/* 751634: mov dword ptr [esi + 0x4bc], eax */
  W32((uint32_t)(esi + 0x4bcu), eax);
/* 75163a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75163b: mov eax, esi */
  eax = esi;
/* 75163d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75163e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751670(void) {
  LOAD_REGS();
L_751670: /* 751670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751671: mov esi, ecx */
  esi = ecx;
/* 751673: call 0x6c2194 */
  esp -= 4; W32(esp, 0x751678u); SPILL(); f_6c2194(); if (g_unwind) return; RELOAD();
/* 751678: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75167d: je 0x75168e */
  if (zf) goto L_75168e;
L_75167f: /* 75167f: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 751684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751685: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75168bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75168b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75168e: /* 75168e: mov eax, esi */
  eax = esi;
/* 751690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751691: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7516b0(void) {
  LOAD_REGS();
L_7516b0: /* 7516b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7516b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7516b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7516b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7516b9: mov esi, ecx */
  esi = ecx;
/* 7516bb: je 0x7516f0 */
  if (zf) goto L_7516f0;
L_7516bd: /* 7516bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7516c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7516c1: push 0x6c2194 */
  { uint32_t v = 0x6c2194u; esp -= 4; W32(esp, v); }
/* 7516c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7516c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7516ca: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 7516cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7516d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7516d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7516d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7516d8: je 0x7516e8 */
  if (zf) goto L_7516e8;
L_7516da: /* 7516da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7516e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7516e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7516e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7516e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7516e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7516e8: /* 7516e8: mov eax, edi */
  eax = edi;
/* 7516ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7516eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7516ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7516ed: ret 4 */
  esp += 8; SPILL(); return;
L_7516f0: /* 7516f0: mov ecx, esi */
  ecx = esi;
/* 7516f2: call 0x6c2194 */
  esp -= 4; W32(esp, 0x7516f7u); SPILL(); f_6c2194(); if (g_unwind) return; RELOAD();
/* 7516f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7516fa: je 0x75170b */
  if (zf) goto L_75170b;
L_7516fc: /* 7516fc: push 0x4c0 */
  { uint32_t v = 0x4c0u; esp -= 4; W32(esp, v); }
/* 751701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751702: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x751708u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 751708: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75170b: /* 75170b: mov eax, esi */
  eax = esi;
/* 75170d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75170e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75170f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751740(void) {
  LOAD_REGS();
L_751740: /* 751740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 751742: push 0x9c8337 */
  { uint32_t v = 0x9c8337u; esp -= 4; W32(esp, v); }
/* 751747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75174d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75174e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 751755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 751756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751757: mov esi, ecx */
  esi = ecx;
/* 751759: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75175d: mov dword ptr [esi], 0xa02ef8 */
  W32((uint32_t)(esi), 0xa02ef8u);
/* 751763: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75176b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x751771u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 751771: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 751777: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75177c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x751782u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 751782: mov ecx, esi */
  ecx = esi;
/* 751784: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75178c: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x751791u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 751791: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 751795: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751796: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75179d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7517a0: ret  */
  esp += 4; SPILL(); return;
}

void f_7517d0(void) {
  LOAD_REGS();
L_7517d0: /* 7517d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7517d2: push 0x9c8358 */
  { uint32_t v = 0x9c8358u; esp -= 4; W32(esp, v); }
/* 7517d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7517dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7517de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7517e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7517e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7517e7: mov esi, ecx */
  esi = ecx;
/* 7517e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7517ed: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7517f2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7517f2: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 7517f8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 751800: mov dword ptr [esi], 0xa02ef8 */
  W32((uint32_t)(esi), 0xa02ef8u);
/* 751806: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x75180cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 75180c: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 751812: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x751818u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 751818: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75181c: mov eax, esi */
  eax = esi;
/* 75181e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75181f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 751826: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 751829: ret  */
  esp += 4; SPILL(); return;
}

void f_751850(void) {
  LOAD_REGS();
L_751850: /* 751850: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 751852: push 0x9c8378 */
  { uint32_t v = 0x9c8378u; esp -= 4; W32(esp, v); }
/* 751857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75185d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75185e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 751865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 751866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751868: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75186c: mov esi, ecx */
  esi = ecx;
/* 75186e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75186f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 751873: call 0x6c1456 */
  esp -= 4; W32(esp, 0x751878u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 751878: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 75187e: mov dword ptr [esi], 0xa02ef8 */
  W32((uint32_t)(esi), 0xa02ef8u);
/* 751884: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 75188a: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 751890: mov cl, byte ptr [edi + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33du))) & 0xffu);
/* 751896: mov byte ptr [esi + 0x33d], cl */
  W8((uint32_t)(esi + 0x33du), (ecx & 0xffu));
/* 75189c: xor edx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7518a2: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 7518a8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7518ab: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7518ad: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 7518b3: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 7518b9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7518bb: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7518be: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7518c0: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 7518c6: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 7518cc: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 7518d2: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 7518d8: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 7518de: lea ecx, [edi + 0x34c] */
  ecx = (uint32_t)(edi + 0x34cu);
/* 7518e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7518e6: lea edx, [esi + 0x34c] */
  edx = (uint32_t)(esi + 0x34cu);
/* 7518ec: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7518ee: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7518f1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7518f4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7518f7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7518fa: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 751900: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 751902: lea eax, [esi + 0x358] */
  eax = (uint32_t)(esi + 0x358u);
/* 751908: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75190a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75190d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 751910: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 751913: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 751919: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75191c: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 751922: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751924: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751927: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751929: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 75192f: mov ecx, dword ptr [edi + 0x368] */
  ecx = R32((uint32_t)(edi + 0x368u));
/* 751935: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 75193b: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 751941: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 751947: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 75194d: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 751953: mov ecx, dword ptr [edi + 0x374] */
  ecx = R32((uint32_t)(edi + 0x374u));
/* 751959: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 75195f: mov edx, dword ptr [edi + 0x378] */
  edx = R32((uint32_t)(edi + 0x378u));
/* 751965: add edi, 0x37c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75196b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75196c: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 751972: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75197a: mov dword ptr [esi + 0x378], edx */
  W32((uint32_t)(esi + 0x378u), edx);
/* 751980: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x751986u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 751986: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75198a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75198b: mov eax, esi */
  eax = esi;
/* 75198d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75198e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 751995: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 751998: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751a00(void) {
  LOAD_REGS();
L_751a00: /* 751a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751a01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751a02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 751a06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751a07: mov esi, ecx */
  esi = ecx;
/* 751a09: call 0x6c5cef */
  esp -= 4; W32(esp, 0x751a0eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 751a0e: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 751a14: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 751a1a: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 751a20: mov cl, byte ptr [edi + 0x33d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33du))) & 0xffu);
/* 751a26: mov byte ptr [esi + 0x33d], cl */
  W8((uint32_t)(esi + 0x33du), (ecx & 0xffu));
/* 751a2c: xor edx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 751a32: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 751a38: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 751a3b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751a3d: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 751a43: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 751a49: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751a4b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 751a4e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751a50: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 751a56: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 751a5c: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 751a62: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 751a68: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 751a6e: lea ecx, [edi + 0x34c] */
  ecx = (uint32_t)(edi + 0x34cu);
/* 751a74: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 751a76: lea edx, [esi + 0x34c] */
  edx = (uint32_t)(esi + 0x34cu);
/* 751a7c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 751a7e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 751a81: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 751a84: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 751a87: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 751a8a: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 751a90: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 751a92: lea eax, [esi + 0x358] */
  eax = (uint32_t)(esi + 0x358u);
/* 751a98: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 751a9a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 751a9d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 751aa0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 751aa3: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 751aa9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 751aac: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 751ab2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751ab4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751ab7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751ab9: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 751abf: mov ecx, dword ptr [edi + 0x368] */
  ecx = R32((uint32_t)(edi + 0x368u));
/* 751ac5: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 751acb: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 751ad1: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 751ad7: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 751add: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 751ae3: mov ecx, dword ptr [edi + 0x374] */
  ecx = R32((uint32_t)(edi + 0x374u));
/* 751ae9: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 751aef: mov edx, dword ptr [edi + 0x378] */
  edx = R32((uint32_t)(edi + 0x378u));
/* 751af5: add edi, 0x37c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 751afb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751afc: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 751b02: mov dword ptr [esi + 0x378], edx */
  W32((uint32_t)(esi + 0x378u), edx);
/* 751b08: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x751b0eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 751b0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 751b0f: mov eax, esi */
  eax = esi;
/* 751b11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751b12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751b70(void) {
  LOAD_REGS();
L_751b70: /* 751b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751b71: mov esi, ecx */
  esi = ecx;
/* 751b73: call 0x6cc2c5 */
  esp -= 4; W32(esp, 0x751b78u); SPILL(); f_6cc2c5(); if (g_unwind) return; RELOAD();
/* 751b78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751b7d: je 0x751b8e */
  if (zf) goto L_751b8e;
L_751b7f: /* 751b7f: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 751b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751b85: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x751b8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 751b8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_751b8e: /* 751b8e: mov eax, esi */
  eax = esi;
/* 751b90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751b91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751bb0(void) {
  LOAD_REGS();
L_751bb0: /* 751bb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 751bb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 751bb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751bb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751bb9: mov esi, ecx */
  esi = ecx;
/* 751bbb: je 0x751bf0 */
  if (zf) goto L_751bf0;
L_751bbd: /* 751bbd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 751bc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751bc1: push 0x6cc2c5 */
  { uint32_t v = 0x6cc2c5u; esp -= 4; W32(esp, v); }
/* 751bc6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 751bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 751bca: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 751bcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751bd0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x751bd5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 751bd5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751bd8: je 0x751be8 */
  if (zf) goto L_751be8;
L_751bda: /* 751bda: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 751be0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 751be2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 751be4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751be5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x751be8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_751be8: /* 751be8: mov eax, edi */
  eax = edi;
/* 751bea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 751beb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751bec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 751bed: ret 4 */
  esp += 8; SPILL(); return;
L_751bf0: /* 751bf0: mov ecx, esi */
  ecx = esi;
/* 751bf2: call 0x6cc2c5 */
  esp -= 4; W32(esp, 0x751bf7u); SPILL(); f_6cc2c5(); if (g_unwind) return; RELOAD();
/* 751bf7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751bfa: je 0x751c0b */
  if (zf) goto L_751c0b;
L_751bfc: /* 751bfc: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 751c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751c02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x751c08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 751c08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_751c0b: /* 751c0b: mov eax, esi */
  eax = esi;
/* 751c0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751c0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 751c0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751c40(void) {
  LOAD_REGS();
L_751c40: /* 751c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 751c42: push 0x9c8398 */
  { uint32_t v = 0x9c8398u; esp -= 4; W32(esp, v); }
/* 751c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 751c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 751c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 751c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 751c56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751c57: mov esi, ecx */
  esi = ecx;
/* 751c59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 751c5d: mov dword ptr [esi], 0xa030d8 */
  W32((uint32_t)(esi), 0xa030d8u);
/* 751c63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 751c6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x751c71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 751c71: mov ecx, esi */
  ecx = esi;
/* 751c73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 751c7b: call 0x6cc2c5 */
  esp -= 4; W32(esp, 0x751c80u); SPILL(); f_6cc2c5(); if (g_unwind) return; RELOAD();
/* 751c80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 751c84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751c85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 751c8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 751c8f: ret  */
  esp += 4; SPILL(); return;
}

void f_751cb0(void) {
  LOAD_REGS();
L_751cb0: /* 751cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751cb1: mov esi, ecx */
  esi = ecx;
/* 751cb3: call 0x6ca911 */
  esp -= 4; W32(esp, 0x751cb8u); SPILL(); f_6ca911(); if (g_unwind) return; RELOAD();
/* 751cb8: mov dword ptr [esi], 0xa030d8 */
  W32((uint32_t)(esi), 0xa030d8u);
/* 751cbe: mov eax, esi */
  eax = esi;
/* 751cc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751cc1: ret  */
  esp += 4; SPILL(); return;
}

void f_751ce0(void) {
  LOAD_REGS();
L_751ce0: /* 751ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751ce1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751ce2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 751ce6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751ce7: mov esi, ecx */
  esi = ecx;
/* 751ce9: call 0x6cbbb3 */
  esp -= 4; W32(esp, 0x751ceeu); SPILL(); f_6cbbb3(); if (g_unwind) return; RELOAD();
/* 751cee: mov dword ptr [esi], 0xa030d8 */
  W32((uint32_t)(esi), 0xa030d8u);
/* 751cf4: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 751cfa: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 751d00: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 751d06: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 751d0c: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 751d12: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 751d18: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 751d1e: xor eax, dword ptr [edi + 0x394] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x394u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751d24: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 751d2a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751d2d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751d2f: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751d35: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 751d3b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751d3d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751d40: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751d42: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 751d48: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 751d4e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751d50: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 751d53: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751d55: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751d5b: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 751d61: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751d63: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751d66: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751d68: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 751d6e: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 751d74: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751d76: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 751d79: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751d7b: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751d81: mov edx, dword ptr [edi + 0x394] */
  edx = R32((uint32_t)(edi + 0x394u));
/* 751d87: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 751d89: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 751d8c: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 751d8e: mov dword ptr [esi + 0x394], edx */
  W32((uint32_t)(esi + 0x394u), edx);
/* 751d94: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 751d9a: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 751da0: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 751da6: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 751dac: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 751db2: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 751db8: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 751dbe: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 751dc4: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 751dca: mov dword ptr [esi + 0x3a8], ecx */
  W32((uint32_t)(esi + 0x3a8u), ecx);
/* 751dd0: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 751dd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 751dd7: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 751ddd: mov eax, esi */
  eax = esi;
/* 751ddf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751de0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751e40(void) {
  LOAD_REGS();
L_751e40: /* 751e40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751e41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751e42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 751e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751e47: mov esi, ecx */
  esi = ecx;
/* 751e49: call 0x6c758b */
  esp -= 4; W32(esp, 0x751e4eu); SPILL(); f_6c758b(); if (g_unwind) return; RELOAD();
/* 751e4e: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 751e54: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 751e5a: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 751e60: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 751e66: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 751e6c: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 751e72: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 751e78: xor eax, dword ptr [edi + 0x394] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x394u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751e7e: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 751e84: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751e87: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751e89: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751e8f: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 751e95: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751e97: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751e9a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751e9c: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 751ea2: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 751ea8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751eaa: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 751ead: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751eaf: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751eb5: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 751ebb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751ebd: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 751ec0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 751ec2: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 751ec8: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 751ece: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751ed0: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 751ed3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 751ed5: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 751edb: mov edx, dword ptr [edi + 0x394] */
  edx = R32((uint32_t)(edi + 0x394u));
/* 751ee1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 751ee3: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 751ee6: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 751ee8: mov dword ptr [esi + 0x394], edx */
  W32((uint32_t)(esi + 0x394u), edx);
/* 751eee: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 751ef4: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 751efa: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 751f00: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 751f06: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 751f0c: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 751f12: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 751f18: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 751f1e: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 751f24: mov dword ptr [esi + 0x3a8], ecx */
  W32((uint32_t)(esi + 0x3a8u), ecx);
/* 751f2a: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 751f30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 751f31: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 751f37: mov eax, esi */
  eax = esi;
/* 751f39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751f3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751f80(void) {
  LOAD_REGS();
L_751f80: /* 751f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751f81: mov esi, ecx */
  esi = ecx;
/* 751f83: call 0x6c9a2f */
  esp -= 4; W32(esp, 0x751f88u); SPILL(); f_6c9a2f(); if (g_unwind) return; RELOAD();
/* 751f88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751f8d: je 0x751f9e */
  if (zf) goto L_751f9e;
L_751f8f: /* 751f8f: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 751f94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751f95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x751f9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 751f9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_751f9e: /* 751f9e: mov eax, esi */
  eax = esi;
/* 751fa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751fa1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_751fc0(void) {
  LOAD_REGS();
L_751fc0: /* 751fc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 751fc1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 751fc5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751fc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751fc9: mov esi, ecx */
  esi = ecx;
/* 751fcb: je 0x752000 */
  if (zf) goto L_752000;
L_751fcd: /* 751fcd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 751fd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751fd1: push 0x6c9a2f */
  { uint32_t v = 0x6c9a2fu; esp -= 4; W32(esp, v); }
/* 751fd6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 751fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 751fda: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 751fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 751fe0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x751fe5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 751fe5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 751fe8: je 0x751ff8 */
  if (zf) goto L_751ff8;
L_751fea: /* 751fea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 751ff0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 751ff2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 751ff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 751ff5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x751ff8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_751ff8: /* 751ff8: mov eax, edi */
  eax = edi;
/* 751ffa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 751ffb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 751ffc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 751ffd: ret 4 */
  esp += 8; SPILL(); return;
L_752000: /* 752000: mov ecx, esi */
  ecx = esi;
/* 752002: call 0x6c9a2f */
  esp -= 4; W32(esp, 0x752007u); SPILL(); f_6c9a2f(); if (g_unwind) return; RELOAD();
/* 752007: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75200a: je 0x75201b */
  if (zf) goto L_75201b;
L_75200c: /* 75200c: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 752011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752012: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x752018u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 752018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75201b: /* 75201b: mov eax, esi */
  eax = esi;
/* 75201d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75201e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75201f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752050(void) {
  LOAD_REGS();
L_752050: /* 752050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 752052: push 0x9c83c7 */
  { uint32_t v = 0x9c83c7u; esp -= 4; W32(esp, v); }
/* 752057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75205d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75205e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 752065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 752066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752067: mov esi, ecx */
  esi = ecx;
/* 752069: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75206d: mov dword ptr [esi], 0xa032b8 */
  W32((uint32_t)(esi), 0xa032b8u);
/* 752073: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75207b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x752081u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 752081: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 752087: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75208c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x752092u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 752092: mov ecx, esi */
  ecx = esi;
/* 752094: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75209c: call 0x6cc2c5 */
  esp -= 4; W32(esp, 0x7520a1u); SPILL(); f_6cc2c5(); if (g_unwind) return; RELOAD();
/* 7520a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7520a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7520a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7520ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7520b0: ret  */
  esp += 4; SPILL(); return;
}

void f_7520e0(void) {
  LOAD_REGS();
L_7520e0: /* 7520e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7520e2: push 0x9c83e8 */
  { uint32_t v = 0x9c83e8u; esp -= 4; W32(esp, v); }
/* 7520e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7520ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7520ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7520f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7520f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7520f7: mov esi, ecx */
  esi = ecx;
/* 7520f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7520fd: call 0x6ca911 */
  esp -= 4; W32(esp, 0x752102u); SPILL(); f_6ca911(); if (g_unwind) return; RELOAD();
/* 752102: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 752108: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 752110: mov dword ptr [esi], 0xa032b8 */
  W32((uint32_t)(esi), 0xa032b8u);
/* 752116: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x75211cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 75211c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 752120: mov eax, esi */
  eax = esi;
/* 752122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752123: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75212a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75212d: ret  */
  esp += 4; SPILL(); return;
}

void f_752150(void) {
  LOAD_REGS();
L_752150: /* 752150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 752152: push 0x9c8408 */
  { uint32_t v = 0x9c8408u; esp -= 4; W32(esp, v); }
/* 752157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75215d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75215e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 752165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 752166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752167: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752168: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75216c: mov esi, ecx */
  esi = ecx;
/* 75216e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75216f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 752173: call 0x6cbbb3 */
  esp -= 4; W32(esp, 0x752178u); SPILL(); f_6cbbb3(); if (g_unwind) return; RELOAD();
/* 752178: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 75217e: mov dword ptr [esi], 0xa032b8 */
  W32((uint32_t)(esi), 0xa032b8u);
/* 752184: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 75218a: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 752190: xor ecx, dword ptr [edi + 0x38c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752196: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 75219c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75219f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7521a1: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 7521a7: mov ecx, eax */
  ecx = eax;
/* 7521a9: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 7521af: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7521b1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7521b4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7521b6: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 7521bc: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 7521c2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7521c4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7521c7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7521c9: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 7521cf: mov edx, dword ptr [edi + 0x38c] */
  edx = R32((uint32_t)(edi + 0x38cu));
/* 7521d5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7521d7: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7521da: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7521dc: lea eax, [edi + 0x390] */
  eax = (uint32_t)(edi + 0x390u);
/* 7521e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7521e3: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 7521e9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7521f1: mov dword ptr [esi + 0x38c], edx */
  W32((uint32_t)(esi + 0x38cu), edx);
/* 7521f7: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7521fdu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7521fd: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 752203: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 752209: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 75220f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 752213: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 752219: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75221a: mov eax, esi */
  eax = esi;
/* 75221c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75221d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 752224: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 752227: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752270(void) {
  LOAD_REGS();
L_752270: /* 752270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752271: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752272: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 752276: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752277: mov esi, ecx */
  esi = ecx;
/* 752279: call 0x6c758b */
  esp -= 4; W32(esp, 0x75227eu); SPILL(); f_6c758b(); if (g_unwind) return; RELOAD();
/* 75227e: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 752284: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 75228a: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 752290: xor ecx, dword ptr [edi + 0x38c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752296: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 75229c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75229f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7522a1: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 7522a7: mov ecx, eax */
  ecx = eax;
/* 7522a9: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 7522af: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7522b1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7522b4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7522b6: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 7522bc: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 7522c2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7522c4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7522c7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7522c9: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 7522cf: mov edx, dword ptr [edi + 0x38c] */
  edx = R32((uint32_t)(edi + 0x38cu));
/* 7522d5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7522d7: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7522da: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7522dc: lea eax, [edi + 0x390] */
  eax = (uint32_t)(edi + 0x390u);
/* 7522e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7522e3: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 7522e9: mov dword ptr [esi + 0x38c], edx */
  W32((uint32_t)(esi + 0x38cu), edx);
/* 7522ef: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7522f5u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7522f5: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 7522fb: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 752301: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 752307: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 752308: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 75230e: mov eax, esi */
  eax = esi;
/* 752310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752311: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752350(void) {
  LOAD_REGS();
L_752350: /* 752350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752351: mov esi, ecx */
  esi = ecx;
/* 752353: call 0x6c5d7b */
  esp -= 4; W32(esp, 0x752358u); SPILL(); f_6c5d7b(); if (g_unwind) return; RELOAD();
/* 752358: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75235d: je 0x75236e */
  if (zf) goto L_75236e;
L_75235f: /* 75235f: push 0x3a4 */
  { uint32_t v = 0x3a4u; esp -= 4; W32(esp, v); }
/* 752364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752365: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75236bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75236b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75236e: /* 75236e: mov eax, esi */
  eax = esi;
/* 752370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752371: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752390(void) {
  LOAD_REGS();
L_752390: /* 752390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 752391: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 752395: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 752398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752399: mov esi, ecx */
  esi = ecx;
/* 75239b: je 0x7523d0 */
  if (zf) goto L_7523d0;
L_75239d: /* 75239d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7523a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7523a1: push 0x6c5d7b */
  { uint32_t v = 0x6c5d7bu; esp -= 4; W32(esp, v); }
/* 7523a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7523a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7523aa: push 0x3a4 */
  { uint32_t v = 0x3a4u; esp -= 4; W32(esp, v); }
/* 7523af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7523b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7523b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7523b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7523b8: je 0x7523c8 */
  if (zf) goto L_7523c8;
L_7523ba: /* 7523ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7523c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7523c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7523c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7523c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7523c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7523c8: /* 7523c8: mov eax, edi */
  eax = edi;
/* 7523ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7523cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7523cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7523cd: ret 4 */
  esp += 8; SPILL(); return;
L_7523d0: /* 7523d0: mov ecx, esi */
  ecx = esi;
/* 7523d2: call 0x6c5d7b */
  esp -= 4; W32(esp, 0x7523d7u); SPILL(); f_6c5d7b(); if (g_unwind) return; RELOAD();
/* 7523d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7523da: je 0x7523eb */
  if (zf) goto L_7523eb;
L_7523dc: /* 7523dc: push 0x3a4 */
  { uint32_t v = 0x3a4u; esp -= 4; W32(esp, v); }
/* 7523e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7523e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7523e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7523e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7523eb: /* 7523eb: mov eax, esi */
  eax = esi;
/* 7523ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7523ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7523ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752420(void) {
  LOAD_REGS();
L_752420: /* 752420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 752422: push 0x9c8455 */
  { uint32_t v = 0x9c8455u; esp -= 4; W32(esp, v); }
/* 752427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75242d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75242e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 752435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 752436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752437: mov esi, ecx */
  esi = ecx;
/* 752439: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75243d: mov dword ptr [esi], 0xa03498 */
  W32((uint32_t)(esi), 0xa03498u);
/* 752443: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 75244b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x752451u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 752451: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 752457: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75245c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x752462u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 752462: lea ecx, [esi + 0x41c] */
  ecx = (uint32_t)(esi + 0x41cu);
/* 752468: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75246d: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x752473u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 752473: lea ecx, [esi + 0x410] */
  ecx = (uint32_t)(esi + 0x410u);
/* 752479: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75247e: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x752484u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 752484: mov ecx, esi */
  ecx = esi;
/* 752486: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75248e: call 0x6cc2c5 */
  esp -= 4; W32(esp, 0x752493u); SPILL(); f_6cc2c5(); if (g_unwind) return; RELOAD();
/* 752493: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 752497: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752498: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75249f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7524a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7524e0(void) {
  LOAD_REGS();
L_7524e0: /* 7524e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7524e2: push 0x9c8496 */
  { uint32_t v = 0x9c8496u; esp -= 4; W32(esp, v); }
/* 7524e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7524ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7524ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7524f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7524f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7524f7: mov esi, ecx */
  esi = ecx;
/* 7524f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7524fd: call 0x6ca911 */
  esp -= 4; W32(esp, 0x752502u); SPILL(); f_6ca911(); if (g_unwind) return; RELOAD();
/* 752502: lea ecx, [esi + 0x3f8] */
  ecx = (uint32_t)(esi + 0x3f8u);
/* 752508: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 752510: mov dword ptr [esi], 0xa03498 */
  W32((uint32_t)(esi), 0xa03498u);
/* 752516: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x75251cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 75251c: lea ecx, [esi + 0x410] */
  ecx = (uint32_t)(esi + 0x410u);
/* 752522: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x752528u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 752528: lea ecx, [esi + 0x41c] */
  ecx = (uint32_t)(esi + 0x41cu);
/* 75252e: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 752533: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x752539u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 752539: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 75253f: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 752544: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x75254au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 75254a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75254e: mov eax, esi */
  eax = esi;
/* 752550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752551: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 752558: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75255b: ret  */
  esp += 4; SPILL(); return;
}

void f_752580(void) {
  LOAD_REGS();
L_752580: /* 752580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 752582: push 0x9c84d6 */
  { uint32_t v = 0x9c84d6u; esp -= 4; W32(esp, v); }
/* 752587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75258d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75258e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 752595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 752596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752598: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75259c: mov esi, ecx */
  esi = ecx;
/* 75259e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75259f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7525a3: call 0x6cbbb3 */
  esp -= 4; W32(esp, 0x7525a8u); SPILL(); f_6cbbb3(); if (g_unwind) return; RELOAD();
/* 7525a8: mov dword ptr [esi], 0xa03498 */
  W32((uint32_t)(esi), 0xa03498u);
/* 7525ae: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 7525b4: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 7525ba: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 7525c0: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 7525c6: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 7525cc: mov ecx, dword ptr [esi + 0x398] */
  ecx = R32((uint32_t)(esi + 0x398u));
/* 7525d2: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 7525d8: mov al, byte ptr [edi + 0x394] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x394u))) & 0xffu);
/* 7525de: mov byte ptr [esi + 0x394], al */
  W8((uint32_t)(esi + 0x394u), (eax & 0xffu));
/* 7525e4: xor ecx, dword ptr [edi + 0x398] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x398u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7525ea: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 7525f0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7525f3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7525f5: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 7525fb: mov ecx, eax */
  ecx = eax;
/* 7525fd: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 752603: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752605: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752608: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75260a: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752610: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 752616: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752618: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75261b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75261d: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 752623: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 752629: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75262b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75262e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752630: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752636: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 75263c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75263e: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752641: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752643: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 752649: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 75264f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752651: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752654: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752656: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 75265c: mov edx, dword ptr [edi + 0x398] */
  edx = R32((uint32_t)(edi + 0x398u));
/* 752662: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752664: and edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752667: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752669: mov dword ptr [esi + 0x398], edx */
  W32((uint32_t)(esi + 0x398u), edx);
/* 75266f: mov eax, dword ptr [edi + 0x39c] */
  eax = R32((uint32_t)(edi + 0x39cu));
/* 752675: mov dword ptr [esi + 0x39c], eax */
  W32((uint32_t)(esi + 0x39cu), eax);
/* 75267b: mov ecx, dword ptr [edi + 0x3a0] */
  ecx = R32((uint32_t)(edi + 0x3a0u));
/* 752681: mov dword ptr [esi + 0x3a0], ecx */
  W32((uint32_t)(esi + 0x3a0u), ecx);
/* 752687: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 75268d: mov dword ptr [esi + 0x3a4], edx */
  W32((uint32_t)(esi + 0x3a4u), edx);
/* 752693: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 752699: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75269b: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7526a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7526a3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7526a6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7526a9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7526ac: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7526af: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 7526b5: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 7526bb: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 7526c1: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 7526c7: lea eax, [edi + 0x3bc] */
  eax = (uint32_t)(edi + 0x3bcu);
/* 7526cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7526cf: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 7526d5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7526d7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7526da: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7526dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7526e0: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7526e8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7526eb: lea ecx, [edi + 0x3c8] */
  ecx = (uint32_t)(edi + 0x3c8u);
/* 7526f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7526f3: lea edx, [esi + 0x3c8] */
  edx = (uint32_t)(esi + 0x3c8u);
/* 7526f9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7526fb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7526fe: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 752701: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 752704: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 752707: mov edx, dword ptr [edi + 0x3d4] */
  edx = R32((uint32_t)(edi + 0x3d4u));
/* 75270d: mov dword ptr [esi + 0x3d4], edx */
  W32((uint32_t)(esi + 0x3d4u), edx);
/* 752713: mov eax, dword ptr [edi + 0x3d8] */
  eax = R32((uint32_t)(edi + 0x3d8u));
/* 752719: mov edx, dword ptr [esi + 0x3e0] */
  edx = R32((uint32_t)(esi + 0x3e0u));
/* 75271f: mov dword ptr [esi + 0x3d8], eax */
  W32((uint32_t)(esi + 0x3d8u), eax);
/* 752725: mov ecx, dword ptr [edi + 0x3dc] */
  ecx = R32((uint32_t)(edi + 0x3dcu));
/* 75272b: mov dword ptr [esi + 0x3dc], ecx */
  W32((uint32_t)(esi + 0x3dcu), ecx);
/* 752731: xor edx, dword ptr [edi + 0x3e0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752737: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 75273d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752740: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752742: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 752748: mov ecx, dword ptr [edi + 0x3e0] */
  ecx = R32((uint32_t)(edi + 0x3e0u));
/* 75274e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752750: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752753: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752755: mov dword ptr [esi + 0x3e0], ecx */
  W32((uint32_t)(esi + 0x3e0u), ecx);
/* 75275b: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 752761: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 752767: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 75276d: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 752773: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 752779: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 75277f: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 752785: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 75278b: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 752791: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 752797: lea ecx, [edi + 0x3f8] */
  ecx = (uint32_t)(edi + 0x3f8u);
/* 75279d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75279f: lea edx, [esi + 0x3f8] */
  edx = (uint32_t)(esi + 0x3f8u);
/* 7527a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7527a7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7527aa: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7527ad: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7527b0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7527b3: mov dl, byte ptr [edi + 0x404] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x404u))) & 0xffu);
/* 7527b9: mov byte ptr [esi + 0x404], dl */
  W8((uint32_t)(esi + 0x404u), (edx & 0xffu));
/* 7527bf: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 7527c5: mov dword ptr [esi + 0x408], eax */
  W32((uint32_t)(esi + 0x408u), eax);
/* 7527cb: mov ecx, dword ptr [edi + 0x40c] */
  ecx = R32((uint32_t)(edi + 0x40cu));
/* 7527d1: lea edx, [edi + 0x410] */
  edx = (uint32_t)(edi + 0x410u);
/* 7527d7: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 7527dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7527de: lea ecx, [esi + 0x410] */
  ecx = (uint32_t)(esi + 0x410u);
/* 7527e4: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7527eau); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7527ea: lea eax, [edi + 0x41c] */
  eax = (uint32_t)(edi + 0x41cu);
/* 7527f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7527f1: lea ecx, [esi + 0x41c] */
  ecx = (uint32_t)(esi + 0x41cu);
/* 7527f7: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7527fc: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x752802u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 752802: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 752808: mov edx, dword ptr [esi + 0x42c] */
  edx = R32((uint32_t)(esi + 0x42cu));
/* 75280e: mov dword ptr [esi + 0x428], ecx */
  W32((uint32_t)(esi + 0x428u), ecx);
/* 752814: xor edx, dword ptr [edi + 0x42c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x42cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75281a: mov eax, dword ptr [esi + 0x42c] */
  eax = R32((uint32_t)(esi + 0x42cu));
/* 752820: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752823: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752825: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 75282b: mov ecx, eax */
  ecx = eax;
/* 75282d: mov eax, dword ptr [edi + 0x42c] */
  eax = R32((uint32_t)(edi + 0x42cu));
/* 752833: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752835: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752838: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75283a: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 752840: mov ecx, dword ptr [edi + 0x42c] */
  ecx = R32((uint32_t)(edi + 0x42cu));
/* 752846: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752848: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 75284d: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752850: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752852: lea edx, [edi + 0x430] */
  edx = (uint32_t)(edi + 0x430u);
/* 752858: mov dword ptr [esi + 0x42c], ecx */
  W32((uint32_t)(esi + 0x42cu), ecx);
/* 75285e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75285f: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 752865: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75286bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75286b: mov eax, dword ptr [edi + 0x43c] */
  eax = R32((uint32_t)(edi + 0x43cu));
/* 752871: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
/* 752877: mov ecx, dword ptr [edi + 0x440] */
  ecx = R32((uint32_t)(edi + 0x440u));
/* 75287d: mov dword ptr [esi + 0x440], ecx */
  W32((uint32_t)(esi + 0x440u), ecx);
/* 752883: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 752889: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 75288f: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 752895: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 75289b: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 7528a1: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 7528a7: mov edx, dword ptr [edi + 0x450] */
  edx = R32((uint32_t)(edi + 0x450u));
/* 7528ad: mov dword ptr [esi + 0x450], edx */
  W32((uint32_t)(esi + 0x450u), edx);
/* 7528b3: mov eax, dword ptr [edi + 0x454] */
  eax = R32((uint32_t)(edi + 0x454u));
/* 7528b9: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
/* 7528bf: mov ecx, dword ptr [edi + 0x458] */
  ecx = R32((uint32_t)(edi + 0x458u));
/* 7528c5: mov eax, dword ptr [esi + 0x460] */
  eax = R32((uint32_t)(esi + 0x460u));
/* 7528cb: mov dword ptr [esi + 0x458], ecx */
  W32((uint32_t)(esi + 0x458u), ecx);
/* 7528d1: mov dl, byte ptr [edi + 0x45c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x45cu))) & 0xffu);
/* 7528d7: mov byte ptr [esi + 0x45c], dl */
  W8((uint32_t)(esi + 0x45cu), (edx & 0xffu));
/* 7528dd: xor eax, dword ptr [edi + 0x460] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x460u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7528e3: mov ecx, dword ptr [esi + 0x460] */
  ecx = R32((uint32_t)(esi + 0x460u));
/* 7528e9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7528ec: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7528ee: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 7528f4: mov eax, dword ptr [edi + 0x460] */
  eax = R32((uint32_t)(edi + 0x460u));
/* 7528fa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7528fc: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7528ff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752901: mov dword ptr [esi + 0x460], eax */
  W32((uint32_t)(esi + 0x460u), eax);
/* 752907: mov ecx, dword ptr [edi + 0x460] */
  ecx = R32((uint32_t)(edi + 0x460u));
/* 75290d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75290f: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752912: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752914: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 75291a: mov eax, dword ptr [edi + 0x460] */
  eax = R32((uint32_t)(edi + 0x460u));
/* 752920: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752922: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752925: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752927: mov dword ptr [esi + 0x460], eax */
  W32((uint32_t)(esi + 0x460u), eax);
/* 75292d: mov ecx, dword ptr [edi + 0x460] */
  ecx = R32((uint32_t)(edi + 0x460u));
/* 752933: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752935: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752938: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75293a: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 752940: mov edx, dword ptr [edi + 0x464] */
  edx = R32((uint32_t)(edi + 0x464u));
/* 752946: mov dword ptr [esi + 0x464], edx */
  W32((uint32_t)(esi + 0x464u), edx);
/* 75294c: mov eax, dword ptr [edi + 0x468] */
  eax = R32((uint32_t)(edi + 0x468u));
/* 752952: mov dword ptr [esi + 0x468], eax */
  W32((uint32_t)(esi + 0x468u), eax);
/* 752958: mov cl, byte ptr [edi + 0x46c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x46cu))) & 0xffu);
/* 75295e: mov byte ptr [esi + 0x46c], cl */
  W8((uint32_t)(esi + 0x46cu), (ecx & 0xffu));
/* 752964: mov edx, dword ptr [edi + 0x470] */
  edx = R32((uint32_t)(edi + 0x470u));
/* 75296a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75296e: mov dword ptr [esi + 0x470], edx */
  W32((uint32_t)(esi + 0x470u), edx);
/* 752974: mov eax, dword ptr [edi + 0x474] */
  eax = R32((uint32_t)(edi + 0x474u));
/* 75297a: mov dword ptr [esi + 0x474], eax */
  W32((uint32_t)(esi + 0x474u), eax);
/* 752980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 752981: mov eax, esi */
  eax = esi;
/* 752983: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752984: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75298b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75298e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752ab0(void) {
  LOAD_REGS();
L_752ab0: /* 752ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752ab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752ab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 752ab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752ab7: mov esi, ecx */
  esi = ecx;
/* 752ab9: call 0x6c758b */
  esp -= 4; W32(esp, 0x752abeu); SPILL(); f_6c758b(); if (g_unwind) return; RELOAD();
/* 752abe: mov eax, dword ptr [edi + 0x388] */
  eax = R32((uint32_t)(edi + 0x388u));
/* 752ac4: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 752aca: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 752ad0: mov dword ptr [esi + 0x38c], ecx */
  W32((uint32_t)(esi + 0x38cu), ecx);
/* 752ad6: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 752adc: mov ecx, dword ptr [esi + 0x398] */
  ecx = R32((uint32_t)(esi + 0x398u));
/* 752ae2: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 752ae8: mov al, byte ptr [edi + 0x394] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x394u))) & 0xffu);
/* 752aee: mov byte ptr [esi + 0x394], al */
  W8((uint32_t)(esi + 0x394u), (eax & 0xffu));
/* 752af4: xor ecx, dword ptr [edi + 0x398] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x398u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752afa: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 752b00: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752b03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b05: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752b0b: mov ecx, eax */
  ecx = eax;
/* 752b0d: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 752b13: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b15: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752b18: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b1a: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752b20: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 752b26: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752b28: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752b2b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752b2d: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 752b33: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 752b39: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b3b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752b3e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b40: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752b46: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 752b4c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752b4e: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752b51: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752b53: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 752b59: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 752b5f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b61: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752b64: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752b66: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 752b6c: mov edx, dword ptr [edi + 0x398] */
  edx = R32((uint32_t)(edi + 0x398u));
/* 752b72: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752b74: and edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752b77: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752b79: mov dword ptr [esi + 0x398], edx */
  W32((uint32_t)(esi + 0x398u), edx);
/* 752b7f: mov eax, dword ptr [edi + 0x39c] */
  eax = R32((uint32_t)(edi + 0x39cu));
/* 752b85: mov dword ptr [esi + 0x39c], eax */
  W32((uint32_t)(esi + 0x39cu), eax);
/* 752b8b: mov ecx, dword ptr [edi + 0x3a0] */
  ecx = R32((uint32_t)(edi + 0x3a0u));
/* 752b91: mov dword ptr [esi + 0x3a0], ecx */
  W32((uint32_t)(esi + 0x3a0u), ecx);
/* 752b97: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 752b9d: mov dword ptr [esi + 0x3a4], edx */
  W32((uint32_t)(esi + 0x3a4u), edx);
/* 752ba3: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 752ba9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 752bab: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 752bb1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 752bb3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 752bb6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 752bb9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 752bbc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 752bbf: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 752bc5: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 752bcb: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 752bd1: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 752bd7: lea eax, [edi + 0x3bc] */
  eax = (uint32_t)(edi + 0x3bcu);
/* 752bdd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 752bdf: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 752be5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 752be7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 752bea: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 752bed: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 752bf0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 752bf3: lea ecx, [edi + 0x3c8] */
  ecx = (uint32_t)(edi + 0x3c8u);
/* 752bf9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 752bfb: lea edx, [esi + 0x3c8] */
  edx = (uint32_t)(esi + 0x3c8u);
/* 752c01: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 752c03: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 752c06: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 752c09: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 752c0c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 752c0f: mov edx, dword ptr [edi + 0x3d4] */
  edx = R32((uint32_t)(edi + 0x3d4u));
/* 752c15: mov dword ptr [esi + 0x3d4], edx */
  W32((uint32_t)(esi + 0x3d4u), edx);
/* 752c1b: mov eax, dword ptr [edi + 0x3d8] */
  eax = R32((uint32_t)(edi + 0x3d8u));
/* 752c21: mov edx, dword ptr [esi + 0x3e0] */
  edx = R32((uint32_t)(esi + 0x3e0u));
/* 752c27: mov dword ptr [esi + 0x3d8], eax */
  W32((uint32_t)(esi + 0x3d8u), eax);
/* 752c2d: mov ecx, dword ptr [edi + 0x3dc] */
  ecx = R32((uint32_t)(edi + 0x3dcu));
/* 752c33: mov dword ptr [esi + 0x3dc], ecx */
  W32((uint32_t)(esi + 0x3dcu), ecx);
/* 752c39: xor edx, dword ptr [edi + 0x3e0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752c3f: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 752c45: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752c48: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752c4a: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 752c50: mov ecx, dword ptr [edi + 0x3e0] */
  ecx = R32((uint32_t)(edi + 0x3e0u));
/* 752c56: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752c58: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752c5b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752c5d: mov dword ptr [esi + 0x3e0], ecx */
  W32((uint32_t)(esi + 0x3e0u), ecx);
/* 752c63: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 752c69: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 752c6f: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 752c75: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 752c7b: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 752c81: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 752c87: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 752c8d: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 752c93: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 752c99: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 752c9f: lea ecx, [edi + 0x3f8] */
  ecx = (uint32_t)(edi + 0x3f8u);
/* 752ca5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 752ca7: lea edx, [esi + 0x3f8] */
  edx = (uint32_t)(esi + 0x3f8u);
/* 752cad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 752caf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 752cb2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 752cb5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 752cb8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 752cbb: mov dl, byte ptr [edi + 0x404] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x404u))) & 0xffu);
/* 752cc1: mov byte ptr [esi + 0x404], dl */
  W8((uint32_t)(esi + 0x404u), (edx & 0xffu));
/* 752cc7: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 752ccd: mov dword ptr [esi + 0x408], eax */
  W32((uint32_t)(esi + 0x408u), eax);
/* 752cd3: mov ecx, dword ptr [edi + 0x40c] */
  ecx = R32((uint32_t)(edi + 0x40cu));
/* 752cd9: lea edx, [edi + 0x410] */
  edx = (uint32_t)(edi + 0x410u);
/* 752cdf: mov dword ptr [esi + 0x40c], ecx */
  W32((uint32_t)(esi + 0x40cu), ecx);
/* 752ce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 752ce6: lea ecx, [esi + 0x410] */
  ecx = (uint32_t)(esi + 0x410u);
/* 752cec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x752cf2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 752cf2: lea eax, [edi + 0x41c] */
  eax = (uint32_t)(edi + 0x41cu);
/* 752cf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 752cf9: lea ecx, [esi + 0x41c] */
  ecx = (uint32_t)(esi + 0x41cu);
/* 752cff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x752d05u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 752d05: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 752d0b: mov edx, dword ptr [esi + 0x42c] */
  edx = R32((uint32_t)(esi + 0x42cu));
/* 752d11: mov dword ptr [esi + 0x428], ecx */
  W32((uint32_t)(esi + 0x428u), ecx);
/* 752d17: xor edx, dword ptr [edi + 0x42c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x42cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 752d1d: mov eax, dword ptr [esi + 0x42c] */
  eax = R32((uint32_t)(esi + 0x42cu));
/* 752d23: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 752d26: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752d28: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 752d2e: mov ecx, eax */
  ecx = eax;
/* 752d30: mov eax, dword ptr [edi + 0x42c] */
  eax = R32((uint32_t)(edi + 0x42cu));
/* 752d36: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752d38: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752d3b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752d3d: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 752d43: mov ecx, dword ptr [edi + 0x42c] */
  ecx = R32((uint32_t)(edi + 0x42cu));
/* 752d49: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752d4b: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752d4e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752d50: lea edx, [edi + 0x430] */
  edx = (uint32_t)(edi + 0x430u);
/* 752d56: mov dword ptr [esi + 0x42c], ecx */
  W32((uint32_t)(esi + 0x42cu), ecx);
/* 752d5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 752d5d: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 752d63: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x752d69u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 752d69: mov eax, dword ptr [edi + 0x43c] */
  eax = R32((uint32_t)(edi + 0x43cu));
/* 752d6f: mov dword ptr [esi + 0x43c], eax */
  W32((uint32_t)(esi + 0x43cu), eax);
/* 752d75: mov ecx, dword ptr [edi + 0x440] */
  ecx = R32((uint32_t)(edi + 0x440u));
/* 752d7b: mov dword ptr [esi + 0x440], ecx */
  W32((uint32_t)(esi + 0x440u), ecx);
/* 752d81: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 752d87: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 752d8d: mov eax, dword ptr [edi + 0x448] */
  eax = R32((uint32_t)(edi + 0x448u));
/* 752d93: mov dword ptr [esi + 0x448], eax */
  W32((uint32_t)(esi + 0x448u), eax);
/* 752d99: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 752d9f: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 752da5: mov edx, dword ptr [edi + 0x450] */
  edx = R32((uint32_t)(edi + 0x450u));
/* 752dab: mov dword ptr [esi + 0x450], edx */
  W32((uint32_t)(esi + 0x450u), edx);
/* 752db1: mov eax, dword ptr [edi + 0x454] */
  eax = R32((uint32_t)(edi + 0x454u));
/* 752db7: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
/* 752dbd: mov ecx, dword ptr [edi + 0x458] */
  ecx = R32((uint32_t)(edi + 0x458u));
/* 752dc3: mov eax, dword ptr [esi + 0x460] */
  eax = R32((uint32_t)(esi + 0x460u));
/* 752dc9: mov dword ptr [esi + 0x458], ecx */
  W32((uint32_t)(esi + 0x458u), ecx);
/* 752dcf: mov dl, byte ptr [edi + 0x45c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x45cu))) & 0xffu);
/* 752dd5: mov byte ptr [esi + 0x45c], dl */
  W8((uint32_t)(esi + 0x45cu), (edx & 0xffu));
/* 752ddb: xor eax, dword ptr [edi + 0x460] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x460u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752de1: mov ecx, dword ptr [esi + 0x460] */
  ecx = R32((uint32_t)(esi + 0x460u));
/* 752de7: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752dea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752dec: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 752df2: mov eax, dword ptr [edi + 0x460] */
  eax = R32((uint32_t)(edi + 0x460u));
/* 752df8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752dfa: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752dfd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752dff: mov dword ptr [esi + 0x460], eax */
  W32((uint32_t)(esi + 0x460u), eax);
/* 752e05: mov ecx, dword ptr [edi + 0x460] */
  ecx = R32((uint32_t)(edi + 0x460u));
/* 752e0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752e0d: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752e10: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752e12: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 752e18: mov eax, dword ptr [edi + 0x460] */
  eax = R32((uint32_t)(edi + 0x460u));
/* 752e1e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752e20: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 752e23: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 752e25: mov dword ptr [esi + 0x460], eax */
  W32((uint32_t)(esi + 0x460u), eax);
/* 752e2b: mov ecx, dword ptr [edi + 0x460] */
  ecx = R32((uint32_t)(edi + 0x460u));
/* 752e31: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752e33: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 752e36: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 752e38: mov dword ptr [esi + 0x460], ecx */
  W32((uint32_t)(esi + 0x460u), ecx);
/* 752e3e: mov edx, dword ptr [edi + 0x464] */
  edx = R32((uint32_t)(edi + 0x464u));
/* 752e44: mov dword ptr [esi + 0x464], edx */
  W32((uint32_t)(esi + 0x464u), edx);
/* 752e4a: mov eax, dword ptr [edi + 0x468] */
  eax = R32((uint32_t)(edi + 0x468u));
/* 752e50: mov dword ptr [esi + 0x468], eax */
  W32((uint32_t)(esi + 0x468u), eax);
/* 752e56: mov cl, byte ptr [edi + 0x46c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x46cu))) & 0xffu);
/* 752e5c: mov byte ptr [esi + 0x46c], cl */
  W8((uint32_t)(esi + 0x46cu), (ecx & 0xffu));
/* 752e62: mov edx, dword ptr [edi + 0x470] */
  edx = R32((uint32_t)(edi + 0x470u));
/* 752e68: mov dword ptr [esi + 0x470], edx */
  W32((uint32_t)(esi + 0x470u), edx);
/* 752e6e: mov eax, dword ptr [edi + 0x474] */
  eax = R32((uint32_t)(edi + 0x474u));
/* 752e74: mov dword ptr [esi + 0x474], eax */
  W32((uint32_t)(esi + 0x474u), eax);
/* 752e7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 752e7b: mov eax, esi */
  eax = esi;
/* 752e7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752e7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752f90(void) {
  LOAD_REGS();
L_752f90: /* 752f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752f91: mov esi, ecx */
  esi = ecx;
/* 752f93: call 0x6c1d61 */
  esp -= 4; W32(esp, 0x752f98u); SPILL(); f_6c1d61(); if (g_unwind) return; RELOAD();
/* 752f98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 752f9d: je 0x752fae */
  if (zf) goto L_752fae;
L_752f9f: /* 752f9f: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 752fa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752fa5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x752fabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 752fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_752fae: /* 752fae: mov eax, esi */
  eax = esi;
/* 752fb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 752fb1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_752fd0(void) {
  LOAD_REGS();
L_752fd0: /* 752fd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 752fd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 752fd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 752fd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752fd9: mov esi, ecx */
  esi = ecx;
/* 752fdb: je 0x753010 */
  if (zf) goto L_753010;
L_752fdd: /* 752fdd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 752fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 752fe1: push 0x6c1d61 */
  { uint32_t v = 0x6c1d61u; esp -= 4; W32(esp, v); }
/* 752fe6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 752fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 752fea: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 752fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 752ff0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x752ff5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 752ff5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 752ff8: je 0x753008 */
  if (zf) goto L_753008;
L_752ffa: /* 752ffa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 753000: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 753002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 753004: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753005: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x753008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_753008: /* 753008: mov eax, edi */
  eax = edi;
/* 75300a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75300b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75300c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75300d: ret 4 */
  esp += 8; SPILL(); return;
L_753010: /* 753010: mov ecx, esi */
  ecx = esi;
/* 753012: call 0x6c1d61 */
  esp -= 4; W32(esp, 0x753017u); SPILL(); f_6c1d61(); if (g_unwind) return; RELOAD();
/* 753017: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75301a: je 0x75302b */
  if (zf) goto L_75302b;
L_75301c: /* 75301c: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 753021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753022: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x753028u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 753028: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75302b: /* 75302b: mov eax, esi */
  eax = esi;
/* 75302d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75302e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75302f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753060(void) {
  LOAD_REGS();
L_753060: /* 753060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 753062: push 0x9c8593 */
  { uint32_t v = 0x9c8593u; esp -= 4; W32(esp, v); }
/* 753067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75306e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 753075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753077: mov esi, ecx */
  esi = ecx;
/* 753079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75307d: mov dword ptr [esi], 0xa03678 */
  W32((uint32_t)(esi), 0xa03678u);
/* 753083: mov dword ptr [esp + 0x10], 9 */
  W32((uint32_t)(esp + 0x10u), 0x9u);
/* 75308b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x753091u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 753091: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 753096: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753097: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 753099: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75309b: lea ecx, [esi + 0x498] */
  ecx = (uint32_t)(esi + 0x498u);
/* 7530a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7530a2: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 7530a7: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7530acu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7530ac: push 0x6ca0b5 */
  { uint32_t v = 0x6ca0b5u; esp -= 4; W32(esp, v); }
/* 7530b1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7530b3: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7530b5: lea edx, [esi + 0x3d0] */
  edx = (uint32_t)(esi + 0x3d0u);
/* 7530bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7530bc: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 7530c1: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7530c6u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7530c6: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 7530cc: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7530d1: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7530d7u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7530d7: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7530dd: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7530e2: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7530e8u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7530e8: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7530ee: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7530f3: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7530f9u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7530f9: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 7530ff: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 753104: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75310au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75310a: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 753110: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 753115: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75311bu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75311b: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 753121: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 753126: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75312cu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75312c: lea ecx, [esi + 0x34c] */
  ecx = (uint32_t)(esi + 0x34cu);
/* 753132: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 753137: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75313du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75313d: mov ecx, esi */
  ecx = esi;
/* 75313f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 753147: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x75314cu); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 75314c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 753150: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753151: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 753158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75315b: ret  */
  esp += 4; SPILL(); return;
}

void f_7531a0(void) {
  LOAD_REGS();
L_7531a0: /* 7531a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7531a2: push 0x9c8659 */
  { uint32_t v = 0x9c8659u; esp -= 4; W32(esp, v); }
/* 7531a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7531ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7531ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7531b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7531b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7531b7: mov esi, ecx */
  esi = ecx;
/* 7531b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7531bd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7531c2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7531c2: lea ecx, [esi + 0x34c] */
  ecx = (uint32_t)(esi + 0x34cu);
/* 7531c8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7531d0: mov dword ptr [esi], 0xa03678 */
  W32((uint32_t)(esi), 0xa03678u);
/* 7531d6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7531dcu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7531dc: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 7531e2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7531e7: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7531edu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7531ed: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 7531f3: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7531f8: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7531feu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7531fe: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 753204: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 753209: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x75320fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 75320f: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 753215: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 75321a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x753220u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 753220: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 753226: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 75322b: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x753231u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 753231: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 753237: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 75323c: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x753242u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 753242: push 0x6ca0b5 */
  { uint32_t v = 0x6ca0b5u; esp -= 4; W32(esp, v); }
/* 753247: push 0x6c52e0 */
  { uint32_t v = 0x6c52e0u; esp -= 4; W32(esp, v); }
/* 75324c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 75324e: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 753250: lea eax, [esi + 0x3d0] */
  eax = (uint32_t)(esi + 0x3d0u);
/* 753256: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753257: mov byte ptr [esp + 0x24], 7 */
  W8((uint32_t)(esp + 0x24u), 0x7u);
/* 75325c: call 0x99cafe */
  esp -= 4; W32(esp, 0x753261u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 753261: mov ecx, dword ptr [0xcfa304] */
  ecx = R32((uint32_t)(0xcfa304u));
/* 753267: mov edx, dword ptr [0xcfa300] */
  edx = R32((uint32_t)(0xcfa300u));
/* 75326d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75326e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75326f: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 753271: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 753273: lea eax, [esi + 0x498] */
  eax = (uint32_t)(esi + 0x498u);
/* 753279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75327a: mov byte ptr [esp + 0x24], 8 */
  W8((uint32_t)(esp + 0x24u), 0x8u);
/* 75327f: call 0x99cafe */
  esp -= 4; W32(esp, 0x753284u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 753284: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 753288: mov eax, esi */
  eax = esi;
/* 75328a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75328b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 753292: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 753295: ret  */
  esp += 4; SPILL(); return;
}

void f_7532e0(void) {
  LOAD_REGS();
L_7532e0: /* 7532e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7532e2: push 0x9c8701 */
  { uint32_t v = 0x9c8701u; esp -= 4; W32(esp, v); }
/* 7532e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7532ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7532ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7532f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7532f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7532f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7532f8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7532fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7532fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7532fe: mov ebx, ecx */
  ebx = ecx;
/* 753300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 753301: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 753305: call 0x6c1456 */
  esp -= 4; W32(esp, 0x75330au); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 75330a: mov dword ptr [ebx], 0xa03678 */
  W32((uint32_t)(ebx), 0xa03678u);
/* 753310: mov eax, dword ptr [ebp + 0x33c] */
  eax = R32((uint32_t)(ebp + 0x33cu));
/* 753316: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 75331c: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 753322: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 753328: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 75332e: lea ecx, [ebp + 0x34c] */
  ecx = (uint32_t)(ebp + 0x34cu);
/* 753334: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 75333a: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 753340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753341: lea ecx, [ebx + 0x34c] */
  ecx = (uint32_t)(ebx + 0x34cu);
/* 753347: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75334f: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 753355: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75335bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75335b: mov edx, dword ptr [ebp + 0x358] */
  edx = R32((uint32_t)(ebp + 0x358u));
/* 753361: lea ecx, [ebp + 0x360] */
  ecx = (uint32_t)(ebp + 0x360u);
/* 753367: mov dword ptr [ebx + 0x358], edx */
  W32((uint32_t)(ebx + 0x358u), edx);
/* 75336d: mov eax, dword ptr [ebp + 0x35c] */
  eax = R32((uint32_t)(ebp + 0x35cu));
/* 753373: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753374: lea ecx, [ebx + 0x360] */
  ecx = (uint32_t)(ebx + 0x360u);
/* 75337a: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 75337f: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
/* 753385: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75338bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75338b: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 753391: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 753397: mov eax, dword ptr [ebp + 0x370] */
  eax = R32((uint32_t)(ebp + 0x370u));
/* 75339d: mov dword ptr [ebx + 0x370], eax */
  W32((uint32_t)(ebx + 0x370u), eax);
/* 7533a3: mov ecx, dword ptr [ebp + 0x374] */
  ecx = R32((uint32_t)(ebp + 0x374u));
/* 7533a9: mov eax, dword ptr [ebx + 0x37c] */
  eax = R32((uint32_t)(ebx + 0x37cu));
/* 7533af: mov dword ptr [ebx + 0x374], ecx */
  W32((uint32_t)(ebx + 0x374u), ecx);
/* 7533b5: mov edx, dword ptr [ebp + 0x378] */
  edx = R32((uint32_t)(ebp + 0x378u));
/* 7533bb: mov ecx, dword ptr [ebx + 0x37c] */
  ecx = R32((uint32_t)(ebx + 0x37cu));
/* 7533c1: mov dword ptr [ebx + 0x378], edx */
  W32((uint32_t)(ebx + 0x378u), edx);
/* 7533c7: xor eax, dword ptr [ebp + 0x37c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x37cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7533cd: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7533d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7533d2: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 7533d8: mov eax, dword ptr [ebp + 0x37c] */
  eax = R32((uint32_t)(ebp + 0x37cu));
/* 7533de: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7533e0: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7533e3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7533e5: mov dword ptr [ebx + 0x37c], eax */
  W32((uint32_t)(ebx + 0x37cu), eax);
/* 7533eb: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 7533f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7533f3: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7533f6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7533f8: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 7533fe: mov eax, dword ptr [ebp + 0x37c] */
  eax = R32((uint32_t)(ebp + 0x37cu));
/* 753404: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753406: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 753409: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75340b: mov dword ptr [ebx + 0x37c], eax */
  W32((uint32_t)(ebx + 0x37cu), eax);
/* 753411: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 753417: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753419: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75341c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75341e: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 753424: mov edx, dword ptr [ebp + 0x37c] */
  edx = R32((uint32_t)(ebp + 0x37cu));
/* 75342a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75342c: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75342f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 753431: lea ecx, [ebp + 0x384] */
  ecx = (uint32_t)(ebp + 0x384u);
/* 753437: mov dword ptr [ebx + 0x37c], edx */
  W32((uint32_t)(ebx + 0x37cu), edx);
/* 75343d: mov eax, dword ptr [ebp + 0x380] */
  eax = R32((uint32_t)(ebp + 0x380u));
/* 753443: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753444: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 753449: mov dword ptr [ebx + 0x380], eax */
  W32((uint32_t)(ebx + 0x380u), eax);
/* 75344f: lea ecx, [ebx + 0x384] */
  ecx = (uint32_t)(ebx + 0x384u);
/* 753455: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75345bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75345b: lea edx, [ebp + 0x390] */
  edx = (uint32_t)(ebp + 0x390u);
/* 753461: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 753462: lea ecx, [ebx + 0x390] */
  ecx = (uint32_t)(ebx + 0x390u);
/* 753468: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 75346d: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x753473u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 753473: lea eax, [ebp + 0x39c] */
  eax = (uint32_t)(ebp + 0x39cu);
/* 753479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75347a: lea ecx, [ebx + 0x39c] */
  ecx = (uint32_t)(ebx + 0x39cu);
/* 753480: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 753485: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75348bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75348b: lea ecx, [ebp + 0x3a8] */
  ecx = (uint32_t)(ebp + 0x3a8u);
/* 753491: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753492: lea ecx, [ebx + 0x3a8] */
  ecx = (uint32_t)(ebx + 0x3a8u);
/* 753498: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 75349d: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7534a3u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7534a3: lea edx, [ebp + 0x3b4] */
  edx = (uint32_t)(ebp + 0x3b4u);
/* 7534a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7534aa: lea ecx, [ebx + 0x3b4] */
  ecx = (uint32_t)(ebx + 0x3b4u);
/* 7534b0: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 7534b5: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7534bbu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7534bb: mov eax, dword ptr [ebp + 0x3c0] */
  eax = R32((uint32_t)(ebp + 0x3c0u));
/* 7534c1: push 0x6ca0b5 */
  { uint32_t v = 0x6ca0b5u; esp -= 4; W32(esp, v); }
/* 7534c6: mov dword ptr [ebx + 0x3c0], eax */
  W32((uint32_t)(ebx + 0x3c0u), eax);
/* 7534cc: mov ecx, dword ptr [ebp + 0x3c4] */
  ecx = R32((uint32_t)(ebp + 0x3c4u));
/* 7534d2: push 0x6cb0be */
  { uint32_t v = 0x6cb0beu; esp -= 4; W32(esp, v); }
/* 7534d7: mov dword ptr [ebx + 0x3c4], ecx */
  W32((uint32_t)(ebx + 0x3c4u), ecx);
/* 7534dd: mov edx, dword ptr [ebp + 0x3c8] */
  edx = R32((uint32_t)(ebp + 0x3c8u));
/* 7534e3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7534e5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7534e7: mov dword ptr [ebx + 0x3c8], edx */
  W32((uint32_t)(ebx + 0x3c8u), edx);
/* 7534ed: mov eax, dword ptr [ebp + 0x3cc] */
  eax = R32((uint32_t)(ebp + 0x3ccu));
/* 7534f3: lea ecx, [ebp + 0x3d0] */
  ecx = (uint32_t)(ebp + 0x3d0u);
/* 7534f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7534fa: lea edx, [ebx + 0x3d0] */
  edx = (uint32_t)(ebx + 0x3d0u);
/* 753500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 753501: mov byte ptr [esp + 0x34], 7 */
  W8((uint32_t)(esp + 0x34u), 0x7u);
/* 753506: mov dword ptr [ebx + 0x3cc], eax */
  W32((uint32_t)(ebx + 0x3ccu), eax);
/* 75350c: call 0x99cb60 */
  esp -= 4; W32(esp, 0x753511u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 753511: mov eax, dword ptr [ebp + 0x490] */
  eax = R32((uint32_t)(ebp + 0x490u));
/* 753517: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 75351d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75351e: mov dword ptr [ebx + 0x490], eax */
  W32((uint32_t)(ebx + 0x490u), eax);
/* 753524: mov eax, dword ptr [0xcfa308] */
  eax = R32((uint32_t)(0xcfa308u));
/* 753529: mov ecx, dword ptr [ebp + 0x494] */
  ecx = R32((uint32_t)(ebp + 0x494u));
/* 75352f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753530: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 753532: mov dword ptr [ebx + 0x494], ecx */
  W32((uint32_t)(ebx + 0x494u), ecx);
/* 753538: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75353a: lea ecx, [ebp + 0x498] */
  ecx = (uint32_t)(ebp + 0x498u);
/* 753540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753541: lea edx, [ebx + 0x498] */
  edx = (uint32_t)(ebx + 0x498u);
/* 753547: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 753548: call 0x99cb60 */
  esp -= 4; W32(esp, 0x75354du); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 75354d: lea esi, [ebp + 0x504] */
  esi = (uint32_t)(ebp + 0x504u);
/* 753553: lea edi, [ebx + 0x504] */
  edi = (uint32_t)(ebx + 0x504u);
/* 753559: mov ecx, 9 */
  ecx = 0x9u;
/* 75355e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 753560: lea esi, [ebp + 0x528] */
  esi = (uint32_t)(ebp + 0x528u);
/* 753566: lea edi, [ebx + 0x528] */
  edi = (uint32_t)(ebx + 0x528u);
/* 75356c: mov ecx, 9 */
  ecx = 0x9u;
/* 753571: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 753573: lea esi, [ebp + 0x54c] */
  esi = (uint32_t)(ebp + 0x54cu);
/* 753579: lea edi, [ebx + 0x54c] */
  edi = (uint32_t)(ebx + 0x54cu);
/* 75357f: mov ecx, 9 */
  ecx = 0x9u;
/* 753584: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 753586: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75358a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75358b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75358c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75358d: mov eax, ebx */
  eax = ebx;
/* 75358f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 753590: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 753597: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75359a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753650(void) {
  LOAD_REGS();
L_753650: /* 753650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753651: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 753652: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 753653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753655: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 753659: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75365a: mov esi, ecx */
  esi = ecx;
/* 75365c: call 0x6c5cef */
  esp -= 4; W32(esp, 0x753661u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 753661: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 753667: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 75366d: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 753673: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 753679: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 75367f: lea ecx, [edi + 0x34c] */
  ecx = (uint32_t)(edi + 0x34cu);
/* 753685: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 75368b: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 753691: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753692: lea ecx, [esi + 0x34c] */
  ecx = (uint32_t)(esi + 0x34cu);
/* 753698: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 75369e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7536a4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7536a4: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 7536aa: lea ecx, [edi + 0x360] */
  ecx = (uint32_t)(edi + 0x360u);
/* 7536b0: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 7536b6: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 7536bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7536bd: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 7536c3: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 7536c9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7536cfu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7536cf: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 7536d5: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 7536db: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 7536e1: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 7536e7: mov ecx, dword ptr [edi + 0x374] */
  ecx = R32((uint32_t)(edi + 0x374u));
/* 7536ed: mov eax, dword ptr [esi + 0x37c] */
  eax = R32((uint32_t)(esi + 0x37cu));
/* 7536f3: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 7536f9: mov edx, dword ptr [edi + 0x378] */
  edx = R32((uint32_t)(edi + 0x378u));
/* 7536ff: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 753705: mov dword ptr [esi + 0x378], edx */
  W32((uint32_t)(esi + 0x378u), edx);
/* 75370b: xor eax, dword ptr [edi + 0x37c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x37cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753711: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 753714: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753716: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 75371c: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 753722: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753724: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 753727: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753729: mov dword ptr [esi + 0x37c], eax */
  W32((uint32_t)(esi + 0x37cu), eax);
/* 75372f: mov ecx, dword ptr [edi + 0x37c] */
  ecx = R32((uint32_t)(edi + 0x37cu));
/* 753735: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753737: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75373a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75373c: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 753742: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 753748: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75374a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75374d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75374f: mov dword ptr [esi + 0x37c], eax */
  W32((uint32_t)(esi + 0x37cu), eax);
/* 753755: mov ecx, dword ptr [edi + 0x37c] */
  ecx = R32((uint32_t)(edi + 0x37cu));
/* 75375b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75375d: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 753760: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753762: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 753768: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 75376e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 753770: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 753773: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 753775: lea ecx, [edi + 0x384] */
  ecx = (uint32_t)(edi + 0x384u);
/* 75377b: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 753781: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 753787: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753788: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 75378e: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 753794: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x75379au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 75379a: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 7537a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7537a1: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 7537a7: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7537adu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7537ad: lea eax, [edi + 0x39c] */
  eax = (uint32_t)(edi + 0x39cu);
/* 7537b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7537b4: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7537ba: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7537c0u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7537c0: lea ecx, [edi + 0x3a8] */
  ecx = (uint32_t)(edi + 0x3a8u);
/* 7537c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7537c7: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7537cd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7537d3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7537d3: lea edx, [edi + 0x3b4] */
  edx = (uint32_t)(edi + 0x3b4u);
/* 7537d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7537da: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 7537e0: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7537e6u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7537e6: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 7537ec: mov dword ptr [esi + 0x3c0], eax */
  W32((uint32_t)(esi + 0x3c0u), eax);
/* 7537f2: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 7537f8: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 7537fe: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 753804: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 75380a: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 753810: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 753816: mov eax, edi */
  eax = edi;
/* 753818: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 75381a: lea ebp, [edi + 0x3e4] */
  ebp = (uint32_t)(edi + 0x3e4u);
/* 753820: lea ebx, [esi + 0x3dc] */
  ebx = (uint32_t)(esi + 0x3dcu);
/* 753826: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 75382a: mov dword ptr [esp + 0x18], 8 */
  W32((uint32_t)(esp + 0x18u), 0x8u);
L_753832: /* 753832: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 753835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753836: lea ecx, [ebx - 0xc] */
  ecx = (uint32_t)(ebx + 0xfffffff4u);
/* 753839: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x75383fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 75383f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 753843: mov eax, dword ptr [edx + ebx] */
  eax = R32((uint32_t)(edx + ebx));
/* 753846: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 753848: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 75384b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75384f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 753852: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 753855: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 753858: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75385b: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75385e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 75385f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 753863: jne 0x753832 */
  if (!zf) goto L_753832;
L_753865: /* 753865: mov eax, dword ptr [edi + 0x490] */
  eax = R32((uint32_t)(edi + 0x490u));
/* 75386b: mov dword ptr [esi + 0x490], eax */
  W32((uint32_t)(esi + 0x490u), eax);
/* 753871: mov ecx, dword ptr [edi + 0x494] */
  ecx = R32((uint32_t)(edi + 0x494u));
/* 753877: mov dword ptr [esi + 0x494], ecx */
  W32((uint32_t)(esi + 0x494u), ecx);
/* 75387d: lea ebx, [esi + 0x498] */
  ebx = (uint32_t)(esi + 0x498u);
/* 753883: mov ebp, 9 */
  ebp = 0x9u;
L_753888: /* 753888: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 75388c: lea eax, [ebx + edx] */
  eax = (uint32_t)(ebx + edx);
/* 75388f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753890: mov ecx, ebx */
  ecx = ebx;
/* 753892: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x753898u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 753898: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75389b: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 75389c: jne 0x753888 */
  if (!zf) goto L_753888;
L_75389e: /* 75389e: mov ecx, dword ptr [edi + 0x504] */
  ecx = R32((uint32_t)(edi + 0x504u));
/* 7538a4: mov dword ptr [esi + 0x504], ecx */
  W32((uint32_t)(esi + 0x504u), ecx);
/* 7538aa: mov edx, dword ptr [edi + 0x508] */
  edx = R32((uint32_t)(edi + 0x508u));
/* 7538b0: mov dword ptr [esi + 0x508], edx */
  W32((uint32_t)(esi + 0x508u), edx);
/* 7538b6: mov eax, dword ptr [edi + 0x50c] */
  eax = R32((uint32_t)(edi + 0x50cu));
/* 7538bc: mov dword ptr [esi + 0x50c], eax */
  W32((uint32_t)(esi + 0x50cu), eax);
/* 7538c2: mov ecx, dword ptr [edi + 0x510] */
  ecx = R32((uint32_t)(edi + 0x510u));
/* 7538c8: mov dword ptr [esi + 0x510], ecx */
  W32((uint32_t)(esi + 0x510u), ecx);
/* 7538ce: mov edx, dword ptr [edi + 0x514] */
  edx = R32((uint32_t)(edi + 0x514u));
/* 7538d4: mov dword ptr [esi + 0x514], edx */
  W32((uint32_t)(esi + 0x514u), edx);
/* 7538da: mov eax, dword ptr [edi + 0x518] */
  eax = R32((uint32_t)(edi + 0x518u));
/* 7538e0: mov dword ptr [esi + 0x518], eax */
  W32((uint32_t)(esi + 0x518u), eax);
/* 7538e6: mov ecx, dword ptr [edi + 0x51c] */
  ecx = R32((uint32_t)(edi + 0x51cu));
/* 7538ec: mov dword ptr [esi + 0x51c], ecx */
  W32((uint32_t)(esi + 0x51cu), ecx);
/* 7538f2: mov edx, dword ptr [edi + 0x520] */
  edx = R32((uint32_t)(edi + 0x520u));
/* 7538f8: mov dword ptr [esi + 0x520], edx */
  W32((uint32_t)(esi + 0x520u), edx);
/* 7538fe: mov eax, dword ptr [edi + 0x524] */
  eax = R32((uint32_t)(edi + 0x524u));
/* 753904: mov dword ptr [esi + 0x524], eax */
  W32((uint32_t)(esi + 0x524u), eax);
/* 75390a: mov ecx, dword ptr [edi + 0x528] */
  ecx = R32((uint32_t)(edi + 0x528u));
/* 753910: mov dword ptr [esi + 0x528], ecx */
  W32((uint32_t)(esi + 0x528u), ecx);
/* 753916: mov edx, dword ptr [edi + 0x52c] */
  edx = R32((uint32_t)(edi + 0x52cu));
/* 75391c: mov dword ptr [esi + 0x52c], edx */
  W32((uint32_t)(esi + 0x52cu), edx);
/* 753922: mov eax, dword ptr [edi + 0x530] */
  eax = R32((uint32_t)(edi + 0x530u));
/* 753928: mov dword ptr [esi + 0x530], eax */
  W32((uint32_t)(esi + 0x530u), eax);
/* 75392e: mov ecx, dword ptr [edi + 0x534] */
  ecx = R32((uint32_t)(edi + 0x534u));
/* 753934: mov dword ptr [esi + 0x534], ecx */
  W32((uint32_t)(esi + 0x534u), ecx);
/* 75393a: mov edx, dword ptr [edi + 0x538] */
  edx = R32((uint32_t)(edi + 0x538u));
/* 753940: mov dword ptr [esi + 0x538], edx */
  W32((uint32_t)(esi + 0x538u), edx);
/* 753946: mov eax, dword ptr [edi + 0x53c] */
  eax = R32((uint32_t)(edi + 0x53cu));
/* 75394c: mov dword ptr [esi + 0x53c], eax */
  W32((uint32_t)(esi + 0x53cu), eax);
/* 753952: mov ecx, dword ptr [edi + 0x540] */
  ecx = R32((uint32_t)(edi + 0x540u));
/* 753958: mov dword ptr [esi + 0x540], ecx */
  W32((uint32_t)(esi + 0x540u), ecx);
/* 75395e: mov edx, dword ptr [edi + 0x544] */
  edx = R32((uint32_t)(edi + 0x544u));
/* 753964: mov dword ptr [esi + 0x544], edx */
  W32((uint32_t)(esi + 0x544u), edx);
/* 75396a: mov eax, dword ptr [edi + 0x548] */
  eax = R32((uint32_t)(edi + 0x548u));
/* 753970: mov dword ptr [esi + 0x548], eax */
  W32((uint32_t)(esi + 0x548u), eax);
/* 753976: mov ecx, dword ptr [edi + 0x54c] */
  ecx = R32((uint32_t)(edi + 0x54cu));
/* 75397c: mov dword ptr [esi + 0x54c], ecx */
  W32((uint32_t)(esi + 0x54cu), ecx);
/* 753982: mov edx, dword ptr [edi + 0x550] */
  edx = R32((uint32_t)(edi + 0x550u));
/* 753988: mov dword ptr [esi + 0x550], edx */
  W32((uint32_t)(esi + 0x550u), edx);
/* 75398e: mov eax, dword ptr [edi + 0x554] */
  eax = R32((uint32_t)(edi + 0x554u));
/* 753994: mov dword ptr [esi + 0x554], eax */
  W32((uint32_t)(esi + 0x554u), eax);
/* 75399a: mov ecx, dword ptr [edi + 0x558] */
  ecx = R32((uint32_t)(edi + 0x558u));
/* 7539a0: mov dword ptr [esi + 0x558], ecx */
  W32((uint32_t)(esi + 0x558u), ecx);
/* 7539a6: mov edx, dword ptr [edi + 0x55c] */
  edx = R32((uint32_t)(edi + 0x55cu));
/* 7539ac: mov dword ptr [esi + 0x55c], edx */
  W32((uint32_t)(esi + 0x55cu), edx);
/* 7539b2: mov eax, dword ptr [edi + 0x560] */
  eax = R32((uint32_t)(edi + 0x560u));
/* 7539b8: mov dword ptr [esi + 0x560], eax */
  W32((uint32_t)(esi + 0x560u), eax);
/* 7539be: mov ecx, dword ptr [edi + 0x564] */
  ecx = R32((uint32_t)(edi + 0x564u));
/* 7539c4: mov dword ptr [esi + 0x564], ecx */
  W32((uint32_t)(esi + 0x564u), ecx);
/* 7539ca: mov edx, dword ptr [edi + 0x568] */
  edx = R32((uint32_t)(edi + 0x568u));
/* 7539d0: mov dword ptr [esi + 0x568], edx */
  W32((uint32_t)(esi + 0x568u), edx);
/* 7539d6: mov eax, dword ptr [edi + 0x56c] */
  eax = R32((uint32_t)(edi + 0x56cu));
/* 7539dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7539dd: mov dword ptr [esi + 0x56c], eax */
  W32((uint32_t)(esi + 0x56cu), eax);
/* 7539e3: mov eax, esi */
  eax = esi;
/* 7539e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7539e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7539e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7539e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7539e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753ae0(void) {
  LOAD_REGS();
L_753ae0: /* 753ae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753ae1: mov esi, ecx */
  esi = ecx;
/* 753ae3: call 0x6c61c2 */
  esp -= 4; W32(esp, 0x753ae8u); SPILL(); f_6c61c2(); if (g_unwind) return; RELOAD();
/* 753ae8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753aed: je 0x753afe */
  if (zf) goto L_753afe;
L_753aef: /* 753aef: push 0x570 */
  { uint32_t v = 0x570u; esp -= 4; W32(esp, v); }
/* 753af4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753af5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x753afbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 753afb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_753afe: /* 753afe: mov eax, esi */
  eax = esi;
/* 753b00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753b01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753b20(void) {
  LOAD_REGS();
L_753b20: /* 753b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 753b21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 753b25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753b29: mov esi, ecx */
  esi = ecx;
/* 753b2b: je 0x753b60 */
  if (zf) goto L_753b60;
L_753b2d: /* 753b2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 753b30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753b31: push 0x6c61c2 */
  { uint32_t v = 0x6c61c2u; esp -= 4; W32(esp, v); }
/* 753b36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 753b39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753b3a: push 0x570 */
  { uint32_t v = 0x570u; esp -= 4; W32(esp, v); }
/* 753b3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753b40: call 0x99ca3d */
  esp -= 4; W32(esp, 0x753b45u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 753b45: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753b48: je 0x753b58 */
  if (zf) goto L_753b58;
L_753b4a: /* 753b4a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 753b50: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 753b52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 753b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753b55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x753b58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_753b58: /* 753b58: mov eax, edi */
  eax = edi;
/* 753b5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 753b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753b5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 753b5d: ret 4 */
  esp += 8; SPILL(); return;
L_753b60: /* 753b60: mov ecx, esi */
  ecx = esi;
/* 753b62: call 0x6c61c2 */
  esp -= 4; W32(esp, 0x753b67u); SPILL(); f_6c61c2(); if (g_unwind) return; RELOAD();
/* 753b67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753b6a: je 0x753b7b */
  if (zf) goto L_753b7b;
L_753b6c: /* 753b6c: push 0x570 */
  { uint32_t v = 0x570u; esp -= 4; W32(esp, v); }
/* 753b71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753b72: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x753b78u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 753b78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_753b7b: /* 753b7b: mov eax, esi */
  eax = esi;
/* 753b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753b7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 753b7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753bb0(void) {
  LOAD_REGS();
L_753bb0: /* 753bb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 753bb2: push 0x9c8738 */
  { uint32_t v = 0x9c8738u; esp -= 4; W32(esp, v); }
/* 753bb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 753bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753bbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 753bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753bc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753bc7: mov esi, ecx */
  esi = ecx;
/* 753bc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 753bcd: mov dword ptr [esi], 0xa03858 */
  W32((uint32_t)(esi), 0xa03858u);
/* 753bd3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 753bdb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x753be1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 753be1: mov ecx, esi */
  ecx = esi;
/* 753be3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 753beb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x753bf0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 753bf0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 753bf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753bf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 753bfc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 753bff: ret  */
  esp += 4; SPILL(); return;
}

void f_753c20(void) {
  LOAD_REGS();
L_753c20: /* 753c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753c21: mov esi, ecx */
  esi = ecx;
/* 753c23: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x753c28u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 753c28: mov dword ptr [esi], 0xa03858 */
  W32((uint32_t)(esi), 0xa03858u);
/* 753c2e: mov eax, esi */
  eax = esi;
/* 753c30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753c31: ret  */
  esp += 4; SPILL(); return;
}

void f_753c50(void) {
  LOAD_REGS();
L_753c50: /* 753c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753c51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753c52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 753c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753c57: mov esi, ecx */
  esi = ecx;
/* 753c59: call 0x6c1456 */
  esp -= 4; W32(esp, 0x753c5eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 753c5e: mov dword ptr [esi], 0xa03858 */
  W32((uint32_t)(esi), 0xa03858u);
/* 753c64: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 753c6a: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 753c70: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 753c76: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 753c7c: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 753c82: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 753c88: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 753c8e: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 753c94: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 753c9a: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 753ca0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753ca2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 753ca5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753ca7: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 753cad: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 753cb3: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 753cb9: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 753cbf: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 753cc5: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 753ccb: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 753cd1: mov edx, dword ptr [edi + 0x35c] */
  edx = R32((uint32_t)(edi + 0x35cu));
/* 753cd7: mov dword ptr [esi + 0x35c], edx */
  W32((uint32_t)(esi + 0x35cu), edx);
/* 753cdd: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 753ce3: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 753ce9: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 753cef: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 753cf5: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 753cfb: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 753d01: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* 753d07: mov dword ptr [esi + 0x36c], eax */
  W32((uint32_t)(esi + 0x36cu), eax);
/* 753d0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 753d0e: mov eax, esi */
  eax = esi;
/* 753d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753d11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753d60(void) {
  LOAD_REGS();
L_753d60: /* 753d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753d61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753d62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 753d66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753d67: mov esi, ecx */
  esi = ecx;
/* 753d69: call 0x6c5cef */
  esp -= 4; W32(esp, 0x753d6eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 753d6e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 753d74: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 753d7a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 753d80: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 753d86: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 753d8c: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 753d92: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 753d98: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 753d9e: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 753da4: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 753daa: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753dac: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 753daf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753db1: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 753db7: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 753dbd: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 753dc3: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 753dc9: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 753dcf: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 753dd5: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 753ddb: mov edx, dword ptr [edi + 0x35c] */
  edx = R32((uint32_t)(edi + 0x35cu));
/* 753de1: mov dword ptr [esi + 0x35c], edx */
  W32((uint32_t)(esi + 0x35cu), edx);
/* 753de7: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 753ded: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 753df3: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 753df9: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 753dff: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 753e05: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 753e0b: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* 753e11: mov dword ptr [esi + 0x36c], eax */
  W32((uint32_t)(esi + 0x36cu), eax);
/* 753e17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 753e18: mov eax, esi */
  eax = esi;
/* 753e1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753e1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753e50(void) {
  LOAD_REGS();
L_753e50: /* 753e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753e51: mov esi, ecx */
  esi = ecx;
/* 753e53: call 0x6c846d */
  esp -= 4; W32(esp, 0x753e58u); SPILL(); f_6c846d(); if (g_unwind) return; RELOAD();
/* 753e58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753e5d: je 0x753e6e */
  if (zf) goto L_753e6e;
L_753e5f: /* 753e5f: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 753e64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753e65: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x753e6bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 753e6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_753e6e: /* 753e6e: mov eax, esi */
  eax = esi;
/* 753e70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753e71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753e90(void) {
  LOAD_REGS();
L_753e90: /* 753e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 753e91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 753e95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753e98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753e99: mov esi, ecx */
  esi = ecx;
/* 753e9b: je 0x753ed0 */
  if (zf) goto L_753ed0;
L_753e9d: /* 753e9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 753ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753ea1: push 0x6c846d */
  { uint32_t v = 0x6c846du; esp -= 4; W32(esp, v); }
/* 753ea6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 753ea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753eaa: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 753eaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753eb0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x753eb5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 753eb5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753eb8: je 0x753ec8 */
  if (zf) goto L_753ec8;
L_753eba: /* 753eba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 753ec0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 753ec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 753ec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753ec5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x753ec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_753ec8: /* 753ec8: mov eax, edi */
  eax = edi;
/* 753eca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 753ecb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753ecc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 753ecd: ret 4 */
  esp += 8; SPILL(); return;
L_753ed0: /* 753ed0: mov ecx, esi */
  ecx = esi;
/* 753ed2: call 0x6c846d */
  esp -= 4; W32(esp, 0x753ed7u); SPILL(); f_6c846d(); if (g_unwind) return; RELOAD();
/* 753ed7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 753eda: je 0x753eeb */
  if (zf) goto L_753eeb;
L_753edc: /* 753edc: push 0x370 */
  { uint32_t v = 0x370u; esp -= 4; W32(esp, v); }
/* 753ee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753ee2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x753ee8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 753ee8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_753eeb: /* 753eeb: mov eax, esi */
  eax = esi;
/* 753eed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 753eef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_753f20(void) {
  LOAD_REGS();
L_753f20: /* 753f20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 753f22: push 0x9c8758 */
  { uint32_t v = 0x9c8758u; esp -= 4; W32(esp, v); }
/* 753f27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 753f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 753f2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 753f35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 753f36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753f37: mov esi, ecx */
  esi = ecx;
/* 753f39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 753f3d: mov dword ptr [esi], 0xa03a38 */
  W32((uint32_t)(esi), 0xa03a38u);
/* 753f43: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 753f4b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x753f51u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 753f51: mov ecx, esi */
  ecx = esi;
/* 753f53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 753f5b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x753f60u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 753f60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 753f64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753f65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 753f6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 753f6f: ret  */
  esp += 4; SPILL(); return;
}

void f_753f90(void) {
  LOAD_REGS();
L_753f90: /* 753f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753f91: mov esi, ecx */
  esi = ecx;
/* 753f93: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x753f98u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 753f98: mov dword ptr [esi], 0xa03a38 */
  W32((uint32_t)(esi), 0xa03a38u);
/* 753f9e: mov eax, esi */
  eax = esi;
/* 753fa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 753fa1: ret  */
  esp += 4; SPILL(); return;
}

void f_753fc0(void) {
  LOAD_REGS();
L_753fc0: /* 753fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 753fc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753fc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 753fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 753fc7: mov esi, ecx */
  esi = ecx;
/* 753fc9: call 0x6c1456 */
  esp -= 4; W32(esp, 0x753fceu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 753fce: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 753fd4: mov dword ptr [esi], 0xa03a38 */
  W32((uint32_t)(esi), 0xa03a38u);
/* 753fda: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 753fe0: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 753fe6: xor ecx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 753fec: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 753ff2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 753ff5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 753ff7: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 753ffd: mov ecx, eax */
  ecx = eax;
/* 753fff: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 754005: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754007: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75400a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75400c: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 754012: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 754018: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75401a: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75401d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75401f: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 754025: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 75402b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75402d: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 754030: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 754032: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 754038: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 75403e: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 754044: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 75404a: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 754050: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 754056: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 75405c: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 754062: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 754068: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 75406e: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 754074: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 75407a: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 754080: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 754086: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 75408c: lea ecx, [edi + 0x360] */
  ecx = (uint32_t)(edi + 0x360u);
/* 754092: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 754094: lea edx, [esi + 0x360] */
  edx = (uint32_t)(esi + 0x360u);
/* 75409a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75409c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 75409f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7540a2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7540a5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7540a8: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 7540ae: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 7540b4: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 7540ba: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 7540c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7540c1: mov eax, esi */
  eax = esi;
/* 7540c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7540c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754120(void) {
  LOAD_REGS();
L_754120: /* 754120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754121: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754122: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 754126: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754127: mov esi, ecx */
  esi = ecx;
/* 754129: call 0x6c5cef */
  esp -= 4; W32(esp, 0x75412eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 75412e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 754134: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 75413a: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 754140: xor ecx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754146: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 75414c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75414f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754151: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 754157: mov ecx, eax */
  ecx = eax;
/* 754159: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 75415f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754161: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 754164: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754166: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 75416c: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 754172: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754174: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 754177: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754179: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 75417f: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 754185: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 754187: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75418a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75418c: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 754192: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 754198: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 75419e: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 7541a4: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 7541aa: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 7541b0: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 7541b6: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7541bc: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7541c2: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 7541c8: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 7541ce: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 7541d4: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 7541da: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 7541e0: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 7541e6: lea ecx, [edi + 0x360] */
  ecx = (uint32_t)(edi + 0x360u);
/* 7541ec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7541ee: lea edx, [esi + 0x360] */
  edx = (uint32_t)(esi + 0x360u);
/* 7541f4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7541f6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7541f9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7541fc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7541ff: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 754202: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 754208: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 75420e: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 754214: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 75421a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75421b: mov eax, esi */
  eax = esi;
/* 75421d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75421e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754280(void) {
  LOAD_REGS();
L_754280: /* 754280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754281: mov esi, ecx */
  esi = ecx;
/* 754283: call 0x6caf97 */
  esp -= 4; W32(esp, 0x754288u); SPILL(); f_6caf97(); if (g_unwind) return; RELOAD();
/* 754288: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75428d: je 0x75429e */
  if (zf) goto L_75429e;
L_75428f: /* 75428f: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 754294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754295: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75429bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75429b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75429e: /* 75429e: mov eax, esi */
  eax = esi;
/* 7542a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7542a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7542c0(void) {
  LOAD_REGS();
L_7542c0: /* 7542c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7542c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7542c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7542c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7542c9: mov esi, ecx */
  esi = ecx;
/* 7542cb: je 0x754300 */
  if (zf) goto L_754300;
L_7542cd: /* 7542cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7542d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7542d1: push 0x6caf97 */
  { uint32_t v = 0x6caf97u; esp -= 4; W32(esp, v); }
/* 7542d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7542d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7542da: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 7542df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7542e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7542e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7542e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7542e8: je 0x7542f8 */
  if (zf) goto L_7542f8;
L_7542ea: /* 7542ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7542f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7542f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7542f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7542f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7542f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7542f8: /* 7542f8: mov eax, edi */
  eax = edi;
/* 7542fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7542fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7542fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7542fd: ret 4 */
  esp += 8; SPILL(); return;
L_754300: /* 754300: mov ecx, esi */
  ecx = esi;
/* 754302: call 0x6caf97 */
  esp -= 4; W32(esp, 0x754307u); SPILL(); f_6caf97(); if (g_unwind) return; RELOAD();
/* 754307: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75430a: je 0x75431b */
  if (zf) goto L_75431b;
L_75430c: /* 75430c: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 754311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754312: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754318u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75431b: /* 75431b: mov eax, esi */
  eax = esi;
/* 75431d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75431e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75431f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754350(void) {
  LOAD_REGS();
L_754350: /* 754350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754352: push 0x9c8787 */
  { uint32_t v = 0x9c8787u; esp -= 4; W32(esp, v); }
/* 754357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75435d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75435e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754366: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754367: mov esi, ecx */
  esi = ecx;
/* 754369: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75436d: mov dword ptr [esi], 0xa03c18 */
  W32((uint32_t)(esi), 0xa03c18u);
/* 754373: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75437b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x754381u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 754381: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 754387: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75438c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x754392u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 754392: mov ecx, esi */
  ecx = esi;
/* 754394: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75439c: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7543a1u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7543a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7543a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7543a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7543ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7543b0: ret  */
  esp += 4; SPILL(); return;
}

void f_7543e0(void) {
  LOAD_REGS();
L_7543e0: /* 7543e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7543e2: push 0x9c87a8 */
  { uint32_t v = 0x9c87a8u; esp -= 4; W32(esp, v); }
/* 7543e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7543ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7543ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7543f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7543f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7543f7: mov esi, ecx */
  esi = ecx;
/* 7543f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7543fd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x754402u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 754402: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 754408: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 754410: mov dword ptr [esi], 0xa03c18 */
  W32((uint32_t)(esi), 0xa03c18u);
/* 754416: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x75441cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 75441c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754420: mov eax, esi */
  eax = esi;
/* 754422: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754423: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75442a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75442d: ret  */
  esp += 4; SPILL(); return;
}

void f_754450(void) {
  LOAD_REGS();
L_754450: /* 754450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754452: push 0x9c87c8 */
  { uint32_t v = 0x9c87c8u; esp -= 4; W32(esp, v); }
/* 754457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75445d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75445e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754468: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75446c: mov esi, ecx */
  esi = ecx;
/* 75446e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75446f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 754473: call 0x6c1456 */
  esp -= 4; W32(esp, 0x754478u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 754478: add edi, 0x33c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75447e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75447f: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 754485: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75448d: mov dword ptr [esi], 0xa03c18 */
  W32((uint32_t)(esi), 0xa03c18u);
/* 754493: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x754499u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 754499: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75449d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75449e: mov eax, esi */
  eax = esi;
/* 7544a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7544a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7544a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7544ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7544d0(void) {
  LOAD_REGS();
L_7544d0: /* 7544d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7544d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7544d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7544d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7544d7: mov esi, ecx */
  esi = ecx;
/* 7544d9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x7544deu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 7544de: add edi, 0x33c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7544e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7544e5: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 7544eb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7544f1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7544f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7544f2: mov eax, esi */
  eax = esi;
/* 7544f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7544f5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754510(void) {
  LOAD_REGS();
L_754510: /* 754510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754511: mov esi, ecx */
  esi = ecx;
/* 754513: call 0x6c9255 */
  esp -= 4; W32(esp, 0x754518u); SPILL(); f_6c9255(); if (g_unwind) return; RELOAD();
/* 754518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75451d: je 0x75452e */
  if (zf) goto L_75452e;
L_75451f: /* 75451f: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 754524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754525: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75452bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75452b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75452e: /* 75452e: mov eax, esi */
  eax = esi;
/* 754530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754531: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754550(void) {
  LOAD_REGS();
L_754550: /* 754550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 754551: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 754555: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754558: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754559: mov esi, ecx */
  esi = ecx;
/* 75455b: je 0x754590 */
  if (zf) goto L_754590;
L_75455d: /* 75455d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 754560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754561: push 0x6c9255 */
  { uint32_t v = 0x6c9255u; esp -= 4; W32(esp, v); }
/* 754566: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 754569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75456a: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 75456f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754570: call 0x99ca3d */
  esp -= 4; W32(esp, 0x754575u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 754575: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754578: je 0x754588 */
  if (zf) goto L_754588;
L_75457a: /* 75457a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 754580: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 754582: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 754584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754585: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x754588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_754588: /* 754588: mov eax, edi */
  eax = edi;
/* 75458a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75458b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75458c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75458d: ret 4 */
  esp += 8; SPILL(); return;
L_754590: /* 754590: mov ecx, esi */
  ecx = esi;
/* 754592: call 0x6c9255 */
  esp -= 4; W32(esp, 0x754597u); SPILL(); f_6c9255(); if (g_unwind) return; RELOAD();
/* 754597: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75459a: je 0x7545ab */
  if (zf) goto L_7545ab;
L_75459c: /* 75459c: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 7545a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7545a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7545a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7545a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7545ab: /* 7545ab: mov eax, esi */
  eax = esi;
/* 7545ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7545ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7545af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7545e0(void) {
  LOAD_REGS();
L_7545e0: /* 7545e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7545e2: push 0x9c87e8 */
  { uint32_t v = 0x9c87e8u; esp -= 4; W32(esp, v); }
/* 7545e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7545ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7545ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7545f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7545f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7545f7: mov esi, ecx */
  esi = ecx;
/* 7545f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7545fd: mov dword ptr [esi], 0xa03df8 */
  W32((uint32_t)(esi), 0xa03df8u);
/* 754603: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75460b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x754611u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 754611: mov ecx, esi */
  ecx = esi;
/* 754613: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75461b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x754620u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 754620: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754624: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754625: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75462c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75462f: ret  */
  esp += 4; SPILL(); return;
}

void f_754650(void) {
  LOAD_REGS();
L_754650: /* 754650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754651: mov esi, ecx */
  esi = ecx;
/* 754653: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x754658u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 754658: mov dword ptr [esi], 0xa03df8 */
  W32((uint32_t)(esi), 0xa03df8u);
/* 75465e: mov eax, esi */
  eax = esi;
/* 754660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754661: ret  */
  esp += 4; SPILL(); return;
}

void f_754680(void) {
  LOAD_REGS();
L_754680: /* 754680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754682: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 754686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754687: mov esi, ecx */
  esi = ecx;
/* 754689: call 0x6c1456 */
  esp -= 4; W32(esp, 0x75468eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 75468e: mov dword ptr [esi], 0xa03df8 */
  W32((uint32_t)(esi), 0xa03df8u);
/* 754694: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 75469a: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 7546a0: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 7546a6: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 7546ac: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 7546b2: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 7546b8: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 7546be: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 7546c4: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 7546ca: mov edi, dword ptr [esi + 0x34c] */
  edi = R32((uint32_t)(esi + 0x34cu));
/* 7546d0: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7546d2: mov eax, edi */
  eax = edi;
/* 7546d4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7546d7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7546d9: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 7546df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7546e0: mov eax, esi */
  eax = esi;
/* 7546e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7546e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754710(void) {
  LOAD_REGS();
L_754710: /* 754710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754712: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 754716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754717: mov esi, ecx */
  esi = ecx;
/* 754719: call 0x6c5cef */
  esp -= 4; W32(esp, 0x75471eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 75471e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 754724: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 75472a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 754730: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 754736: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 75473c: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 754742: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 754748: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 75474e: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 754754: mov edi, dword ptr [esi + 0x34c] */
  edi = R32((uint32_t)(esi + 0x34cu));
/* 75475a: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75475c: mov eax, edi */
  eax = edi;
/* 75475e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 754761: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754763: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 754769: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75476a: mov eax, esi */
  eax = esi;
/* 75476c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75476d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754790(void) {
  LOAD_REGS();
L_754790: /* 754790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754791: mov esi, ecx */
  esi = ecx;
/* 754793: call 0x6c337d */
  esp -= 4; W32(esp, 0x754798u); SPILL(); f_6c337d(); if (g_unwind) return; RELOAD();
/* 754798: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75479d: je 0x7547ae */
  if (zf) goto L_7547ae;
L_75479f: /* 75479f: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7547a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7547a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7547abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7547ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7547ae: /* 7547ae: mov eax, esi */
  eax = esi;
/* 7547b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7547b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7547d0(void) {
  LOAD_REGS();
L_7547d0: /* 7547d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7547d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7547d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7547d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7547d9: mov esi, ecx */
  esi = ecx;
/* 7547db: je 0x754810 */
  if (zf) goto L_754810;
L_7547dd: /* 7547dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7547e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7547e1: push 0x6c337d */
  { uint32_t v = 0x6c337du; esp -= 4; W32(esp, v); }
/* 7547e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7547e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7547ea: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 7547ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7547f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7547f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7547f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7547f8: je 0x754808 */
  if (zf) goto L_754808;
L_7547fa: /* 7547fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 754800: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 754802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 754804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754805: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x754808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_754808: /* 754808: mov eax, edi */
  eax = edi;
/* 75480a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75480b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75480c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75480d: ret 4 */
  esp += 8; SPILL(); return;
L_754810: /* 754810: mov ecx, esi */
  ecx = esi;
/* 754812: call 0x6c337d */
  esp -= 4; W32(esp, 0x754817u); SPILL(); f_6c337d(); if (g_unwind) return; RELOAD();
/* 754817: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75481a: je 0x75482b */
  if (zf) goto L_75482b;
L_75481c: /* 75481c: push 0x350 */
  { uint32_t v = 0x350u; esp -= 4; W32(esp, v); }
/* 754821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754822: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754828u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754828: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75482b: /* 75482b: mov eax, esi */
  eax = esi;
/* 75482d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75482e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75482f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754860(void) {
  LOAD_REGS();
L_754860: /* 754860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754862: push 0x9c8808 */
  { uint32_t v = 0x9c8808u; esp -= 4; W32(esp, v); }
/* 754867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75486d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75486e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754877: mov esi, ecx */
  esi = ecx;
/* 754879: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75487d: mov dword ptr [esi], 0xa03fd8 */
  W32((uint32_t)(esi), 0xa03fd8u);
/* 754883: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75488b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x754891u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 754891: mov ecx, esi */
  ecx = esi;
/* 754893: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75489b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x7548a0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 7548a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7548a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7548a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7548ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7548af: ret  */
  esp += 4; SPILL(); return;
}

void f_7548d0(void) {
  LOAD_REGS();
L_7548d0: /* 7548d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7548d1: mov esi, ecx */
  esi = ecx;
/* 7548d3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x7548d8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 7548d8: mov dword ptr [esi], 0xa03fd8 */
  W32((uint32_t)(esi), 0xa03fd8u);
/* 7548de: mov eax, esi */
  eax = esi;
/* 7548e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7548e1: ret  */
  esp += 4; SPILL(); return;
}

void f_754900(void) {
  LOAD_REGS();
L_754900: /* 754900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754902: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 754906: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754907: mov esi, ecx */
  esi = ecx;
/* 754909: call 0x6c1456 */
  esp -= 4; W32(esp, 0x75490eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 75490e: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 754914: mov dword ptr [esi], 0xa03fd8 */
  W32((uint32_t)(esi), 0xa03fd8u);
/* 75491a: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 754920: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754922: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 754925: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754927: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 75492d: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 754933: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 754935: lea edx, [esi + 0x340] */
  edx = (uint32_t)(esi + 0x340u);
/* 75493b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75493d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 754940: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 754943: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 754946: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 754949: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 75494f: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 754955: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 75495b: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 754961: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 754967: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 75496d: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 754973: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754974: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 75497a: mov eax, esi */
  eax = esi;
/* 75497c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75497d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7549a0(void) {
  LOAD_REGS();
L_7549a0: /* 7549a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7549a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7549a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7549a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7549a7: mov esi, ecx */
  esi = ecx;
/* 7549a9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x7549aeu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 7549ae: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7549b4: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7549ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7549bc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7549bf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7549c1: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 7549c7: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 7549cd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7549cf: lea edx, [esi + 0x340] */
  edx = (uint32_t)(esi + 0x340u);
/* 7549d5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7549d7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7549da: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7549dd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7549e0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7549e3: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 7549e9: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 7549ef: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7549f5: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7549fb: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 754a01: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 754a07: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 754a0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754a0e: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 754a14: mov eax, esi */
  eax = esi;
/* 754a16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754a17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754a40(void) {
  LOAD_REGS();
L_754a40: /* 754a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754a41: mov esi, ecx */
  esi = ecx;
/* 754a43: call 0x6c5312 */
  esp -= 4; W32(esp, 0x754a48u); SPILL(); f_6c5312(); if (g_unwind) return; RELOAD();
/* 754a48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754a4d: je 0x754a5e */
  if (zf) goto L_754a5e;
L_754a4f: /* 754a4f: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 754a54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754a55: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754a5bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754a5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_754a5e: /* 754a5e: mov eax, esi */
  eax = esi;
/* 754a60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754a61: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754a80(void) {
  LOAD_REGS();
L_754a80: /* 754a80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 754a81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 754a85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754a89: mov esi, ecx */
  esi = ecx;
/* 754a8b: je 0x754ac0 */
  if (zf) goto L_754ac0;
L_754a8d: /* 754a8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 754a90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754a91: push 0x6c5312 */
  { uint32_t v = 0x6c5312u; esp -= 4; W32(esp, v); }
/* 754a96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 754a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754a9a: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 754a9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754aa0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x754aa5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 754aa5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754aa8: je 0x754ab8 */
  if (zf) goto L_754ab8;
L_754aaa: /* 754aaa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 754ab0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 754ab2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 754ab4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754ab5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x754ab8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_754ab8: /* 754ab8: mov eax, edi */
  eax = edi;
/* 754aba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754abc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 754abd: ret 4 */
  esp += 8; SPILL(); return;
L_754ac0: /* 754ac0: mov ecx, esi */
  ecx = esi;
/* 754ac2: call 0x6c5312 */
  esp -= 4; W32(esp, 0x754ac7u); SPILL(); f_6c5312(); if (g_unwind) return; RELOAD();
/* 754ac7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754aca: je 0x754adb */
  if (zf) goto L_754adb;
L_754acc: /* 754acc: push 0x35c */
  { uint32_t v = 0x35cu; esp -= 4; W32(esp, v); }
/* 754ad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754ad2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754ad8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754ad8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_754adb: /* 754adb: mov eax, esi */
  eax = esi;
/* 754add: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754ade: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 754adf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754b10(void) {
  LOAD_REGS();
L_754b10: /* 754b10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754b12: push 0x9c8836 */
  { uint32_t v = 0x9c8836u; esp -= 4; W32(esp, v); }
/* 754b17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 754b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754b1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754b25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754b26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754b27: mov esi, ecx */
  esi = ecx;
/* 754b29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 754b2d: mov dword ptr [esi], 0xa041b8 */
  W32((uint32_t)(esi), 0xa041b8u);
/* 754b33: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 754b3b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x754b41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 754b41: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 754b47: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 754b4c: call 0x6c55c9 */
  esp -= 4; W32(esp, 0x754b51u); SPILL(); f_6c55c9(); if (g_unwind) return; RELOAD();
/* 754b51: mov ecx, esi */
  ecx = esi;
/* 754b53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 754b5b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x754b60u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 754b60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754b64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754b65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 754b6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 754b6f: ret  */
  esp += 4; SPILL(); return;
}

void f_754b90(void) {
  LOAD_REGS();
L_754b90: /* 754b90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754b92: push 0x9c8858 */
  { uint32_t v = 0x9c8858u; esp -= 4; W32(esp, v); }
/* 754b97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 754b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754b9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754ba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754ba6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754ba7: mov esi, ecx */
  esi = ecx;
/* 754ba9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 754bad: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x754bb2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 754bb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 754bb4: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 754bba: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 754bc2: mov dword ptr [esi], 0xa041b8 */
  W32((uint32_t)(esi), 0xa041b8u);
/* 754bc8: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x754bceu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 754bce: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754bd2: mov eax, esi */
  eax = esi;
/* 754bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 754bdc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 754bdf: ret  */
  esp += 4; SPILL(); return;
}

void f_754c00(void) {
  LOAD_REGS();
L_754c00: /* 754c00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754c02: push 0x9c8878 */
  { uint32_t v = 0x9c8878u; esp -= 4; W32(esp, v); }
/* 754c07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 754c0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754c0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754c15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754c16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754c17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754c18: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 754c1c: mov esi, ecx */
  esi = ecx;
/* 754c1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754c1f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 754c23: call 0x6c1456 */
  esp -= 4; W32(esp, 0x754c28u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 754c28: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 754c2e: mov dword ptr [esi], 0xa041b8 */
  W32((uint32_t)(esi), 0xa041b8u);
/* 754c34: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 754c3a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754c3c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 754c3f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754c41: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 754c47: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 754c4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754c4e: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 754c54: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 754c5c: call 0x6c6d6b */
  esp -= 4; W32(esp, 0x754c61u); SPILL(); f_6c6d6b(); if (g_unwind) return; RELOAD();
/* 754c61: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 754c67: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 754c6d: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 754c73: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 754c79: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 754c7f: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 754c85: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754c87: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 754c8a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754c8c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 754c90: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 754c96: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 754c9c: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 754ca2: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 754ca8: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 754cae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754caf: mov eax, esi */
  eax = esi;
/* 754cb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754cb2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 754cb9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 754cbc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754cf0(void) {
  LOAD_REGS();
L_754cf0: /* 754cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754cf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754cf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 754cf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754cf7: mov esi, ecx */
  esi = ecx;
/* 754cf9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x754cfeu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 754cfe: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 754d04: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 754d0a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754d0c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 754d0f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754d11: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 754d17: lea ecx, [edi + 0x340] */
  ecx = (uint32_t)(edi + 0x340u);
/* 754d1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754d1e: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 754d24: call 0x6c78ab */
  esp -= 4; W32(esp, 0x754d29u); SPILL(); f_6c78ab(); if (g_unwind) return; RELOAD();
/* 754d29: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 754d2f: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 754d35: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 754d3b: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 754d41: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 754d47: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 754d4d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754d4f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 754d52: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 754d54: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 754d5a: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 754d60: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 754d66: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 754d6c: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 754d72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754d73: mov eax, esi */
  eax = esi;
/* 754d75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754d76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754db0(void) {
  LOAD_REGS();
L_754db0: /* 754db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754db1: mov esi, ecx */
  esi = ecx;
/* 754db3: call 0x6c5272 */
  esp -= 4; W32(esp, 0x754db8u); SPILL(); f_6c5272(); if (g_unwind) return; RELOAD();
/* 754db8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754dbd: je 0x754dce */
  if (zf) goto L_754dce;
L_754dbf: /* 754dbf: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 754dc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754dc5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754dcbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754dcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_754dce: /* 754dce: mov eax, esi */
  eax = esi;
/* 754dd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754dd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754df0(void) {
  LOAD_REGS();
L_754df0: /* 754df0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 754df1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 754df5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754df8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754df9: mov esi, ecx */
  esi = ecx;
/* 754dfb: je 0x754e30 */
  if (zf) goto L_754e30;
L_754dfd: /* 754dfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 754e00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754e01: push 0x6c5272 */
  { uint32_t v = 0x6c5272u; esp -= 4; W32(esp, v); }
/* 754e06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 754e09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754e0a: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 754e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754e10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x754e15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 754e15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754e18: je 0x754e28 */
  if (zf) goto L_754e28;
L_754e1a: /* 754e1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 754e20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 754e22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 754e24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754e25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x754e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_754e28: /* 754e28: mov eax, edi */
  eax = edi;
/* 754e2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 754e2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754e2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 754e2d: ret 4 */
  esp += 8; SPILL(); return;
L_754e30: /* 754e30: mov ecx, esi */
  ecx = esi;
/* 754e32: call 0x6c5272 */
  esp -= 4; W32(esp, 0x754e37u); SPILL(); f_6c5272(); if (g_unwind) return; RELOAD();
/* 754e37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 754e3a: je 0x754e4b */
  if (zf) goto L_754e4b;
L_754e3c: /* 754e3c: push 0x360 */
  { uint32_t v = 0x360u; esp -= 4; W32(esp, v); }
/* 754e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754e42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x754e48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 754e48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_754e4b: /* 754e4b: mov eax, esi */
  eax = esi;
/* 754e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754e4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 754e4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_754e80(void) {
  LOAD_REGS();
L_754e80: /* 754e80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754e82: push 0x9c8898 */
  { uint32_t v = 0x9c8898u; esp -= 4; W32(esp, v); }
/* 754e87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 754e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754e8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754e97: mov esi, ecx */
  esi = ecx;
/* 754e99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 754e9d: mov dword ptr [esi], 0xa04398 */
  W32((uint32_t)(esi), 0xa04398u);
/* 754ea3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 754eab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x754eb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 754eb1: mov ecx, esi */
  ecx = esi;
/* 754eb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 754ebb: call 0x6c5272 */
  esp -= 4; W32(esp, 0x754ec0u); SPILL(); f_6c5272(); if (g_unwind) return; RELOAD();
/* 754ec0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754ec4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754ec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 754ecc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 754ecf: ret  */
  esp += 4; SPILL(); return;
}

void f_754ef0(void) {
  LOAD_REGS();
L_754ef0: /* 754ef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 754ef2: push 0x9c88b8 */
  { uint32_t v = 0x9c88b8u; esp -= 4; W32(esp, v); }
/* 754ef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 754efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 754efe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 754f05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 754f06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754f07: mov esi, ecx */
  esi = ecx;
/* 754f09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 754f0d: call 0x6cbe29 */
  esp -= 4; W32(esp, 0x754f12u); SPILL(); f_6cbe29(); if (g_unwind) return; RELOAD();
/* 754f12: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 754f18: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 754f20: mov dword ptr [esi], 0xa04398 */
  W32((uint32_t)(esi), 0xa04398u);
/* 754f26: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x754f2cu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 754f2c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 754f30: mov eax, esi */
  eax = esi;
/* 754f32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 754f33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 754f3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 754f3d: ret  */
  esp += 4; SPILL(); return;
}

void f_754f60(void) {
  LOAD_REGS();
L_754f60: /* 754f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 754f61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 754f62: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 754f66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 754f67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 754f68: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 754f69: mov ebx, ecx */
  ebx = ecx;
/* 754f6b: call 0x6cb1a9 */
  esp -= 4; W32(esp, 0x754f70u); SPILL(); f_6cb1a9(); if (g_unwind) return; RELOAD();
/* 754f70: mov dword ptr [ebx], 0xa04398 */
  W32((uint32_t)(ebx), 0xa04398u);
/* 754f76: mov eax, dword ptr [ebp + 0x360] */
  eax = R32((uint32_t)(ebp + 0x360u));
/* 754f7c: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 754f82: mov ecx, dword ptr [ebp + 0x364] */
  ecx = R32((uint32_t)(ebp + 0x364u));
/* 754f88: mov dword ptr [ebx + 0x364], ecx */
  W32((uint32_t)(ebx + 0x364u), ecx);
/* 754f8e: mov edx, dword ptr [ebp + 0x368] */
  edx = R32((uint32_t)(ebp + 0x368u));
/* 754f94: mov dword ptr [ebx + 0x368], edx */
  W32((uint32_t)(ebx + 0x368u), edx);
/* 754f9a: mov eax, dword ptr [ebp + 0x36c] */
  eax = R32((uint32_t)(ebp + 0x36cu));
/* 754fa0: mov dword ptr [ebx + 0x36c], eax */
  W32((uint32_t)(ebx + 0x36cu), eax);
/* 754fa6: mov ecx, dword ptr [ebp + 0x370] */
  ecx = R32((uint32_t)(ebp + 0x370u));
/* 754fac: mov dword ptr [ebx + 0x370], ecx */
  W32((uint32_t)(ebx + 0x370u), ecx);
/* 754fb2: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 754fb8: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 754fbe: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 754fc4: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 754fca: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 754fd0: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 754fd6: mov edx, dword ptr [ebp + 0x380] */
  edx = R32((uint32_t)(ebp + 0x380u));
/* 754fdc: mov dword ptr [ebx + 0x380], edx */
  W32((uint32_t)(ebx + 0x380u), edx);
/* 754fe2: mov eax, dword ptr [ebp + 0x384] */
  eax = R32((uint32_t)(ebp + 0x384u));
/* 754fe8: mov edx, dword ptr [ebx + 0x388] */
  edx = R32((uint32_t)(ebx + 0x388u));
/* 754fee: mov dword ptr [ebx + 0x384], eax */
  W32((uint32_t)(ebx + 0x384u), eax);
/* 754ff4: mov ecx, dword ptr [ebp + 0x388] */
  ecx = R32((uint32_t)(ebp + 0x388u));
/* 754ffa: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 754ffc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 754fff: mov edi, edx */
  edi = edx;
/* 755001: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 755003: mov dword ptr [ebx + 0x388], edi */
  W32((uint32_t)(ebx + 0x388u), edi);
/* 755009: mov edx, dword ptr [ebp + 0x38c] */
  edx = R32((uint32_t)(ebp + 0x38cu));
/* 75500f: mov dword ptr [ebx + 0x38c], edx */
  W32((uint32_t)(ebx + 0x38cu), edx);
/* 755015: lea eax, [ebp + 0x390] */
  eax = (uint32_t)(ebp + 0x390u);
/* 75501b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75501d: lea ecx, [ebx + 0x390] */
  ecx = (uint32_t)(ebx + 0x390u);
/* 755023: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 755025: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 755028: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75502b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75502e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 755031: mov ecx, dword ptr [ebp + 0x39c] */
  ecx = R32((uint32_t)(ebp + 0x39cu));
/* 755037: mov dword ptr [ebx + 0x39c], ecx */
  W32((uint32_t)(ebx + 0x39cu), ecx);
/* 75503d: mov edx, dword ptr [ebp + 0x3a0] */
  edx = R32((uint32_t)(ebp + 0x3a0u));
/* 755043: mov dword ptr [ebx + 0x3a0], edx */
  W32((uint32_t)(ebx + 0x3a0u), edx);
/* 755049: lea esi, [ebp + 0x3a4] */
  esi = (uint32_t)(ebp + 0x3a4u);
/* 75504f: lea edi, [ebx + 0x3a4] */
  edi = (uint32_t)(ebx + 0x3a4u);
/* 755055: mov ecx, 0xd */
  ecx = 0xdu;
/* 75505a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75505c: mov esi, dword ptr [ebx + 0x3d8] */
  esi = R32((uint32_t)(ebx + 0x3d8u));
/* 755062: mov eax, dword ptr [ebp + 0x3d8] */
  eax = R32((uint32_t)(ebp + 0x3d8u));
/* 755068: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75506a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75506b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75506e: mov ecx, esi */
  ecx = esi;
/* 755070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755071: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 755073: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 755074: mov dword ptr [ebx + 0x3d8], ecx */
  W32((uint32_t)(ebx + 0x3d8u), ecx);
/* 75507a: mov eax, ebx */
  eax = ebx;
/* 75507c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75507d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7550d0(void) {
  LOAD_REGS();
L_7550d0: /* 7550d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7550d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7550d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7550d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7550d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7550d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7550d9: mov ebx, ecx */
  ebx = ecx;
/* 7550db: call 0x6c9494 */
  esp -= 4; W32(esp, 0x7550e0u); SPILL(); f_6c9494(); if (g_unwind) return; RELOAD();
/* 7550e0: mov eax, dword ptr [ebp + 0x360] */
  eax = R32((uint32_t)(ebp + 0x360u));
/* 7550e6: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 7550ec: mov ecx, dword ptr [ebp + 0x364] */
  ecx = R32((uint32_t)(ebp + 0x364u));
/* 7550f2: mov dword ptr [ebx + 0x364], ecx */
  W32((uint32_t)(ebx + 0x364u), ecx);
/* 7550f8: mov edx, dword ptr [ebp + 0x368] */
  edx = R32((uint32_t)(ebp + 0x368u));
/* 7550fe: mov dword ptr [ebx + 0x368], edx */
  W32((uint32_t)(ebx + 0x368u), edx);
/* 755104: mov eax, dword ptr [ebp + 0x36c] */
  eax = R32((uint32_t)(ebp + 0x36cu));
/* 75510a: mov dword ptr [ebx + 0x36c], eax */
  W32((uint32_t)(ebx + 0x36cu), eax);
/* 755110: mov ecx, dword ptr [ebp + 0x370] */
  ecx = R32((uint32_t)(ebp + 0x370u));
/* 755116: mov dword ptr [ebx + 0x370], ecx */
  W32((uint32_t)(ebx + 0x370u), ecx);
/* 75511c: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 755122: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 755128: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 75512e: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 755134: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 75513a: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 755140: mov edx, dword ptr [ebp + 0x380] */
  edx = R32((uint32_t)(ebp + 0x380u));
/* 755146: mov dword ptr [ebx + 0x380], edx */
  W32((uint32_t)(ebx + 0x380u), edx);
/* 75514c: mov eax, dword ptr [ebp + 0x384] */
  eax = R32((uint32_t)(ebp + 0x384u));
/* 755152: mov edx, dword ptr [ebx + 0x388] */
  edx = R32((uint32_t)(ebx + 0x388u));
/* 755158: mov dword ptr [ebx + 0x384], eax */
  W32((uint32_t)(ebx + 0x384u), eax);
/* 75515e: mov ecx, dword ptr [ebp + 0x388] */
  ecx = R32((uint32_t)(ebp + 0x388u));
/* 755164: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 755166: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 755169: mov edi, edx */
  edi = edx;
/* 75516b: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 75516d: mov dword ptr [ebx + 0x388], edi */
  W32((uint32_t)(ebx + 0x388u), edi);
/* 755173: mov edx, dword ptr [ebp + 0x38c] */
  edx = R32((uint32_t)(ebp + 0x38cu));
/* 755179: mov dword ptr [ebx + 0x38c], edx */
  W32((uint32_t)(ebx + 0x38cu), edx);
/* 75517f: lea eax, [ebp + 0x390] */
  eax = (uint32_t)(ebp + 0x390u);
/* 755185: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 755187: lea ecx, [ebx + 0x390] */
  ecx = (uint32_t)(ebx + 0x390u);
/* 75518d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75518f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 755192: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 755195: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 755198: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75519b: mov ecx, dword ptr [ebp + 0x39c] */
  ecx = R32((uint32_t)(ebp + 0x39cu));
/* 7551a1: mov dword ptr [ebx + 0x39c], ecx */
  W32((uint32_t)(ebx + 0x39cu), ecx);
/* 7551a7: mov edx, dword ptr [ebp + 0x3a0] */
  edx = R32((uint32_t)(ebp + 0x3a0u));
/* 7551ad: mov dword ptr [ebx + 0x3a0], edx */
  W32((uint32_t)(ebx + 0x3a0u), edx);
/* 7551b3: lea esi, [ebp + 0x3a4] */
  esi = (uint32_t)(ebp + 0x3a4u);
/* 7551b9: lea edi, [ebx + 0x3a4] */
  edi = (uint32_t)(ebx + 0x3a4u);
/* 7551bf: mov ecx, 0xd */
  ecx = 0xdu;
/* 7551c4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7551c6: mov esi, dword ptr [ebx + 0x3d8] */
  esi = R32((uint32_t)(ebx + 0x3d8u));
/* 7551cc: mov eax, dword ptr [ebp + 0x3d8] */
  eax = R32((uint32_t)(ebp + 0x3d8u));
/* 7551d2: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7551d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7551d5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7551d8: mov ecx, esi */
  ecx = esi;
/* 7551da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7551db: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7551dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7551de: mov dword ptr [ebx + 0x3d8], ecx */
  W32((uint32_t)(ebx + 0x3d8u), ecx);
/* 7551e4: mov eax, ebx */
  eax = ebx;
/* 7551e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7551e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755240(void) {
  LOAD_REGS();
L_755240: /* 755240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755241: mov esi, ecx */
  esi = ecx;
/* 755243: call 0x6c9877 */
  esp -= 4; W32(esp, 0x755248u); SPILL(); f_6c9877(); if (g_unwind) return; RELOAD();
/* 755248: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75524d: je 0x75525e */
  if (zf) goto L_75525e;
L_75524f: /* 75524f: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* 755254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755255: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75525bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75525b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75525e: /* 75525e: mov eax, esi */
  eax = esi;
/* 755260: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755280(void) {
  LOAD_REGS();
L_755280: /* 755280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 755281: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 755285: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755288: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755289: mov esi, ecx */
  esi = ecx;
/* 75528b: je 0x7552c0 */
  if (zf) goto L_7552c0;
L_75528d: /* 75528d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 755290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755291: push 0x6c9877 */
  { uint32_t v = 0x6c9877u; esp -= 4; W32(esp, v); }
/* 755296: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 755299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75529a: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* 75529f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7552a0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7552a5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7552a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7552a8: je 0x7552b8 */
  if (zf) goto L_7552b8;
L_7552aa: /* 7552aa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7552b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7552b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7552b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7552b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7552b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7552b8: /* 7552b8: mov eax, edi */
  eax = edi;
/* 7552ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7552bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7552bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7552bd: ret 4 */
  esp += 8; SPILL(); return;
L_7552c0: /* 7552c0: mov ecx, esi */
  ecx = esi;
/* 7552c2: call 0x6c9877 */
  esp -= 4; W32(esp, 0x7552c7u); SPILL(); f_6c9877(); if (g_unwind) return; RELOAD();
/* 7552c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7552ca: je 0x7552db */
  if (zf) goto L_7552db;
L_7552cc: /* 7552cc: push 0x3dc */
  { uint32_t v = 0x3dcu; esp -= 4; W32(esp, v); }
/* 7552d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7552d2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7552d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7552d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7552db: /* 7552db: mov eax, esi */
  eax = esi;
/* 7552dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7552de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7552df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755310(void) {
  LOAD_REGS();
L_755310: /* 755310: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 755312: push 0x9c88d8 */
  { uint32_t v = 0x9c88d8u; esp -= 4; W32(esp, v); }
/* 755317: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75531d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75531e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 755325: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 755326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755327: mov esi, ecx */
  esi = ecx;
/* 755329: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75532d: mov dword ptr [esi], 0xa04578 */
  W32((uint32_t)(esi), 0xa04578u);
/* 755333: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75533b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x755341u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 755341: mov ecx, esi */
  ecx = esi;
/* 755343: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75534b: call 0x6c5272 */
  esp -= 4; W32(esp, 0x755350u); SPILL(); f_6c5272(); if (g_unwind) return; RELOAD();
/* 755350: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 755354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755355: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75535c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75535f: ret  */
  esp += 4; SPILL(); return;
}

void f_755380(void) {
  LOAD_REGS();
L_755380: /* 755380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 755382: push 0x9c88f8 */
  { uint32_t v = 0x9c88f8u; esp -= 4; W32(esp, v); }
/* 755387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75538d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75538e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 755395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 755396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755397: mov esi, ecx */
  esi = ecx;
/* 755399: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75539d: call 0x6cbe29 */
  esp -= 4; W32(esp, 0x7553a2u); SPILL(); f_6cbe29(); if (g_unwind) return; RELOAD();
/* 7553a2: lea ecx, [esi + 0x36c] */
  ecx = (uint32_t)(esi + 0x36cu);
/* 7553a8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7553b0: mov dword ptr [esi], 0xa04578 */
  W32((uint32_t)(esi), 0xa04578u);
/* 7553b6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7553bcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7553bc: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 7553c2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7553c8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7553c8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7553cc: mov eax, esi */
  eax = esi;
/* 7553ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7553cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7553d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7553d9: ret  */
  esp += 4; SPILL(); return;
}

void f_755400(void) {
  LOAD_REGS();
L_755400: /* 755400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755401: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755402: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755407: mov esi, ecx */
  esi = ecx;
/* 755409: call 0x6cb1a9 */
  esp -= 4; W32(esp, 0x75540eu); SPILL(); f_6cb1a9(); if (g_unwind) return; RELOAD();
/* 75540e: mov dword ptr [esi], 0xa04578 */
  W32((uint32_t)(esi), 0xa04578u);
/* 755414: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 75541a: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 755420: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 755426: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 75542c: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 755432: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 755438: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* 75543e: mov dword ptr [esi + 0x36c], eax */
  W32((uint32_t)(esi + 0x36cu), eax);
/* 755444: mov ecx, dword ptr [edi + 0x370] */
  ecx = R32((uint32_t)(edi + 0x370u));
/* 75544a: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 755450: mov dword ptr [esi + 0x370], ecx */
  W32((uint32_t)(esi + 0x370u), ecx);
/* 755456: mov edx, dword ptr [edi + 0x374] */
  edx = R32((uint32_t)(edi + 0x374u));
/* 75545c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75545e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 755461: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 755463: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 755469: lea eax, [edi + 0x378] */
  eax = (uint32_t)(edi + 0x378u);
/* 75546f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 755471: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 755477: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 755479: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75547c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75547f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 755482: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 755485: lea ecx, [edi + 0x384] */
  ecx = (uint32_t)(edi + 0x384u);
/* 75548b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75548d: lea edx, [esi + 0x384] */
  edx = (uint32_t)(esi + 0x384u);
/* 755493: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 755495: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 755498: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 75549b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 75549e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7554a1: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 7554a7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7554a9: lea eax, [esi + 0x390] */
  eax = (uint32_t)(esi + 0x390u);
/* 7554af: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7554b1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7554b4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7554b7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7554ba: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7554bd: lea eax, [edi + 0x39c] */
  eax = (uint32_t)(edi + 0x39cu);
/* 7554c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7554c5: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7554cb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7554cd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7554d0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7554d3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7554d6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7554d9: lea ecx, [edi + 0x3a8] */
  ecx = (uint32_t)(edi + 0x3a8u);
/* 7554df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7554e1: lea edx, [esi + 0x3a8] */
  edx = (uint32_t)(esi + 0x3a8u);
/* 7554e7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7554e9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7554ec: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7554ef: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7554f2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7554f5: lea edx, [edi + 0x3b4] */
  edx = (uint32_t)(edi + 0x3b4u);
/* 7554fb: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7554fd: lea eax, [esi + 0x3b4] */
  eax = (uint32_t)(esi + 0x3b4u);
/* 755503: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 755505: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 755508: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 75550b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75550e: mov ecx, dword ptr [esi + 0x3c0] */
  ecx = R32((uint32_t)(esi + 0x3c0u));
/* 755514: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 755517: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 75551d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75551f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 755522: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 755524: mov dword ptr [esi + 0x3c0], ecx */
  W32((uint32_t)(esi + 0x3c0u), ecx);
/* 75552a: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 755530: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 755536: mov eax, esi */
  eax = esi;
/* 755538: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755539: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75553a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755590(void) {
  LOAD_REGS();
L_755590: /* 755590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755592: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755596: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755597: mov esi, ecx */
  esi = ecx;
/* 755599: call 0x6c9494 */
  esp -= 4; W32(esp, 0x75559eu); SPILL(); f_6c9494(); if (g_unwind) return; RELOAD();
/* 75559e: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 7555a4: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 7555aa: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 7555b0: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 7555b6: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 7555bc: mov dword ptr [esi + 0x368], edx */
  W32((uint32_t)(esi + 0x368u), edx);
/* 7555c2: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* 7555c8: mov dword ptr [esi + 0x36c], eax */
  W32((uint32_t)(esi + 0x36cu), eax);
/* 7555ce: mov ecx, dword ptr [edi + 0x370] */
  ecx = R32((uint32_t)(edi + 0x370u));
/* 7555d4: mov eax, dword ptr [esi + 0x374] */
  eax = R32((uint32_t)(esi + 0x374u));
/* 7555da: mov dword ptr [esi + 0x370], ecx */
  W32((uint32_t)(esi + 0x370u), ecx);
/* 7555e0: mov edx, dword ptr [edi + 0x374] */
  edx = R32((uint32_t)(edi + 0x374u));
/* 7555e6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7555e8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7555eb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7555ed: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 7555f3: lea eax, [edi + 0x378] */
  eax = (uint32_t)(edi + 0x378u);
/* 7555f9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7555fb: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 755601: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 755603: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 755606: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 755609: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75560c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75560f: lea ecx, [edi + 0x384] */
  ecx = (uint32_t)(edi + 0x384u);
/* 755615: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 755617: lea edx, [esi + 0x384] */
  edx = (uint32_t)(esi + 0x384u);
/* 75561d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75561f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 755622: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 755625: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 755628: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 75562b: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 755631: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 755633: lea eax, [esi + 0x390] */
  eax = (uint32_t)(esi + 0x390u);
/* 755639: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75563b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75563e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 755641: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 755644: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 755647: lea eax, [edi + 0x39c] */
  eax = (uint32_t)(edi + 0x39cu);
/* 75564d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75564f: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 755655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 755657: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75565a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75565d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 755660: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 755663: lea ecx, [edi + 0x3a8] */
  ecx = (uint32_t)(edi + 0x3a8u);
/* 755669: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75566b: lea edx, [esi + 0x3a8] */
  edx = (uint32_t)(esi + 0x3a8u);
/* 755671: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 755673: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 755676: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 755679: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 75567c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 75567f: lea edx, [edi + 0x3b4] */
  edx = (uint32_t)(edi + 0x3b4u);
/* 755685: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 755687: lea eax, [esi + 0x3b4] */
  eax = (uint32_t)(esi + 0x3b4u);
/* 75568d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75568f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 755692: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 755695: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 755698: mov ecx, dword ptr [esi + 0x3c0] */
  ecx = R32((uint32_t)(esi + 0x3c0u));
/* 75569e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7556a1: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 7556a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7556a9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7556ac: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7556ae: mov dword ptr [esi + 0x3c0], ecx */
  W32((uint32_t)(esi + 0x3c0u), ecx);
/* 7556b4: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 7556ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7556bb: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 7556c1: mov eax, esi */
  eax = esi;
/* 7556c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7556c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755720(void) {
  LOAD_REGS();
L_755720: /* 755720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755721: mov esi, ecx */
  esi = ecx;
/* 755723: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x755728u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 755728: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75572d: je 0x75573e */
  if (zf) goto L_75573e;
L_75572f: /* 75572f: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 755734: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755735: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75573bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75573b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75573e: /* 75573e: mov eax, esi */
  eax = esi;
/* 755740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755741: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755760(void) {
  LOAD_REGS();
L_755760: /* 755760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 755761: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 755765: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755769: mov esi, ecx */
  esi = ecx;
/* 75576b: je 0x7557a0 */
  if (zf) goto L_7557a0;
L_75576d: /* 75576d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 755770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755771: push 0x6c1e88 */
  { uint32_t v = 0x6c1e88u; esp -= 4; W32(esp, v); }
/* 755776: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 755779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75577a: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 75577f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755780: call 0x99ca3d */
  esp -= 4; W32(esp, 0x755785u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 755785: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755788: je 0x755798 */
  if (zf) goto L_755798;
L_75578a: /* 75578a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 755790: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 755792: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 755794: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755795: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x755798u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_755798: /* 755798: mov eax, edi */
  eax = edi;
/* 75579a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75579b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75579c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75579d: ret 4 */
  esp += 8; SPILL(); return;
L_7557a0: /* 7557a0: mov ecx, esi */
  ecx = esi;
/* 7557a2: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x7557a7u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 7557a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7557aa: je 0x7557bb */
  if (zf) goto L_7557bb;
L_7557ac: /* 7557ac: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7557b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7557b2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7557b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7557b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7557bb: /* 7557bb: mov eax, esi */
  eax = esi;
/* 7557bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7557be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7557bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7557f0(void) {
  LOAD_REGS();
L_7557f0: /* 7557f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7557f2: push 0x9c8918 */
  { uint32_t v = 0x9c8918u; esp -= 4; W32(esp, v); }
/* 7557f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7557fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7557fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 755805: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 755806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755807: mov esi, ecx */
  esi = ecx;
/* 755809: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75580d: mov dword ptr [esi], 0xa04768 */
  W32((uint32_t)(esi), 0xa04768u);
/* 755813: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75581b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x755821u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 755821: mov ecx, esi */
  ecx = esi;
/* 755823: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75582b: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x755830u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 755830: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 755834: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755835: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75583c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75583f: ret  */
  esp += 4; SPILL(); return;
}

void f_755860(void) {
  LOAD_REGS();
L_755860: /* 755860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755861: mov esi, ecx */
  esi = ecx;
/* 755863: call 0x6c727a */
  esp -= 4; W32(esp, 0x755868u); SPILL(); f_6c727a(); if (g_unwind) return; RELOAD();
/* 755868: mov dword ptr [esi], 0xa04768 */
  W32((uint32_t)(esi), 0xa04768u);
/* 75586e: mov eax, esi */
  eax = esi;
/* 755870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755871: ret  */
  esp += 4; SPILL(); return;
}

void f_755890(void) {
  LOAD_REGS();
L_755890: /* 755890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755892: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755897: mov esi, ecx */
  esi = ecx;
/* 755899: call 0x6cb992 */
  esp -= 4; W32(esp, 0x75589eu); SPILL(); f_6cb992(); if (g_unwind) return; RELOAD();
/* 75589e: mov dword ptr [esi], 0xa04768 */
  W32((uint32_t)(esi), 0xa04768u);
/* 7558a4: mov eax, dword ptr [edi + 0x3c8] */
  eax = R32((uint32_t)(edi + 0x3c8u));
/* 7558aa: mov dword ptr [esi + 0x3c8], eax */
  W32((uint32_t)(esi + 0x3c8u), eax);
/* 7558b0: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 7558b6: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 7558bc: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 7558c2: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 7558c8: mov eax, dword ptr [edi + 0x3d4] */
  eax = R32((uint32_t)(edi + 0x3d4u));
/* 7558ce: mov dword ptr [esi + 0x3d4], eax */
  W32((uint32_t)(esi + 0x3d4u), eax);
/* 7558d4: mov ecx, dword ptr [edi + 0x3d8] */
  ecx = R32((uint32_t)(edi + 0x3d8u));
/* 7558da: mov eax, dword ptr [esi + 0x3d8] */
  eax = R32((uint32_t)(esi + 0x3d8u));
/* 7558e0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7558e2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7558e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7558e7: mov dword ptr [esi + 0x3d8], eax */
  W32((uint32_t)(esi + 0x3d8u), eax);
/* 7558ed: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 7558f3: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 7558f9: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 7558ff: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 755905: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 75590b: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 755911: mov edx, dword ptr [edi + 0x3e8] */
  edx = R32((uint32_t)(edi + 0x3e8u));
/* 755917: mov dword ptr [esi + 0x3e8], edx */
  W32((uint32_t)(esi + 0x3e8u), edx);
/* 75591d: mov eax, dword ptr [edi + 0x3ec] */
  eax = R32((uint32_t)(edi + 0x3ecu));
/* 755923: mov dword ptr [esi + 0x3ec], eax */
  W32((uint32_t)(esi + 0x3ecu), eax);
/* 755929: mov ecx, dword ptr [edi + 0x3f0] */
  ecx = R32((uint32_t)(edi + 0x3f0u));
/* 75592f: mov dword ptr [esi + 0x3f0], ecx */
  W32((uint32_t)(esi + 0x3f0u), ecx);
/* 755935: mov edx, dword ptr [edi + 0x3f4] */
  edx = R32((uint32_t)(edi + 0x3f4u));
/* 75593b: mov dword ptr [esi + 0x3f4], edx */
  W32((uint32_t)(esi + 0x3f4u), edx);
/* 755941: mov eax, dword ptr [edi + 0x3f8] */
  eax = R32((uint32_t)(edi + 0x3f8u));
/* 755947: mov dword ptr [esi + 0x3f8], eax */
  W32((uint32_t)(esi + 0x3f8u), eax);
/* 75594d: mov ecx, dword ptr [edi + 0x3fc] */
  ecx = R32((uint32_t)(edi + 0x3fcu));
/* 755953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755954: mov dword ptr [esi + 0x3fc], ecx */
  W32((uint32_t)(esi + 0x3fcu), ecx);
/* 75595a: mov eax, esi */
  eax = esi;
/* 75595c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75595d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7559a0(void) {
  LOAD_REGS();
L_7559a0: /* 7559a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7559a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7559a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7559a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7559a7: mov esi, ecx */
  esi = ecx;
/* 7559a9: call 0x6cd067 */
  esp -= 4; W32(esp, 0x7559aeu); SPILL(); f_6cd067(); if (g_unwind) return; RELOAD();
/* 7559ae: mov eax, dword ptr [edi + 0x3c8] */
  eax = R32((uint32_t)(edi + 0x3c8u));
/* 7559b4: mov dword ptr [esi + 0x3c8], eax */
  W32((uint32_t)(esi + 0x3c8u), eax);
/* 7559ba: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 7559c0: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 7559c6: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 7559cc: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 7559d2: mov eax, dword ptr [edi + 0x3d4] */
  eax = R32((uint32_t)(edi + 0x3d4u));
/* 7559d8: mov dword ptr [esi + 0x3d4], eax */
  W32((uint32_t)(esi + 0x3d4u), eax);
/* 7559de: mov ecx, dword ptr [edi + 0x3d8] */
  ecx = R32((uint32_t)(edi + 0x3d8u));
/* 7559e4: mov eax, dword ptr [esi + 0x3d8] */
  eax = R32((uint32_t)(esi + 0x3d8u));
/* 7559ea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7559ec: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7559ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7559f1: mov dword ptr [esi + 0x3d8], eax */
  W32((uint32_t)(esi + 0x3d8u), eax);
/* 7559f7: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 7559fd: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 755a03: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 755a09: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 755a0f: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 755a15: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 755a1b: mov edx, dword ptr [edi + 0x3e8] */
  edx = R32((uint32_t)(edi + 0x3e8u));
/* 755a21: mov dword ptr [esi + 0x3e8], edx */
  W32((uint32_t)(esi + 0x3e8u), edx);
/* 755a27: mov eax, dword ptr [edi + 0x3ec] */
  eax = R32((uint32_t)(edi + 0x3ecu));
/* 755a2d: mov dword ptr [esi + 0x3ec], eax */
  W32((uint32_t)(esi + 0x3ecu), eax);
/* 755a33: mov ecx, dword ptr [edi + 0x3f0] */
  ecx = R32((uint32_t)(edi + 0x3f0u));
/* 755a39: mov dword ptr [esi + 0x3f0], ecx */
  W32((uint32_t)(esi + 0x3f0u), ecx);
/* 755a3f: mov edx, dword ptr [edi + 0x3f4] */
  edx = R32((uint32_t)(edi + 0x3f4u));
/* 755a45: mov dword ptr [esi + 0x3f4], edx */
  W32((uint32_t)(esi + 0x3f4u), edx);
/* 755a4b: mov eax, dword ptr [edi + 0x3f8] */
  eax = R32((uint32_t)(edi + 0x3f8u));
/* 755a51: mov dword ptr [esi + 0x3f8], eax */
  W32((uint32_t)(esi + 0x3f8u), eax);
/* 755a57: mov ecx, dword ptr [edi + 0x3fc] */
  ecx = R32((uint32_t)(edi + 0x3fcu));
/* 755a5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755a5e: mov dword ptr [esi + 0x3fc], ecx */
  W32((uint32_t)(esi + 0x3fcu), ecx);
/* 755a64: mov eax, esi */
  eax = esi;
/* 755a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755a67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755ab0(void) {
  LOAD_REGS();
L_755ab0: /* 755ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755ab1: mov esi, ecx */
  esi = ecx;
/* 755ab3: call 0x6c18b6 */
  esp -= 4; W32(esp, 0x755ab8u); SPILL(); f_6c18b6(); if (g_unwind) return; RELOAD();
/* 755ab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755abd: je 0x755ace */
  if (zf) goto L_755ace;
L_755abf: /* 755abf: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 755ac4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755ac5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x755acbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 755acb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_755ace: /* 755ace: mov eax, esi */
  eax = esi;
/* 755ad0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755ad1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755af0(void) {
  LOAD_REGS();
L_755af0: /* 755af0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 755af1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 755af5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755af8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755af9: mov esi, ecx */
  esi = ecx;
/* 755afb: je 0x755b30 */
  if (zf) goto L_755b30;
L_755afd: /* 755afd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 755b00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755b01: push 0x6c18b6 */
  { uint32_t v = 0x6c18b6u; esp -= 4; W32(esp, v); }
/* 755b06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 755b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 755b0a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 755b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755b10: call 0x99ca3d */
  esp -= 4; W32(esp, 0x755b15u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 755b15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755b18: je 0x755b28 */
  if (zf) goto L_755b28;
L_755b1a: /* 755b1a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 755b20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 755b22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 755b24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755b25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x755b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_755b28: /* 755b28: mov eax, edi */
  eax = edi;
/* 755b2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755b2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755b2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 755b2d: ret 4 */
  esp += 8; SPILL(); return;
L_755b30: /* 755b30: mov ecx, esi */
  ecx = esi;
/* 755b32: call 0x6c18b6 */
  esp -= 4; W32(esp, 0x755b37u); SPILL(); f_6c18b6(); if (g_unwind) return; RELOAD();
/* 755b37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755b3a: je 0x755b4b */
  if (zf) goto L_755b4b;
L_755b3c: /* 755b3c: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 755b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755b42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x755b48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 755b48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_755b4b: /* 755b4b: mov eax, esi */
  eax = esi;
/* 755b4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 755b4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755b80(void) {
  LOAD_REGS();
L_755b80: /* 755b80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 755b82: push 0x9c8938 */
  { uint32_t v = 0x9c8938u; esp -= 4; W32(esp, v); }
/* 755b87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 755b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 755b8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 755b95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 755b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755b97: mov esi, ecx */
  esi = ecx;
/* 755b99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 755b9d: mov dword ptr [esi], 0xa04958 */
  W32((uint32_t)(esi), 0xa04958u);
/* 755ba3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 755bab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x755bb1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 755bb1: mov ecx, esi */
  ecx = esi;
/* 755bb3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 755bbb: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x755bc0u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 755bc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 755bc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755bc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 755bcc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 755bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_755bf0(void) {
  LOAD_REGS();
L_755bf0: /* 755bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755bf1: mov esi, ecx */
  esi = ecx;
/* 755bf3: call 0x6c727a */
  esp -= 4; W32(esp, 0x755bf8u); SPILL(); f_6c727a(); if (g_unwind) return; RELOAD();
/* 755bf8: mov dword ptr [esi], 0xa04958 */
  W32((uint32_t)(esi), 0xa04958u);
/* 755bfe: mov eax, esi */
  eax = esi;
/* 755c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755c01: ret  */
  esp += 4; SPILL(); return;
}

void f_755c20(void) {
  LOAD_REGS();
L_755c20: /* 755c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755c21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755c22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755c26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755c27: mov esi, ecx */
  esi = ecx;
/* 755c29: call 0x6cb992 */
  esp -= 4; W32(esp, 0x755c2eu); SPILL(); f_6cb992(); if (g_unwind) return; RELOAD();
/* 755c2e: mov dword ptr [esi], 0xa04958 */
  W32((uint32_t)(esi), 0xa04958u);
/* 755c34: mov eax, dword ptr [edi + 0x3c8] */
  eax = R32((uint32_t)(edi + 0x3c8u));
/* 755c3a: mov dword ptr [esi + 0x3c8], eax */
  W32((uint32_t)(esi + 0x3c8u), eax);
/* 755c40: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 755c46: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 755c4c: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 755c52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755c53: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 755c59: mov eax, esi */
  eax = esi;
/* 755c5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755c5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755c70(void) {
  LOAD_REGS();
L_755c70: /* 755c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755c71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755c72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755c76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755c77: mov esi, ecx */
  esi = ecx;
/* 755c79: call 0x6cd067 */
  esp -= 4; W32(esp, 0x755c7eu); SPILL(); f_6cd067(); if (g_unwind) return; RELOAD();
/* 755c7e: mov eax, dword ptr [edi + 0x3c8] */
  eax = R32((uint32_t)(edi + 0x3c8u));
/* 755c84: mov dword ptr [esi + 0x3c8], eax */
  W32((uint32_t)(esi + 0x3c8u), eax);
/* 755c8a: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 755c90: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 755c96: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 755c9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755c9d: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 755ca3: mov eax, esi */
  eax = esi;
/* 755ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755ca6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755cc0(void) {
  LOAD_REGS();
L_755cc0: /* 755cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755cc1: mov esi, ecx */
  esi = ecx;
/* 755cc3: call 0x6c9e62 */
  esp -= 4; W32(esp, 0x755cc8u); SPILL(); f_6c9e62(); if (g_unwind) return; RELOAD();
/* 755cc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755ccd: je 0x755cde */
  if (zf) goto L_755cde;
L_755ccf: /* 755ccf: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 755cd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755cd5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x755cdbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 755cdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_755cde: /* 755cde: mov eax, esi */
  eax = esi;
/* 755ce0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755ce1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755d00(void) {
  LOAD_REGS();
L_755d00: /* 755d00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 755d01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 755d05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755d08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755d09: mov esi, ecx */
  esi = ecx;
/* 755d0b: je 0x755d40 */
  if (zf) goto L_755d40;
L_755d0d: /* 755d0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 755d10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755d11: push 0x6c9e62 */
  { uint32_t v = 0x6c9e62u; esp -= 4; W32(esp, v); }
/* 755d16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 755d19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 755d1a: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 755d1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755d20: call 0x99ca3d */
  esp -= 4; W32(esp, 0x755d25u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 755d25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755d28: je 0x755d38 */
  if (zf) goto L_755d38;
L_755d2a: /* 755d2a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 755d30: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 755d32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 755d34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755d35: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x755d38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_755d38: /* 755d38: mov eax, edi */
  eax = edi;
/* 755d3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755d3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755d3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 755d3d: ret 4 */
  esp += 8; SPILL(); return;
L_755d40: /* 755d40: mov ecx, esi */
  ecx = esi;
/* 755d42: call 0x6c9e62 */
  esp -= 4; W32(esp, 0x755d47u); SPILL(); f_6c9e62(); if (g_unwind) return; RELOAD();
/* 755d47: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755d4a: je 0x755d5b */
  if (zf) goto L_755d5b;
L_755d4c: /* 755d4c: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 755d51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755d52: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x755d58u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 755d58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_755d5b: /* 755d5b: mov eax, esi */
  eax = esi;
/* 755d5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755d5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 755d5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755d90(void) {
  LOAD_REGS();
L_755d90: /* 755d90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 755d92: push 0x9c8958 */
  { uint32_t v = 0x9c8958u; esp -= 4; W32(esp, v); }
/* 755d97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 755d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 755d9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 755da5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 755da6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755da7: mov esi, ecx */
  esi = ecx;
/* 755da9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 755dad: mov dword ptr [esi], 0xa04b48 */
  W32((uint32_t)(esi), 0xa04b48u);
/* 755db3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 755dbb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x755dc1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 755dc1: mov ecx, esi */
  ecx = esi;
/* 755dc3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 755dcb: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x755dd0u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 755dd0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 755dd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755dd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 755ddc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 755ddf: ret  */
  esp += 4; SPILL(); return;
}

void f_755e00(void) {
  LOAD_REGS();
L_755e00: /* 755e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755e01: mov esi, ecx */
  esi = ecx;
/* 755e03: call 0x6c727a */
  esp -= 4; W32(esp, 0x755e08u); SPILL(); f_6c727a(); if (g_unwind) return; RELOAD();
/* 755e08: mov dword ptr [esi], 0xa04b48 */
  W32((uint32_t)(esi), 0xa04b48u);
/* 755e0e: mov eax, esi */
  eax = esi;
/* 755e10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755e11: ret  */
  esp += 4; SPILL(); return;
}

void f_755e30(void) {
  LOAD_REGS();
L_755e30: /* 755e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755e31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755e32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755e36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755e37: mov esi, ecx */
  esi = ecx;
/* 755e39: call 0x6cb992 */
  esp -= 4; W32(esp, 0x755e3eu); SPILL(); f_6cb992(); if (g_unwind) return; RELOAD();
/* 755e3e: mov dword ptr [esi], 0xa04b48 */
  W32((uint32_t)(esi), 0xa04b48u);
/* 755e44: mov al, byte ptr [edi + 0x3c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3c8u))) & 0xffu);
/* 755e4a: mov byte ptr [esi + 0x3c8], al */
  W8((uint32_t)(esi + 0x3c8u), (eax & 0xffu));
/* 755e50: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 755e56: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 755e5c: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 755e62: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 755e68: mov eax, dword ptr [edi + 0x3d4] */
  eax = R32((uint32_t)(edi + 0x3d4u));
/* 755e6e: mov dword ptr [esi + 0x3d4], eax */
  W32((uint32_t)(esi + 0x3d4u), eax);
/* 755e74: mov ecx, dword ptr [edi + 0x3d8] */
  ecx = R32((uint32_t)(edi + 0x3d8u));
/* 755e7a: mov dword ptr [esi + 0x3d8], ecx */
  W32((uint32_t)(esi + 0x3d8u), ecx);
/* 755e80: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 755e86: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 755e8c: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 755e92: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 755e98: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 755e9e: mov eax, dword ptr [esi + 0x3e8] */
  eax = R32((uint32_t)(esi + 0x3e8u));
/* 755ea4: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 755eaa: mov edx, dword ptr [edi + 0x3e8] */
  edx = R32((uint32_t)(edi + 0x3e8u));
/* 755eb0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 755eb2: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 755eb5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 755eb7: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 755ebd: mov eax, dword ptr [edi + 0x3ec] */
  eax = R32((uint32_t)(edi + 0x3ecu));
/* 755ec3: mov dword ptr [esi + 0x3ec], eax */
  W32((uint32_t)(esi + 0x3ecu), eax);
/* 755ec9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755eca: mov eax, esi */
  eax = esi;
/* 755ecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755ecd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755f00(void) {
  LOAD_REGS();
L_755f00: /* 755f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755f01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755f02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 755f06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 755f07: mov esi, ecx */
  esi = ecx;
/* 755f09: call 0x6cd067 */
  esp -= 4; W32(esp, 0x755f0eu); SPILL(); f_6cd067(); if (g_unwind) return; RELOAD();
/* 755f0e: mov al, byte ptr [edi + 0x3c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3c8u))) & 0xffu);
/* 755f14: mov byte ptr [esi + 0x3c8], al */
  W8((uint32_t)(esi + 0x3c8u), (eax & 0xffu));
/* 755f1a: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 755f20: mov dword ptr [esi + 0x3cc], ecx */
  W32((uint32_t)(esi + 0x3ccu), ecx);
/* 755f26: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 755f2c: mov dword ptr [esi + 0x3d0], edx */
  W32((uint32_t)(esi + 0x3d0u), edx);
/* 755f32: mov eax, dword ptr [edi + 0x3d4] */
  eax = R32((uint32_t)(edi + 0x3d4u));
/* 755f38: mov dword ptr [esi + 0x3d4], eax */
  W32((uint32_t)(esi + 0x3d4u), eax);
/* 755f3e: mov ecx, dword ptr [edi + 0x3d8] */
  ecx = R32((uint32_t)(edi + 0x3d8u));
/* 755f44: mov dword ptr [esi + 0x3d8], ecx */
  W32((uint32_t)(esi + 0x3d8u), ecx);
/* 755f4a: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 755f50: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 755f56: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 755f5c: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 755f62: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 755f68: mov eax, dword ptr [esi + 0x3e8] */
  eax = R32((uint32_t)(esi + 0x3e8u));
/* 755f6e: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 755f74: mov edx, dword ptr [edi + 0x3e8] */
  edx = R32((uint32_t)(edi + 0x3e8u));
/* 755f7a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 755f7c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 755f7f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 755f81: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 755f87: mov eax, dword ptr [edi + 0x3ec] */
  eax = R32((uint32_t)(edi + 0x3ecu));
/* 755f8d: mov dword ptr [esi + 0x3ec], eax */
  W32((uint32_t)(esi + 0x3ecu), eax);
/* 755f93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 755f94: mov eax, esi */
  eax = esi;
/* 755f96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755f97: ret 4 */
  esp += 8; SPILL(); return;
}

void f_755fd0(void) {
  LOAD_REGS();
L_755fd0: /* 755fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755fd1: mov esi, ecx */
  esi = ecx;
/* 755fd3: call 0x6ccfb3 */
  esp -= 4; W32(esp, 0x755fd8u); SPILL(); f_6ccfb3(); if (g_unwind) return; RELOAD();
/* 755fd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 755fdd: je 0x755fee */
  if (zf) goto L_755fee;
L_755fdf: /* 755fdf: push 0x3f0 */
  { uint32_t v = 0x3f0u; esp -= 4; W32(esp, v); }
/* 755fe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 755fe5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x755febu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 755feb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_755fee: /* 755fee: mov eax, esi */
  eax = esi;
/* 755ff0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 755ff1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_756010(void) {
  LOAD_REGS();
L_756010: /* 756010: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 756011: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 756015: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 756018: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756019: mov esi, ecx */
  esi = ecx;
/* 75601b: je 0x756050 */
  if (zf) goto L_756050;
L_75601d: /* 75601d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 756020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 756021: push 0x6ccfb3 */
  { uint32_t v = 0x6ccfb3u; esp -= 4; W32(esp, v); }
/* 756026: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 756029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75602a: push 0x3f0 */
  { uint32_t v = 0x3f0u; esp -= 4; W32(esp, v); }
/* 75602f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756030: call 0x99ca3d */
  esp -= 4; W32(esp, 0x756035u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 756035: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 756038: je 0x756048 */
  if (zf) goto L_756048;
L_75603a: /* 75603a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 756040: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 756042: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 756044: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 756045: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x756048u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_756048: /* 756048: mov eax, edi */
  eax = edi;
/* 75604a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75604b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75604c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75604d: ret 4 */
  esp += 8; SPILL(); return;
L_756050: /* 756050: mov ecx, esi */
  ecx = esi;
/* 756052: call 0x6ccfb3 */
  esp -= 4; W32(esp, 0x756057u); SPILL(); f_6ccfb3(); if (g_unwind) return; RELOAD();
/* 756057: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75605a: je 0x75606b */
  if (zf) goto L_75606b;
L_75605c: /* 75605c: push 0x3f0 */
  { uint32_t v = 0x3f0u; esp -= 4; W32(esp, v); }
/* 756061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756062: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x756068u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 756068: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75606b: /* 75606b: mov eax, esi */
  eax = esi;
/* 75606d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75606e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75606f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7560a0(void) {
  LOAD_REGS();
L_7560a0: /* 7560a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7560a2: push 0x9c8978 */
  { uint32_t v = 0x9c8978u; esp -= 4; W32(esp, v); }
/* 7560a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7560ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7560ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7560b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7560b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7560b7: mov esi, ecx */
  esi = ecx;
/* 7560b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7560bd: mov dword ptr [esi], 0xa04d38 */
  W32((uint32_t)(esi), 0xa04d38u);
/* 7560c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7560cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7560d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7560d1: mov ecx, esi */
  ecx = esi;
/* 7560d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7560db: call 0x6c1e88 */
  esp -= 4; W32(esp, 0x7560e0u); SPILL(); f_6c1e88(); if (g_unwind) return; RELOAD();
/* 7560e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7560e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7560e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7560ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7560ef: ret  */
  esp += 4; SPILL(); return;
}

void f_756110(void) {
  LOAD_REGS();
L_756110: /* 756110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756111: mov esi, ecx */
  esi = ecx;
/* 756113: call 0x6c727a */
  esp -= 4; W32(esp, 0x756118u); SPILL(); f_6c727a(); if (g_unwind) return; RELOAD();
/* 756118: mov dword ptr [esi], 0xa04d38 */
  W32((uint32_t)(esi), 0xa04d38u);
/* 75611e: mov eax, esi */
  eax = esi;
/* 756120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 756121: ret  */
  esp += 4; SPILL(); return;
}

void f_756140(void) {
  LOAD_REGS();
L_756140: /* 756140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 756144: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756145: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 756146: mov esi, ecx */
  esi = ecx;
/* 756148: call 0x6cb992 */
  esp -= 4; W32(esp, 0x75614du); SPILL(); f_6cb992(); if (g_unwind) return; RELOAD();
/* 75614d: mov dword ptr [esi], 0xa04d38 */
  W32((uint32_t)(esi), 0xa04d38u);
/* 756153: mov eax, esi */
  eax = esi;
/* 756155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 756156: ret 4 */
  esp += 8; SPILL(); return;
}

void f_756170(void) {
  LOAD_REGS();
L_756170: /* 756170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 756174: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 756176: mov esi, ecx */
  esi = ecx;
/* 756178: call 0x6cd067 */
  esp -= 4; W32(esp, 0x75617du); SPILL(); f_6cd067(); if (g_unwind) return; RELOAD();
/* 75617d: mov eax, esi */
  eax = esi;
/* 75617f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 756180: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7561a0(void) {
  LOAD_REGS();
L_7561a0: /* 7561a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7561a1: mov esi, ecx */
  esi = ecx;
/* 7561a3: call 0x6c5169 */
  esp -= 4; W32(esp, 0x7561a8u); SPILL(); f_6c5169(); if (g_unwind) return; RELOAD();
/* 7561a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7561ad: je 0x7561be */
  if (zf) goto L_7561be;
L_7561af: /* 7561af: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7561b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7561b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7561bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7561bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7561be: /* 7561be: mov eax, esi */
  eax = esi;
/* 7561c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7561c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7561e0(void) {
  LOAD_REGS();
L_7561e0: /* 7561e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7561e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7561e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7561e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7561e9: mov esi, ecx */
  esi = ecx;
/* 7561eb: je 0x756220 */
  if (zf) goto L_756220;
L_7561ed: /* 7561ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7561f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7561f1: push 0x6c5169 */
  { uint32_t v = 0x6c5169u; esp -= 4; W32(esp, v); }
/* 7561f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7561f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7561fa: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 7561ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756200: call 0x99ca3d */
  esp -= 4; W32(esp, 0x756205u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 756205: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 756208: je 0x756218 */
  if (zf) goto L_756218;
L_75620a: /* 75620a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 756210: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 756212: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 756214: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 756215: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x756218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_756218: /* 756218: mov eax, edi */
  eax = edi;
/* 75621a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75621b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75621c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75621d: ret 4 */
  esp += 8; SPILL(); return;
L_756220: /* 756220: mov ecx, esi */
  ecx = esi;
/* 756222: call 0x6c5169 */
  esp -= 4; W32(esp, 0x756227u); SPILL(); f_6c5169(); if (g_unwind) return; RELOAD();
/* 756227: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75622a: je 0x75623b */
  if (zf) goto L_75623b;
L_75622c: /* 75622c: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 756231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756232: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x756238u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 756238: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75623b: /* 75623b: mov eax, esi */
  eax = esi;
/* 75623d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75623e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75623f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_756270(void) {
  LOAD_REGS();
L_756270: /* 756270: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 756272: push 0x9c8a23 */
  { uint32_t v = 0x9c8a23u; esp -= 4; W32(esp, v); }
/* 756277: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75627d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75627e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 756285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 756286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 756287: mov esi, ecx */
  esi = ecx;
/* 756289: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75628d: mov dword ptr [esi], 0xa04f28 */
  W32((uint32_t)(esi), 0xa04f28u);
/* 756293: mov dword ptr [esp + 0x10], 0xa */
  W32((uint32_t)(esp + 0x10u), 0xau);
/* 75629b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7562a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7562a1: lea ecx, [esi + 0x484] */
  ecx = (uint32_t)(esi + 0x484u);
/* 7562a7: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7562ac: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7562b1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7562b1: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 7562b7: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7562bc: call 0x6c9b5b */
  esp -= 4; W32(esp, 0x7562c1u); SPILL(); f_6c9b5b(); if (g_unwind) return; RELOAD();
/* 7562c1: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 7562c7: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7562cc: call 0x6c459d */
  esp -= 4; W32(esp, 0x7562d1u); SPILL(); f_6c459d(); if (g_unwind) return; RELOAD();
/* 7562d1: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 7562d7: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7562dc: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x7562e1u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 7562e1: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 7562e7: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7562ec: call 0x6c946c */
  esp -= 4; W32(esp, 0x7562f1u); SPILL(); f_6c946c(); if (g_unwind) return; RELOAD();
/* 7562f1: lea ecx, [esi + 0x28c] */
  ecx = (uint32_t)(esi + 0x28cu);
/* 7562f7: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7562fc: call 0x6c6a2d */
  esp -= 4; W32(esp, 0x756301u); SPILL(); f_6c6a2d(); if (g_unwind) return; RELOAD();
/* 756301: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* 756307: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 75630c: call 0x6ccc5c */
  esp -= 4; W32(esp, 0x756311u); SPILL(); f_6ccc5c(); if (g_unwind) return; RELOAD();
/* 756311: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 756317: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75631c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x756322u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 756322: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 756328: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75632d: call 0x6c8e5e */
  esp -= 4; W32(esp, 0x756332u); SPILL(); f_6c8e5e(); if (g_unwind) return; RELOAD();
/* 756332: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 756335: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75633a: call 0x6c33f0 */
  esp -= 4; W32(esp, 0x75633fu); SPILL(); f_6c33f0(); if (g_unwind) return; RELOAD();
/* 75633f: mov ecx, esi */
  ecx = esi;
/* 756341: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 756349: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x75634fu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 75634f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 756353: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 756354: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75635b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75635e: ret  */
  esp += 4; SPILL(); return;
}

void f_7563a0(void) {
  LOAD_REGS();
L_7563a0: /* 7563a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7563a2: push 0x9c8ae5 */
  { uint32_t v = 0x9c8ae5u; esp -= 4; W32(esp, v); }
/* 7563a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7563ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7563ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7563b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7563b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7563b7: mov esi, ecx */
  esi = ecx;
/* 7563b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7563bd: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7563c3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7563c3: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 7563c6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7563ce: mov dword ptr [esi], 0xa04f28 */
  W32((uint32_t)(esi), 0xa04f28u);
/* 7563d4: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7563dau); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7563da: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7563dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7563df: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7563e5u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7563e5: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 7563e8: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7563ed: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x7563f3u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 7563f3: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 7563f9: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7563ffu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7563ff: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 756405: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 756407: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75640du); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75640d: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 756413: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 756418: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x75641eu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 75641e: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 756424: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75642au); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75642a: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 756430: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x756436u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 756436: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 75643c: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 756441: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x756447u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 756447: lea ecx, [esi + 0x148] */
  ecx = (uint32_t)(esi + 0x148u);
/* 75644d: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756453u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756453: lea ecx, [esi + 0x150] */
  ecx = (uint32_t)(esi + 0x150u);
/* 756459: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x75645fu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 75645f: lea ecx, [esi + 0x168] */
  ecx = (uint32_t)(esi + 0x168u);
/* 756465: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75646bu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75646b: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 756471: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x756477u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 756477: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 75647d: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x756483u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 756483: lea ecx, [esi + 0x1bc] */
  ecx = (uint32_t)(esi + 0x1bcu);
/* 756489: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75648fu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75648f: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* 756495: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x75649bu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 75649b: lea ecx, [esi + 0x1e4] */
  ecx = (uint32_t)(esi + 0x1e4u);
/* 7564a1: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7564a7u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7564a7: lea ecx, [esi + 0x200] */
  ecx = (uint32_t)(esi + 0x200u);
/* 7564ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7564af: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7564b5u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7564b5: lea ecx, [esi + 0x218] */
  ecx = (uint32_t)(esi + 0x218u);
/* 7564bb: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7564c0: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7564c6u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7564c6: lea ecx, [esi + 0x230] */
  ecx = (uint32_t)(esi + 0x230u);
/* 7564cc: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7564d2u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7564d2: lea ecx, [esi + 0x248] */
  ecx = (uint32_t)(esi + 0x248u);
/* 7564d8: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7564deu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7564de: lea ecx, [esi + 0x264] */
  ecx = (uint32_t)(esi + 0x264u);
/* 7564e4: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7564eau); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7564ea: lea ecx, [esi + 0x28c] */
  ecx = (uint32_t)(esi + 0x28cu);
/* 7564f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7564f2: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7564f8u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7564f8: lea ecx, [esi + 0x29c] */
  ecx = (uint32_t)(esi + 0x29cu);
/* 7564fe: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 756503: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x756509u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 756509: lea ecx, [esi + 0x2cc] */
  ecx = (uint32_t)(esi + 0x2ccu);
/* 75650f: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756515u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756515: lea ecx, [esi + 0x2d4] */
  ecx = (uint32_t)(esi + 0x2d4u);
/* 75651b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75651d: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x756523u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 756523: lea ecx, [esi + 0x2e4] */
  ecx = (uint32_t)(esi + 0x2e4u);
/* 756529: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 75652e: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756534u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756534: lea ecx, [esi + 0x2ec] */
  ecx = (uint32_t)(esi + 0x2ecu);
/* 75653a: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756540u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756540: lea ecx, [esi + 0x2f8] */
  ecx = (uint32_t)(esi + 0x2f8u);
/* 756546: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75654cu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75654c: lea ecx, [esi + 0x300] */
  ecx = (uint32_t)(esi + 0x300u);
/* 756552: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756558u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756558: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 75655e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 756560: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x756566u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 756566: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 75656c: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 756571: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756577u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756577: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 75657d: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x756583u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 756583: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 756589: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75658fu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75658f: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 756595: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75659bu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75659b: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 7565a1: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7565a7u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7565a7: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 7565ad: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x7565b3u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 7565b3: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7565b9: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7565bfu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7565bf: lea ecx, [esi + 0x3b8] */
  ecx = (uint32_t)(esi + 0x3b8u);
/* 7565c5: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7565cbu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7565cb: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 7565d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7565d3: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7565d9u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7565d9: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 7565df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7565e1: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 7565e6: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7565ecu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7565ec: lea ecx, [esi + 0x414] */
  ecx = (uint32_t)(esi + 0x414u);
/* 7565f2: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7565f7: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x7565fdu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 7565fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7565ff: lea ecx, [esi + 0x484] */
  ecx = (uint32_t)(esi + 0x484u);
/* 756605: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75660bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75660b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75660f: mov eax, esi */
  eax = esi;
/* 756611: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 756612: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 756619: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75661c: ret  */
  esp += 4; SPILL(); return;
}

void f_7566c0(void) {
  LOAD_REGS();
L_7566c0: /* 7566c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7566c2: push 0x9c8ba5 */
  { uint32_t v = 0x9c8ba5u; esp -= 4; W32(esp, v); }
/* 7566c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7566cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7566ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7566d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7566d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7566d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7566d8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7566dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7566dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7566de: mov ebx, ecx */
  ebx = ecx;
/* 7566e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7566e1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7566e5: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x7566ebu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 7566eb: mov dword ptr [ebx], 0xa04f28 */
  W32((uint32_t)(ebx), 0xa04f28u);
/* 7566f1: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 7566f4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7566f6: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 7566f9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7566fb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7566fe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 756701: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 756704: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 756707: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75670a: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 75670d: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75670f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756712: mov edi, edx */
  edi = edx;
/* 756714: xor edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756716: mov dword ptr [ebx + 0x34], edi */
  W32((uint32_t)(ebx + 0x34u), edi);
/* 756719: lea edx, [ebp + 0x38] */
  edx = (uint32_t)(ebp + 0x38u);
/* 75671c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75671e: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 756721: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 756723: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 756726: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 756729: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75672c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75672f: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 756732: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 756735: mov ecx, 6 */
  ecx = 0x6u;
/* 75673a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75673c: mov esi, dword ptr [ebx + 0x5c] */
  esi = R32((uint32_t)(ebx + 0x5cu));
/* 75673f: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 756742: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756744: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756747: mov ecx, esi */
  ecx = esi;
/* 756749: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75674b: lea edx, [ebp + 0x60] */
  edx = (uint32_t)(ebp + 0x60u);
/* 75674e: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* 756751: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 756754: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 756755: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75675d: call 0x6c58c6 */
  esp -= 4; W32(esp, 0x756762u); SPILL(); f_6c58c6(); if (g_unwind) return; RELOAD();
/* 756762: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 756765: mov edi, dword ptr [ebx + 0x6c] */
  edi = R32((uint32_t)(ebx + 0x6cu));
/* 756768: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75676a: mov edx, edi */
  edx = edi;
/* 75676c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75676f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756771: mov dword ptr [ebx + 0x6c], edx */
  W32((uint32_t)(ebx + 0x6cu), edx);
/* 756774: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 756777: mov dword ptr [ebx + 0x70], ecx */
  W32((uint32_t)(ebx + 0x70u), ecx);
/* 75677a: mov edx, dword ptr [ebp + 0x74] */
  edx = R32((uint32_t)(ebp + 0x74u));
/* 75677d: mov dword ptr [ebx + 0x74], edx */
  W32((uint32_t)(ebx + 0x74u), edx);
/* 756780: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 756783: mov edx, dword ptr [ebx + 0x98] */
  edx = R32((uint32_t)(ebx + 0x98u));
/* 756789: mov dword ptr [ebx + 0x78], eax */
  W32((uint32_t)(ebx + 0x78u), eax);
/* 75678c: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 75678f: mov dword ptr [ebx + 0x7c], ecx */
  W32((uint32_t)(ebx + 0x7cu), ecx);
/* 756792: lea esi, [ebp + 0x80] */
  esi = (uint32_t)(ebp + 0x80u);
/* 756798: lea edi, [ebx + 0x80] */
  edi = (uint32_t)(ebx + 0x80u);
/* 75679e: mov ecx, 6 */
  ecx = 0x6u;
/* 7567a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7567a5: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* 7567ab: mov edi, dword ptr [ebx + 0x98] */
  edi = R32((uint32_t)(ebx + 0x98u));
/* 7567b1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7567b3: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7567b6: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7567b8: mov dword ptr [ebx + 0x98], edi */
  W32((uint32_t)(ebx + 0x98u), edi);
/* 7567be: mov ecx, dword ptr [ebp + 0x98] */
  ecx = R32((uint32_t)(ebp + 0x98u));
/* 7567c4: mov eax, edi */
  eax = edi;
/* 7567c6: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 7567cb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7567cd: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7567d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7567d2: lea edx, [ebp + 0x9c] */
  edx = (uint32_t)(ebp + 0x9cu);
/* 7567d8: mov dword ptr [ebx + 0x98], ecx */
  W32((uint32_t)(ebx + 0x98u), ecx);
/* 7567de: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 7567e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7567e5: call 0x6ca39e */
  esp -= 4; W32(esp, 0x7567eau); SPILL(); f_6ca39e(); if (g_unwind) return; RELOAD();
/* 7567ea: mov eax, dword ptr [ebp + 0xa8] */
  eax = R32((uint32_t)(ebp + 0xa8u));
/* 7567f0: mov dword ptr [ebx + 0xa8], eax */
  W32((uint32_t)(ebx + 0xa8u), eax);
/* 7567f6: lea eax, [ebp + 0xc4] */
  eax = (uint32_t)(ebp + 0xc4u);
/* 7567fc: mov edx, eax */
  edx = eax;
/* 7567fe: lea esi, [ebp + 0xac] */
  esi = (uint32_t)(ebp + 0xacu);
/* 756804: lea edi, [ebx + 0xac] */
  edi = (uint32_t)(ebx + 0xacu);
/* 75680a: mov ecx, 6 */
  ecx = 0x6u;
/* 75680f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756811: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 756813: lea ecx, [ebx + 0xc4] */
  ecx = (uint32_t)(ebx + 0xc4u);
/* 756819: mov esi, ecx */
  esi = ecx;
/* 75681b: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 75681d: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 756820: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 756823: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 756826: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 756829: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 75682c: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 75682f: mov ecx, dword ptr [ebp + 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xd4u));
/* 756835: mov dword ptr [ebx + 0xd4], ecx */
  W32((uint32_t)(ebx + 0xd4u), ecx);
/* 75683b: mov edx, dword ptr [ebp + 0xd8] */
  edx = R32((uint32_t)(ebp + 0xd8u));
/* 756841: mov ecx, dword ptr [ebx + 0xd8] */
  ecx = R32((uint32_t)(ebx + 0xd8u));
/* 756847: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756849: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75684c: mov edi, ecx */
  edi = ecx;
/* 75684e: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756850: mov dword ptr [ebx + 0xd8], edi */
  W32((uint32_t)(ebx + 0xd8u), edi);
/* 756856: lea eax, [ebp + 0xdc] */
  eax = (uint32_t)(ebp + 0xdcu);
/* 75685c: mov edx, eax */
  edx = eax;
/* 75685e: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 756860: lea ecx, [ebx + 0xdc] */
  ecx = (uint32_t)(ebx + 0xdcu);
/* 756866: mov esi, ecx */
  esi = ecx;
/* 756868: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 75686a: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 75686d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 756870: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 756873: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 756876: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 756879: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 75687c: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* 756882: mov edx, dword ptr [ebx + 0xf0] */
  edx = R32((uint32_t)(ebx + 0xf0u));
/* 756888: mov eax, dword ptr [ebx + 0xf0] */
  eax = R32((uint32_t)(ebx + 0xf0u));
/* 75688e: mov dword ptr [ebx + 0xec], ecx */
  W32((uint32_t)(ebx + 0xecu), ecx);
/* 756894: mov esi, dword ptr [ebp + 0xf0] */
  esi = R32((uint32_t)(ebp + 0xf0u));
/* 75689a: mov edi, dword ptr [ebx + 0xfc] */
  edi = R32((uint32_t)(ebx + 0xfcu));
/* 7568a0: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7568a2: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7568a5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7568a7: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 7568ad: mov ecx, dword ptr [ebp + 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xf0u));
/* 7568b3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7568b5: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7568b8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7568ba: mov esi, dword ptr [ebx + 0x104] */
  esi = R32((uint32_t)(ebx + 0x104u));
/* 7568c0: mov dword ptr [ebx + 0xf0], ecx */
  W32((uint32_t)(ebx + 0xf0u), ecx);
/* 7568c6: mov dl, byte ptr [ebp + 0xf4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xf4u))) & 0xffu);
/* 7568cc: mov byte ptr [ebx + 0xf4], dl */
  W8((uint32_t)(ebx + 0xf4u), (edx & 0xffu));
/* 7568d2: mov eax, dword ptr [ebp + 0xf8] */
  eax = R32((uint32_t)(ebp + 0xf8u));
/* 7568d8: mov dword ptr [ebx + 0xf8], eax */
  W32((uint32_t)(ebx + 0xf8u), eax);
/* 7568de: mov ecx, dword ptr [ebp + 0xfc] */
  ecx = R32((uint32_t)(ebp + 0xfcu));
/* 7568e4: mov eax, dword ptr [ebx + 0x104] */
  eax = R32((uint32_t)(ebx + 0x104u));
/* 7568ea: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7568ec: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7568ef: mov edx, edi */
  edx = edi;
/* 7568f1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7568f3: mov dword ptr [ebx + 0xfc], edx */
  W32((uint32_t)(ebx + 0xfcu), edx);
/* 7568f9: mov dl, byte ptr [ebp + 0x100] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x100u))) & 0xffu);
/* 7568ff: mov byte ptr [ebx + 0x100], dl */
  W8((uint32_t)(ebx + 0x100u), (edx & 0xffu));
/* 756905: xor eax, dword ptr [ebp + 0x104] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x104u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75690b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75690e: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 756913: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 756915: mov dword ptr [ebx + 0x104], esi */
  W32((uint32_t)(ebx + 0x104u), esi);
/* 75691b: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* 756921: mov ecx, esi */
  ecx = esi;
/* 756923: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756925: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756928: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75692a: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* 756930: mov ecx, dword ptr [ebp + 0x104] */
  ecx = R32((uint32_t)(ebp + 0x104u));
/* 756936: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756938: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75693b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75693d: mov dword ptr [ebx + 0x104], ecx */
  W32((uint32_t)(ebx + 0x104u), ecx);
/* 756943: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* 756949: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75694b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75694e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756950: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* 756956: mov ecx, dword ptr [ebp + 0x104] */
  ecx = R32((uint32_t)(ebp + 0x104u));
/* 75695c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75695e: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756961: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756963: mov dword ptr [ebx + 0x104], ecx */
  W32((uint32_t)(ebx + 0x104u), ecx);
/* 756969: mov edx, dword ptr [ebp + 0x108] */
  edx = R32((uint32_t)(ebp + 0x108u));
/* 75696f: lea ecx, [ebp + 0x110] */
  ecx = (uint32_t)(ebp + 0x110u);
/* 756975: mov dword ptr [ebx + 0x108], edx */
  W32((uint32_t)(ebx + 0x108u), edx);
/* 75697b: mov eax, dword ptr [ebp + 0x10c] */
  eax = R32((uint32_t)(ebp + 0x10cu));
/* 756981: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 756982: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 756988: mov dword ptr [ebx + 0x10c], eax */
  W32((uint32_t)(ebx + 0x10cu), eax);
/* 75698e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x756994u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 756994: lea edx, [ebp + 0x11c] */
  edx = (uint32_t)(ebp + 0x11cu);
/* 75699a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75699c: lea eax, [ebx + 0x11c] */
  eax = (uint32_t)(ebx + 0x11cu);
/* 7569a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7569a4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7569a7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7569aa: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7569ad: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7569b0: lea esi, [ebp + 0x128] */
  esi = (uint32_t)(ebp + 0x128u);
/* 7569b6: lea edi, [ebx + 0x128] */
  edi = (uint32_t)(ebx + 0x128u);
/* 7569bc: mov ecx, 6 */
  ecx = 0x6u;
/* 7569c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7569c3: mov eax, dword ptr [ebp + 0x140] */
  eax = R32((uint32_t)(ebp + 0x140u));
/* 7569c9: mov dword ptr [ebx + 0x140], eax */
  W32((uint32_t)(ebx + 0x140u), eax);
/* 7569cf: mov cl, byte ptr [ebp + 0x144] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x144u))) & 0xffu);
/* 7569d5: mov byte ptr [ebx + 0x144], cl */
  W8((uint32_t)(ebx + 0x144u), (ecx & 0xffu));
/* 7569db: mov edx, dword ptr [ebp + 0x148] */
  edx = R32((uint32_t)(ebp + 0x148u));
/* 7569e1: mov dword ptr [ebx + 0x148], edx */
  W32((uint32_t)(ebx + 0x148u), edx);
/* 7569e7: mov eax, dword ptr [ebp + 0x14c] */
  eax = R32((uint32_t)(ebp + 0x14cu));
/* 7569ed: mov dword ptr [ebx + 0x14c], eax */
  W32((uint32_t)(ebx + 0x14cu), eax);
/* 7569f3: lea esi, [ebp + 0x150] */
  esi = (uint32_t)(ebp + 0x150u);
/* 7569f9: lea edi, [ebx + 0x150] */
  edi = (uint32_t)(ebx + 0x150u);
/* 7569ff: mov ecx, 6 */
  ecx = 0x6u;
/* 756a04: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756a06: mov ecx, dword ptr [ebp + 0x168] */
  ecx = R32((uint32_t)(ebp + 0x168u));
/* 756a0c: mov dword ptr [ebx + 0x168], ecx */
  W32((uint32_t)(ebx + 0x168u), ecx);
/* 756a12: mov edx, dword ptr [ebp + 0x16c] */
  edx = R32((uint32_t)(ebp + 0x16cu));
/* 756a18: mov dword ptr [ebx + 0x16c], edx */
  W32((uint32_t)(ebx + 0x16cu), edx);
/* 756a1e: mov eax, dword ptr [ebp + 0x170] */
  eax = R32((uint32_t)(ebp + 0x170u));
/* 756a24: mov dword ptr [ebx + 0x170], eax */
  W32((uint32_t)(ebx + 0x170u), eax);
/* 756a2a: mov cl, byte ptr [ebp + 0x174] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x174u))) & 0xffu);
/* 756a30: mov eax, dword ptr [ebx + 0x178] */
  eax = R32((uint32_t)(ebx + 0x178u));
/* 756a36: mov byte ptr [ebx + 0x174], cl */
  W8((uint32_t)(ebx + 0x174u), (ecx & 0xffu));
/* 756a3c: mov edx, dword ptr [ebp + 0x178] */
  edx = R32((uint32_t)(ebp + 0x178u));
/* 756a42: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756a44: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756a47: mov esi, eax */
  esi = eax;
/* 756a49: mov eax, dword ptr [ebx + 0x1ac] */
  eax = R32((uint32_t)(ebx + 0x1acu));
/* 756a4f: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 756a51: mov dword ptr [ebx + 0x178], esi */
  W32((uint32_t)(ebx + 0x178u), esi);
/* 756a57: lea esi, [ebp + 0x17c] */
  esi = (uint32_t)(ebp + 0x17cu);
/* 756a5d: lea edi, [ebx + 0x17c] */
  edi = (uint32_t)(ebx + 0x17cu);
/* 756a63: mov ecx, 6 */
  ecx = 0x6u;
/* 756a68: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756a6a: lea esi, [ebp + 0x194] */
  esi = (uint32_t)(ebp + 0x194u);
/* 756a70: lea edi, [ebx + 0x194] */
  edi = (uint32_t)(ebx + 0x194u);
/* 756a76: mov ecx, 6 */
  ecx = 0x6u;
/* 756a7b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756a7d: mov edx, dword ptr [ebp + 0x1ac] */
  edx = R32((uint32_t)(ebp + 0x1acu));
/* 756a83: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 756a88: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756a8a: mov edi, dword ptr [ebx + 0x1ac] */
  edi = R32((uint32_t)(ebx + 0x1acu));
/* 756a90: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756a93: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756a95: mov dword ptr [ebx + 0x1ac], edi */
  W32((uint32_t)(ebx + 0x1acu), edi);
/* 756a9b: mov eax, dword ptr [ebp + 0x1ac] */
  eax = R32((uint32_t)(ebp + 0x1acu));
/* 756aa1: mov ecx, edi */
  ecx = edi;
/* 756aa3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756aa5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756aa8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756aaa: mov dword ptr [ebx + 0x1ac], eax */
  W32((uint32_t)(ebx + 0x1acu), eax);
/* 756ab0: mov ecx, dword ptr [ebp + 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0x1acu));
/* 756ab6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756ab8: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756abb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756abd: mov dword ptr [ebx + 0x1ac], ecx */
  W32((uint32_t)(ebx + 0x1acu), ecx);
/* 756ac3: mov edx, dword ptr [ebp + 0x1ac] */
  edx = R32((uint32_t)(ebp + 0x1acu));
/* 756ac9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756acb: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756ace: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756ad0: mov dword ptr [ebx + 0x1ac], edx */
  W32((uint32_t)(ebx + 0x1acu), edx);
/* 756ad6: lea eax, [ebp + 0x1b0] */
  eax = (uint32_t)(ebp + 0x1b0u);
/* 756adc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 756ade: lea ecx, [ebx + 0x1b0] */
  ecx = (uint32_t)(ebx + 0x1b0u);
/* 756ae4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 756ae6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 756ae9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 756aec: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 756aef: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 756af2: mov ecx, dword ptr [ebp + 0x1bc] */
  ecx = R32((uint32_t)(ebp + 0x1bcu));
/* 756af8: mov dword ptr [ebx + 0x1bc], ecx */
  W32((uint32_t)(ebx + 0x1bcu), ecx);
/* 756afe: mov edx, dword ptr [ebp + 0x1c0] */
  edx = R32((uint32_t)(ebp + 0x1c0u));
/* 756b04: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 756b0a: mov dword ptr [ebx + 0x1c0], edx */
  W32((uint32_t)(ebx + 0x1c0u), edx);
/* 756b10: mov eax, dword ptr [ebp + 0x1c4] */
  eax = R32((uint32_t)(ebp + 0x1c4u));
/* 756b16: mov dword ptr [ebx + 0x1c4], eax */
  W32((uint32_t)(ebx + 0x1c4u), eax);
/* 756b1c: mov esi, dword ptr [ebp + 0x1c8] */
  esi = R32((uint32_t)(ebp + 0x1c8u));
/* 756b22: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 756b28: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756b2a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756b2d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756b2f: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 756b35: mov ecx, eax */
  ecx = eax;
/* 756b37: mov eax, dword ptr [ebp + 0x1c8] */
  eax = R32((uint32_t)(ebp + 0x1c8u));
/* 756b3d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756b3f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756b42: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756b44: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 756b4a: mov ecx, dword ptr [ebp + 0x1c8] */
  ecx = R32((uint32_t)(ebp + 0x1c8u));
/* 756b50: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756b52: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756b55: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756b57: mov dword ptr [ebx + 0x1c8], ecx */
  W32((uint32_t)(ebx + 0x1c8u), ecx);
/* 756b5d: mov eax, dword ptr [ebp + 0x1c8] */
  eax = R32((uint32_t)(ebp + 0x1c8u));
/* 756b63: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756b65: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756b68: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756b6a: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 756b70: mov edx, dword ptr [ebp + 0x1c8] */
  edx = R32((uint32_t)(ebp + 0x1c8u));
/* 756b76: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756b78: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756b7b: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756b7d: mov dword ptr [ebx + 0x1c8], edx */
  W32((uint32_t)(ebx + 0x1c8u), edx);
/* 756b83: mov edx, dword ptr [ebx + 0x1fc] */
  edx = R32((uint32_t)(ebx + 0x1fcu));
/* 756b89: lea esi, [ebp + 0x1cc] */
  esi = (uint32_t)(ebp + 0x1ccu);
/* 756b8f: lea edi, [ebx + 0x1cc] */
  edi = (uint32_t)(ebx + 0x1ccu);
/* 756b95: mov ecx, 6 */
  ecx = 0x6u;
/* 756b9a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756b9c: lea esi, [ebp + 0x1e4] */
  esi = (uint32_t)(ebp + 0x1e4u);
/* 756ba2: lea edi, [ebx + 0x1e4] */
  edi = (uint32_t)(ebx + 0x1e4u);
/* 756ba8: mov ecx, 6 */
  ecx = 0x6u;
/* 756bad: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756baf: mov eax, dword ptr [ebp + 0x1fc] */
  eax = R32((uint32_t)(ebp + 0x1fcu));
/* 756bb5: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756bb7: mov edi, edx */
  edi = edx;
/* 756bb9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756bbc: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756bbe: lea edx, [ebp + 0x200] */
  edx = (uint32_t)(ebp + 0x200u);
/* 756bc4: mov dword ptr [ebx + 0x1fc], edi */
  W32((uint32_t)(ebx + 0x1fcu), edi);
/* 756bca: lea ecx, [ebx + 0x200] */
  ecx = (uint32_t)(ebx + 0x200u);
/* 756bd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 756bd1: call 0x6c5cc2 */
  esp -= 4; W32(esp, 0x756bd6u); SPILL(); f_6c5cc2(); if (g_unwind) return; RELOAD();
/* 756bd6: mov eax, dword ptr [ebp + 0x20c] */
  eax = R32((uint32_t)(ebp + 0x20cu));
/* 756bdc: mov dword ptr [ebx + 0x20c], eax */
  W32((uint32_t)(ebx + 0x20cu), eax);
/* 756be2: mov cl, byte ptr [ebp + 0x210] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x210u))) & 0xffu);
/* 756be8: mov byte ptr [ebx + 0x210], cl */
  W8((uint32_t)(ebx + 0x210u), (ecx & 0xffu));
/* 756bee: mov edx, dword ptr [ebp + 0x214] */
  edx = R32((uint32_t)(ebp + 0x214u));
/* 756bf4: mov ecx, dword ptr [ebx + 0x214] */
  ecx = R32((uint32_t)(ebx + 0x214u));
/* 756bfa: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756bfc: mov edi, ecx */
  edi = ecx;
/* 756bfe: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756c01: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756c03: mov dword ptr [ebx + 0x214], edi */
  W32((uint32_t)(ebx + 0x214u), edi);
/* 756c09: lea eax, [ebp + 0x218] */
  eax = (uint32_t)(ebp + 0x218u);
/* 756c0f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 756c11: lea ecx, [ebx + 0x218] */
  ecx = (uint32_t)(ebx + 0x218u);
/* 756c17: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 756c19: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 756c1c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 756c1f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 756c22: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 756c25: lea ecx, [ebp + 0x224] */
  ecx = (uint32_t)(ebp + 0x224u);
/* 756c2b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 756c2d: lea edx, [ebx + 0x224] */
  edx = (uint32_t)(ebx + 0x224u);
/* 756c33: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 756c35: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 756c38: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 756c3b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 756c3e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 756c41: lea esi, [ebp + 0x230] */
  esi = (uint32_t)(ebp + 0x230u);
/* 756c47: lea edi, [ebx + 0x230] */
  edi = (uint32_t)(ebx + 0x230u);
/* 756c4d: mov ecx, 6 */
  ecx = 0x6u;
/* 756c52: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756c54: lea esi, [ebp + 0x248] */
  esi = (uint32_t)(ebp + 0x248u);
/* 756c5a: lea edi, [ebx + 0x248] */
  edi = (uint32_t)(ebx + 0x248u);
/* 756c60: mov ecx, 6 */
  ecx = 0x6u;
/* 756c65: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756c67: mov edx, dword ptr [ebp + 0x260] */
  edx = R32((uint32_t)(ebp + 0x260u));
/* 756c6d: mov esi, dword ptr [ebx + 0x260] */
  esi = R32((uint32_t)(ebx + 0x260u));
/* 756c73: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756c75: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756c78: mov eax, esi */
  eax = esi;
/* 756c7a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756c7c: mov dword ptr [ebx + 0x260], eax */
  W32((uint32_t)(ebx + 0x260u), eax);
/* 756c82: lea esi, [ebp + 0x264] */
  esi = (uint32_t)(ebp + 0x264u);
/* 756c88: lea edi, [ebx + 0x264] */
  edi = (uint32_t)(ebx + 0x264u);
/* 756c8e: mov ecx, 6 */
  ecx = 0x6u;
/* 756c93: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756c95: lea eax, [ebp + 0x27c] */
  eax = (uint32_t)(ebp + 0x27cu);
/* 756c9b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 756c9d: lea ecx, [ebx + 0x27c] */
  ecx = (uint32_t)(ebx + 0x27cu);
/* 756ca3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 756ca5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 756ca8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 756cab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 756cae: mov edx, dword ptr [ebx + 0x288] */
  edx = R32((uint32_t)(ebx + 0x288u));
/* 756cb4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 756cb7: mov ecx, dword ptr [ebx + 0x288] */
  ecx = R32((uint32_t)(ebx + 0x288u));
/* 756cbd: xor ecx, dword ptr [ebp + 0x288] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x288u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756cc3: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756cc6: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756cc8: mov dword ptr [ebx + 0x288], edx */
  W32((uint32_t)(ebx + 0x288u), edx);
/* 756cce: mov eax, edx */
  eax = edx;
/* 756cd0: mov edx, dword ptr [ebp + 0x288] */
  edx = R32((uint32_t)(ebp + 0x288u));
/* 756cd6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756cd8: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756cdb: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756cdd: lea eax, [ebp + 0x28c] */
  eax = (uint32_t)(ebp + 0x28cu);
/* 756ce3: lea ecx, [ebx + 0x28c] */
  ecx = (uint32_t)(ebx + 0x28cu);
/* 756ce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 756cea: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 756cef: mov dword ptr [ebx + 0x288], edx */
  W32((uint32_t)(ebx + 0x288u), edx);
/* 756cf5: call 0x6c2dc4 */
  esp -= 4; W32(esp, 0x756cfau); SPILL(); f_6c2dc4(); if (g_unwind) return; RELOAD();
/* 756cfa: mov ecx, dword ptr [ebp + 0x298] */
  ecx = R32((uint32_t)(ebp + 0x298u));
/* 756d00: mov dword ptr [ebx + 0x298], ecx */
  W32((uint32_t)(ebx + 0x298u), ecx);
/* 756d06: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 756d0b: lea esi, [ebp + 0x29c] */
  esi = (uint32_t)(ebp + 0x29cu);
/* 756d11: lea edi, [ebx + 0x29c] */
  edi = (uint32_t)(ebx + 0x29cu);
/* 756d17: mov ecx, 6 */
  ecx = 0x6u;
/* 756d1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756d1e: mov edx, dword ptr [ebp + 0x2b4] */
  edx = R32((uint32_t)(ebp + 0x2b4u));
/* 756d24: mov edi, dword ptr [ebx + 0x2b4] */
  edi = R32((uint32_t)(ebx + 0x2b4u));
/* 756d2a: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756d2c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756d2f: mov ecx, edi */
  ecx = edi;
/* 756d31: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756d33: mov dword ptr [ebx + 0x2b4], ecx */
  W32((uint32_t)(ebx + 0x2b4u), ecx);
/* 756d39: mov al, byte ptr [ebp + 0x2b8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2b8u))) & 0xffu);
/* 756d3f: mov byte ptr [ebx + 0x2b8], al */
  W8((uint32_t)(ebx + 0x2b8u), (eax & 0xffu));
/* 756d45: mov ecx, dword ptr [ebp + 0x2bc] */
  ecx = R32((uint32_t)(ebp + 0x2bcu));
/* 756d4b: mov dword ptr [ebx + 0x2bc], ecx */
  W32((uint32_t)(ebx + 0x2bcu), ecx);
/* 756d51: lea edx, [ebp + 0x2c0] */
  edx = (uint32_t)(ebp + 0x2c0u);
/* 756d57: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 756d59: lea eax, [ebx + 0x2c0] */
  eax = (uint32_t)(ebx + 0x2c0u);
/* 756d5f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 756d61: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 756d64: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 756d67: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 756d6a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 756d6d: mov eax, dword ptr [ebp + 0x2cc] */
  eax = R32((uint32_t)(ebp + 0x2ccu));
/* 756d73: mov dword ptr [ebx + 0x2cc], eax */
  W32((uint32_t)(ebx + 0x2ccu), eax);
/* 756d79: mov ecx, dword ptr [ebp + 0x2d0] */
  ecx = R32((uint32_t)(ebp + 0x2d0u));
/* 756d7f: lea edx, [ebp + 0x2d4] */
  edx = (uint32_t)(ebp + 0x2d4u);
/* 756d85: mov dword ptr [ebx + 0x2d0], ecx */
  W32((uint32_t)(ebx + 0x2d0u), ecx);
/* 756d8b: lea ecx, [ebx + 0x2d4] */
  ecx = (uint32_t)(ebx + 0x2d4u);
/* 756d91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 756d92: call 0x6c1b9f */
  esp -= 4; W32(esp, 0x756d97u); SPILL(); f_6c1b9f(); if (g_unwind) return; RELOAD();
/* 756d97: mov al, byte ptr [ebp + 0x2e0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2e0u))) & 0xffu);
/* 756d9d: mov byte ptr [ebx + 0x2e0], al */
  W8((uint32_t)(ebx + 0x2e0u), (eax & 0xffu));
/* 756da3: mov ecx, dword ptr [ebp + 0x2e4] */
  ecx = R32((uint32_t)(ebp + 0x2e4u));
/* 756da9: mov dword ptr [ebx + 0x2e4], ecx */
  W32((uint32_t)(ebx + 0x2e4u), ecx);
/* 756daf: mov edx, dword ptr [ebp + 0x2e8] */
  edx = R32((uint32_t)(ebp + 0x2e8u));
/* 756db5: mov dword ptr [ebx + 0x2e8], edx */
  W32((uint32_t)(ebx + 0x2e8u), edx);
/* 756dbb: mov eax, dword ptr [ebp + 0x2ec] */
  eax = R32((uint32_t)(ebp + 0x2ecu));
/* 756dc1: mov dword ptr [ebx + 0x2ec], eax */
  W32((uint32_t)(ebx + 0x2ecu), eax);
/* 756dc7: mov ecx, dword ptr [ebp + 0x2f0] */
  ecx = R32((uint32_t)(ebp + 0x2f0u));
/* 756dcd: mov dword ptr [ebx + 0x2f0], ecx */
  W32((uint32_t)(ebx + 0x2f0u), ecx);
/* 756dd3: mov dl, byte ptr [ebp + 0x2f4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2f4u))) & 0xffu);
/* 756dd9: mov byte ptr [ebx + 0x2f4], dl */
  W8((uint32_t)(ebx + 0x2f4u), (edx & 0xffu));
/* 756ddf: mov eax, dword ptr [ebp + 0x2f8] */
  eax = R32((uint32_t)(ebp + 0x2f8u));
/* 756de5: mov edi, dword ptr [ebx + 0x310] */
  edi = R32((uint32_t)(ebx + 0x310u));
/* 756deb: mov dword ptr [ebx + 0x2f8], eax */
  W32((uint32_t)(ebx + 0x2f8u), eax);
/* 756df1: mov ecx, dword ptr [ebp + 0x2fc] */
  ecx = R32((uint32_t)(ebp + 0x2fcu));
/* 756df7: mov dword ptr [ebx + 0x2fc], ecx */
  W32((uint32_t)(ebx + 0x2fcu), ecx);
/* 756dfd: mov edx, dword ptr [ebp + 0x300] */
  edx = R32((uint32_t)(ebp + 0x300u));
/* 756e03: mov dword ptr [ebx + 0x300], edx */
  W32((uint32_t)(ebx + 0x300u), edx);
/* 756e09: mov eax, dword ptr [ebp + 0x304] */
  eax = R32((uint32_t)(ebp + 0x304u));
/* 756e0f: mov dword ptr [ebx + 0x304], eax */
  W32((uint32_t)(ebx + 0x304u), eax);
/* 756e15: mov ecx, dword ptr [ebp + 0x308] */
  ecx = R32((uint32_t)(ebp + 0x308u));
/* 756e1b: mov dword ptr [ebx + 0x308], ecx */
  W32((uint32_t)(ebx + 0x308u), ecx);
/* 756e21: mov edx, dword ptr [ebp + 0x30c] */
  edx = R32((uint32_t)(ebp + 0x30cu));
/* 756e27: mov dword ptr [ebx + 0x30c], edx */
  W32((uint32_t)(ebx + 0x30cu), edx);
/* 756e2d: mov eax, dword ptr [ebp + 0x310] */
  eax = R32((uint32_t)(ebp + 0x310u));
/* 756e33: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 756e35: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 756e38: mov edx, edi */
  edx = edi;
/* 756e3a: mov edi, dword ptr [ebx + 0x324] */
  edi = R32((uint32_t)(ebx + 0x324u));
/* 756e40: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756e42: mov dword ptr [ebx + 0x310], edx */
  W32((uint32_t)(ebx + 0x310u), edx);
/* 756e48: mov cl, byte ptr [ebp + 0x314] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x314u))) & 0xffu);
/* 756e4e: mov byte ptr [ebx + 0x314], cl */
  W8((uint32_t)(ebx + 0x314u), (ecx & 0xffu));
/* 756e54: mov edx, dword ptr [ebp + 0x318] */
  edx = R32((uint32_t)(ebp + 0x318u));
/* 756e5a: mov dword ptr [ebx + 0x318], edx */
  W32((uint32_t)(ebx + 0x318u), edx);
/* 756e60: mov eax, dword ptr [ebp + 0x31c] */
  eax = R32((uint32_t)(ebp + 0x31cu));
/* 756e66: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 756e6c: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 756e72: mov ecx, dword ptr [ebp + 0x320] */
  ecx = R32((uint32_t)(ebp + 0x320u));
/* 756e78: mov dword ptr [ebx + 0x320], ecx */
  W32((uint32_t)(ebx + 0x320u), ecx);
/* 756e7e: xor edx, dword ptr [ebp + 0x324] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x324u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756e84: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756e87: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756e89: mov dword ptr [ebx + 0x324], edi */
  W32((uint32_t)(ebx + 0x324u), edi);
/* 756e8f: mov ecx, dword ptr [ebp + 0x324] */
  ecx = R32((uint32_t)(ebp + 0x324u));
/* 756e95: mov eax, edi */
  eax = edi;
/* 756e97: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756e99: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756e9c: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 756ea1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756ea3: lea edx, [ebp + 0x328] */
  edx = (uint32_t)(ebp + 0x328u);
/* 756ea9: mov dword ptr [ebx + 0x324], ecx */
  W32((uint32_t)(ebx + 0x324u), ecx);
/* 756eaf: lea ecx, [ebx + 0x328] */
  ecx = (uint32_t)(ebx + 0x328u);
/* 756eb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 756eb6: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x756ebbu); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 756ebb: mov eax, dword ptr [ebp + 0x334] */
  eax = R32((uint32_t)(ebp + 0x334u));
/* 756ec1: mov dword ptr [ebx + 0x334], eax */
  W32((uint32_t)(ebx + 0x334u), eax);
/* 756ec7: mov ecx, dword ptr [ebp + 0x338] */
  ecx = R32((uint32_t)(ebp + 0x338u));
/* 756ecd: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 756ed3: mov dword ptr [ebx + 0x338], ecx */
  W32((uint32_t)(ebx + 0x338u), ecx);
/* 756ed9: mov edx, dword ptr [ebp + 0x33c] */
  edx = R32((uint32_t)(ebp + 0x33cu));
/* 756edf: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756ee1: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756ee4: mov esi, eax */
  esi = eax;
/* 756ee6: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 756ee8: mov dword ptr [ebx + 0x33c], esi */
  W32((uint32_t)(ebx + 0x33cu), esi);
/* 756eee: mov eax, dword ptr [ebp + 0x340] */
  eax = R32((uint32_t)(ebp + 0x340u));
/* 756ef4: mov dword ptr [ebx + 0x340], eax */
  W32((uint32_t)(ebx + 0x340u), eax);
/* 756efa: mov ecx, dword ptr [ebp + 0x344] */
  ecx = R32((uint32_t)(ebp + 0x344u));
/* 756f00: mov dword ptr [ebx + 0x344], ecx */
  W32((uint32_t)(ebx + 0x344u), ecx);
/* 756f06: mov edx, dword ptr [ebp + 0x348] */
  edx = R32((uint32_t)(ebp + 0x348u));
/* 756f0c: mov dword ptr [ebx + 0x348], edx */
  W32((uint32_t)(ebx + 0x348u), edx);
/* 756f12: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 756f18: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 756f1e: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 756f24: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 756f2a: mov edx, dword ptr [ebp + 0x354] */
  edx = R32((uint32_t)(ebp + 0x354u));
/* 756f30: mov edi, dword ptr [ebx + 0x360] */
  edi = R32((uint32_t)(ebx + 0x360u));
/* 756f36: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 756f3c: mov eax, dword ptr [ebp + 0x358] */
  eax = R32((uint32_t)(ebp + 0x358u));
/* 756f42: mov edx, dword ptr [ebx + 0x360] */
  edx = R32((uint32_t)(ebx + 0x360u));
/* 756f48: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
/* 756f4e: mov ecx, dword ptr [ebp + 0x35c] */
  ecx = R32((uint32_t)(ebp + 0x35cu));
/* 756f54: mov dword ptr [ebx + 0x35c], ecx */
  W32((uint32_t)(ebx + 0x35cu), ecx);
/* 756f5a: xor edx, dword ptr [ebp + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x360u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 756f60: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 756f63: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 756f65: mov dword ptr [ebx + 0x360], edi */
  W32((uint32_t)(ebx + 0x360u), edi);
/* 756f6b: mov ecx, dword ptr [ebp + 0x360] */
  ecx = R32((uint32_t)(ebp + 0x360u));
/* 756f71: mov eax, edi */
  eax = edi;
/* 756f73: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756f75: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 756f78: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 756f7a: mov dword ptr [ebx + 0x360], ecx */
  W32((uint32_t)(ebx + 0x360u), ecx);
/* 756f80: mov edx, dword ptr [ebp + 0x364] */
  edx = R32((uint32_t)(ebp + 0x364u));
/* 756f86: mov dword ptr [ebx + 0x364], edx */
  W32((uint32_t)(ebx + 0x364u), edx);
/* 756f8c: mov eax, dword ptr [ebp + 0x368] */
  eax = R32((uint32_t)(ebp + 0x368u));
/* 756f92: mov dword ptr [ebx + 0x368], eax */
  W32((uint32_t)(ebx + 0x368u), eax);
/* 756f98: mov ecx, dword ptr [ebp + 0x36c] */
  ecx = R32((uint32_t)(ebp + 0x36cu));
/* 756f9e: mov dword ptr [ebx + 0x36c], ecx */
  W32((uint32_t)(ebx + 0x36cu), ecx);
/* 756fa4: lea esi, [ebp + 0x370] */
  esi = (uint32_t)(ebp + 0x370u);
/* 756faa: lea edi, [ebx + 0x370] */
  edi = (uint32_t)(ebx + 0x370u);
/* 756fb0: mov ecx, 6 */
  ecx = 0x6u;
/* 756fb5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756fb7: mov edx, dword ptr [ebp + 0x388] */
  edx = R32((uint32_t)(ebp + 0x388u));
/* 756fbd: mov dword ptr [ebx + 0x388], edx */
  W32((uint32_t)(ebx + 0x388u), edx);
/* 756fc3: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 756fc9: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 756fcf: lea ecx, [ebp + 0x390] */
  ecx = (uint32_t)(ebp + 0x390u);
/* 756fd5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 756fd7: lea edx, [ebx + 0x390] */
  edx = (uint32_t)(ebx + 0x390u);
/* 756fdd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 756fdf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 756fe2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 756fe5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 756fe8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 756feb: lea esi, [ebp + 0x39c] */
  esi = (uint32_t)(ebp + 0x39cu);
/* 756ff1: lea edi, [ebx + 0x39c] */
  edi = (uint32_t)(ebx + 0x39cu);
/* 756ff7: mov ecx, 6 */
  ecx = 0x6u;
/* 756ffc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 756ffe: mov edx, dword ptr [ebp + 0x3b4] */
  edx = R32((uint32_t)(ebp + 0x3b4u));
/* 757004: mov dword ptr [ebx + 0x3b4], edx */
  W32((uint32_t)(ebx + 0x3b4u), edx);
/* 75700a: lea esi, [ebp + 0x3b8] */
  esi = (uint32_t)(ebp + 0x3b8u);
/* 757010: lea edi, [ebx + 0x3b8] */
  edi = (uint32_t)(ebx + 0x3b8u);
/* 757016: mov ecx, 6 */
  ecx = 0x6u;
/* 75701b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75701d: mov al, byte ptr [ebp + 0x3d0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x3d0u))) & 0xffu);
/* 757023: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 757028: mov byte ptr [ebx + 0x3d0], al */
  W8((uint32_t)(ebx + 0x3d0u), (eax & 0xffu));
/* 75702e: mov esi, dword ptr [ebx + 0x3d4] */
  esi = R32((uint32_t)(ebx + 0x3d4u));
/* 757034: mov ecx, dword ptr [ebp + 0x3d4] */
  ecx = R32((uint32_t)(ebp + 0x3d4u));
/* 75703a: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75703c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75703f: mov eax, esi */
  eax = esi;
/* 757041: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 757043: lea edx, [ebp + 0x3d8] */
  edx = (uint32_t)(ebp + 0x3d8u);
/* 757049: lea ecx, [ebx + 0x3d8] */
  ecx = (uint32_t)(ebx + 0x3d8u);
/* 75704f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 757050: mov dword ptr [ebx + 0x3d4], eax */
  W32((uint32_t)(ebx + 0x3d4u), eax);
/* 757056: call 0x6c9b6a */
  esp -= 4; W32(esp, 0x75705bu); SPILL(); f_6c9b6a(); if (g_unwind) return; RELOAD();
/* 75705b: mov eax, dword ptr [ebp + 0x3e4] */
  eax = R32((uint32_t)(ebp + 0x3e4u));
/* 757061: mov dword ptr [ebx + 0x3e4], eax */
  W32((uint32_t)(ebx + 0x3e4u), eax);
/* 757067: mov ecx, dword ptr [ebp + 0x3e8] */
  ecx = R32((uint32_t)(ebp + 0x3e8u));
/* 75706d: mov dword ptr [ebx + 0x3e8], ecx */
  W32((uint32_t)(ebx + 0x3e8u), ecx);
/* 757073: mov edx, dword ptr [ebp + 0x3ec] */
  edx = R32((uint32_t)(ebp + 0x3ecu));
/* 757079: mov dword ptr [ebx + 0x3ec], edx */
  W32((uint32_t)(ebx + 0x3ecu), edx);
/* 75707f: mov eax, dword ptr [ebp + 0x3f0] */
  eax = R32((uint32_t)(ebp + 0x3f0u));
/* 757085: mov dword ptr [ebx + 0x3f0], eax */
  W32((uint32_t)(ebx + 0x3f0u), eax);
/* 75708b: mov ecx, dword ptr [ebx + 0x3f4] */
  ecx = R32((uint32_t)(ebx + 0x3f4u));
/* 757091: mov esi, dword ptr [ebp + 0x3f4] */
  esi = R32((uint32_t)(ebp + 0x3f4u));
/* 757097: mov eax, dword ptr [ebx + 0x3f4] */
  eax = R32((uint32_t)(ebx + 0x3f4u));
/* 75709d: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75709f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7570a2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7570a4: mov dword ptr [ebx + 0x3f4], eax */
  W32((uint32_t)(ebx + 0x3f4u), eax);
/* 7570aa: mov edx, dword ptr [ebp + 0x3f4] */
  edx = R32((uint32_t)(ebp + 0x3f4u));
/* 7570b0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7570b2: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7570b5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7570b7: mov dword ptr [ebx + 0x3f4], edx */
  W32((uint32_t)(ebx + 0x3f4u), edx);
/* 7570bd: mov eax, dword ptr [ebp + 0x3f8] */
  eax = R32((uint32_t)(ebp + 0x3f8u));
/* 7570c3: lea edx, [ebp + 0x3fc] */
  edx = (uint32_t)(ebp + 0x3fcu);
/* 7570c9: lea ecx, [ebx + 0x3fc] */
  ecx = (uint32_t)(ebx + 0x3fcu);
/* 7570cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7570d0: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 7570d5: mov dword ptr [ebx + 0x3f8], eax */
  W32((uint32_t)(ebx + 0x3f8u), eax);
/* 7570db: call 0x6c1d66 */
  esp -= 4; W32(esp, 0x7570e0u); SPILL(); f_6c1d66(); if (g_unwind) return; RELOAD();
/* 7570e0: mov eax, dword ptr [ebp + 0x408] */
  eax = R32((uint32_t)(ebp + 0x408u));
/* 7570e6: mov dword ptr [ebx + 0x408], eax */
  W32((uint32_t)(ebx + 0x408u), eax);
/* 7570ec: mov ecx, dword ptr [ebp + 0x40c] */
  ecx = R32((uint32_t)(ebp + 0x40cu));
/* 7570f2: mov dword ptr [ebx + 0x40c], ecx */
  W32((uint32_t)(ebx + 0x40cu), ecx);
/* 7570f8: mov edx, dword ptr [ebp + 0x410] */
  edx = R32((uint32_t)(ebp + 0x410u));
/* 7570fe: mov dword ptr [ebx + 0x410], edx */
  W32((uint32_t)(ebx + 0x410u), edx);
/* 757104: lea esi, [ebp + 0x414] */
  esi = (uint32_t)(ebp + 0x414u);
/* 75710a: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 757110: mov ecx, 7 */
  ecx = 0x7u;
/* 757115: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 757117: lea eax, [ebp + 0x430] */
  eax = (uint32_t)(ebp + 0x430u);
/* 75711d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75711f: lea ecx, [ebx + 0x430] */
  ecx = (uint32_t)(ebx + 0x430u);
/* 757125: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 757127: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75712a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75712d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 757130: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 757133: mov ecx, dword ptr [ebx + 0x43c] */
  ecx = R32((uint32_t)(ebx + 0x43cu));
/* 757139: mov esi, dword ptr [ebp + 0x43c] */
  esi = R32((uint32_t)(ebp + 0x43cu));
/* 75713f: mov eax, dword ptr [ebx + 0x43c] */
  eax = R32((uint32_t)(ebx + 0x43cu));
/* 757145: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 757147: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75714a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75714c: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 757152: mov ecx, eax */
  ecx = eax;
/* 757154: mov eax, dword ptr [ebp + 0x43c] */
  eax = R32((uint32_t)(ebp + 0x43cu));
/* 75715a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75715c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75715f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 757161: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 757167: mov edx, dword ptr [ebp + 0x43c] */
  edx = R32((uint32_t)(ebp + 0x43cu));
/* 75716d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75716f: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 757172: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 757174: mov dword ptr [ebx + 0x43c], edx */
  W32((uint32_t)(ebx + 0x43cu), edx);
/* 75717a: mov eax, dword ptr [ebp + 0x440] */
  eax = R32((uint32_t)(ebp + 0x440u));
/* 757180: mov dword ptr [ebx + 0x440], eax */
  W32((uint32_t)(ebx + 0x440u), eax);
/* 757186: mov ecx, dword ptr [ebp + 0x444] */
  ecx = R32((uint32_t)(ebp + 0x444u));
/* 75718c: mov byte ptr [esp + 0x1c], 9 */
  W8((uint32_t)(esp + 0x1cu), 0x9u);
/* 757191: mov dword ptr [ebx + 0x444], ecx */
  W32((uint32_t)(ebx + 0x444u), ecx);
/* 757197: lea edx, [ebp + 0x448] */
  edx = (uint32_t)(ebp + 0x448u);
/* 75719d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75719f: lea eax, [ebx + 0x448] */
  eax = (uint32_t)(ebx + 0x448u);
/* 7571a5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7571a7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7571aa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7571ad: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7571b0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7571b3: mov eax, dword ptr [ebp + 0x454] */
  eax = R32((uint32_t)(ebp + 0x454u));
/* 7571b9: mov dword ptr [ebx + 0x454], eax */
  W32((uint32_t)(ebx + 0x454u), eax);
/* 7571bf: mov ecx, dword ptr [ebp + 0x458] */
  ecx = R32((uint32_t)(ebp + 0x458u));
/* 7571c5: mov dword ptr [ebx + 0x458], ecx */
  W32((uint32_t)(ebx + 0x458u), ecx);
/* 7571cb: mov edx, dword ptr [ebp + 0x45c] */
  edx = R32((uint32_t)(ebp + 0x45cu));
/* 7571d1: mov dword ptr [ebx + 0x45c], edx */
  W32((uint32_t)(ebx + 0x45cu), edx);
/* 7571d7: mov eax, dword ptr [ebp + 0x460] */
  eax = R32((uint32_t)(ebp + 0x460u));
/* 7571dd: mov dword ptr [ebx + 0x460], eax */
  W32((uint32_t)(ebx + 0x460u), eax);
/* 7571e3: mov ecx, dword ptr [ebp + 0x464] */
  ecx = R32((uint32_t)(ebp + 0x464u));
/* 7571e9: mov dword ptr [ebx + 0x464], ecx */
  W32((uint32_t)(ebx + 0x464u), ecx);
/* 7571ef: mov edx, dword ptr [ebp + 0x468] */
  edx = R32((uint32_t)(ebp + 0x468u));
/* 7571f5: mov dword ptr [ebx + 0x468], edx */
  W32((uint32_t)(ebx + 0x468u), edx);
/* 7571fb: mov eax, dword ptr [ebp + 0x46c] */
  eax = R32((uint32_t)(ebp + 0x46cu));
/* 757201: mov dword ptr [ebx + 0x46c], eax */
  W32((uint32_t)(ebx + 0x46cu), eax);
/* 757207: mov ecx, dword ptr [ebp + 0x470] */
  ecx = R32((uint32_t)(ebp + 0x470u));
/* 75720d: mov dword ptr [ebx + 0x470], ecx */
  W32((uint32_t)(ebx + 0x470u), ecx);
/* 757213: mov edx, dword ptr [ebp + 0x474] */
  edx = R32((uint32_t)(ebp + 0x474u));
/* 757219: mov dword ptr [ebx + 0x474], edx */
  W32((uint32_t)(ebx + 0x474u), edx);
/* 75721f: lea eax, [ebp + 0x478] */
  eax = (uint32_t)(ebp + 0x478u);
/* 757225: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 757227: lea ecx, [ebx + 0x478] */
  ecx = (uint32_t)(ebx + 0x478u);
/* 75722d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75722f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 757232: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 757235: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 757238: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75723b: lea ecx, [ebp + 0x484] */
  ecx = (uint32_t)(ebp + 0x484u);
/* 757241: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757242: lea ecx, [ebx + 0x484] */
  ecx = (uint32_t)(ebx + 0x484u);
/* 757248: call 0x6cbbae */
  esp -= 4; W32(esp, 0x75724du); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 75724d: mov edx, dword ptr [ebp + 0x490] */
  edx = R32((uint32_t)(ebp + 0x490u));
/* 757253: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 757257: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757258: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757259: mov dword ptr [ebx + 0x490], edx */
  W32((uint32_t)(ebx + 0x490u), edx);
/* 75725f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 757260: mov eax, ebx */
  eax = ebx;
/* 757262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 757263: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75726a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75726d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757560(void) {
  LOAD_REGS();
L_757560: /* 757560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757561: mov esi, ecx */
  esi = ecx;
/* 757563: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x757568u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 757568: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75756d: je 0x75757e */
  if (zf) goto L_75757e;
L_75756f: /* 75756f: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 757574: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757575: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75757bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75757b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75757e: /* 75757e: mov eax, esi */
  eax = esi;
/* 757580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757581: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7575a0(void) {
  LOAD_REGS();
L_7575a0: /* 7575a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7575a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7575a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7575a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7575a9: mov esi, ecx */
  esi = ecx;
/* 7575ab: je 0x7575e0 */
  if (zf) goto L_7575e0;
L_7575ad: /* 7575ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7575b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7575b1: push 0x6c8d9b */
  { uint32_t v = 0x6c8d9bu; esp -= 4; W32(esp, v); }
/* 7575b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7575b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7575ba: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 7575bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7575c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7575c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7575c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7575c8: je 0x7575d8 */
  if (zf) goto L_7575d8;
L_7575ca: /* 7575ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7575d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7575d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7575d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7575d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7575d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7575d8: /* 7575d8: mov eax, edi */
  eax = edi;
/* 7575da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7575db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7575dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7575dd: ret 4 */
  esp += 8; SPILL(); return;
L_7575e0: /* 7575e0: mov ecx, esi */
  ecx = esi;
/* 7575e2: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x7575e7u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 7575e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7575ea: je 0x7575fb */
  if (zf) goto L_7575fb;
L_7575ec: /* 7575ec: push 0x494 */
  { uint32_t v = 0x494u; esp -= 4; W32(esp, v); }
/* 7575f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7575f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7575f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7575f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7575fb: /* 7575fb: mov eax, esi */
  eax = esi;
/* 7575fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7575fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7575ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757630(void) {
  LOAD_REGS();
L_757630: /* 757630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757632: push 0x9c8c04 */
  { uint32_t v = 0x9c8c04u; esp -= 4; W32(esp, v); }
/* 757637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75763d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75763e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757647: mov esi, ecx */
  esi = ecx;
/* 757649: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75764d: mov dword ptr [esi], 0xa04fd8 */
  W32((uint32_t)(esi), 0xa04fd8u);
/* 757653: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 75765b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x757661u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 757661: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 757667: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75766c: call 0x6c53cb */
  esp -= 4; W32(esp, 0x757671u); SPILL(); f_6c53cb(); if (g_unwind) return; RELOAD();
/* 757671: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 757677: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75767c: call 0x6c166d */
  esp -= 4; W32(esp, 0x757681u); SPILL(); f_6c166d(); if (g_unwind) return; RELOAD();
/* 757681: mov ecx, esi */
  ecx = esi;
/* 757683: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75768b: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x757690u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 757690: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757694: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757695: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75769c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75769f: ret  */
  esp += 4; SPILL(); return;
}

void f_7576c0(void) {
  LOAD_REGS();
L_7576c0: /* 7576c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7576c2: push 0x9c8c36 */
  { uint32_t v = 0x9c8c36u; esp -= 4; W32(esp, v); }
/* 7576c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7576cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7576ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7576d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7576d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7576d7: mov esi, ecx */
  esi = ecx;
/* 7576d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7576dd: call 0x6c61bd */
  esp -= 4; W32(esp, 0x7576e2u); SPILL(); f_6c61bd(); if (g_unwind) return; RELOAD();
/* 7576e2: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 7576e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7576ea: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7576f2: mov dword ptr [esi], 0xa04fd8 */
  W32((uint32_t)(esi), 0xa04fd8u);
/* 7576f8: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7576feu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7576fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 757700: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 757706: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 75770b: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x757711u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 757711: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757715: mov eax, esi */
  eax = esi;
/* 757717: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757718: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75771f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 757722: ret  */
  esp += 4; SPILL(); return;
}

void f_757750(void) {
  LOAD_REGS();
L_757750: /* 757750: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757752: push 0x9c8c66 */
  { uint32_t v = 0x9c8c66u; esp -= 4; W32(esp, v); }
/* 757757: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75775d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75775e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757765: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757767: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757768: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75776c: mov esi, ecx */
  esi = ecx;
/* 75776e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75776f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 757773: call 0x6c16cc */
  esp -= 4; W32(esp, 0x757778u); SPILL(); f_6c16cc(); if (g_unwind) return; RELOAD();
/* 757778: mov dword ptr [esi], 0xa04fd8 */
  W32((uint32_t)(esi), 0xa04fd8u);
/* 75777e: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 757784: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 75778a: mov ecx, dword ptr [edi + 0x498] */
  ecx = R32((uint32_t)(edi + 0x498u));
/* 757790: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
/* 757796: mov edx, dword ptr [edi + 0x49c] */
  edx = R32((uint32_t)(edi + 0x49cu));
/* 75779c: mov ecx, dword ptr [esi + 0x49c] */
  ecx = R32((uint32_t)(esi + 0x49cu));
/* 7577a2: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7577a4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7577a7: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7577a9: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 7577af: mov eax, dword ptr [edi + 0x4a0] */
  eax = R32((uint32_t)(edi + 0x4a0u));
/* 7577b5: lea edx, [edi + 0x4a4] */
  edx = (uint32_t)(edi + 0x4a4u);
/* 7577bb: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 7577c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7577c2: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7577ca: mov dword ptr [esi + 0x4a0], eax */
  W32((uint32_t)(esi + 0x4a0u), eax);
/* 7577d0: call 0x6c6a3c */
  esp -= 4; W32(esp, 0x7577d5u); SPILL(); f_6c6a3c(); if (g_unwind) return; RELOAD();
/* 7577d5: lea eax, [edi + 0x4b0] */
  eax = (uint32_t)(edi + 0x4b0u);
/* 7577db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7577dc: lea ecx, [esi + 0x4b0] */
  ecx = (uint32_t)(esi + 0x4b0u);
/* 7577e2: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7577e7: call 0x6c16f4 */
  esp -= 4; W32(esp, 0x7577ecu); SPILL(); f_6c16f4(); if (g_unwind) return; RELOAD();
/* 7577ec: mov ecx, dword ptr [edi + 0x4bc] */
  ecx = R32((uint32_t)(edi + 0x4bcu));
/* 7577f2: mov dword ptr [esi + 0x4bc], ecx */
  W32((uint32_t)(esi + 0x4bcu), ecx);
/* 7577f8: mov edx, dword ptr [edi + 0x4c0] */
  edx = R32((uint32_t)(edi + 0x4c0u));
/* 7577fe: mov dword ptr [esi + 0x4c0], edx */
  W32((uint32_t)(esi + 0x4c0u), edx);
/* 757804: mov eax, dword ptr [edi + 0x4c4] */
  eax = R32((uint32_t)(edi + 0x4c4u));
/* 75780a: mov dword ptr [esi + 0x4c4], eax */
  W32((uint32_t)(esi + 0x4c4u), eax);
/* 757810: mov ecx, dword ptr [edi + 0x4c8] */
  ecx = R32((uint32_t)(edi + 0x4c8u));
/* 757816: mov dword ptr [esi + 0x4c8], ecx */
  W32((uint32_t)(esi + 0x4c8u), ecx);
/* 75781c: mov edx, dword ptr [edi + 0x4cc] */
  edx = R32((uint32_t)(edi + 0x4ccu));
/* 757822: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 757826: mov dword ptr [esi + 0x4cc], edx */
  W32((uint32_t)(esi + 0x4ccu), edx);
/* 75782c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75782d: mov eax, esi */
  eax = esi;
/* 75782f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757830: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 757837: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75783a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757880(void) {
  LOAD_REGS();
L_757880: /* 757880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757881: mov esi, ecx */
  esi = ecx;
/* 757883: call 0x6c2a1d */
  esp -= 4; W32(esp, 0x757888u); SPILL(); f_6c2a1d(); if (g_unwind) return; RELOAD();
/* 757888: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75788d: je 0x75789e */
  if (zf) goto L_75789e;
L_75788f: /* 75788f: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 757894: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757895: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75789bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75789b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75789e: /* 75789e: mov eax, esi */
  eax = esi;
/* 7578a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7578a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7578c0(void) {
  LOAD_REGS();
L_7578c0: /* 7578c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7578c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7578c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7578c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7578c9: mov esi, ecx */
  esi = ecx;
/* 7578cb: je 0x757900 */
  if (zf) goto L_757900;
L_7578cd: /* 7578cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7578d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7578d1: push 0x6c2a1d */
  { uint32_t v = 0x6c2a1du; esp -= 4; W32(esp, v); }
/* 7578d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7578d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7578da: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 7578df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7578e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7578e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7578e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7578e8: je 0x7578f8 */
  if (zf) goto L_7578f8;
L_7578ea: /* 7578ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7578f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7578f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7578f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7578f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7578f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7578f8: /* 7578f8: mov eax, edi */
  eax = edi;
/* 7578fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7578fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7578fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7578fd: ret 4 */
  esp += 8; SPILL(); return;
L_757900: /* 757900: mov ecx, esi */
  ecx = esi;
/* 757902: call 0x6c2a1d */
  esp -= 4; W32(esp, 0x757907u); SPILL(); f_6c2a1d(); if (g_unwind) return; RELOAD();
/* 757907: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75790a: je 0x75791b */
  if (zf) goto L_75791b;
L_75790c: /* 75790c: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 757911: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757912: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757918u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757918: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75791b: /* 75791b: mov eax, esi */
  eax = esi;
/* 75791d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75791e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75791f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757950(void) {
  LOAD_REGS();
L_757950: /* 757950: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757952: push 0x9c8c88 */
  { uint32_t v = 0x9c8c88u; esp -= 4; W32(esp, v); }
/* 757957: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75795d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75795e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757965: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757967: mov esi, ecx */
  esi = ecx;
/* 757969: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75796d: mov dword ptr [esi], 0xa05088 */
  W32((uint32_t)(esi), 0xa05088u);
/* 757973: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75797b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x757981u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 757981: mov ecx, esi */
  ecx = esi;
/* 757983: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75798b: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x757990u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 757990: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757995: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75799c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75799f: ret  */
  esp += 4; SPILL(); return;
}

void f_7579c0(void) {
  LOAD_REGS();
L_7579c0: /* 7579c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7579c1: mov esi, ecx */
  esi = ecx;
/* 7579c3: call 0x6c61bd */
  esp -= 4; W32(esp, 0x7579c8u); SPILL(); f_6c61bd(); if (g_unwind) return; RELOAD();
/* 7579c8: mov dword ptr [esi], 0xa05088 */
  W32((uint32_t)(esi), 0xa05088u);
/* 7579ce: mov eax, esi */
  eax = esi;
/* 7579d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7579d1: ret  */
  esp += 4; SPILL(); return;
}

void f_7579f0(void) {
  LOAD_REGS();
L_7579f0: /* 7579f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7579f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7579f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7579f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7579f7: mov esi, ecx */
  esi = ecx;
/* 7579f9: call 0x6c16cc */
  esp -= 4; W32(esp, 0x7579feu); SPILL(); f_6c16cc(); if (g_unwind) return; RELOAD();
/* 7579fe: mov dword ptr [esi], 0xa05088 */
  W32((uint32_t)(esi), 0xa05088u);
/* 757a04: mov al, byte ptr [edi + 0x494] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x494u))) & 0xffu);
/* 757a0a: mov byte ptr [esi + 0x494], al */
  W8((uint32_t)(esi + 0x494u), (eax & 0xffu));
/* 757a10: lea ecx, [edi + 0x498] */
  ecx = (uint32_t)(edi + 0x498u);
/* 757a16: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 757a18: lea edx, [esi + 0x498] */
  edx = (uint32_t)(esi + 0x498u);
/* 757a1e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 757a20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 757a23: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 757a26: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 757a29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 757a2c: add edi, 0x4a4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4a4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 757a32: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 757a34: lea edx, [esi + 0x4a4] */
  edx = (uint32_t)(esi + 0x4a4u);
/* 757a3a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 757a3c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 757a3f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 757a42: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 757a45: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 757a48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757a49: mov eax, esi */
  eax = esi;
/* 757a4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757a4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757a70(void) {
  LOAD_REGS();
L_757a70: /* 757a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757a71: mov esi, ecx */
  esi = ecx;
/* 757a73: call 0x6c3cc9 */
  esp -= 4; W32(esp, 0x757a78u); SPILL(); f_6c3cc9(); if (g_unwind) return; RELOAD();
/* 757a78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757a7d: je 0x757a8e */
  if (zf) goto L_757a8e;
L_757a7f: /* 757a7f: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 757a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757a85: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757a8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_757a8e: /* 757a8e: mov eax, esi */
  eax = esi;
/* 757a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757a91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757ab0(void) {
  LOAD_REGS();
L_757ab0: /* 757ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 757ab1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 757ab5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757ab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757ab9: mov esi, ecx */
  esi = ecx;
/* 757abb: je 0x757af0 */
  if (zf) goto L_757af0;
L_757abd: /* 757abd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 757ac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757ac1: push 0x6c3cc9 */
  { uint32_t v = 0x6c3cc9u; esp -= 4; W32(esp, v); }
/* 757ac6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 757ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757aca: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 757acf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757ad0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x757ad5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 757ad5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757ad8: je 0x757ae8 */
  if (zf) goto L_757ae8;
L_757ada: /* 757ada: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 757ae0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 757ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 757ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757ae5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x757ae8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_757ae8: /* 757ae8: mov eax, edi */
  eax = edi;
/* 757aea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757aeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757aec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 757aed: ret 4 */
  esp += 8; SPILL(); return;
L_757af0: /* 757af0: mov ecx, esi */
  ecx = esi;
/* 757af2: call 0x6c3cc9 */
  esp -= 4; W32(esp, 0x757af7u); SPILL(); f_6c3cc9(); if (g_unwind) return; RELOAD();
/* 757af7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757afa: je 0x757b0b */
  if (zf) goto L_757b0b;
L_757afc: /* 757afc: push 0x4b0 */
  { uint32_t v = 0x4b0u; esp -= 4; W32(esp, v); }
/* 757b01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757b02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757b08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757b08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_757b0b: /* 757b0b: mov eax, esi */
  eax = esi;
/* 757b0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757b0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 757b0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757b40(void) {
  LOAD_REGS();
L_757b40: /* 757b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757b42: push 0x9c8cb6 */
  { uint32_t v = 0x9c8cb6u; esp -= 4; W32(esp, v); }
/* 757b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 757b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757b57: mov esi, ecx */
  esi = ecx;
/* 757b59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 757b5d: mov dword ptr [esi], 0xa05140 */
  W32((uint32_t)(esi), 0xa05140u);
/* 757b63: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 757b6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x757b71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 757b71: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 757b77: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 757b7c: call 0x6ccbf3 */
  esp -= 4; W32(esp, 0x757b81u); SPILL(); f_6ccbf3(); if (g_unwind) return; RELOAD();
/* 757b81: mov ecx, esi */
  ecx = esi;
/* 757b83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 757b8b: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x757b90u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 757b90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757b94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757b95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 757b9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 757b9f: ret  */
  esp += 4; SPILL(); return;
}

void f_757bc0(void) {
  LOAD_REGS();
L_757bc0: /* 757bc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757bc2: push 0x9c8cd8 */
  { uint32_t v = 0x9c8cd8u; esp -= 4; W32(esp, v); }
/* 757bc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 757bcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757bce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757bd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757bd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757bd7: mov esi, ecx */
  esi = ecx;
/* 757bd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 757bdd: call 0x6c61bd */
  esp -= 4; W32(esp, 0x757be2u); SPILL(); f_6c61bd(); if (g_unwind) return; RELOAD();
/* 757be2: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 757be8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 757bf0: mov dword ptr [esi], 0xa05140 */
  W32((uint32_t)(esi), 0xa05140u);
/* 757bf6: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x757bfcu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 757bfc: lea ecx, [esi + 0x49c] */
  ecx = (uint32_t)(esi + 0x49cu);
/* 757c02: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x757c08u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 757c08: lea ecx, [esi + 0x4a4] */
  ecx = (uint32_t)(esi + 0x4a4u);
/* 757c0e: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x757c14u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 757c14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 757c16: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 757c1c: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x757c22u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 757c22: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757c26: mov eax, esi */
  eax = esi;
/* 757c28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757c29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 757c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 757c33: ret  */
  esp += 4; SPILL(); return;
}

void f_757c60(void) {
  LOAD_REGS();
L_757c60: /* 757c60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757c62: push 0x9c8cf8 */
  { uint32_t v = 0x9c8cf8u; esp -= 4; W32(esp, v); }
/* 757c67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 757c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757c6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757c75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757c77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757c78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 757c7c: mov esi, ecx */
  esi = ecx;
/* 757c7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757c7f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 757c83: call 0x6c16cc */
  esp -= 4; W32(esp, 0x757c88u); SPILL(); f_6c16cc(); if (g_unwind) return; RELOAD();
/* 757c88: mov dword ptr [esi], 0xa05140 */
  W32((uint32_t)(esi), 0xa05140u);
/* 757c8e: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 757c94: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 757c9a: mov ecx, dword ptr [edi + 0x498] */
  ecx = R32((uint32_t)(edi + 0x498u));
/* 757ca0: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
/* 757ca6: mov edx, dword ptr [edi + 0x49c] */
  edx = R32((uint32_t)(edi + 0x49cu));
/* 757cac: mov dword ptr [esi + 0x49c], edx */
  W32((uint32_t)(esi + 0x49cu), edx);
/* 757cb2: mov eax, dword ptr [edi + 0x4a0] */
  eax = R32((uint32_t)(edi + 0x4a0u));
/* 757cb8: mov dword ptr [esi + 0x4a0], eax */
  W32((uint32_t)(esi + 0x4a0u), eax);
/* 757cbe: mov ecx, dword ptr [edi + 0x4a4] */
  ecx = R32((uint32_t)(edi + 0x4a4u));
/* 757cc4: mov dword ptr [esi + 0x4a4], ecx */
  W32((uint32_t)(esi + 0x4a4u), ecx);
/* 757cca: mov edx, dword ptr [edi + 0x4a8] */
  edx = R32((uint32_t)(edi + 0x4a8u));
/* 757cd0: lea eax, [edi + 0x4ac] */
  eax = (uint32_t)(edi + 0x4acu);
/* 757cd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757cd7: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 757cdd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 757ce5: mov dword ptr [esi + 0x4a8], edx */
  W32((uint32_t)(esi + 0x4a8u), edx);
/* 757ceb: call 0x6c841d */
  esp -= 4; W32(esp, 0x757cf0u); SPILL(); f_6c841d(); if (g_unwind) return; RELOAD();
/* 757cf0: mov ecx, dword ptr [edi + 0x4b8] */
  ecx = R32((uint32_t)(edi + 0x4b8u));
/* 757cf6: mov dword ptr [esi + 0x4b8], ecx */
  W32((uint32_t)(esi + 0x4b8u), ecx);
/* 757cfc: mov edx, dword ptr [edi + 0x4bc] */
  edx = R32((uint32_t)(edi + 0x4bcu));
/* 757d02: mov dword ptr [esi + 0x4bc], edx */
  W32((uint32_t)(esi + 0x4bcu), edx);
/* 757d08: mov eax, dword ptr [edi + 0x4c0] */
  eax = R32((uint32_t)(edi + 0x4c0u));
/* 757d0e: mov dword ptr [esi + 0x4c0], eax */
  W32((uint32_t)(esi + 0x4c0u), eax);
/* 757d14: mov ecx, dword ptr [edi + 0x4c4] */
  ecx = R32((uint32_t)(edi + 0x4c4u));
/* 757d1a: mov dword ptr [esi + 0x4c4], ecx */
  W32((uint32_t)(esi + 0x4c4u), ecx);
/* 757d20: mov edx, dword ptr [edi + 0x4c8] */
  edx = R32((uint32_t)(edi + 0x4c8u));
/* 757d26: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 757d2a: mov dword ptr [esi + 0x4c8], edx */
  W32((uint32_t)(esi + 0x4c8u), edx);
/* 757d30: mov eax, dword ptr [edi + 0x4cc] */
  eax = R32((uint32_t)(edi + 0x4ccu));
/* 757d36: mov dword ptr [esi + 0x4cc], eax */
  W32((uint32_t)(esi + 0x4ccu), eax);
/* 757d3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757d3d: mov eax, esi */
  eax = esi;
/* 757d3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757d40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 757d47: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 757d4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757d90(void) {
  LOAD_REGS();
L_757d90: /* 757d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757d91: mov esi, ecx */
  esi = ecx;
/* 757d93: call 0x6c9af2 */
  esp -= 4; W32(esp, 0x757d98u); SPILL(); f_6c9af2(); if (g_unwind) return; RELOAD();
/* 757d98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757d9d: je 0x757dae */
  if (zf) goto L_757dae;
L_757d9f: /* 757d9f: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 757da4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757da5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757dabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757dab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_757dae: /* 757dae: mov eax, esi */
  eax = esi;
/* 757db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757db1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757dd0(void) {
  LOAD_REGS();
L_757dd0: /* 757dd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 757dd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 757dd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757dd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757dd9: mov esi, ecx */
  esi = ecx;
/* 757ddb: je 0x757e10 */
  if (zf) goto L_757e10;
L_757ddd: /* 757ddd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 757de0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757de1: push 0x6c9af2 */
  { uint32_t v = 0x6c9af2u; esp -= 4; W32(esp, v); }
/* 757de6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 757de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757dea: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 757def: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757df0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x757df5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 757df5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757df8: je 0x757e08 */
  if (zf) goto L_757e08;
L_757dfa: /* 757dfa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 757e00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 757e02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 757e04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757e05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x757e08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_757e08: /* 757e08: mov eax, edi */
  eax = edi;
/* 757e0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757e0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757e0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 757e0d: ret 4 */
  esp += 8; SPILL(); return;
L_757e10: /* 757e10: mov ecx, esi */
  ecx = esi;
/* 757e12: call 0x6c9af2 */
  esp -= 4; W32(esp, 0x757e17u); SPILL(); f_6c9af2(); if (g_unwind) return; RELOAD();
/* 757e17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757e1a: je 0x757e2b */
  if (zf) goto L_757e2b;
L_757e1c: /* 757e1c: push 0x4d0 */
  { uint32_t v = 0x4d0u; esp -= 4; W32(esp, v); }
/* 757e21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757e22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757e28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757e28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_757e2b: /* 757e2b: mov eax, esi */
  eax = esi;
/* 757e2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757e2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 757e2f: ret 4 */
  esp += 8; SPILL(); return;
}
