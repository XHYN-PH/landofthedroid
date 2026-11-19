#include "recomp.h"
#include "rec_mod.h"

void f_ea4a05(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4a05: /* ea4a05: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea4a09: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea4a0c: pxor mm6, mm6 */
  guest_unsupported(0xea4a0c); /* pxor mm6, mm6 */
/* ea4a0f: movd mm4, dword ptr [edx + 0x14] */
  guest_unsupported(0xea4a0f); /* movd mm4, dword ptr [edx + 0x14] */
/* ea4a13: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea4a16: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea4a19: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea4a1c: pfadd mm0, mm4 */
  guest_unsupported(0xea4a1c); /* pfadd mm0, mm4 */
/* ea4a20: movd mm5, dword ptr [edx + 0x28] */
  guest_unsupported(0xea4a20); /* movd mm5, dword ptr [edx + 0x28] */
/* ea4a24: pfsub mm1, mm4 */
  guest_unsupported(0xea4a24); /* pfsub mm1, mm4 */
/* ea4a28: pfsubr mm2, mm4 */
  guest_unsupported(0xea4a28); /* pfsubr mm2, mm4 */
/* ea4a2c: pfsubr mm3, mm5 */
  guest_unsupported(0xea4a2c); /* pfsubr mm3, mm5 */
/* ea4a30: pfadd mm0, mm5 */
  guest_unsupported(0xea4a30); /* pfadd mm0, mm5 */
/* ea4a34: pfsub mm1, mm5 */
  guest_unsupported(0xea4a34); /* pfsub mm1, mm5 */
/* ea4a38: pfsub mm2, mm5 */
  guest_unsupported(0xea4a38); /* pfsub mm2, mm5 */
/* ea4a3c: movq mm5, qword ptr [edx + 0x20] */
  MMX[5] = R64((uint32_t)(edx + 0x20u));
/* ea4a40: pfsub mm3, mm4 */
  guest_unsupported(0xea4a40); /* pfsub mm3, mm4 */
/* ea4a44: punpckldq mm0, mm2 */
  guest_unsupported(0xea4a44); /* punpckldq mm0, mm2 */
/* ea4a47: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* ea4a4a: punpckldq mm6, mm1 */
  guest_unsupported(0xea4a4a); /* punpckldq mm6, mm1 */
/* ea4a4d: punpckldq mm7, mm1 */
  guest_unsupported(0xea4a4d); /* punpckldq mm7, mm1 */
/* ea4a50: punpckldq mm3, mm3 */
  guest_unsupported(0xea4a50); /* punpckldq mm3, mm3 */
/* ea4a53: pfcmpge mm6, mm0 */
  guest_unsupported(0xea4a53); /* pfcmpge mm6, mm0 */
/* ea4a57: pfcmpge mm7, mm3 */
  guest_unsupported(0xea4a57); /* pfcmpge mm7, mm3 */
/* ea4a5b: packssdw mm6, mm7 */
  guest_unsupported(0xea4a5b); /* packssdw mm6, mm7 */
/* ea4a5e: pmovmskb ecx, mm6 */
  guest_unsupported(0xea4a5e); /* pmovmskb ecx, mm6 */
/* ea4a61: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4a67: movq mm6, mm5 */
  MMX[6] = MMX[5];
/* ea4a6a: mov eax, ecx */
  eax = ecx;
/* ea4a6c: jne 0xea4ad3 */
  if (!zf) goto L_ea4ad3;
L_ea4a6e: /* ea4a6e: pfadd mm0, qword ptr [0xeb3b90] */
  guest_unsupported(0xea4a6e); /* pfadd mm0, qword ptr [0xeb3b90] */
/* ea4a76: movd mm3, dword ptr [edx + 0x18] */
  guest_unsupported(0xea4a76); /* movd mm3, dword ptr [edx + 0x18] */
/* ea4a7a: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea4a7a); /* movd mm7, dword ptr [edx + 8] */
/* ea4a7e: pfrsqrt mm4, mm0 */
  guest_unsupported(0xea4a7e); /* pfrsqrt mm4, mm0 */
/* ea4a82: punpckldq mm3, mm5 */
  guest_unsupported(0xea4a82); /* punpckldq mm3, mm5 */
/* ea4a85: punpckldq mm7, mm7 */
  guest_unsupported(0xea4a85); /* punpckldq mm7, mm7 */
/* ea4a88: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* ea4a8b: punpckldq mm0, mm0 */
  guest_unsupported(0xea4a8b); /* punpckldq mm0, mm0 */
/* ea4a8e: pfmul mm4, mm4 */
  guest_unsupported(0xea4a8e); /* pfmul mm4, mm4 */
/* ea4a92: punpckhdq mm5, mm7 */
  guest_unsupported(0xea4a92); /* punpckhdq mm5, mm7 */
/* ea4a95: movd mm6, dword ptr [edx + 0x10] */
  guest_unsupported(0xea4a95); /* movd mm6, dword ptr [edx + 0x10] */
/* ea4a99: pfrsqit1 mm4, mm0 */
  guest_unsupported(0xea4a99); /* pfrsqit1 mm4, mm0 */
/* ea4a9d: punpckhdq mm1, mm1 */
  guest_unsupported(0xea4a9d); /* punpckhdq mm1, mm1 */
/* ea4aa0: pfsub mm3, mm5 */
  guest_unsupported(0xea4aa0); /* pfsub mm3, mm5 */
/* ea4aa4: pfrcpit2 mm4, mm2 */
  guest_unsupported(0xea4aa4); /* pfrcpit2 mm4, mm2 */
/* ea4aa8: pfsub mm1, mm6 */
  guest_unsupported(0xea4aa8); /* pfsub mm1, mm6 */
/* ea4aac: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4aac); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea4ab4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea4ab8: pfmul mm0, mm4 */
  guest_unsupported(0xea4ab8); /* pfmul mm0, mm4 */
/* ea4abc: pfmul mm1, mm4 */
  guest_unsupported(0xea4abc); /* pfmul mm1, mm4 */
/* ea4ac0: pfmul mm3, mm4 */
  guest_unsupported(0xea4ac0); /* pfmul mm3, mm4 */
/* ea4ac4: punpckldq mm1, mm0 */
  guest_unsupported(0xea4ac4); /* punpckldq mm1, mm0 */
/* ea4ac7: movq qword ptr [eax], mm3 */
  W64((uint32_t)(eax), MMX[3]);
/* ea4aca: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea4ace: femms  */
  guest_unsupported(0xea4ace); /* femms  */
/* ea4ad0: ret 8 */
  esp += 12; SPILL(); return;
L_ea4ad3: /* ea4ad3: and eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea4ad8: cmp eax, 0xcc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea4add: jne 0xea4b48 */
  if (!zf) goto L_ea4b48;
L_ea4adf: /* ea4adf: pfadd mm1, qword ptr [0xeb3b90] */
  guest_unsupported(0xea4adf); /* pfadd mm1, qword ptr [0xeb3b90] */
/* ea4ae7: punpckhdq mm2, mm2 */
  guest_unsupported(0xea4ae7); /* punpckhdq mm2, mm2 */
/* ea4aea: pfrsqrt mm4, mm1 */
  guest_unsupported(0xea4aea); /* pfrsqrt mm4, mm1 */
/* ea4aee: movd mm3, dword ptr [edx + 0x10] */
  guest_unsupported(0xea4aee); /* movd mm3, dword ptr [edx + 0x10] */
/* ea4af2: movq mm0, mm4 */
  MMX[0] = MMX[4];
/* ea4af5: pfmul mm4, mm4 */
  guest_unsupported(0xea4af5); /* pfmul mm4, mm4 */
/* ea4af9: punpckldq mm1, mm1 */
  guest_unsupported(0xea4af9); /* punpckldq mm1, mm1 */
/* ea4afc: punpckldq mm5, dword ptr [edx + 0x18] */
  guest_unsupported(0xea4afc); /* punpckldq mm5, dword ptr [edx + 0x18] */
/* ea4b00: pfsub mm3, mm2 */
  guest_unsupported(0xea4b00); /* pfsub mm3, mm2 */
/* ea4b04: pfrsqit1 mm4, mm1 */
  guest_unsupported(0xea4b04); /* pfrsqit1 mm4, mm1 */
/* ea4b08: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea4b08); /* movd mm7, dword ptr [edx + 8] */
/* ea4b0c: punpckhdq mm6, mm6 */
  guest_unsupported(0xea4b0c); /* punpckhdq mm6, mm6 */
/* ea4b0f: pfrcpit2 mm4, mm0 */
  guest_unsupported(0xea4b0f); /* pfrcpit2 mm4, mm0 */
/* ea4b13: punpckldq mm7, mm6 */
  guest_unsupported(0xea4b13); /* punpckldq mm7, mm6 */
/* ea4b16: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4b16); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea4b1e: pxor mm7, qword ptr [0xeb3bc0] */
  guest_unsupported(0xea4b1e); /* pxor mm7, qword ptr [0xeb3bc0] */
/* ea4b25: pfmul mm1, mm4 */
  guest_unsupported(0xea4b25); /* pfmul mm1, mm4 */
/* ea4b29: pfadd mm5, mm7 */
  guest_unsupported(0xea4b29); /* pfadd mm5, mm7 */
/* ea4b2d: pfmul mm3, mm4 */
  guest_unsupported(0xea4b2d); /* pfmul mm3, mm4 */
/* ea4b31: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea4b35: pfmul mm5, mm4 */
  guest_unsupported(0xea4b35); /* pfmul mm5, mm4 */
/* ea4b39: punpckldq mm1, mm3 */
  guest_unsupported(0xea4b39); /* punpckldq mm1, mm3 */
/* ea4b3c: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea4b40: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea4b43: femms  */
  guest_unsupported(0xea4b43); /* femms  */
/* ea4b45: ret 8 */
  esp += 12; SPILL(); return;
L_ea4b48: /* ea4b48: test ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4b4e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea4b52: je 0xea4bbc */
  if (zf) goto L_ea4bbc;
L_ea4b54: /* ea4b54: pfadd mm2, qword ptr [0xeb3b90] */
  guest_unsupported(0xea4b54); /* pfadd mm2, qword ptr [0xeb3b90] */
/* ea4b5c: punpckhdq mm1, mm1 */
  guest_unsupported(0xea4b5c); /* punpckhdq mm1, mm1 */
/* ea4b5f: movq mm6, mm5 */
  MMX[6] = MMX[5];
/* ea4b62: pfrsqrt mm4, mm2 */
  guest_unsupported(0xea4b62); /* pfrsqrt mm4, mm2 */
/* ea4b66: movd mm3, dword ptr [edx + 0x18] */
  guest_unsupported(0xea4b66); /* movd mm3, dword ptr [edx + 0x18] */
/* ea4b6a: punpckhdq mm6, mm6 */
  guest_unsupported(0xea4b6a); /* punpckhdq mm6, mm6 */
/* ea4b6d: movq mm0, mm4 */
  MMX[0] = MMX[4];
/* ea4b70: pfmul mm4, mm4 */
  guest_unsupported(0xea4b70); /* pfmul mm4, mm4 */
/* ea4b74: punpckldq mm2, mm2 */
  guest_unsupported(0xea4b74); /* punpckldq mm2, mm2 */
/* ea4b77: punpckldq mm6, dword ptr [edx + 8] */
  guest_unsupported(0xea4b77); /* punpckldq mm6, dword ptr [edx + 8] */
/* ea4b7b: punpckldq mm3, mm5 */
  guest_unsupported(0xea4b7b); /* punpckldq mm3, mm5 */
/* ea4b7e: pfrsqit1 mm4, mm2 */
  guest_unsupported(0xea4b7e); /* pfrsqit1 mm4, mm2 */
/* ea4b82: movd mm7, dword ptr [edx + 0x10] */
  guest_unsupported(0xea4b82); /* movd mm7, dword ptr [edx + 0x10] */
/* ea4b86: pfrcpit2 mm4, mm0 */
  guest_unsupported(0xea4b86); /* pfrcpit2 mm4, mm0 */
/* ea4b8a: pxor mm6, qword ptr [0xeb3bc0] */
  guest_unsupported(0xea4b8a); /* pxor mm6, qword ptr [0xeb3bc0] */
/* ea4b91: pfadd mm1, mm7 */
  guest_unsupported(0xea4b91); /* pfadd mm1, mm7 */
/* ea4b95: pfmul mm4, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4b95); /* pfmul mm4, qword ptr [0xeb3c08] */
/* ea4b9d: pfadd mm3, mm6 */
  guest_unsupported(0xea4b9d); /* pfadd mm3, mm6 */
/* ea4ba1: pfmul mm1, mm4 */
  guest_unsupported(0xea4ba1); /* pfmul mm1, mm4 */
/* ea4ba5: pfmul mm2, mm4 */
  guest_unsupported(0xea4ba5); /* pfmul mm2, mm4 */
/* ea4ba9: pfmul mm3, mm4 */
  guest_unsupported(0xea4ba9); /* pfmul mm3, mm4 */
/* ea4bad: punpckldq mm1, mm2 */
  guest_unsupported(0xea4bad); /* punpckldq mm1, mm2 */
/* ea4bb0: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea4bb4: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea4bb7: femms  */
  guest_unsupported(0xea4bb7); /* femms  */
/* ea4bb9: ret 8 */
  esp += 12; SPILL(); return;
L_ea4bbc: /* ea4bbc: pfadd mm3, qword ptr [0xeb3b90] */
  guest_unsupported(0xea4bbc); /* pfadd mm3, qword ptr [0xeb3b90] */
/* ea4bc4: punpckhdq mm1, mm1 */
  guest_unsupported(0xea4bc4); /* punpckhdq mm1, mm1 */
/* ea4bc7: pfrsqrt mm2, mm3 */
  guest_unsupported(0xea4bc7); /* pfrsqrt mm2, mm3 */
/* ea4bcb: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea4bcb); /* movd mm4, dword ptr [edx + 8] */
/* ea4bcf: punpckhdq mm6, mm6 */
  guest_unsupported(0xea4bcf); /* punpckhdq mm6, mm6 */
/* ea4bd2: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* ea4bd5: pfmul mm2, mm2 */
  guest_unsupported(0xea4bd5); /* pfmul mm2, mm2 */
/* ea4bd9: punpckldq mm3, mm3 */
  guest_unsupported(0xea4bd9); /* punpckldq mm3, mm3 */
/* ea4bdc: punpckldq mm5, dword ptr [edx + 0x18] */
  guest_unsupported(0xea4bdc); /* punpckldq mm5, dword ptr [edx + 0x18] */
/* ea4be0: punpckldq mm4, mm6 */
  guest_unsupported(0xea4be0); /* punpckldq mm4, mm6 */
/* ea4be3: pfrsqit1 mm2, mm3 */
  guest_unsupported(0xea4be3); /* pfrsqit1 mm2, mm3 */
/* ea4be7: movd mm7, dword ptr [edx + 0x10] */
  guest_unsupported(0xea4be7); /* movd mm7, dword ptr [edx + 0x10] */
/* ea4beb: pfrcpit2 mm2, mm0 */
  guest_unsupported(0xea4beb); /* pfrcpit2 mm2, mm0 */
/* ea4bef: pfsub mm1, mm7 */
  guest_unsupported(0xea4bef); /* pfsub mm1, mm7 */
/* ea4bf3: pfadd mm5, mm4 */
  guest_unsupported(0xea4bf3); /* pfadd mm5, mm4 */
/* ea4bf7: pfmul mm2, qword ptr [0xeb3c08] */
  guest_unsupported(0xea4bf7); /* pfmul mm2, qword ptr [0xeb3c08] */
/* ea4bff: pfmul mm3, mm2 */
  guest_unsupported(0xea4bff); /* pfmul mm3, mm2 */
/* ea4c03: pfmul mm1, mm2 */
  guest_unsupported(0xea4c03); /* pfmul mm1, mm2 */
/* ea4c07: pfmul mm5, mm2 */
  guest_unsupported(0xea4c07); /* pfmul mm5, mm2 */
/* ea4c0b: punpckldq mm3, mm1 */
  guest_unsupported(0xea4c0b); /* punpckldq mm3, mm1 */
/* ea4c0e: movq qword ptr [eax], mm5 */
  W64((uint32_t)(eax), MMX[5]);
/* ea4c11: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea4c15: femms  */
  guest_unsupported(0xea4c15); /* femms  */
/* ea4c17: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea4c1a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4c1a: /* ea4c1a: femms  */
  guest_unsupported(0xea4c1a); /* femms  */
/* ea4c1c: movq mm0, qword ptr [0xeb3c30] */
  MMX[0] = R64((uint32_t)(0xeb3c30u));
/* ea4c23: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea4c24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea4c25: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4c28: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea4c2b: pfmul mm0, qword ptr [esp + 0x30] */
  guest_unsupported(0xea4c2b); /* pfmul mm0, qword ptr [esp + 0x30] */
/* ea4c31: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea4c31); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea4c37: movq qword ptr [esp + 0x10], mm1 */
  W64((uint32_t)(esp + 0x10u), MMX[1]);
/* ea4c3c: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea4c41u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea4c41: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea4c45: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea4c4a: punpckhdq mm0, mm0 */
  guest_unsupported(0xea4c4a); /* punpckhdq mm0, mm0 */
/* ea4c4d: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea4c52u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea4c52: movq qword ptr [esp + 8], mm0 */
  W64((uint32_t)(esp + 0x8u), MMX[0]);
/* ea4c57: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea4c5c: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea4c61u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea4c61: movq mm1, qword ptr [esp] */
  MMX[1] = R64((uint32_t)(esp));
/* ea4c65: movq mm2, qword ptr [esp + 8] */
  MMX[2] = R64((uint32_t)(esp + 0x8u));
/* ea4c6a: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* ea4c6e: movq mm7, qword ptr [0xeb3c20] */
  MMX[7] = R64((uint32_t)(0xeb3c20u));
/* ea4c75: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea4c78: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea4c7b: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea4c7e: punpckldq mm0, mm0 */
  guest_unsupported(0xea4c7e); /* punpckldq mm0, mm0 */
/* ea4c81: punpckldq mm3, mm3 */
  guest_unsupported(0xea4c81); /* punpckldq mm3, mm3 */
/* ea4c84: punpckhdq mm4, mm4 */
  guest_unsupported(0xea4c84); /* punpckhdq mm4, mm4 */
/* ea4c87: punpckhdq mm5, mm5 */
  guest_unsupported(0xea4c87); /* punpckhdq mm5, mm5 */
/* ea4c8a: pxor mm0, mm7 */
  guest_unsupported(0xea4c8a); /* pxor mm0, mm7 */
/* ea4c8d: psrlq mm7, 0x20 */
  guest_unsupported(0xea4c8d); /* psrlq mm7, 0x20 */
/* ea4c91: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea4c94: punpckldq mm2, mm2 */
  guest_unsupported(0xea4c94); /* punpckldq mm2, mm2 */
/* ea4c97: punpckhdq mm6, mm6 */
  guest_unsupported(0xea4c97); /* punpckhdq mm6, mm6 */
/* ea4c9a: pxor mm5, mm7 */
  guest_unsupported(0xea4c9a); /* pxor mm5, mm7 */
/* ea4c9d: pfmul mm0, mm6 */
  guest_unsupported(0xea4c9d); /* pfmul mm0, mm6 */
/* ea4ca1: pfmul mm3, mm2 */
  guest_unsupported(0xea4ca1); /* pfmul mm3, mm2 */
/* ea4ca5: pfmul mm4, mm2 */
  guest_unsupported(0xea4ca5); /* pfmul mm4, mm2 */
/* ea4ca9: pfmul mm5, mm6 */
  guest_unsupported(0xea4ca9); /* pfmul mm5, mm6 */
/* ea4cad: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea4cb0: punpckhdq mm7, mm7 */
  guest_unsupported(0xea4cb0); /* punpckhdq mm7, mm7 */
/* ea4cb3: punpckldq mm7, mm1 */
  guest_unsupported(0xea4cb3); /* punpckldq mm7, mm1 */
/* ea4cb6: pfmul mm0, mm1 */
  guest_unsupported(0xea4cb6); /* pfmul mm0, mm1 */
/* ea4cba: pfmul mm3, mm7 */
  guest_unsupported(0xea4cba); /* pfmul mm3, mm7 */
/* ea4cbe: pfmul mm4, mm7 */
  guest_unsupported(0xea4cbe); /* pfmul mm4, mm7 */
/* ea4cc2: pfmul mm5, mm1 */
  guest_unsupported(0xea4cc2); /* pfmul mm5, mm1 */
/* ea4cc6: pfadd mm0, mm4 */
  guest_unsupported(0xea4cc6); /* pfadd mm0, mm4 */
/* ea4cca: pfadd mm3, mm5 */
  guest_unsupported(0xea4cca); /* pfadd mm3, mm5 */
/* ea4cce: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea4cd1: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea4cd5: femms  */
  guest_unsupported(0xea4cd5); /* femms  */
/* ea4cd7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea4cdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea4cdc: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea4cdf(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4cdf: /* ea4cdf: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4ce2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* ea4ce6: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ea4cea: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* ea4cee: mov ebp, esp */
  ebp = esp;
/* ea4cf0: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea4cf3: mov edx, esp */
  edx = esp;
/* ea4cf5: femms  */
  guest_unsupported(0xea4cf5); /* femms  */
/* ea4cf7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* ea4cfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ea4cfb: call 0xea9a32 */
  esp -= 4; W32(esp, 0xea4d00u); SPILL(); f_ea9a32(); if (g_unwind) return; RELOAD();
/* ea4d00: movd mm0, dword ptr [ebp + 0x24] */
  guest_unsupported(0xea4d00); /* movd mm0, dword ptr [ebp + 0x24] */
/* ea4d04: pfmul mm0, qword ptr [0xeb3c30] */
  guest_unsupported(0xea4d04); /* pfmul mm0, qword ptr [0xeb3c30] */
/* ea4d0c: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea4d11u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea4d11: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* ea4d14: movq mm1, qword ptr [esp] */
  MMX[1] = R64((uint32_t)(esp));
/* ea4d18: movd mm2, dword ptr [esp + 8] */
  guest_unsupported(0xea4d18); /* movd mm2, dword ptr [esp + 8] */
/* ea4d1d: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea4d20: punpckhdq mm3, mm3 */
  guest_unsupported(0xea4d20); /* punpckhdq mm3, mm3 */
/* ea4d23: pfmul mm1, mm3 */
  guest_unsupported(0xea4d23); /* pfmul mm1, mm3 */
/* ea4d27: pfmul mm2, mm3 */
  guest_unsupported(0xea4d27); /* pfmul mm2, mm3 */
/* ea4d2b: punpckldq mm2, mm0 */
  guest_unsupported(0xea4d2b); /* punpckldq mm2, mm0 */
/* ea4d2e: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea4d31: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea4d35: femms  */
  guest_unsupported(0xea4d35); /* femms  */
/* ea4d37: mov esp, ebp */
  esp = ebp;
/* ea4d39: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* ea4d3d: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* ea4d41: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* ea4d45: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4d48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea4d4b(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4d4b: /* ea4d4b: femms  */
  guest_unsupported(0xea4d4b); /* femms  */
/* ea4d4d: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4d50: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ea4d54: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ea4d58: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* ea4d5c: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ea4d60: movd mm0, dword ptr [0xeb3c28] */
  guest_unsupported(0xea4d60); /* movd mm0, dword ptr [0xeb3c28] */
/* ea4d67: movq mm1, qword ptr [ecx] */
  MMX[1] = R64((uint32_t)(ecx));
/* ea4d6a: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xea4d6a); /* pfmul mm1, qword ptr [edx] */
/* ea4d6e: movq mm2, qword ptr [ecx + 8] */
  MMX[2] = R64((uint32_t)(ecx + 0x8u));
/* ea4d72: pfmul mm2, qword ptr [edx + 8] */
  guest_unsupported(0xea4d72); /* pfmul mm2, qword ptr [edx + 8] */
/* ea4d77: pfadd mm1, mm2 */
  guest_unsupported(0xea4d77); /* pfadd mm1, mm2 */
/* ea4d7b: pxor mm7, mm7 */
  guest_unsupported(0xea4d7b); /* pxor mm7, mm7 */
/* ea4d7e: movd mm4, dword ptr [esp + 0x28] */
  guest_unsupported(0xea4d7e); /* movd mm4, dword ptr [esp + 0x28] */
/* ea4d83: pfsub mm0, mm4 */
  guest_unsupported(0xea4d83); /* pfsub mm0, mm4 */
/* ea4d87: pfacc mm1, mm1 */
  guest_unsupported(0xea4d87); /* pfacc mm1, mm1 */
/* ea4d8b: pfcmpge mm7, mm1 */
  guest_unsupported(0xea4d8b); /* pfcmpge mm7, mm1 */
/* ea4d8f: movq mm6, qword ptr [0xeb3c88] */
  MMX[6] = R64((uint32_t)(0xeb3c88u));
/* ea4d96: pand mm7, qword ptr [0xeb3c70] */
  guest_unsupported(0xea4d96); /* pand mm7, qword ptr [0xeb3c70] */
/* ea4d9d: pxor mm1, mm7 */
  guest_unsupported(0xea4d9d); /* pxor mm1, mm7 */
/* ea4da0: pfcmpge mm6, mm1 */
  guest_unsupported(0xea4da0); /* pfcmpge mm6, mm1 */
/* ea4da4: movd eax, mm6 */
  guest_unsupported(0xea4da4); /* movd eax, mm6 */
/* ea4da7: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea4daa: pfmul mm3, mm3 */
  guest_unsupported(0xea4daa); /* pfmul mm3, mm3 */
/* ea4dae: pfsubr mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea4dae); /* pfsubr mm3, qword ptr [0xeb3c28] */
/* ea4db6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea4db8: je 0xea4e36 */
  if (zf) goto L_ea4e36;
L_ea4dba: /* ea4dba: pfrsqrt mm4, mm3 */
  guest_unsupported(0xea4dba); /* pfrsqrt mm4, mm3 */
/* ea4dbe: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* ea4dc1: movd dword ptr [esp + 0xc], mm7 */
  guest_unsupported(0xea4dc1); /* movd dword ptr [esp + 0xc], mm7 */
/* ea4dc6: pfmul mm2, mm4 */
  guest_unsupported(0xea4dc6); /* pfmul mm2, mm4 */
/* ea4dca: pfrsqit1 mm3, mm2 */
  guest_unsupported(0xea4dca); /* pfrsqit1 mm3, mm2 */
/* ea4dce: pfrcpit2 mm3, mm4 */
  guest_unsupported(0xea4dce); /* pfrcpit2 mm3, mm4 */
/* ea4dd2: pfrcp mm2, mm3 */
  guest_unsupported(0xea4dd2); /* pfrcp mm2, mm3 */
/* ea4dd6: movq mm4, mm3 */
  MMX[4] = MMX[3];
/* ea4dd9: pfrcpit1 mm4, mm2 */
  guest_unsupported(0xea4dd9); /* pfrcpit1 mm4, mm2 */
/* ea4ddd: pfrcpit2 mm4, mm2 */
  guest_unsupported(0xea4ddd); /* pfrcpit2 mm4, mm2 */
/* ea4de1: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea4de1); /* movd dword ptr [esp], mm0 */
/* ea4de5: movd dword ptr [esp + 4], mm3 */
  guest_unsupported(0xea4de5); /* movd dword ptr [esp + 4], mm3 */
/* ea4dea: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea4ded: movq mm1, mm4 */
  MMX[1] = MMX[4];
/* ea4df0: call 0xeab680 */
  esp -= 4; W32(esp, 0xea4df5u); SPILL(); f_eab680(); if (g_unwind) return; RELOAD();
/* ea4df5: movd mm1, dword ptr [esp + 0x28] */
  guest_unsupported(0xea4df5); /* movd mm1, dword ptr [esp + 0x28] */
/* ea4dfa: movd dword ptr [esp + 8], mm0 */
  guest_unsupported(0xea4dfa); /* movd dword ptr [esp + 8], mm0 */
/* ea4dff: pfmul mm0, mm1 */
  guest_unsupported(0xea4dff); /* pfmul mm0, mm1 */
/* ea4e03: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea4e08u); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea4e08: movd dword ptr [esp + 0x28], mm0 */
  guest_unsupported(0xea4e08); /* movd dword ptr [esp + 0x28], mm0 */
/* ea4e0d: movd mm1, dword ptr [esp] */
  guest_unsupported(0xea4e0d); /* movd mm1, dword ptr [esp] */
/* ea4e11: movd mm0, dword ptr [esp + 8] */
  guest_unsupported(0xea4e11); /* movd mm0, dword ptr [esp + 8] */
/* ea4e16: pfmul mm0, mm1 */
  guest_unsupported(0xea4e16); /* pfmul mm0, mm1 */
/* ea4e1a: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea4e1fu); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea4e1f: movd mm4, dword ptr [esp + 0x28] */
  guest_unsupported(0xea4e1f); /* movd mm4, dword ptr [esp + 0x28] */
/* ea4e24: movd mm1, dword ptr [esp + 4] */
  guest_unsupported(0xea4e24); /* movd mm1, dword ptr [esp + 4] */
/* ea4e29: movd mm7, dword ptr [esp + 0xc] */
  guest_unsupported(0xea4e29); /* movd mm7, dword ptr [esp + 0xc] */
/* ea4e2e: pfmul mm0, mm1 */
  guest_unsupported(0xea4e2e); /* pfmul mm0, mm1 */
/* ea4e32: pfmul mm4, mm1 */
  guest_unsupported(0xea4e32); /* pfmul mm4, mm1 */
L_ea4e36: /* ea4e36: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ea4e3a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* ea4e3e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* ea4e42: pxor mm4, mm7 */
  guest_unsupported(0xea4e42); /* pxor mm4, mm7 */
/* ea4e45: punpckldq mm0, mm0 */
  guest_unsupported(0xea4e45); /* punpckldq mm0, mm0 */
/* ea4e48: punpckldq mm4, mm4 */
  guest_unsupported(0xea4e48); /* punpckldq mm4, mm4 */
/* ea4e4b: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea4e4e: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea4e51: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea4e51); /* pfmul mm0, qword ptr [ecx] */
/* ea4e55: pfmul mm4, qword ptr [edx] */
  guest_unsupported(0xea4e55); /* pfmul mm4, qword ptr [edx] */
/* ea4e59: pfmul mm5, qword ptr [ecx + 8] */
  guest_unsupported(0xea4e59); /* pfmul mm5, qword ptr [ecx + 8] */
/* ea4e5e: pfmul mm6, qword ptr [edx + 8] */
  guest_unsupported(0xea4e5e); /* pfmul mm6, qword ptr [edx + 8] */
/* ea4e63: pfadd mm0, mm4 */
  guest_unsupported(0xea4e63); /* pfadd mm0, mm4 */
/* ea4e67: pfadd mm5, mm6 */
  guest_unsupported(0xea4e67); /* pfadd mm5, mm6 */
/* ea4e6b: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea4e6e: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea4e72: femms  */
  guest_unsupported(0xea4e72); /* femms  */
/* ea4e74: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ea4e78: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ea4e7c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4e7f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea4e82(void) {
  LOAD_REGS();
L_ea4e82: /* ea4e82: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4e85: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* ea4e89: mov ebp, esp */
  ebp = esp;
/* ea4e8b: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea4e8e: mov edx, esp */
  edx = esp;
/* ea4e90: femms  */
  guest_unsupported(0xea4e90); /* femms  */
/* ea4e92: movd mm0, dword ptr [ebp + 0x38] */
  guest_unsupported(0xea4e92); /* movd mm0, dword ptr [ebp + 0x38] */
/* ea4e96: movd mm1, dword ptr [ebp + 0x3c] */
  guest_unsupported(0xea4e96); /* movd mm1, dword ptr [ebp + 0x3c] */
/* ea4e9a: pfadd mm0, mm1 */
  guest_unsupported(0xea4e9a); /* pfadd mm0, mm1 */
/* ea4e9e: movd dword ptr [ebp + 0x38], mm0 */
  guest_unsupported(0xea4e9e); /* movd dword ptr [ebp + 0x38], mm0 */
/* ea4ea2: sub esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4ea5: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea4ea5); /* movd dword ptr [esp], mm0 */
/* ea4ea9: push dword ptr [ebp + 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0x30u)); esp -= 4; W32(esp, v); }
/* ea4eac: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* ea4eaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ea4eb0: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4eb5u); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4eb5: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea4eb9: push dword ptr [ebp + 0x38] */
  { uint32_t v = R32((uint32_t)(ebp + 0x38u)); esp -= 4; W32(esp, v); }
/* ea4ebc: push dword ptr [ebp + 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0x34u)); esp -= 4; W32(esp, v); }
/* ea4ebf: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* ea4ec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ea4ec3: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4ec8u); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4ec8: movd mm0, dword ptr [ebp + 0x38] */
  guest_unsupported(0xea4ec8); /* movd mm0, dword ptr [ebp + 0x38] */
/* ea4ecc: movd mm1, dword ptr [ebp + 0x3c] */
  guest_unsupported(0xea4ecc); /* movd mm1, dword ptr [ebp + 0x3c] */
/* ea4ed0: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* ea4ed4: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* ea4ed7: pfrcp mm2, mm0 */
  guest_unsupported(0xea4ed7); /* pfrcp mm2, mm0 */
/* ea4edb: pfrcpit1 mm0, mm2 */
  guest_unsupported(0xea4edb); /* pfrcpit1 mm0, mm2 */
/* ea4edf: pfrcpit2 mm0, mm2 */
  guest_unsupported(0xea4edf); /* pfrcpit2 mm0, mm2 */
/* ea4ee3: pfmul mm0, mm1 */
  guest_unsupported(0xea4ee3); /* pfmul mm0, mm1 */
/* ea4ee7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4eea: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* ea4eee: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* ea4ef1: movd dword ptr [esp + 8], mm0 */
  guest_unsupported(0xea4ef1); /* movd dword ptr [esp + 8], mm0 */
/* ea4ef6: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* ea4ef9: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4efeu); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4efe: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* ea4f01: femms  */
  guest_unsupported(0xea4f01); /* femms  */
/* ea4f03: mov esp, ebp */
  esp = ebp;
/* ea4f05: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* ea4f09: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4f0c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea4f0f(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4f0f: /* ea4f0f: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4f12: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ea4f16: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* ea4f1a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* ea4f1e: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ea4f22: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* ea4f26: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ea4f2a: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* ea4f2e: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea4f31: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4f36u); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4f36: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4f39: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ea4f3d: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* ea4f41: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* ea4f45: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ea4f49: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* ea4f4d: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ea4f51: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* ea4f55: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea4f58: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4f5du); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4f5d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea4f60: movd mm0, dword ptr [esp + 0x48] */
  guest_unsupported(0xea4f60); /* movd mm0, dword ptr [esp + 0x48] */
/* ea4f65: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* ea4f69: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea4f6c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* ea4f70: pfmul mm0, mm0 */
  guest_unsupported(0xea4f70); /* pfmul mm0, mm0 */
/* ea4f74: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* ea4f78: pfsub mm1, mm0 */
  guest_unsupported(0xea4f78); /* pfsub mm1, mm0 */
/* ea4f7c: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* ea4f7f: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* ea4f83: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* ea4f87: pfmul mm1, qword ptr [0xeb3ba8] */
  guest_unsupported(0xea4f87); /* pfmul mm1, qword ptr [0xeb3ba8] */
/* ea4f8f: movd dword ptr [esp + 0xc], mm1 */
  guest_unsupported(0xea4f8f); /* movd dword ptr [esp + 0xc], mm1 */
/* ea4f94: call 0xea4d4b */
  esp -= 4; W32(esp, 0xea4f99u); SPILL(); f_ea4d4b(); if (g_unwind) return; RELOAD();
/* ea4f99: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea4f9c: femms  */
  guest_unsupported(0xea4f9c); /* femms  */
/* ea4f9e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea4fa1(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea4fa1: /* ea4fa1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea4fa5: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea4fa8: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea4fab: movq mm2, qword ptr [edx + 8] */
  MMX[2] = R64((uint32_t)(edx + 0x8u));
/* ea4faf: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea4fb2: pfmul mm0, mm0 */
  guest_unsupported(0xea4fb2); /* pfmul mm0, mm0 */
/* ea4fb6: pfmul mm2, mm2 */
  guest_unsupported(0xea4fb6); /* pfmul mm2, mm2 */
/* ea4fba: pfadd mm0, mm2 */
  guest_unsupported(0xea4fba); /* pfadd mm0, mm2 */
/* ea4fbe: pfacc mm0, mm0 */
  guest_unsupported(0xea4fbe); /* pfacc mm0, mm0 */
/* ea4fc2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea4fc6: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea4fc9: pfrcp mm4, mm0 */
  guest_unsupported(0xea4fc9); /* pfrcp mm4, mm0 */
/* ea4fcd: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xea4fcd); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* ea4fd5: pxor mm1, qword ptr [0xeb3c70] */
  guest_unsupported(0xea4fd5); /* pxor mm1, qword ptr [0xeb3c70] */
/* ea4fdc: pxor mm3, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea4fdc); /* pxor mm3, qword ptr [0xeb3bb8] */
/* ea4fe3: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea4fe3); /* pfrcpit1 mm0, mm4 */
/* ea4fe7: pand mm1, mm5 */
  guest_unsupported(0xea4fe7); /* pand mm1, mm5 */
/* ea4fea: pand mm3, mm5 */
  guest_unsupported(0xea4fea); /* pand mm3, mm5 */
/* ea4fed: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea4fed); /* pfrcpit2 mm0, mm4 */
/* ea4ff1: pfmul mm1, mm0 */
  guest_unsupported(0xea4ff1); /* pfmul mm1, mm0 */
/* ea4ff5: pfmul mm3, mm0 */
  guest_unsupported(0xea4ff5); /* pfmul mm3, mm0 */
/* ea4ff9: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea4ffc: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea5000: femms  */
  guest_unsupported(0xea5000); /* femms  */
/* ea5002: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea5005(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5005: /* ea5005: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5008: femms  */
  guest_unsupported(0xea5008); /* femms  */
/* ea500a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea500e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ea5012: movq mm1, qword ptr [edx] */
  MMX[1] = R64((uint32_t)(edx));
/* ea5015: movq mm2, qword ptr [edx + 8] */
  MMX[2] = R64((uint32_t)(edx + 0x8u));
/* ea5019: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea501c: punpckhdq mm3, mm3 */
  guest_unsupported(0xea501c); /* punpckhdq mm3, mm3 */
/* ea501f: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* ea5022: pfcmpge mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea5022); /* pfcmpge mm3, qword ptr [0xeb3c28] */
/* ea502a: movd ecx, mm3 */
  guest_unsupported(0xea502a); /* movd ecx, mm3 */
/* ea502d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea502f: jne 0xea5096 */
  if (!zf) goto L_ea5096;
L_ea5031: /* ea5031: call 0xeab780 */
  esp -= 4; W32(esp, 0xea5036u); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea5036: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea5036); /* movd dword ptr [esp], mm0 */
/* ea503a: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea503e: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea5042: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea5047u); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea5047: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea504a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ea504e: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea5052: pand mm3, qword ptr [0xeb3be0] */
  guest_unsupported(0xea5052); /* pand mm3, qword ptr [0xeb3be0] */
/* ea5059: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea505d: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ea5061: pfcmpge mm3, qword ptr [0xeb3be8] */
  guest_unsupported(0xea5061); /* pfcmpge mm3, qword ptr [0xeb3be8] */
/* ea5069: movd ecx, mm3 */
  guest_unsupported(0xea5069); /* movd ecx, mm3 */
/* ea506c: movq mm1, qword ptr [edx] */
  MMX[1] = R64((uint32_t)(edx));
/* ea506f: movq mm2, qword ptr [edx + 8] */
  MMX[2] = R64((uint32_t)(edx + 0x8u));
/* ea5073: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5075: je 0xea5096 */
  if (zf) goto L_ea5096;
L_ea5077: /* ea5077: movd mm3, dword ptr [esp] */
  guest_unsupported(0xea5077); /* movd mm3, dword ptr [esp] */
/* ea507b: pfrcp mm4, mm0 */
  guest_unsupported(0xea507b); /* pfrcp mm4, mm0 */
/* ea507f: punpckldq mm3, mm3 */
  guest_unsupported(0xea507f); /* punpckldq mm3, mm3 */
/* ea5082: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea5082); /* pfrcpit1 mm0, mm4 */
/* ea5086: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea5086); /* pfrcpit2 mm0, mm4 */
/* ea508a: pfmul mm3, mm0 */
  guest_unsupported(0xea508a); /* pfmul mm3, mm0 */
/* ea508e: pfmul mm1, mm3 */
  guest_unsupported(0xea508e); /* pfmul mm1, mm3 */
/* ea5092: pfmul mm2, mm3 */
  guest_unsupported(0xea5092); /* pfmul mm2, mm3 */
L_ea5096: /* ea5096: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea5096); /* pand mm2, qword ptr [0xeb3bf0] */
/* ea509d: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea50a0: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea50a4: femms  */
  guest_unsupported(0xea50a4); /* femms  */
/* ea50a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea50a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea50ac(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea50ac: /* ea50ac: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea50b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea50b3: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea50b6: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xea50b6); /* movd mm1, dword ptr [edx + 8] */
/* ea50ba: pfmul mm0, mm0 */
  guest_unsupported(0xea50ba); /* pfmul mm0, mm0 */
/* ea50be: pfmul mm1, mm1 */
  guest_unsupported(0xea50be); /* pfmul mm1, mm1 */
/* ea50c2: pfadd mm0, mm1 */
  guest_unsupported(0xea50c2); /* pfadd mm0, mm1 */
/* ea50c6: pfacc mm0, mm0 */
  guest_unsupported(0xea50c6); /* pfacc mm0, mm0 */
/* ea50ca: pfrsqrt mm1, mm0 */
  guest_unsupported(0xea50ca); /* pfrsqrt mm1, mm0 */
/* ea50ce: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea50d1: pfmul mm1, mm1 */
  guest_unsupported(0xea50d1); /* pfmul mm1, mm1 */
/* ea50d5: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea50d9: pfrsqit1 mm1, mm0 */
  guest_unsupported(0xea50d9); /* pfrsqit1 mm1, mm0 */
/* ea50dd: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea50e1: pfrcpit2 mm1, mm2 */
  guest_unsupported(0xea50e1); /* pfrcpit2 mm1, mm2 */
/* ea50e5: movd dword ptr [esp], mm1 */
  guest_unsupported(0xea50e5); /* movd dword ptr [esp], mm1 */
/* ea50e9: pfmul mm0, mm1 */
  guest_unsupported(0xea50e9); /* pfmul mm0, mm1 */
/* ea50ed: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea50f2u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea50f2: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea50f5: pand mm0, qword ptr [0xeb3bd8] */
  guest_unsupported(0xea50f5); /* pand mm0, qword ptr [0xeb3bd8] */
/* ea50fc: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ea5100: pfcmpge mm0, qword ptr [0xeb3be8] */
  guest_unsupported(0xea5100); /* pfcmpge mm0, qword ptr [0xeb3be8] */
/* ea5108: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea510c: punpckhdq mm0, mm0 */
  guest_unsupported(0xea510c); /* punpckhdq mm0, mm0 */
/* ea510f: movd ecx, mm0 */
  guest_unsupported(0xea510f); /* movd ecx, mm0 */
/* ea5112: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea5115: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea5118: punpckhdq mm1, mm1 */
  guest_unsupported(0xea5118); /* punpckhdq mm1, mm1 */
/* ea511b: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5121: pfmul mm1, qword ptr [esp] */
  guest_unsupported(0xea5121); /* pfmul mm1, qword ptr [esp] */
/* ea5126: movd mm3, dword ptr [edx + 8] */
  guest_unsupported(0xea5126); /* movd mm3, dword ptr [edx + 8] */
/* ea512a: je 0xea5137 */
  if (zf) goto L_ea5137;
L_ea512c: /* ea512c: punpckldq mm1, mm1 */
  guest_unsupported(0xea512c); /* punpckldq mm1, mm1 */
/* ea512f: pfmul mm3, mm1 */
  guest_unsupported(0xea512f); /* pfmul mm3, mm1 */
/* ea5133: pfmul mm2, mm1 */
  guest_unsupported(0xea5133); /* pfmul mm2, mm1 */
L_ea5137: /* ea5137: punpckldq mm3, mm0 */
  guest_unsupported(0xea5137); /* punpckldq mm3, mm0 */
/* ea513a: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea513d: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea5141: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea5145: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ea5149: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea514c: femms  */
  guest_unsupported(0xea514c); /* femms  */
/* ea514e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea5151(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5151: /* ea5151: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea5152: mov ebp, esp */
  ebp = esp;
/* ea5154: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea515a: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea515d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea5160: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* ea5163: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea5166: movq mm1, qword ptr [edx + 8] */
  MMX[1] = R64((uint32_t)(edx + 0x8u));
/* ea516a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea516d: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea5170: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea5174: movq qword ptr [esp + 8], mm1 */
  W64((uint32_t)(esp + 0x8u), MMX[1]);
/* ea5179: movq mm4, qword ptr [ecx] */
  MMX[4] = R64((uint32_t)(ecx));
/* ea517c: movq mm5, qword ptr [ecx + 8] */
  MMX[5] = R64((uint32_t)(ecx + 0x8u));
/* ea5180: movq qword ptr [esp + 0x10], mm4 */
  W64((uint32_t)(esp + 0x10u), MMX[4]);
/* ea5185: pfadd mm0, mm4 */
  guest_unsupported(0xea5185); /* pfadd mm0, mm4 */
/* ea5189: movq qword ptr [esp + 0x18], mm5 */
  W64((uint32_t)(esp + 0x18u), MMX[5]);
/* ea518e: pfadd mm1, mm5 */
  guest_unsupported(0xea518e); /* pfadd mm1, mm5 */
/* ea5192: pfsub mm2, mm4 */
  guest_unsupported(0xea5192); /* pfsub mm2, mm4 */
/* ea5196: pfmul mm0, mm0 */
  guest_unsupported(0xea5196); /* pfmul mm0, mm0 */
/* ea519a: pfsub mm3, mm5 */
  guest_unsupported(0xea519a); /* pfsub mm3, mm5 */
/* ea519e: pfmul mm1, mm1 */
  guest_unsupported(0xea519e); /* pfmul mm1, mm1 */
/* ea51a2: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* ea51a5: pfmul mm2, mm2 */
  guest_unsupported(0xea51a5); /* pfmul mm2, mm2 */
/* ea51a9: pfmul mm3, mm3 */
  guest_unsupported(0xea51a9); /* pfmul mm3, mm3 */
/* ea51ad: pfadd mm0, mm1 */
  guest_unsupported(0xea51ad); /* pfadd mm0, mm1 */
/* ea51b1: pfadd mm2, mm3 */
  guest_unsupported(0xea51b1); /* pfadd mm2, mm3 */
/* ea51b5: movq mm6, qword ptr [edx] */
  MMX[6] = R64((uint32_t)(edx));
/* ea51b8: movq mm7, qword ptr [edx + 8] */
  MMX[7] = R64((uint32_t)(edx + 0x8u));
/* ea51bc: movq qword ptr [esp + 0x20], mm6 */
  W64((uint32_t)(esp + 0x20u), MMX[6]);
/* ea51c1: movq qword ptr [esp + 0x28], mm7 */
  W64((uint32_t)(esp + 0x28u), MMX[7]);
/* ea51c6: movq mm1, mm4 */
  MMX[1] = MMX[4];
/* ea51c9: movq mm3, mm5 */
  MMX[3] = MMX[5];
/* ea51cc: pfadd mm4, mm6 */
  guest_unsupported(0xea51cc); /* pfadd mm4, mm6 */
/* ea51d0: pfadd mm5, mm7 */
  guest_unsupported(0xea51d0); /* pfadd mm5, mm7 */
/* ea51d4: pfsub mm1, mm6 */
  guest_unsupported(0xea51d4); /* pfsub mm1, mm6 */
/* ea51d8: pfsub mm3, mm7 */
  guest_unsupported(0xea51d8); /* pfsub mm3, mm7 */
/* ea51dc: pfmul mm4, mm4 */
  guest_unsupported(0xea51dc); /* pfmul mm4, mm4 */
/* ea51e0: pfmul mm5, mm5 */
  guest_unsupported(0xea51e0); /* pfmul mm5, mm5 */
/* ea51e4: pfmul mm1, mm1 */
  guest_unsupported(0xea51e4); /* pfmul mm1, mm1 */
/* ea51e8: pfmul mm3, mm3 */
  guest_unsupported(0xea51e8); /* pfmul mm3, mm3 */
/* ea51ec: pfadd mm4, mm5 */
  guest_unsupported(0xea51ec); /* pfadd mm4, mm5 */
/* ea51f0: pfadd mm1, mm3 */
  guest_unsupported(0xea51f0); /* pfadd mm1, mm3 */
/* ea51f4: pfacc mm0, mm4 */
  guest_unsupported(0xea51f4); /* pfacc mm0, mm4 */
/* ea51f8: pfacc mm2, mm1 */
  guest_unsupported(0xea51f8); /* pfacc mm2, mm1 */
/* ea51fc: pfcmpgt mm2, mm0 */
  guest_unsupported(0xea51fc); /* pfcmpgt mm2, mm0 */
/* ea5200: packsswb mm2, mm2 */
  guest_unsupported(0xea5200); /* packsswb mm2, mm2 */
/* ea5203: movd eax, mm2 */
  guest_unsupported(0xea5203); /* movd eax, mm2 */
/* ea5206: test eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea520b: movq mm0, qword ptr [0xeb3bc8] */
  MMX[0] = R64((uint32_t)(0xeb3bc8u));
/* ea5212: je 0xea522d */
  if (zf) goto L_ea522d;
L_ea5214: /* ea5214: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea5217: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea521a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea521d: pxor mm1, qword ptr [edx] */
  guest_unsupported(0xea521d); /* pxor mm1, qword ptr [edx] */
/* ea5220: pxor mm2, qword ptr [edx + 8] */
  guest_unsupported(0xea5220); /* pxor mm2, qword ptr [edx + 8] */
/* ea5224: movq qword ptr [esp], mm1 */
  W64((uint32_t)(esp), MMX[1]);
/* ea5228: movq qword ptr [esp + 8], mm2 */
  W64((uint32_t)(esp + 0x8u), MMX[2]);
L_ea522d: /* ea522d: test eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5232: je 0xea524e */
  if (zf) goto L_ea524e;
L_ea5234: /* ea5234: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ea5237: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea523a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea523d: pxor mm1, qword ptr [ecx] */
  guest_unsupported(0xea523d); /* pxor mm1, qword ptr [ecx] */
/* ea5240: pxor mm2, qword ptr [ecx + 8] */
  guest_unsupported(0xea5240); /* pxor mm2, qword ptr [ecx + 8] */
/* ea5244: movq qword ptr [esp + 0x20], mm1 */
  W64((uint32_t)(esp + 0x20u), MMX[1]);
/* ea5249: movq qword ptr [esp + 0x28], mm2 */
  W64((uint32_t)(esp + 0x28u), MMX[2]);
L_ea524e: /* ea524e: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* ea5251: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea5256: movq mm7, qword ptr [esp + 0x28] */
  MMX[7] = R64((uint32_t)(esp + 0x28u));
/* ea525b: movq mm1, qword ptr [ecx] */
  MMX[1] = R64((uint32_t)(ecx));
/* ea525e: movq mm4, qword ptr [ecx + 8] */
  MMX[4] = R64((uint32_t)(ecx + 0x8u));
/* ea5262: movq mm3, mm6 */
  MMX[3] = MMX[6];
/* ea5265: movq mm5, mm7 */
  MMX[5] = MMX[7];
/* ea5268: pfadd mm6, mm1 */
  guest_unsupported(0xea5268); /* pfadd mm6, mm1 */
/* ea526c: movq qword ptr [esp + 0x30], mm1 */
  W64((uint32_t)(esp + 0x30u), MMX[1]);
/* ea5271: pfadd mm7, mm4 */
  guest_unsupported(0xea5271); /* pfadd mm7, mm4 */
/* ea5275: movq qword ptr [esp + 0x38], mm4 */
  W64((uint32_t)(esp + 0x38u), MMX[4]);
/* ea527a: pfsub mm3, mm1 */
  guest_unsupported(0xea527a); /* pfsub mm3, mm1 */
/* ea527e: pfsub mm5, mm4 */
  guest_unsupported(0xea527e); /* pfsub mm5, mm4 */
/* ea5282: pfmul mm6, mm6 */
  guest_unsupported(0xea5282); /* pfmul mm6, mm6 */
/* ea5286: pfmul mm7, mm7 */
  guest_unsupported(0xea5286); /* pfmul mm7, mm7 */
/* ea528a: pfmul mm3, mm3 */
  guest_unsupported(0xea528a); /* pfmul mm3, mm3 */
/* ea528e: pfmul mm5, mm5 */
  guest_unsupported(0xea528e); /* pfmul mm5, mm5 */
/* ea5292: pfadd mm6, mm7 */
  guest_unsupported(0xea5292); /* pfadd mm6, mm7 */
/* ea5296: pfadd mm3, mm5 */
  guest_unsupported(0xea5296); /* pfadd mm3, mm5 */
/* ea529a: pfacc mm6, mm6 */
  guest_unsupported(0xea529a); /* pfacc mm6, mm6 */
/* ea529e: pfacc mm3, mm3 */
  guest_unsupported(0xea529e); /* pfacc mm3, mm3 */
/* ea52a2: pfcmpgt mm3, mm6 */
  guest_unsupported(0xea52a2); /* pfcmpgt mm3, mm6 */
/* ea52a6: movd eax, mm3 */
  guest_unsupported(0xea52a6); /* movd eax, mm3 */
/* ea52a9: test eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea52ae: je 0xea52c7 */
  if (zf) goto L_ea52c7;
L_ea52b0: /* ea52b0: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* ea52b3: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea52b6: pxor mm0, qword ptr [edx] */
  guest_unsupported(0xea52b6); /* pxor mm0, qword ptr [edx] */
/* ea52b9: pxor mm2, qword ptr [edx + 8] */
  guest_unsupported(0xea52b9); /* pxor mm2, qword ptr [edx + 8] */
/* ea52bd: movq qword ptr [esp + 0x30], mm0 */
  W64((uint32_t)(esp + 0x30u), MMX[0]);
/* ea52c2: movq qword ptr [esp + 0x38], mm2 */
  W64((uint32_t)(esp + 0x38u), MMX[2]);
L_ea52c7: /* ea52c7: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea52cc: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea52cf: movq mm2, qword ptr [esp + 0x18] */
  MMX[2] = R64((uint32_t)(esp + 0x18u));
/* ea52d4: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea52d7: pfmul mm0, mm0 */
  guest_unsupported(0xea52d7); /* pfmul mm0, mm0 */
/* ea52db: pfmul mm2, mm2 */
  guest_unsupported(0xea52db); /* pfmul mm2, mm2 */
/* ea52df: pfadd mm0, mm2 */
  guest_unsupported(0xea52df); /* pfadd mm0, mm2 */
/* ea52e3: pfacc mm0, mm0 */
  guest_unsupported(0xea52e3); /* pfacc mm0, mm0 */
/* ea52e7: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea52ea: pfrcp mm4, mm0 */
  guest_unsupported(0xea52ea); /* pfrcp mm4, mm0 */
/* ea52ee: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xea52ee); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* ea52f6: pxor mm1, qword ptr [0xeb3c70] */
  guest_unsupported(0xea52f6); /* pxor mm1, qword ptr [0xeb3c70] */
/* ea52fd: pxor mm3, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea52fd); /* pxor mm3, qword ptr [0xeb3bb8] */
/* ea5304: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea5304); /* pfrcpit1 mm0, mm4 */
/* ea5308: pand mm1, mm5 */
  guest_unsupported(0xea5308); /* pand mm1, mm5 */
/* ea530b: pand mm3, mm5 */
  guest_unsupported(0xea530b); /* pand mm3, mm5 */
/* ea530e: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea530e); /* pfrcpit2 mm0, mm4 */
/* ea5312: pfmul mm1, mm0 */
  guest_unsupported(0xea5312); /* pfmul mm1, mm0 */
/* ea5316: pfmul mm3, mm0 */
  guest_unsupported(0xea5316); /* pfmul mm3, mm0 */
/* ea531a: movq qword ptr [esp + 0x40], mm1 */
  W64((uint32_t)(esp + 0x40u), MMX[1]);
/* ea531f: movq qword ptr [esp + 0x48], mm3 */
  W64((uint32_t)(esp + 0x48u), MMX[3]);
/* ea5324: movq mm2, qword ptr [esp] */
  MMX[2] = R64((uint32_t)(esp));
/* ea5328: movq mm3, qword ptr [esp + 8] */
  MMX[3] = R64((uint32_t)(esp + 0x8u));
/* ea532d: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5330: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea5333: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea5338: punpckhdq mm4, mm2 */
  guest_unsupported(0xea5338); /* punpckhdq mm4, mm2 */
/* ea533b: punpckhdq mm5, mm3 */
  guest_unsupported(0xea533b); /* punpckhdq mm5, mm3 */
/* ea533e: movq mm1, qword ptr [esp + 0x48] */
  MMX[1] = R64((uint32_t)(esp + 0x48u));
/* ea5343: punpckldq mm4, mm2 */
  guest_unsupported(0xea5343); /* punpckldq mm4, mm2 */
/* ea5346: punpckldq mm5, mm3 */
  guest_unsupported(0xea5346); /* punpckldq mm5, mm3 */
/* ea5349: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea534c: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea534f: pfmul mm2, mm1 */
  guest_unsupported(0xea534f); /* pfmul mm2, mm1 */
/* ea5353: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5353); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea535a: pfmul mm3, mm0 */
  guest_unsupported(0xea535a); /* pfmul mm3, mm0 */
/* ea535e: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea535e); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea5365: pfmul mm5, mm0 */
  guest_unsupported(0xea5365); /* pfmul mm5, mm0 */
/* ea5369: pfmul mm4, mm1 */
  guest_unsupported(0xea5369); /* pfmul mm4, mm1 */
/* ea536d: pfadd mm2, mm3 */
  guest_unsupported(0xea536d); /* pfadd mm2, mm3 */
/* ea5371: movq mm3, qword ptr [esp] */
  MMX[3] = R64((uint32_t)(esp));
/* ea5375: pfsub mm4, mm5 */
  guest_unsupported(0xea5375); /* pfsub mm4, mm5 */
/* ea5379: movq mm5, qword ptr [esp + 8] */
  MMX[5] = R64((uint32_t)(esp + 0x8u));
/* ea537e: pfmul mm7, mm1 */
  guest_unsupported(0xea537e); /* pfmul mm7, mm1 */
/* ea5382: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5382); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea5389: pfacc mm4, mm2 */
  guest_unsupported(0xea5389); /* pfacc mm4, mm2 */
/* ea538d: pfmul mm6, mm0 */
  guest_unsupported(0xea538d); /* pfmul mm6, mm0 */
/* ea5391: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5391); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5398: pfmul mm3, mm0 */
  guest_unsupported(0xea5398); /* pfmul mm3, mm0 */
/* ea539c: movq qword ptr [esp + 0x80], mm4 */
  W64((uint32_t)(esp + 0x80u), MMX[4]);
/* ea53a4: pfmul mm5, mm1 */
  guest_unsupported(0xea53a4); /* pfmul mm5, mm1 */
/* ea53a8: pfadd mm6, mm7 */
  guest_unsupported(0xea53a8); /* pfadd mm6, mm7 */
/* ea53ac: pfsub mm5, mm3 */
  guest_unsupported(0xea53ac); /* pfsub mm5, mm3 */
/* ea53b0: pfacc mm6, mm5 */
  guest_unsupported(0xea53b0); /* pfacc mm6, mm5 */
/* ea53b4: movq qword ptr [esp + 0x88], mm6 */
  W64((uint32_t)(esp + 0x88u), MMX[6]);
/* ea53bc: movq mm2, qword ptr [esp + 0x20] */
  MMX[2] = R64((uint32_t)(esp + 0x20u));
/* ea53c1: movq mm3, qword ptr [esp + 0x28] */
  MMX[3] = R64((uint32_t)(esp + 0x28u));
/* ea53c6: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea53c9: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea53cc: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea53d1: punpckhdq mm4, mm2 */
  guest_unsupported(0xea53d1); /* punpckhdq mm4, mm2 */
/* ea53d4: punpckhdq mm5, mm3 */
  guest_unsupported(0xea53d4); /* punpckhdq mm5, mm3 */
/* ea53d7: movq mm1, qword ptr [esp + 0x48] */
  MMX[1] = R64((uint32_t)(esp + 0x48u));
/* ea53dc: punpckldq mm4, mm2 */
  guest_unsupported(0xea53dc); /* punpckldq mm4, mm2 */
/* ea53df: punpckldq mm5, mm3 */
  guest_unsupported(0xea53df); /* punpckldq mm5, mm3 */
/* ea53e2: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea53e5: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea53e8: pfmul mm2, mm1 */
  guest_unsupported(0xea53e8); /* pfmul mm2, mm1 */
/* ea53ec: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea53ec); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea53f3: pfmul mm3, mm0 */
  guest_unsupported(0xea53f3); /* pfmul mm3, mm0 */
/* ea53f7: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea53f7); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea53fe: pfmul mm5, mm0 */
  guest_unsupported(0xea53fe); /* pfmul mm5, mm0 */
/* ea5402: pfmul mm4, mm1 */
  guest_unsupported(0xea5402); /* pfmul mm4, mm1 */
/* ea5406: pfadd mm2, mm3 */
  guest_unsupported(0xea5406); /* pfadd mm2, mm3 */
/* ea540a: movq mm3, qword ptr [esp + 0x20] */
  MMX[3] = R64((uint32_t)(esp + 0x20u));
/* ea540f: pfsub mm4, mm5 */
  guest_unsupported(0xea540f); /* pfsub mm4, mm5 */
/* ea5413: movq mm5, qword ptr [esp + 0x28] */
  MMX[5] = R64((uint32_t)(esp + 0x28u));
/* ea5418: pfmul mm7, mm1 */
  guest_unsupported(0xea5418); /* pfmul mm7, mm1 */
/* ea541c: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea541c); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea5423: pfacc mm4, mm2 */
  guest_unsupported(0xea5423); /* pfacc mm4, mm2 */
/* ea5427: pfmul mm6, mm0 */
  guest_unsupported(0xea5427); /* pfmul mm6, mm0 */
/* ea542b: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea542b); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5432: pfmul mm3, mm0 */
  guest_unsupported(0xea5432); /* pfmul mm3, mm0 */
/* ea5436: movq qword ptr [esp + 0x90], mm4 */
  W64((uint32_t)(esp + 0x90u), MMX[4]);
/* ea543e: pfmul mm5, mm1 */
  guest_unsupported(0xea543e); /* pfmul mm5, mm1 */
/* ea5442: pfadd mm6, mm7 */
  guest_unsupported(0xea5442); /* pfadd mm6, mm7 */
/* ea5446: pfsub mm5, mm3 */
  guest_unsupported(0xea5446); /* pfsub mm5, mm3 */
/* ea544a: pfacc mm6, mm5 */
  guest_unsupported(0xea544a); /* pfacc mm6, mm5 */
/* ea544e: movq qword ptr [esp + 0x98], mm6 */
  W64((uint32_t)(esp + 0x98u), MMX[6]);
/* ea5456: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5459: movq mm1, qword ptr [esp + 0x8c] */
  MMX[1] = R64((uint32_t)(esp + 0x8cu));
/* ea5461: movq mm2, qword ptr [esp + 0x94] */
  MMX[2] = R64((uint32_t)(esp + 0x94u));
/* ea5469: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea546c: punpckhdq mm3, mm3 */
  guest_unsupported(0xea546c); /* punpckhdq mm3, mm3 */
/* ea546f: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* ea5472: pfcmpge mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea5472); /* pfcmpge mm3, qword ptr [0xeb3c28] */
/* ea547a: movd ecx, mm3 */
  guest_unsupported(0xea547a); /* movd ecx, mm3 */
/* ea547d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea547f: jne 0xea54ef */
  if (!zf) goto L_ea54ef;
L_ea5481: /* ea5481: call 0xeab780 */
  esp -= 4; W32(esp, 0xea5486u); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea5486: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea5486); /* movd dword ptr [esp], mm0 */
/* ea548a: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea548e: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea5492: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea5497u); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea5497: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea549a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea549e: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea54a2: pand mm3, qword ptr [0xeb3be0] */
  guest_unsupported(0xea54a2); /* pand mm3, qword ptr [0xeb3be0] */
/* ea54a9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea54ad: mov ebx, dword ptr [esp + 4] */
  ebx = R32((uint32_t)(esp + 0x4u));
/* ea54b1: pfcmpge mm3, qword ptr [0xeb3be8] */
  guest_unsupported(0xea54b1); /* pfcmpge mm3, qword ptr [0xeb3be8] */
/* ea54b9: movd ecx, mm3 */
  guest_unsupported(0xea54b9); /* movd ecx, mm3 */
/* ea54bc: movq mm1, qword ptr [esp + 0x8c] */
  MMX[1] = R64((uint32_t)(esp + 0x8cu));
/* ea54c4: movq mm2, qword ptr [esp + 0x94] */
  MMX[2] = R64((uint32_t)(esp + 0x94u));
/* ea54cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea54ce: je 0xea54ef */
  if (zf) goto L_ea54ef;
L_ea54d0: /* ea54d0: movd mm3, dword ptr [esp] */
  guest_unsupported(0xea54d0); /* movd mm3, dword ptr [esp] */
/* ea54d4: pfrcp mm4, mm0 */
  guest_unsupported(0xea54d4); /* pfrcp mm4, mm0 */
/* ea54d8: punpckldq mm3, mm3 */
  guest_unsupported(0xea54d8); /* punpckldq mm3, mm3 */
/* ea54db: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea54db); /* pfrcpit1 mm0, mm4 */
/* ea54df: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea54df); /* pfrcpit2 mm0, mm4 */
/* ea54e3: pfmul mm3, mm0 */
  guest_unsupported(0xea54e3); /* pfmul mm3, mm0 */
/* ea54e7: pfmul mm1, mm3 */
  guest_unsupported(0xea54e7); /* pfmul mm1, mm3 */
/* ea54eb: pfmul mm2, mm3 */
  guest_unsupported(0xea54eb); /* pfmul mm2, mm3 */
L_ea54ef: /* ea54ef: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea54ef); /* pand mm2, qword ptr [0xeb3bf0] */
/* ea54f6: movq qword ptr [esp + 0x5c], mm1 */
  W64((uint32_t)(esp + 0x5cu), MMX[1]);
/* ea54fb: movq qword ptr [esp + 0x64], mm2 */
  W64((uint32_t)(esp + 0x64u), MMX[2]);
/* ea5500: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5503: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5506: movq mm1, qword ptr [esp + 0x9c] */
  MMX[1] = R64((uint32_t)(esp + 0x9cu));
/* ea550e: movq mm2, qword ptr [esp + 0xa4] */
  MMX[2] = R64((uint32_t)(esp + 0xa4u));
/* ea5516: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea5519: punpckhdq mm3, mm3 */
  guest_unsupported(0xea5519); /* punpckhdq mm3, mm3 */
/* ea551c: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* ea551f: pfcmpge mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea551f); /* pfcmpge mm3, qword ptr [0xeb3c28] */
/* ea5527: movd ecx, mm3 */
  guest_unsupported(0xea5527); /* movd ecx, mm3 */
/* ea552a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea552c: jne 0xea559c */
  if (!zf) goto L_ea559c;
L_ea552e: /* ea552e: call 0xeab780 */
  esp -= 4; W32(esp, 0xea5533u); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea5533: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea5533); /* movd dword ptr [esp], mm0 */
/* ea5537: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea553b: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea553f: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea5544u); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea5544: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea5547: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea554b: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea554f: pand mm3, qword ptr [0xeb3be0] */
  guest_unsupported(0xea554f); /* pand mm3, qword ptr [0xeb3be0] */
/* ea5556: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea555a: mov ebx, dword ptr [esp + 4] */
  ebx = R32((uint32_t)(esp + 0x4u));
/* ea555e: pfcmpge mm3, qword ptr [0xeb3be8] */
  guest_unsupported(0xea555e); /* pfcmpge mm3, qword ptr [0xeb3be8] */
/* ea5566: movd ecx, mm3 */
  guest_unsupported(0xea5566); /* movd ecx, mm3 */
/* ea5569: movq mm1, qword ptr [esp + 0x9c] */
  MMX[1] = R64((uint32_t)(esp + 0x9cu));
/* ea5571: movq mm2, qword ptr [esp + 0xa4] */
  MMX[2] = R64((uint32_t)(esp + 0xa4u));
/* ea5579: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea557b: je 0xea559c */
  if (zf) goto L_ea559c;
L_ea557d: /* ea557d: movd mm3, dword ptr [esp] */
  guest_unsupported(0xea557d); /* movd mm3, dword ptr [esp] */
/* ea5581: pfrcp mm4, mm0 */
  guest_unsupported(0xea5581); /* pfrcp mm4, mm0 */
/* ea5585: punpckldq mm3, mm3 */
  guest_unsupported(0xea5585); /* punpckldq mm3, mm3 */
/* ea5588: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea5588); /* pfrcpit1 mm0, mm4 */
/* ea558c: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea558c); /* pfrcpit2 mm0, mm4 */
/* ea5590: pfmul mm3, mm0 */
  guest_unsupported(0xea5590); /* pfmul mm3, mm0 */
/* ea5594: pfmul mm1, mm3 */
  guest_unsupported(0xea5594); /* pfmul mm1, mm3 */
/* ea5598: pfmul mm2, mm3 */
  guest_unsupported(0xea5598); /* pfmul mm2, mm3 */
L_ea559c: /* ea559c: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea559c); /* pand mm2, qword ptr [0xeb3bf0] */
/* ea55a3: movq qword ptr [esp + 0x6c], mm1 */
  W64((uint32_t)(esp + 0x6cu), MMX[1]);
/* ea55a8: movq qword ptr [esp + 0x74], mm2 */
  W64((uint32_t)(esp + 0x74u), MMX[2]);
/* ea55ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea55b0: movq mm0, qword ptr [esp + 0x50] */
  MMX[0] = R64((uint32_t)(esp + 0x50u));
/* ea55b5: movq mm1, qword ptr [esp + 0x58] */
  MMX[1] = R64((uint32_t)(esp + 0x58u));
/* ea55ba: pfadd mm0, qword ptr [esp + 0x60] */
  guest_unsupported(0xea55ba); /* pfadd mm0, qword ptr [esp + 0x60] */
/* ea55c0: pfadd mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea55c0); /* pfadd mm1, qword ptr [esp + 0x68] */
/* ea55c6: pfmul mm0, qword ptr [0xeb4320] */
  guest_unsupported(0xea55c6); /* pfmul mm0, qword ptr [0xeb4320] */
/* ea55ce: pfmul mm1, qword ptr [0xeb4320] */
  guest_unsupported(0xea55ce); /* pfmul mm1, qword ptr [0xeb4320] */
/* ea55d6: movq qword ptr [esp + 0x80], mm0 */
  W64((uint32_t)(esp + 0x80u), MMX[0]);
/* ea55de: movq qword ptr [esp + 0x88], mm1 */
  W64((uint32_t)(esp + 0x88u), MMX[1]);
/* ea55e6: movq mm7, qword ptr [0xeb3be8] */
  MMX[7] = R64((uint32_t)(0xeb3be8u));
/* ea55ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea55f0: movq mm0, qword ptr [esp + 0x8c] */
  MMX[0] = R64((uint32_t)(esp + 0x8cu));
/* ea55f8: movd mm1, dword ptr [esp + 0x94] */
  guest_unsupported(0xea55f8); /* movd mm1, dword ptr [esp + 0x94] */
/* ea5600: pfmul mm0, mm0 */
  guest_unsupported(0xea5600); /* pfmul mm0, mm0 */
/* ea5604: pfmul mm1, mm1 */
  guest_unsupported(0xea5604); /* pfmul mm1, mm1 */
/* ea5608: pfadd mm0, mm1 */
  guest_unsupported(0xea5608); /* pfadd mm0, mm1 */
/* ea560c: pfacc mm0, mm0 */
  guest_unsupported(0xea560c); /* pfacc mm0, mm0 */
/* ea5610: pfrsqrt mm1, mm0 */
  guest_unsupported(0xea5610); /* pfrsqrt mm1, mm0 */
/* ea5614: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea5617: pfmul mm1, mm1 */
  guest_unsupported(0xea5617); /* pfmul mm1, mm1 */
/* ea561b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea561f: pfrsqit1 mm1, mm0 */
  guest_unsupported(0xea561f); /* pfrsqit1 mm1, mm0 */
/* ea5623: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea5627: pfrcpit2 mm1, mm2 */
  guest_unsupported(0xea5627); /* pfrcpit2 mm1, mm2 */
/* ea562b: movd dword ptr [esp], mm1 */
  guest_unsupported(0xea562b); /* movd dword ptr [esp], mm1 */
/* ea562f: pfmul mm0, mm1 */
  guest_unsupported(0xea562f); /* pfmul mm0, mm1 */
/* ea5633: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea5638u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea5638: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea563b: pand mm0, qword ptr [0xeb3bd8] */
  guest_unsupported(0xea563b); /* pand mm0, qword ptr [0xeb3bd8] */
/* ea5642: pfcmpge mm0, qword ptr [0xeb3be8] */
  guest_unsupported(0xea5642); /* pfcmpge mm0, qword ptr [0xeb3be8] */
/* ea564a: punpckhdq mm0, mm0 */
  guest_unsupported(0xea564a); /* punpckhdq mm0, mm0 */
/* ea564d: movd ecx, mm0 */
  guest_unsupported(0xea564d); /* movd ecx, mm0 */
/* ea5650: movq mm2, qword ptr [esp + 0x8c] */
  MMX[2] = R64((uint32_t)(esp + 0x8cu));
/* ea5658: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea565b: punpckhdq mm1, mm1 */
  guest_unsupported(0xea565b); /* punpckhdq mm1, mm1 */
/* ea565e: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5664: pfmul mm1, qword ptr [esp] */
  guest_unsupported(0xea5664); /* pfmul mm1, qword ptr [esp] */
/* ea5669: movd mm3, dword ptr [esp + 0x94] */
  guest_unsupported(0xea5669); /* movd mm3, dword ptr [esp + 0x94] */
/* ea5671: je 0xea567e */
  if (zf) goto L_ea567e;
L_ea5673: /* ea5673: punpckldq mm1, mm1 */
  guest_unsupported(0xea5673); /* punpckldq mm1, mm1 */
/* ea5676: pfmul mm3, mm1 */
  guest_unsupported(0xea5676); /* pfmul mm3, mm1 */
/* ea567a: pfmul mm2, mm1 */
  guest_unsupported(0xea567a); /* pfmul mm2, mm1 */
L_ea567e: /* ea567e: punpckldq mm3, mm0 */
  guest_unsupported(0xea567e); /* punpckldq mm3, mm0 */
/* ea5681: movq qword ptr [esp + 0x7c], mm2 */
  W64((uint32_t)(esp + 0x7cu), MMX[2]);
/* ea5686: movq qword ptr [esp + 0x84], mm3 */
  W64((uint32_t)(esp + 0x84u), MMX[3]);
/* ea568e: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea5692: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ea5696: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5699: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea569c: movq mm2, qword ptr [esp + 0x70] */
  MMX[2] = R64((uint32_t)(esp + 0x70u));
/* ea56a1: movq mm3, qword ptr [esp + 0x78] */
  MMX[3] = R64((uint32_t)(esp + 0x78u));
/* ea56a6: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea56a9: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea56ac: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea56b1: punpckhdq mm4, mm2 */
  guest_unsupported(0xea56b1); /* punpckhdq mm4, mm2 */
/* ea56b4: punpckhdq mm5, mm3 */
  guest_unsupported(0xea56b4); /* punpckhdq mm5, mm3 */
/* ea56b7: movq mm1, qword ptr [esp + 0x18] */
  MMX[1] = R64((uint32_t)(esp + 0x18u));
/* ea56bc: punpckldq mm4, mm2 */
  guest_unsupported(0xea56bc); /* punpckldq mm4, mm2 */
/* ea56bf: punpckldq mm5, mm3 */
  guest_unsupported(0xea56bf); /* punpckldq mm5, mm3 */
/* ea56c2: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea56c5: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea56c8: pfmul mm2, mm1 */
  guest_unsupported(0xea56c8); /* pfmul mm2, mm1 */
/* ea56cc: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea56cc); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea56d3: pfmul mm3, mm0 */
  guest_unsupported(0xea56d3); /* pfmul mm3, mm0 */
/* ea56d7: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea56d7); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea56de: pfmul mm5, mm0 */
  guest_unsupported(0xea56de); /* pfmul mm5, mm0 */
/* ea56e2: pfmul mm4, mm1 */
  guest_unsupported(0xea56e2); /* pfmul mm4, mm1 */
/* ea56e6: pfadd mm2, mm3 */
  guest_unsupported(0xea56e6); /* pfadd mm2, mm3 */
/* ea56ea: movq mm3, qword ptr [esp + 0x70] */
  MMX[3] = R64((uint32_t)(esp + 0x70u));
/* ea56ef: pfsub mm4, mm5 */
  guest_unsupported(0xea56ef); /* pfsub mm4, mm5 */
/* ea56f3: movq mm5, qword ptr [esp + 0x78] */
  MMX[5] = R64((uint32_t)(esp + 0x78u));
/* ea56f8: pfmul mm7, mm1 */
  guest_unsupported(0xea56f8); /* pfmul mm7, mm1 */
/* ea56fc: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea56fc); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea5703: pfacc mm4, mm2 */
  guest_unsupported(0xea5703); /* pfacc mm4, mm2 */
/* ea5707: pfmul mm6, mm0 */
  guest_unsupported(0xea5707); /* pfmul mm6, mm0 */
/* ea570b: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea570b); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5712: pfmul mm3, mm0 */
  guest_unsupported(0xea5712); /* pfmul mm3, mm0 */
/* ea5716: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea5719: pfmul mm5, mm1 */
  guest_unsupported(0xea5719); /* pfmul mm5, mm1 */
/* ea571d: pfadd mm6, mm7 */
  guest_unsupported(0xea571d); /* pfadd mm6, mm7 */
/* ea5721: pfsub mm5, mm3 */
  guest_unsupported(0xea5721); /* pfsub mm5, mm3 */
/* ea5725: pfacc mm6, mm5 */
  guest_unsupported(0xea5725); /* pfacc mm6, mm5 */
/* ea5729: movq qword ptr [eax + 8], mm6 */
  W64((uint32_t)(eax + 0x8u), MMX[6]);
/* ea572d: movq mm0, qword ptr [esp + 0x20] */
  MMX[0] = R64((uint32_t)(esp + 0x20u));
/* ea5732: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea5735: movq mm2, qword ptr [esp + 0x28] */
  MMX[2] = R64((uint32_t)(esp + 0x28u));
/* ea573a: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea573d: pfmul mm0, mm0 */
  guest_unsupported(0xea573d); /* pfmul mm0, mm0 */
/* ea5741: pfmul mm2, mm2 */
  guest_unsupported(0xea5741); /* pfmul mm2, mm2 */
/* ea5745: pfadd mm0, mm2 */
  guest_unsupported(0xea5745); /* pfadd mm0, mm2 */
/* ea5749: pfacc mm0, mm0 */
  guest_unsupported(0xea5749); /* pfacc mm0, mm0 */
/* ea574d: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea5750: pfrcp mm4, mm0 */
  guest_unsupported(0xea5750); /* pfrcp mm4, mm0 */
/* ea5754: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xea5754); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* ea575c: pxor mm1, qword ptr [0xeb3c70] */
  guest_unsupported(0xea575c); /* pxor mm1, qword ptr [0xeb3c70] */
/* ea5763: pxor mm3, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5763); /* pxor mm3, qword ptr [0xeb3bb8] */
/* ea576a: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea576a); /* pfrcpit1 mm0, mm4 */
/* ea576e: pand mm1, mm5 */
  guest_unsupported(0xea576e); /* pand mm1, mm5 */
/* ea5771: pand mm3, mm5 */
  guest_unsupported(0xea5771); /* pand mm3, mm5 */
/* ea5774: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea5774); /* pfrcpit2 mm0, mm4 */
/* ea5778: pfmul mm1, mm0 */
  guest_unsupported(0xea5778); /* pfmul mm1, mm0 */
/* ea577c: pfmul mm3, mm0 */
  guest_unsupported(0xea577c); /* pfmul mm3, mm0 */
/* ea5780: movq qword ptr [esp + 0x40], mm1 */
  W64((uint32_t)(esp + 0x40u), MMX[1]);
/* ea5785: movq qword ptr [esp + 0x48], mm3 */
  W64((uint32_t)(esp + 0x48u), MMX[3]);
/* ea578a: movq mm2, qword ptr [esp + 0x10] */
  MMX[2] = R64((uint32_t)(esp + 0x10u));
/* ea578f: movq mm3, qword ptr [esp + 0x18] */
  MMX[3] = R64((uint32_t)(esp + 0x18u));
/* ea5794: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5797: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea579a: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea579f: punpckhdq mm4, mm2 */
  guest_unsupported(0xea579f); /* punpckhdq mm4, mm2 */
/* ea57a2: punpckhdq mm5, mm3 */
  guest_unsupported(0xea57a2); /* punpckhdq mm5, mm3 */
/* ea57a5: movq mm1, qword ptr [esp + 0x48] */
  MMX[1] = R64((uint32_t)(esp + 0x48u));
/* ea57aa: punpckldq mm4, mm2 */
  guest_unsupported(0xea57aa); /* punpckldq mm4, mm2 */
/* ea57ad: punpckldq mm5, mm3 */
  guest_unsupported(0xea57ad); /* punpckldq mm5, mm3 */
/* ea57b0: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea57b3: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea57b6: pfmul mm2, mm1 */
  guest_unsupported(0xea57b6); /* pfmul mm2, mm1 */
/* ea57ba: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea57ba); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea57c1: pfmul mm3, mm0 */
  guest_unsupported(0xea57c1); /* pfmul mm3, mm0 */
/* ea57c5: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea57c5); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea57cc: pfmul mm5, mm0 */
  guest_unsupported(0xea57cc); /* pfmul mm5, mm0 */
/* ea57d0: pfmul mm4, mm1 */
  guest_unsupported(0xea57d0); /* pfmul mm4, mm1 */
/* ea57d4: pfadd mm2, mm3 */
  guest_unsupported(0xea57d4); /* pfadd mm2, mm3 */
/* ea57d8: movq mm3, qword ptr [esp + 0x10] */
  MMX[3] = R64((uint32_t)(esp + 0x10u));
/* ea57dd: pfsub mm4, mm5 */
  guest_unsupported(0xea57dd); /* pfsub mm4, mm5 */
/* ea57e1: movq mm5, qword ptr [esp + 0x18] */
  MMX[5] = R64((uint32_t)(esp + 0x18u));
/* ea57e6: pfmul mm7, mm1 */
  guest_unsupported(0xea57e6); /* pfmul mm7, mm1 */
/* ea57ea: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea57ea); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea57f1: pfacc mm4, mm2 */
  guest_unsupported(0xea57f1); /* pfacc mm4, mm2 */
/* ea57f5: pfmul mm6, mm0 */
  guest_unsupported(0xea57f5); /* pfmul mm6, mm0 */
/* ea57f9: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea57f9); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5800: pfmul mm3, mm0 */
  guest_unsupported(0xea5800); /* pfmul mm3, mm0 */
/* ea5804: movq qword ptr [esp + 0x80], mm4 */
  W64((uint32_t)(esp + 0x80u), MMX[4]);
/* ea580c: pfmul mm5, mm1 */
  guest_unsupported(0xea580c); /* pfmul mm5, mm1 */
/* ea5810: pfadd mm6, mm7 */
  guest_unsupported(0xea5810); /* pfadd mm6, mm7 */
/* ea5814: pfsub mm5, mm3 */
  guest_unsupported(0xea5814); /* pfsub mm5, mm3 */
/* ea5818: pfacc mm6, mm5 */
  guest_unsupported(0xea5818); /* pfacc mm6, mm5 */
/* ea581c: movq qword ptr [esp + 0x88], mm6 */
  W64((uint32_t)(esp + 0x88u), MMX[6]);
/* ea5824: movq mm2, qword ptr [esp + 0x30] */
  MMX[2] = R64((uint32_t)(esp + 0x30u));
/* ea5829: movq mm3, qword ptr [esp + 0x38] */
  MMX[3] = R64((uint32_t)(esp + 0x38u));
/* ea582e: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5831: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea5834: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea5839: punpckhdq mm4, mm2 */
  guest_unsupported(0xea5839); /* punpckhdq mm4, mm2 */
/* ea583c: punpckhdq mm5, mm3 */
  guest_unsupported(0xea583c); /* punpckhdq mm5, mm3 */
/* ea583f: movq mm1, qword ptr [esp + 0x48] */
  MMX[1] = R64((uint32_t)(esp + 0x48u));
/* ea5844: punpckldq mm4, mm2 */
  guest_unsupported(0xea5844); /* punpckldq mm4, mm2 */
/* ea5847: punpckldq mm5, mm3 */
  guest_unsupported(0xea5847); /* punpckldq mm5, mm3 */
/* ea584a: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea584d: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea5850: pfmul mm2, mm1 */
  guest_unsupported(0xea5850); /* pfmul mm2, mm1 */
/* ea5854: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5854); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea585b: pfmul mm3, mm0 */
  guest_unsupported(0xea585b); /* pfmul mm3, mm0 */
/* ea585f: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea585f); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea5866: pfmul mm5, mm0 */
  guest_unsupported(0xea5866); /* pfmul mm5, mm0 */
/* ea586a: pfmul mm4, mm1 */
  guest_unsupported(0xea586a); /* pfmul mm4, mm1 */
/* ea586e: pfadd mm2, mm3 */
  guest_unsupported(0xea586e); /* pfadd mm2, mm3 */
/* ea5872: movq mm3, qword ptr [esp + 0x30] */
  MMX[3] = R64((uint32_t)(esp + 0x30u));
/* ea5877: pfsub mm4, mm5 */
  guest_unsupported(0xea5877); /* pfsub mm4, mm5 */
/* ea587b: movq mm5, qword ptr [esp + 0x38] */
  MMX[5] = R64((uint32_t)(esp + 0x38u));
/* ea5880: pfmul mm7, mm1 */
  guest_unsupported(0xea5880); /* pfmul mm7, mm1 */
/* ea5884: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5884); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea588b: pfacc mm4, mm2 */
  guest_unsupported(0xea588b); /* pfacc mm4, mm2 */
/* ea588f: pfmul mm6, mm0 */
  guest_unsupported(0xea588f); /* pfmul mm6, mm0 */
/* ea5893: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5893); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea589a: pfmul mm3, mm0 */
  guest_unsupported(0xea589a); /* pfmul mm3, mm0 */
/* ea589e: movq qword ptr [esp + 0x90], mm4 */
  W64((uint32_t)(esp + 0x90u), MMX[4]);
/* ea58a6: pfmul mm5, mm1 */
  guest_unsupported(0xea58a6); /* pfmul mm5, mm1 */
/* ea58aa: pfadd mm6, mm7 */
  guest_unsupported(0xea58aa); /* pfadd mm6, mm7 */
/* ea58ae: pfsub mm5, mm3 */
  guest_unsupported(0xea58ae); /* pfsub mm5, mm3 */
/* ea58b2: pfacc mm6, mm5 */
  guest_unsupported(0xea58b2); /* pfacc mm6, mm5 */
/* ea58b6: movq qword ptr [esp + 0x98], mm6 */
  W64((uint32_t)(esp + 0x98u), MMX[6]);
/* ea58be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea58c1: movq mm1, qword ptr [esp + 0x8c] */
  MMX[1] = R64((uint32_t)(esp + 0x8cu));
/* ea58c9: movq mm2, qword ptr [esp + 0x94] */
  MMX[2] = R64((uint32_t)(esp + 0x94u));
/* ea58d1: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea58d4: punpckhdq mm3, mm3 */
  guest_unsupported(0xea58d4); /* punpckhdq mm3, mm3 */
/* ea58d7: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* ea58da: pfcmpge mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea58da); /* pfcmpge mm3, qword ptr [0xeb3c28] */
/* ea58e2: movd ecx, mm3 */
  guest_unsupported(0xea58e2); /* movd ecx, mm3 */
/* ea58e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea58e7: jne 0xea5957 */
  if (!zf) goto L_ea5957;
L_ea58e9: /* ea58e9: call 0xeab780 */
  esp -= 4; W32(esp, 0xea58eeu); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea58ee: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea58ee); /* movd dword ptr [esp], mm0 */
/* ea58f2: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea58f6: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea58fa: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea58ffu); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea58ff: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea5902: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea5906: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea590a: pand mm3, qword ptr [0xeb3be0] */
  guest_unsupported(0xea590a); /* pand mm3, qword ptr [0xeb3be0] */
/* ea5911: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea5915: mov ebx, dword ptr [esp + 4] */
  ebx = R32((uint32_t)(esp + 0x4u));
/* ea5919: pfcmpge mm3, qword ptr [0xeb3be8] */
  guest_unsupported(0xea5919); /* pfcmpge mm3, qword ptr [0xeb3be8] */
/* ea5921: movd ecx, mm3 */
  guest_unsupported(0xea5921); /* movd ecx, mm3 */
/* ea5924: movq mm1, qword ptr [esp + 0x8c] */
  MMX[1] = R64((uint32_t)(esp + 0x8cu));
/* ea592c: movq mm2, qword ptr [esp + 0x94] */
  MMX[2] = R64((uint32_t)(esp + 0x94u));
/* ea5934: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5936: je 0xea5957 */
  if (zf) goto L_ea5957;
L_ea5938: /* ea5938: movd mm3, dword ptr [esp] */
  guest_unsupported(0xea5938); /* movd mm3, dword ptr [esp] */
/* ea593c: pfrcp mm4, mm0 */
  guest_unsupported(0xea593c); /* pfrcp mm4, mm0 */
/* ea5940: punpckldq mm3, mm3 */
  guest_unsupported(0xea5940); /* punpckldq mm3, mm3 */
/* ea5943: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea5943); /* pfrcpit1 mm0, mm4 */
/* ea5947: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea5947); /* pfrcpit2 mm0, mm4 */
/* ea594b: pfmul mm3, mm0 */
  guest_unsupported(0xea594b); /* pfmul mm3, mm0 */
/* ea594f: pfmul mm1, mm3 */
  guest_unsupported(0xea594f); /* pfmul mm1, mm3 */
/* ea5953: pfmul mm2, mm3 */
  guest_unsupported(0xea5953); /* pfmul mm2, mm3 */
L_ea5957: /* ea5957: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea5957); /* pand mm2, qword ptr [0xeb3bf0] */
/* ea595e: movq qword ptr [esp + 0x5c], mm1 */
  W64((uint32_t)(esp + 0x5cu), MMX[1]);
/* ea5963: movq qword ptr [esp + 0x64], mm2 */
  W64((uint32_t)(esp + 0x64u), MMX[2]);
/* ea5968: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea596b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea596e: movq mm1, qword ptr [esp + 0x9c] */
  MMX[1] = R64((uint32_t)(esp + 0x9cu));
/* ea5976: movq mm2, qword ptr [esp + 0xa4] */
  MMX[2] = R64((uint32_t)(esp + 0xa4u));
/* ea597e: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea5981: punpckhdq mm3, mm3 */
  guest_unsupported(0xea5981); /* punpckhdq mm3, mm3 */
/* ea5984: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* ea5987: pfcmpge mm3, qword ptr [0xeb3c28] */
  guest_unsupported(0xea5987); /* pfcmpge mm3, qword ptr [0xeb3c28] */
/* ea598f: movd ecx, mm3 */
  guest_unsupported(0xea598f); /* movd ecx, mm3 */
/* ea5992: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5994: jne 0xea5a04 */
  if (!zf) goto L_ea5a04;
L_ea5996: /* ea5996: call 0xeab780 */
  esp -= 4; W32(esp, 0xea599bu); SPILL(); f_eab780(); if (g_unwind) return; RELOAD();
/* ea599b: movd dword ptr [esp], mm0 */
  guest_unsupported(0xea599b); /* movd dword ptr [esp], mm0 */
/* ea599f: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea59a3: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea59a7: call 0xeabe80 */
  esp -= 4; W32(esp, 0xea59acu); SPILL(); f_eabe80(); if (g_unwind) return; RELOAD();
/* ea59ac: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea59af: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea59b3: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea59b7: pand mm3, qword ptr [0xeb3be0] */
  guest_unsupported(0xea59b7); /* pand mm3, qword ptr [0xeb3be0] */
/* ea59be: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea59c2: mov ebx, dword ptr [esp + 4] */
  ebx = R32((uint32_t)(esp + 0x4u));
/* ea59c6: pfcmpge mm3, qword ptr [0xeb3be8] */
  guest_unsupported(0xea59c6); /* pfcmpge mm3, qword ptr [0xeb3be8] */
/* ea59ce: movd ecx, mm3 */
  guest_unsupported(0xea59ce); /* movd ecx, mm3 */
/* ea59d1: movq mm1, qword ptr [esp + 0x9c] */
  MMX[1] = R64((uint32_t)(esp + 0x9cu));
/* ea59d9: movq mm2, qword ptr [esp + 0xa4] */
  MMX[2] = R64((uint32_t)(esp + 0xa4u));
/* ea59e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea59e3: je 0xea5a04 */
  if (zf) goto L_ea5a04;
L_ea59e5: /* ea59e5: movd mm3, dword ptr [esp] */
  guest_unsupported(0xea59e5); /* movd mm3, dword ptr [esp] */
/* ea59e9: pfrcp mm4, mm0 */
  guest_unsupported(0xea59e9); /* pfrcp mm4, mm0 */
/* ea59ed: punpckldq mm3, mm3 */
  guest_unsupported(0xea59ed); /* punpckldq mm3, mm3 */
/* ea59f0: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xea59f0); /* pfrcpit1 mm0, mm4 */
/* ea59f4: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea59f4); /* pfrcpit2 mm0, mm4 */
/* ea59f8: pfmul mm3, mm0 */
  guest_unsupported(0xea59f8); /* pfmul mm3, mm0 */
/* ea59fc: pfmul mm1, mm3 */
  guest_unsupported(0xea59fc); /* pfmul mm1, mm3 */
/* ea5a00: pfmul mm2, mm3 */
  guest_unsupported(0xea5a00); /* pfmul mm2, mm3 */
L_ea5a04: /* ea5a04: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea5a04); /* pand mm2, qword ptr [0xeb3bf0] */
/* ea5a0b: movq qword ptr [esp + 0x6c], mm1 */
  W64((uint32_t)(esp + 0x6cu), MMX[1]);
/* ea5a10: movq qword ptr [esp + 0x74], mm2 */
  W64((uint32_t)(esp + 0x74u), MMX[2]);
/* ea5a15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5a18: movq mm0, qword ptr [esp + 0x50] */
  MMX[0] = R64((uint32_t)(esp + 0x50u));
/* ea5a1d: movq mm1, qword ptr [esp + 0x58] */
  MMX[1] = R64((uint32_t)(esp + 0x58u));
/* ea5a22: pfadd mm0, qword ptr [esp + 0x60] */
  guest_unsupported(0xea5a22); /* pfadd mm0, qword ptr [esp + 0x60] */
/* ea5a28: pfadd mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea5a28); /* pfadd mm1, qword ptr [esp + 0x68] */
/* ea5a2e: pfmul mm0, qword ptr [0xeb4320] */
  guest_unsupported(0xea5a2e); /* pfmul mm0, qword ptr [0xeb4320] */
/* ea5a36: pfmul mm1, qword ptr [0xeb4320] */
  guest_unsupported(0xea5a36); /* pfmul mm1, qword ptr [0xeb4320] */
/* ea5a3e: movq qword ptr [esp + 0x80], mm0 */
  W64((uint32_t)(esp + 0x80u), MMX[0]);
/* ea5a46: movq qword ptr [esp + 0x88], mm1 */
  W64((uint32_t)(esp + 0x88u), MMX[1]);
/* ea5a4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5a51: movq mm0, qword ptr [esp + 0x8c] */
  MMX[0] = R64((uint32_t)(esp + 0x8cu));
/* ea5a59: movd mm1, dword ptr [esp + 0x94] */
  guest_unsupported(0xea5a59); /* movd mm1, dword ptr [esp + 0x94] */
/* ea5a61: pfmul mm0, mm0 */
  guest_unsupported(0xea5a61); /* pfmul mm0, mm0 */
/* ea5a65: pfmul mm1, mm1 */
  guest_unsupported(0xea5a65); /* pfmul mm1, mm1 */
/* ea5a69: pfadd mm0, mm1 */
  guest_unsupported(0xea5a69); /* pfadd mm0, mm1 */
/* ea5a6d: pfacc mm0, mm0 */
  guest_unsupported(0xea5a6d); /* pfacc mm0, mm0 */
/* ea5a71: pfrsqrt mm1, mm0 */
  guest_unsupported(0xea5a71); /* pfrsqrt mm1, mm0 */
/* ea5a75: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea5a78: pfmul mm1, mm1 */
  guest_unsupported(0xea5a78); /* pfmul mm1, mm1 */
/* ea5a7c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* ea5a80: pfrsqit1 mm1, mm0 */
  guest_unsupported(0xea5a80); /* pfrsqit1 mm1, mm0 */
/* ea5a84: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* ea5a88: pfrcpit2 mm1, mm2 */
  guest_unsupported(0xea5a88); /* pfrcpit2 mm1, mm2 */
/* ea5a8c: movd dword ptr [esp], mm1 */
  guest_unsupported(0xea5a8c); /* movd dword ptr [esp], mm1 */
/* ea5a90: pfmul mm0, mm1 */
  guest_unsupported(0xea5a90); /* pfmul mm0, mm1 */
/* ea5a94: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea5a99u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea5a99: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea5a9c: pand mm0, qword ptr [0xeb3bd8] */
  guest_unsupported(0xea5a9c); /* pand mm0, qword ptr [0xeb3bd8] */
/* ea5aa3: pfcmpge mm0, qword ptr [0xeb3be8] */
  guest_unsupported(0xea5aa3); /* pfcmpge mm0, qword ptr [0xeb3be8] */
/* ea5aab: punpckhdq mm0, mm0 */
  guest_unsupported(0xea5aab); /* punpckhdq mm0, mm0 */
/* ea5aae: movd ecx, mm0 */
  guest_unsupported(0xea5aae); /* movd ecx, mm0 */
/* ea5ab1: movq mm2, qword ptr [esp + 0x8c] */
  MMX[2] = R64((uint32_t)(esp + 0x8cu));
/* ea5ab9: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea5abc: punpckhdq mm1, mm1 */
  guest_unsupported(0xea5abc); /* punpckhdq mm1, mm1 */
/* ea5abf: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea5ac5: pfmul mm1, qword ptr [esp] */
  guest_unsupported(0xea5ac5); /* pfmul mm1, qword ptr [esp] */
/* ea5aca: movd mm3, dword ptr [esp + 0x94] */
  guest_unsupported(0xea5aca); /* movd mm3, dword ptr [esp + 0x94] */
/* ea5ad2: je 0xea5adf */
  if (zf) goto L_ea5adf;
L_ea5ad4: /* ea5ad4: punpckldq mm1, mm1 */
  guest_unsupported(0xea5ad4); /* punpckldq mm1, mm1 */
/* ea5ad7: pfmul mm3, mm1 */
  guest_unsupported(0xea5ad7); /* pfmul mm3, mm1 */
/* ea5adb: pfmul mm2, mm1 */
  guest_unsupported(0xea5adb); /* pfmul mm2, mm1 */
L_ea5adf: /* ea5adf: punpckldq mm3, mm0 */
  guest_unsupported(0xea5adf); /* punpckldq mm3, mm0 */
/* ea5ae2: movq qword ptr [esp + 0x7c], mm2 */
  W64((uint32_t)(esp + 0x7cu), MMX[2]);
/* ea5ae7: movq qword ptr [esp + 0x84], mm3 */
  W64((uint32_t)(esp + 0x84u), MMX[3]);
/* ea5aef: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* ea5af3: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* ea5af7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5afa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea5afd: movq mm2, qword ptr [esp + 0x70] */
  MMX[2] = R64((uint32_t)(esp + 0x70u));
/* ea5b02: movq mm3, qword ptr [esp + 0x78] */
  MMX[3] = R64((uint32_t)(esp + 0x78u));
/* ea5b07: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5b0a: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea5b0d: movq mm0, qword ptr [esp + 0x20] */
  MMX[0] = R64((uint32_t)(esp + 0x20u));
/* ea5b12: punpckhdq mm4, mm2 */
  guest_unsupported(0xea5b12); /* punpckhdq mm4, mm2 */
/* ea5b15: punpckhdq mm5, mm3 */
  guest_unsupported(0xea5b15); /* punpckhdq mm5, mm3 */
/* ea5b18: movq mm1, qword ptr [esp + 0x28] */
  MMX[1] = R64((uint32_t)(esp + 0x28u));
/* ea5b1d: punpckldq mm4, mm2 */
  guest_unsupported(0xea5b1d); /* punpckldq mm4, mm2 */
/* ea5b20: punpckldq mm5, mm3 */
  guest_unsupported(0xea5b20); /* punpckldq mm5, mm3 */
/* ea5b23: movq mm6, mm4 */
  MMX[6] = MMX[4];
/* ea5b26: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea5b29: pfmul mm2, mm1 */
  guest_unsupported(0xea5b29); /* pfmul mm2, mm1 */
/* ea5b2d: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5b2d); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5b34: pfmul mm3, mm0 */
  guest_unsupported(0xea5b34); /* pfmul mm3, mm0 */
/* ea5b38: pxor mm2, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5b38); /* pxor mm2, qword ptr [0xeb3bb8] */
/* ea5b3f: pfmul mm5, mm0 */
  guest_unsupported(0xea5b3f); /* pfmul mm5, mm0 */
/* ea5b43: pfmul mm4, mm1 */
  guest_unsupported(0xea5b43); /* pfmul mm4, mm1 */
/* ea5b47: pfadd mm2, mm3 */
  guest_unsupported(0xea5b47); /* pfadd mm2, mm3 */
/* ea5b4b: movq mm3, qword ptr [esp + 0x70] */
  MMX[3] = R64((uint32_t)(esp + 0x70u));
/* ea5b50: pfsub mm4, mm5 */
  guest_unsupported(0xea5b50); /* pfsub mm4, mm5 */
/* ea5b54: movq mm5, qword ptr [esp + 0x78] */
  MMX[5] = R64((uint32_t)(esp + 0x78u));
/* ea5b59: pfmul mm7, mm1 */
  guest_unsupported(0xea5b59); /* pfmul mm7, mm1 */
/* ea5b5d: pxor mm6, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5b5d); /* pxor mm6, qword ptr [0xeb3bb8] */
/* ea5b64: pfacc mm4, mm2 */
  guest_unsupported(0xea5b64); /* pfacc mm4, mm2 */
/* ea5b68: pfmul mm6, mm0 */
  guest_unsupported(0xea5b68); /* pfmul mm6, mm0 */
/* ea5b6c: pxor mm5, qword ptr [0xeb3bb8] */
  guest_unsupported(0xea5b6c); /* pxor mm5, qword ptr [0xeb3bb8] */
/* ea5b73: pfmul mm3, mm0 */
  guest_unsupported(0xea5b73); /* pfmul mm3, mm0 */
/* ea5b77: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea5b7a: pfmul mm5, mm1 */
  guest_unsupported(0xea5b7a); /* pfmul mm5, mm1 */
/* ea5b7e: pfadd mm6, mm7 */
  guest_unsupported(0xea5b7e); /* pfadd mm6, mm7 */
/* ea5b82: pfsub mm5, mm3 */
  guest_unsupported(0xea5b82); /* pfsub mm5, mm3 */
/* ea5b86: pfacc mm6, mm5 */
  guest_unsupported(0xea5b86); /* pfacc mm6, mm5 */
/* ea5b8a: movq qword ptr [eax + 8], mm6 */
  W64((uint32_t)(eax + 0x8u), MMX[6]);
/* ea5b8e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* ea5b91: movq mm0, qword ptr [esp + 0x20] */
  MMX[0] = R64((uint32_t)(esp + 0x20u));
/* ea5b96: movq mm1, qword ptr [esp + 0x28] */
  MMX[1] = R64((uint32_t)(esp + 0x28u));
/* ea5b9b: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea5b9e: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea5ba2: mov esp, ebp */
  esp = ebp;
/* ea5ba4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea5ba5: femms  */
  guest_unsupported(0xea5ba5); /* femms  */
/* ea5ba7: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_ea5baa(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5baa: /* ea5baa: femms  */
  guest_unsupported(0xea5baa); /* femms  */
/* ea5bac: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5baf: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* ea5bb3: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* ea5bb7: mov ebp, esp */
  ebp = esp;
/* ea5bb9: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea5bbc: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea5bbf: movq mm1, qword ptr [edx + 0x10] */
  MMX[1] = R64((uint32_t)(edx + 0x10u));
/* ea5bc3: movq mm3, qword ptr [edx + 0x28] */
  MMX[3] = R64((uint32_t)(edx + 0x28u));
/* ea5bc7: movq mm4, qword ptr [edx + 0x38] */
  MMX[4] = R64((uint32_t)(edx + 0x38u));
/* ea5bcb: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5bce: punpckldq mm0, mm1 */
  guest_unsupported(0xea5bce); /* punpckldq mm0, mm1 */
/* ea5bd1: punpckhdq mm2, mm1 */
  guest_unsupported(0xea5bd1); /* punpckhdq mm2, mm1 */
/* ea5bd4: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea5bd7: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea5bdb: movq qword ptr [esp + 0x10], mm2 */
  W64((uint32_t)(esp + 0x10u), MMX[2]);
/* ea5be0: movq mm6, qword ptr [edx + 8] */
  MMX[6] = R64((uint32_t)(edx + 0x8u));
/* ea5be4: punpckldq mm3, mm4 */
  guest_unsupported(0xea5be4); /* punpckldq mm3, mm4 */
/* ea5be7: movq mm7, qword ptr [edx + 0x18] */
  MMX[7] = R64((uint32_t)(edx + 0x18u));
/* ea5beb: movq mm0, qword ptr [edx + 0x20] */
  MMX[0] = R64((uint32_t)(edx + 0x20u));
/* ea5bef: punpckhdq mm5, mm4 */
  guest_unsupported(0xea5bef); /* punpckhdq mm5, mm4 */
/* ea5bf2: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea5bf5: movq qword ptr [esp + 0x28], mm3 */
  W64((uint32_t)(esp + 0x28u), MMX[3]);
/* ea5bfa: movq qword ptr [esp + 0x38], mm5 */
  W64((uint32_t)(esp + 0x38u), MMX[5]);
/* ea5bff: mov ecx, dword ptr [ebp + 0x4c] */
  ecx = R32((uint32_t)(ebp + 0x4cu));
/* ea5c02: punpckldq mm6, mm7 */
  guest_unsupported(0xea5c02); /* punpckldq mm6, mm7 */
/* ea5c05: movq mm4, qword ptr [edx + 0x30] */
  MMX[4] = R64((uint32_t)(edx + 0x30u));
/* ea5c09: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5c0c: punpckhdq mm1, mm7 */
  guest_unsupported(0xea5c0c); /* punpckhdq mm1, mm7 */
/* ea5c0f: movq qword ptr [esp + 0x20], mm6 */
  W64((uint32_t)(esp + 0x20u), MMX[6]);
/* ea5c14: punpckhdq mm0, mm4 */
  guest_unsupported(0xea5c14); /* punpckhdq mm0, mm4 */
/* ea5c17: punpckldq mm2, mm4 */
  guest_unsupported(0xea5c17); /* punpckldq mm2, mm4 */
/* ea5c1a: movq qword ptr [esp + 0x30], mm1 */
  W64((uint32_t)(esp + 0x30u), MMX[1]);
/* ea5c1f: movq qword ptr [esp + 0x18], mm0 */
  W64((uint32_t)(esp + 0x18u), MMX[0]);
/* ea5c24: movq qword ptr [esp + 8], mm2 */
  W64((uint32_t)(esp + 0x8u), MMX[2]);
/* ea5c29: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* ea5c2c: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea5c2f: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea5c33: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5c36: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea5c39: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5c3c: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea5c3f: pfmul mm0, qword ptr [esp] */
  guest_unsupported(0xea5c3f); /* pfmul mm0, qword ptr [esp] */
/* ea5c44: pfmul mm1, qword ptr [esp + 8] */
  guest_unsupported(0xea5c44); /* pfmul mm1, qword ptr [esp + 8] */
/* ea5c4a: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea5c4d: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea5c50: pfmul mm2, qword ptr [esp + 0x10] */
  guest_unsupported(0xea5c50); /* pfmul mm2, qword ptr [esp + 0x10] */
/* ea5c56: pfmul mm3, qword ptr [esp + 0x18] */
  guest_unsupported(0xea5c56); /* pfmul mm3, qword ptr [esp + 0x18] */
/* ea5c5c: pfmul mm4, qword ptr [esp + 0x20] */
  guest_unsupported(0xea5c5c); /* pfmul mm4, qword ptr [esp + 0x20] */
/* ea5c62: pfmul mm5, qword ptr [esp + 0x28] */
  guest_unsupported(0xea5c62); /* pfmul mm5, qword ptr [esp + 0x28] */
/* ea5c68: pfmul mm6, qword ptr [esp + 0x30] */
  guest_unsupported(0xea5c68); /* pfmul mm6, qword ptr [esp + 0x30] */
/* ea5c6e: pfmul mm7, qword ptr [esp + 0x38] */
  guest_unsupported(0xea5c6e); /* pfmul mm7, qword ptr [esp + 0x38] */
/* ea5c74: pfacc mm0, mm2 */
  guest_unsupported(0xea5c74); /* pfacc mm0, mm2 */
/* ea5c78: pfacc mm1, mm3 */
  guest_unsupported(0xea5c78); /* pfacc mm1, mm3 */
/* ea5c7c: pfacc mm4, mm6 */
  guest_unsupported(0xea5c7c); /* pfacc mm4, mm6 */
/* ea5c80: pfacc mm5, mm7 */
  guest_unsupported(0xea5c80); /* pfacc mm5, mm7 */
/* ea5c84: pfadd mm0, mm1 */
  guest_unsupported(0xea5c84); /* pfadd mm0, mm1 */
/* ea5c88: pfadd mm4, mm5 */
  guest_unsupported(0xea5c88); /* pfadd mm4, mm5 */
/* ea5c8c: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea5c8f: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* ea5c93: movq mm0, qword ptr [ecx + 0x10] */
  MMX[0] = R64((uint32_t)(ecx + 0x10u));
/* ea5c97: movq mm1, qword ptr [ecx + 0x18] */
  MMX[1] = R64((uint32_t)(ecx + 0x18u));
/* ea5c9b: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5c9e: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea5ca1: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5ca4: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea5ca7: pfmul mm0, qword ptr [esp] */
  guest_unsupported(0xea5ca7); /* pfmul mm0, qword ptr [esp] */
/* ea5cac: pfmul mm1, qword ptr [esp + 8] */
  guest_unsupported(0xea5cac); /* pfmul mm1, qword ptr [esp + 8] */
/* ea5cb2: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea5cb5: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea5cb8: pfmul mm2, qword ptr [esp + 0x10] */
  guest_unsupported(0xea5cb8); /* pfmul mm2, qword ptr [esp + 0x10] */
/* ea5cbe: pfmul mm3, qword ptr [esp + 0x18] */
  guest_unsupported(0xea5cbe); /* pfmul mm3, qword ptr [esp + 0x18] */
/* ea5cc4: pfmul mm4, qword ptr [esp + 0x20] */
  guest_unsupported(0xea5cc4); /* pfmul mm4, qword ptr [esp + 0x20] */
/* ea5cca: pfmul mm5, qword ptr [esp + 0x28] */
  guest_unsupported(0xea5cca); /* pfmul mm5, qword ptr [esp + 0x28] */
/* ea5cd0: pfmul mm6, qword ptr [esp + 0x30] */
  guest_unsupported(0xea5cd0); /* pfmul mm6, qword ptr [esp + 0x30] */
/* ea5cd6: pfmul mm7, qword ptr [esp + 0x38] */
  guest_unsupported(0xea5cd6); /* pfmul mm7, qword ptr [esp + 0x38] */
/* ea5cdc: pfacc mm0, mm2 */
  guest_unsupported(0xea5cdc); /* pfacc mm0, mm2 */
/* ea5ce0: pfacc mm1, mm3 */
  guest_unsupported(0xea5ce0); /* pfacc mm1, mm3 */
/* ea5ce4: pfacc mm4, mm6 */
  guest_unsupported(0xea5ce4); /* pfacc mm4, mm6 */
/* ea5ce8: pfacc mm5, mm7 */
  guest_unsupported(0xea5ce8); /* pfacc mm5, mm7 */
/* ea5cec: pfadd mm0, mm1 */
  guest_unsupported(0xea5cec); /* pfadd mm0, mm1 */
/* ea5cf0: pfadd mm4, mm5 */
  guest_unsupported(0xea5cf0); /* pfadd mm4, mm5 */
/* ea5cf4: movq qword ptr [eax + 0x10], mm0 */
  W64((uint32_t)(eax + 0x10u), MMX[0]);
/* ea5cf8: movq qword ptr [eax + 0x18], mm4 */
  W64((uint32_t)(eax + 0x18u), MMX[4]);
/* ea5cfc: movq mm0, qword ptr [ecx + 0x20] */
  MMX[0] = R64((uint32_t)(ecx + 0x20u));
/* ea5d00: movq mm1, qword ptr [ecx + 0x28] */
  MMX[1] = R64((uint32_t)(ecx + 0x28u));
/* ea5d04: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5d07: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea5d0a: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5d0d: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea5d10: pfmul mm0, qword ptr [esp] */
  guest_unsupported(0xea5d10); /* pfmul mm0, qword ptr [esp] */
/* ea5d15: pfmul mm1, qword ptr [esp + 8] */
  guest_unsupported(0xea5d15); /* pfmul mm1, qword ptr [esp + 8] */
/* ea5d1b: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea5d1e: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea5d21: pfmul mm2, qword ptr [esp + 0x10] */
  guest_unsupported(0xea5d21); /* pfmul mm2, qword ptr [esp + 0x10] */
/* ea5d27: pfmul mm3, qword ptr [esp + 0x18] */
  guest_unsupported(0xea5d27); /* pfmul mm3, qword ptr [esp + 0x18] */
/* ea5d2d: pfmul mm4, qword ptr [esp + 0x20] */
  guest_unsupported(0xea5d2d); /* pfmul mm4, qword ptr [esp + 0x20] */
/* ea5d33: pfmul mm5, qword ptr [esp + 0x28] */
  guest_unsupported(0xea5d33); /* pfmul mm5, qword ptr [esp + 0x28] */
/* ea5d39: pfmul mm6, qword ptr [esp + 0x30] */
  guest_unsupported(0xea5d39); /* pfmul mm6, qword ptr [esp + 0x30] */
/* ea5d3f: pfmul mm7, qword ptr [esp + 0x38] */
  guest_unsupported(0xea5d3f); /* pfmul mm7, qword ptr [esp + 0x38] */
/* ea5d45: pfacc mm0, mm2 */
  guest_unsupported(0xea5d45); /* pfacc mm0, mm2 */
/* ea5d49: pfacc mm1, mm3 */
  guest_unsupported(0xea5d49); /* pfacc mm1, mm3 */
/* ea5d4d: pfacc mm4, mm6 */
  guest_unsupported(0xea5d4d); /* pfacc mm4, mm6 */
/* ea5d51: pfacc mm5, mm7 */
  guest_unsupported(0xea5d51); /* pfacc mm5, mm7 */
/* ea5d55: pfadd mm0, mm1 */
  guest_unsupported(0xea5d55); /* pfadd mm0, mm1 */
/* ea5d59: pfadd mm4, mm5 */
  guest_unsupported(0xea5d59); /* pfadd mm4, mm5 */
/* ea5d5d: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea5d61: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea5d65: movq mm0, qword ptr [ecx + 0x30] */
  MMX[0] = R64((uint32_t)(ecx + 0x30u));
/* ea5d69: movq mm1, qword ptr [ecx + 0x38] */
  MMX[1] = R64((uint32_t)(ecx + 0x38u));
/* ea5d6d: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea5d70: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea5d73: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5d76: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea5d79: pfmul mm0, qword ptr [esp] */
  guest_unsupported(0xea5d79); /* pfmul mm0, qword ptr [esp] */
/* ea5d7e: pfmul mm1, qword ptr [esp + 8] */
  guest_unsupported(0xea5d7e); /* pfmul mm1, qword ptr [esp + 8] */
/* ea5d84: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea5d87: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea5d8a: pfmul mm2, qword ptr [esp + 0x10] */
  guest_unsupported(0xea5d8a); /* pfmul mm2, qword ptr [esp + 0x10] */
/* ea5d90: pfmul mm3, qword ptr [esp + 0x18] */
  guest_unsupported(0xea5d90); /* pfmul mm3, qword ptr [esp + 0x18] */
/* ea5d96: pfmul mm4, qword ptr [esp + 0x20] */
  guest_unsupported(0xea5d96); /* pfmul mm4, qword ptr [esp + 0x20] */
/* ea5d9c: pfmul mm5, qword ptr [esp + 0x28] */
  guest_unsupported(0xea5d9c); /* pfmul mm5, qword ptr [esp + 0x28] */
/* ea5da2: pfmul mm6, qword ptr [esp + 0x30] */
  guest_unsupported(0xea5da2); /* pfmul mm6, qword ptr [esp + 0x30] */
/* ea5da8: pfmul mm7, qword ptr [esp + 0x38] */
  guest_unsupported(0xea5da8); /* pfmul mm7, qword ptr [esp + 0x38] */
/* ea5dae: pfacc mm0, mm2 */
  guest_unsupported(0xea5dae); /* pfacc mm0, mm2 */
/* ea5db2: pfacc mm1, mm3 */
  guest_unsupported(0xea5db2); /* pfacc mm1, mm3 */
/* ea5db6: pfacc mm4, mm6 */
  guest_unsupported(0xea5db6); /* pfacc mm4, mm6 */
/* ea5dba: pfacc mm5, mm7 */
  guest_unsupported(0xea5dba); /* pfacc mm5, mm7 */
/* ea5dbe: pfadd mm0, mm1 */
  guest_unsupported(0xea5dbe); /* pfadd mm0, mm1 */
/* ea5dc2: pfadd mm4, mm5 */
  guest_unsupported(0xea5dc2); /* pfadd mm4, mm5 */
/* ea5dc6: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea5dca: movq qword ptr [eax + 0x38], mm4 */
  W64((uint32_t)(eax + 0x38u), MMX[4]);
/* ea5dce: mov esp, ebp */
  esp = ebp;
/* ea5dd0: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ea5dd4: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5dd7: femms  */
  guest_unsupported(0xea5dd7); /* femms  */
/* ea5dd9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea5ddc(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5ddc: /* ea5ddc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea5de0: movq mm2, qword ptr [eax + 0x20] */
  MMX[2] = R64((uint32_t)(eax + 0x20u));
/* ea5de4: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea5de8: movq mm0, qword ptr [eax + 0x24] */
  MMX[0] = R64((uint32_t)(eax + 0x24u));
/* ea5dec: punpckhdq mm1, mm1 */
  guest_unsupported(0xea5dec); /* punpckhdq mm1, mm1 */
/* ea5def: punpckldq mm2, mm2 */
  guest_unsupported(0xea5def); /* punpckldq mm2, mm2 */
/* ea5df2: movq mm5, qword ptr [eax + 0x30] */
  MMX[5] = R64((uint32_t)(eax + 0x30u));
/* ea5df6: movq mm4, qword ptr [eax + 0x38] */
  MMX[4] = R64((uint32_t)(eax + 0x38u));
/* ea5dfa: movq mm3, qword ptr [eax + 0x34] */
  MMX[3] = R64((uint32_t)(eax + 0x34u));
/* ea5dfe: punpckhdq mm4, mm4 */
  guest_unsupported(0xea5dfe); /* punpckhdq mm4, mm4 */
/* ea5e01: punpckldq mm5, mm5 */
  guest_unsupported(0xea5e01); /* punpckldq mm5, mm5 */
/* ea5e04: pfmul mm4, mm0 */
  guest_unsupported(0xea5e04); /* pfmul mm4, mm0 */
/* ea5e08: pfmul mm1, mm3 */
  guest_unsupported(0xea5e08); /* pfmul mm1, mm3 */
/* ea5e0c: pfsub mm4, mm1 */
  guest_unsupported(0xea5e0c); /* pfsub mm4, mm1 */
/* ea5e10: pfmul mm2, qword ptr [eax + 0x38] */
  guest_unsupported(0xea5e10); /* pfmul mm2, qword ptr [eax + 0x38] */
/* ea5e15: pfmul mm5, qword ptr [eax + 0x28] */
  guest_unsupported(0xea5e15); /* pfmul mm5, qword ptr [eax + 0x28] */
/* ea5e1a: pfsub mm2, mm5 */
  guest_unsupported(0xea5e1a); /* pfsub mm2, mm5 */
/* ea5e1e: pfmul mm3, qword ptr [eax + 0x20] */
  guest_unsupported(0xea5e1e); /* pfmul mm3, qword ptr [eax + 0x20] */
/* ea5e23: pfmul mm0, qword ptr [eax + 0x30] */
  guest_unsupported(0xea5e23); /* pfmul mm0, qword ptr [eax + 0x30] */
/* ea5e28: pfsub mm3, mm0 */
  guest_unsupported(0xea5e28); /* pfsub mm3, mm0 */
/* ea5e2c: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* ea5e2f: punpckhdq mm0, mm0 */
  guest_unsupported(0xea5e2f); /* punpckhdq mm0, mm0 */
/* ea5e32: punpckldq mm0, mm4 */
  guest_unsupported(0xea5e32); /* punpckldq mm0, mm4 */
/* ea5e35: movq mm1, mm3 */
  MMX[1] = MMX[3];
/* ea5e38: punpckhdq mm1, mm4 */
  guest_unsupported(0xea5e38); /* punpckhdq mm1, mm4 */
/* ea5e3b: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea5e3e: punpckldq mm5, mm2 */
  guest_unsupported(0xea5e3e); /* punpckldq mm5, mm2 */
/* ea5e41: movq mm6, qword ptr [eax + 0x18] */
  MMX[6] = R64((uint32_t)(eax + 0x18u));
/* ea5e45: movq mm7, mm6 */
  MMX[7] = MMX[6];
/* ea5e48: punpckhdq mm6, mm6 */
  guest_unsupported(0xea5e48); /* punpckhdq mm6, mm6 */
/* ea5e4b: pfmul mm4, qword ptr [eax + 0x10] */
  guest_unsupported(0xea5e4b); /* pfmul mm4, qword ptr [eax + 0x10] */
/* ea5e50: pfmul mm3, mm6 */
  guest_unsupported(0xea5e50); /* pfmul mm3, mm6 */
/* ea5e54: pfadd mm4, mm3 */
  guest_unsupported(0xea5e54); /* pfadd mm4, mm3 */
/* ea5e58: movq mm3, qword ptr [eax + 0x14] */
  MMX[3] = R64((uint32_t)(eax + 0x14u));
/* ea5e5c: pfmul mm0, mm3 */
  guest_unsupported(0xea5e5c); /* pfmul mm0, mm3 */
/* ea5e60: pfsub mm4, mm0 */
  guest_unsupported(0xea5e60); /* pfsub mm4, mm0 */
/* ea5e64: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea5e68: punpckldq mm0, mm0 */
  guest_unsupported(0xea5e68); /* punpckldq mm0, mm0 */
/* ea5e6b: movq mm6, qword ptr [eax + 8] */
  MMX[6] = R64((uint32_t)(eax + 0x8u));
/* ea5e6f: punpckldq mm6, dword ptr [eax] */
  guest_unsupported(0xea5e6f); /* punpckldq mm6, dword ptr [eax] */
/* ea5e72: pfmul mm4, mm6 */
  guest_unsupported(0xea5e72); /* pfmul mm4, mm6 */
/* ea5e76: movq mm6, qword ptr [eax + 8] */
  MMX[6] = R64((uint32_t)(eax + 0x8u));
/* ea5e7a: punpckhdq mm6, qword ptr [eax] */
  guest_unsupported(0xea5e7a); /* punpckhdq mm6, qword ptr [eax] */
/* ea5e7d: pfmul mm5, mm7 */
  guest_unsupported(0xea5e7d); /* pfmul mm5, mm7 */
/* ea5e81: pfmul mm2, mm3 */
  guest_unsupported(0xea5e81); /* pfmul mm2, mm3 */
/* ea5e85: pfmul mm1, mm0 */
  guest_unsupported(0xea5e85); /* pfmul mm1, mm0 */
/* ea5e89: pfadd mm1, mm5 */
  guest_unsupported(0xea5e89); /* pfadd mm1, mm5 */
/* ea5e8d: pfsub mm1, mm2 */
  guest_unsupported(0xea5e8d); /* pfsub mm1, mm2 */
/* ea5e91: pfmul mm1, mm6 */
  guest_unsupported(0xea5e91); /* pfmul mm1, mm6 */
/* ea5e95: pfsub mm4, mm1 */
  guest_unsupported(0xea5e95); /* pfsub mm4, mm1 */
/* ea5e99: pfacc mm4, mm4 */
  guest_unsupported(0xea5e99); /* pfacc mm4, mm4 */
/* ea5e9d: movd dword ptr [esp + 4], mm4 */
  guest_unsupported(0xea5e9d); /* movd dword ptr [esp + 4], mm4 */
/* ea5ea2: femms  */
  guest_unsupported(0xea5ea2); /* femms  */
/* ea5ea4: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* ea5ea8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_ea5eab(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5eab: /* ea5eab: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea5eaf: femms  */
  guest_unsupported(0xea5eaf); /* femms  */
/* ea5eb1: movd mm4, dword ptr [esp + 0x10] */
  guest_unsupported(0xea5eb1); /* movd mm4, dword ptr [esp + 0x10] */
/* ea5eb6: movq mm1, qword ptr [0xeb3c60] */
  MMX[1] = R64((uint32_t)(0xeb3c60u));
/* ea5ebd: pxor mm0, mm0 */
  guest_unsupported(0xea5ebd); /* pxor mm0, mm0 */
/* ea5ec0: movq mm2, qword ptr [0xeb3c68] */
  MMX[2] = R64((uint32_t)(0xeb3c68u));
/* ea5ec7: movd mm3, dword ptr [esp + 8] */
  guest_unsupported(0xea5ec7); /* movd mm3, dword ptr [esp + 8] */
/* ea5ecc: movd mm5, dword ptr [esp + 0xc] */
  guest_unsupported(0xea5ecc); /* movd mm5, dword ptr [esp + 0xc] */
/* ea5ed1: punpckldq mm4, mm2 */
  guest_unsupported(0xea5ed1); /* punpckldq mm4, mm2 */
/* ea5ed4: punpckldq mm3, mm5 */
  guest_unsupported(0xea5ed4); /* punpckldq mm3, mm5 */
/* ea5ed7: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea5eda: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea5ede: movq qword ptr [eax + 0x10], mm1 */
  W64((uint32_t)(eax + 0x10u), MMX[1]);
/* ea5ee2: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea5ee6: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea5eea: movq qword ptr [eax + 0x28], mm2 */
  W64((uint32_t)(eax + 0x28u), MMX[2]);
/* ea5eee: movq qword ptr [eax + 0x30], mm3 */
  W64((uint32_t)(eax + 0x30u), MMX[3]);
/* ea5ef2: movq qword ptr [eax + 0x38], mm4 */
  W64((uint32_t)(eax + 0x38u), MMX[4]);
/* ea5ef6: femms  */
  guest_unsupported(0xea5ef6); /* femms  */
/* ea5ef8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea5efb(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5efb: /* ea5efb: femms  */
  guest_unsupported(0xea5efb); /* femms  */
/* ea5efd: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5f00: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ea5f04: mov ebp, esp */
  ebp = esp;
/* ea5f06: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea5f09: mov ecx, esp */
  ecx = esp;
/* ea5f0b: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* ea5f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea5f0f: call 0xeaace8 */
  esp -= 4; W32(esp, 0xea5f14u); SPILL(); f_eaace8(); if (g_unwind) return; RELOAD();
/* ea5f14: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea5f17: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ea5f1a: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea5f1e: movq mm1, qword ptr [ecx] */
  MMX[1] = R64((uint32_t)(ecx));
/* ea5f21: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea5f24: pfmul mm1, mm0 */
  guest_unsupported(0xea5f24); /* pfmul mm1, mm0 */
/* ea5f28: movq mm2, qword ptr [esp + 8] */
  MMX[2] = R64((uint32_t)(esp + 0x8u));
/* ea5f2d: movq mm3, qword ptr [ecx + 8] */
  MMX[3] = R64((uint32_t)(ecx + 0x8u));
/* ea5f31: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea5f34: pfmul mm3, mm2 */
  guest_unsupported(0xea5f34); /* pfmul mm3, mm2 */
/* ea5f38: pfadd mm1, mm3 */
  guest_unsupported(0xea5f38); /* pfadd mm1, mm3 */
/* ea5f3c: pxor mm0, qword ptr [0xeb3c70] */
  guest_unsupported(0xea5f3c); /* pxor mm0, qword ptr [0xeb3c70] */
/* ea5f43: pxor mm2, qword ptr [0xeb3c70] */
  guest_unsupported(0xea5f43); /* pxor mm2, qword ptr [0xeb3c70] */
/* ea5f4a: pfacc mm1, mm1 */
  guest_unsupported(0xea5f4a); /* pfacc mm1, mm1 */
/* ea5f4e: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5f51: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea5f54: punpckldq mm3, mm1 */
  guest_unsupported(0xea5f54); /* punpckldq mm3, mm1 */
/* ea5f57: psllq mm1, 0x20 */
  guest_unsupported(0xea5f57); /* psllq mm1, 0x20 */
/* ea5f5b: psrlq mm3, 0x20 */
  guest_unsupported(0xea5f5b); /* psrlq mm3, 0x20 */
/* ea5f5f: punpckldq mm4, mm4 */
  guest_unsupported(0xea5f5f); /* punpckldq mm4, mm4 */
/* ea5f62: punpckldq mm5, mm5 */
  guest_unsupported(0xea5f62); /* punpckldq mm5, mm5 */
/* ea5f65: pfmul mm4, mm6 */
  guest_unsupported(0xea5f65); /* pfmul mm4, mm6 */
/* ea5f69: pfmul mm5, mm7 */
  guest_unsupported(0xea5f69); /* pfmul mm5, mm7 */
/* ea5f6d: pfadd mm4, mm3 */
  guest_unsupported(0xea5f6d); /* pfadd mm4, mm3 */
/* ea5f71: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea5f74: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea5f78: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea5f7b: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea5f7e: punpckhdq mm4, mm4 */
  guest_unsupported(0xea5f7e); /* punpckhdq mm4, mm4 */
/* ea5f81: punpckhdq mm5, mm5 */
  guest_unsupported(0xea5f81); /* punpckhdq mm5, mm5 */
/* ea5f84: pfmul mm4, mm6 */
  guest_unsupported(0xea5f84); /* pfmul mm4, mm6 */
/* ea5f88: pfmul mm5, mm7 */
  guest_unsupported(0xea5f88); /* pfmul mm5, mm7 */
/* ea5f8c: pfadd mm4, mm1 */
  guest_unsupported(0xea5f8c); /* pfadd mm4, mm1 */
/* ea5f90: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea5f94: movq qword ptr [eax + 0x18], mm5 */
  W64((uint32_t)(eax + 0x18u), MMX[5]);
/* ea5f98: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5f9b: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* ea5f9e: punpckldq mm4, mm4 */
  guest_unsupported(0xea5f9e); /* punpckldq mm4, mm4 */
/* ea5fa1: punpckldq mm5, mm5 */
  guest_unsupported(0xea5fa1); /* punpckldq mm5, mm5 */
/* ea5fa4: pfmul mm4, mm6 */
  guest_unsupported(0xea5fa4); /* pfmul mm4, mm6 */
/* ea5fa8: pfmul mm5, mm7 */
  guest_unsupported(0xea5fa8); /* pfmul mm5, mm7 */
/* ea5fac: pfadd mm5, mm3 */
  guest_unsupported(0xea5fac); /* pfadd mm5, mm3 */
/* ea5fb0: movq qword ptr [eax + 0x20], mm4 */
  W64((uint32_t)(eax + 0x20u), MMX[4]);
/* ea5fb4: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea5fb8: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea5fbb: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* ea5fbe: punpckhdq mm4, mm4 */
  guest_unsupported(0xea5fbe); /* punpckhdq mm4, mm4 */
/* ea5fc1: punpckhdq mm5, mm5 */
  guest_unsupported(0xea5fc1); /* punpckhdq mm5, mm5 */
/* ea5fc4: pfmul mm4, mm6 */
  guest_unsupported(0xea5fc4); /* pfmul mm4, mm6 */
/* ea5fc8: pfmul mm5, mm7 */
  guest_unsupported(0xea5fc8); /* pfmul mm5, mm7 */
/* ea5fcc: pfadd mm5, mm1 */
  guest_unsupported(0xea5fcc); /* pfadd mm5, mm1 */
/* ea5fd0: movq qword ptr [eax + 0x30], mm4 */
  W64((uint32_t)(eax + 0x30u), MMX[4]);
/* ea5fd4: movq qword ptr [eax + 0x38], mm5 */
  W64((uint32_t)(eax + 0x38u), MMX[5]);
/* ea5fd8: mov esp, ebp */
  esp = ebp;
/* ea5fda: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ea5fde: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea5fe1: femms  */
  guest_unsupported(0xea5fe1); /* femms  */
/* ea5fe3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea5fe6(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea5fe6: /* ea5fe6: femms  */
  guest_unsupported(0xea5fe6); /* femms  */
/* ea5fe8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea5feb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ea5fef: mov ebp, esp */
  ebp = esp;
/* ea5ff1: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea5ff4: mov ecx, esp */
  ecx = esp;
/* ea5ff6: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* ea5ff9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea5ffa: call 0xeaace8 */
  esp -= 4; W32(esp, 0xea5fffu); SPILL(); f_eaace8(); if (g_unwind) return; RELOAD();
/* ea5fff: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* ea6002: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea6006: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea600b: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea600e: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea6011: pfmul mm0, qword ptr [0xeb3c78] */
  guest_unsupported(0xea6011); /* pfmul mm0, qword ptr [0xeb3c78] */
/* ea6019: pfmul mm1, qword ptr [0xeb3c80] */
  guest_unsupported(0xea6019); /* pfmul mm1, qword ptr [0xeb3c80] */
/* ea6021: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea6024: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea6027: punpckldq mm4, mm4 */
  guest_unsupported(0xea6027); /* punpckldq mm4, mm4 */
/* ea602a: punpckhdq mm6, mm6 */
  guest_unsupported(0xea602a); /* punpckhdq mm6, mm6 */
/* ea602d: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea6030: movq mm7, mm6 */
  MMX[7] = MMX[6];
/* ea6033: psrlq mm5, 0x20 */
  guest_unsupported(0xea6033); /* psrlq mm5, 0x20 */
/* ea6037: psrlq mm7, 0x20 */
  guest_unsupported(0xea6037); /* psrlq mm7, 0x20 */
/* ea603b: pfmul mm4, mm0 */
  guest_unsupported(0xea603b); /* pfmul mm4, mm0 */
/* ea603f: pfmul mm5, mm1 */
  guest_unsupported(0xea603f); /* pfmul mm5, mm1 */
/* ea6043: pfmul mm6, mm0 */
  guest_unsupported(0xea6043); /* pfmul mm6, mm0 */
/* ea6047: pfmul mm7, mm1 */
  guest_unsupported(0xea6047); /* pfmul mm7, mm1 */
/* ea604b: pfadd mm4, qword ptr [0xeb3c68] */
  guest_unsupported(0xea604b); /* pfadd mm4, qword ptr [0xeb3c68] */
/* ea6053: pfadd mm6, qword ptr [0xeb3c60] */
  guest_unsupported(0xea6053); /* pfadd mm6, qword ptr [0xeb3c60] */
/* ea605b: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea605e: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea6062: movq qword ptr [eax + 0x10], mm6 */
  W64((uint32_t)(eax + 0x10u), MMX[6]);
/* ea6066: movq qword ptr [eax + 0x18], mm7 */
  W64((uint32_t)(eax + 0x18u), MMX[7]);
/* ea606a: movq mm4, mm3 */
  MMX[4] = MMX[3];
/* ea606d: movq mm6, mm3 */
  MMX[6] = MMX[3];
/* ea6070: punpckldq mm4, mm4 */
  guest_unsupported(0xea6070); /* punpckldq mm4, mm4 */
/* ea6073: punpckhdq mm6, mm6 */
  guest_unsupported(0xea6073); /* punpckhdq mm6, mm6 */
/* ea6076: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea6079: movq mm7, mm6 */
  MMX[7] = MMX[6];
/* ea607c: psrlq mm5, 0x20 */
  guest_unsupported(0xea607c); /* psrlq mm5, 0x20 */
/* ea6080: psrlq mm7, 0x20 */
  guest_unsupported(0xea6080); /* psrlq mm7, 0x20 */
/* ea6084: pfmul mm4, mm0 */
  guest_unsupported(0xea6084); /* pfmul mm4, mm0 */
/* ea6088: pfmul mm5, mm1 */
  guest_unsupported(0xea6088); /* pfmul mm5, mm1 */
/* ea608c: pfmul mm6, mm0 */
  guest_unsupported(0xea608c); /* pfmul mm6, mm0 */
/* ea6090: pfmul mm7, mm1 */
  guest_unsupported(0xea6090); /* pfmul mm7, mm1 */
/* ea6094: pfadd mm5, qword ptr [0xeb3c68] */
  guest_unsupported(0xea6094); /* pfadd mm5, qword ptr [0xeb3c68] */
/* ea609c: pfadd mm7, qword ptr [0xeb3c60] */
  guest_unsupported(0xea609c); /* pfadd mm7, qword ptr [0xeb3c60] */
/* ea60a4: movq qword ptr [eax + 0x20], mm4 */
  W64((uint32_t)(eax + 0x20u), MMX[4]);
/* ea60a8: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea60ac: movq qword ptr [eax + 0x30], mm6 */
  W64((uint32_t)(eax + 0x30u), MMX[6]);
/* ea60b0: movq qword ptr [eax + 0x38], mm7 */
  W64((uint32_t)(eax + 0x38u), MMX[7]);
/* ea60b4: mov esp, ebp */
  esp = ebp;
/* ea60b6: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* ea60ba: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea60bd: femms  */
  guest_unsupported(0xea60bd); /* femms  */
/* ea60bf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea60c2(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea60c2: /* ea60c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea60c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea60c4: femms  */
  guest_unsupported(0xea60c4); /* femms  */
/* ea60c6: movd mm0, dword ptr [esp + 0x10] */
  guest_unsupported(0xea60c6); /* movd mm0, dword ptr [esp + 0x10] */
/* ea60cb: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea60d0u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea60d0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ea60d4: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea60d7: pxor mm1, mm1 */
  guest_unsupported(0xea60d7); /* pxor mm1, mm1 */
/* ea60da: movq mm2, qword ptr [0xeb3c68] */
  MMX[2] = R64((uint32_t)(0xeb3c68u));
/* ea60e1: movq mm3, qword ptr [0xeb3c60] */
  MMX[3] = R64((uint32_t)(0xeb3c60u));
/* ea60e8: psrlq mm4, 0x20 */
  guest_unsupported(0xea60e8); /* psrlq mm4, 0x20 */
/* ea60ec: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea60ef: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea60f3: movd dword ptr [eax + 0x10], mm1 */
  guest_unsupported(0xea60f3); /* movd dword ptr [eax + 0x10], mm1 */
/* ea60f7: movd dword ptr [eax + 0x14], mm0 */
  guest_unsupported(0xea60f7); /* movd dword ptr [eax + 0x14], mm0 */
/* ea60fb: movq qword ptr [eax + 0x18], mm4 */
  W64((uint32_t)(eax + 0x18u), MMX[4]);
/* ea60ff: pxor mm4, qword ptr [0xeb3c18] */
  guest_unsupported(0xea60ff); /* pxor mm4, qword ptr [0xeb3c18] */
/* ea6106: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea610a: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea610e: movd dword ptr [eax + 0x20], mm1 */
  guest_unsupported(0xea610e); /* movd dword ptr [eax + 0x20], mm1 */
/* ea6112: movd dword ptr [eax + 0x24], mm4 */
  guest_unsupported(0xea6112); /* movd dword ptr [eax + 0x24], mm4 */
/* ea6116: movd dword ptr [eax + 0x28], mm0 */
  guest_unsupported(0xea6116); /* movd dword ptr [eax + 0x28], mm0 */
/* ea611a: movd dword ptr [eax + 0x2c], mm1 */
  guest_unsupported(0xea611a); /* movd dword ptr [eax + 0x2c], mm1 */
/* ea611e: femms  */
  guest_unsupported(0xea611e); /* femms  */
/* ea6120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea6121: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea6122: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea6125(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea6125: /* ea6125: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea6126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea6127: femms  */
  guest_unsupported(0xea6127); /* femms  */
/* ea6129: movd mm0, dword ptr [esp + 0x10] */
  guest_unsupported(0xea6129); /* movd mm0, dword ptr [esp + 0x10] */
/* ea612e: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea6133u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea6133: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ea6137: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea613a: pand mm0, qword ptr [0xeb3bf0] */
  guest_unsupported(0xea613a); /* pand mm0, qword ptr [0xeb3bf0] */
/* ea6141: pxor mm1, mm1 */
  guest_unsupported(0xea6141); /* pxor mm1, mm1 */
/* ea6144: movq mm2, qword ptr [0xeb3c68] */
  MMX[2] = R64((uint32_t)(0xeb3c68u));
/* ea614b: movq mm3, qword ptr [0xeb3c60] */
  MMX[3] = R64((uint32_t)(0xeb3c60u));
/* ea6152: psrlq mm4, 0x20 */
  guest_unsupported(0xea6152); /* psrlq mm4, 0x20 */
/* ea6156: movq qword ptr [eax + 0x10], mm3 */
  W64((uint32_t)(eax + 0x10u), MMX[3]);
/* ea615a: movq qword ptr [eax + 0x18], mm1 */
  W64((uint32_t)(eax + 0x18u), MMX[1]);
/* ea615e: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea6162: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea6166: movq qword ptr [eax + 0x20], mm4 */
  W64((uint32_t)(eax + 0x20u), MMX[4]);
/* ea616a: pxor mm4, qword ptr [0xeb3c18] */
  guest_unsupported(0xea616a); /* pxor mm4, qword ptr [0xeb3c18] */
/* ea6171: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea6174: movq qword ptr [eax + 0x28], mm0 */
  W64((uint32_t)(eax + 0x28u), MMX[0]);
/* ea6178: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* ea617c: femms  */
  guest_unsupported(0xea617c); /* femms  */
/* ea617e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea617f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea6180: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea6183(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea6183: /* ea6183: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea6184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea6185: femms  */
  guest_unsupported(0xea6185); /* femms  */
/* ea6187: movd mm0, dword ptr [esp + 0x10] */
  guest_unsupported(0xea6187); /* movd mm0, dword ptr [esp + 0x10] */
/* ea618c: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea6191u); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea6191: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ea6195: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea6198: punpckhdq mm4, mm4 */
  guest_unsupported(0xea6198); /* punpckhdq mm4, mm4 */
/* ea619b: pxor mm1, mm1 */
  guest_unsupported(0xea619b); /* pxor mm1, mm1 */
/* ea619e: movq mm2, qword ptr [0xeb3c68] */
  MMX[2] = R64((uint32_t)(0xeb3c68u));
/* ea61a5: movq mm3, qword ptr [0xeb3c60] */
  MMX[3] = R64((uint32_t)(0xeb3c60u));
/* ea61ac: punpckldq mm4, mm0 */
  guest_unsupported(0xea61ac); /* punpckldq mm4, mm0 */
/* ea61af: pxor mm4, qword ptr [0xeb3c18] */
  guest_unsupported(0xea61af); /* pxor mm4, qword ptr [0xeb3c18] */
/* ea61b6: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea61b9: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea61bd: movq qword ptr [eax + 0x18], mm1 */
  W64((uint32_t)(eax + 0x18u), MMX[1]);
/* ea61c1: movq qword ptr [eax + 0x20], mm1 */
  W64((uint32_t)(eax + 0x20u), MMX[1]);
/* ea61c5: movq qword ptr [eax + 0x28], mm2 */
  W64((uint32_t)(eax + 0x28u), MMX[2]);
/* ea61c9: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea61cd: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea61d1: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea61d5: femms  */
  guest_unsupported(0xea61d5); /* femms  */
/* ea61d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea61d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea61d9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea61dc(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea61dc: /* ea61dc: femms  */
  guest_unsupported(0xea61dc); /* femms  */
/* ea61de: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea61e2: movd mm3, dword ptr [esp + 0xc] */
  guest_unsupported(0xea61e2); /* movd mm3, dword ptr [esp + 0xc] */
/* ea61e7: movq mm1, qword ptr [0xeb3c60] */
  MMX[1] = R64((uint32_t)(0xeb3c60u));
/* ea61ee: movd mm2, dword ptr [esp + 8] */
  guest_unsupported(0xea61ee); /* movd mm2, dword ptr [esp + 8] */
/* ea61f3: pxor mm0, mm0 */
  guest_unsupported(0xea61f3); /* pxor mm0, mm0 */
/* ea61f6: psllq mm3, 0x20 */
  guest_unsupported(0xea61f6); /* psllq mm3, 0x20 */
/* ea61fa: movd mm4, dword ptr [esp + 0x10] */
  guest_unsupported(0xea61fa); /* movd mm4, dword ptr [esp + 0x10] */
/* ea61ff: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea6202: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea6206: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea620a: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea620e: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea6212: movq qword ptr [eax + 0x10], mm3 */
  W64((uint32_t)(eax + 0x10u), MMX[3]);
/* ea6216: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea621a: movq qword ptr [eax + 0x38], mm1 */
  W64((uint32_t)(eax + 0x38u), MMX[1]);
/* ea621e: femms  */
  guest_unsupported(0xea621e); /* femms  */
/* ea6220: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea6223(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea6223: /* ea6223: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea6227: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea622a: movq mm1, qword ptr [edx + 0x10] */
  MMX[1] = R64((uint32_t)(edx + 0x10u));
/* ea622e: movq mm3, qword ptr [edx + 0x28] */
  MMX[3] = R64((uint32_t)(edx + 0x28u));
/* ea6232: movq mm4, qword ptr [edx + 0x38] */
  MMX[4] = R64((uint32_t)(edx + 0x38u));
/* ea6236: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea6239: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea623d: punpckldq mm0, mm1 */
  guest_unsupported(0xea623d); /* punpckldq mm0, mm1 */
/* ea6240: punpckhdq mm2, mm1 */
  guest_unsupported(0xea6240); /* punpckhdq mm2, mm1 */
/* ea6243: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea6246: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea6249: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea624d: movq mm6, qword ptr [edx + 8] */
  MMX[6] = R64((uint32_t)(edx + 0x8u));
/* ea6251: punpckldq mm3, mm4 */
  guest_unsupported(0xea6251); /* punpckldq mm3, mm4 */
/* ea6254: movq mm7, qword ptr [edx + 0x18] */
  MMX[7] = R64((uint32_t)(edx + 0x18u));
/* ea6258: movq mm0, qword ptr [edx + 0x20] */
  MMX[0] = R64((uint32_t)(edx + 0x20u));
/* ea625c: punpckhdq mm5, mm4 */
  guest_unsupported(0xea625c); /* punpckhdq mm5, mm4 */
/* ea625f: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea6262: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6266: movq qword ptr [eax + 0x38], mm5 */
  W64((uint32_t)(eax + 0x38u), MMX[5]);
/* ea626a: punpckldq mm6, mm7 */
  guest_unsupported(0xea626a); /* punpckldq mm6, mm7 */
/* ea626d: movq mm4, qword ptr [edx + 0x30] */
  MMX[4] = R64((uint32_t)(edx + 0x30u));
/* ea6271: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea6274: punpckhdq mm1, mm7 */
  guest_unsupported(0xea6274); /* punpckhdq mm1, mm7 */
/* ea6277: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea627b: punpckhdq mm0, mm4 */
  guest_unsupported(0xea627b); /* punpckhdq mm0, mm4 */
/* ea627e: punpckldq mm2, mm4 */
  guest_unsupported(0xea627e); /* punpckldq mm2, mm4 */
/* ea6281: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea6285: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea6289: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea628d: femms  */
  guest_unsupported(0xea628d); /* femms  */
/* ea628f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea6292(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea6292: /* ea6292: movd mm1, dword ptr [0xeb3b90] */
  guest_unsupported(0xea6292); /* movd mm1, dword ptr [0xeb3b90] */
/* ea6299: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea629d: pxor mm0, mm0 */
  guest_unsupported(0xea629d); /* pxor mm0, mm0 */
/* ea62a0: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea62a3: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea62a6: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea62aa: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea62ae: punpckhdq mm2, mm2 */
  guest_unsupported(0xea62ae); /* punpckhdq mm2, mm2 */
/* ea62b1: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea62b5: movq qword ptr [eax + 0x28], mm1 */
  W64((uint32_t)(eax + 0x28u), MMX[1]);
/* ea62b9: punpckldq mm2, mm1 */
  guest_unsupported(0xea62b9); /* punpckldq mm2, mm1 */
/* ea62bc: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea62c0: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea62c4: movq qword ptr [eax + 0x38], mm2 */
  W64((uint32_t)(eax + 0x38u), MMX[2]);
/* ea62c8: femms  */
  guest_unsupported(0xea62c8); /* femms  */
/* ea62ca: ret  */
  esp += 4; SPILL(); return;
}

void f_ea62cb(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea62cb: /* ea62cb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea62cf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ea62d3: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea62d6: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea62da: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea62dd: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea62e0: pfadd mm0, mm0 */
  guest_unsupported(0xea62e0); /* pfadd mm0, mm0 */
/* ea62e4: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea62e7: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea62ea: pfadd mm1, mm1 */
  guest_unsupported(0xea62ea); /* pfadd mm1, mm1 */
/* ea62ee: punpckhdq mm2, mm2 */
  guest_unsupported(0xea62ee); /* punpckhdq mm2, mm2 */
/* ea62f1: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea62f4: punpckhdq mm4, mm4 */
  guest_unsupported(0xea62f4); /* punpckhdq mm4, mm4 */
/* ea62f7: pfmul mm3, mm0 */
  guest_unsupported(0xea62f7); /* pfmul mm3, mm0 */
/* ea62fb: punpckldq mm1, mm0 */
  guest_unsupported(0xea62fb); /* punpckldq mm1, mm0 */
/* ea62fe: punpckldq mm7, mm7 */
  guest_unsupported(0xea62fe); /* punpckldq mm7, mm7 */
/* ea6301: pfmul mm5, mm4 */
  guest_unsupported(0xea6301); /* pfmul mm5, mm4 */
/* ea6305: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea6308: pfmul mm7, mm1 */
  guest_unsupported(0xea6308); /* pfmul mm7, mm1 */
/* ea630c: pfmul mm1, mm2 */
  guest_unsupported(0xea630c); /* pfmul mm1, mm2 */
/* ea6310: pxor mm0, mm0 */
  guest_unsupported(0xea6310); /* pxor mm0, mm0 */
/* ea6313: pfmul mm6, mm4 */
  guest_unsupported(0xea6313); /* pfmul mm6, mm4 */
/* ea6317: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea631a: punpckhdq mm1, mm7 */
  guest_unsupported(0xea631a); /* punpckhdq mm1, mm7 */
/* ea631d: punpckldq mm7, mm7 */
  guest_unsupported(0xea631d); /* punpckldq mm7, mm7 */
/* ea6320: punpckldq mm6, mm6 */
  guest_unsupported(0xea6320); /* punpckldq mm6, mm6 */
/* ea6323: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea6327: pfadd mm7, mm3 */
  guest_unsupported(0xea6327); /* pfadd mm7, mm3 */
/* ea632b: pfacc mm3, mm3 */
  guest_unsupported(0xea632b); /* pfacc mm3, mm3 */
/* ea632f: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea6332: punpckhdq mm6, mm5 */
  guest_unsupported(0xea6332); /* punpckhdq mm6, mm5 */
/* ea6335: pfsubr mm3, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea6335); /* pfsubr mm3, qword ptr [0xeb3ba0] */
/* ea633d: pfsubr mm7, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea633d); /* pfsubr mm7, qword ptr [0xeb3ba0] */
/* ea6345: punpckldq mm3, mm0 */
  guest_unsupported(0xea6345); /* punpckldq mm3, mm0 */
/* ea6348: pfadd mm1, mm6 */
  guest_unsupported(0xea6348); /* pfadd mm1, mm6 */
/* ea634c: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6350: pfsub mm4, mm6 */
  guest_unsupported(0xea6350); /* pfsub mm4, mm6 */
/* ea6354: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea6357: pfadd mm2, mm5 */
  guest_unsupported(0xea6357); /* pfadd mm2, mm5 */
/* ea635b: pfsub mm3, mm5 */
  guest_unsupported(0xea635b); /* pfsub mm3, mm5 */
/* ea635f: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea6362: punpckldq mm2, mm0 */
  guest_unsupported(0xea6362); /* punpckldq mm2, mm0 */
/* ea6365: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea6368: punpckldq mm4, mm7 */
  guest_unsupported(0xea6368); /* punpckldq mm4, mm7 */
/* ea636b: punpckldq mm1, mm1 */
  guest_unsupported(0xea636b); /* punpckldq mm1, mm1 */
/* ea636e: movq qword ptr [eax + 0x18], mm2 */
  W64((uint32_t)(eax + 0x18u), MMX[2]);
/* ea6372: punpckhdq mm5, mm0 */
  guest_unsupported(0xea6372); /* punpckhdq mm5, mm0 */
/* ea6375: punpckldq mm0, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea6375); /* punpckldq mm0, dword ptr [0xeb3ba0] */
/* ea637c: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea6380: punpckhdq mm6, mm6 */
  guest_unsupported(0xea6380); /* punpckhdq mm6, mm6 */
/* ea6383: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea6387: punpckhdq mm7, mm1 */
  guest_unsupported(0xea6387); /* punpckhdq mm7, mm1 */
/* ea638a: punpckldq mm6, mm3 */
  guest_unsupported(0xea638a); /* punpckldq mm6, mm3 */
/* ea638d: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea6390: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea6394: movq qword ptr [eax + 0x38], mm0 */
  W64((uint32_t)(eax + 0x38u), MMX[0]);
/* ea6398: femms  */
  guest_unsupported(0xea6398); /* femms  */
/* ea639a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea639d(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea639d: /* ea639d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea63a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ea63a5: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea63a8: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea63ac: pswapd mm3, mm0 */
  guest_unsupported(0xea63ac); /* pswapd mm3, mm0 */
/* ea63b0: movq mm6, mm0 */
  MMX[6] = MMX[0];
/* ea63b3: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea63b6: pfadd mm0, mm0 */
  guest_unsupported(0xea63b6); /* pfadd mm0, mm0 */
/* ea63ba: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea63bd: punpckhdq mm6, mm1 */
  guest_unsupported(0xea63bd); /* punpckhdq mm6, mm1 */
/* ea63c0: pfadd mm1, mm1 */
  guest_unsupported(0xea63c0); /* pfadd mm1, mm1 */
/* ea63c4: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea63c7: pfmul mm0, mm2 */
  guest_unsupported(0xea63c7); /* pfmul mm0, mm2 */
/* ea63cb: punpckldq mm5, mm1 */
  guest_unsupported(0xea63cb); /* punpckldq mm5, mm1 */
/* ea63ce: pfmul mm2, mm1 */
  guest_unsupported(0xea63ce); /* pfmul mm2, mm1 */
/* ea63d2: pfmul mm3, mm1 */
  guest_unsupported(0xea63d2); /* pfmul mm3, mm1 */
/* ea63d6: pfmul mm1, mm4 */
  guest_unsupported(0xea63d6); /* pfmul mm1, mm4 */
/* ea63da: pfmul mm6, mm5 */
  guest_unsupported(0xea63da); /* pfmul mm6, mm5 */
/* ea63de: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea63e1: pfsubr mm0, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea63e1); /* pfsubr mm0, qword ptr [0xeb3ba0] */
/* ea63e9: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea63ec: punpckldq mm1, mm1 */
  guest_unsupported(0xea63ec); /* punpckldq mm1, mm1 */
/* ea63ef: pfpnacc mm3, mm3 */
  guest_unsupported(0xea63ef); /* pfpnacc mm3, mm3 */
/* ea63f3: pfacc mm4, mm4 */
  guest_unsupported(0xea63f3); /* pfacc mm4, mm4 */
/* ea63f7: pfpnacc mm6, mm6 */
  guest_unsupported(0xea63f7); /* pfpnacc mm6, mm6 */
/* ea63fb: pfpnacc mm2, mm2 */
  guest_unsupported(0xea63fb); /* pfpnacc mm2, mm2 */
/* ea63ff: pfsub mm0, mm1 */
  guest_unsupported(0xea63ff); /* pfsub mm0, mm1 */
/* ea6403: pswapd mm5, mm2 */
  guest_unsupported(0xea6403); /* pswapd mm5, mm2 */
/* ea6407: pfsubr mm4, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea6407); /* pfsubr mm4, qword ptr [0xeb3ba0] */
/* ea640f: pxor mm7, mm7 */
  guest_unsupported(0xea640f); /* pxor mm7, mm7 */
/* ea6412: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea6415: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea6419: punpckldq mm5, mm3 */
  guest_unsupported(0xea6419); /* punpckldq mm5, mm3 */
/* ea641c: punpckldq mm2, mm7 */
  guest_unsupported(0xea641c); /* punpckldq mm2, mm7 */
/* ea641f: punpckhdq mm4, mm7 */
  guest_unsupported(0xea641f); /* punpckhdq mm4, mm7 */
/* ea6422: punpckhdq mm0, mm6 */
  guest_unsupported(0xea6422); /* punpckhdq mm0, mm6 */
/* ea6425: movq qword ptr [eax + 0x20], mm5 */
  W64((uint32_t)(eax + 0x20u), MMX[5]);
/* ea6429: punpckhdq mm3, mm7 */
  guest_unsupported(0xea6429); /* punpckhdq mm3, mm7 */
/* ea642c: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea6430: punpckldq mm6, mm1 */
  guest_unsupported(0xea6430); /* punpckldq mm6, mm1 */
/* ea6433: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea6437: punpckldq mm7, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea6437); /* punpckldq mm7, dword ptr [0xeb3ba0] */
/* ea643e: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea6441: movq qword ptr [eax + 0x10], mm6 */
  W64((uint32_t)(eax + 0x10u), MMX[6]);
/* ea6445: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6449: movq qword ptr [eax + 0x38], mm7 */
  W64((uint32_t)(eax + 0x38u), MMX[7]);
/* ea644d: femms  */
  guest_unsupported(0xea644d); /* femms  */
/* ea644f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea6452(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea6452: /* ea6452: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea6453: mov ebp, esp */
  ebp = esp;
/* ea6455: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea645b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea645e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea6461: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea6464: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea6466: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea6469: je 0xea70b7 */
  if (zf) goto L_ea70b7;
L_ea646f: /* ea646f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea6471: je 0xea7079 */
  if (zf) goto L_ea7079;
L_ea6477: /* ea6477: movq mm1, qword ptr [0xeb3b80] */
  MMX[1] = R64((uint32_t)(0xeb3b80u));
/* ea647e: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea6481: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea6481); /* movd mm4, dword ptr [edx + 8] */
/* ea6485: pxor mm5, mm5 */
  guest_unsupported(0xea6485); /* pxor mm5, mm5 */
/* ea6488: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea648b: punpckldq mm2, mm5 */
  guest_unsupported(0xea648b); /* punpckldq mm2, mm5 */
/* ea648e: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* ea6491: punpckhdq mm5, mm3 */
  guest_unsupported(0xea6491); /* punpckhdq mm5, mm3 */
/* ea6494: movq qword ptr [esp], mm2 */
  W64((uint32_t)(esp), MMX[2]);
/* ea6498: movq qword ptr [esp + 8], mm0 */
  W64((uint32_t)(esp + 0x8u), MMX[0]);
/* ea649d: movq qword ptr [esp + 0x10], mm5 */
  W64((uint32_t)(esp + 0x10u), MMX[5]);
/* ea64a2: movq qword ptr [esp + 0x18], mm0 */
  W64((uint32_t)(esp + 0x18u), MMX[0]);
/* ea64a7: movq qword ptr [esp + 0x20], mm0 */
  W64((uint32_t)(esp + 0x20u), MMX[0]);
/* ea64ac: movq qword ptr [esp + 0x28], mm4 */
  W64((uint32_t)(esp + 0x28u), MMX[4]);
/* ea64b1: movq qword ptr [esp + 0x30], mm0 */
  W64((uint32_t)(esp + 0x30u), MMX[0]);
/* ea64b6: movq qword ptr [esp + 0x38], mm1 */
  W64((uint32_t)(esp + 0x38u), MMX[1]);
/* ea64bb: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* ea64bf: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea64c2: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea64c6: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea64c9: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea64cc: pfadd mm0, mm0 */
  guest_unsupported(0xea64cc); /* pfadd mm0, mm0 */
/* ea64d0: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea64d3: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea64d6: pfadd mm1, mm1 */
  guest_unsupported(0xea64d6); /* pfadd mm1, mm1 */
/* ea64da: punpckhdq mm2, mm2 */
  guest_unsupported(0xea64da); /* punpckhdq mm2, mm2 */
/* ea64dd: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea64e0: punpckhdq mm4, mm4 */
  guest_unsupported(0xea64e0); /* punpckhdq mm4, mm4 */
/* ea64e3: pfmul mm3, mm0 */
  guest_unsupported(0xea64e3); /* pfmul mm3, mm0 */
/* ea64e7: punpckldq mm1, mm0 */
  guest_unsupported(0xea64e7); /* punpckldq mm1, mm0 */
/* ea64ea: punpckldq mm7, mm7 */
  guest_unsupported(0xea64ea); /* punpckldq mm7, mm7 */
/* ea64ed: pfmul mm5, mm4 */
  guest_unsupported(0xea64ed); /* pfmul mm5, mm4 */
/* ea64f1: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea64f4: pfmul mm7, mm1 */
  guest_unsupported(0xea64f4); /* pfmul mm7, mm1 */
/* ea64f8: pfmul mm1, mm2 */
  guest_unsupported(0xea64f8); /* pfmul mm1, mm2 */
/* ea64fc: pxor mm0, mm0 */
  guest_unsupported(0xea64fc); /* pxor mm0, mm0 */
/* ea64ff: pfmul mm6, mm4 */
  guest_unsupported(0xea64ff); /* pfmul mm6, mm4 */
/* ea6503: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea6506: punpckhdq mm1, mm7 */
  guest_unsupported(0xea6506); /* punpckhdq mm1, mm7 */
/* ea6509: punpckldq mm7, mm7 */
  guest_unsupported(0xea6509); /* punpckldq mm7, mm7 */
/* ea650c: punpckldq mm6, mm6 */
  guest_unsupported(0xea650c); /* punpckldq mm6, mm6 */
/* ea650f: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea6513: pfadd mm7, mm3 */
  guest_unsupported(0xea6513); /* pfadd mm7, mm3 */
/* ea6517: pfacc mm3, mm3 */
  guest_unsupported(0xea6517); /* pfacc mm3, mm3 */
/* ea651b: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea651e: punpckhdq mm6, mm5 */
  guest_unsupported(0xea651e); /* punpckhdq mm6, mm5 */
/* ea6521: pfsubr mm3, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea6521); /* pfsubr mm3, qword ptr [0xeb3ba0] */
/* ea6529: pfsubr mm7, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea6529); /* pfsubr mm7, qword ptr [0xeb3ba0] */
/* ea6531: punpckldq mm3, mm0 */
  guest_unsupported(0xea6531); /* punpckldq mm3, mm0 */
/* ea6534: pfadd mm1, mm6 */
  guest_unsupported(0xea6534); /* pfadd mm1, mm6 */
/* ea6538: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea653c: pfsub mm4, mm6 */
  guest_unsupported(0xea653c); /* pfsub mm4, mm6 */
/* ea6540: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea6543: pfadd mm2, mm5 */
  guest_unsupported(0xea6543); /* pfadd mm2, mm5 */
/* ea6547: pfsub mm3, mm5 */
  guest_unsupported(0xea6547); /* pfsub mm3, mm5 */
/* ea654b: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea654e: punpckldq mm2, mm0 */
  guest_unsupported(0xea654e); /* punpckldq mm2, mm0 */
/* ea6551: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea6554: punpckldq mm4, mm7 */
  guest_unsupported(0xea6554); /* punpckldq mm4, mm7 */
/* ea6557: punpckldq mm1, mm1 */
  guest_unsupported(0xea6557); /* punpckldq mm1, mm1 */
/* ea655a: movq qword ptr [eax + 0x18], mm2 */
  W64((uint32_t)(eax + 0x18u), MMX[2]);
/* ea655e: punpckhdq mm5, mm0 */
  guest_unsupported(0xea655e); /* punpckhdq mm5, mm0 */
/* ea6561: punpckldq mm0, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea6561); /* punpckldq mm0, dword ptr [0xeb3ba0] */
/* ea6568: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea656c: punpckhdq mm6, mm6 */
  guest_unsupported(0xea656c); /* punpckhdq mm6, mm6 */
/* ea656f: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea6573: punpckhdq mm7, mm1 */
  guest_unsupported(0xea6573); /* punpckhdq mm7, mm1 */
/* ea6576: punpckldq mm6, mm3 */
  guest_unsupported(0xea6576); /* punpckldq mm6, mm3 */
/* ea6579: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea657c: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea6580: movq qword ptr [eax + 0x38], mm0 */
  W64((uint32_t)(eax + 0x38u), MMX[0]);
/* ea6584: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ea6587: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea6589: je 0xea6c61 */
  if (zf) goto L_ea6c61;
L_ea658f: /* ea658f: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea6594: movq mm1, qword ptr [esp + 0x50] */
  MMX[1] = R64((uint32_t)(esp + 0x50u));
/* ea6599: movq mm3, qword ptr [esp + 0x68] */
  MMX[3] = R64((uint32_t)(esp + 0x68u));
/* ea659e: movq mm4, qword ptr [esp + 0x78] */
  MMX[4] = R64((uint32_t)(esp + 0x78u));
/* ea65a3: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea65a6: punpckldq mm0, mm1 */
  guest_unsupported(0xea65a6); /* punpckldq mm0, mm1 */
/* ea65a9: punpckhdq mm2, mm1 */
  guest_unsupported(0xea65a9); /* punpckhdq mm2, mm1 */
/* ea65ac: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea65af: movq qword ptr [esp + 0x80], mm0 */
  W64((uint32_t)(esp + 0x80u), MMX[0]);
/* ea65b7: movq qword ptr [esp + 0x90], mm2 */
  W64((uint32_t)(esp + 0x90u), MMX[2]);
/* ea65bf: movq mm6, qword ptr [esp + 0x48] */
  MMX[6] = R64((uint32_t)(esp + 0x48u));
/* ea65c4: punpckldq mm3, mm4 */
  guest_unsupported(0xea65c4); /* punpckldq mm3, mm4 */
/* ea65c7: movq mm7, qword ptr [esp + 0x58] */
  MMX[7] = R64((uint32_t)(esp + 0x58u));
/* ea65cc: movq mm0, qword ptr [esp + 0x60] */
  MMX[0] = R64((uint32_t)(esp + 0x60u));
/* ea65d1: punpckhdq mm5, mm4 */
  guest_unsupported(0xea65d1); /* punpckhdq mm5, mm4 */
/* ea65d4: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea65d7: movq qword ptr [esp + 0xa8], mm3 */
  W64((uint32_t)(esp + 0xa8u), MMX[3]);
/* ea65df: movq qword ptr [esp + 0xb8], mm5 */
  W64((uint32_t)(esp + 0xb8u), MMX[5]);
/* ea65e7: punpckldq mm6, mm7 */
  guest_unsupported(0xea65e7); /* punpckldq mm6, mm7 */
/* ea65ea: movq mm4, qword ptr [esp + 0x70] */
  MMX[4] = R64((uint32_t)(esp + 0x70u));
/* ea65ef: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea65f2: punpckhdq mm1, mm7 */
  guest_unsupported(0xea65f2); /* punpckhdq mm1, mm7 */
/* ea65f5: movq qword ptr [esp + 0xa0], mm6 */
  W64((uint32_t)(esp + 0xa0u), MMX[6]);
/* ea65fd: punpckhdq mm0, mm4 */
  guest_unsupported(0xea65fd); /* punpckhdq mm0, mm4 */
/* ea6600: punpckldq mm2, mm4 */
  guest_unsupported(0xea6600); /* punpckldq mm2, mm4 */
/* ea6603: movq qword ptr [esp + 0xb0], mm1 */
  W64((uint32_t)(esp + 0xb0u), MMX[1]);
/* ea660b: movq qword ptr [esp + 0x98], mm0 */
  W64((uint32_t)(esp + 0x98u), MMX[0]);
/* ea6613: movq qword ptr [esp + 0x88], mm2 */
  W64((uint32_t)(esp + 0x88u), MMX[2]);
/* ea661b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea661e: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* ea6621: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea6621); /* movd mm4, dword ptr [edx + 8] */
/* ea6625: movd mm1, dword ptr [0xeb3b90] */
  guest_unsupported(0xea6625); /* movd mm1, dword ptr [0xeb3b90] */
/* ea662c: pxor mm0, mm0 */
  guest_unsupported(0xea662c); /* pxor mm0, mm0 */
/* ea662f: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea6632: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6632); /* punpckhdq mm2, mm2 */
/* ea6635: punpckldq mm2, mm1 */
  guest_unsupported(0xea6635); /* punpckldq mm2, mm1 */
/* ea6638: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea663b: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea663f: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea6643: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea6647: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea664b: movq qword ptr [eax + 0x28], mm1 */
  W64((uint32_t)(eax + 0x28u), MMX[1]);
/* ea664f: pfsub mm2, mm4 */
  guest_unsupported(0xea664f); /* pfsub mm2, mm4 */
/* ea6653: pfsub mm0, mm3 */
  guest_unsupported(0xea6653); /* pfsub mm0, mm3 */
/* ea6657: movq qword ptr [eax + 0x38], mm2 */
  W64((uint32_t)(eax + 0x38u), MMX[2]);
/* ea665b: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea665f: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea6662: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea6666: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea666e: punpckhdq mm2, mm0 */
  guest_unsupported(0xea666e); /* punpckhdq mm2, mm0 */
/* ea6671: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea6679: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6679); /* punpckhdq mm3, mm1 */
/* ea667c: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea6684: punpckldq mm0, mm0 */
  guest_unsupported(0xea6684); /* punpckldq mm0, mm0 */
/* ea6687: punpckldq mm1, mm1 */
  guest_unsupported(0xea6687); /* punpckldq mm1, mm1 */
/* ea668a: pfmul mm4, mm0 */
  guest_unsupported(0xea668a); /* pfmul mm4, mm0 */
/* ea668e: punpckhdq mm2, mm2 */
  guest_unsupported(0xea668e); /* punpckhdq mm2, mm2 */
/* ea6691: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea6691); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea669a: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea66a2: pfmul mm5, mm2 */
  guest_unsupported(0xea66a2); /* pfmul mm5, mm2 */
/* ea66a6: punpckhdq mm3, mm3 */
  guest_unsupported(0xea66a6); /* punpckhdq mm3, mm3 */
/* ea66a9: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea66a9); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea66b2: pfadd mm5, mm4 */
  guest_unsupported(0xea66b2); /* pfadd mm5, mm4 */
/* ea66b6: pfmul mm6, mm1 */
  guest_unsupported(0xea66b6); /* pfmul mm6, mm1 */
/* ea66ba: pfadd mm2, mm0 */
  guest_unsupported(0xea66ba); /* pfadd mm2, mm0 */
/* ea66be: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea66be); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea66c7: pfadd mm6, mm5 */
  guest_unsupported(0xea66c7); /* pfadd mm6, mm5 */
/* ea66cb: pfmul mm7, mm3 */
  guest_unsupported(0xea66cb); /* pfmul mm7, mm3 */
/* ea66cf: pfadd mm2, mm1 */
  guest_unsupported(0xea66cf); /* pfadd mm2, mm1 */
/* ea66d3: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea66d3); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea66dc: pfadd mm7, mm6 */
  guest_unsupported(0xea66dc); /* pfadd mm7, mm6 */
/* ea66e0: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea66e4: pfadd mm3, mm2 */
  guest_unsupported(0xea66e4); /* pfadd mm3, mm2 */
/* ea66e8: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea66ec: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea66ef: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea66f7: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea66fb: punpckhdq mm2, mm0 */
  guest_unsupported(0xea66fb); /* punpckhdq mm2, mm0 */
/* ea66fe: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea6706: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6706); /* punpckhdq mm3, mm1 */
/* ea6709: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea6711: punpckldq mm0, mm0 */
  guest_unsupported(0xea6711); /* punpckldq mm0, mm0 */
/* ea6714: punpckldq mm1, mm1 */
  guest_unsupported(0xea6714); /* punpckldq mm1, mm1 */
/* ea6717: pfmul mm4, mm0 */
  guest_unsupported(0xea6717); /* pfmul mm4, mm0 */
/* ea671b: punpckhdq mm2, mm2 */
  guest_unsupported(0xea671b); /* punpckhdq mm2, mm2 */
/* ea671e: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea671e); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea6727: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea672f: pfmul mm5, mm2 */
  guest_unsupported(0xea672f); /* pfmul mm5, mm2 */
/* ea6733: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6733); /* punpckhdq mm3, mm3 */
/* ea6736: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea6736); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea673f: pfadd mm5, mm4 */
  guest_unsupported(0xea673f); /* pfadd mm5, mm4 */
/* ea6743: pfmul mm6, mm1 */
  guest_unsupported(0xea6743); /* pfmul mm6, mm1 */
/* ea6747: pfadd mm2, mm0 */
  guest_unsupported(0xea6747); /* pfadd mm2, mm0 */
/* ea674b: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea674b); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea6754: pfadd mm6, mm5 */
  guest_unsupported(0xea6754); /* pfadd mm6, mm5 */
/* ea6758: pfmul mm7, mm3 */
  guest_unsupported(0xea6758); /* pfmul mm7, mm3 */
/* ea675c: pfadd mm2, mm1 */
  guest_unsupported(0xea675c); /* pfadd mm2, mm1 */
/* ea6760: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea6760); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea6769: pfadd mm7, mm6 */
  guest_unsupported(0xea6769); /* pfadd mm7, mm6 */
/* ea676d: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea6771: pfadd mm3, mm2 */
  guest_unsupported(0xea6771); /* pfadd mm3, mm2 */
/* ea6775: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea6779: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea677d: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea6785: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6789: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6789); /* punpckhdq mm2, mm0 */
/* ea678c: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea6794: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6794); /* punpckhdq mm3, mm1 */
/* ea6797: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea679f: punpckldq mm0, mm0 */
  guest_unsupported(0xea679f); /* punpckldq mm0, mm0 */
/* ea67a2: punpckldq mm1, mm1 */
  guest_unsupported(0xea67a2); /* punpckldq mm1, mm1 */
/* ea67a5: pfmul mm4, mm0 */
  guest_unsupported(0xea67a5); /* pfmul mm4, mm0 */
/* ea67a9: punpckhdq mm2, mm2 */
  guest_unsupported(0xea67a9); /* punpckhdq mm2, mm2 */
/* ea67ac: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea67ac); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea67b5: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea67bd: pfmul mm5, mm2 */
  guest_unsupported(0xea67bd); /* pfmul mm5, mm2 */
/* ea67c1: punpckhdq mm3, mm3 */
  guest_unsupported(0xea67c1); /* punpckhdq mm3, mm3 */
/* ea67c4: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea67c4); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea67cd: pfadd mm5, mm4 */
  guest_unsupported(0xea67cd); /* pfadd mm5, mm4 */
/* ea67d1: pfmul mm6, mm1 */
  guest_unsupported(0xea67d1); /* pfmul mm6, mm1 */
/* ea67d5: pfadd mm2, mm0 */
  guest_unsupported(0xea67d5); /* pfadd mm2, mm0 */
/* ea67d9: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea67d9); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea67e2: pfadd mm6, mm5 */
  guest_unsupported(0xea67e2); /* pfadd mm6, mm5 */
/* ea67e6: pfmul mm7, mm3 */
  guest_unsupported(0xea67e6); /* pfmul mm7, mm3 */
/* ea67ea: pfadd mm2, mm1 */
  guest_unsupported(0xea67ea); /* pfadd mm2, mm1 */
/* ea67ee: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea67ee); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea67f7: pfadd mm7, mm6 */
  guest_unsupported(0xea67f7); /* pfadd mm7, mm6 */
/* ea67fb: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea67ff: pfadd mm3, mm2 */
  guest_unsupported(0xea67ff); /* pfadd mm3, mm2 */
/* ea6803: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea6807: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea680b: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea6813: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6817: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6817); /* punpckhdq mm2, mm0 */
/* ea681a: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea6822: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6822); /* punpckhdq mm3, mm1 */
/* ea6825: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea682d: punpckldq mm0, mm0 */
  guest_unsupported(0xea682d); /* punpckldq mm0, mm0 */
/* ea6830: punpckldq mm1, mm1 */
  guest_unsupported(0xea6830); /* punpckldq mm1, mm1 */
/* ea6833: pfmul mm4, mm0 */
  guest_unsupported(0xea6833); /* pfmul mm4, mm0 */
/* ea6837: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6837); /* punpckhdq mm2, mm2 */
/* ea683a: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea683a); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea6843: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea684b: pfmul mm5, mm2 */
  guest_unsupported(0xea684b); /* pfmul mm5, mm2 */
/* ea684f: punpckhdq mm3, mm3 */
  guest_unsupported(0xea684f); /* punpckhdq mm3, mm3 */
/* ea6852: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea6852); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea685b: pfadd mm5, mm4 */
  guest_unsupported(0xea685b); /* pfadd mm5, mm4 */
/* ea685f: pfmul mm6, mm1 */
  guest_unsupported(0xea685f); /* pfmul mm6, mm1 */
/* ea6863: pfadd mm2, mm0 */
  guest_unsupported(0xea6863); /* pfadd mm2, mm0 */
/* ea6867: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea6867); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea6870: pfadd mm6, mm5 */
  guest_unsupported(0xea6870); /* pfadd mm6, mm5 */
/* ea6874: pfmul mm7, mm3 */
  guest_unsupported(0xea6874); /* pfmul mm7, mm3 */
/* ea6878: pfadd mm2, mm1 */
  guest_unsupported(0xea6878); /* pfadd mm2, mm1 */
/* ea687c: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea687c); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea6885: pfadd mm7, mm6 */
  guest_unsupported(0xea6885); /* pfadd mm7, mm6 */
/* ea6889: pfadd mm3, mm2 */
  guest_unsupported(0xea6889); /* pfadd mm3, mm2 */
/* ea688d: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea6891: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea6895: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea6898: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea689c: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea68a0: punpckhdq mm2, mm0 */
  guest_unsupported(0xea68a0); /* punpckhdq mm2, mm0 */
/* ea68a3: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea68a8: punpckhdq mm3, mm1 */
  guest_unsupported(0xea68a8); /* punpckhdq mm3, mm1 */
/* ea68ab: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea68b0: punpckldq mm0, mm0 */
  guest_unsupported(0xea68b0); /* punpckldq mm0, mm0 */
/* ea68b3: punpckldq mm1, mm1 */
  guest_unsupported(0xea68b3); /* punpckldq mm1, mm1 */
/* ea68b6: pfmul mm4, mm0 */
  guest_unsupported(0xea68b6); /* pfmul mm4, mm0 */
/* ea68ba: punpckhdq mm2, mm2 */
  guest_unsupported(0xea68ba); /* punpckhdq mm2, mm2 */
/* ea68bd: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea68bd); /* pfmul mm0, qword ptr [esp + 8] */
/* ea68c3: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea68c8: pfmul mm5, mm2 */
  guest_unsupported(0xea68c8); /* pfmul mm5, mm2 */
/* ea68cc: punpckhdq mm3, mm3 */
  guest_unsupported(0xea68cc); /* punpckhdq mm3, mm3 */
/* ea68cf: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea68cf); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea68d5: pfadd mm5, mm4 */
  guest_unsupported(0xea68d5); /* pfadd mm5, mm4 */
/* ea68d9: pfmul mm6, mm1 */
  guest_unsupported(0xea68d9); /* pfmul mm6, mm1 */
/* ea68dd: pfadd mm2, mm0 */
  guest_unsupported(0xea68dd); /* pfadd mm2, mm0 */
/* ea68e1: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea68e1); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea68e7: pfadd mm6, mm5 */
  guest_unsupported(0xea68e7); /* pfadd mm6, mm5 */
/* ea68eb: pfmul mm7, mm3 */
  guest_unsupported(0xea68eb); /* pfmul mm7, mm3 */
/* ea68ef: pfadd mm2, mm1 */
  guest_unsupported(0xea68ef); /* pfadd mm2, mm1 */
/* ea68f3: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea68f3); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea68f9: pfadd mm7, mm6 */
  guest_unsupported(0xea68f9); /* pfadd mm7, mm6 */
/* ea68fd: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea6901: pfadd mm3, mm2 */
  guest_unsupported(0xea6901); /* pfadd mm3, mm2 */
/* ea6905: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea6909: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea690c: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6910: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea6914: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6914); /* punpckhdq mm2, mm0 */
/* ea6917: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea691c: punpckhdq mm3, mm1 */
  guest_unsupported(0xea691c); /* punpckhdq mm3, mm1 */
/* ea691f: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6924: punpckldq mm0, mm0 */
  guest_unsupported(0xea6924); /* punpckldq mm0, mm0 */
/* ea6927: punpckldq mm1, mm1 */
  guest_unsupported(0xea6927); /* punpckldq mm1, mm1 */
/* ea692a: pfmul mm4, mm0 */
  guest_unsupported(0xea692a); /* pfmul mm4, mm0 */
/* ea692e: punpckhdq mm2, mm2 */
  guest_unsupported(0xea692e); /* punpckhdq mm2, mm2 */
/* ea6931: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6931); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6937: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea693c: pfmul mm5, mm2 */
  guest_unsupported(0xea693c); /* pfmul mm5, mm2 */
/* ea6940: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6940); /* punpckhdq mm3, mm3 */
/* ea6943: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6943); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6949: pfadd mm5, mm4 */
  guest_unsupported(0xea6949); /* pfadd mm5, mm4 */
/* ea694d: pfmul mm6, mm1 */
  guest_unsupported(0xea694d); /* pfmul mm6, mm1 */
/* ea6951: pfadd mm2, mm0 */
  guest_unsupported(0xea6951); /* pfadd mm2, mm0 */
/* ea6955: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6955); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea695b: pfadd mm6, mm5 */
  guest_unsupported(0xea695b); /* pfadd mm6, mm5 */
/* ea695f: pfmul mm7, mm3 */
  guest_unsupported(0xea695f); /* pfmul mm7, mm3 */
/* ea6963: pfadd mm2, mm1 */
  guest_unsupported(0xea6963); /* pfadd mm2, mm1 */
/* ea6967: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6967); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea696d: pfadd mm7, mm6 */
  guest_unsupported(0xea696d); /* pfadd mm7, mm6 */
/* ea6971: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea6975: pfadd mm3, mm2 */
  guest_unsupported(0xea6975); /* pfadd mm3, mm2 */
/* ea6979: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea697d: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea6981: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6985: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6989: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6989); /* punpckhdq mm2, mm0 */
/* ea698c: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6991: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6991); /* punpckhdq mm3, mm1 */
/* ea6994: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6999: punpckldq mm0, mm0 */
  guest_unsupported(0xea6999); /* punpckldq mm0, mm0 */
/* ea699c: punpckldq mm1, mm1 */
  guest_unsupported(0xea699c); /* punpckldq mm1, mm1 */
/* ea699f: pfmul mm4, mm0 */
  guest_unsupported(0xea699f); /* pfmul mm4, mm0 */
/* ea69a3: punpckhdq mm2, mm2 */
  guest_unsupported(0xea69a3); /* punpckhdq mm2, mm2 */
/* ea69a6: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea69a6); /* pfmul mm0, qword ptr [esp + 8] */
/* ea69ac: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea69b1: pfmul mm5, mm2 */
  guest_unsupported(0xea69b1); /* pfmul mm5, mm2 */
/* ea69b5: punpckhdq mm3, mm3 */
  guest_unsupported(0xea69b5); /* punpckhdq mm3, mm3 */
/* ea69b8: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea69b8); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea69be: pfadd mm5, mm4 */
  guest_unsupported(0xea69be); /* pfadd mm5, mm4 */
/* ea69c2: pfmul mm6, mm1 */
  guest_unsupported(0xea69c2); /* pfmul mm6, mm1 */
/* ea69c6: pfadd mm2, mm0 */
  guest_unsupported(0xea69c6); /* pfadd mm2, mm0 */
/* ea69ca: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea69ca); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea69d0: pfadd mm6, mm5 */
  guest_unsupported(0xea69d0); /* pfadd mm6, mm5 */
/* ea69d4: pfmul mm7, mm3 */
  guest_unsupported(0xea69d4); /* pfmul mm7, mm3 */
/* ea69d8: pfadd mm2, mm1 */
  guest_unsupported(0xea69d8); /* pfadd mm2, mm1 */
/* ea69dc: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea69dc); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea69e2: pfadd mm7, mm6 */
  guest_unsupported(0xea69e2); /* pfadd mm7, mm6 */
/* ea69e6: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea69ea: pfadd mm3, mm2 */
  guest_unsupported(0xea69ea); /* pfadd mm3, mm2 */
/* ea69ee: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea69f2: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea69f6: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea69fa: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea69fe: punpckhdq mm2, mm0 */
  guest_unsupported(0xea69fe); /* punpckhdq mm2, mm0 */
/* ea6a01: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6a06: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6a06); /* punpckhdq mm3, mm1 */
/* ea6a09: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6a0e: punpckldq mm0, mm0 */
  guest_unsupported(0xea6a0e); /* punpckldq mm0, mm0 */
/* ea6a11: punpckldq mm1, mm1 */
  guest_unsupported(0xea6a11); /* punpckldq mm1, mm1 */
/* ea6a14: pfmul mm4, mm0 */
  guest_unsupported(0xea6a14); /* pfmul mm4, mm0 */
/* ea6a18: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6a18); /* punpckhdq mm2, mm2 */
/* ea6a1b: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6a1b); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6a21: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea6a26: pfmul mm5, mm2 */
  guest_unsupported(0xea6a26); /* pfmul mm5, mm2 */
/* ea6a2a: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6a2a); /* punpckhdq mm3, mm3 */
/* ea6a2d: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6a2d); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6a33: pfadd mm5, mm4 */
  guest_unsupported(0xea6a33); /* pfadd mm5, mm4 */
/* ea6a37: pfmul mm6, mm1 */
  guest_unsupported(0xea6a37); /* pfmul mm6, mm1 */
/* ea6a3b: pfadd mm2, mm0 */
  guest_unsupported(0xea6a3b); /* pfadd mm2, mm0 */
/* ea6a3f: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6a3f); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea6a45: pfadd mm6, mm5 */
  guest_unsupported(0xea6a45); /* pfadd mm6, mm5 */
/* ea6a49: pfmul mm7, mm3 */
  guest_unsupported(0xea6a49); /* pfmul mm7, mm3 */
/* ea6a4d: pfadd mm2, mm1 */
  guest_unsupported(0xea6a4d); /* pfadd mm2, mm1 */
/* ea6a51: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6a51); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea6a57: pfadd mm7, mm6 */
  guest_unsupported(0xea6a57); /* pfadd mm7, mm6 */
/* ea6a5b: pfadd mm3, mm2 */
  guest_unsupported(0xea6a5b); /* pfadd mm3, mm2 */
/* ea6a5f: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea6a63: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea6a67: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea6a6a: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea6a6e: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6a73: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6a73); /* punpckhdq mm2, mm0 */
/* ea6a76: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6a7b: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6a7b); /* punpckhdq mm3, mm1 */
/* ea6a7e: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6a83: punpckldq mm0, mm0 */
  guest_unsupported(0xea6a83); /* punpckldq mm0, mm0 */
/* ea6a86: punpckldq mm1, mm1 */
  guest_unsupported(0xea6a86); /* punpckldq mm1, mm1 */
/* ea6a89: pfmul mm4, mm0 */
  guest_unsupported(0xea6a89); /* pfmul mm4, mm0 */
/* ea6a8d: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6a8d); /* punpckhdq mm2, mm2 */
/* ea6a90: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6a90); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6a96: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6a9b: pfmul mm5, mm2 */
  guest_unsupported(0xea6a9b); /* pfmul mm5, mm2 */
/* ea6a9f: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6a9f); /* punpckhdq mm3, mm3 */
/* ea6aa2: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6aa2); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6aa8: pfadd mm5, mm4 */
  guest_unsupported(0xea6aa8); /* pfadd mm5, mm4 */
/* ea6aac: pfmul mm6, mm1 */
  guest_unsupported(0xea6aac); /* pfmul mm6, mm1 */
/* ea6ab0: pfadd mm2, mm0 */
  guest_unsupported(0xea6ab0); /* pfadd mm2, mm0 */
/* ea6ab4: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6ab4); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6aba: pfadd mm6, mm5 */
  guest_unsupported(0xea6aba); /* pfadd mm6, mm5 */
/* ea6abe: pfmul mm7, mm3 */
  guest_unsupported(0xea6abe); /* pfmul mm7, mm3 */
/* ea6ac2: pfadd mm2, mm1 */
  guest_unsupported(0xea6ac2); /* pfadd mm2, mm1 */
/* ea6ac6: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6ac6); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6acc: pfadd mm7, mm6 */
  guest_unsupported(0xea6acc); /* pfadd mm7, mm6 */
/* ea6ad0: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea6ad4: pfadd mm3, mm2 */
  guest_unsupported(0xea6ad4); /* pfadd mm3, mm2 */
/* ea6ad8: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea6adc: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea6adf: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6ae4: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea6ae8: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6ae8); /* punpckhdq mm2, mm0 */
/* ea6aeb: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6af0: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6af0); /* punpckhdq mm3, mm1 */
/* ea6af3: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6af8: punpckldq mm0, mm0 */
  guest_unsupported(0xea6af8); /* punpckldq mm0, mm0 */
/* ea6afb: punpckldq mm1, mm1 */
  guest_unsupported(0xea6afb); /* punpckldq mm1, mm1 */
/* ea6afe: pfmul mm4, mm0 */
  guest_unsupported(0xea6afe); /* pfmul mm4, mm0 */
/* ea6b02: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6b02); /* punpckhdq mm2, mm2 */
/* ea6b05: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6b05); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6b0b: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6b10: pfmul mm5, mm2 */
  guest_unsupported(0xea6b10); /* pfmul mm5, mm2 */
/* ea6b14: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6b14); /* punpckhdq mm3, mm3 */
/* ea6b17: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6b17); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6b1d: pfadd mm5, mm4 */
  guest_unsupported(0xea6b1d); /* pfadd mm5, mm4 */
/* ea6b21: pfmul mm6, mm1 */
  guest_unsupported(0xea6b21); /* pfmul mm6, mm1 */
/* ea6b25: pfadd mm2, mm0 */
  guest_unsupported(0xea6b25); /* pfadd mm2, mm0 */
/* ea6b29: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6b29); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6b2f: pfadd mm6, mm5 */
  guest_unsupported(0xea6b2f); /* pfadd mm6, mm5 */
/* ea6b33: pfmul mm7, mm3 */
  guest_unsupported(0xea6b33); /* pfmul mm7, mm3 */
/* ea6b37: pfadd mm2, mm1 */
  guest_unsupported(0xea6b37); /* pfadd mm2, mm1 */
/* ea6b3b: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6b3b); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6b41: pfadd mm7, mm6 */
  guest_unsupported(0xea6b41); /* pfadd mm7, mm6 */
/* ea6b45: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea6b49: pfadd mm3, mm2 */
  guest_unsupported(0xea6b49); /* pfadd mm3, mm2 */
/* ea6b4d: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea6b51: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea6b55: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6b5a: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6b5e: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6b5e); /* punpckhdq mm2, mm0 */
/* ea6b61: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6b66: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6b66); /* punpckhdq mm3, mm1 */
/* ea6b69: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6b6e: punpckldq mm0, mm0 */
  guest_unsupported(0xea6b6e); /* punpckldq mm0, mm0 */
/* ea6b71: punpckldq mm1, mm1 */
  guest_unsupported(0xea6b71); /* punpckldq mm1, mm1 */
/* ea6b74: pfmul mm4, mm0 */
  guest_unsupported(0xea6b74); /* pfmul mm4, mm0 */
/* ea6b78: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6b78); /* punpckhdq mm2, mm2 */
/* ea6b7b: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6b7b); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6b81: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6b86: pfmul mm5, mm2 */
  guest_unsupported(0xea6b86); /* pfmul mm5, mm2 */
/* ea6b8a: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6b8a); /* punpckhdq mm3, mm3 */
/* ea6b8d: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6b8d); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6b93: pfadd mm5, mm4 */
  guest_unsupported(0xea6b93); /* pfadd mm5, mm4 */
/* ea6b97: pfmul mm6, mm1 */
  guest_unsupported(0xea6b97); /* pfmul mm6, mm1 */
/* ea6b9b: pfadd mm2, mm0 */
  guest_unsupported(0xea6b9b); /* pfadd mm2, mm0 */
/* ea6b9f: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6b9f); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6ba5: pfadd mm6, mm5 */
  guest_unsupported(0xea6ba5); /* pfadd mm6, mm5 */
/* ea6ba9: pfmul mm7, mm3 */
  guest_unsupported(0xea6ba9); /* pfmul mm7, mm3 */
/* ea6bad: pfadd mm2, mm1 */
  guest_unsupported(0xea6bad); /* pfadd mm2, mm1 */
/* ea6bb1: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6bb1); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6bb7: pfadd mm7, mm6 */
  guest_unsupported(0xea6bb7); /* pfadd mm7, mm6 */
/* ea6bbb: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea6bbf: pfadd mm3, mm2 */
  guest_unsupported(0xea6bbf); /* pfadd mm3, mm2 */
/* ea6bc3: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea6bc7: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea6bcb: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6bd0: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6bd4: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6bd4); /* punpckhdq mm2, mm0 */
/* ea6bd7: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6bdc: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6bdc); /* punpckhdq mm3, mm1 */
/* ea6bdf: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6be4: punpckldq mm0, mm0 */
  guest_unsupported(0xea6be4); /* punpckldq mm0, mm0 */
/* ea6be7: punpckldq mm1, mm1 */
  guest_unsupported(0xea6be7); /* punpckldq mm1, mm1 */
/* ea6bea: pfmul mm4, mm0 */
  guest_unsupported(0xea6bea); /* pfmul mm4, mm0 */
/* ea6bee: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6bee); /* punpckhdq mm2, mm2 */
/* ea6bf1: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6bf1); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6bf7: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6bfc: pfmul mm5, mm2 */
  guest_unsupported(0xea6bfc); /* pfmul mm5, mm2 */
/* ea6c00: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6c00); /* punpckhdq mm3, mm3 */
/* ea6c03: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6c03); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6c09: pfadd mm5, mm4 */
  guest_unsupported(0xea6c09); /* pfadd mm5, mm4 */
/* ea6c0d: pfmul mm6, mm1 */
  guest_unsupported(0xea6c0d); /* pfmul mm6, mm1 */
/* ea6c11: pfadd mm2, mm0 */
  guest_unsupported(0xea6c11); /* pfadd mm2, mm0 */
/* ea6c15: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6c15); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6c1b: pfadd mm6, mm5 */
  guest_unsupported(0xea6c1b); /* pfadd mm6, mm5 */
/* ea6c1f: pfmul mm7, mm3 */
  guest_unsupported(0xea6c1f); /* pfmul mm7, mm3 */
/* ea6c23: pfadd mm2, mm1 */
  guest_unsupported(0xea6c23); /* pfadd mm2, mm1 */
/* ea6c27: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6c27); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6c2d: pfadd mm7, mm6 */
  guest_unsupported(0xea6c2d); /* pfadd mm7, mm6 */
/* ea6c31: pfadd mm3, mm2 */
  guest_unsupported(0xea6c31); /* pfadd mm3, mm2 */
/* ea6c35: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea6c39: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea6c3d: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea6c40: movq mm1, qword ptr [eax + 0x30] */
  MMX[1] = R64((uint32_t)(eax + 0x30u));
/* ea6c44: movd mm2, dword ptr [edx + 8] */
  guest_unsupported(0xea6c44); /* movd mm2, dword ptr [edx + 8] */
/* ea6c48: movd mm3, dword ptr [eax + 0x38] */
  guest_unsupported(0xea6c48); /* movd mm3, dword ptr [eax + 0x38] */
/* ea6c4c: pfadd mm0, mm1 */
  guest_unsupported(0xea6c4c); /* pfadd mm0, mm1 */
/* ea6c50: pfadd mm2, mm3 */
  guest_unsupported(0xea6c50); /* pfadd mm2, mm3 */
/* ea6c54: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea6c58: movd dword ptr [eax + 0x38], mm2 */
  guest_unsupported(0xea6c58); /* movd dword ptr [eax + 0x38], mm2 */
/* ea6c5c: jmp 0xea70e9 */
  goto L_ea70e9;
L_ea6c61: /* ea6c61: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea6c64: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea6c69: movq mm1, qword ptr [esp + 0x50] */
  MMX[1] = R64((uint32_t)(esp + 0x50u));
/* ea6c6e: movq mm3, qword ptr [esp + 0x68] */
  MMX[3] = R64((uint32_t)(esp + 0x68u));
/* ea6c73: movq mm4, qword ptr [esp + 0x78] */
  MMX[4] = R64((uint32_t)(esp + 0x78u));
/* ea6c78: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea6c7b: punpckldq mm0, mm1 */
  guest_unsupported(0xea6c7b); /* punpckldq mm0, mm1 */
/* ea6c7e: punpckhdq mm2, mm1 */
  guest_unsupported(0xea6c7e); /* punpckhdq mm2, mm1 */
/* ea6c81: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea6c84: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea6c87: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea6c8b: movq mm6, qword ptr [esp + 0x48] */
  MMX[6] = R64((uint32_t)(esp + 0x48u));
/* ea6c90: punpckldq mm3, mm4 */
  guest_unsupported(0xea6c90); /* punpckldq mm3, mm4 */
/* ea6c93: movq mm7, qword ptr [esp + 0x58] */
  MMX[7] = R64((uint32_t)(esp + 0x58u));
/* ea6c98: movq mm0, qword ptr [esp + 0x60] */
  MMX[0] = R64((uint32_t)(esp + 0x60u));
/* ea6c9d: punpckhdq mm5, mm4 */
  guest_unsupported(0xea6c9d); /* punpckhdq mm5, mm4 */
/* ea6ca0: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea6ca3: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6ca7: movq qword ptr [eax + 0x38], mm5 */
  W64((uint32_t)(eax + 0x38u), MMX[5]);
/* ea6cab: punpckldq mm6, mm7 */
  guest_unsupported(0xea6cab); /* punpckldq mm6, mm7 */
/* ea6cae: movq mm4, qword ptr [esp + 0x70] */
  MMX[4] = R64((uint32_t)(esp + 0x70u));
/* ea6cb3: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea6cb6: punpckhdq mm1, mm7 */
  guest_unsupported(0xea6cb6); /* punpckhdq mm1, mm7 */
/* ea6cb9: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea6cbd: punpckhdq mm0, mm4 */
  guest_unsupported(0xea6cbd); /* punpckhdq mm0, mm4 */
/* ea6cc0: punpckldq mm2, mm4 */
  guest_unsupported(0xea6cc0); /* punpckldq mm2, mm4 */
/* ea6cc3: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea6cc7: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea6ccb: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea6ccf: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea6cd2: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea6cd6: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6cda: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6cda); /* punpckhdq mm2, mm0 */
/* ea6cdd: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6ce2: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6ce2); /* punpckhdq mm3, mm1 */
/* ea6ce5: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6cea: punpckldq mm0, mm0 */
  guest_unsupported(0xea6cea); /* punpckldq mm0, mm0 */
/* ea6ced: punpckldq mm1, mm1 */
  guest_unsupported(0xea6ced); /* punpckldq mm1, mm1 */
/* ea6cf0: pfmul mm4, mm0 */
  guest_unsupported(0xea6cf0); /* pfmul mm4, mm0 */
/* ea6cf4: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6cf4); /* punpckhdq mm2, mm2 */
/* ea6cf7: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6cf7); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6cfd: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea6d02: pfmul mm5, mm2 */
  guest_unsupported(0xea6d02); /* pfmul mm5, mm2 */
/* ea6d06: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6d06); /* punpckhdq mm3, mm3 */
/* ea6d09: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6d09); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6d0f: pfadd mm5, mm4 */
  guest_unsupported(0xea6d0f); /* pfadd mm5, mm4 */
/* ea6d13: pfmul mm6, mm1 */
  guest_unsupported(0xea6d13); /* pfmul mm6, mm1 */
/* ea6d17: pfadd mm2, mm0 */
  guest_unsupported(0xea6d17); /* pfadd mm2, mm0 */
/* ea6d1b: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6d1b); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea6d21: pfadd mm6, mm5 */
  guest_unsupported(0xea6d21); /* pfadd mm6, mm5 */
/* ea6d25: pfmul mm7, mm3 */
  guest_unsupported(0xea6d25); /* pfmul mm7, mm3 */
/* ea6d29: pfadd mm2, mm1 */
  guest_unsupported(0xea6d29); /* pfadd mm2, mm1 */
/* ea6d2d: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6d2d); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea6d33: pfadd mm7, mm6 */
  guest_unsupported(0xea6d33); /* pfadd mm7, mm6 */
/* ea6d37: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea6d3b: pfadd mm3, mm2 */
  guest_unsupported(0xea6d3b); /* pfadd mm3, mm2 */
/* ea6d3f: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea6d43: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea6d46: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6d4a: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea6d4e: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6d4e); /* punpckhdq mm2, mm0 */
/* ea6d51: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6d56: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6d56); /* punpckhdq mm3, mm1 */
/* ea6d59: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6d5e: punpckldq mm0, mm0 */
  guest_unsupported(0xea6d5e); /* punpckldq mm0, mm0 */
/* ea6d61: punpckldq mm1, mm1 */
  guest_unsupported(0xea6d61); /* punpckldq mm1, mm1 */
/* ea6d64: pfmul mm4, mm0 */
  guest_unsupported(0xea6d64); /* pfmul mm4, mm0 */
/* ea6d68: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6d68); /* punpckhdq mm2, mm2 */
/* ea6d6b: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6d6b); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6d71: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea6d76: pfmul mm5, mm2 */
  guest_unsupported(0xea6d76); /* pfmul mm5, mm2 */
/* ea6d7a: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6d7a); /* punpckhdq mm3, mm3 */
/* ea6d7d: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6d7d); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6d83: pfadd mm5, mm4 */
  guest_unsupported(0xea6d83); /* pfadd mm5, mm4 */
/* ea6d87: pfmul mm6, mm1 */
  guest_unsupported(0xea6d87); /* pfmul mm6, mm1 */
/* ea6d8b: pfadd mm2, mm0 */
  guest_unsupported(0xea6d8b); /* pfadd mm2, mm0 */
/* ea6d8f: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6d8f); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea6d95: pfadd mm6, mm5 */
  guest_unsupported(0xea6d95); /* pfadd mm6, mm5 */
/* ea6d99: pfmul mm7, mm3 */
  guest_unsupported(0xea6d99); /* pfmul mm7, mm3 */
/* ea6d9d: pfadd mm2, mm1 */
  guest_unsupported(0xea6d9d); /* pfadd mm2, mm1 */
/* ea6da1: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6da1); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea6da7: pfadd mm7, mm6 */
  guest_unsupported(0xea6da7); /* pfadd mm7, mm6 */
/* ea6dab: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea6daf: pfadd mm3, mm2 */
  guest_unsupported(0xea6daf); /* pfadd mm3, mm2 */
/* ea6db3: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea6db7: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea6dbb: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6dbf: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6dc3: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6dc3); /* punpckhdq mm2, mm0 */
/* ea6dc6: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6dcb: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6dcb); /* punpckhdq mm3, mm1 */
/* ea6dce: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6dd3: punpckldq mm0, mm0 */
  guest_unsupported(0xea6dd3); /* punpckldq mm0, mm0 */
/* ea6dd6: punpckldq mm1, mm1 */
  guest_unsupported(0xea6dd6); /* punpckldq mm1, mm1 */
/* ea6dd9: pfmul mm4, mm0 */
  guest_unsupported(0xea6dd9); /* pfmul mm4, mm0 */
/* ea6ddd: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6ddd); /* punpckhdq mm2, mm2 */
/* ea6de0: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6de0); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6de6: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea6deb: pfmul mm5, mm2 */
  guest_unsupported(0xea6deb); /* pfmul mm5, mm2 */
/* ea6def: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6def); /* punpckhdq mm3, mm3 */
/* ea6df2: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6df2); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6df8: pfadd mm5, mm4 */
  guest_unsupported(0xea6df8); /* pfadd mm5, mm4 */
/* ea6dfc: pfmul mm6, mm1 */
  guest_unsupported(0xea6dfc); /* pfmul mm6, mm1 */
/* ea6e00: pfadd mm2, mm0 */
  guest_unsupported(0xea6e00); /* pfadd mm2, mm0 */
/* ea6e04: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6e04); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea6e0a: pfadd mm6, mm5 */
  guest_unsupported(0xea6e0a); /* pfadd mm6, mm5 */
/* ea6e0e: pfmul mm7, mm3 */
  guest_unsupported(0xea6e0e); /* pfmul mm7, mm3 */
/* ea6e12: pfadd mm2, mm1 */
  guest_unsupported(0xea6e12); /* pfadd mm2, mm1 */
/* ea6e16: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6e16); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea6e1c: pfadd mm7, mm6 */
  guest_unsupported(0xea6e1c); /* pfadd mm7, mm6 */
/* ea6e20: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea6e24: pfadd mm3, mm2 */
  guest_unsupported(0xea6e24); /* pfadd mm3, mm2 */
/* ea6e28: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea6e2c: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea6e30: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea6e34: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea6e38: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6e38); /* punpckhdq mm2, mm0 */
/* ea6e3b: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea6e40: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6e40); /* punpckhdq mm3, mm1 */
/* ea6e43: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea6e48: punpckldq mm0, mm0 */
  guest_unsupported(0xea6e48); /* punpckldq mm0, mm0 */
/* ea6e4b: punpckldq mm1, mm1 */
  guest_unsupported(0xea6e4b); /* punpckldq mm1, mm1 */
/* ea6e4e: pfmul mm4, mm0 */
  guest_unsupported(0xea6e4e); /* pfmul mm4, mm0 */
/* ea6e52: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6e52); /* punpckhdq mm2, mm2 */
/* ea6e55: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea6e55); /* pfmul mm0, qword ptr [esp + 8] */
/* ea6e5b: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea6e60: pfmul mm5, mm2 */
  guest_unsupported(0xea6e60); /* pfmul mm5, mm2 */
/* ea6e64: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6e64); /* punpckhdq mm3, mm3 */
/* ea6e67: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea6e67); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea6e6d: pfadd mm5, mm4 */
  guest_unsupported(0xea6e6d); /* pfadd mm5, mm4 */
/* ea6e71: pfmul mm6, mm1 */
  guest_unsupported(0xea6e71); /* pfmul mm6, mm1 */
/* ea6e75: pfadd mm2, mm0 */
  guest_unsupported(0xea6e75); /* pfadd mm2, mm0 */
/* ea6e79: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea6e79); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea6e7f: pfadd mm6, mm5 */
  guest_unsupported(0xea6e7f); /* pfadd mm6, mm5 */
/* ea6e83: pfmul mm7, mm3 */
  guest_unsupported(0xea6e83); /* pfmul mm7, mm3 */
/* ea6e87: pfadd mm2, mm1 */
  guest_unsupported(0xea6e87); /* pfadd mm2, mm1 */
/* ea6e8b: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea6e8b); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea6e91: pfadd mm7, mm6 */
  guest_unsupported(0xea6e91); /* pfadd mm7, mm6 */
/* ea6e95: pfadd mm3, mm2 */
  guest_unsupported(0xea6e95); /* pfadd mm3, mm2 */
/* ea6e99: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea6e9d: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea6ea1: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea6ea4: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea6ea8: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6ead: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6ead); /* punpckhdq mm2, mm0 */
/* ea6eb0: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6eb5: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6eb5); /* punpckhdq mm3, mm1 */
/* ea6eb8: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6ebd: punpckldq mm0, mm0 */
  guest_unsupported(0xea6ebd); /* punpckldq mm0, mm0 */
/* ea6ec0: punpckldq mm1, mm1 */
  guest_unsupported(0xea6ec0); /* punpckldq mm1, mm1 */
/* ea6ec3: pfmul mm4, mm0 */
  guest_unsupported(0xea6ec3); /* pfmul mm4, mm0 */
/* ea6ec7: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6ec7); /* punpckhdq mm2, mm2 */
/* ea6eca: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6eca); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6ed0: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6ed5: pfmul mm5, mm2 */
  guest_unsupported(0xea6ed5); /* pfmul mm5, mm2 */
/* ea6ed9: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6ed9); /* punpckhdq mm3, mm3 */
/* ea6edc: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6edc); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6ee2: pfadd mm5, mm4 */
  guest_unsupported(0xea6ee2); /* pfadd mm5, mm4 */
/* ea6ee6: pfmul mm6, mm1 */
  guest_unsupported(0xea6ee6); /* pfmul mm6, mm1 */
/* ea6eea: pfadd mm2, mm0 */
  guest_unsupported(0xea6eea); /* pfadd mm2, mm0 */
/* ea6eee: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6eee); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6ef4: pfadd mm6, mm5 */
  guest_unsupported(0xea6ef4); /* pfadd mm6, mm5 */
/* ea6ef8: pfmul mm7, mm3 */
  guest_unsupported(0xea6ef8); /* pfmul mm7, mm3 */
/* ea6efc: pfadd mm2, mm1 */
  guest_unsupported(0xea6efc); /* pfadd mm2, mm1 */
/* ea6f00: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6f00); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6f06: pfadd mm7, mm6 */
  guest_unsupported(0xea6f06); /* pfadd mm7, mm6 */
/* ea6f0a: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea6f0e: pfadd mm3, mm2 */
  guest_unsupported(0xea6f0e); /* pfadd mm3, mm2 */
/* ea6f12: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea6f16: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea6f19: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6f1e: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea6f22: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6f22); /* punpckhdq mm2, mm0 */
/* ea6f25: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6f2a: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6f2a); /* punpckhdq mm3, mm1 */
/* ea6f2d: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6f32: punpckldq mm0, mm0 */
  guest_unsupported(0xea6f32); /* punpckldq mm0, mm0 */
/* ea6f35: punpckldq mm1, mm1 */
  guest_unsupported(0xea6f35); /* punpckldq mm1, mm1 */
/* ea6f38: pfmul mm4, mm0 */
  guest_unsupported(0xea6f38); /* pfmul mm4, mm0 */
/* ea6f3c: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6f3c); /* punpckhdq mm2, mm2 */
/* ea6f3f: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6f3f); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6f45: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6f4a: pfmul mm5, mm2 */
  guest_unsupported(0xea6f4a); /* pfmul mm5, mm2 */
/* ea6f4e: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6f4e); /* punpckhdq mm3, mm3 */
/* ea6f51: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6f51); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6f57: pfadd mm5, mm4 */
  guest_unsupported(0xea6f57); /* pfadd mm5, mm4 */
/* ea6f5b: pfmul mm6, mm1 */
  guest_unsupported(0xea6f5b); /* pfmul mm6, mm1 */
/* ea6f5f: pfadd mm2, mm0 */
  guest_unsupported(0xea6f5f); /* pfadd mm2, mm0 */
/* ea6f63: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6f63); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6f69: pfadd mm6, mm5 */
  guest_unsupported(0xea6f69); /* pfadd mm6, mm5 */
/* ea6f6d: pfmul mm7, mm3 */
  guest_unsupported(0xea6f6d); /* pfmul mm7, mm3 */
/* ea6f71: pfadd mm2, mm1 */
  guest_unsupported(0xea6f71); /* pfadd mm2, mm1 */
/* ea6f75: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6f75); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6f7b: pfadd mm7, mm6 */
  guest_unsupported(0xea6f7b); /* pfadd mm7, mm6 */
/* ea6f7f: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea6f83: pfadd mm3, mm2 */
  guest_unsupported(0xea6f83); /* pfadd mm3, mm2 */
/* ea6f87: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea6f8b: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea6f8f: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea6f94: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea6f98: punpckhdq mm2, mm0 */
  guest_unsupported(0xea6f98); /* punpckhdq mm2, mm0 */
/* ea6f9b: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea6fa0: punpckhdq mm3, mm1 */
  guest_unsupported(0xea6fa0); /* punpckhdq mm3, mm1 */
/* ea6fa3: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea6fa8: punpckldq mm0, mm0 */
  guest_unsupported(0xea6fa8); /* punpckldq mm0, mm0 */
/* ea6fab: punpckldq mm1, mm1 */
  guest_unsupported(0xea6fab); /* punpckldq mm1, mm1 */
/* ea6fae: pfmul mm4, mm0 */
  guest_unsupported(0xea6fae); /* pfmul mm4, mm0 */
/* ea6fb2: punpckhdq mm2, mm2 */
  guest_unsupported(0xea6fb2); /* punpckhdq mm2, mm2 */
/* ea6fb5: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea6fb5); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea6fbb: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea6fc0: pfmul mm5, mm2 */
  guest_unsupported(0xea6fc0); /* pfmul mm5, mm2 */
/* ea6fc4: punpckhdq mm3, mm3 */
  guest_unsupported(0xea6fc4); /* punpckhdq mm3, mm3 */
/* ea6fc7: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea6fc7); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea6fcd: pfadd mm5, mm4 */
  guest_unsupported(0xea6fcd); /* pfadd mm5, mm4 */
/* ea6fd1: pfmul mm6, mm1 */
  guest_unsupported(0xea6fd1); /* pfmul mm6, mm1 */
/* ea6fd5: pfadd mm2, mm0 */
  guest_unsupported(0xea6fd5); /* pfadd mm2, mm0 */
/* ea6fd9: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea6fd9); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea6fdf: pfadd mm6, mm5 */
  guest_unsupported(0xea6fdf); /* pfadd mm6, mm5 */
/* ea6fe3: pfmul mm7, mm3 */
  guest_unsupported(0xea6fe3); /* pfmul mm7, mm3 */
/* ea6fe7: pfadd mm2, mm1 */
  guest_unsupported(0xea6fe7); /* pfadd mm2, mm1 */
/* ea6feb: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea6feb); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea6ff1: pfadd mm7, mm6 */
  guest_unsupported(0xea6ff1); /* pfadd mm7, mm6 */
/* ea6ff5: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea6ff9: pfadd mm3, mm2 */
  guest_unsupported(0xea6ff9); /* pfadd mm3, mm2 */
/* ea6ffd: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea7001: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea7005: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea700a: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea700e: punpckhdq mm2, mm0 */
  guest_unsupported(0xea700e); /* punpckhdq mm2, mm0 */
/* ea7011: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea7016: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7016); /* punpckhdq mm3, mm1 */
/* ea7019: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea701e: punpckldq mm0, mm0 */
  guest_unsupported(0xea701e); /* punpckldq mm0, mm0 */
/* ea7021: punpckldq mm1, mm1 */
  guest_unsupported(0xea7021); /* punpckldq mm1, mm1 */
/* ea7024: pfmul mm4, mm0 */
  guest_unsupported(0xea7024); /* pfmul mm4, mm0 */
/* ea7028: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7028); /* punpckhdq mm2, mm2 */
/* ea702b: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea702b); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7031: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea7036: pfmul mm5, mm2 */
  guest_unsupported(0xea7036); /* pfmul mm5, mm2 */
/* ea703a: punpckhdq mm3, mm3 */
  guest_unsupported(0xea703a); /* punpckhdq mm3, mm3 */
/* ea703d: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea703d); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea7043: pfadd mm5, mm4 */
  guest_unsupported(0xea7043); /* pfadd mm5, mm4 */
/* ea7047: pfmul mm6, mm1 */
  guest_unsupported(0xea7047); /* pfmul mm6, mm1 */
/* ea704b: pfadd mm2, mm0 */
  guest_unsupported(0xea704b); /* pfadd mm2, mm0 */
/* ea704f: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea704f); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea7055: pfadd mm6, mm5 */
  guest_unsupported(0xea7055); /* pfadd mm6, mm5 */
/* ea7059: pfmul mm7, mm3 */
  guest_unsupported(0xea7059); /* pfmul mm7, mm3 */
/* ea705d: pfadd mm2, mm1 */
  guest_unsupported(0xea705d); /* pfadd mm2, mm1 */
/* ea7061: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea7061); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea7067: pfadd mm7, mm6 */
  guest_unsupported(0xea7067); /* pfadd mm7, mm6 */
/* ea706b: pfadd mm3, mm2 */
  guest_unsupported(0xea706b); /* pfadd mm3, mm2 */
/* ea706f: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea7073: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea7077: jmp 0xea70e9 */
  goto L_ea70e9;
L_ea7079: /* ea7079: movq mm1, qword ptr [0xeb3b80] */
  MMX[1] = R64((uint32_t)(0xeb3b80u));
/* ea7080: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea7083: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea7083); /* movd mm4, dword ptr [edx + 8] */
/* ea7087: pxor mm5, mm5 */
  guest_unsupported(0xea7087); /* pxor mm5, mm5 */
/* ea708a: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea708d: punpckldq mm2, mm5 */
  guest_unsupported(0xea708d); /* punpckldq mm2, mm5 */
/* ea7090: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* ea7093: punpckhdq mm5, mm3 */
  guest_unsupported(0xea7093); /* punpckhdq mm5, mm3 */
/* ea7096: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea7099: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea709d: movq qword ptr [eax + 0x10], mm5 */
  W64((uint32_t)(eax + 0x10u), MMX[5]);
/* ea70a1: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea70a5: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea70a9: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea70ad: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea70b1: movq qword ptr [eax + 0x38], mm1 */
  W64((uint32_t)(eax + 0x38u), MMX[1]);
/* ea70b5: jmp 0xea70e9 */
  goto L_ea70e9;
L_ea70b7: /* ea70b7: movd mm1, dword ptr [0xeb3b90] */
  guest_unsupported(0xea70b7); /* movd mm1, dword ptr [0xeb3b90] */
/* ea70be: pxor mm0, mm0 */
  guest_unsupported(0xea70be); /* pxor mm0, mm0 */
/* ea70c1: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea70c4: punpckhdq mm2, mm2 */
  guest_unsupported(0xea70c4); /* punpckhdq mm2, mm2 */
/* ea70c7: punpckldq mm2, mm1 */
  guest_unsupported(0xea70c7); /* punpckldq mm2, mm1 */
/* ea70ca: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea70cd: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea70d1: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea70d5: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea70d9: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea70dd: movq qword ptr [eax + 0x28], mm1 */
  W64((uint32_t)(eax + 0x28u), MMX[1]);
/* ea70e1: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea70e5: movq qword ptr [eax + 0x38], mm2 */
  W64((uint32_t)(eax + 0x38u), MMX[2]);
L_ea70e9: /* ea70e9: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ea70ec: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* ea70ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea70f1: je 0xea75bc */
  if (zf) goto L_ea75bc;
L_ea70f7: /* ea70f7: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea70fa: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea70fe: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea7101: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea7104: pfadd mm0, mm0 */
  guest_unsupported(0xea7104); /* pfadd mm0, mm0 */
/* ea7108: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea710b: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea710e: pfadd mm1, mm1 */
  guest_unsupported(0xea710e); /* pfadd mm1, mm1 */
/* ea7112: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7112); /* punpckhdq mm2, mm2 */
/* ea7115: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea7118: punpckhdq mm4, mm4 */
  guest_unsupported(0xea7118); /* punpckhdq mm4, mm4 */
/* ea711b: pfmul mm3, mm0 */
  guest_unsupported(0xea711b); /* pfmul mm3, mm0 */
/* ea711f: punpckldq mm1, mm0 */
  guest_unsupported(0xea711f); /* punpckldq mm1, mm0 */
/* ea7122: punpckldq mm7, mm7 */
  guest_unsupported(0xea7122); /* punpckldq mm7, mm7 */
/* ea7125: pfmul mm5, mm4 */
  guest_unsupported(0xea7125); /* pfmul mm5, mm4 */
/* ea7129: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea712c: pfmul mm7, mm1 */
  guest_unsupported(0xea712c); /* pfmul mm7, mm1 */
/* ea7130: pfmul mm1, mm2 */
  guest_unsupported(0xea7130); /* pfmul mm1, mm2 */
/* ea7134: pxor mm0, mm0 */
  guest_unsupported(0xea7134); /* pxor mm0, mm0 */
/* ea7137: pfmul mm6, mm4 */
  guest_unsupported(0xea7137); /* pfmul mm6, mm4 */
/* ea713b: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea713e: punpckhdq mm1, mm7 */
  guest_unsupported(0xea713e); /* punpckhdq mm1, mm7 */
/* ea7141: punpckldq mm7, mm7 */
  guest_unsupported(0xea7141); /* punpckldq mm7, mm7 */
/* ea7144: punpckldq mm6, mm6 */
  guest_unsupported(0xea7144); /* punpckldq mm6, mm6 */
/* ea7147: movq qword ptr [esp + 0x70], mm0 */
  W64((uint32_t)(esp + 0x70u), MMX[0]);
/* ea714c: pfadd mm7, mm3 */
  guest_unsupported(0xea714c); /* pfadd mm7, mm3 */
/* ea7150: pfacc mm3, mm3 */
  guest_unsupported(0xea7150); /* pfacc mm3, mm3 */
/* ea7154: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea7157: punpckhdq mm6, mm5 */
  guest_unsupported(0xea7157); /* punpckhdq mm6, mm5 */
/* ea715a: pfsubr mm3, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea715a); /* pfsubr mm3, qword ptr [0xeb3ba0] */
/* ea7162: pfsubr mm7, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7162); /* pfsubr mm7, qword ptr [0xeb3ba0] */
/* ea716a: punpckldq mm3, mm0 */
  guest_unsupported(0xea716a); /* punpckldq mm3, mm0 */
/* ea716d: pfadd mm1, mm6 */
  guest_unsupported(0xea716d); /* pfadd mm1, mm6 */
/* ea7171: movq qword ptr [esp + 0x68], mm3 */
  W64((uint32_t)(esp + 0x68u), MMX[3]);
/* ea7176: pfsub mm4, mm6 */
  guest_unsupported(0xea7176); /* pfsub mm4, mm6 */
/* ea717a: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea717d: pfadd mm2, mm5 */
  guest_unsupported(0xea717d); /* pfadd mm2, mm5 */
/* ea7181: pfsub mm3, mm5 */
  guest_unsupported(0xea7181); /* pfsub mm3, mm5 */
/* ea7185: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea7188: punpckldq mm2, mm0 */
  guest_unsupported(0xea7188); /* punpckldq mm2, mm0 */
/* ea718b: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea718e: punpckldq mm4, mm7 */
  guest_unsupported(0xea718e); /* punpckldq mm4, mm7 */
/* ea7191: punpckldq mm1, mm1 */
  guest_unsupported(0xea7191); /* punpckldq mm1, mm1 */
/* ea7194: movq qword ptr [esp + 0x58], mm2 */
  W64((uint32_t)(esp + 0x58u), MMX[2]);
/* ea7199: punpckhdq mm5, mm0 */
  guest_unsupported(0xea7199); /* punpckhdq mm5, mm0 */
/* ea719c: punpckldq mm0, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea719c); /* punpckldq mm0, dword ptr [0xeb3ba0] */
/* ea71a3: movq qword ptr [esp + 0x48], mm5 */
  W64((uint32_t)(esp + 0x48u), MMX[5]);
/* ea71a8: punpckhdq mm6, mm6 */
  guest_unsupported(0xea71a8); /* punpckhdq mm6, mm6 */
/* ea71ab: movq qword ptr [esp + 0x50], mm4 */
  W64((uint32_t)(esp + 0x50u), MMX[4]);
/* ea71b0: punpckhdq mm7, mm1 */
  guest_unsupported(0xea71b0); /* punpckhdq mm7, mm1 */
/* ea71b3: punpckldq mm6, mm3 */
  guest_unsupported(0xea71b3); /* punpckldq mm6, mm3 */
/* ea71b6: movq qword ptr [esp + 0x40], mm7 */
  W64((uint32_t)(esp + 0x40u), MMX[7]);
/* ea71bb: movq qword ptr [esp + 0x60], mm6 */
  W64((uint32_t)(esp + 0x60u), MMX[6]);
/* ea71c0: movq qword ptr [esp + 0x78], mm0 */
  W64((uint32_t)(esp + 0x78u), MMX[0]);
/* ea71c5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea71c7: je 0xea73e6 */
  if (zf) goto L_ea73e6;
L_ea71cd: /* ea71cd: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea71d1: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea71d1); /* movd mm1, dword ptr [eax + 0x38] */
/* ea71d5: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea71d8: movd mm3, dword ptr [edx + 8] */
  guest_unsupported(0xea71d8); /* movd mm3, dword ptr [edx + 8] */
/* ea71dc: pfsub mm0, mm2 */
  guest_unsupported(0xea71dc); /* pfsub mm0, mm2 */
/* ea71e0: pfsub mm1, mm3 */
  guest_unsupported(0xea71e0); /* pfsub mm1, mm3 */
/* ea71e4: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea71e8: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea71e8); /* movd dword ptr [eax + 0x38], mm1 */
/* ea71ec: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea71ef: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea71f3: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea71f8: punpckhdq mm2, mm0 */
  guest_unsupported(0xea71f8); /* punpckhdq mm2, mm0 */
/* ea71fb: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea7200: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7200); /* punpckhdq mm3, mm1 */
/* ea7203: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea7208: punpckldq mm0, mm0 */
  guest_unsupported(0xea7208); /* punpckldq mm0, mm0 */
/* ea720b: punpckldq mm1, mm1 */
  guest_unsupported(0xea720b); /* punpckldq mm1, mm1 */
/* ea720e: pfmul mm4, mm0 */
  guest_unsupported(0xea720e); /* pfmul mm4, mm0 */
/* ea7212: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7212); /* punpckhdq mm2, mm2 */
/* ea7215: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea7215); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea721b: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea7220: pfmul mm5, mm2 */
  guest_unsupported(0xea7220); /* pfmul mm5, mm2 */
/* ea7224: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7224); /* punpckhdq mm3, mm3 */
/* ea7227: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7227); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea722d: pfadd mm5, mm4 */
  guest_unsupported(0xea722d); /* pfadd mm5, mm4 */
/* ea7231: pfmul mm6, mm1 */
  guest_unsupported(0xea7231); /* pfmul mm6, mm1 */
/* ea7235: pfadd mm2, mm0 */
  guest_unsupported(0xea7235); /* pfadd mm2, mm0 */
/* ea7239: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea7239); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea723f: pfadd mm6, mm5 */
  guest_unsupported(0xea723f); /* pfadd mm6, mm5 */
/* ea7243: pfmul mm7, mm3 */
  guest_unsupported(0xea7243); /* pfmul mm7, mm3 */
/* ea7247: pfadd mm2, mm1 */
  guest_unsupported(0xea7247); /* pfadd mm2, mm1 */
/* ea724b: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea724b); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea7251: pfadd mm7, mm6 */
  guest_unsupported(0xea7251); /* pfadd mm7, mm6 */
/* ea7255: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea7259: pfadd mm3, mm2 */
  guest_unsupported(0xea7259); /* pfadd mm3, mm2 */
/* ea725d: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea7261: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea7264: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea7269: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea726d: punpckhdq mm2, mm0 */
  guest_unsupported(0xea726d); /* punpckhdq mm2, mm0 */
/* ea7270: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea7275: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7275); /* punpckhdq mm3, mm1 */
/* ea7278: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea727d: punpckldq mm0, mm0 */
  guest_unsupported(0xea727d); /* punpckldq mm0, mm0 */
/* ea7280: punpckldq mm1, mm1 */
  guest_unsupported(0xea7280); /* punpckldq mm1, mm1 */
/* ea7283: pfmul mm4, mm0 */
  guest_unsupported(0xea7283); /* pfmul mm4, mm0 */
/* ea7287: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7287); /* punpckhdq mm2, mm2 */
/* ea728a: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea728a); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7290: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea7295: pfmul mm5, mm2 */
  guest_unsupported(0xea7295); /* pfmul mm5, mm2 */
/* ea7299: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7299); /* punpckhdq mm3, mm3 */
/* ea729c: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea729c); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea72a2: pfadd mm5, mm4 */
  guest_unsupported(0xea72a2); /* pfadd mm5, mm4 */
/* ea72a6: pfmul mm6, mm1 */
  guest_unsupported(0xea72a6); /* pfmul mm6, mm1 */
/* ea72aa: pfadd mm2, mm0 */
  guest_unsupported(0xea72aa); /* pfadd mm2, mm0 */
/* ea72ae: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea72ae); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea72b4: pfadd mm6, mm5 */
  guest_unsupported(0xea72b4); /* pfadd mm6, mm5 */
/* ea72b8: pfmul mm7, mm3 */
  guest_unsupported(0xea72b8); /* pfmul mm7, mm3 */
/* ea72bc: pfadd mm2, mm1 */
  guest_unsupported(0xea72bc); /* pfadd mm2, mm1 */
/* ea72c0: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea72c0); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea72c6: pfadd mm7, mm6 */
  guest_unsupported(0xea72c6); /* pfadd mm7, mm6 */
/* ea72ca: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea72ce: pfadd mm3, mm2 */
  guest_unsupported(0xea72ce); /* pfadd mm3, mm2 */
/* ea72d2: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea72d6: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea72da: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea72df: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea72e3: punpckhdq mm2, mm0 */
  guest_unsupported(0xea72e3); /* punpckhdq mm2, mm0 */
/* ea72e6: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea72eb: punpckhdq mm3, mm1 */
  guest_unsupported(0xea72eb); /* punpckhdq mm3, mm1 */
/* ea72ee: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea72f3: punpckldq mm0, mm0 */
  guest_unsupported(0xea72f3); /* punpckldq mm0, mm0 */
/* ea72f6: punpckldq mm1, mm1 */
  guest_unsupported(0xea72f6); /* punpckldq mm1, mm1 */
/* ea72f9: pfmul mm4, mm0 */
  guest_unsupported(0xea72f9); /* pfmul mm4, mm0 */
/* ea72fd: punpckhdq mm2, mm2 */
  guest_unsupported(0xea72fd); /* punpckhdq mm2, mm2 */
/* ea7300: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea7300); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7306: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea730b: pfmul mm5, mm2 */
  guest_unsupported(0xea730b); /* pfmul mm5, mm2 */
/* ea730f: punpckhdq mm3, mm3 */
  guest_unsupported(0xea730f); /* punpckhdq mm3, mm3 */
/* ea7312: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7312); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea7318: pfadd mm5, mm4 */
  guest_unsupported(0xea7318); /* pfadd mm5, mm4 */
/* ea731c: pfmul mm6, mm1 */
  guest_unsupported(0xea731c); /* pfmul mm6, mm1 */
/* ea7320: pfadd mm2, mm0 */
  guest_unsupported(0xea7320); /* pfadd mm2, mm0 */
/* ea7324: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea7324); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea732a: pfadd mm6, mm5 */
  guest_unsupported(0xea732a); /* pfadd mm6, mm5 */
/* ea732e: pfmul mm7, mm3 */
  guest_unsupported(0xea732e); /* pfmul mm7, mm3 */
/* ea7332: pfadd mm2, mm1 */
  guest_unsupported(0xea7332); /* pfadd mm2, mm1 */
/* ea7336: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea7336); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea733c: pfadd mm7, mm6 */
  guest_unsupported(0xea733c); /* pfadd mm7, mm6 */
/* ea7340: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea7344: pfadd mm3, mm2 */
  guest_unsupported(0xea7344); /* pfadd mm3, mm2 */
/* ea7348: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea734c: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea7350: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea7355: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea7359: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7359); /* punpckhdq mm2, mm0 */
/* ea735c: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea7361: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7361); /* punpckhdq mm3, mm1 */
/* ea7364: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea7369: punpckldq mm0, mm0 */
  guest_unsupported(0xea7369); /* punpckldq mm0, mm0 */
/* ea736c: punpckldq mm1, mm1 */
  guest_unsupported(0xea736c); /* punpckldq mm1, mm1 */
/* ea736f: pfmul mm4, mm0 */
  guest_unsupported(0xea736f); /* pfmul mm4, mm0 */
/* ea7373: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7373); /* punpckhdq mm2, mm2 */
/* ea7376: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea7376); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea737c: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea7381: pfmul mm5, mm2 */
  guest_unsupported(0xea7381); /* pfmul mm5, mm2 */
/* ea7385: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7385); /* punpckhdq mm3, mm3 */
/* ea7388: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7388); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea738e: pfadd mm5, mm4 */
  guest_unsupported(0xea738e); /* pfadd mm5, mm4 */
/* ea7392: pfmul mm6, mm1 */
  guest_unsupported(0xea7392); /* pfmul mm6, mm1 */
/* ea7396: pfadd mm2, mm0 */
  guest_unsupported(0xea7396); /* pfadd mm2, mm0 */
/* ea739a: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea739a); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea73a0: pfadd mm6, mm5 */
  guest_unsupported(0xea73a0); /* pfadd mm6, mm5 */
/* ea73a4: pfmul mm7, mm3 */
  guest_unsupported(0xea73a4); /* pfmul mm7, mm3 */
/* ea73a8: pfadd mm2, mm1 */
  guest_unsupported(0xea73a8); /* pfadd mm2, mm1 */
/* ea73ac: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea73ac); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea73b2: pfadd mm7, mm6 */
  guest_unsupported(0xea73b2); /* pfadd mm7, mm6 */
/* ea73b6: pfadd mm3, mm2 */
  guest_unsupported(0xea73b6); /* pfadd mm3, mm2 */
/* ea73ba: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea73be: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea73c2: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea73c6: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea73c6); /* movd mm1, dword ptr [eax + 0x38] */
/* ea73ca: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea73cd: movd mm3, dword ptr [edx + 8] */
  guest_unsupported(0xea73cd); /* movd mm3, dword ptr [edx + 8] */
/* ea73d1: pfadd mm0, mm2 */
  guest_unsupported(0xea73d1); /* pfadd mm0, mm2 */
/* ea73d5: pfadd mm1, mm3 */
  guest_unsupported(0xea73d5); /* pfadd mm1, mm3 */
/* ea73d9: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea73dd: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea73dd); /* movd dword ptr [eax + 0x38], mm1 */
/* ea73e1: jmp 0xea75bc */
  goto L_ea75bc;
L_ea73e6: /* ea73e6: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea73e9: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea73ed: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea73f2: punpckhdq mm2, mm0 */
  guest_unsupported(0xea73f2); /* punpckhdq mm2, mm0 */
/* ea73f5: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea73fa: punpckhdq mm3, mm1 */
  guest_unsupported(0xea73fa); /* punpckhdq mm3, mm1 */
/* ea73fd: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea7402: punpckldq mm0, mm0 */
  guest_unsupported(0xea7402); /* punpckldq mm0, mm0 */
/* ea7405: punpckldq mm1, mm1 */
  guest_unsupported(0xea7405); /* punpckldq mm1, mm1 */
/* ea7408: pfmul mm4, mm0 */
  guest_unsupported(0xea7408); /* pfmul mm4, mm0 */
/* ea740c: punpckhdq mm2, mm2 */
  guest_unsupported(0xea740c); /* punpckhdq mm2, mm2 */
/* ea740f: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea740f); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7415: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea741a: pfmul mm5, mm2 */
  guest_unsupported(0xea741a); /* pfmul mm5, mm2 */
/* ea741e: punpckhdq mm3, mm3 */
  guest_unsupported(0xea741e); /* punpckhdq mm3, mm3 */
/* ea7421: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7421); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea7427: pfadd mm5, mm4 */
  guest_unsupported(0xea7427); /* pfadd mm5, mm4 */
/* ea742b: pfmul mm6, mm1 */
  guest_unsupported(0xea742b); /* pfmul mm6, mm1 */
/* ea742f: pfadd mm2, mm0 */
  guest_unsupported(0xea742f); /* pfadd mm2, mm0 */
/* ea7433: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea7433); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea7439: pfadd mm6, mm5 */
  guest_unsupported(0xea7439); /* pfadd mm6, mm5 */
/* ea743d: pfmul mm7, mm3 */
  guest_unsupported(0xea743d); /* pfmul mm7, mm3 */
/* ea7441: pfadd mm2, mm1 */
  guest_unsupported(0xea7441); /* pfadd mm2, mm1 */
/* ea7445: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea7445); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea744b: pfadd mm7, mm6 */
  guest_unsupported(0xea744b); /* pfadd mm7, mm6 */
/* ea744f: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea7453: pfadd mm3, mm2 */
  guest_unsupported(0xea7453); /* pfadd mm3, mm2 */
/* ea7457: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea745b: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea745e: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea7463: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea7467: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7467); /* punpckhdq mm2, mm0 */
/* ea746a: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea746f: punpckhdq mm3, mm1 */
  guest_unsupported(0xea746f); /* punpckhdq mm3, mm1 */
/* ea7472: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea7477: punpckldq mm0, mm0 */
  guest_unsupported(0xea7477); /* punpckldq mm0, mm0 */
/* ea747a: punpckldq mm1, mm1 */
  guest_unsupported(0xea747a); /* punpckldq mm1, mm1 */
/* ea747d: pfmul mm4, mm0 */
  guest_unsupported(0xea747d); /* pfmul mm4, mm0 */
/* ea7481: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7481); /* punpckhdq mm2, mm2 */
/* ea7484: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea7484); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea748a: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea748f: pfmul mm5, mm2 */
  guest_unsupported(0xea748f); /* pfmul mm5, mm2 */
/* ea7493: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7493); /* punpckhdq mm3, mm3 */
/* ea7496: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7496); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea749c: pfadd mm5, mm4 */
  guest_unsupported(0xea749c); /* pfadd mm5, mm4 */
/* ea74a0: pfmul mm6, mm1 */
  guest_unsupported(0xea74a0); /* pfmul mm6, mm1 */
/* ea74a4: pfadd mm2, mm0 */
  guest_unsupported(0xea74a4); /* pfadd mm2, mm0 */
/* ea74a8: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea74a8); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea74ae: pfadd mm6, mm5 */
  guest_unsupported(0xea74ae); /* pfadd mm6, mm5 */
/* ea74b2: pfmul mm7, mm3 */
  guest_unsupported(0xea74b2); /* pfmul mm7, mm3 */
/* ea74b6: pfadd mm2, mm1 */
  guest_unsupported(0xea74b6); /* pfadd mm2, mm1 */
/* ea74ba: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea74ba); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea74c0: pfadd mm7, mm6 */
  guest_unsupported(0xea74c0); /* pfadd mm7, mm6 */
/* ea74c4: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea74c8: pfadd mm3, mm2 */
  guest_unsupported(0xea74c8); /* pfadd mm3, mm2 */
/* ea74cc: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea74d0: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea74d4: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea74d9: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea74dd: punpckhdq mm2, mm0 */
  guest_unsupported(0xea74dd); /* punpckhdq mm2, mm0 */
/* ea74e0: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea74e5: punpckhdq mm3, mm1 */
  guest_unsupported(0xea74e5); /* punpckhdq mm3, mm1 */
/* ea74e8: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea74ed: punpckldq mm0, mm0 */
  guest_unsupported(0xea74ed); /* punpckldq mm0, mm0 */
/* ea74f0: punpckldq mm1, mm1 */
  guest_unsupported(0xea74f0); /* punpckldq mm1, mm1 */
/* ea74f3: pfmul mm4, mm0 */
  guest_unsupported(0xea74f3); /* pfmul mm4, mm0 */
/* ea74f7: punpckhdq mm2, mm2 */
  guest_unsupported(0xea74f7); /* punpckhdq mm2, mm2 */
/* ea74fa: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea74fa); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7500: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea7505: pfmul mm5, mm2 */
  guest_unsupported(0xea7505); /* pfmul mm5, mm2 */
/* ea7509: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7509); /* punpckhdq mm3, mm3 */
/* ea750c: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea750c); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea7512: pfadd mm5, mm4 */
  guest_unsupported(0xea7512); /* pfadd mm5, mm4 */
/* ea7516: pfmul mm6, mm1 */
  guest_unsupported(0xea7516); /* pfmul mm6, mm1 */
/* ea751a: pfadd mm2, mm0 */
  guest_unsupported(0xea751a); /* pfadd mm2, mm0 */
/* ea751e: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea751e); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea7524: pfadd mm6, mm5 */
  guest_unsupported(0xea7524); /* pfadd mm6, mm5 */
/* ea7528: pfmul mm7, mm3 */
  guest_unsupported(0xea7528); /* pfmul mm7, mm3 */
/* ea752c: pfadd mm2, mm1 */
  guest_unsupported(0xea752c); /* pfadd mm2, mm1 */
/* ea7530: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea7530); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea7536: pfadd mm7, mm6 */
  guest_unsupported(0xea7536); /* pfadd mm7, mm6 */
/* ea753a: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea753e: pfadd mm3, mm2 */
  guest_unsupported(0xea753e); /* pfadd mm3, mm2 */
/* ea7542: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea7546: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea754a: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea754f: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea7553: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7553); /* punpckhdq mm2, mm0 */
/* ea7556: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea755b: punpckhdq mm3, mm1 */
  guest_unsupported(0xea755b); /* punpckhdq mm3, mm1 */
/* ea755e: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea7563: punpckldq mm0, mm0 */
  guest_unsupported(0xea7563); /* punpckldq mm0, mm0 */
/* ea7566: punpckldq mm1, mm1 */
  guest_unsupported(0xea7566); /* punpckldq mm1, mm1 */
/* ea7569: pfmul mm4, mm0 */
  guest_unsupported(0xea7569); /* pfmul mm4, mm0 */
/* ea756d: punpckhdq mm2, mm2 */
  guest_unsupported(0xea756d); /* punpckhdq mm2, mm2 */
/* ea7570: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea7570); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea7576: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea757b: pfmul mm5, mm2 */
  guest_unsupported(0xea757b); /* pfmul mm5, mm2 */
/* ea757f: punpckhdq mm3, mm3 */
  guest_unsupported(0xea757f); /* punpckhdq mm3, mm3 */
/* ea7582: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea7582); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea7588: pfadd mm5, mm4 */
  guest_unsupported(0xea7588); /* pfadd mm5, mm4 */
/* ea758c: pfmul mm6, mm1 */
  guest_unsupported(0xea758c); /* pfmul mm6, mm1 */
/* ea7590: pfadd mm2, mm0 */
  guest_unsupported(0xea7590); /* pfadd mm2, mm0 */
/* ea7594: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea7594); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea759a: pfadd mm6, mm5 */
  guest_unsupported(0xea759a); /* pfadd mm6, mm5 */
/* ea759e: pfmul mm7, mm3 */
  guest_unsupported(0xea759e); /* pfmul mm7, mm3 */
/* ea75a2: pfadd mm2, mm1 */
  guest_unsupported(0xea75a2); /* pfadd mm2, mm1 */
/* ea75a6: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea75a6); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea75ac: pfadd mm7, mm6 */
  guest_unsupported(0xea75ac); /* pfadd mm7, mm6 */
/* ea75b0: pfadd mm3, mm2 */
  guest_unsupported(0xea75b0); /* pfadd mm3, mm2 */
/* ea75b4: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea75b8: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
L_ea75bc: /* ea75bc: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* ea75bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea75c1: je 0xea75e2 */
  if (zf) goto L_ea75e2;
L_ea75c3: /* ea75c3: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea75c7: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea75c7); /* movd mm1, dword ptr [eax + 0x38] */
/* ea75cb: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* ea75ce: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea75ce); /* movd mm3, dword ptr [ecx + 8] */
/* ea75d2: pfadd mm0, mm2 */
  guest_unsupported(0xea75d2); /* pfadd mm0, mm2 */
/* ea75d6: pfadd mm1, mm3 */
  guest_unsupported(0xea75d6); /* pfadd mm1, mm3 */
/* ea75da: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea75de: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea75de); /* movd dword ptr [eax + 0x38], mm1 */
L_ea75e2: /* ea75e2: mov esp, ebp */
  esp = ebp;
/* ea75e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea75e5: femms  */
  guest_unsupported(0xea75e5); /* femms  */
/* ea75e7: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_ea75ea(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea75ea: /* ea75ea: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea75ed: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* ea75f1: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* ea75f5: movq mm0, qword ptr [0xeb3c30] */
  MMX[0] = R64((uint32_t)(0xeb3c30u));
/* ea75fc: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea75ff: mov dword ptr [esp + 4], ebx */
  W32((uint32_t)(esp + 0x4u), ebx);
/* ea7603: mov dword ptr [esp], esi */
  W32((uint32_t)(esp), esi);
/* ea7606: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea7609: pfmul mm0, qword ptr [ebp + 0x14] */
  guest_unsupported(0xea7609); /* pfmul mm0, qword ptr [ebp + 0x14] */
/* ea760e: pfmul mm1, qword ptr [ebp + 0xc] */
  guest_unsupported(0xea760e); /* pfmul mm1, qword ptr [ebp + 0xc] */
/* ea7613: movq qword ptr [esp + 0x18], mm1 */
  W64((uint32_t)(esp + 0x18u), MMX[1]);
/* ea7618: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea761du); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea761d: movq qword ptr [esp + 8], mm0 */
  W64((uint32_t)(esp + 0x8u), MMX[0]);
/* ea7622: movq mm0, qword ptr [esp + 0x18] */
  MMX[0] = R64((uint32_t)(esp + 0x18u));
/* ea7627: punpckhdq mm0, mm0 */
  guest_unsupported(0xea7627); /* punpckhdq mm0, mm0 */
/* ea762a: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea762fu); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea762f: movq qword ptr [esp + 0x10], mm0 */
  W64((uint32_t)(esp + 0x10u), MMX[0]);
/* ea7634: movq mm0, qword ptr [esp + 0x18] */
  MMX[0] = R64((uint32_t)(esp + 0x18u));
/* ea7639: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea763eu); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea763e: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea7643: movq mm2, qword ptr [esp + 0x10] */
  MMX[2] = R64((uint32_t)(esp + 0x10u));
/* ea7648: movq mm7, qword ptr [0xeb3bc0] */
  MMX[7] = R64((uint32_t)(0xeb3bc0u));
/* ea764f: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea7652: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea7655: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea7658: punpckldq mm0, mm0 */
  guest_unsupported(0xea7658); /* punpckldq mm0, mm0 */
/* ea765b: punpckldq mm3, mm3 */
  guest_unsupported(0xea765b); /* punpckldq mm3, mm3 */
/* ea765e: punpckhdq mm4, mm4 */
  guest_unsupported(0xea765e); /* punpckhdq mm4, mm4 */
/* ea7661: punpckhdq mm5, mm5 */
  guest_unsupported(0xea7661); /* punpckhdq mm5, mm5 */
/* ea7664: pxor mm0, mm7 */
  guest_unsupported(0xea7664); /* pxor mm0, mm7 */
/* ea7667: psrlq mm7, 0x20 */
  guest_unsupported(0xea7667); /* psrlq mm7, 0x20 */
/* ea766b: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea766e: punpckldq mm2, mm2 */
  guest_unsupported(0xea766e); /* punpckldq mm2, mm2 */
/* ea7671: punpckhdq mm6, mm6 */
  guest_unsupported(0xea7671); /* punpckhdq mm6, mm6 */
/* ea7674: pxor mm5, mm7 */
  guest_unsupported(0xea7674); /* pxor mm5, mm7 */
/* ea7677: pfmul mm0, mm6 */
  guest_unsupported(0xea7677); /* pfmul mm0, mm6 */
/* ea767b: pfmul mm3, mm2 */
  guest_unsupported(0xea767b); /* pfmul mm3, mm2 */
/* ea767f: pfmul mm4, mm2 */
  guest_unsupported(0xea767f); /* pfmul mm4, mm2 */
/* ea7683: pfmul mm5, mm6 */
  guest_unsupported(0xea7683); /* pfmul mm5, mm6 */
/* ea7687: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea768a: punpckhdq mm7, mm7 */
  guest_unsupported(0xea768a); /* punpckhdq mm7, mm7 */
/* ea768d: punpckldq mm7, mm1 */
  guest_unsupported(0xea768d); /* punpckldq mm7, mm1 */
/* ea7690: pfmul mm0, mm1 */
  guest_unsupported(0xea7690); /* pfmul mm0, mm1 */
/* ea7694: pfmul mm3, mm7 */
  guest_unsupported(0xea7694); /* pfmul mm3, mm7 */
/* ea7698: pfmul mm4, mm7 */
  guest_unsupported(0xea7698); /* pfmul mm4, mm7 */
/* ea769c: pfmul mm5, mm1 */
  guest_unsupported(0xea769c); /* pfmul mm5, mm1 */
/* ea76a0: pfadd mm0, mm4 */
  guest_unsupported(0xea76a0); /* pfadd mm0, mm4 */
/* ea76a4: pfadd mm3, mm5 */
  guest_unsupported(0xea76a4); /* pfadd mm3, mm5 */
/* ea76a8: movq qword ptr [ebp - 0x10], mm0 */
  W64((uint32_t)(ebp + 0xfffffff0u), MMX[0]);
/* ea76ac: movq qword ptr [ebp - 8], mm3 */
  W64((uint32_t)(ebp + 0xfffffff8u), MMX[3]);
/* ea76b0: mov esi, dword ptr [esp] */
  esi = R32((uint32_t)(esp));
/* ea76b3: mov ebx, dword ptr [esp + 4] */
  ebx = R32((uint32_t)(esp + 0x4u));
/* ea76b7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea76ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea76bd: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea76c1: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea76c6: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea76c9: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea76cc: pfadd mm0, mm0 */
  guest_unsupported(0xea76cc); /* pfadd mm0, mm0 */
/* ea76d0: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea76d3: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea76d6: pfadd mm1, mm1 */
  guest_unsupported(0xea76d6); /* pfadd mm1, mm1 */
/* ea76da: punpckhdq mm2, mm2 */
  guest_unsupported(0xea76da); /* punpckhdq mm2, mm2 */
/* ea76dd: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea76e0: punpckhdq mm4, mm4 */
  guest_unsupported(0xea76e0); /* punpckhdq mm4, mm4 */
/* ea76e3: pfmul mm3, mm0 */
  guest_unsupported(0xea76e3); /* pfmul mm3, mm0 */
/* ea76e7: punpckldq mm1, mm0 */
  guest_unsupported(0xea76e7); /* punpckldq mm1, mm0 */
/* ea76ea: punpckldq mm7, mm7 */
  guest_unsupported(0xea76ea); /* punpckldq mm7, mm7 */
/* ea76ed: pfmul mm5, mm4 */
  guest_unsupported(0xea76ed); /* pfmul mm5, mm4 */
/* ea76f1: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea76f4: pfmul mm7, mm1 */
  guest_unsupported(0xea76f4); /* pfmul mm7, mm1 */
/* ea76f8: pfmul mm1, mm2 */
  guest_unsupported(0xea76f8); /* pfmul mm1, mm2 */
/* ea76fc: pxor mm0, mm0 */
  guest_unsupported(0xea76fc); /* pxor mm0, mm0 */
/* ea76ff: pfmul mm6, mm4 */
  guest_unsupported(0xea76ff); /* pfmul mm6, mm4 */
/* ea7703: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea7706: punpckhdq mm1, mm7 */
  guest_unsupported(0xea7706); /* punpckhdq mm1, mm7 */
/* ea7709: punpckldq mm7, mm7 */
  guest_unsupported(0xea7709); /* punpckldq mm7, mm7 */
/* ea770c: punpckldq mm6, mm6 */
  guest_unsupported(0xea770c); /* punpckldq mm6, mm6 */
/* ea770f: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea7713: pfadd mm7, mm3 */
  guest_unsupported(0xea7713); /* pfadd mm7, mm3 */
/* ea7717: pfacc mm3, mm3 */
  guest_unsupported(0xea7717); /* pfacc mm3, mm3 */
/* ea771b: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea771e: punpckhdq mm6, mm5 */
  guest_unsupported(0xea771e); /* punpckhdq mm6, mm5 */
/* ea7721: pfsubr mm3, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7721); /* pfsubr mm3, qword ptr [0xeb3ba0] */
/* ea7729: pfsubr mm7, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7729); /* pfsubr mm7, qword ptr [0xeb3ba0] */
/* ea7731: punpckldq mm3, mm0 */
  guest_unsupported(0xea7731); /* punpckldq mm3, mm0 */
/* ea7734: pfadd mm1, mm6 */
  guest_unsupported(0xea7734); /* pfadd mm1, mm6 */
/* ea7738: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea773c: pfsub mm4, mm6 */
  guest_unsupported(0xea773c); /* pfsub mm4, mm6 */
/* ea7740: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea7743: pfadd mm2, mm5 */
  guest_unsupported(0xea7743); /* pfadd mm2, mm5 */
/* ea7747: pfsub mm3, mm5 */
  guest_unsupported(0xea7747); /* pfsub mm3, mm5 */
/* ea774b: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea774e: punpckldq mm2, mm0 */
  guest_unsupported(0xea774e); /* punpckldq mm2, mm0 */
/* ea7751: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea7754: punpckldq mm4, mm7 */
  guest_unsupported(0xea7754); /* punpckldq mm4, mm7 */
/* ea7757: punpckldq mm1, mm1 */
  guest_unsupported(0xea7757); /* punpckldq mm1, mm1 */
/* ea775a: movq qword ptr [eax + 0x18], mm2 */
  W64((uint32_t)(eax + 0x18u), MMX[2]);
/* ea775e: punpckhdq mm5, mm0 */
  guest_unsupported(0xea775e); /* punpckhdq mm5, mm0 */
/* ea7761: punpckldq mm0, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea7761); /* punpckldq mm0, dword ptr [0xeb3ba0] */
/* ea7768: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* ea776c: punpckhdq mm6, mm6 */
  guest_unsupported(0xea776c); /* punpckhdq mm6, mm6 */
/* ea776f: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea7773: punpckhdq mm7, mm1 */
  guest_unsupported(0xea7773); /* punpckhdq mm7, mm1 */
/* ea7776: punpckldq mm6, mm3 */
  guest_unsupported(0xea7776); /* punpckldq mm6, mm3 */
/* ea7779: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea777c: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea7780: movq qword ptr [eax + 0x38], mm0 */
  W64((uint32_t)(eax + 0x38u), MMX[0]);
/* ea7784: lea esp, [ebp + 4] */
  esp = (uint32_t)(ebp + 0x4u);
/* ea7787: mov ebp, dword ptr [ebp] */
  ebp = R32((uint32_t)(ebp));
/* ea778a: femms  */
  guest_unsupported(0xea778a); /* femms  */
/* ea778c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_ea778f(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea778f: /* ea778f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea7793: movd mm6, dword ptr [esp + 8] */
  guest_unsupported(0xea7793); /* movd mm6, dword ptr [esp + 8] */
/* ea7798: pxor mm7, mm7 */
  guest_unsupported(0xea7798); /* pxor mm7, mm7 */
/* ea779b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* ea779f: movq mm5, qword ptr [0xeb3b80] */
  MMX[5] = R64((uint32_t)(0xeb3b80u));
/* ea77a6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ea77aa: movq qword ptr [eax], mm6 */
  W64((uint32_t)(eax), MMX[6]);
/* ea77ad: movq qword ptr [eax + 8], mm7 */
  W64((uint32_t)(eax + 0x8u), MMX[7]);
/* ea77b1: movd dword ptr [eax + 0x10], mm7 */
  guest_unsupported(0xea77b1); /* movd dword ptr [eax + 0x10], mm7 */
/* ea77b5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea77b8: movd dword ptr [eax + 0x14], mm6 */
  guest_unsupported(0xea77b8); /* movd dword ptr [eax + 0x14], mm6 */
/* ea77bc: movq qword ptr [eax + 0x18], mm7 */
  W64((uint32_t)(eax + 0x18u), MMX[7]);
/* ea77c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea77c2: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea77c6: movq qword ptr [eax + 0x28], mm6 */
  W64((uint32_t)(eax + 0x28u), MMX[6]);
/* ea77ca: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea77ce: movq qword ptr [eax + 0x38], mm5 */
  W64((uint32_t)(eax + 0x38u), MMX[5]);
/* ea77d2: je 0xea7c94 */
  if (zf) goto L_ea7c94;
L_ea77d8: /* ea77d8: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea77db: movq mm1, qword ptr [edx + 8] */
  MMX[1] = R64((uint32_t)(edx + 0x8u));
/* ea77df: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea77e2: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea77e5: pfadd mm0, mm0 */
  guest_unsupported(0xea77e5); /* pfadd mm0, mm0 */
/* ea77e9: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea77ec: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea77ef: pfadd mm1, mm1 */
  guest_unsupported(0xea77ef); /* pfadd mm1, mm1 */
/* ea77f3: punpckhdq mm2, mm2 */
  guest_unsupported(0xea77f3); /* punpckhdq mm2, mm2 */
/* ea77f6: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea77f9: punpckhdq mm4, mm4 */
  guest_unsupported(0xea77f9); /* punpckhdq mm4, mm4 */
/* ea77fc: pfmul mm3, mm0 */
  guest_unsupported(0xea77fc); /* pfmul mm3, mm0 */
/* ea7800: punpckldq mm1, mm0 */
  guest_unsupported(0xea7800); /* punpckldq mm1, mm0 */
/* ea7803: punpckldq mm7, mm7 */
  guest_unsupported(0xea7803); /* punpckldq mm7, mm7 */
/* ea7806: pfmul mm5, mm4 */
  guest_unsupported(0xea7806); /* pfmul mm5, mm4 */
/* ea780a: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea780d: pfmul mm7, mm1 */
  guest_unsupported(0xea780d); /* pfmul mm7, mm1 */
/* ea7811: pfmul mm1, mm2 */
  guest_unsupported(0xea7811); /* pfmul mm1, mm2 */
/* ea7815: pxor mm0, mm0 */
  guest_unsupported(0xea7815); /* pxor mm0, mm0 */
/* ea7818: pfmul mm6, mm4 */
  guest_unsupported(0xea7818); /* pfmul mm6, mm4 */
/* ea781c: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea781f: punpckhdq mm1, mm7 */
  guest_unsupported(0xea781f); /* punpckhdq mm1, mm7 */
/* ea7822: punpckldq mm7, mm7 */
  guest_unsupported(0xea7822); /* punpckldq mm7, mm7 */
/* ea7825: punpckldq mm6, mm6 */
  guest_unsupported(0xea7825); /* punpckldq mm6, mm6 */
/* ea7828: movq qword ptr [esp + 0x30], mm0 */
  W64((uint32_t)(esp + 0x30u), MMX[0]);
/* ea782d: pfadd mm7, mm3 */
  guest_unsupported(0xea782d); /* pfadd mm7, mm3 */
/* ea7831: pfacc mm3, mm3 */
  guest_unsupported(0xea7831); /* pfacc mm3, mm3 */
/* ea7835: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea7838: punpckhdq mm6, mm5 */
  guest_unsupported(0xea7838); /* punpckhdq mm6, mm5 */
/* ea783b: pfsubr mm3, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea783b); /* pfsubr mm3, qword ptr [0xeb3ba0] */
/* ea7843: pfsubr mm7, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7843); /* pfsubr mm7, qword ptr [0xeb3ba0] */
/* ea784b: punpckldq mm3, mm0 */
  guest_unsupported(0xea784b); /* punpckldq mm3, mm0 */
/* ea784e: pfadd mm1, mm6 */
  guest_unsupported(0xea784e); /* pfadd mm1, mm6 */
/* ea7852: movq qword ptr [esp + 0x28], mm3 */
  W64((uint32_t)(esp + 0x28u), MMX[3]);
/* ea7857: pfsub mm4, mm6 */
  guest_unsupported(0xea7857); /* pfsub mm4, mm6 */
/* ea785b: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea785e: pfadd mm2, mm5 */
  guest_unsupported(0xea785e); /* pfadd mm2, mm5 */
/* ea7862: pfsub mm3, mm5 */
  guest_unsupported(0xea7862); /* pfsub mm3, mm5 */
/* ea7866: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea7869: punpckldq mm2, mm0 */
  guest_unsupported(0xea7869); /* punpckldq mm2, mm0 */
/* ea786c: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea786f: punpckldq mm4, mm7 */
  guest_unsupported(0xea786f); /* punpckldq mm4, mm7 */
/* ea7872: punpckldq mm1, mm1 */
  guest_unsupported(0xea7872); /* punpckldq mm1, mm1 */
/* ea7875: movq qword ptr [esp + 0x18], mm2 */
  W64((uint32_t)(esp + 0x18u), MMX[2]);
/* ea787a: punpckhdq mm5, mm0 */
  guest_unsupported(0xea787a); /* punpckhdq mm5, mm0 */
/* ea787d: punpckldq mm0, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea787d); /* punpckldq mm0, dword ptr [0xeb3ba0] */
/* ea7884: movq qword ptr [esp + 8], mm5 */
  W64((uint32_t)(esp + 0x8u), MMX[5]);
/* ea7889: punpckhdq mm6, mm6 */
  guest_unsupported(0xea7889); /* punpckhdq mm6, mm6 */
/* ea788c: movq qword ptr [esp + 0x10], mm4 */
  W64((uint32_t)(esp + 0x10u), MMX[4]);
/* ea7891: punpckhdq mm7, mm1 */
  guest_unsupported(0xea7891); /* punpckhdq mm7, mm1 */
/* ea7894: punpckldq mm6, mm3 */
  guest_unsupported(0xea7894); /* punpckldq mm6, mm3 */
/* ea7897: movq qword ptr [esp], mm7 */
  W64((uint32_t)(esp), MMX[7]);
/* ea789b: movq qword ptr [esp + 0x20], mm6 */
  W64((uint32_t)(esp + 0x20u), MMX[6]);
/* ea78a0: movq qword ptr [esp + 0x38], mm0 */
  W64((uint32_t)(esp + 0x38u), MMX[0]);
/* ea78a5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea78a7: je 0xea7ac2 */
  if (zf) goto L_ea7ac2;
L_ea78ad: /* ea78ad: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea78b1: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea78b1); /* movd mm1, dword ptr [eax + 0x38] */
/* ea78b5: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* ea78b8: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea78b8); /* movd mm3, dword ptr [ecx + 8] */
/* ea78bc: pfsub mm0, mm2 */
  guest_unsupported(0xea78bc); /* pfsub mm0, mm2 */
/* ea78c0: pfsub mm1, mm3 */
  guest_unsupported(0xea78c0); /* pfsub mm1, mm3 */
/* ea78c4: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea78c8: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea78c8); /* movd dword ptr [eax + 0x38], mm1 */
/* ea78cc: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea78cf: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea78d3: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea78d7: punpckhdq mm2, mm0 */
  guest_unsupported(0xea78d7); /* punpckhdq mm2, mm0 */
/* ea78da: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea78df: punpckhdq mm3, mm1 */
  guest_unsupported(0xea78df); /* punpckhdq mm3, mm1 */
/* ea78e2: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea78e7: punpckldq mm0, mm0 */
  guest_unsupported(0xea78e7); /* punpckldq mm0, mm0 */
/* ea78ea: punpckldq mm1, mm1 */
  guest_unsupported(0xea78ea); /* punpckldq mm1, mm1 */
/* ea78ed: pfmul mm4, mm0 */
  guest_unsupported(0xea78ed); /* pfmul mm4, mm0 */
/* ea78f1: punpckhdq mm2, mm2 */
  guest_unsupported(0xea78f1); /* punpckhdq mm2, mm2 */
/* ea78f4: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea78f4); /* pfmul mm0, qword ptr [esp + 8] */
/* ea78fa: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea78ff: pfmul mm5, mm2 */
  guest_unsupported(0xea78ff); /* pfmul mm5, mm2 */
/* ea7903: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7903); /* punpckhdq mm3, mm3 */
/* ea7906: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7906); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea790c: pfadd mm5, mm4 */
  guest_unsupported(0xea790c); /* pfadd mm5, mm4 */
/* ea7910: pfmul mm6, mm1 */
  guest_unsupported(0xea7910); /* pfmul mm6, mm1 */
/* ea7914: pfadd mm2, mm0 */
  guest_unsupported(0xea7914); /* pfadd mm2, mm0 */
/* ea7918: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7918); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea791e: pfadd mm6, mm5 */
  guest_unsupported(0xea791e); /* pfadd mm6, mm5 */
/* ea7922: pfmul mm7, mm3 */
  guest_unsupported(0xea7922); /* pfmul mm7, mm3 */
/* ea7926: pfadd mm2, mm1 */
  guest_unsupported(0xea7926); /* pfadd mm2, mm1 */
/* ea792a: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea792a); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7930: pfadd mm7, mm6 */
  guest_unsupported(0xea7930); /* pfadd mm7, mm6 */
/* ea7934: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea7938: pfadd mm3, mm2 */
  guest_unsupported(0xea7938); /* pfadd mm3, mm2 */
/* ea793c: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea7940: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea7943: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7947: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea794b: punpckhdq mm2, mm0 */
  guest_unsupported(0xea794b); /* punpckhdq mm2, mm0 */
/* ea794e: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7953: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7953); /* punpckhdq mm3, mm1 */
/* ea7956: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea795b: punpckldq mm0, mm0 */
  guest_unsupported(0xea795b); /* punpckldq mm0, mm0 */
/* ea795e: punpckldq mm1, mm1 */
  guest_unsupported(0xea795e); /* punpckldq mm1, mm1 */
/* ea7961: pfmul mm4, mm0 */
  guest_unsupported(0xea7961); /* pfmul mm4, mm0 */
/* ea7965: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7965); /* punpckhdq mm2, mm2 */
/* ea7968: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7968); /* pfmul mm0, qword ptr [esp + 8] */
/* ea796e: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7973: pfmul mm5, mm2 */
  guest_unsupported(0xea7973); /* pfmul mm5, mm2 */
/* ea7977: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7977); /* punpckhdq mm3, mm3 */
/* ea797a: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea797a); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7980: pfadd mm5, mm4 */
  guest_unsupported(0xea7980); /* pfadd mm5, mm4 */
/* ea7984: pfmul mm6, mm1 */
  guest_unsupported(0xea7984); /* pfmul mm6, mm1 */
/* ea7988: pfadd mm2, mm0 */
  guest_unsupported(0xea7988); /* pfadd mm2, mm0 */
/* ea798c: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea798c); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7992: pfadd mm6, mm5 */
  guest_unsupported(0xea7992); /* pfadd mm6, mm5 */
/* ea7996: pfmul mm7, mm3 */
  guest_unsupported(0xea7996); /* pfmul mm7, mm3 */
/* ea799a: pfadd mm2, mm1 */
  guest_unsupported(0xea799a); /* pfadd mm2, mm1 */
/* ea799e: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea799e); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea79a4: pfadd mm7, mm6 */
  guest_unsupported(0xea79a4); /* pfadd mm7, mm6 */
/* ea79a8: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea79ac: pfadd mm3, mm2 */
  guest_unsupported(0xea79ac); /* pfadd mm3, mm2 */
/* ea79b0: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea79b4: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea79b8: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea79bc: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea79c0: punpckhdq mm2, mm0 */
  guest_unsupported(0xea79c0); /* punpckhdq mm2, mm0 */
/* ea79c3: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea79c8: punpckhdq mm3, mm1 */
  guest_unsupported(0xea79c8); /* punpckhdq mm3, mm1 */
/* ea79cb: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea79d0: punpckldq mm0, mm0 */
  guest_unsupported(0xea79d0); /* punpckldq mm0, mm0 */
/* ea79d3: punpckldq mm1, mm1 */
  guest_unsupported(0xea79d3); /* punpckldq mm1, mm1 */
/* ea79d6: pfmul mm4, mm0 */
  guest_unsupported(0xea79d6); /* pfmul mm4, mm0 */
/* ea79da: punpckhdq mm2, mm2 */
  guest_unsupported(0xea79da); /* punpckhdq mm2, mm2 */
/* ea79dd: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea79dd); /* pfmul mm0, qword ptr [esp + 8] */
/* ea79e3: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea79e8: pfmul mm5, mm2 */
  guest_unsupported(0xea79e8); /* pfmul mm5, mm2 */
/* ea79ec: punpckhdq mm3, mm3 */
  guest_unsupported(0xea79ec); /* punpckhdq mm3, mm3 */
/* ea79ef: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea79ef); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea79f5: pfadd mm5, mm4 */
  guest_unsupported(0xea79f5); /* pfadd mm5, mm4 */
/* ea79f9: pfmul mm6, mm1 */
  guest_unsupported(0xea79f9); /* pfmul mm6, mm1 */
/* ea79fd: pfadd mm2, mm0 */
  guest_unsupported(0xea79fd); /* pfadd mm2, mm0 */
/* ea7a01: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7a01); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7a07: pfadd mm6, mm5 */
  guest_unsupported(0xea7a07); /* pfadd mm6, mm5 */
/* ea7a0b: pfmul mm7, mm3 */
  guest_unsupported(0xea7a0b); /* pfmul mm7, mm3 */
/* ea7a0f: pfadd mm2, mm1 */
  guest_unsupported(0xea7a0f); /* pfadd mm2, mm1 */
/* ea7a13: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7a13); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7a19: pfadd mm7, mm6 */
  guest_unsupported(0xea7a19); /* pfadd mm7, mm6 */
/* ea7a1d: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea7a21: pfadd mm3, mm2 */
  guest_unsupported(0xea7a21); /* pfadd mm3, mm2 */
/* ea7a25: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea7a29: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea7a2d: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7a31: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea7a35: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7a35); /* punpckhdq mm2, mm0 */
/* ea7a38: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7a3d: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7a3d); /* punpckhdq mm3, mm1 */
/* ea7a40: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea7a45: punpckldq mm0, mm0 */
  guest_unsupported(0xea7a45); /* punpckldq mm0, mm0 */
/* ea7a48: punpckldq mm1, mm1 */
  guest_unsupported(0xea7a48); /* punpckldq mm1, mm1 */
/* ea7a4b: pfmul mm4, mm0 */
  guest_unsupported(0xea7a4b); /* pfmul mm4, mm0 */
/* ea7a4f: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7a4f); /* punpckhdq mm2, mm2 */
/* ea7a52: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7a52); /* pfmul mm0, qword ptr [esp + 8] */
/* ea7a58: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7a5d: pfmul mm5, mm2 */
  guest_unsupported(0xea7a5d); /* pfmul mm5, mm2 */
/* ea7a61: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7a61); /* punpckhdq mm3, mm3 */
/* ea7a64: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7a64); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7a6a: pfadd mm5, mm4 */
  guest_unsupported(0xea7a6a); /* pfadd mm5, mm4 */
/* ea7a6e: pfmul mm6, mm1 */
  guest_unsupported(0xea7a6e); /* pfmul mm6, mm1 */
/* ea7a72: pfadd mm2, mm0 */
  guest_unsupported(0xea7a72); /* pfadd mm2, mm0 */
/* ea7a76: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7a76); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7a7c: pfadd mm6, mm5 */
  guest_unsupported(0xea7a7c); /* pfadd mm6, mm5 */
/* ea7a80: pfmul mm7, mm3 */
  guest_unsupported(0xea7a80); /* pfmul mm7, mm3 */
/* ea7a84: pfadd mm2, mm1 */
  guest_unsupported(0xea7a84); /* pfadd mm2, mm1 */
/* ea7a88: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7a88); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7a8e: pfadd mm7, mm6 */
  guest_unsupported(0xea7a8e); /* pfadd mm7, mm6 */
/* ea7a92: pfadd mm3, mm2 */
  guest_unsupported(0xea7a92); /* pfadd mm3, mm2 */
/* ea7a96: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea7a9a: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea7a9e: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea7aa2: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea7aa2); /* movd mm1, dword ptr [eax + 0x38] */
/* ea7aa6: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* ea7aa9: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea7aa9); /* movd mm3, dword ptr [ecx + 8] */
/* ea7aad: pfadd mm0, mm2 */
  guest_unsupported(0xea7aad); /* pfadd mm0, mm2 */
/* ea7ab1: pfadd mm1, mm3 */
  guest_unsupported(0xea7ab1); /* pfadd mm1, mm3 */
/* ea7ab5: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea7ab9: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea7ab9); /* movd dword ptr [eax + 0x38], mm1 */
/* ea7abd: jmp 0xea7c94 */
  goto L_ea7c94;
L_ea7ac2: /* ea7ac2: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea7ac5: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea7ac9: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7acd: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7acd); /* punpckhdq mm2, mm0 */
/* ea7ad0: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7ad5: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7ad5); /* punpckhdq mm3, mm1 */
/* ea7ad8: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea7add: punpckldq mm0, mm0 */
  guest_unsupported(0xea7add); /* punpckldq mm0, mm0 */
/* ea7ae0: punpckldq mm1, mm1 */
  guest_unsupported(0xea7ae0); /* punpckldq mm1, mm1 */
/* ea7ae3: pfmul mm4, mm0 */
  guest_unsupported(0xea7ae3); /* pfmul mm4, mm0 */
/* ea7ae7: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7ae7); /* punpckhdq mm2, mm2 */
/* ea7aea: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7aea); /* pfmul mm0, qword ptr [esp + 8] */
/* ea7af0: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7af5: pfmul mm5, mm2 */
  guest_unsupported(0xea7af5); /* pfmul mm5, mm2 */
/* ea7af9: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7af9); /* punpckhdq mm3, mm3 */
/* ea7afc: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7afc); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7b02: pfadd mm5, mm4 */
  guest_unsupported(0xea7b02); /* pfadd mm5, mm4 */
/* ea7b06: pfmul mm6, mm1 */
  guest_unsupported(0xea7b06); /* pfmul mm6, mm1 */
/* ea7b0a: pfadd mm2, mm0 */
  guest_unsupported(0xea7b0a); /* pfadd mm2, mm0 */
/* ea7b0e: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7b0e); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7b14: pfadd mm6, mm5 */
  guest_unsupported(0xea7b14); /* pfadd mm6, mm5 */
/* ea7b18: pfmul mm7, mm3 */
  guest_unsupported(0xea7b18); /* pfmul mm7, mm3 */
/* ea7b1c: pfadd mm2, mm1 */
  guest_unsupported(0xea7b1c); /* pfadd mm2, mm1 */
/* ea7b20: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7b20); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7b26: pfadd mm7, mm6 */
  guest_unsupported(0xea7b26); /* pfadd mm7, mm6 */
/* ea7b2a: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea7b2e: pfadd mm3, mm2 */
  guest_unsupported(0xea7b2e); /* pfadd mm3, mm2 */
/* ea7b32: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea7b36: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea7b39: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7b3d: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea7b41: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7b41); /* punpckhdq mm2, mm0 */
/* ea7b44: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7b49: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7b49); /* punpckhdq mm3, mm1 */
/* ea7b4c: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea7b51: punpckldq mm0, mm0 */
  guest_unsupported(0xea7b51); /* punpckldq mm0, mm0 */
/* ea7b54: punpckldq mm1, mm1 */
  guest_unsupported(0xea7b54); /* punpckldq mm1, mm1 */
/* ea7b57: pfmul mm4, mm0 */
  guest_unsupported(0xea7b57); /* pfmul mm4, mm0 */
/* ea7b5b: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7b5b); /* punpckhdq mm2, mm2 */
/* ea7b5e: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7b5e); /* pfmul mm0, qword ptr [esp + 8] */
/* ea7b64: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7b69: pfmul mm5, mm2 */
  guest_unsupported(0xea7b69); /* pfmul mm5, mm2 */
/* ea7b6d: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7b6d); /* punpckhdq mm3, mm3 */
/* ea7b70: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7b70); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7b76: pfadd mm5, mm4 */
  guest_unsupported(0xea7b76); /* pfadd mm5, mm4 */
/* ea7b7a: pfmul mm6, mm1 */
  guest_unsupported(0xea7b7a); /* pfmul mm6, mm1 */
/* ea7b7e: pfadd mm2, mm0 */
  guest_unsupported(0xea7b7e); /* pfadd mm2, mm0 */
/* ea7b82: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7b82); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7b88: pfadd mm6, mm5 */
  guest_unsupported(0xea7b88); /* pfadd mm6, mm5 */
/* ea7b8c: pfmul mm7, mm3 */
  guest_unsupported(0xea7b8c); /* pfmul mm7, mm3 */
/* ea7b90: pfadd mm2, mm1 */
  guest_unsupported(0xea7b90); /* pfadd mm2, mm1 */
/* ea7b94: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7b94); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7b9a: pfadd mm7, mm6 */
  guest_unsupported(0xea7b9a); /* pfadd mm7, mm6 */
/* ea7b9e: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea7ba2: pfadd mm3, mm2 */
  guest_unsupported(0xea7ba2); /* pfadd mm3, mm2 */
/* ea7ba6: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea7baa: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea7bae: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7bb2: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea7bb6: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7bb6); /* punpckhdq mm2, mm0 */
/* ea7bb9: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7bbe: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7bbe); /* punpckhdq mm3, mm1 */
/* ea7bc1: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea7bc6: punpckldq mm0, mm0 */
  guest_unsupported(0xea7bc6); /* punpckldq mm0, mm0 */
/* ea7bc9: punpckldq mm1, mm1 */
  guest_unsupported(0xea7bc9); /* punpckldq mm1, mm1 */
/* ea7bcc: pfmul mm4, mm0 */
  guest_unsupported(0xea7bcc); /* pfmul mm4, mm0 */
/* ea7bd0: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7bd0); /* punpckhdq mm2, mm2 */
/* ea7bd3: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7bd3); /* pfmul mm0, qword ptr [esp + 8] */
/* ea7bd9: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7bde: pfmul mm5, mm2 */
  guest_unsupported(0xea7bde); /* pfmul mm5, mm2 */
/* ea7be2: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7be2); /* punpckhdq mm3, mm3 */
/* ea7be5: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7be5); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7beb: pfadd mm5, mm4 */
  guest_unsupported(0xea7beb); /* pfadd mm5, mm4 */
/* ea7bef: pfmul mm6, mm1 */
  guest_unsupported(0xea7bef); /* pfmul mm6, mm1 */
/* ea7bf3: pfadd mm2, mm0 */
  guest_unsupported(0xea7bf3); /* pfadd mm2, mm0 */
/* ea7bf7: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7bf7); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7bfd: pfadd mm6, mm5 */
  guest_unsupported(0xea7bfd); /* pfadd mm6, mm5 */
/* ea7c01: pfmul mm7, mm3 */
  guest_unsupported(0xea7c01); /* pfmul mm7, mm3 */
/* ea7c05: pfadd mm2, mm1 */
  guest_unsupported(0xea7c05); /* pfadd mm2, mm1 */
/* ea7c09: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7c09); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7c0f: pfadd mm7, mm6 */
  guest_unsupported(0xea7c0f); /* pfadd mm7, mm6 */
/* ea7c13: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea7c17: pfadd mm3, mm2 */
  guest_unsupported(0xea7c17); /* pfadd mm3, mm2 */
/* ea7c1b: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea7c1f: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea7c23: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea7c27: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea7c2b: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7c2b); /* punpckhdq mm2, mm0 */
/* ea7c2e: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea7c33: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7c33); /* punpckhdq mm3, mm1 */
/* ea7c36: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea7c3b: punpckldq mm0, mm0 */
  guest_unsupported(0xea7c3b); /* punpckldq mm0, mm0 */
/* ea7c3e: punpckldq mm1, mm1 */
  guest_unsupported(0xea7c3e); /* punpckldq mm1, mm1 */
/* ea7c41: pfmul mm4, mm0 */
  guest_unsupported(0xea7c41); /* pfmul mm4, mm0 */
/* ea7c45: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7c45); /* punpckhdq mm2, mm2 */
/* ea7c48: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea7c48); /* pfmul mm0, qword ptr [esp + 8] */
/* ea7c4e: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea7c53: pfmul mm5, mm2 */
  guest_unsupported(0xea7c53); /* pfmul mm5, mm2 */
/* ea7c57: punpckhdq mm3, mm3 */
  guest_unsupported(0xea7c57); /* punpckhdq mm3, mm3 */
/* ea7c5a: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea7c5a); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea7c60: pfadd mm5, mm4 */
  guest_unsupported(0xea7c60); /* pfadd mm5, mm4 */
/* ea7c64: pfmul mm6, mm1 */
  guest_unsupported(0xea7c64); /* pfmul mm6, mm1 */
/* ea7c68: pfadd mm2, mm0 */
  guest_unsupported(0xea7c68); /* pfadd mm2, mm0 */
/* ea7c6c: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea7c6c); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea7c72: pfadd mm6, mm5 */
  guest_unsupported(0xea7c72); /* pfadd mm6, mm5 */
/* ea7c76: pfmul mm7, mm3 */
  guest_unsupported(0xea7c76); /* pfmul mm7, mm3 */
/* ea7c7a: pfadd mm2, mm1 */
  guest_unsupported(0xea7c7a); /* pfadd mm2, mm1 */
/* ea7c7e: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea7c7e); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea7c84: pfadd mm7, mm6 */
  guest_unsupported(0xea7c84); /* pfadd mm7, mm6 */
/* ea7c88: pfadd mm3, mm2 */
  guest_unsupported(0xea7c88); /* pfadd mm3, mm2 */
/* ea7c8c: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea7c90: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
L_ea7c94: /* ea7c94: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* ea7c98: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea7c9a: je 0xea7cbb */
  if (zf) goto L_ea7cbb;
L_ea7c9c: /* ea7c9c: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea7c9f: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xea7c9f); /* movd mm1, dword ptr [edx + 8] */
/* ea7ca3: movq mm2, qword ptr [eax + 0x30] */
  MMX[2] = R64((uint32_t)(eax + 0x30u));
/* ea7ca7: movd mm3, dword ptr [eax + 0x38] */
  guest_unsupported(0xea7ca7); /* movd mm3, dword ptr [eax + 0x38] */
/* ea7cab: pfadd mm0, mm2 */
  guest_unsupported(0xea7cab); /* pfadd mm0, mm2 */
/* ea7caf: pfadd mm1, mm3 */
  guest_unsupported(0xea7caf); /* pfadd mm1, mm3 */
/* ea7cb3: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea7cb7: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea7cb7); /* movd dword ptr [eax + 0x38], mm1 */
L_ea7cbb: /* ea7cbb: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea7cbe: femms  */
  guest_unsupported(0xea7cbe); /* femms  */
/* ea7cc0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_ea7cc3(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea7cc3: /* ea7cc3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea7cc4: mov ebp, esp */
  ebp = esp;
/* ea7cc6: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea7cc9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ea7ccc: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea7ccf: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* ea7cd2: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea7cd5: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xea7cd5); /* movd mm1, dword ptr [edx + 8] */
/* ea7cd9: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* ea7cdd: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* ea7ce1: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea7ce5: movd dword ptr [esp + 8], mm1 */
  guest_unsupported(0xea7ce5); /* movd dword ptr [esp + 8], mm1 */
/* ea7cea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea7ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea7cec: call 0xea9a32 */
  esp -= 4; W32(esp, 0xea7cf1u); SPILL(); f_ea9a32(); if (g_unwind) return; RELOAD();
/* ea7cf1: movd mm0, dword ptr [ebp + 0x10] */
  guest_unsupported(0xea7cf1); /* movd mm0, dword ptr [ebp + 0x10] */
/* ea7cf5: call 0xeabd60 */
  esp -= 4; W32(esp, 0xea7cfau); SPILL(); f_eabd60(); if (g_unwind) return; RELOAD();
/* ea7cfa: movq mm7, mm0 */
  MMX[7] = MMX[0];
/* ea7cfd: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea7d00: pfsubr mm0, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7d00); /* pfsubr mm0, qword ptr [0xeb3ba0] */
/* ea7d08: punpckhdq mm7, mm7 */
  guest_unsupported(0xea7d08); /* punpckhdq mm7, mm7 */
/* ea7d0b: movq mm2, qword ptr [esp] */
  MMX[2] = R64((uint32_t)(esp));
/* ea7d0f: movd mm3, dword ptr [esp + 8] */
  guest_unsupported(0xea7d0f); /* movd mm3, dword ptr [esp + 8] */
/* ea7d14: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea7d17: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea7d1a: movd dword ptr [esp + 0xc], mm7 */
  guest_unsupported(0xea7d1a); /* movd dword ptr [esp + 0xc], mm7 */
/* ea7d1f: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea7d22: punpckldq mm3, mm3 */
  guest_unsupported(0xea7d22); /* punpckldq mm3, mm3 */
/* ea7d25: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea7d28: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* ea7d2c: punpckhdq mm2, mm3 */
  guest_unsupported(0xea7d2c); /* punpckhdq mm2, mm3 */
/* ea7d2f: pfmul mm3, mm4 */
  guest_unsupported(0xea7d2f); /* pfmul mm3, mm4 */
/* ea7d33: punpckldq mm0, mm0 */
  guest_unsupported(0xea7d33); /* punpckldq mm0, mm0 */
/* ea7d36: pfmul mm2, mm4 */
  guest_unsupported(0xea7d36); /* pfmul mm2, mm4 */
/* ea7d3a: punpckldq mm1, mm1 */
  guest_unsupported(0xea7d3a); /* punpckldq mm1, mm1 */
/* ea7d3d: pfmul mm2, mm0 */
  guest_unsupported(0xea7d3d); /* pfmul mm2, mm0 */
/* ea7d41: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea7d44: pfmul mm3, mm0 */
  guest_unsupported(0xea7d44); /* pfmul mm3, mm0 */
/* ea7d48: pfmul mm4, mm4 */
  guest_unsupported(0xea7d48); /* pfmul mm4, mm4 */
/* ea7d4c: pfmul mm5, mm5 */
  guest_unsupported(0xea7d4c); /* pfmul mm5, mm5 */
/* ea7d50: pfmul mm4, mm0 */
  guest_unsupported(0xea7d50); /* pfmul mm4, mm0 */
/* ea7d54: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* ea7d58: pfmul mm5, mm0 */
  guest_unsupported(0xea7d58); /* pfmul mm5, mm0 */
/* ea7d5c: pfadd mm4, mm1 */
  guest_unsupported(0xea7d5c); /* pfadd mm4, mm1 */
/* ea7d60: pfadd mm5, mm1 */
  guest_unsupported(0xea7d60); /* pfadd mm5, mm1 */
/* ea7d64: movd mm1, dword ptr [esp + 0xc] */
  guest_unsupported(0xea7d64); /* movd mm1, dword ptr [esp + 0xc] */
/* ea7d69: pxor mm0, mm0 */
  guest_unsupported(0xea7d69); /* pxor mm0, mm0 */
/* ea7d6c: punpckldq mm1, mm1 */
  guest_unsupported(0xea7d6c); /* punpckldq mm1, mm1 */
/* ea7d6f: pfmul mm6, mm1 */
  guest_unsupported(0xea7d6f); /* pfmul mm6, mm1 */
/* ea7d73: punpckldq mm5, mm0 */
  guest_unsupported(0xea7d73); /* punpckldq mm5, mm0 */
/* ea7d76: pfmul mm7, mm1 */
  guest_unsupported(0xea7d76); /* pfmul mm7, mm1 */
/* ea7d7a: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea7d7e: punpckldq mm7, mm6 */
  guest_unsupported(0xea7d7e); /* punpckldq mm7, mm6 */
/* ea7d81: movq mm1, mm2 */
  MMX[1] = MMX[2];
/* ea7d84: punpckhdq mm6, mm6 */
  guest_unsupported(0xea7d84); /* punpckhdq mm6, mm6 */
/* ea7d87: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea7d8b: pfsub mm2, mm7 */
  guest_unsupported(0xea7d8b); /* pfsub mm2, mm7 */
/* ea7d8f: pfadd mm1, mm7 */
  guest_unsupported(0xea7d8f); /* pfadd mm1, mm7 */
/* ea7d93: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea7d96: pfsub mm3, mm6 */
  guest_unsupported(0xea7d96); /* pfsub mm3, mm6 */
/* ea7d9a: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* ea7d9d: punpckldq mm4, mm1 */
  guest_unsupported(0xea7d9d); /* punpckldq mm4, mm1 */
/* ea7da0: punpckldq mm3, mm0 */
  guest_unsupported(0xea7da0); /* punpckldq mm3, mm0 */
/* ea7da3: punpckhdq mm1, mm0 */
  guest_unsupported(0xea7da3); /* punpckhdq mm1, mm0 */
/* ea7da6: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* ea7da9: punpckldq mm7, mm7 */
  guest_unsupported(0xea7da9); /* punpckldq mm7, mm7 */
/* ea7dac: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea7db0: punpckhdq mm0, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7db0); /* punpckhdq mm0, qword ptr [0xeb3ba0] */
/* ea7db7: pfadd mm7, mm6 */
  guest_unsupported(0xea7db7); /* pfadd mm7, mm6 */
/* ea7dbb: movq qword ptr [eax + 0x18], mm1 */
  W64((uint32_t)(eax + 0x18u), MMX[1]);
/* ea7dbf: punpckhdq mm5, mm5 */
  guest_unsupported(0xea7dbf); /* punpckhdq mm5, mm5 */
/* ea7dc2: movq qword ptr [eax + 0x38], mm0 */
  W64((uint32_t)(eax + 0x38u), MMX[0]);
/* ea7dc6: punpckhdq mm7, mm2 */
  guest_unsupported(0xea7dc6); /* punpckhdq mm7, mm2 */
/* ea7dc9: punpckldq mm2, mm5 */
  guest_unsupported(0xea7dc9); /* punpckldq mm2, mm5 */
/* ea7dcc: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea7dd0: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea7dd4: mov esp, ebp */
  esp = ebp;
/* ea7dd6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea7dd7: femms  */
  guest_unsupported(0xea7dd7); /* femms  */
/* ea7dd9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea7ddc(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea7ddc: /* ea7ddc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea7ddd: mov ebp, esp */
  ebp = esp;
/* ea7ddf: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea7de5: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* ea7de8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* ea7deb: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea7dee: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea7df0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea7df3: je 0xea8a1f */
  if (zf) goto L_ea8a1f;
L_ea7df9: /* ea7df9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea7dfb: je 0xea89e1 */
  if (zf) goto L_ea89e1;
L_ea7e01: /* ea7e01: movq mm1, qword ptr [0xeb3b80] */
  MMX[1] = R64((uint32_t)(0xeb3b80u));
/* ea7e08: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea7e0b: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea7e0b); /* movd mm4, dword ptr [edx + 8] */
/* ea7e0f: pxor mm5, mm5 */
  guest_unsupported(0xea7e0f); /* pxor mm5, mm5 */
/* ea7e12: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea7e15: punpckldq mm2, mm5 */
  guest_unsupported(0xea7e15); /* punpckldq mm2, mm5 */
/* ea7e18: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* ea7e1b: punpckhdq mm5, mm3 */
  guest_unsupported(0xea7e1b); /* punpckhdq mm5, mm3 */
/* ea7e1e: movq qword ptr [esp], mm2 */
  W64((uint32_t)(esp), MMX[2]);
/* ea7e22: movq qword ptr [esp + 8], mm0 */
  W64((uint32_t)(esp + 0x8u), MMX[0]);
/* ea7e27: movq qword ptr [esp + 0x10], mm5 */
  W64((uint32_t)(esp + 0x10u), MMX[5]);
/* ea7e2c: movq qword ptr [esp + 0x18], mm0 */
  W64((uint32_t)(esp + 0x18u), MMX[0]);
/* ea7e31: movq qword ptr [esp + 0x20], mm0 */
  W64((uint32_t)(esp + 0x20u), MMX[0]);
/* ea7e36: movq qword ptr [esp + 0x28], mm4 */
  W64((uint32_t)(esp + 0x28u), MMX[4]);
/* ea7e3b: movq qword ptr [esp + 0x30], mm0 */
  W64((uint32_t)(esp + 0x30u), MMX[0]);
/* ea7e40: movq qword ptr [esp + 0x38], mm1 */
  W64((uint32_t)(esp + 0x38u), MMX[1]);
/* ea7e45: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* ea7e49: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea7e4c: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea7e50: pswapd mm3, mm0 */
  guest_unsupported(0xea7e50); /* pswapd mm3, mm0 */
/* ea7e54: movq mm6, mm0 */
  MMX[6] = MMX[0];
/* ea7e57: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea7e5a: pfadd mm0, mm0 */
  guest_unsupported(0xea7e5a); /* pfadd mm0, mm0 */
/* ea7e5e: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea7e61: punpckhdq mm6, mm1 */
  guest_unsupported(0xea7e61); /* punpckhdq mm6, mm1 */
/* ea7e64: pfadd mm1, mm1 */
  guest_unsupported(0xea7e64); /* pfadd mm1, mm1 */
/* ea7e68: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea7e6b: pfmul mm0, mm2 */
  guest_unsupported(0xea7e6b); /* pfmul mm0, mm2 */
/* ea7e6f: punpckldq mm5, mm1 */
  guest_unsupported(0xea7e6f); /* punpckldq mm5, mm1 */
/* ea7e72: pfmul mm2, mm1 */
  guest_unsupported(0xea7e72); /* pfmul mm2, mm1 */
/* ea7e76: pfmul mm3, mm1 */
  guest_unsupported(0xea7e76); /* pfmul mm3, mm1 */
/* ea7e7a: pfmul mm1, mm4 */
  guest_unsupported(0xea7e7a); /* pfmul mm1, mm4 */
/* ea7e7e: pfmul mm6, mm5 */
  guest_unsupported(0xea7e7e); /* pfmul mm6, mm5 */
/* ea7e82: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea7e85: pfsubr mm0, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7e85); /* pfsubr mm0, qword ptr [0xeb3ba0] */
/* ea7e8d: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea7e90: punpckldq mm1, mm1 */
  guest_unsupported(0xea7e90); /* punpckldq mm1, mm1 */
/* ea7e93: pfpnacc mm3, mm3 */
  guest_unsupported(0xea7e93); /* pfpnacc mm3, mm3 */
/* ea7e97: pfacc mm4, mm4 */
  guest_unsupported(0xea7e97); /* pfacc mm4, mm4 */
/* ea7e9b: pfpnacc mm6, mm6 */
  guest_unsupported(0xea7e9b); /* pfpnacc mm6, mm6 */
/* ea7e9f: pfpnacc mm2, mm2 */
  guest_unsupported(0xea7e9f); /* pfpnacc mm2, mm2 */
/* ea7ea3: pfsub mm0, mm1 */
  guest_unsupported(0xea7ea3); /* pfsub mm0, mm1 */
/* ea7ea7: pswapd mm5, mm2 */
  guest_unsupported(0xea7ea7); /* pswapd mm5, mm2 */
/* ea7eab: pfsubr mm4, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea7eab); /* pfsubr mm4, qword ptr [0xeb3ba0] */
/* ea7eb3: pxor mm7, mm7 */
  guest_unsupported(0xea7eb3); /* pxor mm7, mm7 */
/* ea7eb6: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea7eb9: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea7ebd: punpckldq mm5, mm3 */
  guest_unsupported(0xea7ebd); /* punpckldq mm5, mm3 */
/* ea7ec0: punpckldq mm2, mm7 */
  guest_unsupported(0xea7ec0); /* punpckldq mm2, mm7 */
/* ea7ec3: punpckhdq mm4, mm7 */
  guest_unsupported(0xea7ec3); /* punpckhdq mm4, mm7 */
/* ea7ec6: punpckhdq mm0, mm6 */
  guest_unsupported(0xea7ec6); /* punpckhdq mm0, mm6 */
/* ea7ec9: movq qword ptr [eax + 0x20], mm5 */
  W64((uint32_t)(eax + 0x20u), MMX[5]);
/* ea7ecd: punpckhdq mm3, mm7 */
  guest_unsupported(0xea7ecd); /* punpckhdq mm3, mm7 */
/* ea7ed0: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea7ed4: punpckldq mm6, mm1 */
  guest_unsupported(0xea7ed4); /* punpckldq mm6, mm1 */
/* ea7ed7: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea7edb: punpckldq mm7, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea7edb); /* punpckldq mm7, dword ptr [0xeb3ba0] */
/* ea7ee2: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea7ee5: movq qword ptr [eax + 0x10], mm6 */
  W64((uint32_t)(eax + 0x10u), MMX[6]);
/* ea7ee9: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea7eed: movq qword ptr [eax + 0x38], mm7 */
  W64((uint32_t)(eax + 0x38u), MMX[7]);
/* ea7ef1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* ea7ef4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea7ef6: je 0xea85c9 */
  if (zf) goto L_ea85c9;
L_ea7efc: /* ea7efc: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea7f01: movq mm1, qword ptr [esp + 0x50] */
  MMX[1] = R64((uint32_t)(esp + 0x50u));
/* ea7f06: movq mm3, qword ptr [esp + 0x68] */
  MMX[3] = R64((uint32_t)(esp + 0x68u));
/* ea7f0b: movq mm4, qword ptr [esp + 0x78] */
  MMX[4] = R64((uint32_t)(esp + 0x78u));
/* ea7f10: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea7f13: punpckldq mm0, mm1 */
  guest_unsupported(0xea7f13); /* punpckldq mm0, mm1 */
/* ea7f16: punpckhdq mm2, mm1 */
  guest_unsupported(0xea7f16); /* punpckhdq mm2, mm1 */
/* ea7f19: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea7f1c: movq qword ptr [esp + 0x80], mm0 */
  W64((uint32_t)(esp + 0x80u), MMX[0]);
/* ea7f24: movq qword ptr [esp + 0x90], mm2 */
  W64((uint32_t)(esp + 0x90u), MMX[2]);
/* ea7f2c: movq mm6, qword ptr [esp + 0x48] */
  MMX[6] = R64((uint32_t)(esp + 0x48u));
/* ea7f31: punpckldq mm3, mm4 */
  guest_unsupported(0xea7f31); /* punpckldq mm3, mm4 */
/* ea7f34: movq mm7, qword ptr [esp + 0x58] */
  MMX[7] = R64((uint32_t)(esp + 0x58u));
/* ea7f39: movq mm0, qword ptr [esp + 0x60] */
  MMX[0] = R64((uint32_t)(esp + 0x60u));
/* ea7f3e: punpckhdq mm5, mm4 */
  guest_unsupported(0xea7f3e); /* punpckhdq mm5, mm4 */
/* ea7f41: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea7f44: movq qword ptr [esp + 0xa8], mm3 */
  W64((uint32_t)(esp + 0xa8u), MMX[3]);
/* ea7f4c: movq qword ptr [esp + 0xb8], mm5 */
  W64((uint32_t)(esp + 0xb8u), MMX[5]);
/* ea7f54: punpckldq mm6, mm7 */
  guest_unsupported(0xea7f54); /* punpckldq mm6, mm7 */
/* ea7f57: movq mm4, qword ptr [esp + 0x70] */
  MMX[4] = R64((uint32_t)(esp + 0x70u));
/* ea7f5c: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea7f5f: punpckhdq mm1, mm7 */
  guest_unsupported(0xea7f5f); /* punpckhdq mm1, mm7 */
/* ea7f62: movq qword ptr [esp + 0xa0], mm6 */
  W64((uint32_t)(esp + 0xa0u), MMX[6]);
/* ea7f6a: punpckhdq mm0, mm4 */
  guest_unsupported(0xea7f6a); /* punpckhdq mm0, mm4 */
/* ea7f6d: punpckldq mm2, mm4 */
  guest_unsupported(0xea7f6d); /* punpckldq mm2, mm4 */
/* ea7f70: movq qword ptr [esp + 0xb0], mm1 */
  W64((uint32_t)(esp + 0xb0u), MMX[1]);
/* ea7f78: movq qword ptr [esp + 0x98], mm0 */
  W64((uint32_t)(esp + 0x98u), MMX[0]);
/* ea7f80: movq qword ptr [esp + 0x88], mm2 */
  W64((uint32_t)(esp + 0x88u), MMX[2]);
/* ea7f88: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea7f8b: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* ea7f8e: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea7f8e); /* movd mm4, dword ptr [edx + 8] */
/* ea7f92: movd mm1, dword ptr [0xeb3b90] */
  guest_unsupported(0xea7f92); /* movd mm1, dword ptr [0xeb3b90] */
/* ea7f99: pxor mm0, mm0 */
  guest_unsupported(0xea7f99); /* pxor mm0, mm0 */
/* ea7f9c: pswapd mm2, mm1 */
  guest_unsupported(0xea7f9c); /* pswapd mm2, mm1 */
/* ea7fa0: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea7fa3: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea7fa7: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea7fab: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea7faf: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea7fb3: movq qword ptr [eax + 0x28], mm1 */
  W64((uint32_t)(eax + 0x28u), MMX[1]);
/* ea7fb7: pfsub mm2, mm4 */
  guest_unsupported(0xea7fb7); /* pfsub mm2, mm4 */
/* ea7fbb: pfsub mm0, mm3 */
  guest_unsupported(0xea7fbb); /* pfsub mm0, mm3 */
/* ea7fbf: movq qword ptr [eax + 0x38], mm2 */
  W64((uint32_t)(eax + 0x38u), MMX[2]);
/* ea7fc3: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea7fc7: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea7fca: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea7fce: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea7fd6: punpckhdq mm2, mm0 */
  guest_unsupported(0xea7fd6); /* punpckhdq mm2, mm0 */
/* ea7fd9: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea7fe1: punpckhdq mm3, mm1 */
  guest_unsupported(0xea7fe1); /* punpckhdq mm3, mm1 */
/* ea7fe4: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea7fec: punpckldq mm0, mm0 */
  guest_unsupported(0xea7fec); /* punpckldq mm0, mm0 */
/* ea7fef: punpckldq mm1, mm1 */
  guest_unsupported(0xea7fef); /* punpckldq mm1, mm1 */
/* ea7ff2: pfmul mm4, mm0 */
  guest_unsupported(0xea7ff2); /* pfmul mm4, mm0 */
/* ea7ff6: punpckhdq mm2, mm2 */
  guest_unsupported(0xea7ff6); /* punpckhdq mm2, mm2 */
/* ea7ff9: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea7ff9); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea8002: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea800a: pfmul mm5, mm2 */
  guest_unsupported(0xea800a); /* pfmul mm5, mm2 */
/* ea800e: punpckhdq mm3, mm3 */
  guest_unsupported(0xea800e); /* punpckhdq mm3, mm3 */
/* ea8011: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea8011); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea801a: pfadd mm5, mm4 */
  guest_unsupported(0xea801a); /* pfadd mm5, mm4 */
/* ea801e: pfmul mm6, mm1 */
  guest_unsupported(0xea801e); /* pfmul mm6, mm1 */
/* ea8022: pfadd mm2, mm0 */
  guest_unsupported(0xea8022); /* pfadd mm2, mm0 */
/* ea8026: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea8026); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea802f: pfadd mm6, mm5 */
  guest_unsupported(0xea802f); /* pfadd mm6, mm5 */
/* ea8033: pfmul mm7, mm3 */
  guest_unsupported(0xea8033); /* pfmul mm7, mm3 */
/* ea8037: pfadd mm2, mm1 */
  guest_unsupported(0xea8037); /* pfadd mm2, mm1 */
/* ea803b: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea803b); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea8044: pfadd mm7, mm6 */
  guest_unsupported(0xea8044); /* pfadd mm7, mm6 */
/* ea8048: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea804c: pfadd mm3, mm2 */
  guest_unsupported(0xea804c); /* pfadd mm3, mm2 */
/* ea8050: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea8054: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8057: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea805f: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea8063: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8063); /* punpckhdq mm2, mm0 */
/* ea8066: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea806e: punpckhdq mm3, mm1 */
  guest_unsupported(0xea806e); /* punpckhdq mm3, mm1 */
/* ea8071: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea8079: punpckldq mm0, mm0 */
  guest_unsupported(0xea8079); /* punpckldq mm0, mm0 */
/* ea807c: punpckldq mm1, mm1 */
  guest_unsupported(0xea807c); /* punpckldq mm1, mm1 */
/* ea807f: pfmul mm4, mm0 */
  guest_unsupported(0xea807f); /* pfmul mm4, mm0 */
/* ea8083: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8083); /* punpckhdq mm2, mm2 */
/* ea8086: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea8086); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea808f: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea8097: pfmul mm5, mm2 */
  guest_unsupported(0xea8097); /* pfmul mm5, mm2 */
/* ea809b: punpckhdq mm3, mm3 */
  guest_unsupported(0xea809b); /* punpckhdq mm3, mm3 */
/* ea809e: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea809e); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea80a7: pfadd mm5, mm4 */
  guest_unsupported(0xea80a7); /* pfadd mm5, mm4 */
/* ea80ab: pfmul mm6, mm1 */
  guest_unsupported(0xea80ab); /* pfmul mm6, mm1 */
/* ea80af: pfadd mm2, mm0 */
  guest_unsupported(0xea80af); /* pfadd mm2, mm0 */
/* ea80b3: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea80b3); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea80bc: pfadd mm6, mm5 */
  guest_unsupported(0xea80bc); /* pfadd mm6, mm5 */
/* ea80c0: pfmul mm7, mm3 */
  guest_unsupported(0xea80c0); /* pfmul mm7, mm3 */
/* ea80c4: pfadd mm2, mm1 */
  guest_unsupported(0xea80c4); /* pfadd mm2, mm1 */
/* ea80c8: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea80c8); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea80d1: pfadd mm7, mm6 */
  guest_unsupported(0xea80d1); /* pfadd mm7, mm6 */
/* ea80d5: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea80d9: pfadd mm3, mm2 */
  guest_unsupported(0xea80d9); /* pfadd mm3, mm2 */
/* ea80dd: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea80e1: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea80e5: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea80ed: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea80f1: punpckhdq mm2, mm0 */
  guest_unsupported(0xea80f1); /* punpckhdq mm2, mm0 */
/* ea80f4: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea80fc: punpckhdq mm3, mm1 */
  guest_unsupported(0xea80fc); /* punpckhdq mm3, mm1 */
/* ea80ff: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea8107: punpckldq mm0, mm0 */
  guest_unsupported(0xea8107); /* punpckldq mm0, mm0 */
/* ea810a: punpckldq mm1, mm1 */
  guest_unsupported(0xea810a); /* punpckldq mm1, mm1 */
/* ea810d: pfmul mm4, mm0 */
  guest_unsupported(0xea810d); /* pfmul mm4, mm0 */
/* ea8111: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8111); /* punpckhdq mm2, mm2 */
/* ea8114: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea8114); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea811d: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea8125: pfmul mm5, mm2 */
  guest_unsupported(0xea8125); /* pfmul mm5, mm2 */
/* ea8129: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8129); /* punpckhdq mm3, mm3 */
/* ea812c: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea812c); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea8135: pfadd mm5, mm4 */
  guest_unsupported(0xea8135); /* pfadd mm5, mm4 */
/* ea8139: pfmul mm6, mm1 */
  guest_unsupported(0xea8139); /* pfmul mm6, mm1 */
/* ea813d: pfadd mm2, mm0 */
  guest_unsupported(0xea813d); /* pfadd mm2, mm0 */
/* ea8141: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea8141); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea814a: pfadd mm6, mm5 */
  guest_unsupported(0xea814a); /* pfadd mm6, mm5 */
/* ea814e: pfmul mm7, mm3 */
  guest_unsupported(0xea814e); /* pfmul mm7, mm3 */
/* ea8152: pfadd mm2, mm1 */
  guest_unsupported(0xea8152); /* pfadd mm2, mm1 */
/* ea8156: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea8156); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea815f: pfadd mm7, mm6 */
  guest_unsupported(0xea815f); /* pfadd mm7, mm6 */
/* ea8163: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8167: pfadd mm3, mm2 */
  guest_unsupported(0xea8167); /* pfadd mm3, mm2 */
/* ea816b: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea816f: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea8173: movq mm4, qword ptr [esp + 0x80] */
  MMX[4] = R64((uint32_t)(esp + 0x80u));
/* ea817b: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea817f: punpckhdq mm2, mm0 */
  guest_unsupported(0xea817f); /* punpckhdq mm2, mm0 */
/* ea8182: movq mm5, qword ptr [esp + 0x90] */
  MMX[5] = R64((uint32_t)(esp + 0x90u));
/* ea818a: punpckhdq mm3, mm1 */
  guest_unsupported(0xea818a); /* punpckhdq mm3, mm1 */
/* ea818d: movq mm6, qword ptr [esp + 0xa0] */
  MMX[6] = R64((uint32_t)(esp + 0xa0u));
/* ea8195: punpckldq mm0, mm0 */
  guest_unsupported(0xea8195); /* punpckldq mm0, mm0 */
/* ea8198: punpckldq mm1, mm1 */
  guest_unsupported(0xea8198); /* punpckldq mm1, mm1 */
/* ea819b: pfmul mm4, mm0 */
  guest_unsupported(0xea819b); /* pfmul mm4, mm0 */
/* ea819f: punpckhdq mm2, mm2 */
  guest_unsupported(0xea819f); /* punpckhdq mm2, mm2 */
/* ea81a2: pfmul mm0, qword ptr [esp + 0x88] */
  guest_unsupported(0xea81a2); /* pfmul mm0, qword ptr [esp + 0x88] */
/* ea81ab: movq mm7, qword ptr [esp + 0xb0] */
  MMX[7] = R64((uint32_t)(esp + 0xb0u));
/* ea81b3: pfmul mm5, mm2 */
  guest_unsupported(0xea81b3); /* pfmul mm5, mm2 */
/* ea81b7: punpckhdq mm3, mm3 */
  guest_unsupported(0xea81b7); /* punpckhdq mm3, mm3 */
/* ea81ba: pfmul mm2, qword ptr [esp + 0x98] */
  guest_unsupported(0xea81ba); /* pfmul mm2, qword ptr [esp + 0x98] */
/* ea81c3: pfadd mm5, mm4 */
  guest_unsupported(0xea81c3); /* pfadd mm5, mm4 */
/* ea81c7: pfmul mm6, mm1 */
  guest_unsupported(0xea81c7); /* pfmul mm6, mm1 */
/* ea81cb: pfadd mm2, mm0 */
  guest_unsupported(0xea81cb); /* pfadd mm2, mm0 */
/* ea81cf: pfmul mm1, qword ptr [esp + 0xa8] */
  guest_unsupported(0xea81cf); /* pfmul mm1, qword ptr [esp + 0xa8] */
/* ea81d8: pfadd mm6, mm5 */
  guest_unsupported(0xea81d8); /* pfadd mm6, mm5 */
/* ea81dc: pfmul mm7, mm3 */
  guest_unsupported(0xea81dc); /* pfmul mm7, mm3 */
/* ea81e0: pfadd mm2, mm1 */
  guest_unsupported(0xea81e0); /* pfadd mm2, mm1 */
/* ea81e4: pfmul mm3, qword ptr [esp + 0xb8] */
  guest_unsupported(0xea81e4); /* pfmul mm3, qword ptr [esp + 0xb8] */
/* ea81ed: pfadd mm7, mm6 */
  guest_unsupported(0xea81ed); /* pfadd mm7, mm6 */
/* ea81f1: pfadd mm3, mm2 */
  guest_unsupported(0xea81f1); /* pfadd mm3, mm2 */
/* ea81f5: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea81f9: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea81fd: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea8200: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea8204: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea8208: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8208); /* punpckhdq mm2, mm0 */
/* ea820b: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea8210: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8210); /* punpckhdq mm3, mm1 */
/* ea8213: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea8218: punpckldq mm0, mm0 */
  guest_unsupported(0xea8218); /* punpckldq mm0, mm0 */
/* ea821b: punpckldq mm1, mm1 */
  guest_unsupported(0xea821b); /* punpckldq mm1, mm1 */
/* ea821e: pfmul mm4, mm0 */
  guest_unsupported(0xea821e); /* pfmul mm4, mm0 */
/* ea8222: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8222); /* punpckhdq mm2, mm2 */
/* ea8225: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea8225); /* pfmul mm0, qword ptr [esp + 8] */
/* ea822b: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea8230: pfmul mm5, mm2 */
  guest_unsupported(0xea8230); /* pfmul mm5, mm2 */
/* ea8234: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8234); /* punpckhdq mm3, mm3 */
/* ea8237: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea8237); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea823d: pfadd mm5, mm4 */
  guest_unsupported(0xea823d); /* pfadd mm5, mm4 */
/* ea8241: pfmul mm6, mm1 */
  guest_unsupported(0xea8241); /* pfmul mm6, mm1 */
/* ea8245: pfadd mm2, mm0 */
  guest_unsupported(0xea8245); /* pfadd mm2, mm0 */
/* ea8249: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea8249); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea824f: pfadd mm6, mm5 */
  guest_unsupported(0xea824f); /* pfadd mm6, mm5 */
/* ea8253: pfmul mm7, mm3 */
  guest_unsupported(0xea8253); /* pfmul mm7, mm3 */
/* ea8257: pfadd mm2, mm1 */
  guest_unsupported(0xea8257); /* pfadd mm2, mm1 */
/* ea825b: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea825b); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea8261: pfadd mm7, mm6 */
  guest_unsupported(0xea8261); /* pfadd mm7, mm6 */
/* ea8265: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea8269: pfadd mm3, mm2 */
  guest_unsupported(0xea8269); /* pfadd mm3, mm2 */
/* ea826d: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea8271: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8274: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea8278: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea827c: punpckhdq mm2, mm0 */
  guest_unsupported(0xea827c); /* punpckhdq mm2, mm0 */
/* ea827f: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea8284: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8284); /* punpckhdq mm3, mm1 */
/* ea8287: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea828c: punpckldq mm0, mm0 */
  guest_unsupported(0xea828c); /* punpckldq mm0, mm0 */
/* ea828f: punpckldq mm1, mm1 */
  guest_unsupported(0xea828f); /* punpckldq mm1, mm1 */
/* ea8292: pfmul mm4, mm0 */
  guest_unsupported(0xea8292); /* pfmul mm4, mm0 */
/* ea8296: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8296); /* punpckhdq mm2, mm2 */
/* ea8299: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea8299); /* pfmul mm0, qword ptr [esp + 8] */
/* ea829f: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea82a4: pfmul mm5, mm2 */
  guest_unsupported(0xea82a4); /* pfmul mm5, mm2 */
/* ea82a8: punpckhdq mm3, mm3 */
  guest_unsupported(0xea82a8); /* punpckhdq mm3, mm3 */
/* ea82ab: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea82ab); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea82b1: pfadd mm5, mm4 */
  guest_unsupported(0xea82b1); /* pfadd mm5, mm4 */
/* ea82b5: pfmul mm6, mm1 */
  guest_unsupported(0xea82b5); /* pfmul mm6, mm1 */
/* ea82b9: pfadd mm2, mm0 */
  guest_unsupported(0xea82b9); /* pfadd mm2, mm0 */
/* ea82bd: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea82bd); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea82c3: pfadd mm6, mm5 */
  guest_unsupported(0xea82c3); /* pfadd mm6, mm5 */
/* ea82c7: pfmul mm7, mm3 */
  guest_unsupported(0xea82c7); /* pfmul mm7, mm3 */
/* ea82cb: pfadd mm2, mm1 */
  guest_unsupported(0xea82cb); /* pfadd mm2, mm1 */
/* ea82cf: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea82cf); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea82d5: pfadd mm7, mm6 */
  guest_unsupported(0xea82d5); /* pfadd mm7, mm6 */
/* ea82d9: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea82dd: pfadd mm3, mm2 */
  guest_unsupported(0xea82dd); /* pfadd mm3, mm2 */
/* ea82e1: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea82e5: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea82e9: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea82ed: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea82f1: punpckhdq mm2, mm0 */
  guest_unsupported(0xea82f1); /* punpckhdq mm2, mm0 */
/* ea82f4: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea82f9: punpckhdq mm3, mm1 */
  guest_unsupported(0xea82f9); /* punpckhdq mm3, mm1 */
/* ea82fc: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea8301: punpckldq mm0, mm0 */
  guest_unsupported(0xea8301); /* punpckldq mm0, mm0 */
/* ea8304: punpckldq mm1, mm1 */
  guest_unsupported(0xea8304); /* punpckldq mm1, mm1 */
/* ea8307: pfmul mm4, mm0 */
  guest_unsupported(0xea8307); /* pfmul mm4, mm0 */
/* ea830b: punpckhdq mm2, mm2 */
  guest_unsupported(0xea830b); /* punpckhdq mm2, mm2 */
/* ea830e: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea830e); /* pfmul mm0, qword ptr [esp + 8] */
/* ea8314: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea8319: pfmul mm5, mm2 */
  guest_unsupported(0xea8319); /* pfmul mm5, mm2 */
/* ea831d: punpckhdq mm3, mm3 */
  guest_unsupported(0xea831d); /* punpckhdq mm3, mm3 */
/* ea8320: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea8320); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea8326: pfadd mm5, mm4 */
  guest_unsupported(0xea8326); /* pfadd mm5, mm4 */
/* ea832a: pfmul mm6, mm1 */
  guest_unsupported(0xea832a); /* pfmul mm6, mm1 */
/* ea832e: pfadd mm2, mm0 */
  guest_unsupported(0xea832e); /* pfadd mm2, mm0 */
/* ea8332: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea8332); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea8338: pfadd mm6, mm5 */
  guest_unsupported(0xea8338); /* pfadd mm6, mm5 */
/* ea833c: pfmul mm7, mm3 */
  guest_unsupported(0xea833c); /* pfmul mm7, mm3 */
/* ea8340: pfadd mm2, mm1 */
  guest_unsupported(0xea8340); /* pfadd mm2, mm1 */
/* ea8344: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea8344); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea834a: pfadd mm7, mm6 */
  guest_unsupported(0xea834a); /* pfadd mm7, mm6 */
/* ea834e: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8352: pfadd mm3, mm2 */
  guest_unsupported(0xea8352); /* pfadd mm3, mm2 */
/* ea8356: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea835a: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea835e: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea8362: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea8366: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8366); /* punpckhdq mm2, mm0 */
/* ea8369: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea836e: punpckhdq mm3, mm1 */
  guest_unsupported(0xea836e); /* punpckhdq mm3, mm1 */
/* ea8371: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea8376: punpckldq mm0, mm0 */
  guest_unsupported(0xea8376); /* punpckldq mm0, mm0 */
/* ea8379: punpckldq mm1, mm1 */
  guest_unsupported(0xea8379); /* punpckldq mm1, mm1 */
/* ea837c: pfmul mm4, mm0 */
  guest_unsupported(0xea837c); /* pfmul mm4, mm0 */
/* ea8380: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8380); /* punpckhdq mm2, mm2 */
/* ea8383: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea8383); /* pfmul mm0, qword ptr [esp + 8] */
/* ea8389: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea838e: pfmul mm5, mm2 */
  guest_unsupported(0xea838e); /* pfmul mm5, mm2 */
/* ea8392: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8392); /* punpckhdq mm3, mm3 */
/* ea8395: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea8395); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea839b: pfadd mm5, mm4 */
  guest_unsupported(0xea839b); /* pfadd mm5, mm4 */
/* ea839f: pfmul mm6, mm1 */
  guest_unsupported(0xea839f); /* pfmul mm6, mm1 */
/* ea83a3: pfadd mm2, mm0 */
  guest_unsupported(0xea83a3); /* pfadd mm2, mm0 */
/* ea83a7: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea83a7); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea83ad: pfadd mm6, mm5 */
  guest_unsupported(0xea83ad); /* pfadd mm6, mm5 */
/* ea83b1: pfmul mm7, mm3 */
  guest_unsupported(0xea83b1); /* pfmul mm7, mm3 */
/* ea83b5: pfadd mm2, mm1 */
  guest_unsupported(0xea83b5); /* pfadd mm2, mm1 */
/* ea83b9: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea83b9); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea83bf: pfadd mm7, mm6 */
  guest_unsupported(0xea83bf); /* pfadd mm7, mm6 */
/* ea83c3: pfadd mm3, mm2 */
  guest_unsupported(0xea83c3); /* pfadd mm3, mm2 */
/* ea83c7: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea83cb: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea83cf: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea83d2: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea83d6: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea83db: punpckhdq mm2, mm0 */
  guest_unsupported(0xea83db); /* punpckhdq mm2, mm0 */
/* ea83de: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea83e3: punpckhdq mm3, mm1 */
  guest_unsupported(0xea83e3); /* punpckhdq mm3, mm1 */
/* ea83e6: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea83eb: punpckldq mm0, mm0 */
  guest_unsupported(0xea83eb); /* punpckldq mm0, mm0 */
/* ea83ee: punpckldq mm1, mm1 */
  guest_unsupported(0xea83ee); /* punpckldq mm1, mm1 */
/* ea83f1: pfmul mm4, mm0 */
  guest_unsupported(0xea83f1); /* pfmul mm4, mm0 */
/* ea83f5: punpckhdq mm2, mm2 */
  guest_unsupported(0xea83f5); /* punpckhdq mm2, mm2 */
/* ea83f8: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea83f8); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea83fe: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8403: pfmul mm5, mm2 */
  guest_unsupported(0xea8403); /* pfmul mm5, mm2 */
/* ea8407: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8407); /* punpckhdq mm3, mm3 */
/* ea840a: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea840a); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8410: pfadd mm5, mm4 */
  guest_unsupported(0xea8410); /* pfadd mm5, mm4 */
/* ea8414: pfmul mm6, mm1 */
  guest_unsupported(0xea8414); /* pfmul mm6, mm1 */
/* ea8418: pfadd mm2, mm0 */
  guest_unsupported(0xea8418); /* pfadd mm2, mm0 */
/* ea841c: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea841c); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8422: pfadd mm6, mm5 */
  guest_unsupported(0xea8422); /* pfadd mm6, mm5 */
/* ea8426: pfmul mm7, mm3 */
  guest_unsupported(0xea8426); /* pfmul mm7, mm3 */
/* ea842a: pfadd mm2, mm1 */
  guest_unsupported(0xea842a); /* pfadd mm2, mm1 */
/* ea842e: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea842e); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8434: pfadd mm7, mm6 */
  guest_unsupported(0xea8434); /* pfadd mm7, mm6 */
/* ea8438: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea843c: pfadd mm3, mm2 */
  guest_unsupported(0xea843c); /* pfadd mm3, mm2 */
/* ea8440: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea8444: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8447: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea844c: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea8450: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8450); /* punpckhdq mm2, mm0 */
/* ea8453: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8458: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8458); /* punpckhdq mm3, mm1 */
/* ea845b: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8460: punpckldq mm0, mm0 */
  guest_unsupported(0xea8460); /* punpckldq mm0, mm0 */
/* ea8463: punpckldq mm1, mm1 */
  guest_unsupported(0xea8463); /* punpckldq mm1, mm1 */
/* ea8466: pfmul mm4, mm0 */
  guest_unsupported(0xea8466); /* pfmul mm4, mm0 */
/* ea846a: punpckhdq mm2, mm2 */
  guest_unsupported(0xea846a); /* punpckhdq mm2, mm2 */
/* ea846d: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea846d); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8473: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8478: pfmul mm5, mm2 */
  guest_unsupported(0xea8478); /* pfmul mm5, mm2 */
/* ea847c: punpckhdq mm3, mm3 */
  guest_unsupported(0xea847c); /* punpckhdq mm3, mm3 */
/* ea847f: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea847f); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8485: pfadd mm5, mm4 */
  guest_unsupported(0xea8485); /* pfadd mm5, mm4 */
/* ea8489: pfmul mm6, mm1 */
  guest_unsupported(0xea8489); /* pfmul mm6, mm1 */
/* ea848d: pfadd mm2, mm0 */
  guest_unsupported(0xea848d); /* pfadd mm2, mm0 */
/* ea8491: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8491); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8497: pfadd mm6, mm5 */
  guest_unsupported(0xea8497); /* pfadd mm6, mm5 */
/* ea849b: pfmul mm7, mm3 */
  guest_unsupported(0xea849b); /* pfmul mm7, mm3 */
/* ea849f: pfadd mm2, mm1 */
  guest_unsupported(0xea849f); /* pfadd mm2, mm1 */
/* ea84a3: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea84a3); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea84a9: pfadd mm7, mm6 */
  guest_unsupported(0xea84a9); /* pfadd mm7, mm6 */
/* ea84ad: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea84b1: pfadd mm3, mm2 */
  guest_unsupported(0xea84b1); /* pfadd mm3, mm2 */
/* ea84b5: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea84b9: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea84bd: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea84c2: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea84c6: punpckhdq mm2, mm0 */
  guest_unsupported(0xea84c6); /* punpckhdq mm2, mm0 */
/* ea84c9: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea84ce: punpckhdq mm3, mm1 */
  guest_unsupported(0xea84ce); /* punpckhdq mm3, mm1 */
/* ea84d1: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea84d6: punpckldq mm0, mm0 */
  guest_unsupported(0xea84d6); /* punpckldq mm0, mm0 */
/* ea84d9: punpckldq mm1, mm1 */
  guest_unsupported(0xea84d9); /* punpckldq mm1, mm1 */
/* ea84dc: pfmul mm4, mm0 */
  guest_unsupported(0xea84dc); /* pfmul mm4, mm0 */
/* ea84e0: punpckhdq mm2, mm2 */
  guest_unsupported(0xea84e0); /* punpckhdq mm2, mm2 */
/* ea84e3: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea84e3); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea84e9: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea84ee: pfmul mm5, mm2 */
  guest_unsupported(0xea84ee); /* pfmul mm5, mm2 */
/* ea84f2: punpckhdq mm3, mm3 */
  guest_unsupported(0xea84f2); /* punpckhdq mm3, mm3 */
/* ea84f5: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea84f5); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea84fb: pfadd mm5, mm4 */
  guest_unsupported(0xea84fb); /* pfadd mm5, mm4 */
/* ea84ff: pfmul mm6, mm1 */
  guest_unsupported(0xea84ff); /* pfmul mm6, mm1 */
/* ea8503: pfadd mm2, mm0 */
  guest_unsupported(0xea8503); /* pfadd mm2, mm0 */
/* ea8507: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8507); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea850d: pfadd mm6, mm5 */
  guest_unsupported(0xea850d); /* pfadd mm6, mm5 */
/* ea8511: pfmul mm7, mm3 */
  guest_unsupported(0xea8511); /* pfmul mm7, mm3 */
/* ea8515: pfadd mm2, mm1 */
  guest_unsupported(0xea8515); /* pfadd mm2, mm1 */
/* ea8519: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8519); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea851f: pfadd mm7, mm6 */
  guest_unsupported(0xea851f); /* pfadd mm7, mm6 */
/* ea8523: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8527: pfadd mm3, mm2 */
  guest_unsupported(0xea8527); /* pfadd mm3, mm2 */
/* ea852b: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea852f: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea8533: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8538: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea853c: punpckhdq mm2, mm0 */
  guest_unsupported(0xea853c); /* punpckhdq mm2, mm0 */
/* ea853f: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8544: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8544); /* punpckhdq mm3, mm1 */
/* ea8547: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea854c: punpckldq mm0, mm0 */
  guest_unsupported(0xea854c); /* punpckldq mm0, mm0 */
/* ea854f: punpckldq mm1, mm1 */
  guest_unsupported(0xea854f); /* punpckldq mm1, mm1 */
/* ea8552: pfmul mm4, mm0 */
  guest_unsupported(0xea8552); /* pfmul mm4, mm0 */
/* ea8556: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8556); /* punpckhdq mm2, mm2 */
/* ea8559: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8559); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea855f: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8564: pfmul mm5, mm2 */
  guest_unsupported(0xea8564); /* pfmul mm5, mm2 */
/* ea8568: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8568); /* punpckhdq mm3, mm3 */
/* ea856b: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea856b); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8571: pfadd mm5, mm4 */
  guest_unsupported(0xea8571); /* pfadd mm5, mm4 */
/* ea8575: pfmul mm6, mm1 */
  guest_unsupported(0xea8575); /* pfmul mm6, mm1 */
/* ea8579: pfadd mm2, mm0 */
  guest_unsupported(0xea8579); /* pfadd mm2, mm0 */
/* ea857d: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea857d); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8583: pfadd mm6, mm5 */
  guest_unsupported(0xea8583); /* pfadd mm6, mm5 */
/* ea8587: pfmul mm7, mm3 */
  guest_unsupported(0xea8587); /* pfmul mm7, mm3 */
/* ea858b: pfadd mm2, mm1 */
  guest_unsupported(0xea858b); /* pfadd mm2, mm1 */
/* ea858f: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea858f); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8595: pfadd mm7, mm6 */
  guest_unsupported(0xea8595); /* pfadd mm7, mm6 */
/* ea8599: pfadd mm3, mm2 */
  guest_unsupported(0xea8599); /* pfadd mm3, mm2 */
/* ea859d: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea85a1: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea85a5: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea85a8: movq mm1, qword ptr [eax + 0x30] */
  MMX[1] = R64((uint32_t)(eax + 0x30u));
/* ea85ac: movd mm2, dword ptr [edx + 8] */
  guest_unsupported(0xea85ac); /* movd mm2, dword ptr [edx + 8] */
/* ea85b0: movd mm3, dword ptr [eax + 0x38] */
  guest_unsupported(0xea85b0); /* movd mm3, dword ptr [eax + 0x38] */
/* ea85b4: pfadd mm0, mm1 */
  guest_unsupported(0xea85b4); /* pfadd mm0, mm1 */
/* ea85b8: pfadd mm2, mm3 */
  guest_unsupported(0xea85b8); /* pfadd mm2, mm3 */
/* ea85bc: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea85c0: movd dword ptr [eax + 0x38], mm2 */
  guest_unsupported(0xea85c0); /* movd dword ptr [eax + 0x38], mm2 */
/* ea85c4: jmp 0xea8a4c */
  goto L_ea8a4c;
L_ea85c9: /* ea85c9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea85cc: movq mm0, qword ptr [esp + 0x40] */
  MMX[0] = R64((uint32_t)(esp + 0x40u));
/* ea85d1: movq mm1, qword ptr [esp + 0x50] */
  MMX[1] = R64((uint32_t)(esp + 0x50u));
/* ea85d6: movq mm3, qword ptr [esp + 0x68] */
  MMX[3] = R64((uint32_t)(esp + 0x68u));
/* ea85db: movq mm4, qword ptr [esp + 0x78] */
  MMX[4] = R64((uint32_t)(esp + 0x78u));
/* ea85e0: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea85e3: punpckldq mm0, mm1 */
  guest_unsupported(0xea85e3); /* punpckldq mm0, mm1 */
/* ea85e6: punpckhdq mm2, mm1 */
  guest_unsupported(0xea85e6); /* punpckhdq mm2, mm1 */
/* ea85e9: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea85ec: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea85ef: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea85f3: movq mm6, qword ptr [esp + 0x48] */
  MMX[6] = R64((uint32_t)(esp + 0x48u));
/* ea85f8: punpckldq mm3, mm4 */
  guest_unsupported(0xea85f8); /* punpckldq mm3, mm4 */
/* ea85fb: movq mm7, qword ptr [esp + 0x58] */
  MMX[7] = R64((uint32_t)(esp + 0x58u));
/* ea8600: movq mm0, qword ptr [esp + 0x60] */
  MMX[0] = R64((uint32_t)(esp + 0x60u));
/* ea8605: punpckhdq mm5, mm4 */
  guest_unsupported(0xea8605); /* punpckhdq mm5, mm4 */
/* ea8608: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea860b: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea860f: movq qword ptr [eax + 0x38], mm5 */
  W64((uint32_t)(eax + 0x38u), MMX[5]);
/* ea8613: punpckldq mm6, mm7 */
  guest_unsupported(0xea8613); /* punpckldq mm6, mm7 */
/* ea8616: movq mm4, qword ptr [esp + 0x70] */
  MMX[4] = R64((uint32_t)(esp + 0x70u));
/* ea861b: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea861e: punpckhdq mm1, mm7 */
  guest_unsupported(0xea861e); /* punpckhdq mm1, mm7 */
/* ea8621: movq qword ptr [eax + 0x20], mm6 */
  W64((uint32_t)(eax + 0x20u), MMX[6]);
/* ea8625: punpckhdq mm0, mm4 */
  guest_unsupported(0xea8625); /* punpckhdq mm0, mm4 */
/* ea8628: punpckldq mm2, mm4 */
  guest_unsupported(0xea8628); /* punpckldq mm2, mm4 */
/* ea862b: movq qword ptr [eax + 0x30], mm1 */
  W64((uint32_t)(eax + 0x30u), MMX[1]);
/* ea862f: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea8633: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea8637: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea863a: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea863e: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea8642: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8642); /* punpckhdq mm2, mm0 */
/* ea8645: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea864a: punpckhdq mm3, mm1 */
  guest_unsupported(0xea864a); /* punpckhdq mm3, mm1 */
/* ea864d: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea8652: punpckldq mm0, mm0 */
  guest_unsupported(0xea8652); /* punpckldq mm0, mm0 */
/* ea8655: punpckldq mm1, mm1 */
  guest_unsupported(0xea8655); /* punpckldq mm1, mm1 */
/* ea8658: pfmul mm4, mm0 */
  guest_unsupported(0xea8658); /* pfmul mm4, mm0 */
/* ea865c: punpckhdq mm2, mm2 */
  guest_unsupported(0xea865c); /* punpckhdq mm2, mm2 */
/* ea865f: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea865f); /* pfmul mm0, qword ptr [esp + 8] */
/* ea8665: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea866a: pfmul mm5, mm2 */
  guest_unsupported(0xea866a); /* pfmul mm5, mm2 */
/* ea866e: punpckhdq mm3, mm3 */
  guest_unsupported(0xea866e); /* punpckhdq mm3, mm3 */
/* ea8671: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea8671); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea8677: pfadd mm5, mm4 */
  guest_unsupported(0xea8677); /* pfadd mm5, mm4 */
/* ea867b: pfmul mm6, mm1 */
  guest_unsupported(0xea867b); /* pfmul mm6, mm1 */
/* ea867f: pfadd mm2, mm0 */
  guest_unsupported(0xea867f); /* pfadd mm2, mm0 */
/* ea8683: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea8683); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea8689: pfadd mm6, mm5 */
  guest_unsupported(0xea8689); /* pfadd mm6, mm5 */
/* ea868d: pfmul mm7, mm3 */
  guest_unsupported(0xea868d); /* pfmul mm7, mm3 */
/* ea8691: pfadd mm2, mm1 */
  guest_unsupported(0xea8691); /* pfadd mm2, mm1 */
/* ea8695: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea8695); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea869b: pfadd mm7, mm6 */
  guest_unsupported(0xea869b); /* pfadd mm7, mm6 */
/* ea869f: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea86a3: pfadd mm3, mm2 */
  guest_unsupported(0xea86a3); /* pfadd mm3, mm2 */
/* ea86a7: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea86ab: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea86ae: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea86b2: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea86b6: punpckhdq mm2, mm0 */
  guest_unsupported(0xea86b6); /* punpckhdq mm2, mm0 */
/* ea86b9: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea86be: punpckhdq mm3, mm1 */
  guest_unsupported(0xea86be); /* punpckhdq mm3, mm1 */
/* ea86c1: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea86c6: punpckldq mm0, mm0 */
  guest_unsupported(0xea86c6); /* punpckldq mm0, mm0 */
/* ea86c9: punpckldq mm1, mm1 */
  guest_unsupported(0xea86c9); /* punpckldq mm1, mm1 */
/* ea86cc: pfmul mm4, mm0 */
  guest_unsupported(0xea86cc); /* pfmul mm4, mm0 */
/* ea86d0: punpckhdq mm2, mm2 */
  guest_unsupported(0xea86d0); /* punpckhdq mm2, mm2 */
/* ea86d3: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea86d3); /* pfmul mm0, qword ptr [esp + 8] */
/* ea86d9: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea86de: pfmul mm5, mm2 */
  guest_unsupported(0xea86de); /* pfmul mm5, mm2 */
/* ea86e2: punpckhdq mm3, mm3 */
  guest_unsupported(0xea86e2); /* punpckhdq mm3, mm3 */
/* ea86e5: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea86e5); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea86eb: pfadd mm5, mm4 */
  guest_unsupported(0xea86eb); /* pfadd mm5, mm4 */
/* ea86ef: pfmul mm6, mm1 */
  guest_unsupported(0xea86ef); /* pfmul mm6, mm1 */
/* ea86f3: pfadd mm2, mm0 */
  guest_unsupported(0xea86f3); /* pfadd mm2, mm0 */
/* ea86f7: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea86f7); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea86fd: pfadd mm6, mm5 */
  guest_unsupported(0xea86fd); /* pfadd mm6, mm5 */
/* ea8701: pfmul mm7, mm3 */
  guest_unsupported(0xea8701); /* pfmul mm7, mm3 */
/* ea8705: pfadd mm2, mm1 */
  guest_unsupported(0xea8705); /* pfadd mm2, mm1 */
/* ea8709: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea8709); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea870f: pfadd mm7, mm6 */
  guest_unsupported(0xea870f); /* pfadd mm7, mm6 */
/* ea8713: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea8717: pfadd mm3, mm2 */
  guest_unsupported(0xea8717); /* pfadd mm3, mm2 */
/* ea871b: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea871f: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea8723: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea8727: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea872b: punpckhdq mm2, mm0 */
  guest_unsupported(0xea872b); /* punpckhdq mm2, mm0 */
/* ea872e: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea8733: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8733); /* punpckhdq mm3, mm1 */
/* ea8736: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea873b: punpckldq mm0, mm0 */
  guest_unsupported(0xea873b); /* punpckldq mm0, mm0 */
/* ea873e: punpckldq mm1, mm1 */
  guest_unsupported(0xea873e); /* punpckldq mm1, mm1 */
/* ea8741: pfmul mm4, mm0 */
  guest_unsupported(0xea8741); /* pfmul mm4, mm0 */
/* ea8745: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8745); /* punpckhdq mm2, mm2 */
/* ea8748: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea8748); /* pfmul mm0, qword ptr [esp + 8] */
/* ea874e: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea8753: pfmul mm5, mm2 */
  guest_unsupported(0xea8753); /* pfmul mm5, mm2 */
/* ea8757: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8757); /* punpckhdq mm3, mm3 */
/* ea875a: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea875a); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea8760: pfadd mm5, mm4 */
  guest_unsupported(0xea8760); /* pfadd mm5, mm4 */
/* ea8764: pfmul mm6, mm1 */
  guest_unsupported(0xea8764); /* pfmul mm6, mm1 */
/* ea8768: pfadd mm2, mm0 */
  guest_unsupported(0xea8768); /* pfadd mm2, mm0 */
/* ea876c: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea876c); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea8772: pfadd mm6, mm5 */
  guest_unsupported(0xea8772); /* pfadd mm6, mm5 */
/* ea8776: pfmul mm7, mm3 */
  guest_unsupported(0xea8776); /* pfmul mm7, mm3 */
/* ea877a: pfadd mm2, mm1 */
  guest_unsupported(0xea877a); /* pfadd mm2, mm1 */
/* ea877e: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea877e); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea8784: pfadd mm7, mm6 */
  guest_unsupported(0xea8784); /* pfadd mm7, mm6 */
/* ea8788: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea878c: pfadd mm3, mm2 */
  guest_unsupported(0xea878c); /* pfadd mm3, mm2 */
/* ea8790: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea8794: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea8798: movq mm4, qword ptr [esp] */
  MMX[4] = R64((uint32_t)(esp));
/* ea879c: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea87a0: punpckhdq mm2, mm0 */
  guest_unsupported(0xea87a0); /* punpckhdq mm2, mm0 */
/* ea87a3: movq mm5, qword ptr [esp + 0x10] */
  MMX[5] = R64((uint32_t)(esp + 0x10u));
/* ea87a8: punpckhdq mm3, mm1 */
  guest_unsupported(0xea87a8); /* punpckhdq mm3, mm1 */
/* ea87ab: movq mm6, qword ptr [esp + 0x20] */
  MMX[6] = R64((uint32_t)(esp + 0x20u));
/* ea87b0: punpckldq mm0, mm0 */
  guest_unsupported(0xea87b0); /* punpckldq mm0, mm0 */
/* ea87b3: punpckldq mm1, mm1 */
  guest_unsupported(0xea87b3); /* punpckldq mm1, mm1 */
/* ea87b6: pfmul mm4, mm0 */
  guest_unsupported(0xea87b6); /* pfmul mm4, mm0 */
/* ea87ba: punpckhdq mm2, mm2 */
  guest_unsupported(0xea87ba); /* punpckhdq mm2, mm2 */
/* ea87bd: pfmul mm0, qword ptr [esp + 8] */
  guest_unsupported(0xea87bd); /* pfmul mm0, qword ptr [esp + 8] */
/* ea87c3: movq mm7, qword ptr [esp + 0x30] */
  MMX[7] = R64((uint32_t)(esp + 0x30u));
/* ea87c8: pfmul mm5, mm2 */
  guest_unsupported(0xea87c8); /* pfmul mm5, mm2 */
/* ea87cc: punpckhdq mm3, mm3 */
  guest_unsupported(0xea87cc); /* punpckhdq mm3, mm3 */
/* ea87cf: pfmul mm2, qword ptr [esp + 0x18] */
  guest_unsupported(0xea87cf); /* pfmul mm2, qword ptr [esp + 0x18] */
/* ea87d5: pfadd mm5, mm4 */
  guest_unsupported(0xea87d5); /* pfadd mm5, mm4 */
/* ea87d9: pfmul mm6, mm1 */
  guest_unsupported(0xea87d9); /* pfmul mm6, mm1 */
/* ea87dd: pfadd mm2, mm0 */
  guest_unsupported(0xea87dd); /* pfadd mm2, mm0 */
/* ea87e1: pfmul mm1, qword ptr [esp + 0x28] */
  guest_unsupported(0xea87e1); /* pfmul mm1, qword ptr [esp + 0x28] */
/* ea87e7: pfadd mm6, mm5 */
  guest_unsupported(0xea87e7); /* pfadd mm6, mm5 */
/* ea87eb: pfmul mm7, mm3 */
  guest_unsupported(0xea87eb); /* pfmul mm7, mm3 */
/* ea87ef: pfadd mm2, mm1 */
  guest_unsupported(0xea87ef); /* pfadd mm2, mm1 */
/* ea87f3: pfmul mm3, qword ptr [esp + 0x38] */
  guest_unsupported(0xea87f3); /* pfmul mm3, qword ptr [esp + 0x38] */
/* ea87f9: pfadd mm7, mm6 */
  guest_unsupported(0xea87f9); /* pfadd mm7, mm6 */
/* ea87fd: pfadd mm3, mm2 */
  guest_unsupported(0xea87fd); /* pfadd mm3, mm2 */
/* ea8801: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea8805: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea8809: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea880c: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea8810: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8815: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8815); /* punpckhdq mm2, mm0 */
/* ea8818: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea881d: punpckhdq mm3, mm1 */
  guest_unsupported(0xea881d); /* punpckhdq mm3, mm1 */
/* ea8820: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8825: punpckldq mm0, mm0 */
  guest_unsupported(0xea8825); /* punpckldq mm0, mm0 */
/* ea8828: punpckldq mm1, mm1 */
  guest_unsupported(0xea8828); /* punpckldq mm1, mm1 */
/* ea882b: pfmul mm4, mm0 */
  guest_unsupported(0xea882b); /* pfmul mm4, mm0 */
/* ea882f: punpckhdq mm2, mm2 */
  guest_unsupported(0xea882f); /* punpckhdq mm2, mm2 */
/* ea8832: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8832); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8838: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea883d: pfmul mm5, mm2 */
  guest_unsupported(0xea883d); /* pfmul mm5, mm2 */
/* ea8841: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8841); /* punpckhdq mm3, mm3 */
/* ea8844: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8844); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea884a: pfadd mm5, mm4 */
  guest_unsupported(0xea884a); /* pfadd mm5, mm4 */
/* ea884e: pfmul mm6, mm1 */
  guest_unsupported(0xea884e); /* pfmul mm6, mm1 */
/* ea8852: pfadd mm2, mm0 */
  guest_unsupported(0xea8852); /* pfadd mm2, mm0 */
/* ea8856: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8856); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea885c: pfadd mm6, mm5 */
  guest_unsupported(0xea885c); /* pfadd mm6, mm5 */
/* ea8860: pfmul mm7, mm3 */
  guest_unsupported(0xea8860); /* pfmul mm7, mm3 */
/* ea8864: pfadd mm2, mm1 */
  guest_unsupported(0xea8864); /* pfadd mm2, mm1 */
/* ea8868: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8868); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea886e: pfadd mm7, mm6 */
  guest_unsupported(0xea886e); /* pfadd mm7, mm6 */
/* ea8872: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea8876: pfadd mm3, mm2 */
  guest_unsupported(0xea8876); /* pfadd mm3, mm2 */
/* ea887a: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea887e: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8881: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8886: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea888a: punpckhdq mm2, mm0 */
  guest_unsupported(0xea888a); /* punpckhdq mm2, mm0 */
/* ea888d: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8892: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8892); /* punpckhdq mm3, mm1 */
/* ea8895: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea889a: punpckldq mm0, mm0 */
  guest_unsupported(0xea889a); /* punpckldq mm0, mm0 */
/* ea889d: punpckldq mm1, mm1 */
  guest_unsupported(0xea889d); /* punpckldq mm1, mm1 */
/* ea88a0: pfmul mm4, mm0 */
  guest_unsupported(0xea88a0); /* pfmul mm4, mm0 */
/* ea88a4: punpckhdq mm2, mm2 */
  guest_unsupported(0xea88a4); /* punpckhdq mm2, mm2 */
/* ea88a7: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea88a7); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea88ad: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea88b2: pfmul mm5, mm2 */
  guest_unsupported(0xea88b2); /* pfmul mm5, mm2 */
/* ea88b6: punpckhdq mm3, mm3 */
  guest_unsupported(0xea88b6); /* punpckhdq mm3, mm3 */
/* ea88b9: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea88b9); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea88bf: pfadd mm5, mm4 */
  guest_unsupported(0xea88bf); /* pfadd mm5, mm4 */
/* ea88c3: pfmul mm6, mm1 */
  guest_unsupported(0xea88c3); /* pfmul mm6, mm1 */
/* ea88c7: pfadd mm2, mm0 */
  guest_unsupported(0xea88c7); /* pfadd mm2, mm0 */
/* ea88cb: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea88cb); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea88d1: pfadd mm6, mm5 */
  guest_unsupported(0xea88d1); /* pfadd mm6, mm5 */
/* ea88d5: pfmul mm7, mm3 */
  guest_unsupported(0xea88d5); /* pfmul mm7, mm3 */
/* ea88d9: pfadd mm2, mm1 */
  guest_unsupported(0xea88d9); /* pfadd mm2, mm1 */
/* ea88dd: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea88dd); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea88e3: pfadd mm7, mm6 */
  guest_unsupported(0xea88e3); /* pfadd mm7, mm6 */
/* ea88e7: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea88eb: pfadd mm3, mm2 */
  guest_unsupported(0xea88eb); /* pfadd mm3, mm2 */
/* ea88ef: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea88f3: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea88f7: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea88fc: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea8900: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8900); /* punpckhdq mm2, mm0 */
/* ea8903: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8908: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8908); /* punpckhdq mm3, mm1 */
/* ea890b: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8910: punpckldq mm0, mm0 */
  guest_unsupported(0xea8910); /* punpckldq mm0, mm0 */
/* ea8913: punpckldq mm1, mm1 */
  guest_unsupported(0xea8913); /* punpckldq mm1, mm1 */
/* ea8916: pfmul mm4, mm0 */
  guest_unsupported(0xea8916); /* pfmul mm4, mm0 */
/* ea891a: punpckhdq mm2, mm2 */
  guest_unsupported(0xea891a); /* punpckhdq mm2, mm2 */
/* ea891d: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea891d); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8923: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8928: pfmul mm5, mm2 */
  guest_unsupported(0xea8928); /* pfmul mm5, mm2 */
/* ea892c: punpckhdq mm3, mm3 */
  guest_unsupported(0xea892c); /* punpckhdq mm3, mm3 */
/* ea892f: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea892f); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8935: pfadd mm5, mm4 */
  guest_unsupported(0xea8935); /* pfadd mm5, mm4 */
/* ea8939: pfmul mm6, mm1 */
  guest_unsupported(0xea8939); /* pfmul mm6, mm1 */
/* ea893d: pfadd mm2, mm0 */
  guest_unsupported(0xea893d); /* pfadd mm2, mm0 */
/* ea8941: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8941); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8947: pfadd mm6, mm5 */
  guest_unsupported(0xea8947); /* pfadd mm6, mm5 */
/* ea894b: pfmul mm7, mm3 */
  guest_unsupported(0xea894b); /* pfmul mm7, mm3 */
/* ea894f: pfadd mm2, mm1 */
  guest_unsupported(0xea894f); /* pfadd mm2, mm1 */
/* ea8953: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8953); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8959: pfadd mm7, mm6 */
  guest_unsupported(0xea8959); /* pfadd mm7, mm6 */
/* ea895d: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8961: pfadd mm3, mm2 */
  guest_unsupported(0xea8961); /* pfadd mm3, mm2 */
/* ea8965: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea8969: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea896d: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8972: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea8976: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8976); /* punpckhdq mm2, mm0 */
/* ea8979: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea897e: punpckhdq mm3, mm1 */
  guest_unsupported(0xea897e); /* punpckhdq mm3, mm1 */
/* ea8981: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8986: punpckldq mm0, mm0 */
  guest_unsupported(0xea8986); /* punpckldq mm0, mm0 */
/* ea8989: punpckldq mm1, mm1 */
  guest_unsupported(0xea8989); /* punpckldq mm1, mm1 */
/* ea898c: pfmul mm4, mm0 */
  guest_unsupported(0xea898c); /* pfmul mm4, mm0 */
/* ea8990: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8990); /* punpckhdq mm2, mm2 */
/* ea8993: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8993); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8999: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea899e: pfmul mm5, mm2 */
  guest_unsupported(0xea899e); /* pfmul mm5, mm2 */
/* ea89a2: punpckhdq mm3, mm3 */
  guest_unsupported(0xea89a2); /* punpckhdq mm3, mm3 */
/* ea89a5: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea89a5); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea89ab: pfadd mm5, mm4 */
  guest_unsupported(0xea89ab); /* pfadd mm5, mm4 */
/* ea89af: pfmul mm6, mm1 */
  guest_unsupported(0xea89af); /* pfmul mm6, mm1 */
/* ea89b3: pfadd mm2, mm0 */
  guest_unsupported(0xea89b3); /* pfadd mm2, mm0 */
/* ea89b7: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea89b7); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea89bd: pfadd mm6, mm5 */
  guest_unsupported(0xea89bd); /* pfadd mm6, mm5 */
/* ea89c1: pfmul mm7, mm3 */
  guest_unsupported(0xea89c1); /* pfmul mm7, mm3 */
/* ea89c5: pfadd mm2, mm1 */
  guest_unsupported(0xea89c5); /* pfadd mm2, mm1 */
/* ea89c9: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea89c9); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea89cf: pfadd mm7, mm6 */
  guest_unsupported(0xea89cf); /* pfadd mm7, mm6 */
/* ea89d3: pfadd mm3, mm2 */
  guest_unsupported(0xea89d3); /* pfadd mm3, mm2 */
/* ea89d7: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea89db: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea89df: jmp 0xea8a4c */
  goto L_ea8a4c;
L_ea89e1: /* ea89e1: movq mm1, qword ptr [0xeb3b80] */
  MMX[1] = R64((uint32_t)(0xeb3b80u));
/* ea89e8: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea89eb: movd mm4, dword ptr [edx + 8] */
  guest_unsupported(0xea89eb); /* movd mm4, dword ptr [edx + 8] */
/* ea89ef: pxor mm5, mm5 */
  guest_unsupported(0xea89ef); /* pxor mm5, mm5 */
/* ea89f2: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea89f5: punpckldq mm2, mm5 */
  guest_unsupported(0xea89f5); /* punpckldq mm2, mm5 */
/* ea89f8: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* ea89fb: punpckhdq mm5, mm3 */
  guest_unsupported(0xea89fb); /* punpckhdq mm5, mm3 */
/* ea89fe: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea8a01: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea8a05: movq qword ptr [eax + 0x10], mm5 */
  W64((uint32_t)(eax + 0x10u), MMX[5]);
/* ea8a09: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea8a0d: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea8a11: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea8a15: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea8a19: movq qword ptr [eax + 0x38], mm1 */
  W64((uint32_t)(eax + 0x38u), MMX[1]);
/* ea8a1d: jmp 0xea8a4c */
  goto L_ea8a4c;
L_ea8a1f: /* ea8a1f: movd mm1, dword ptr [0xeb3b90] */
  guest_unsupported(0xea8a1f); /* movd mm1, dword ptr [0xeb3b90] */
/* ea8a26: pxor mm0, mm0 */
  guest_unsupported(0xea8a26); /* pxor mm0, mm0 */
/* ea8a29: pswapd mm2, mm1 */
  guest_unsupported(0xea8a29); /* pswapd mm2, mm1 */
/* ea8a2d: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea8a30: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* ea8a34: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea8a38: movq qword ptr [eax + 0x18], mm0 */
  W64((uint32_t)(eax + 0x18u), MMX[0]);
/* ea8a3c: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea8a40: movq qword ptr [eax + 0x28], mm1 */
  W64((uint32_t)(eax + 0x28u), MMX[1]);
/* ea8a44: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea8a48: movq qword ptr [eax + 0x38], mm2 */
  W64((uint32_t)(eax + 0x38u), MMX[2]);
L_ea8a4c: /* ea8a4c: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ea8a4f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* ea8a52: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea8a54: je 0xea8f02 */
  if (zf) goto L_ea8f02;
L_ea8a5a: /* ea8a5a: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea8a5d: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea8a61: pswapd mm3, mm0 */
  guest_unsupported(0xea8a61); /* pswapd mm3, mm0 */
/* ea8a65: movq mm6, mm0 */
  MMX[6] = MMX[0];
/* ea8a68: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea8a6b: pfadd mm0, mm0 */
  guest_unsupported(0xea8a6b); /* pfadd mm0, mm0 */
/* ea8a6f: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea8a72: punpckhdq mm6, mm1 */
  guest_unsupported(0xea8a72); /* punpckhdq mm6, mm1 */
/* ea8a75: pfadd mm1, mm1 */
  guest_unsupported(0xea8a75); /* pfadd mm1, mm1 */
/* ea8a79: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea8a7c: pfmul mm0, mm2 */
  guest_unsupported(0xea8a7c); /* pfmul mm0, mm2 */
/* ea8a80: punpckldq mm5, mm1 */
  guest_unsupported(0xea8a80); /* punpckldq mm5, mm1 */
/* ea8a83: pfmul mm2, mm1 */
  guest_unsupported(0xea8a83); /* pfmul mm2, mm1 */
/* ea8a87: pfmul mm3, mm1 */
  guest_unsupported(0xea8a87); /* pfmul mm3, mm1 */
/* ea8a8b: pfmul mm1, mm4 */
  guest_unsupported(0xea8a8b); /* pfmul mm1, mm4 */
/* ea8a8f: pfmul mm6, mm5 */
  guest_unsupported(0xea8a8f); /* pfmul mm6, mm5 */
/* ea8a93: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea8a96: pfsubr mm0, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea8a96); /* pfsubr mm0, qword ptr [0xeb3ba0] */
/* ea8a9e: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea8aa1: punpckldq mm1, mm1 */
  guest_unsupported(0xea8aa1); /* punpckldq mm1, mm1 */
/* ea8aa4: pfpnacc mm3, mm3 */
  guest_unsupported(0xea8aa4); /* pfpnacc mm3, mm3 */
/* ea8aa8: pfacc mm4, mm4 */
  guest_unsupported(0xea8aa8); /* pfacc mm4, mm4 */
/* ea8aac: pfpnacc mm6, mm6 */
  guest_unsupported(0xea8aac); /* pfpnacc mm6, mm6 */
/* ea8ab0: pfpnacc mm2, mm2 */
  guest_unsupported(0xea8ab0); /* pfpnacc mm2, mm2 */
/* ea8ab4: pfsub mm0, mm1 */
  guest_unsupported(0xea8ab4); /* pfsub mm0, mm1 */
/* ea8ab8: pswapd mm5, mm2 */
  guest_unsupported(0xea8ab8); /* pswapd mm5, mm2 */
/* ea8abc: pfsubr mm4, qword ptr [0xeb3ba0] */
  guest_unsupported(0xea8abc); /* pfsubr mm4, qword ptr [0xeb3ba0] */
/* ea8ac4: pxor mm7, mm7 */
  guest_unsupported(0xea8ac4); /* pxor mm7, mm7 */
/* ea8ac7: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea8aca: movq qword ptr [esp + 0x70], mm7 */
  W64((uint32_t)(esp + 0x70u), MMX[7]);
/* ea8acf: punpckldq mm5, mm3 */
  guest_unsupported(0xea8acf); /* punpckldq mm5, mm3 */
/* ea8ad2: punpckldq mm2, mm7 */
  guest_unsupported(0xea8ad2); /* punpckldq mm2, mm7 */
/* ea8ad5: punpckhdq mm4, mm7 */
  guest_unsupported(0xea8ad5); /* punpckhdq mm4, mm7 */
/* ea8ad8: punpckhdq mm0, mm6 */
  guest_unsupported(0xea8ad8); /* punpckhdq mm0, mm6 */
/* ea8adb: movq qword ptr [esp + 0x60], mm5 */
  W64((uint32_t)(esp + 0x60u), MMX[5]);
/* ea8ae0: punpckhdq mm3, mm7 */
  guest_unsupported(0xea8ae0); /* punpckhdq mm3, mm7 */
/* ea8ae3: movq qword ptr [esp + 0x48], mm2 */
  W64((uint32_t)(esp + 0x48u), MMX[2]);
/* ea8ae8: punpckldq mm6, mm1 */
  guest_unsupported(0xea8ae8); /* punpckldq mm6, mm1 */
/* ea8aeb: movq qword ptr [esp + 0x68], mm4 */
  W64((uint32_t)(esp + 0x68u), MMX[4]);
/* ea8af0: punpckldq mm7, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea8af0); /* punpckldq mm7, dword ptr [0xeb3ba0] */
/* ea8af7: movq qword ptr [esp + 0x40], mm0 */
  W64((uint32_t)(esp + 0x40u), MMX[0]);
/* ea8afc: movq qword ptr [esp + 0x50], mm6 */
  W64((uint32_t)(esp + 0x50u), MMX[6]);
/* ea8b01: movq qword ptr [esp + 0x58], mm3 */
  W64((uint32_t)(esp + 0x58u), MMX[3]);
/* ea8b06: movq qword ptr [esp + 0x78], mm7 */
  W64((uint32_t)(esp + 0x78u), MMX[7]);
/* ea8b0b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea8b0d: je 0xea8d2c */
  if (zf) goto L_ea8d2c;
L_ea8b13: /* ea8b13: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8b17: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea8b17); /* movd mm1, dword ptr [eax + 0x38] */
/* ea8b1b: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea8b1e: movd mm3, dword ptr [edx + 8] */
  guest_unsupported(0xea8b1e); /* movd mm3, dword ptr [edx + 8] */
/* ea8b22: pfsub mm0, mm2 */
  guest_unsupported(0xea8b22); /* pfsub mm0, mm2 */
/* ea8b26: pfsub mm1, mm3 */
  guest_unsupported(0xea8b26); /* pfsub mm1, mm3 */
/* ea8b2a: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea8b2e: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea8b2e); /* movd dword ptr [eax + 0x38], mm1 */
/* ea8b32: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea8b35: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea8b39: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8b3e: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8b3e); /* punpckhdq mm2, mm0 */
/* ea8b41: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8b46: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8b46); /* punpckhdq mm3, mm1 */
/* ea8b49: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8b4e: punpckldq mm0, mm0 */
  guest_unsupported(0xea8b4e); /* punpckldq mm0, mm0 */
/* ea8b51: punpckldq mm1, mm1 */
  guest_unsupported(0xea8b51); /* punpckldq mm1, mm1 */
/* ea8b54: pfmul mm4, mm0 */
  guest_unsupported(0xea8b54); /* pfmul mm4, mm0 */
/* ea8b58: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8b58); /* punpckhdq mm2, mm2 */
/* ea8b5b: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8b5b); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8b61: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8b66: pfmul mm5, mm2 */
  guest_unsupported(0xea8b66); /* pfmul mm5, mm2 */
/* ea8b6a: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8b6a); /* punpckhdq mm3, mm3 */
/* ea8b6d: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8b6d); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8b73: pfadd mm5, mm4 */
  guest_unsupported(0xea8b73); /* pfadd mm5, mm4 */
/* ea8b77: pfmul mm6, mm1 */
  guest_unsupported(0xea8b77); /* pfmul mm6, mm1 */
/* ea8b7b: pfadd mm2, mm0 */
  guest_unsupported(0xea8b7b); /* pfadd mm2, mm0 */
/* ea8b7f: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8b7f); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8b85: pfadd mm6, mm5 */
  guest_unsupported(0xea8b85); /* pfadd mm6, mm5 */
/* ea8b89: pfmul mm7, mm3 */
  guest_unsupported(0xea8b89); /* pfmul mm7, mm3 */
/* ea8b8d: pfadd mm2, mm1 */
  guest_unsupported(0xea8b8d); /* pfadd mm2, mm1 */
/* ea8b91: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8b91); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8b97: pfadd mm7, mm6 */
  guest_unsupported(0xea8b97); /* pfadd mm7, mm6 */
/* ea8b9b: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea8b9f: pfadd mm3, mm2 */
  guest_unsupported(0xea8b9f); /* pfadd mm3, mm2 */
/* ea8ba3: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea8ba7: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8baa: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8baf: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea8bb3: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8bb3); /* punpckhdq mm2, mm0 */
/* ea8bb6: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8bbb: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8bbb); /* punpckhdq mm3, mm1 */
/* ea8bbe: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8bc3: punpckldq mm0, mm0 */
  guest_unsupported(0xea8bc3); /* punpckldq mm0, mm0 */
/* ea8bc6: punpckldq mm1, mm1 */
  guest_unsupported(0xea8bc6); /* punpckldq mm1, mm1 */
/* ea8bc9: pfmul mm4, mm0 */
  guest_unsupported(0xea8bc9); /* pfmul mm4, mm0 */
/* ea8bcd: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8bcd); /* punpckhdq mm2, mm2 */
/* ea8bd0: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8bd0); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8bd6: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8bdb: pfmul mm5, mm2 */
  guest_unsupported(0xea8bdb); /* pfmul mm5, mm2 */
/* ea8bdf: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8bdf); /* punpckhdq mm3, mm3 */
/* ea8be2: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8be2); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8be8: pfadd mm5, mm4 */
  guest_unsupported(0xea8be8); /* pfadd mm5, mm4 */
/* ea8bec: pfmul mm6, mm1 */
  guest_unsupported(0xea8bec); /* pfmul mm6, mm1 */
/* ea8bf0: pfadd mm2, mm0 */
  guest_unsupported(0xea8bf0); /* pfadd mm2, mm0 */
/* ea8bf4: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8bf4); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8bfa: pfadd mm6, mm5 */
  guest_unsupported(0xea8bfa); /* pfadd mm6, mm5 */
/* ea8bfe: pfmul mm7, mm3 */
  guest_unsupported(0xea8bfe); /* pfmul mm7, mm3 */
/* ea8c02: pfadd mm2, mm1 */
  guest_unsupported(0xea8c02); /* pfadd mm2, mm1 */
/* ea8c06: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8c06); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8c0c: pfadd mm7, mm6 */
  guest_unsupported(0xea8c0c); /* pfadd mm7, mm6 */
/* ea8c10: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea8c14: pfadd mm3, mm2 */
  guest_unsupported(0xea8c14); /* pfadd mm3, mm2 */
/* ea8c18: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea8c1c: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea8c20: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8c25: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea8c29: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8c29); /* punpckhdq mm2, mm0 */
/* ea8c2c: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8c31: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8c31); /* punpckhdq mm3, mm1 */
/* ea8c34: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8c39: punpckldq mm0, mm0 */
  guest_unsupported(0xea8c39); /* punpckldq mm0, mm0 */
/* ea8c3c: punpckldq mm1, mm1 */
  guest_unsupported(0xea8c3c); /* punpckldq mm1, mm1 */
/* ea8c3f: pfmul mm4, mm0 */
  guest_unsupported(0xea8c3f); /* pfmul mm4, mm0 */
/* ea8c43: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8c43); /* punpckhdq mm2, mm2 */
/* ea8c46: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8c46); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8c4c: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8c51: pfmul mm5, mm2 */
  guest_unsupported(0xea8c51); /* pfmul mm5, mm2 */
/* ea8c55: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8c55); /* punpckhdq mm3, mm3 */
/* ea8c58: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8c58); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8c5e: pfadd mm5, mm4 */
  guest_unsupported(0xea8c5e); /* pfadd mm5, mm4 */
/* ea8c62: pfmul mm6, mm1 */
  guest_unsupported(0xea8c62); /* pfmul mm6, mm1 */
/* ea8c66: pfadd mm2, mm0 */
  guest_unsupported(0xea8c66); /* pfadd mm2, mm0 */
/* ea8c6a: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8c6a); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8c70: pfadd mm6, mm5 */
  guest_unsupported(0xea8c70); /* pfadd mm6, mm5 */
/* ea8c74: pfmul mm7, mm3 */
  guest_unsupported(0xea8c74); /* pfmul mm7, mm3 */
/* ea8c78: pfadd mm2, mm1 */
  guest_unsupported(0xea8c78); /* pfadd mm2, mm1 */
/* ea8c7c: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8c7c); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8c82: pfadd mm7, mm6 */
  guest_unsupported(0xea8c82); /* pfadd mm7, mm6 */
/* ea8c86: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8c8a: pfadd mm3, mm2 */
  guest_unsupported(0xea8c8a); /* pfadd mm3, mm2 */
/* ea8c8e: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea8c92: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea8c96: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8c9b: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea8c9f: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8c9f); /* punpckhdq mm2, mm0 */
/* ea8ca2: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8ca7: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8ca7); /* punpckhdq mm3, mm1 */
/* ea8caa: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8caf: punpckldq mm0, mm0 */
  guest_unsupported(0xea8caf); /* punpckldq mm0, mm0 */
/* ea8cb2: punpckldq mm1, mm1 */
  guest_unsupported(0xea8cb2); /* punpckldq mm1, mm1 */
/* ea8cb5: pfmul mm4, mm0 */
  guest_unsupported(0xea8cb5); /* pfmul mm4, mm0 */
/* ea8cb9: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8cb9); /* punpckhdq mm2, mm2 */
/* ea8cbc: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8cbc); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8cc2: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8cc7: pfmul mm5, mm2 */
  guest_unsupported(0xea8cc7); /* pfmul mm5, mm2 */
/* ea8ccb: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8ccb); /* punpckhdq mm3, mm3 */
/* ea8cce: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8cce); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8cd4: pfadd mm5, mm4 */
  guest_unsupported(0xea8cd4); /* pfadd mm5, mm4 */
/* ea8cd8: pfmul mm6, mm1 */
  guest_unsupported(0xea8cd8); /* pfmul mm6, mm1 */
/* ea8cdc: pfadd mm2, mm0 */
  guest_unsupported(0xea8cdc); /* pfadd mm2, mm0 */
/* ea8ce0: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8ce0); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8ce6: pfadd mm6, mm5 */
  guest_unsupported(0xea8ce6); /* pfadd mm6, mm5 */
/* ea8cea: pfmul mm7, mm3 */
  guest_unsupported(0xea8cea); /* pfmul mm7, mm3 */
/* ea8cee: pfadd mm2, mm1 */
  guest_unsupported(0xea8cee); /* pfadd mm2, mm1 */
/* ea8cf2: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8cf2); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8cf8: pfadd mm7, mm6 */
  guest_unsupported(0xea8cf8); /* pfadd mm7, mm6 */
/* ea8cfc: pfadd mm3, mm2 */
  guest_unsupported(0xea8cfc); /* pfadd mm3, mm2 */
/* ea8d00: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea8d04: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea8d08: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8d0c: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea8d0c); /* movd mm1, dword ptr [eax + 0x38] */
/* ea8d10: movq mm2, qword ptr [edx] */
  MMX[2] = R64((uint32_t)(edx));
/* ea8d13: movd mm3, dword ptr [edx + 8] */
  guest_unsupported(0xea8d13); /* movd mm3, dword ptr [edx + 8] */
/* ea8d17: pfadd mm0, mm2 */
  guest_unsupported(0xea8d17); /* pfadd mm0, mm2 */
/* ea8d1b: pfadd mm1, mm3 */
  guest_unsupported(0xea8d1b); /* pfadd mm1, mm3 */
/* ea8d1f: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea8d23: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea8d23); /* movd dword ptr [eax + 0x38], mm1 */
/* ea8d27: jmp 0xea8f02 */
  goto L_ea8f02;
L_ea8d2c: /* ea8d2c: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea8d2f: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* ea8d33: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8d38: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8d38); /* punpckhdq mm2, mm0 */
/* ea8d3b: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8d40: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8d40); /* punpckhdq mm3, mm1 */
/* ea8d43: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8d48: punpckldq mm0, mm0 */
  guest_unsupported(0xea8d48); /* punpckldq mm0, mm0 */
/* ea8d4b: punpckldq mm1, mm1 */
  guest_unsupported(0xea8d4b); /* punpckldq mm1, mm1 */
/* ea8d4e: pfmul mm4, mm0 */
  guest_unsupported(0xea8d4e); /* pfmul mm4, mm0 */
/* ea8d52: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8d52); /* punpckhdq mm2, mm2 */
/* ea8d55: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8d55); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8d5b: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8d60: pfmul mm5, mm2 */
  guest_unsupported(0xea8d60); /* pfmul mm5, mm2 */
/* ea8d64: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8d64); /* punpckhdq mm3, mm3 */
/* ea8d67: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8d67); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8d6d: pfadd mm5, mm4 */
  guest_unsupported(0xea8d6d); /* pfadd mm5, mm4 */
/* ea8d71: pfmul mm6, mm1 */
  guest_unsupported(0xea8d71); /* pfmul mm6, mm1 */
/* ea8d75: pfadd mm2, mm0 */
  guest_unsupported(0xea8d75); /* pfadd mm2, mm0 */
/* ea8d79: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8d79); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8d7f: pfadd mm6, mm5 */
  guest_unsupported(0xea8d7f); /* pfadd mm6, mm5 */
/* ea8d83: pfmul mm7, mm3 */
  guest_unsupported(0xea8d83); /* pfmul mm7, mm3 */
/* ea8d87: pfadd mm2, mm1 */
  guest_unsupported(0xea8d87); /* pfadd mm2, mm1 */
/* ea8d8b: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8d8b); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8d91: pfadd mm7, mm6 */
  guest_unsupported(0xea8d91); /* pfadd mm7, mm6 */
/* ea8d95: movq mm0, qword ptr [eax + 0x10] */
  MMX[0] = R64((uint32_t)(eax + 0x10u));
/* ea8d99: pfadd mm3, mm2 */
  guest_unsupported(0xea8d99); /* pfadd mm3, mm2 */
/* ea8d9d: movq mm1, qword ptr [eax + 0x18] */
  MMX[1] = R64((uint32_t)(eax + 0x18u));
/* ea8da1: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea8da4: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8da9: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea8dad: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8dad); /* punpckhdq mm2, mm0 */
/* ea8db0: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8db5: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8db5); /* punpckhdq mm3, mm1 */
/* ea8db8: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8dbd: punpckldq mm0, mm0 */
  guest_unsupported(0xea8dbd); /* punpckldq mm0, mm0 */
/* ea8dc0: punpckldq mm1, mm1 */
  guest_unsupported(0xea8dc0); /* punpckldq mm1, mm1 */
/* ea8dc3: pfmul mm4, mm0 */
  guest_unsupported(0xea8dc3); /* pfmul mm4, mm0 */
/* ea8dc7: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8dc7); /* punpckhdq mm2, mm2 */
/* ea8dca: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8dca); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8dd0: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8dd5: pfmul mm5, mm2 */
  guest_unsupported(0xea8dd5); /* pfmul mm5, mm2 */
/* ea8dd9: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8dd9); /* punpckhdq mm3, mm3 */
/* ea8ddc: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8ddc); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8de2: pfadd mm5, mm4 */
  guest_unsupported(0xea8de2); /* pfadd mm5, mm4 */
/* ea8de6: pfmul mm6, mm1 */
  guest_unsupported(0xea8de6); /* pfmul mm6, mm1 */
/* ea8dea: pfadd mm2, mm0 */
  guest_unsupported(0xea8dea); /* pfadd mm2, mm0 */
/* ea8dee: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8dee); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8df4: pfadd mm6, mm5 */
  guest_unsupported(0xea8df4); /* pfadd mm6, mm5 */
/* ea8df8: pfmul mm7, mm3 */
  guest_unsupported(0xea8df8); /* pfmul mm7, mm3 */
/* ea8dfc: pfadd mm2, mm1 */
  guest_unsupported(0xea8dfc); /* pfadd mm2, mm1 */
/* ea8e00: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8e00); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8e06: pfadd mm7, mm6 */
  guest_unsupported(0xea8e06); /* pfadd mm7, mm6 */
/* ea8e0a: movq mm0, qword ptr [eax + 0x20] */
  MMX[0] = R64((uint32_t)(eax + 0x20u));
/* ea8e0e: pfadd mm3, mm2 */
  guest_unsupported(0xea8e0e); /* pfadd mm3, mm2 */
/* ea8e12: movq mm1, qword ptr [eax + 0x28] */
  MMX[1] = R64((uint32_t)(eax + 0x28u));
/* ea8e16: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea8e1a: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8e1f: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea8e23: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8e23); /* punpckhdq mm2, mm0 */
/* ea8e26: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8e2b: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8e2b); /* punpckhdq mm3, mm1 */
/* ea8e2e: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8e33: punpckldq mm0, mm0 */
  guest_unsupported(0xea8e33); /* punpckldq mm0, mm0 */
/* ea8e36: punpckldq mm1, mm1 */
  guest_unsupported(0xea8e36); /* punpckldq mm1, mm1 */
/* ea8e39: pfmul mm4, mm0 */
  guest_unsupported(0xea8e39); /* pfmul mm4, mm0 */
/* ea8e3d: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8e3d); /* punpckhdq mm2, mm2 */
/* ea8e40: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8e40); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8e46: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8e4b: pfmul mm5, mm2 */
  guest_unsupported(0xea8e4b); /* pfmul mm5, mm2 */
/* ea8e4f: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8e4f); /* punpckhdq mm3, mm3 */
/* ea8e52: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8e52); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8e58: pfadd mm5, mm4 */
  guest_unsupported(0xea8e58); /* pfadd mm5, mm4 */
/* ea8e5c: pfmul mm6, mm1 */
  guest_unsupported(0xea8e5c); /* pfmul mm6, mm1 */
/* ea8e60: pfadd mm2, mm0 */
  guest_unsupported(0xea8e60); /* pfadd mm2, mm0 */
/* ea8e64: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8e64); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8e6a: pfadd mm6, mm5 */
  guest_unsupported(0xea8e6a); /* pfadd mm6, mm5 */
/* ea8e6e: pfmul mm7, mm3 */
  guest_unsupported(0xea8e6e); /* pfmul mm7, mm3 */
/* ea8e72: pfadd mm2, mm1 */
  guest_unsupported(0xea8e72); /* pfadd mm2, mm1 */
/* ea8e76: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8e76); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8e7c: pfadd mm7, mm6 */
  guest_unsupported(0xea8e7c); /* pfadd mm7, mm6 */
/* ea8e80: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8e84: pfadd mm3, mm2 */
  guest_unsupported(0xea8e84); /* pfadd mm3, mm2 */
/* ea8e88: movq mm1, qword ptr [eax + 0x38] */
  MMX[1] = R64((uint32_t)(eax + 0x38u));
/* ea8e8c: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea8e90: movq mm4, qword ptr [esp + 0x40] */
  MMX[4] = R64((uint32_t)(esp + 0x40u));
/* ea8e95: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea8e99: punpckhdq mm2, mm0 */
  guest_unsupported(0xea8e99); /* punpckhdq mm2, mm0 */
/* ea8e9c: movq mm5, qword ptr [esp + 0x50] */
  MMX[5] = R64((uint32_t)(esp + 0x50u));
/* ea8ea1: punpckhdq mm3, mm1 */
  guest_unsupported(0xea8ea1); /* punpckhdq mm3, mm1 */
/* ea8ea4: movq mm6, qword ptr [esp + 0x60] */
  MMX[6] = R64((uint32_t)(esp + 0x60u));
/* ea8ea9: punpckldq mm0, mm0 */
  guest_unsupported(0xea8ea9); /* punpckldq mm0, mm0 */
/* ea8eac: punpckldq mm1, mm1 */
  guest_unsupported(0xea8eac); /* punpckldq mm1, mm1 */
/* ea8eaf: pfmul mm4, mm0 */
  guest_unsupported(0xea8eaf); /* pfmul mm4, mm0 */
/* ea8eb3: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8eb3); /* punpckhdq mm2, mm2 */
/* ea8eb6: pfmul mm0, qword ptr [esp + 0x48] */
  guest_unsupported(0xea8eb6); /* pfmul mm0, qword ptr [esp + 0x48] */
/* ea8ebc: movq mm7, qword ptr [esp + 0x70] */
  MMX[7] = R64((uint32_t)(esp + 0x70u));
/* ea8ec1: pfmul mm5, mm2 */
  guest_unsupported(0xea8ec1); /* pfmul mm5, mm2 */
/* ea8ec5: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8ec5); /* punpckhdq mm3, mm3 */
/* ea8ec8: pfmul mm2, qword ptr [esp + 0x58] */
  guest_unsupported(0xea8ec8); /* pfmul mm2, qword ptr [esp + 0x58] */
/* ea8ece: pfadd mm5, mm4 */
  guest_unsupported(0xea8ece); /* pfadd mm5, mm4 */
/* ea8ed2: pfmul mm6, mm1 */
  guest_unsupported(0xea8ed2); /* pfmul mm6, mm1 */
/* ea8ed6: pfadd mm2, mm0 */
  guest_unsupported(0xea8ed6); /* pfadd mm2, mm0 */
/* ea8eda: pfmul mm1, qword ptr [esp + 0x68] */
  guest_unsupported(0xea8eda); /* pfmul mm1, qword ptr [esp + 0x68] */
/* ea8ee0: pfadd mm6, mm5 */
  guest_unsupported(0xea8ee0); /* pfadd mm6, mm5 */
/* ea8ee4: pfmul mm7, mm3 */
  guest_unsupported(0xea8ee4); /* pfmul mm7, mm3 */
/* ea8ee8: pfadd mm2, mm1 */
  guest_unsupported(0xea8ee8); /* pfadd mm2, mm1 */
/* ea8eec: pfmul mm3, qword ptr [esp + 0x78] */
  guest_unsupported(0xea8eec); /* pfmul mm3, qword ptr [esp + 0x78] */
/* ea8ef2: pfadd mm7, mm6 */
  guest_unsupported(0xea8ef2); /* pfadd mm7, mm6 */
/* ea8ef6: pfadd mm3, mm2 */
  guest_unsupported(0xea8ef6); /* pfadd mm3, mm2 */
/* ea8efa: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea8efe: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
L_ea8f02: /* ea8f02: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* ea8f05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea8f07: je 0xea8f28 */
  if (zf) goto L_ea8f28;
L_ea8f09: /* ea8f09: movq mm0, qword ptr [eax + 0x30] */
  MMX[0] = R64((uint32_t)(eax + 0x30u));
/* ea8f0d: movd mm1, dword ptr [eax + 0x38] */
  guest_unsupported(0xea8f0d); /* movd mm1, dword ptr [eax + 0x38] */
/* ea8f11: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* ea8f14: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea8f14); /* movd mm3, dword ptr [ecx + 8] */
/* ea8f18: pfadd mm0, mm2 */
  guest_unsupported(0xea8f18); /* pfadd mm0, mm2 */
/* ea8f1c: pfadd mm1, mm3 */
  guest_unsupported(0xea8f1c); /* pfadd mm1, mm3 */
/* ea8f20: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea8f24: movd dword ptr [eax + 0x38], mm1 */
  guest_unsupported(0xea8f24); /* movd dword ptr [eax + 0x38], mm1 */
L_ea8f28: /* ea8f28: mov esp, ebp */
  esp = ebp;
/* ea8f2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ea8f2b: femms  */
  guest_unsupported(0xea8f2b); /* femms  */
/* ea8f2d: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_ea8f30(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea8f30: /* ea8f30: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea8f34: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea8f37: movq mm1, qword ptr [edx + 0x10] */
  MMX[1] = R64((uint32_t)(edx + 0x10u));
/* ea8f3b: movq mm2, qword ptr [edx + 0x20] */
  MMX[2] = R64((uint32_t)(edx + 0x20u));
/* ea8f3f: pswapd mm5, mm1 */
  guest_unsupported(0xea8f3f); /* pswapd mm5, mm1 */
/* ea8f43: movq mm3, qword ptr [edx + 0x30] */
  MMX[3] = R64((uint32_t)(edx + 0x30u));
/* ea8f47: pswapd mm4, mm2 */
  guest_unsupported(0xea8f47); /* pswapd mm4, mm2 */
/* ea8f4b: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea8f4e: pswapd mm6, mm3 */
  guest_unsupported(0xea8f4e); /* pswapd mm6, mm3 */
/* ea8f52: pswapd mm7, mm2 */
  guest_unsupported(0xea8f52); /* pswapd mm7, mm2 */
/* ea8f56: pfmul mm5, mm0 */
  guest_unsupported(0xea8f56); /* pfmul mm5, mm0 */
/* ea8f5a: pfmul mm4, mm0 */
  guest_unsupported(0xea8f5a); /* pfmul mm4, mm0 */
/* ea8f5e: pfmul mm6, mm0 */
  guest_unsupported(0xea8f5e); /* pfmul mm6, mm0 */
/* ea8f62: pswapd mm0, mm3 */
  guest_unsupported(0xea8f62); /* pswapd mm0, mm3 */
/* ea8f66: pfmul mm7, mm1 */
  guest_unsupported(0xea8f66); /* pfmul mm7, mm1 */
/* ea8f6a: pfnacc mm5, mm4 */
  guest_unsupported(0xea8f6a); /* pfnacc mm5, mm4 */
/* ea8f6e: pfmul mm1, mm0 */
  guest_unsupported(0xea8f6e); /* pfmul mm1, mm0 */
/* ea8f72: pfmul mm2, mm0 */
  guest_unsupported(0xea8f72); /* pfmul mm2, mm0 */
/* ea8f76: pfnacc mm6, mm7 */
  guest_unsupported(0xea8f76); /* pfnacc mm6, mm7 */
/* ea8f7a: pfnacc mm1, mm2 */
  guest_unsupported(0xea8f7a); /* pfnacc mm1, mm2 */
/* ea8f7e: movq mm0, qword ptr [edx + 0x38] */
  MMX[0] = R64((uint32_t)(edx + 0x38u));
/* ea8f82: movq mm2, mm6 */
  MMX[2] = MMX[6];
/* ea8f85: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea8f88: movq mm7, qword ptr [edx + 0x28] */
  MMX[7] = R64((uint32_t)(edx + 0x28u));
/* ea8f8c: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8f8c); /* punpckhdq mm2, mm2 */
/* ea8f8f: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea8f92: punpckhdq mm4, mm4 */
  guest_unsupported(0xea8f92); /* punpckhdq mm4, mm4 */
/* ea8f95: pfmul mm2, mm0 */
  guest_unsupported(0xea8f95); /* pfmul mm2, mm0 */
/* ea8f99: punpckldq mm3, mm3 */
  guest_unsupported(0xea8f99); /* punpckldq mm3, mm3 */
/* ea8f9c: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xea8f9c); /* pfmul mm4, qword ptr [edx + 0x18] */
/* ea8fa1: pfmul mm3, mm7 */
  guest_unsupported(0xea8fa1); /* pfmul mm3, mm7 */
/* ea8fa5: pfadd mm2, mm4 */
  guest_unsupported(0xea8fa5); /* pfadd mm2, mm4 */
/* ea8fa9: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* ea8fac: pfsub mm2, mm3 */
  guest_unsupported(0xea8fac); /* pfsub mm2, mm3 */
/* ea8fb0: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea8fb3: punpckldq mm4, mm4 */
  guest_unsupported(0xea8fb3); /* punpckldq mm4, mm4 */
/* ea8fb6: movq qword ptr [esp + 8], mm2 */
  W64((uint32_t)(esp + 0x8u), MMX[2]);
/* ea8fbb: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea8fbe: punpckhdq mm3, mm3 */
  guest_unsupported(0xea8fbe); /* punpckhdq mm3, mm3 */
/* ea8fc1: punpckhdq mm2, mm2 */
  guest_unsupported(0xea8fc1); /* punpckhdq mm2, mm2 */
/* ea8fc4: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xea8fc4); /* pfmul mm3, qword ptr [edx + 8] */
/* ea8fc9: pfmul mm2, mm0 */
  guest_unsupported(0xea8fc9); /* pfmul mm2, mm0 */
/* ea8fcd: pfmul mm4, mm7 */
  guest_unsupported(0xea8fcd); /* pfmul mm4, mm7 */
/* ea8fd1: pfsub mm2, mm4 */
  guest_unsupported(0xea8fd1); /* pfsub mm2, mm4 */
/* ea8fd5: pfadd mm2, mm3 */
  guest_unsupported(0xea8fd5); /* pfadd mm2, mm3 */
/* ea8fd9: movq qword ptr [esp + 0x18], mm2 */
  W64((uint32_t)(esp + 0x18u), MMX[2]);
/* ea8fde: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea8fe1: movq mm3, mm6 */
  MMX[3] = MMX[6];
/* ea8fe4: punpckldq mm1, mm1 */
  guest_unsupported(0xea8fe4); /* punpckldq mm1, mm1 */
/* ea8fe7: punpckldq mm2, mm2 */
  guest_unsupported(0xea8fe7); /* punpckldq mm2, mm2 */
/* ea8fea: punpckldq mm3, mm3 */
  guest_unsupported(0xea8fea); /* punpckldq mm3, mm3 */
/* ea8fed: pfmul mm1, qword ptr [edx + 8] */
  guest_unsupported(0xea8fed); /* pfmul mm1, qword ptr [edx + 8] */
/* ea8ff2: pfmul mm0, mm2 */
  guest_unsupported(0xea8ff2); /* pfmul mm0, mm2 */
/* ea8ff6: pfmul mm3, qword ptr [edx + 0x18] */
  guest_unsupported(0xea8ff6); /* pfmul mm3, qword ptr [edx + 0x18] */
/* ea8ffb: pfadd mm0, mm1 */
  guest_unsupported(0xea8ffb); /* pfadd mm0, mm1 */
/* ea8fff: pfsub mm0, mm3 */
  guest_unsupported(0xea8fff); /* pfsub mm0, mm3 */
/* ea9003: movq qword ptr [esp + 0x28], mm0 */
  W64((uint32_t)(esp + 0x28u), MMX[0]);
/* ea9008: punpckhdq mm5, mm5 */
  guest_unsupported(0xea9008); /* punpckhdq mm5, mm5 */
/* ea900b: punpckhdq mm6, mm6 */
  guest_unsupported(0xea900b); /* punpckhdq mm6, mm6 */
/* ea900e: pfmul mm2, mm7 */
  guest_unsupported(0xea900e); /* pfmul mm2, mm7 */
/* ea9012: pfmul mm5, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9012); /* pfmul mm5, qword ptr [edx + 0x18] */
/* ea9017: movq mm0, qword ptr [edx + 8] */
  MMX[0] = R64((uint32_t)(edx + 0x8u));
/* ea901b: pfmul mm6, qword ptr [edx + 8] */
  guest_unsupported(0xea901b); /* pfmul mm6, qword ptr [edx + 8] */
/* ea9020: pfsub mm2, mm5 */
  guest_unsupported(0xea9020); /* pfsub mm2, mm5 */
/* ea9024: pfadd mm2, mm6 */
  guest_unsupported(0xea9024); /* pfadd mm2, mm6 */
/* ea9028: movq qword ptr [esp + 0x38], mm2 */
  W64((uint32_t)(esp + 0x38u), MMX[2]);
/* ea902d: movq mm1, qword ptr [edx + 0x18] */
  MMX[1] = R64((uint32_t)(edx + 0x18u));
/* ea9031: movq mm2, qword ptr [edx + 0x28] */
  MMX[2] = R64((uint32_t)(edx + 0x28u));
/* ea9035: movq mm3, qword ptr [edx + 0x38] */
  MMX[3] = R64((uint32_t)(edx + 0x38u));
/* ea9039: pswapd mm5, mm1 */
  guest_unsupported(0xea9039); /* pswapd mm5, mm1 */
/* ea903d: pswapd mm4, mm2 */
  guest_unsupported(0xea903d); /* pswapd mm4, mm2 */
/* ea9041: pfmul mm5, mm0 */
  guest_unsupported(0xea9041); /* pfmul mm5, mm0 */
/* ea9045: pswapd mm6, mm3 */
  guest_unsupported(0xea9045); /* pswapd mm6, mm3 */
/* ea9049: pfmul mm4, mm0 */
  guest_unsupported(0xea9049); /* pfmul mm4, mm0 */
/* ea904d: pswapd mm7, mm2 */
  guest_unsupported(0xea904d); /* pswapd mm7, mm2 */
/* ea9051: pfmul mm6, mm0 */
  guest_unsupported(0xea9051); /* pfmul mm6, mm0 */
/* ea9055: pswapd mm0, mm3 */
  guest_unsupported(0xea9055); /* pswapd mm0, mm3 */
/* ea9059: pfnacc mm5, mm4 */
  guest_unsupported(0xea9059); /* pfnacc mm5, mm4 */
/* ea905d: pfmul mm7, mm1 */
  guest_unsupported(0xea905d); /* pfmul mm7, mm1 */
/* ea9061: pfmul mm1, mm0 */
  guest_unsupported(0xea9061); /* pfmul mm1, mm0 */
/* ea9065: pfmul mm2, mm0 */
  guest_unsupported(0xea9065); /* pfmul mm2, mm0 */
/* ea9069: pfnacc mm6, mm7 */
  guest_unsupported(0xea9069); /* pfnacc mm6, mm7 */
/* ea906d: pfnacc mm1, mm2 */
  guest_unsupported(0xea906d); /* pfnacc mm1, mm2 */
/* ea9071: movq mm0, qword ptr [edx + 0x30] */
  MMX[0] = R64((uint32_t)(edx + 0x30u));
/* ea9075: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9078: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea907b: movq mm7, qword ptr [edx + 0x20] */
  MMX[7] = R64((uint32_t)(edx + 0x20u));
/* ea907f: movq mm2, mm6 */
  MMX[2] = MMX[6];
/* ea9082: punpckhdq mm4, mm4 */
  guest_unsupported(0xea9082); /* punpckhdq mm4, mm4 */
/* ea9085: punpckldq mm3, mm3 */
  guest_unsupported(0xea9085); /* punpckldq mm3, mm3 */
/* ea9088: punpckhdq mm2, mm2 */
  guest_unsupported(0xea9088); /* punpckhdq mm2, mm2 */
/* ea908b: pfmul mm4, qword ptr [edx + 0x10] */
  guest_unsupported(0xea908b); /* pfmul mm4, qword ptr [edx + 0x10] */
/* ea9090: pfmul mm2, mm0 */
  guest_unsupported(0xea9090); /* pfmul mm2, mm0 */
/* ea9094: pfmul mm3, mm7 */
  guest_unsupported(0xea9094); /* pfmul mm3, mm7 */
/* ea9098: pfadd mm2, mm4 */
  guest_unsupported(0xea9098); /* pfadd mm2, mm4 */
/* ea909c: pfsub mm2, mm3 */
  guest_unsupported(0xea909c); /* pfsub mm2, mm3 */
/* ea90a0: movq qword ptr [esp], mm2 */
  W64((uint32_t)(esp), MMX[2]);
/* ea90a4: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea90a7: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* ea90aa: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea90ad: punpckhdq mm3, mm3 */
  guest_unsupported(0xea90ad); /* punpckhdq mm3, mm3 */
/* ea90b0: punpckldq mm4, mm4 */
  guest_unsupported(0xea90b0); /* punpckldq mm4, mm4 */
/* ea90b3: punpckhdq mm2, mm2 */
  guest_unsupported(0xea90b3); /* punpckhdq mm2, mm2 */
/* ea90b6: pfmul mm3, qword ptr [edx] */
  guest_unsupported(0xea90b6); /* pfmul mm3, qword ptr [edx] */
/* ea90ba: pfmul mm2, mm0 */
  guest_unsupported(0xea90ba); /* pfmul mm2, mm0 */
/* ea90be: pfmul mm4, mm7 */
  guest_unsupported(0xea90be); /* pfmul mm4, mm7 */
/* ea90c2: pfsub mm2, mm4 */
  guest_unsupported(0xea90c2); /* pfsub mm2, mm4 */
/* ea90c6: pfadd mm2, mm3 */
  guest_unsupported(0xea90c6); /* pfadd mm2, mm3 */
/* ea90ca: movq qword ptr [esp + 0x10], mm2 */
  W64((uint32_t)(esp + 0x10u), MMX[2]);
/* ea90cf: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea90d2: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea90d5: movq mm3, mm6 */
  MMX[3] = MMX[6];
/* ea90d8: punpckldq mm1, mm1 */
  guest_unsupported(0xea90d8); /* punpckldq mm1, mm1 */
/* ea90db: punpckldq mm2, mm2 */
  guest_unsupported(0xea90db); /* punpckldq mm2, mm2 */
/* ea90de: punpckldq mm3, mm3 */
  guest_unsupported(0xea90de); /* punpckldq mm3, mm3 */
/* ea90e1: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xea90e1); /* pfmul mm1, qword ptr [edx] */
/* ea90e5: pfmul mm0, mm2 */
  guest_unsupported(0xea90e5); /* pfmul mm0, mm2 */
/* ea90e9: pfmul mm3, qword ptr [edx + 0x10] */
  guest_unsupported(0xea90e9); /* pfmul mm3, qword ptr [edx + 0x10] */
/* ea90ee: pfadd mm0, mm1 */
  guest_unsupported(0xea90ee); /* pfadd mm0, mm1 */
/* ea90f2: pfsub mm0, mm3 */
  guest_unsupported(0xea90f2); /* pfsub mm0, mm3 */
/* ea90f6: movq qword ptr [esp + 0x20], mm0 */
  W64((uint32_t)(esp + 0x20u), MMX[0]);
/* ea90fb: punpckhdq mm5, mm5 */
  guest_unsupported(0xea90fb); /* punpckhdq mm5, mm5 */
/* ea90fe: punpckhdq mm6, mm6 */
  guest_unsupported(0xea90fe); /* punpckhdq mm6, mm6 */
/* ea9101: pfmul mm2, mm7 */
  guest_unsupported(0xea9101); /* pfmul mm2, mm7 */
/* ea9105: pfmul mm5, qword ptr [edx + 0x10] */
  guest_unsupported(0xea9105); /* pfmul mm5, qword ptr [edx + 0x10] */
/* ea910a: pfmul mm6, qword ptr [edx] */
  guest_unsupported(0xea910a); /* pfmul mm6, qword ptr [edx] */
/* ea910e: pfsub mm2, mm5 */
  guest_unsupported(0xea910e); /* pfsub mm2, mm5 */
/* ea9112: pfadd mm2, mm6 */
  guest_unsupported(0xea9112); /* pfadd mm2, mm6 */
/* ea9116: movq qword ptr [esp + 0x30], mm2 */
  W64((uint32_t)(esp + 0x30u), MMX[2]);
/* ea911b: punpckhdq mm0, mm2 */
  guest_unsupported(0xea911b); /* punpckhdq mm0, mm2 */
/* ea911e: punpckldq mm7, mm4 */
  guest_unsupported(0xea911e); /* punpckldq mm7, mm4 */
/* ea9121: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* ea9124: movq mm1, qword ptr [esp] */
  MMX[1] = R64((uint32_t)(esp));
/* ea9128: punpckldq mm3, dword ptr [edx + 0x10] */
  guest_unsupported(0xea9128); /* punpckldq mm3, dword ptr [edx + 0x10] */
/* ea912c: punpckhdq mm1, qword ptr [esp + 0x10] */
  guest_unsupported(0xea912c); /* punpckhdq mm1, qword ptr [esp + 0x10] */
/* ea9131: pfmul mm0, mm7 */
  guest_unsupported(0xea9131); /* pfmul mm0, mm7 */
/* ea9135: pfmul mm3, mm1 */
  guest_unsupported(0xea9135); /* pfmul mm3, mm1 */
/* ea9139: pfnacc mm0, mm3 */
  guest_unsupported(0xea9139); /* pfnacc mm0, mm3 */
/* ea913d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* ea9141: pfacc mm0, mm0 */
  guest_unsupported(0xea9141); /* pfacc mm0, mm0 */
/* ea9145: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9147: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea914a: je 0xea914f */
  if (zf) goto L_ea914f;
L_ea914c: /* ea914c: movd dword ptr [eax], mm0 */
  guest_unsupported(0xea914c); /* movd dword ptr [eax], mm0 */
L_ea914f: /* ea914f: pfrcp mm1, mm0 */
  guest_unsupported(0xea914f); /* pfrcp mm1, mm0 */
/* ea9153: pxor mm3, mm3 */
  guest_unsupported(0xea9153); /* pxor mm3, mm3 */
/* ea9156: punpckldq mm0, mm0 */
  guest_unsupported(0xea9156); /* punpckldq mm0, mm0 */
/* ea9159: pfcmpeq mm3, mm4 */
  guest_unsupported(0xea9159); /* pfcmpeq mm3, mm4 */
/* ea915d: pfrcpit1 mm0, mm1 */
  guest_unsupported(0xea915d); /* pfrcpit1 mm0, mm1 */
/* ea9161: pfrcpit2 mm0, mm1 */
  guest_unsupported(0xea9161); /* pfrcpit2 mm0, mm1 */
/* ea9165: movd eax, mm3 */
  guest_unsupported(0xea9165); /* movd eax, mm3 */
/* ea9168: pfmul mm0, qword ptr [0xeb3b90] */
  guest_unsupported(0xea9168); /* pfmul mm0, qword ptr [0xeb3b90] */
/* ea9170: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9172: pswapd mm1, mm0 */
  guest_unsupported(0xea9172); /* pswapd mm1, mm0 */
/* ea9176: jne 0xea920a */
  if (!zf) goto L_ea920a;
L_ea917c: /* ea917c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* ea9180: movq mm2, qword ptr [esp] */
  MMX[2] = R64((uint32_t)(esp));
/* ea9184: movq mm5, qword ptr [esp + 8] */
  MMX[5] = R64((uint32_t)(esp + 0x8u));
/* ea9189: movq mm3, qword ptr [esp + 0x10] */
  MMX[3] = R64((uint32_t)(esp + 0x10u));
/* ea918e: movq mm6, qword ptr [esp + 0x18] */
  MMX[6] = R64((uint32_t)(esp + 0x18u));
/* ea9193: pfmul mm2, mm1 */
  guest_unsupported(0xea9193); /* pfmul mm2, mm1 */
/* ea9197: pfmul mm3, mm0 */
  guest_unsupported(0xea9197); /* pfmul mm3, mm0 */
/* ea919b: pfmul mm5, mm1 */
  guest_unsupported(0xea919b); /* pfmul mm5, mm1 */
/* ea919f: pfmul mm6, mm0 */
  guest_unsupported(0xea919f); /* pfmul mm6, mm0 */
/* ea91a3: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea91a6: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea91a9: punpckhdq mm2, mm3 */
  guest_unsupported(0xea91a9); /* punpckhdq mm2, mm3 */
/* ea91ac: punpckldq mm4, mm3 */
  guest_unsupported(0xea91ac); /* punpckldq mm4, mm3 */
/* ea91af: punpckhdq mm5, mm6 */
  guest_unsupported(0xea91af); /* punpckhdq mm5, mm6 */
/* ea91b2: punpckldq mm7, mm6 */
  guest_unsupported(0xea91b2); /* punpckldq mm7, mm6 */
/* ea91b5: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea91b8: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea91bc: movq qword ptr [eax + 0x20], mm5 */
  W64((uint32_t)(eax + 0x20u), MMX[5]);
/* ea91c0: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea91c4: movq mm2, qword ptr [esp + 0x20] */
  MMX[2] = R64((uint32_t)(esp + 0x20u));
/* ea91c9: movq mm5, qword ptr [esp + 0x28] */
  MMX[5] = R64((uint32_t)(esp + 0x28u));
/* ea91ce: movq mm3, qword ptr [esp + 0x30] */
  MMX[3] = R64((uint32_t)(esp + 0x30u));
/* ea91d3: movq mm6, qword ptr [esp + 0x38] */
  MMX[6] = R64((uint32_t)(esp + 0x38u));
/* ea91d8: pfmul mm2, mm1 */
  guest_unsupported(0xea91d8); /* pfmul mm2, mm1 */
/* ea91dc: pfmul mm3, mm0 */
  guest_unsupported(0xea91dc); /* pfmul mm3, mm0 */
/* ea91e0: pfmul mm5, mm1 */
  guest_unsupported(0xea91e0); /* pfmul mm5, mm1 */
/* ea91e4: pfmul mm6, mm0 */
  guest_unsupported(0xea91e4); /* pfmul mm6, mm0 */
/* ea91e8: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea91eb: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea91ee: punpckhdq mm2, mm3 */
  guest_unsupported(0xea91ee); /* punpckhdq mm2, mm3 */
/* ea91f1: punpckldq mm4, mm3 */
  guest_unsupported(0xea91f1); /* punpckldq mm4, mm3 */
/* ea91f4: punpckhdq mm5, mm6 */
  guest_unsupported(0xea91f4); /* punpckhdq mm5, mm6 */
/* ea91f7: punpckldq mm7, mm6 */
  guest_unsupported(0xea91f7); /* punpckldq mm7, mm6 */
/* ea91fa: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea91fe: movq qword ptr [eax + 0x18], mm4 */
  W64((uint32_t)(eax + 0x18u), MMX[4]);
/* ea9202: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea9206: movq qword ptr [eax + 0x38], mm7 */
  W64((uint32_t)(eax + 0x38u), MMX[7]);
L_ea920a: /* ea920a: femms  */
  guest_unsupported(0xea920a); /* femms  */
/* ea920c: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea920f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea9212(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9212: /* ea9212: femms  */
  guest_unsupported(0xea9212); /* femms  */
/* ea9214: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea9217: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* ea921b: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* ea921f: mov ebp, esp */
  ebp = esp;
/* ea9221: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* ea9224: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea9227: movq mm1, qword ptr [edx + 0x10] */
  MMX[1] = R64((uint32_t)(edx + 0x10u));
/* ea922b: movq mm3, qword ptr [edx + 0x28] */
  MMX[3] = R64((uint32_t)(edx + 0x28u));
/* ea922f: movq mm4, qword ptr [edx + 0x38] */
  MMX[4] = R64((uint32_t)(edx + 0x38u));
/* ea9233: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea9236: punpckldq mm0, mm1 */
  guest_unsupported(0xea9236); /* punpckldq mm0, mm1 */
/* ea9239: punpckhdq mm2, mm1 */
  guest_unsupported(0xea9239); /* punpckhdq mm2, mm1 */
/* ea923c: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea923f: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea9243: movq qword ptr [esp + 0x10], mm2 */
  W64((uint32_t)(esp + 0x10u), MMX[2]);
/* ea9248: movq mm6, qword ptr [edx + 8] */
  MMX[6] = R64((uint32_t)(edx + 0x8u));
/* ea924c: punpckldq mm3, mm4 */
  guest_unsupported(0xea924c); /* punpckldq mm3, mm4 */
/* ea924f: movq mm7, qword ptr [edx + 0x18] */
  MMX[7] = R64((uint32_t)(edx + 0x18u));
/* ea9253: movq mm0, qword ptr [edx + 0x20] */
  MMX[0] = R64((uint32_t)(edx + 0x20u));
/* ea9257: punpckhdq mm5, mm4 */
  guest_unsupported(0xea9257); /* punpckhdq mm5, mm4 */
/* ea925a: movq mm1, mm6 */
  MMX[1] = MMX[6];
/* ea925d: movq qword ptr [esp + 0x28], mm3 */
  W64((uint32_t)(esp + 0x28u), MMX[3]);
/* ea9262: movq qword ptr [esp + 0x38], mm5 */
  W64((uint32_t)(esp + 0x38u), MMX[5]);
/* ea9267: mov ecx, dword ptr [ebp + 0x4c] */
  ecx = R32((uint32_t)(ebp + 0x4cu));
/* ea926a: cmp ecx, dword ptr [ebp + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea926d: punpckldq mm6, mm7 */
  guest_unsupported(0xea926d); /* punpckldq mm6, mm7 */
/* ea9270: movq mm4, qword ptr [edx + 0x30] */
  MMX[4] = R64((uint32_t)(edx + 0x30u));
/* ea9274: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea9277: punpckhdq mm1, mm7 */
  guest_unsupported(0xea9277); /* punpckhdq mm1, mm7 */
/* ea927a: movq qword ptr [esp + 0x20], mm6 */
  W64((uint32_t)(esp + 0x20u), MMX[6]);
/* ea927f: punpckhdq mm0, mm4 */
  guest_unsupported(0xea927f); /* punpckhdq mm0, mm4 */
/* ea9282: punpckldq mm2, mm4 */
  guest_unsupported(0xea9282); /* punpckldq mm2, mm4 */
/* ea9285: movq qword ptr [esp + 0x30], mm1 */
  W64((uint32_t)(esp + 0x30u), MMX[1]);
/* ea928a: movq qword ptr [esp + 0x18], mm0 */
  W64((uint32_t)(esp + 0x18u), MMX[0]);
/* ea928f: movq qword ptr [esp + 8], mm2 */
  W64((uint32_t)(esp + 0x8u), MMX[2]);
/* ea9294: je 0xea9435 */
  if (zf) goto L_ea9435;
L_ea929a: /* ea929a: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* ea929d: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea92a1: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea92a6: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea92a9: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea92ac: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea92af: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea92b2: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea92b2); /* pfmul mm0, qword ptr [ecx] */
/* ea92b6: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea92b6); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea92bb: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea92be: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea92c1: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea92c1); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea92c6: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea92c6); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea92cb: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea92cb); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea92d0: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea92d0); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea92d5: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea92d5); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea92da: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea92da); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea92df: pfacc mm0, mm2 */
  guest_unsupported(0xea92df); /* pfacc mm0, mm2 */
/* ea92e3: pfacc mm1, mm3 */
  guest_unsupported(0xea92e3); /* pfacc mm1, mm3 */
/* ea92e7: pfacc mm4, mm6 */
  guest_unsupported(0xea92e7); /* pfacc mm4, mm6 */
/* ea92eb: pfacc mm5, mm7 */
  guest_unsupported(0xea92eb); /* pfacc mm5, mm7 */
/* ea92ef: pfadd mm0, mm1 */
  guest_unsupported(0xea92ef); /* pfadd mm0, mm1 */
/* ea92f3: pfadd mm4, mm5 */
  guest_unsupported(0xea92f3); /* pfadd mm4, mm5 */
/* ea92f7: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea92fa: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* ea92fe: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea9303: movq mm1, qword ptr [esp + 0x18] */
  MMX[1] = R64((uint32_t)(esp + 0x18u));
/* ea9308: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea930b: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea930e: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9311: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea9314: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea9314); /* pfmul mm0, qword ptr [ecx] */
/* ea9318: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea9318); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea931d: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9320: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea9323: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea9323); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea9328: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea9328); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea932d: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea932d); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea9332: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea9332); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea9337: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea9337); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea933c: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea933c); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea9341: pfacc mm0, mm2 */
  guest_unsupported(0xea9341); /* pfacc mm0, mm2 */
/* ea9345: pfacc mm1, mm3 */
  guest_unsupported(0xea9345); /* pfacc mm1, mm3 */
/* ea9349: pfacc mm4, mm6 */
  guest_unsupported(0xea9349); /* pfacc mm4, mm6 */
/* ea934d: pfacc mm5, mm7 */
  guest_unsupported(0xea934d); /* pfacc mm5, mm7 */
/* ea9351: pfadd mm0, mm1 */
  guest_unsupported(0xea9351); /* pfadd mm0, mm1 */
/* ea9355: pfadd mm4, mm5 */
  guest_unsupported(0xea9355); /* pfadd mm4, mm5 */
/* ea9359: movq qword ptr [eax + 0x10], mm0 */
  W64((uint32_t)(eax + 0x10u), MMX[0]);
/* ea935d: movq qword ptr [eax + 0x18], mm4 */
  W64((uint32_t)(eax + 0x18u), MMX[4]);
/* ea9361: movq mm0, qword ptr [esp + 0x20] */
  MMX[0] = R64((uint32_t)(esp + 0x20u));
/* ea9366: movq mm1, qword ptr [esp + 0x28] */
  MMX[1] = R64((uint32_t)(esp + 0x28u));
/* ea936b: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea936e: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9371: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9374: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea9377: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea9377); /* pfmul mm0, qword ptr [ecx] */
/* ea937b: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea937b); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea9380: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9383: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea9386: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea9386); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea938b: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea938b); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea9390: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea9390); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea9395: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea9395); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea939a: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea939a); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea939f: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea939f); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea93a4: pfacc mm0, mm2 */
  guest_unsupported(0xea93a4); /* pfacc mm0, mm2 */
/* ea93a8: pfacc mm1, mm3 */
  guest_unsupported(0xea93a8); /* pfacc mm1, mm3 */
/* ea93ac: pfacc mm4, mm6 */
  guest_unsupported(0xea93ac); /* pfacc mm4, mm6 */
/* ea93b0: pfacc mm5, mm7 */
  guest_unsupported(0xea93b0); /* pfacc mm5, mm7 */
/* ea93b4: pfadd mm0, mm1 */
  guest_unsupported(0xea93b4); /* pfadd mm0, mm1 */
/* ea93b8: pfadd mm4, mm5 */
  guest_unsupported(0xea93b8); /* pfadd mm4, mm5 */
/* ea93bc: movq qword ptr [eax + 0x20], mm0 */
  W64((uint32_t)(eax + 0x20u), MMX[0]);
/* ea93c0: movq qword ptr [eax + 0x28], mm4 */
  W64((uint32_t)(eax + 0x28u), MMX[4]);
/* ea93c4: movq mm0, qword ptr [esp + 0x30] */
  MMX[0] = R64((uint32_t)(esp + 0x30u));
/* ea93c9: movq mm1, qword ptr [esp + 0x38] */
  MMX[1] = R64((uint32_t)(esp + 0x38u));
/* ea93ce: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea93d1: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea93d4: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea93d7: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea93da: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea93da); /* pfmul mm0, qword ptr [ecx] */
/* ea93de: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea93de); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea93e3: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea93e6: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea93e9: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea93e9); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea93ee: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea93ee); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea93f3: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea93f3); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea93f8: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea93f8); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea93fd: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea93fd); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea9402: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea9402); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea9407: pfacc mm0, mm2 */
  guest_unsupported(0xea9407); /* pfacc mm0, mm2 */
/* ea940b: pfacc mm1, mm3 */
  guest_unsupported(0xea940b); /* pfacc mm1, mm3 */
/* ea940f: pfacc mm4, mm6 */
  guest_unsupported(0xea940f); /* pfacc mm4, mm6 */
/* ea9413: pfacc mm5, mm7 */
  guest_unsupported(0xea9413); /* pfacc mm5, mm7 */
/* ea9417: pfadd mm0, mm1 */
  guest_unsupported(0xea9417); /* pfadd mm0, mm1 */
/* ea941b: pfadd mm4, mm5 */
  guest_unsupported(0xea941b); /* pfadd mm4, mm5 */
/* ea941f: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea9423: movq qword ptr [eax + 0x38], mm4 */
  W64((uint32_t)(eax + 0x38u), MMX[4]);
/* ea9427: mov esp, ebp */
  esp = ebp;
/* ea9429: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ea942d: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea9430: femms  */
  guest_unsupported(0xea9430); /* femms  */
/* ea9432: ret 0xc */
  esp += 16; SPILL(); return;
L_ea9435: /* ea9435: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* ea9438: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea943c: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea9441: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea9444: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9447: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea944a: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea944d: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea944d); /* pfmul mm0, qword ptr [ecx] */
/* ea9451: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea9451); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea9456: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9459: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea945c: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea945c); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea9461: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea9461); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea9466: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea9466); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea946b: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea946b); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea9470: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea9470); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea9475: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea9475); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea947a: pfacc mm0, mm2 */
  guest_unsupported(0xea947a); /* pfacc mm0, mm2 */
/* ea947e: pfacc mm1, mm3 */
  guest_unsupported(0xea947e); /* pfacc mm1, mm3 */
/* ea9482: pfacc mm4, mm6 */
  guest_unsupported(0xea9482); /* pfacc mm4, mm6 */
/* ea9486: pfacc mm5, mm7 */
  guest_unsupported(0xea9486); /* pfacc mm5, mm7 */
/* ea948a: pfadd mm0, mm1 */
  guest_unsupported(0xea948a); /* pfadd mm0, mm1 */
/* ea948e: pfadd mm4, mm5 */
  guest_unsupported(0xea948e); /* pfadd mm4, mm5 */
/* ea9492: movq qword ptr [esp], mm0 */
  W64((uint32_t)(esp), MMX[0]);
/* ea9496: movq qword ptr [esp + 8], mm4 */
  W64((uint32_t)(esp + 0x8u), MMX[4]);
/* ea949b: movq mm0, qword ptr [esp + 0x10] */
  MMX[0] = R64((uint32_t)(esp + 0x10u));
/* ea94a0: movq mm1, qword ptr [esp + 0x18] */
  MMX[1] = R64((uint32_t)(esp + 0x18u));
/* ea94a5: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea94a8: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea94ab: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea94ae: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea94b1: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea94b1); /* pfmul mm0, qword ptr [ecx] */
/* ea94b5: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea94b5); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea94ba: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea94bd: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea94c0: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea94c0); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea94c5: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea94c5); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea94ca: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea94ca); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea94cf: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea94cf); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea94d4: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea94d4); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea94d9: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea94d9); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea94de: pfacc mm0, mm2 */
  guest_unsupported(0xea94de); /* pfacc mm0, mm2 */
/* ea94e2: pfacc mm1, mm3 */
  guest_unsupported(0xea94e2); /* pfacc mm1, mm3 */
/* ea94e6: pfacc mm4, mm6 */
  guest_unsupported(0xea94e6); /* pfacc mm4, mm6 */
/* ea94ea: pfacc mm5, mm7 */
  guest_unsupported(0xea94ea); /* pfacc mm5, mm7 */
/* ea94ee: pfadd mm0, mm1 */
  guest_unsupported(0xea94ee); /* pfadd mm0, mm1 */
/* ea94f2: pfadd mm4, mm5 */
  guest_unsupported(0xea94f2); /* pfadd mm4, mm5 */
/* ea94f6: movq qword ptr [esp + 0x10], mm0 */
  W64((uint32_t)(esp + 0x10u), MMX[0]);
/* ea94fb: movq qword ptr [esp + 0x18], mm4 */
  W64((uint32_t)(esp + 0x18u), MMX[4]);
/* ea9500: movq mm0, qword ptr [esp + 0x20] */
  MMX[0] = R64((uint32_t)(esp + 0x20u));
/* ea9505: movq mm1, qword ptr [esp + 0x28] */
  MMX[1] = R64((uint32_t)(esp + 0x28u));
/* ea950a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea950d: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9510: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9513: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea9516: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea9516); /* pfmul mm0, qword ptr [ecx] */
/* ea951a: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea951a); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea951f: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9522: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea9525: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea9525); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea952a: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea952a); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea952f: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea952f); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea9534: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea9534); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea9539: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea9539); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea953e: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea953e); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea9543: pfacc mm0, mm2 */
  guest_unsupported(0xea9543); /* pfacc mm0, mm2 */
/* ea9547: pfacc mm1, mm3 */
  guest_unsupported(0xea9547); /* pfacc mm1, mm3 */
/* ea954b: pfacc mm4, mm6 */
  guest_unsupported(0xea954b); /* pfacc mm4, mm6 */
/* ea954f: pfacc mm5, mm7 */
  guest_unsupported(0xea954f); /* pfacc mm5, mm7 */
/* ea9553: pfadd mm0, mm1 */
  guest_unsupported(0xea9553); /* pfadd mm0, mm1 */
/* ea9557: pfadd mm4, mm5 */
  guest_unsupported(0xea9557); /* pfadd mm4, mm5 */
/* ea955b: movq qword ptr [esp + 0x20], mm0 */
  W64((uint32_t)(esp + 0x20u), MMX[0]);
/* ea9560: movq qword ptr [esp + 0x28], mm4 */
  W64((uint32_t)(esp + 0x28u), MMX[4]);
/* ea9565: movq mm0, qword ptr [esp + 0x30] */
  MMX[0] = R64((uint32_t)(esp + 0x30u));
/* ea956a: movq mm1, qword ptr [esp + 0x38] */
  MMX[1] = R64((uint32_t)(esp + 0x38u));
/* ea956f: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* ea9572: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9575: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9578: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea957b: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea957b); /* pfmul mm0, qword ptr [ecx] */
/* ea957f: pfmul mm1, qword ptr [ecx + 8] */
  guest_unsupported(0xea957f); /* pfmul mm1, qword ptr [ecx + 8] */
/* ea9584: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9587: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea958a: pfmul mm2, qword ptr [ecx + 0x10] */
  guest_unsupported(0xea958a); /* pfmul mm2, qword ptr [ecx + 0x10] */
/* ea958f: pfmul mm3, qword ptr [ecx + 0x18] */
  guest_unsupported(0xea958f); /* pfmul mm3, qword ptr [ecx + 0x18] */
/* ea9594: pfmul mm4, qword ptr [ecx + 0x20] */
  guest_unsupported(0xea9594); /* pfmul mm4, qword ptr [ecx + 0x20] */
/* ea9599: pfmul mm5, qword ptr [ecx + 0x28] */
  guest_unsupported(0xea9599); /* pfmul mm5, qword ptr [ecx + 0x28] */
/* ea959e: pfmul mm6, qword ptr [ecx + 0x30] */
  guest_unsupported(0xea959e); /* pfmul mm6, qword ptr [ecx + 0x30] */
/* ea95a3: pfmul mm7, qword ptr [ecx + 0x38] */
  guest_unsupported(0xea95a3); /* pfmul mm7, qword ptr [ecx + 0x38] */
/* ea95a8: pfacc mm0, mm2 */
  guest_unsupported(0xea95a8); /* pfacc mm0, mm2 */
/* ea95ac: pfacc mm1, mm3 */
  guest_unsupported(0xea95ac); /* pfacc mm1, mm3 */
/* ea95b0: pfacc mm4, mm6 */
  guest_unsupported(0xea95b0); /* pfacc mm4, mm6 */
/* ea95b4: pfacc mm5, mm7 */
  guest_unsupported(0xea95b4); /* pfacc mm5, mm7 */
/* ea95b8: pfadd mm0, mm1 */
  guest_unsupported(0xea95b8); /* pfadd mm0, mm1 */
/* ea95bc: pfadd mm4, mm5 */
  guest_unsupported(0xea95bc); /* pfadd mm4, mm5 */
/* ea95c0: movq qword ptr [eax + 0x30], mm0 */
  W64((uint32_t)(eax + 0x30u), MMX[0]);
/* ea95c4: movq qword ptr [eax + 0x38], mm4 */
  W64((uint32_t)(eax + 0x38u), MMX[4]);
/* ea95c8: movq mm0, qword ptr [esp] */
  MMX[0] = R64((uint32_t)(esp));
/* ea95cc: movq mm1, qword ptr [esp + 8] */
  MMX[1] = R64((uint32_t)(esp + 0x8u));
/* ea95d1: movq mm2, qword ptr [esp + 0x10] */
  MMX[2] = R64((uint32_t)(esp + 0x10u));
/* ea95d6: movq mm3, qword ptr [esp + 0x18] */
  MMX[3] = R64((uint32_t)(esp + 0x18u));
/* ea95db: movq mm4, qword ptr [esp + 0x20] */
  MMX[4] = R64((uint32_t)(esp + 0x20u));
/* ea95e0: movq mm5, qword ptr [esp + 0x28] */
  MMX[5] = R64((uint32_t)(esp + 0x28u));
/* ea95e5: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea95e8: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* ea95ec: movq qword ptr [eax + 0x10], mm2 */
  W64((uint32_t)(eax + 0x10u), MMX[2]);
/* ea95f0: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea95f4: movq qword ptr [eax + 0x20], mm4 */
  W64((uint32_t)(eax + 0x20u), MMX[4]);
/* ea95f8: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea95fc: mov esp, ebp */
  esp = ebp;
/* ea95fe: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* ea9602: add esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ea9605: femms  */
  guest_unsupported(0xea9605); /* femms  */
/* ea9607: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea960a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea960a: /* ea960a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea960b: mov ebp, esp */
  ebp = esp;
/* ea960d: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea9610: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* ea9613: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea9616: movq mm1, qword ptr [edx + 0x10] */
  MMX[1] = R64((uint32_t)(edx + 0x10u));
/* ea961a: movq mm2, qword ptr [edx + 0x20] */
  MMX[2] = R64((uint32_t)(edx + 0x20u));
/* ea961e: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9621: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea9624: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea9627: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea962a: punpckhdq mm4, mm4 */
  guest_unsupported(0xea962a); /* punpckhdq mm4, mm4 */
/* ea962d: punpckldq mm6, mm2 */
  guest_unsupported(0xea962d); /* punpckldq mm6, mm2 */
/* ea9630: punpckldq mm5, mm5 */
  guest_unsupported(0xea9630); /* punpckldq mm5, mm5 */
/* ea9633: punpckhdq mm7, mm2 */
  guest_unsupported(0xea9633); /* punpckhdq mm7, mm2 */
/* ea9636: pfmul mm4, mm6 */
  guest_unsupported(0xea9636); /* pfmul mm4, mm6 */
/* ea963a: pfmul mm5, mm7 */
  guest_unsupported(0xea963a); /* pfmul mm5, mm7 */
/* ea963e: movq mm3, qword ptr [edx + 0x30] */
  MMX[3] = R64((uint32_t)(edx + 0x30u));
/* ea9642: movq mm7, mm0 */
  MMX[7] = MMX[0];
/* ea9645: pfsub mm5, mm4 */
  guest_unsupported(0xea9645); /* pfsub mm5, mm4 */
/* ea9649: punpckldq mm0, mm1 */
  guest_unsupported(0xea9649); /* punpckldq mm0, mm1 */
/* ea964c: punpckhdq mm7, mm1 */
  guest_unsupported(0xea964c); /* punpckhdq mm7, mm1 */
/* ea964f: movq mm6, mm3 */
  MMX[6] = MMX[3];
/* ea9652: movq mm4, mm3 */
  MMX[4] = MMX[3];
/* ea9655: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9655); /* punpckhdq mm3, mm3 */
/* ea9658: punpckhdq mm6, mm2 */
  guest_unsupported(0xea9658); /* punpckhdq mm6, mm2 */
/* ea965b: punpckldq mm4, mm2 */
  guest_unsupported(0xea965b); /* punpckldq mm4, mm2 */
/* ea965e: punpckhdq mm1, mm2 */
  guest_unsupported(0xea965e); /* punpckhdq mm1, mm2 */
/* ea9661: pfmul mm6, mm0 */
  guest_unsupported(0xea9661); /* pfmul mm6, mm0 */
/* ea9665: punpckhdq mm0, mm4 */
  guest_unsupported(0xea9665); /* punpckhdq mm0, mm4 */
/* ea9668: pfmul mm7, mm4 */
  guest_unsupported(0xea9668); /* pfmul mm7, mm4 */
/* ea966c: punpckldq mm4, mm4 */
  guest_unsupported(0xea966c); /* punpckldq mm4, mm4 */
/* ea966f: pfmul mm0, mm3 */
  guest_unsupported(0xea966f); /* pfmul mm0, mm3 */
/* ea9673: pfmul mm1, mm4 */
  guest_unsupported(0xea9673); /* pfmul mm1, mm4 */
/* ea9677: pfsub mm6, mm7 */
  guest_unsupported(0xea9677); /* pfsub mm6, mm7 */
/* ea967b: pfsubr mm1, mm0 */
  guest_unsupported(0xea967b); /* pfsubr mm1, mm0 */
/* ea967f: movq mm0, qword ptr [edx + 0x38] */
  MMX[0] = R64((uint32_t)(edx + 0x38u));
/* ea9683: movq mm2, mm6 */
  MMX[2] = MMX[6];
/* ea9686: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9689: movq mm7, qword ptr [edx + 0x28] */
  MMX[7] = R64((uint32_t)(edx + 0x28u));
/* ea968d: punpckhdq mm2, mm2 */
  guest_unsupported(0xea968d); /* punpckhdq mm2, mm2 */
/* ea9690: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9693: punpckhdq mm4, mm4 */
  guest_unsupported(0xea9693); /* punpckhdq mm4, mm4 */
/* ea9696: pfmul mm2, mm0 */
  guest_unsupported(0xea9696); /* pfmul mm2, mm0 */
/* ea969a: punpckldq mm3, mm3 */
  guest_unsupported(0xea969a); /* punpckldq mm3, mm3 */
/* ea969d: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xea969d); /* pfmul mm4, qword ptr [edx + 0x18] */
/* ea96a2: pfmul mm3, mm7 */
  guest_unsupported(0xea96a2); /* pfmul mm3, mm7 */
/* ea96a6: pfadd mm2, mm4 */
  guest_unsupported(0xea96a6); /* pfadd mm2, mm4 */
/* ea96aa: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* ea96ad: pfsub mm2, mm3 */
  guest_unsupported(0xea96ad); /* pfsub mm2, mm3 */
/* ea96b1: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea96b4: punpckldq mm4, mm4 */
  guest_unsupported(0xea96b4); /* punpckldq mm4, mm4 */
/* ea96b7: movq qword ptr [ebp - 0x3c], mm2 */
  W64((uint32_t)(ebp + 0xffffffc4u), MMX[2]);
/* ea96bb: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea96be: punpckhdq mm3, mm3 */
  guest_unsupported(0xea96be); /* punpckhdq mm3, mm3 */
/* ea96c1: punpckhdq mm2, mm2 */
  guest_unsupported(0xea96c1); /* punpckhdq mm2, mm2 */
/* ea96c4: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xea96c4); /* pfmul mm3, qword ptr [edx + 8] */
/* ea96c9: pfmul mm2, mm0 */
  guest_unsupported(0xea96c9); /* pfmul mm2, mm0 */
/* ea96cd: pfmul mm4, mm7 */
  guest_unsupported(0xea96cd); /* pfmul mm4, mm7 */
/* ea96d1: pfsub mm2, mm4 */
  guest_unsupported(0xea96d1); /* pfsub mm2, mm4 */
/* ea96d5: pfadd mm2, mm3 */
  guest_unsupported(0xea96d5); /* pfadd mm2, mm3 */
/* ea96d9: movq qword ptr [ebp - 0x2c], mm2 */
  W64((uint32_t)(ebp + 0xffffffd4u), MMX[2]);
/* ea96dd: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea96e0: movq mm3, mm6 */
  MMX[3] = MMX[6];
/* ea96e3: punpckldq mm1, mm1 */
  guest_unsupported(0xea96e3); /* punpckldq mm1, mm1 */
/* ea96e6: punpckldq mm2, mm2 */
  guest_unsupported(0xea96e6); /* punpckldq mm2, mm2 */
/* ea96e9: punpckldq mm3, mm3 */
  guest_unsupported(0xea96e9); /* punpckldq mm3, mm3 */
/* ea96ec: pfmul mm1, qword ptr [edx + 8] */
  guest_unsupported(0xea96ec); /* pfmul mm1, qword ptr [edx + 8] */
/* ea96f1: pfmul mm0, mm2 */
  guest_unsupported(0xea96f1); /* pfmul mm0, mm2 */
/* ea96f5: pfmul mm3, qword ptr [edx + 0x18] */
  guest_unsupported(0xea96f5); /* pfmul mm3, qword ptr [edx + 0x18] */
/* ea96fa: pfadd mm0, mm1 */
  guest_unsupported(0xea96fa); /* pfadd mm0, mm1 */
/* ea96fe: pfsub mm0, mm3 */
  guest_unsupported(0xea96fe); /* pfsub mm0, mm3 */
/* ea9702: movq qword ptr [ebp - 0x1c], mm0 */
  W64((uint32_t)(ebp + 0xffffffe4u), MMX[0]);
/* ea9706: punpckhdq mm5, mm5 */
  guest_unsupported(0xea9706); /* punpckhdq mm5, mm5 */
/* ea9709: punpckhdq mm6, mm6 */
  guest_unsupported(0xea9709); /* punpckhdq mm6, mm6 */
/* ea970c: pfmul mm2, mm7 */
  guest_unsupported(0xea970c); /* pfmul mm2, mm7 */
/* ea9710: pfmul mm5, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9710); /* pfmul mm5, qword ptr [edx + 0x18] */
/* ea9715: pfmul mm6, qword ptr [edx + 8] */
  guest_unsupported(0xea9715); /* pfmul mm6, qword ptr [edx + 8] */
/* ea971a: pfsub mm2, mm5 */
  guest_unsupported(0xea971a); /* pfsub mm2, mm5 */
/* ea971e: pfadd mm2, mm6 */
  guest_unsupported(0xea971e); /* pfadd mm2, mm6 */
/* ea9722: movq qword ptr [ebp - 0xc], mm2 */
  W64((uint32_t)(ebp + 0xfffffff4u), MMX[2]);
/* ea9726: movq mm0, qword ptr [edx + 8] */
  MMX[0] = R64((uint32_t)(edx + 0x8u));
/* ea972a: movq mm1, qword ptr [edx + 0x18] */
  MMX[1] = R64((uint32_t)(edx + 0x18u));
/* ea972e: movq mm2, qword ptr [edx + 0x28] */
  MMX[2] = R64((uint32_t)(edx + 0x28u));
/* ea9732: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9735: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea9738: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* ea973b: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* ea973e: punpckhdq mm4, mm4 */
  guest_unsupported(0xea973e); /* punpckhdq mm4, mm4 */
/* ea9741: punpckldq mm6, mm2 */
  guest_unsupported(0xea9741); /* punpckldq mm6, mm2 */
/* ea9744: punpckldq mm5, mm5 */
  guest_unsupported(0xea9744); /* punpckldq mm5, mm5 */
/* ea9747: punpckhdq mm7, mm2 */
  guest_unsupported(0xea9747); /* punpckhdq mm7, mm2 */
/* ea974a: pfmul mm4, mm6 */
  guest_unsupported(0xea974a); /* pfmul mm4, mm6 */
/* ea974e: pfmul mm5, mm7 */
  guest_unsupported(0xea974e); /* pfmul mm5, mm7 */
/* ea9752: movq mm3, qword ptr [edx + 0x38] */
  MMX[3] = R64((uint32_t)(edx + 0x38u));
/* ea9756: movq mm7, mm0 */
  MMX[7] = MMX[0];
/* ea9759: pfsub mm5, mm4 */
  guest_unsupported(0xea9759); /* pfsub mm5, mm4 */
/* ea975d: punpckldq mm0, mm1 */
  guest_unsupported(0xea975d); /* punpckldq mm0, mm1 */
/* ea9760: punpckhdq mm7, mm1 */
  guest_unsupported(0xea9760); /* punpckhdq mm7, mm1 */
/* ea9763: movq mm6, mm3 */
  MMX[6] = MMX[3];
/* ea9766: movq mm4, mm3 */
  MMX[4] = MMX[3];
/* ea9769: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9769); /* punpckhdq mm3, mm3 */
/* ea976c: punpckhdq mm6, mm2 */
  guest_unsupported(0xea976c); /* punpckhdq mm6, mm2 */
/* ea976f: punpckldq mm4, mm2 */
  guest_unsupported(0xea976f); /* punpckldq mm4, mm2 */
/* ea9772: punpckhdq mm1, mm2 */
  guest_unsupported(0xea9772); /* punpckhdq mm1, mm2 */
/* ea9775: pfmul mm6, mm0 */
  guest_unsupported(0xea9775); /* pfmul mm6, mm0 */
/* ea9779: punpckhdq mm0, mm4 */
  guest_unsupported(0xea9779); /* punpckhdq mm0, mm4 */
/* ea977c: pfmul mm7, mm4 */
  guest_unsupported(0xea977c); /* pfmul mm7, mm4 */
/* ea9780: punpckldq mm4, mm4 */
  guest_unsupported(0xea9780); /* punpckldq mm4, mm4 */
/* ea9783: pfmul mm0, mm3 */
  guest_unsupported(0xea9783); /* pfmul mm0, mm3 */
/* ea9787: pfmul mm1, mm4 */
  guest_unsupported(0xea9787); /* pfmul mm1, mm4 */
/* ea978b: pfsub mm6, mm7 */
  guest_unsupported(0xea978b); /* pfsub mm6, mm7 */
/* ea978f: pfsubr mm1, mm0 */
  guest_unsupported(0xea978f); /* pfsubr mm1, mm0 */
/* ea9793: movq mm0, qword ptr [edx + 0x30] */
  MMX[0] = R64((uint32_t)(edx + 0x30u));
/* ea9797: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea979a: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea979d: movq mm7, qword ptr [edx + 0x20] */
  MMX[7] = R64((uint32_t)(edx + 0x20u));
/* ea97a1: movq mm2, mm6 */
  MMX[2] = MMX[6];
/* ea97a4: punpckhdq mm4, mm4 */
  guest_unsupported(0xea97a4); /* punpckhdq mm4, mm4 */
/* ea97a7: punpckldq mm3, mm3 */
  guest_unsupported(0xea97a7); /* punpckldq mm3, mm3 */
/* ea97aa: punpckhdq mm2, mm2 */
  guest_unsupported(0xea97aa); /* punpckhdq mm2, mm2 */
/* ea97ad: pfmul mm4, qword ptr [edx + 0x10] */
  guest_unsupported(0xea97ad); /* pfmul mm4, qword ptr [edx + 0x10] */
/* ea97b2: pfmul mm2, mm0 */
  guest_unsupported(0xea97b2); /* pfmul mm2, mm0 */
/* ea97b6: pfmul mm3, mm7 */
  guest_unsupported(0xea97b6); /* pfmul mm3, mm7 */
/* ea97ba: pfadd mm2, mm4 */
  guest_unsupported(0xea97ba); /* pfadd mm2, mm4 */
/* ea97be: pfsub mm2, mm3 */
  guest_unsupported(0xea97be); /* pfsub mm2, mm3 */
/* ea97c2: movq qword ptr [ebp - 0x44], mm2 */
  W64((uint32_t)(ebp + 0xffffffbcu), MMX[2]);
/* ea97c6: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea97c9: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* ea97cc: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea97cf: punpckhdq mm3, mm3 */
  guest_unsupported(0xea97cf); /* punpckhdq mm3, mm3 */
/* ea97d2: punpckldq mm4, mm4 */
  guest_unsupported(0xea97d2); /* punpckldq mm4, mm4 */
/* ea97d5: punpckhdq mm2, mm2 */
  guest_unsupported(0xea97d5); /* punpckhdq mm2, mm2 */
/* ea97d8: pfmul mm3, qword ptr [edx] */
  guest_unsupported(0xea97d8); /* pfmul mm3, qword ptr [edx] */
/* ea97dc: pfmul mm2, mm0 */
  guest_unsupported(0xea97dc); /* pfmul mm2, mm0 */
/* ea97e0: pfmul mm4, mm7 */
  guest_unsupported(0xea97e0); /* pfmul mm4, mm7 */
/* ea97e4: pfsub mm2, mm4 */
  guest_unsupported(0xea97e4); /* pfsub mm2, mm4 */
/* ea97e8: pfadd mm2, mm3 */
  guest_unsupported(0xea97e8); /* pfadd mm2, mm3 */
/* ea97ec: movq qword ptr [ebp - 0x34], mm2 */
  W64((uint32_t)(ebp + 0xffffffccu), MMX[2]);
/* ea97f0: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea97f3: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* ea97f6: movq mm3, mm6 */
  MMX[3] = MMX[6];
/* ea97f9: punpckldq mm1, mm1 */
  guest_unsupported(0xea97f9); /* punpckldq mm1, mm1 */
/* ea97fc: punpckldq mm2, mm2 */
  guest_unsupported(0xea97fc); /* punpckldq mm2, mm2 */
/* ea97ff: punpckldq mm3, mm3 */
  guest_unsupported(0xea97ff); /* punpckldq mm3, mm3 */
/* ea9802: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xea9802); /* pfmul mm1, qword ptr [edx] */
/* ea9806: pfmul mm0, mm2 */
  guest_unsupported(0xea9806); /* pfmul mm0, mm2 */
/* ea980a: pfmul mm3, qword ptr [edx + 0x10] */
  guest_unsupported(0xea980a); /* pfmul mm3, qword ptr [edx + 0x10] */
/* ea980f: pfadd mm0, mm1 */
  guest_unsupported(0xea980f); /* pfadd mm0, mm1 */
/* ea9813: pfsub mm0, mm3 */
  guest_unsupported(0xea9813); /* pfsub mm0, mm3 */
/* ea9817: movq qword ptr [ebp - 0x24], mm0 */
  W64((uint32_t)(ebp + 0xffffffdcu), MMX[0]);
/* ea981b: punpckhdq mm5, mm5 */
  guest_unsupported(0xea981b); /* punpckhdq mm5, mm5 */
/* ea981e: punpckhdq mm6, mm6 */
  guest_unsupported(0xea981e); /* punpckhdq mm6, mm6 */
/* ea9821: pfmul mm2, mm7 */
  guest_unsupported(0xea9821); /* pfmul mm2, mm7 */
/* ea9825: pfmul mm5, qword ptr [edx + 0x10] */
  guest_unsupported(0xea9825); /* pfmul mm5, qword ptr [edx + 0x10] */
/* ea982a: pfmul mm6, qword ptr [edx] */
  guest_unsupported(0xea982a); /* pfmul mm6, qword ptr [edx] */
/* ea982e: pfsub mm2, mm5 */
  guest_unsupported(0xea982e); /* pfsub mm2, mm5 */
/* ea9832: pfadd mm2, mm6 */
  guest_unsupported(0xea9832); /* pfadd mm2, mm6 */
/* ea9836: movq qword ptr [ebp - 0x14], mm2 */
  W64((uint32_t)(ebp + 0xffffffecu), MMX[2]);
/* ea983a: punpckldq mm7, mm4 */
  guest_unsupported(0xea983a); /* punpckldq mm7, mm4 */
/* ea983d: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* ea9840: punpckhdq mm0, mm2 */
  guest_unsupported(0xea9840); /* punpckhdq mm0, mm2 */
/* ea9843: pfmul mm7, qword ptr [0xeb3b90] */
  guest_unsupported(0xea9843); /* pfmul mm7, qword ptr [0xeb3b90] */
/* ea984b: movq mm1, qword ptr [ebp - 0x44] */
  MMX[1] = R64((uint32_t)(ebp + 0xffffffbcu));
/* ea984f: punpckldq mm3, dword ptr [edx + 0x10] */
  guest_unsupported(0xea984f); /* punpckldq mm3, dword ptr [edx + 0x10] */
/* ea9853: punpckhdq mm1, qword ptr [ebp - 0x34] */
  guest_unsupported(0xea9853); /* punpckhdq mm1, qword ptr [ebp - 0x34] */
/* ea9857: pfmul mm3, qword ptr [0xeb3b90] */
  guest_unsupported(0xea9857); /* pfmul mm3, qword ptr [0xeb3b90] */
/* ea985f: pfmul mm0, mm7 */
  guest_unsupported(0xea985f); /* pfmul mm0, mm7 */
/* ea9863: pfmul mm3, mm1 */
  guest_unsupported(0xea9863); /* pfmul mm3, mm1 */
/* ea9867: pfadd mm0, mm3 */
  guest_unsupported(0xea9867); /* pfadd mm0, mm3 */
/* ea986b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ea986e: pfacc mm0, mm0 */
  guest_unsupported(0xea986e); /* pfacc mm0, mm0 */
/* ea9872: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9874: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9877: je 0xea987c */
  if (zf) goto L_ea987c;
L_ea9879: /* ea9879: movd dword ptr [eax], mm0 */
  guest_unsupported(0xea9879); /* movd dword ptr [eax], mm0 */
L_ea987c: /* ea987c: pfrcp mm1, mm0 */
  guest_unsupported(0xea987c); /* pfrcp mm1, mm0 */
/* ea9880: pxor mm3, mm3 */
  guest_unsupported(0xea9880); /* pxor mm3, mm3 */
/* ea9883: punpckldq mm0, mm0 */
  guest_unsupported(0xea9883); /* punpckldq mm0, mm0 */
/* ea9886: pfcmpeq mm3, mm4 */
  guest_unsupported(0xea9886); /* pfcmpeq mm3, mm4 */
/* ea988a: pfrcpit1 mm0, mm1 */
  guest_unsupported(0xea988a); /* pfrcpit1 mm0, mm1 */
/* ea988e: pfrcpit2 mm0, mm1 */
  guest_unsupported(0xea988e); /* pfrcpit2 mm0, mm1 */
/* ea9892: movd eax, mm3 */
  guest_unsupported(0xea9892); /* movd eax, mm3 */
/* ea9895: pfmul mm0, qword ptr [0xeb3b90] */
  guest_unsupported(0xea9895); /* pfmul mm0, qword ptr [0xeb3b90] */
/* ea989d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea989f: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea98a2: punpckldq mm2, mm1 */
  guest_unsupported(0xea98a2); /* punpckldq mm2, mm1 */
/* ea98a5: punpckhdq mm1, mm2 */
  guest_unsupported(0xea98a5); /* punpckhdq mm1, mm2 */
/* ea98a8: jne 0xea9934 */
  if (!zf) goto L_ea9934;
L_ea98ae: /* ea98ae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea98b1: movq mm2, qword ptr [ebp - 0x44] */
  MMX[2] = R64((uint32_t)(ebp + 0xffffffbcu));
/* ea98b5: movq mm5, qword ptr [ebp - 0x3c] */
  MMX[5] = R64((uint32_t)(ebp + 0xffffffc4u));
/* ea98b9: movq mm3, qword ptr [ebp - 0x34] */
  MMX[3] = R64((uint32_t)(ebp + 0xffffffccu));
/* ea98bd: movq mm6, qword ptr [ebp - 0x2c] */
  MMX[6] = R64((uint32_t)(ebp + 0xffffffd4u));
/* ea98c1: pfmul mm2, mm1 */
  guest_unsupported(0xea98c1); /* pfmul mm2, mm1 */
/* ea98c5: pfmul mm3, mm0 */
  guest_unsupported(0xea98c5); /* pfmul mm3, mm0 */
/* ea98c9: pfmul mm5, mm1 */
  guest_unsupported(0xea98c9); /* pfmul mm5, mm1 */
/* ea98cd: pfmul mm6, mm0 */
  guest_unsupported(0xea98cd); /* pfmul mm6, mm0 */
/* ea98d1: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea98d4: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea98d7: punpckhdq mm2, mm3 */
  guest_unsupported(0xea98d7); /* punpckhdq mm2, mm3 */
/* ea98da: punpckldq mm4, mm3 */
  guest_unsupported(0xea98da); /* punpckldq mm4, mm3 */
/* ea98dd: punpckhdq mm5, mm6 */
  guest_unsupported(0xea98dd); /* punpckhdq mm5, mm6 */
/* ea98e0: punpckldq mm7, mm6 */
  guest_unsupported(0xea98e0); /* punpckldq mm7, mm6 */
/* ea98e3: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* ea98e6: movq qword ptr [eax + 0x10], mm4 */
  W64((uint32_t)(eax + 0x10u), MMX[4]);
/* ea98ea: movq qword ptr [eax + 0x20], mm5 */
  W64((uint32_t)(eax + 0x20u), MMX[5]);
/* ea98ee: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea98f2: movq mm2, qword ptr [ebp - 0x24] */
  MMX[2] = R64((uint32_t)(ebp + 0xffffffdcu));
/* ea98f6: movq mm5, qword ptr [ebp - 0x1c] */
  MMX[5] = R64((uint32_t)(ebp + 0xffffffe4u));
/* ea98fa: movq mm3, qword ptr [ebp - 0x14] */
  MMX[3] = R64((uint32_t)(ebp + 0xffffffecu));
/* ea98fe: movq mm6, qword ptr [ebp - 0xc] */
  MMX[6] = R64((uint32_t)(ebp + 0xfffffff4u));
/* ea9902: pfmul mm2, mm1 */
  guest_unsupported(0xea9902); /* pfmul mm2, mm1 */
/* ea9906: pfmul mm3, mm0 */
  guest_unsupported(0xea9906); /* pfmul mm3, mm0 */
/* ea990a: pfmul mm5, mm1 */
  guest_unsupported(0xea990a); /* pfmul mm5, mm1 */
/* ea990e: pfmul mm6, mm0 */
  guest_unsupported(0xea990e); /* pfmul mm6, mm0 */
/* ea9912: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* ea9915: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* ea9918: punpckhdq mm2, mm3 */
  guest_unsupported(0xea9918); /* punpckhdq mm2, mm3 */
/* ea991b: punpckldq mm4, mm3 */
  guest_unsupported(0xea991b); /* punpckldq mm4, mm3 */
/* ea991e: punpckhdq mm5, mm6 */
  guest_unsupported(0xea991e); /* punpckhdq mm5, mm6 */
/* ea9921: punpckldq mm7, mm6 */
  guest_unsupported(0xea9921); /* punpckldq mm7, mm6 */
/* ea9924: movq qword ptr [eax + 8], mm2 */
  W64((uint32_t)(eax + 0x8u), MMX[2]);
/* ea9928: movq qword ptr [eax + 0x18], mm4 */
  W64((uint32_t)(eax + 0x18u), MMX[4]);
/* ea992c: movq qword ptr [eax + 0x28], mm5 */
  W64((uint32_t)(eax + 0x28u), MMX[5]);
/* ea9930: movq qword ptr [eax + 0x38], mm7 */
  W64((uint32_t)(eax + 0x38u), MMX[7]);
L_ea9934: /* ea9934: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* ea9937: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea993a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea993b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea993e(void) {
  LOAD_REGS();
L_ea993e: /* ea993e: femms  */
  guest_unsupported(0xea993e); /* femms  */
/* ea9940: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* ea9944: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* ea9948: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* ea994c: call 0xea960a */
  esp -= 4; W32(esp, 0xea9951u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* ea9951: femms  */
  guest_unsupported(0xea9951); /* femms  */
/* ea9953: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9957: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea995a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea995a: /* ea995a: femms  */
  guest_unsupported(0xea995a); /* femms  */
/* ea995c: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea9960: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea9964: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea9968: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea996b: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea996e: punpckldq mm0, mm0 */
  guest_unsupported(0xea996e); /* punpckldq mm0, mm0 */
/* ea9971: punpckhdq mm1, mm1 */
  guest_unsupported(0xea9971); /* punpckhdq mm1, mm1 */
/* ea9974: movd mm2, dword ptr [eax + 8] */
  guest_unsupported(0xea9974); /* movd mm2, dword ptr [eax + 8] */
/* ea9978: punpckldq mm2, mm2 */
  guest_unsupported(0xea9978); /* punpckldq mm2, mm2 */
/* ea997b: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea997e: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xea997e); /* pfmul mm0, qword ptr [edx] */
/* ea9982: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9985: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xea9985); /* pfmul mm1, qword ptr [edx + 0x10] */
/* ea998a: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* ea998d: pfmul mm2, qword ptr [edx + 0x20] */
  guest_unsupported(0xea998d); /* pfmul mm2, qword ptr [edx + 0x20] */
/* ea9992: pfadd mm0, qword ptr [edx + 0x30] */
  guest_unsupported(0xea9992); /* pfadd mm0, qword ptr [edx + 0x30] */
/* ea9997: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xea9997); /* pfmul mm3, qword ptr [edx + 8] */
/* ea999c: pfadd mm1, mm2 */
  guest_unsupported(0xea999c); /* pfadd mm1, mm2 */
/* ea99a0: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xea99a0); /* pfmul mm4, qword ptr [edx + 0x18] */
/* ea99a5: pfmul mm5, qword ptr [edx + 0x28] */
  guest_unsupported(0xea99a5); /* pfmul mm5, qword ptr [edx + 0x28] */
/* ea99aa: pfadd mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea99aa); /* pfadd mm3, qword ptr [edx + 0x38] */
/* ea99af: pfadd mm0, mm1 */
  guest_unsupported(0xea99af); /* pfadd mm0, mm1 */
/* ea99b3: pfadd mm4, mm5 */
  guest_unsupported(0xea99b3); /* pfadd mm4, mm5 */
/* ea99b7: pfadd mm3, mm4 */
  guest_unsupported(0xea99b7); /* pfadd mm3, mm4 */
/* ea99bb: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* ea99be: movq qword ptr [ecx + 8], mm3 */
  W64((uint32_t)(ecx + 0x8u), MMX[3]);
/* ea99c2: femms  */
  guest_unsupported(0xea99c2); /* femms  */
/* ea99c4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea99c8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea99cb(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea99cb: /* ea99cb: femms  */
  guest_unsupported(0xea99cb); /* femms  */
/* ea99cd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea99d1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea99d5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea99d9: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea99dc: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea99df: punpckldq mm0, mm0 */
  guest_unsupported(0xea99df); /* punpckldq mm0, mm0 */
/* ea99e2: punpckhdq mm1, mm1 */
  guest_unsupported(0xea99e2); /* punpckhdq mm1, mm1 */
/* ea99e5: movd mm2, dword ptr [eax + 8] */
  guest_unsupported(0xea99e5); /* movd mm2, dword ptr [eax + 8] */
/* ea99e9: punpckldq mm2, mm2 */
  guest_unsupported(0xea99e9); /* punpckldq mm2, mm2 */
/* ea99ec: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea99ef: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xea99ef); /* pfmul mm0, qword ptr [edx] */
/* ea99f3: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea99f6: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xea99f6); /* pfmul mm1, qword ptr [edx + 0x10] */
/* ea99fb: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* ea99fe: pfmul mm2, qword ptr [edx + 0x20] */
  guest_unsupported(0xea99fe); /* pfmul mm2, qword ptr [edx + 0x20] */
/* ea9a03: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xea9a03); /* pfmul mm3, qword ptr [edx + 8] */
/* ea9a08: pfadd mm1, mm2 */
  guest_unsupported(0xea9a08); /* pfadd mm1, mm2 */
/* ea9a0c: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9a0c); /* pfmul mm4, qword ptr [edx + 0x18] */
/* ea9a11: pfmul mm5, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9a11); /* pfmul mm5, qword ptr [edx + 0x28] */
/* ea9a16: pfadd mm0, mm1 */
  guest_unsupported(0xea9a16); /* pfadd mm0, mm1 */
/* ea9a1a: pfadd mm4, mm5 */
  guest_unsupported(0xea9a1a); /* pfadd mm4, mm5 */
/* ea9a1e: pfadd mm3, mm4 */
  guest_unsupported(0xea9a1e); /* pfadd mm3, mm4 */
/* ea9a22: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* ea9a25: movd dword ptr [ecx + 8], mm3 */
  guest_unsupported(0xea9a25); /* movd dword ptr [ecx + 8], mm3 */
/* ea9a29: femms  */
  guest_unsupported(0xea9a29); /* femms  */
/* ea9a2b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9a2f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea9a32(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9a32: /* ea9a32: femms  */
  guest_unsupported(0xea9a32); /* femms  */
/* ea9a34: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ea9a38: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea9a3b: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea9a3e: movd mm2, dword ptr [ecx + 8] */
  guest_unsupported(0xea9a3e); /* movd mm2, dword ptr [ecx + 8] */
/* ea9a42: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea9a45: pfmul mm0, mm0 */
  guest_unsupported(0xea9a45); /* pfmul mm0, mm0 */
/* ea9a49: pfmul mm2, mm2 */
  guest_unsupported(0xea9a49); /* pfmul mm2, mm2 */
/* ea9a4d: pfadd mm0, mm2 */
  guest_unsupported(0xea9a4d); /* pfadd mm0, mm2 */
/* ea9a51: pfacc mm0, mm0 */
  guest_unsupported(0xea9a51); /* pfacc mm0, mm0 */
/* ea9a55: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea9a58: pfrsqrt mm4, mm0 */
  guest_unsupported(0xea9a58); /* pfrsqrt mm4, mm0 */
/* ea9a5c: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xea9a5c); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* ea9a64: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* ea9a67: pfmul mm2, mm4 */
  guest_unsupported(0xea9a67); /* pfmul mm2, mm4 */
/* ea9a6b: pfrsqit1 mm0, mm2 */
  guest_unsupported(0xea9a6b); /* pfrsqit1 mm0, mm2 */
/* ea9a6f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9a73: pand mm1, mm5 */
  guest_unsupported(0xea9a73); /* pand mm1, mm5 */
/* ea9a76: pand mm3, mm5 */
  guest_unsupported(0xea9a76); /* pand mm3, mm5 */
/* ea9a79: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xea9a79); /* pfrcpit2 mm0, mm4 */
/* ea9a7d: pfmul mm1, mm0 */
  guest_unsupported(0xea9a7d); /* pfmul mm1, mm0 */
/* ea9a81: pfmul mm3, mm0 */
  guest_unsupported(0xea9a81); /* pfmul mm3, mm0 */
/* ea9a85: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea9a88: movd dword ptr [eax + 8], mm3 */
  guest_unsupported(0xea9a88); /* movd dword ptr [eax + 8], mm3 */
/* ea9a8c: femms  */
  guest_unsupported(0xea9a8c); /* femms  */
/* ea9a8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_ea9a91(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9a91: /* ea9a91: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea9a95: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ea9a99: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea9a9d: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* ea9aa0: movq mm4, qword ptr [eax] */
  MMX[4] = R64((uint32_t)(eax));
/* ea9aa3: movd mm6, dword ptr [esp + 0x14] */
  guest_unsupported(0xea9aa3); /* movd mm6, dword ptr [esp + 0x14] */
/* ea9aa8: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xea9aa8); /* movd mm1, dword ptr [edx + 8] */
/* ea9aac: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* ea9aaf: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea9aaf); /* movd mm3, dword ptr [ecx + 8] */
/* ea9ab3: movd mm5, dword ptr [eax + 8] */
  guest_unsupported(0xea9ab3); /* movd mm5, dword ptr [eax + 8] */
/* ea9ab7: pfsub mm0, mm4 */
  guest_unsupported(0xea9ab7); /* pfsub mm0, mm4 */
/* ea9abb: movd mm7, dword ptr [esp + 0x18] */
  guest_unsupported(0xea9abb); /* movd mm7, dword ptr [esp + 0x18] */
/* ea9ac0: pfsub mm1, mm5 */
  guest_unsupported(0xea9ac0); /* pfsub mm1, mm5 */
/* ea9ac4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9ac8: pfsub mm2, mm4 */
  guest_unsupported(0xea9ac8); /* pfsub mm2, mm4 */
/* ea9acc: punpckldq mm6, mm6 */
  guest_unsupported(0xea9acc); /* punpckldq mm6, mm6 */
/* ea9acf: pfsub mm3, mm5 */
  guest_unsupported(0xea9acf); /* pfsub mm3, mm5 */
/* ea9ad3: pfmul mm0, mm6 */
  guest_unsupported(0xea9ad3); /* pfmul mm0, mm6 */
/* ea9ad7: punpckldq mm7, mm7 */
  guest_unsupported(0xea9ad7); /* punpckldq mm7, mm7 */
/* ea9ada: pfmul mm1, mm6 */
  guest_unsupported(0xea9ada); /* pfmul mm1, mm6 */
/* ea9ade: pfadd mm0, mm4 */
  guest_unsupported(0xea9ade); /* pfadd mm0, mm4 */
/* ea9ae2: pfmul mm2, mm7 */
  guest_unsupported(0xea9ae2); /* pfmul mm2, mm7 */
/* ea9ae6: pfadd mm1, mm5 */
  guest_unsupported(0xea9ae6); /* pfadd mm1, mm5 */
/* ea9aea: pfmul mm3, mm7 */
  guest_unsupported(0xea9aea); /* pfmul mm3, mm7 */
/* ea9aee: pfadd mm0, mm2 */
  guest_unsupported(0xea9aee); /* pfadd mm0, mm2 */
/* ea9af2: pfadd mm1, mm3 */
  guest_unsupported(0xea9af2); /* pfadd mm1, mm3 */
/* ea9af6: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea9af9: movd dword ptr [eax + 8], mm1 */
  guest_unsupported(0xea9af9); /* movd dword ptr [eax + 8], mm1 */
/* ea9afd: femms  */
  guest_unsupported(0xea9afd); /* femms  */
/* ea9aff: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea9b02(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9b02: /* ea9b02: femms  */
  guest_unsupported(0xea9b02); /* femms  */
/* ea9b04: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xea9b04); /* movd mm0, dword ptr [esp + 0x18] */
/* ea9b09: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea9b0c: pfmul mm1, mm1 */
  guest_unsupported(0xea9b0c); /* pfmul mm1, mm1 */
/* ea9b10: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea9b13: pfmul mm2, mm0 */
  guest_unsupported(0xea9b13); /* pfmul mm2, mm0 */
/* ea9b17: movq mm3, qword ptr [0xeb3c38] */
  MMX[3] = R64((uint32_t)(0xeb3c38u));
/* ea9b1e: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9b21: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* ea9b24: pfsub mm7, mm1 */
  guest_unsupported(0xea9b24); /* pfsub mm7, mm1 */
/* ea9b28: pfmul mm4, mm3 */
  guest_unsupported(0xea9b28); /* pfmul mm4, mm3 */
/* ea9b2c: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9b2f: pfmul mm1, qword ptr [0xeb3c40] */
  guest_unsupported(0xea9b2f); /* pfmul mm1, qword ptr [0xeb3c40] */
/* ea9b37: pfmul mm2, mm3 */
  guest_unsupported(0xea9b37); /* pfmul mm2, mm3 */
/* ea9b3b: pfsub mm6, mm4 */
  guest_unsupported(0xea9b3b); /* pfsub mm6, mm4 */
/* ea9b3f: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* ea9b42: pfsub mm1, mm2 */
  guest_unsupported(0xea9b42); /* pfsub mm1, mm2 */
/* ea9b46: pfadd mm6, mm0 */
  guest_unsupported(0xea9b46); /* pfadd mm6, mm0 */
/* ea9b4a: pfsub mm2, mm5 */
  guest_unsupported(0xea9b4a); /* pfsub mm2, mm5 */
/* ea9b4e: pfadd mm2, qword ptr [0xeb3c28] */
  guest_unsupported(0xea9b4e); /* pfadd mm2, qword ptr [0xeb3c28] */
/* ea9b56: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* ea9b5a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* ea9b5e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea9b62: punpckldq mm7, mm7 */
  guest_unsupported(0xea9b62); /* punpckldq mm7, mm7 */
/* ea9b65: punpckldq mm1, mm1 */
  guest_unsupported(0xea9b65); /* punpckldq mm1, mm1 */
/* ea9b68: punpckldq mm6, mm6 */
  guest_unsupported(0xea9b68); /* punpckldq mm6, mm6 */
/* ea9b6b: punpckldq mm2, mm2 */
  guest_unsupported(0xea9b6b); /* punpckldq mm2, mm2 */
/* ea9b6e: movq mm5, mm7 */
  MMX[5] = MMX[7];
/* ea9b71: pfmul mm7, qword ptr [eax] */
  guest_unsupported(0xea9b71); /* pfmul mm7, qword ptr [eax] */
/* ea9b75: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* ea9b78: pfmul mm1, qword ptr [ecx] */
  guest_unsupported(0xea9b78); /* pfmul mm1, qword ptr [ecx] */
/* ea9b7c: movd mm4, dword ptr [eax + 8] */
  guest_unsupported(0xea9b7c); /* movd mm4, dword ptr [eax + 8] */
/* ea9b80: pfmul mm5, mm4 */
  guest_unsupported(0xea9b80); /* pfmul mm5, mm4 */
/* ea9b84: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xea9b84); /* movd mm3, dword ptr [ecx + 8] */
/* ea9b88: pfmul mm0, mm3 */
  guest_unsupported(0xea9b88); /* pfmul mm0, mm3 */
/* ea9b8c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ea9b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9b94: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* ea9b97: pfmul mm6, qword ptr [edx] */
  guest_unsupported(0xea9b97); /* pfmul mm6, qword ptr [edx] */
/* ea9b9b: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* ea9b9e: pfadd mm1, mm7 */
  guest_unsupported(0xea9b9e); /* pfadd mm1, mm7 */
/* ea9ba2: pfadd mm0, mm5 */
  guest_unsupported(0xea9ba2); /* pfadd mm0, mm5 */
/* ea9ba6: pfmul mm2, qword ptr [ecx] */
  guest_unsupported(0xea9ba6); /* pfmul mm2, qword ptr [ecx] */
/* ea9baa: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea9baa); /* movd mm7, dword ptr [edx + 8] */
/* ea9bae: pfmul mm4, mm7 */
  guest_unsupported(0xea9bae); /* pfmul mm4, mm7 */
/* ea9bb2: movd mm5, dword ptr [ecx + 8] */
  guest_unsupported(0xea9bb2); /* movd mm5, dword ptr [ecx + 8] */
/* ea9bb6: pfmul mm3, mm5 */
  guest_unsupported(0xea9bb6); /* pfmul mm3, mm5 */
/* ea9bba: pfadd mm2, mm6 */
  guest_unsupported(0xea9bba); /* pfadd mm2, mm6 */
/* ea9bbe: pfadd mm3, mm4 */
  guest_unsupported(0xea9bbe); /* pfadd mm3, mm4 */
/* ea9bc2: pfadd mm1, mm2 */
  guest_unsupported(0xea9bc2); /* pfadd mm1, mm2 */
/* ea9bc6: pfadd mm0, mm3 */
  guest_unsupported(0xea9bc6); /* pfadd mm0, mm3 */
/* ea9bca: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* ea9bcd: movd dword ptr [eax + 8], mm0 */
  guest_unsupported(0xea9bcd); /* movd dword ptr [eax + 8], mm0 */
/* ea9bd1: femms  */
  guest_unsupported(0xea9bd1); /* femms  */
/* ea9bd3: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea9bd6(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9bd6: /* ea9bd6: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xea9bd6); /* movd mm0, dword ptr [esp + 0x18] */
/* ea9bdb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* ea9bdf: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea9be2: punpckldq mm0, mm0 */
  guest_unsupported(0xea9be2); /* punpckldq mm0, mm0 */
/* ea9be5: pfmul mm0, mm0 */
  guest_unsupported(0xea9be5); /* pfmul mm0, mm0 */
/* ea9be9: punpckldq mm1, dword ptr [0xeb3ba0] */
  guest_unsupported(0xea9be9); /* punpckldq mm1, dword ptr [0xeb3ba0] */
/* ea9bf0: pfmul mm0, mm1 */
  guest_unsupported(0xea9bf0); /* pfmul mm0, mm1 */
/* ea9bf4: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* ea9bf7: pfmul mm1, mm1 */
  guest_unsupported(0xea9bf7); /* pfmul mm1, mm1 */
/* ea9bfb: pxor mm7, mm7 */
  guest_unsupported(0xea9bfb); /* pxor mm7, mm7 */
/* ea9bfe: pfsub mm0, mm1 */
  guest_unsupported(0xea9bfe); /* pfsub mm0, mm1 */
/* ea9c02: punpckldq mm1, mm1 */
  guest_unsupported(0xea9c02); /* punpckldq mm1, mm1 */
/* ea9c05: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* ea9c08: punpckldq mm3, mm3 */
  guest_unsupported(0xea9c08); /* punpckldq mm3, mm3 */
/* ea9c0b: pfmul mm0, qword ptr [0xeb3bb0] */
  guest_unsupported(0xea9c0b); /* pfmul mm0, qword ptr [0xeb3bb0] */
/* ea9c13: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea9c16: punpckldq mm0, mm4 */
  guest_unsupported(0xea9c16); /* punpckldq mm0, mm4 */
/* ea9c19: pxor mm3, qword ptr [0xeb3bc0] */
  guest_unsupported(0xea9c19); /* pxor mm3, qword ptr [0xeb3bc0] */
/* ea9c20: punpckhdq mm5, mm7 */
  guest_unsupported(0xea9c20); /* punpckhdq mm5, mm7 */
/* ea9c23: pfadd mm1, mm3 */
  guest_unsupported(0xea9c23); /* pfadd mm1, mm3 */
/* ea9c27: pfsub mm1, mm0 */
  guest_unsupported(0xea9c27); /* pfsub mm1, mm0 */
/* ea9c2b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* ea9c2f: pfsub mm0, mm5 */
  guest_unsupported(0xea9c2f); /* pfsub mm0, mm5 */
/* ea9c33: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* ea9c36: punpckhdq mm1, mm1 */
  guest_unsupported(0xea9c36); /* punpckhdq mm1, mm1 */
/* ea9c39: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea9c3c: punpckldq mm0, mm0 */
  guest_unsupported(0xea9c3c); /* punpckldq mm0, mm0 */
/* ea9c3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* ea9c43: punpckldq mm2, mm2 */
  guest_unsupported(0xea9c43); /* punpckldq mm2, mm2 */
/* ea9c46: movd mm7, dword ptr [edx + 8] */
  guest_unsupported(0xea9c46); /* movd mm7, dword ptr [edx + 8] */
/* ea9c4a: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9c4d: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xea9c4d); /* pfmul mm1, qword ptr [edx] */
/* ea9c51: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9c51); /* punpckhdq mm3, mm3 */
/* ea9c54: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* ea9c57: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xea9c57); /* pfmul mm0, qword ptr [ecx] */
/* ea9c5b: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* ea9c5e: pfmul mm2, qword ptr [eax] */
  guest_unsupported(0xea9c5e); /* pfmul mm2, qword ptr [eax] */
/* ea9c62: pfmul mm4, mm7 */
  guest_unsupported(0xea9c62); /* pfmul mm4, mm7 */
/* ea9c66: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ea9c6a: movd mm7, dword ptr [ecx + 8] */
  guest_unsupported(0xea9c6a); /* movd mm7, dword ptr [ecx + 8] */
/* ea9c6e: pfmul mm5, mm7 */
  guest_unsupported(0xea9c6e); /* pfmul mm5, mm7 */
/* ea9c72: pfadd mm0, mm1 */
  guest_unsupported(0xea9c72); /* pfadd mm0, mm1 */
/* ea9c76: movd mm7, dword ptr [eax + 8] */
  guest_unsupported(0xea9c76); /* movd mm7, dword ptr [eax + 8] */
/* ea9c7a: pfmul mm6, mm7 */
  guest_unsupported(0xea9c7a); /* pfmul mm6, mm7 */
/* ea9c7e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9c82: pfadd mm4, mm5 */
  guest_unsupported(0xea9c82); /* pfadd mm4, mm5 */
/* ea9c86: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* ea9c89: movd mm5, dword ptr [edx + 8] */
  guest_unsupported(0xea9c89); /* movd mm5, dword ptr [edx + 8] */
/* ea9c8d: pfadd mm0, mm2 */
  guest_unsupported(0xea9c8d); /* pfadd mm0, mm2 */
/* ea9c91: pfmul mm3, qword ptr [edx] */
  guest_unsupported(0xea9c91); /* pfmul mm3, qword ptr [edx] */
/* ea9c95: movq mm1, qword ptr [0xeb3c08] */
  MMX[1] = R64((uint32_t)(0xeb3c08u));
/* ea9c9c: pfadd mm0, mm3 */
  guest_unsupported(0xea9c9c); /* pfadd mm0, mm3 */
/* ea9ca0: pfmul mm7, mm5 */
  guest_unsupported(0xea9ca0); /* pfmul mm7, mm5 */
/* ea9ca4: pfadd mm4, mm6 */
  guest_unsupported(0xea9ca4); /* pfadd mm4, mm6 */
/* ea9ca8: pfmul mm0, mm1 */
  guest_unsupported(0xea9ca8); /* pfmul mm0, mm1 */
/* ea9cac: pfadd mm4, mm7 */
  guest_unsupported(0xea9cac); /* pfadd mm4, mm7 */
/* ea9cb0: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* ea9cb3: pfmul mm4, mm1 */
  guest_unsupported(0xea9cb3); /* pfmul mm4, mm1 */
/* ea9cb7: movd dword ptr [eax + 8], mm4 */
  guest_unsupported(0xea9cb7); /* movd dword ptr [eax + 8], mm4 */
/* ea9cbb: femms  */
  guest_unsupported(0xea9cbb); /* femms  */
/* ea9cbd: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_ea9cc0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9cc0: /* ea9cc0: femms  */
  guest_unsupported(0xea9cc0); /* femms  */
/* ea9cc2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* ea9cc6: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea9cca: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* ea9cce: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* ea9cd1: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* ea9cd4: punpckldq mm0, mm0 */
  guest_unsupported(0xea9cd4); /* punpckldq mm0, mm0 */
/* ea9cd7: punpckhdq mm1, mm1 */
  guest_unsupported(0xea9cd7); /* punpckhdq mm1, mm1 */
/* ea9cda: movd mm2, dword ptr [eax + 8] */
  guest_unsupported(0xea9cda); /* movd mm2, dword ptr [eax + 8] */
/* ea9cde: punpckldq mm2, mm2 */
  guest_unsupported(0xea9cde); /* punpckldq mm2, mm2 */
/* ea9ce1: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* ea9ce4: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xea9ce4); /* pfmul mm0, qword ptr [edx] */
/* ea9ce8: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* ea9ceb: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xea9ceb); /* pfmul mm1, qword ptr [edx + 0x10] */
/* ea9cf0: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* ea9cf3: pfmul mm2, qword ptr [edx + 0x20] */
  guest_unsupported(0xea9cf3); /* pfmul mm2, qword ptr [edx + 0x20] */
/* ea9cf8: pfadd mm0, qword ptr [edx + 0x30] */
  guest_unsupported(0xea9cf8); /* pfadd mm0, qword ptr [edx + 0x30] */
/* ea9cfd: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xea9cfd); /* pfmul mm3, qword ptr [edx + 8] */
/* ea9d02: pfadd mm1, mm2 */
  guest_unsupported(0xea9d02); /* pfadd mm1, mm2 */
/* ea9d06: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9d06); /* pfmul mm4, qword ptr [edx + 0x18] */
/* ea9d0b: pfmul mm5, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9d0b); /* pfmul mm5, qword ptr [edx + 0x28] */
/* ea9d10: pfadd mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea9d10); /* pfadd mm3, qword ptr [edx + 0x38] */
/* ea9d15: pfadd mm0, mm1 */
  guest_unsupported(0xea9d15); /* pfadd mm0, mm1 */
/* ea9d19: pfadd mm4, mm5 */
  guest_unsupported(0xea9d19); /* pfadd mm4, mm5 */
/* ea9d1d: pfadd mm3, mm4 */
  guest_unsupported(0xea9d1d); /* pfadd mm3, mm4 */
/* ea9d21: movq mm5, mm3 */
  MMX[5] = MMX[3];
/* ea9d24: punpckhdq mm5, mm5 */
  guest_unsupported(0xea9d24); /* punpckhdq mm5, mm5 */
/* ea9d27: pfrcp mm4, mm5 */
  guest_unsupported(0xea9d27); /* pfrcp mm4, mm5 */
/* ea9d2b: pfrcpit1 mm5, mm4 */
  guest_unsupported(0xea9d2b); /* pfrcpit1 mm5, mm4 */
/* ea9d2f: pfrcpit2 mm5, mm4 */
  guest_unsupported(0xea9d2f); /* pfrcpit2 mm5, mm4 */
/* ea9d33: pfmul mm0, mm5 */
  guest_unsupported(0xea9d33); /* pfmul mm0, mm5 */
/* ea9d37: pfmul mm3, mm5 */
  guest_unsupported(0xea9d37); /* pfmul mm3, mm5 */
/* ea9d3b: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* ea9d3e: movd dword ptr [ecx + 8], mm3 */
  guest_unsupported(0xea9d3e); /* movd dword ptr [ecx + 8], mm3 */
/* ea9d42: femms  */
  guest_unsupported(0xea9d42); /* femms  */
/* ea9d44: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9d48: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea9d4b(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9d4b: /* ea9d4b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* ea9d4f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* ea9d53: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9d57: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* ea9d5a: movq mm1, qword ptr [ecx + 8] */
  MMX[1] = R64((uint32_t)(ecx + 0x8u));
/* ea9d5e: movq mm4, qword ptr [edx] */
  MMX[4] = R64((uint32_t)(edx));
/* ea9d61: punpckhdq mm2, mm0 */
  guest_unsupported(0xea9d61); /* punpckhdq mm2, mm0 */
/* ea9d64: movq mm5, qword ptr [edx + 0x10] */
  MMX[5] = R64((uint32_t)(edx + 0x10u));
/* ea9d68: punpckhdq mm3, mm1 */
  guest_unsupported(0xea9d68); /* punpckhdq mm3, mm1 */
/* ea9d6b: movq mm6, qword ptr [edx + 0x20] */
  MMX[6] = R64((uint32_t)(edx + 0x20u));
/* ea9d6f: punpckldq mm0, mm0 */
  guest_unsupported(0xea9d6f); /* punpckldq mm0, mm0 */
/* ea9d72: punpckldq mm1, mm1 */
  guest_unsupported(0xea9d72); /* punpckldq mm1, mm1 */
/* ea9d75: pfmul mm4, mm0 */
  guest_unsupported(0xea9d75); /* pfmul mm4, mm0 */
/* ea9d79: punpckhdq mm2, mm2 */
  guest_unsupported(0xea9d79); /* punpckhdq mm2, mm2 */
/* ea9d7c: pfmul mm0, qword ptr [edx + 8] */
  guest_unsupported(0xea9d7c); /* pfmul mm0, qword ptr [edx + 8] */
/* ea9d81: movq mm7, qword ptr [edx + 0x30] */
  MMX[7] = R64((uint32_t)(edx + 0x30u));
/* ea9d85: pfmul mm5, mm2 */
  guest_unsupported(0xea9d85); /* pfmul mm5, mm2 */
/* ea9d89: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9d89); /* punpckhdq mm3, mm3 */
/* ea9d8c: pfmul mm2, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9d8c); /* pfmul mm2, qword ptr [edx + 0x18] */
/* ea9d91: pfadd mm5, mm4 */
  guest_unsupported(0xea9d91); /* pfadd mm5, mm4 */
/* ea9d95: pfmul mm6, mm1 */
  guest_unsupported(0xea9d95); /* pfmul mm6, mm1 */
/* ea9d99: pfadd mm2, mm0 */
  guest_unsupported(0xea9d99); /* pfadd mm2, mm0 */
/* ea9d9d: pfmul mm1, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9d9d); /* pfmul mm1, qword ptr [edx + 0x28] */
/* ea9da2: pfadd mm6, mm5 */
  guest_unsupported(0xea9da2); /* pfadd mm6, mm5 */
/* ea9da6: pfmul mm7, mm3 */
  guest_unsupported(0xea9da6); /* pfmul mm7, mm3 */
/* ea9daa: pfadd mm2, mm1 */
  guest_unsupported(0xea9daa); /* pfadd mm2, mm1 */
/* ea9dae: pfmul mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea9dae); /* pfmul mm3, qword ptr [edx + 0x38] */
/* ea9db3: pfadd mm7, mm6 */
  guest_unsupported(0xea9db3); /* pfadd mm7, mm6 */
/* ea9db7: movq mm0, qword ptr [ecx + 0x10] */
  MMX[0] = R64((uint32_t)(ecx + 0x10u));
/* ea9dbb: pfadd mm3, mm2 */
  guest_unsupported(0xea9dbb); /* pfadd mm3, mm2 */
/* ea9dbf: movq mm1, qword ptr [ecx + 0x18] */
  MMX[1] = R64((uint32_t)(ecx + 0x18u));
/* ea9dc3: movq qword ptr [eax], mm7 */
  W64((uint32_t)(eax), MMX[7]);
/* ea9dc6: movq mm4, qword ptr [edx] */
  MMX[4] = R64((uint32_t)(edx));
/* ea9dc9: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* ea9dcd: punpckhdq mm2, mm0 */
  guest_unsupported(0xea9dcd); /* punpckhdq mm2, mm0 */
/* ea9dd0: movq mm5, qword ptr [edx + 0x10] */
  MMX[5] = R64((uint32_t)(edx + 0x10u));
/* ea9dd4: punpckhdq mm3, mm1 */
  guest_unsupported(0xea9dd4); /* punpckhdq mm3, mm1 */
/* ea9dd7: movq mm6, qword ptr [edx + 0x20] */
  MMX[6] = R64((uint32_t)(edx + 0x20u));
/* ea9ddb: punpckldq mm0, mm0 */
  guest_unsupported(0xea9ddb); /* punpckldq mm0, mm0 */
/* ea9dde: punpckldq mm1, mm1 */
  guest_unsupported(0xea9dde); /* punpckldq mm1, mm1 */
/* ea9de1: pfmul mm4, mm0 */
  guest_unsupported(0xea9de1); /* pfmul mm4, mm0 */
/* ea9de5: punpckhdq mm2, mm2 */
  guest_unsupported(0xea9de5); /* punpckhdq mm2, mm2 */
/* ea9de8: pfmul mm0, qword ptr [edx + 8] */
  guest_unsupported(0xea9de8); /* pfmul mm0, qword ptr [edx + 8] */
/* ea9ded: movq mm7, qword ptr [edx + 0x30] */
  MMX[7] = R64((uint32_t)(edx + 0x30u));
/* ea9df1: pfmul mm5, mm2 */
  guest_unsupported(0xea9df1); /* pfmul mm5, mm2 */
/* ea9df5: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9df5); /* punpckhdq mm3, mm3 */
/* ea9df8: pfmul mm2, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9df8); /* pfmul mm2, qword ptr [edx + 0x18] */
/* ea9dfd: pfadd mm5, mm4 */
  guest_unsupported(0xea9dfd); /* pfadd mm5, mm4 */
/* ea9e01: pfmul mm6, mm1 */
  guest_unsupported(0xea9e01); /* pfmul mm6, mm1 */
/* ea9e05: pfadd mm2, mm0 */
  guest_unsupported(0xea9e05); /* pfadd mm2, mm0 */
/* ea9e09: pfmul mm1, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9e09); /* pfmul mm1, qword ptr [edx + 0x28] */
/* ea9e0e: pfadd mm6, mm5 */
  guest_unsupported(0xea9e0e); /* pfadd mm6, mm5 */
/* ea9e12: pfmul mm7, mm3 */
  guest_unsupported(0xea9e12); /* pfmul mm7, mm3 */
/* ea9e16: pfadd mm2, mm1 */
  guest_unsupported(0xea9e16); /* pfadd mm2, mm1 */
/* ea9e1a: pfmul mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea9e1a); /* pfmul mm3, qword ptr [edx + 0x38] */
/* ea9e1f: pfadd mm7, mm6 */
  guest_unsupported(0xea9e1f); /* pfadd mm7, mm6 */
/* ea9e23: movq mm0, qword ptr [ecx + 0x20] */
  MMX[0] = R64((uint32_t)(ecx + 0x20u));
/* ea9e27: pfadd mm3, mm2 */
  guest_unsupported(0xea9e27); /* pfadd mm3, mm2 */
/* ea9e2b: movq mm1, qword ptr [ecx + 0x28] */
  MMX[1] = R64((uint32_t)(ecx + 0x28u));
/* ea9e2f: movq qword ptr [eax + 0x10], mm7 */
  W64((uint32_t)(eax + 0x10u), MMX[7]);
/* ea9e33: movq mm4, qword ptr [edx] */
  MMX[4] = R64((uint32_t)(edx));
/* ea9e36: movq qword ptr [eax + 0x18], mm3 */
  W64((uint32_t)(eax + 0x18u), MMX[3]);
/* ea9e3a: punpckhdq mm2, mm0 */
  guest_unsupported(0xea9e3a); /* punpckhdq mm2, mm0 */
/* ea9e3d: movq mm5, qword ptr [edx + 0x10] */
  MMX[5] = R64((uint32_t)(edx + 0x10u));
/* ea9e41: punpckhdq mm3, mm1 */
  guest_unsupported(0xea9e41); /* punpckhdq mm3, mm1 */
/* ea9e44: movq mm6, qword ptr [edx + 0x20] */
  MMX[6] = R64((uint32_t)(edx + 0x20u));
/* ea9e48: punpckldq mm0, mm0 */
  guest_unsupported(0xea9e48); /* punpckldq mm0, mm0 */
/* ea9e4b: punpckldq mm1, mm1 */
  guest_unsupported(0xea9e4b); /* punpckldq mm1, mm1 */
/* ea9e4e: pfmul mm4, mm0 */
  guest_unsupported(0xea9e4e); /* pfmul mm4, mm0 */
/* ea9e52: punpckhdq mm2, mm2 */
  guest_unsupported(0xea9e52); /* punpckhdq mm2, mm2 */
/* ea9e55: pfmul mm0, qword ptr [edx + 8] */
  guest_unsupported(0xea9e55); /* pfmul mm0, qword ptr [edx + 8] */
/* ea9e5a: movq mm7, qword ptr [edx + 0x30] */
  MMX[7] = R64((uint32_t)(edx + 0x30u));
/* ea9e5e: pfmul mm5, mm2 */
  guest_unsupported(0xea9e5e); /* pfmul mm5, mm2 */
/* ea9e62: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9e62); /* punpckhdq mm3, mm3 */
/* ea9e65: pfmul mm2, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9e65); /* pfmul mm2, qword ptr [edx + 0x18] */
/* ea9e6a: pfadd mm5, mm4 */
  guest_unsupported(0xea9e6a); /* pfadd mm5, mm4 */
/* ea9e6e: pfmul mm6, mm1 */
  guest_unsupported(0xea9e6e); /* pfmul mm6, mm1 */
/* ea9e72: pfadd mm2, mm0 */
  guest_unsupported(0xea9e72); /* pfadd mm2, mm0 */
/* ea9e76: pfmul mm1, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9e76); /* pfmul mm1, qword ptr [edx + 0x28] */
/* ea9e7b: pfadd mm6, mm5 */
  guest_unsupported(0xea9e7b); /* pfadd mm6, mm5 */
/* ea9e7f: pfmul mm7, mm3 */
  guest_unsupported(0xea9e7f); /* pfmul mm7, mm3 */
/* ea9e83: pfadd mm2, mm1 */
  guest_unsupported(0xea9e83); /* pfadd mm2, mm1 */
/* ea9e87: pfmul mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea9e87); /* pfmul mm3, qword ptr [edx + 0x38] */
/* ea9e8c: pfadd mm7, mm6 */
  guest_unsupported(0xea9e8c); /* pfadd mm7, mm6 */
/* ea9e90: movq mm0, qword ptr [ecx + 0x30] */
  MMX[0] = R64((uint32_t)(ecx + 0x30u));
/* ea9e94: pfadd mm3, mm2 */
  guest_unsupported(0xea9e94); /* pfadd mm3, mm2 */
/* ea9e98: movq mm1, qword ptr [ecx + 0x38] */
  MMX[1] = R64((uint32_t)(ecx + 0x38u));
/* ea9e9c: movq qword ptr [eax + 0x20], mm7 */
  W64((uint32_t)(eax + 0x20u), MMX[7]);
/* ea9ea0: movq mm4, qword ptr [edx] */
  MMX[4] = R64((uint32_t)(edx));
/* ea9ea3: movq qword ptr [eax + 0x28], mm3 */
  W64((uint32_t)(eax + 0x28u), MMX[3]);
/* ea9ea7: punpckhdq mm2, mm0 */
  guest_unsupported(0xea9ea7); /* punpckhdq mm2, mm0 */
/* ea9eaa: movq mm5, qword ptr [edx + 0x10] */
  MMX[5] = R64((uint32_t)(edx + 0x10u));
/* ea9eae: punpckhdq mm3, mm1 */
  guest_unsupported(0xea9eae); /* punpckhdq mm3, mm1 */
/* ea9eb1: movq mm6, qword ptr [edx + 0x20] */
  MMX[6] = R64((uint32_t)(edx + 0x20u));
/* ea9eb5: punpckldq mm0, mm0 */
  guest_unsupported(0xea9eb5); /* punpckldq mm0, mm0 */
/* ea9eb8: punpckldq mm1, mm1 */
  guest_unsupported(0xea9eb8); /* punpckldq mm1, mm1 */
/* ea9ebb: pfmul mm4, mm0 */
  guest_unsupported(0xea9ebb); /* pfmul mm4, mm0 */
/* ea9ebf: punpckhdq mm2, mm2 */
  guest_unsupported(0xea9ebf); /* punpckhdq mm2, mm2 */
/* ea9ec2: pfmul mm0, qword ptr [edx + 8] */
  guest_unsupported(0xea9ec2); /* pfmul mm0, qword ptr [edx + 8] */
/* ea9ec7: movq mm7, qword ptr [edx + 0x30] */
  MMX[7] = R64((uint32_t)(edx + 0x30u));
/* ea9ecb: pfmul mm5, mm2 */
  guest_unsupported(0xea9ecb); /* pfmul mm5, mm2 */
/* ea9ecf: punpckhdq mm3, mm3 */
  guest_unsupported(0xea9ecf); /* punpckhdq mm3, mm3 */
/* ea9ed2: pfmul mm2, qword ptr [edx + 0x18] */
  guest_unsupported(0xea9ed2); /* pfmul mm2, qword ptr [edx + 0x18] */
/* ea9ed7: pfadd mm5, mm4 */
  guest_unsupported(0xea9ed7); /* pfadd mm5, mm4 */
/* ea9edb: pfmul mm6, mm1 */
  guest_unsupported(0xea9edb); /* pfmul mm6, mm1 */
/* ea9edf: pfadd mm2, mm0 */
  guest_unsupported(0xea9edf); /* pfadd mm2, mm0 */
/* ea9ee3: pfmul mm1, qword ptr [edx + 0x28] */
  guest_unsupported(0xea9ee3); /* pfmul mm1, qword ptr [edx + 0x28] */
/* ea9ee8: pfadd mm6, mm5 */
  guest_unsupported(0xea9ee8); /* pfadd mm6, mm5 */
/* ea9eec: pfmul mm7, mm3 */
  guest_unsupported(0xea9eec); /* pfmul mm7, mm3 */
/* ea9ef0: pfadd mm2, mm1 */
  guest_unsupported(0xea9ef0); /* pfadd mm2, mm1 */
/* ea9ef4: pfmul mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xea9ef4); /* pfmul mm3, qword ptr [edx + 0x38] */
/* ea9ef9: pfadd mm7, mm6 */
  guest_unsupported(0xea9ef9); /* pfadd mm7, mm6 */
/* ea9efd: pfadd mm3, mm2 */
  guest_unsupported(0xea9efd); /* pfadd mm3, mm2 */
/* ea9f01: movq qword ptr [eax + 0x30], mm7 */
  W64((uint32_t)(eax + 0x30u), MMX[7]);
/* ea9f05: movq qword ptr [eax + 0x38], mm3 */
  W64((uint32_t)(eax + 0x38u), MMX[3]);
/* ea9f09: femms  */
  guest_unsupported(0xea9f09); /* femms  */
/* ea9f0b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* ea9f0f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_ea9f12(void) {
  LOAD_REGS();
L_ea9f12: /* ea9f12: jmp 0xea9cc0 */
  SPILL(); f_ea9cc0(); return;
}

void f_ea9f17(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_ea9f17: /* ea9f17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea9f18: mov ebp, esp */
  ebp = esp;
/* ea9f1a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea9f1d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* ea9f20: xor eax, eax */
  eax = 0;
/* ea9f22: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9f24: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ea9f27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea9f28: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* ea9f2b: xor edx, edx */
  edx = 0;
/* ea9f2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea9f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea9f2f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* ea9f32: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ea9f34: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9f36: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ea9f39: lea esi, [ebp - 0x40] */
  esi = (uint32_t)(ebp + 0xffffffc0u);
/* ea9f3c: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea9f3e: xor edx, edx */
  edx = 0;
/* ea9f40: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ea9f42: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea9f44: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* ea9f47: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea9f49: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea9f4c: ja 0xeaa007 */
  if ((!cf && !zf)) goto L_eaa007;
L_ea9f52: /* ea9f52: jmp dword ptr [eax*4 + 0xeaa07f] */
  switch (R32((uint32_t)(eax*4 + 0xeaa07fu))) {
    case 0xea9f59u: goto L_ea9f59;
    case 0xea9fabu: goto L_ea9fab;
    case 0xea9fafu: goto L_ea9faf;
    case 0xea9fb3u: goto L_ea9fb3;
    case 0xea9fc4u: goto L_ea9fc4;
    case 0xea9fc8u: goto L_ea9fc8;
    case 0xea9fd9u: goto L_ea9fd9;
    case 0xea9feau: goto L_ea9fea;
    default: guest_badjump(0xea9f52, R32((uint32_t)(eax*4 + 0xeaa07fu))); return;
  }
L_ea9f59: /* ea9f59: fldz  */
  FPUSH(0.0);
/* ea9f5b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* ea9f5e: fldz  */
  FPUSH(0.0);
/* ea9f60: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* ea9f63: fldz  */
  FPUSH(0.0);
/* ea9f65: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* ea9f68: fldz  */
  FPUSH(0.0);
/* ea9f6a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ea9f6d: fldz  */
  FPUSH(0.0);
/* ea9f6f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* ea9f72: fldz  */
  FPUSH(0.0);
/* ea9f74: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* ea9f77: fldz  */
  FPUSH(0.0);
/* ea9f79: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* ea9f7c: fldz  */
  FPUSH(0.0);
/* ea9f7e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* ea9f81: fldz  */
  FPUSH(0.0);
/* ea9f83: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* ea9f86: fldz  */
  FPUSH(0.0);
/* ea9f88: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* ea9f8b: fldz  */
  FPUSH(0.0);
/* ea9f8d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* ea9f90: fldz  */
  FPUSH(0.0);
/* ea9f92: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* ea9f95: fld1  */
  FPUSH(1.0);
/* ea9f97: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* ea9f9a: fld1  */
  FPUSH(1.0);
/* ea9f9c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ea9f9f: fld1  */
  FPUSH(1.0);
/* ea9fa1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* ea9fa4: fld1  */
  FPUSH(1.0);
/* ea9fa6: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* ea9fa9: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fab: /* ea9fab: mov esi, ebx */
  esi = ebx;
/* ea9fad: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9faf: /* ea9faf: mov esi, edi */
  esi = edi;
/* ea9fb1: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fb3: /* ea9fb3: femms  */
  guest_unsupported(0xea9fb3); /* femms  */
/* ea9fb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea9fb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea9fb7: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9fba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea9fbb: call 0xea9d4b */
  esp -= 4; W32(esp, 0xea9fc0u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* ea9fc0: femms  */
  guest_unsupported(0xea9fc0); /* femms  */
/* ea9fc2: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fc4: /* ea9fc4: mov esi, ecx */
  esi = ecx;
/* ea9fc6: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fc8: /* ea9fc8: femms  */
  guest_unsupported(0xea9fc8); /* femms  */
/* ea9fca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea9fcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea9fcc: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea9fd0: call 0xea9d4b */
  esp -= 4; W32(esp, 0xea9fd5u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* ea9fd5: femms  */
  guest_unsupported(0xea9fd5); /* femms  */
/* ea9fd7: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fd9: /* ea9fd9: femms  */
  guest_unsupported(0xea9fd9); /* femms  */
/* ea9fdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea9fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea9fdd: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea9fe1: call 0xea9d4b */
  esp -= 4; W32(esp, 0xea9fe6u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* ea9fe6: femms  */
  guest_unsupported(0xea9fe6); /* femms  */
/* ea9fe8: jmp 0xeaa007 */
  goto L_eaa007;
L_ea9fea: /* ea9fea: femms  */
  guest_unsupported(0xea9fea); /* femms  */
/* ea9fec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea9fed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ea9fee: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9ff1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea9ff2: call 0xea9d4b */
  esp -= 4; W32(esp, 0xea9ff7u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* ea9ff7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea9ff8: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea9ffc: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* ea9fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa000: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa005u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa005: femms  */
  guest_unsupported(0xeaa005); /* femms  */
L_eaa007: /* eaa007: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa008: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eaa00b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaa00e: call 0xea9cc0 */
  esp -= 4; W32(esp, 0xeaa013u); SPILL(); f_ea9cc0(); if (g_unwind) return; RELOAD();
/* eaa013: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa017: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eaa018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eaa019: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eaa01a: je 0xeaa078 */
  if (zf) goto L_eaa078;
L_eaa01c: /* eaa01c: femms  */
  guest_unsupported(0xeaa01c); /* femms  */
/* eaa01e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eaa021: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* eaa024: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* eaa027: movd mm1, dword ptr [eax + 8] */
  guest_unsupported(0xeaa027); /* movd mm1, dword ptr [eax + 8] */
/* eaa02b: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* eaa02e: pxor mm0, qword ptr [0xeb3c20] */
  guest_unsupported(0xeaa02e); /* pxor mm0, qword ptr [0xeb3c20] */
/* eaa035: movq mm3, qword ptr [ecx + 8] */
  MMX[3] = R64((uint32_t)(ecx + 0x8u));
/* eaa039: movq mm4, qword ptr [ecx + 0x10] */
  MMX[4] = R64((uint32_t)(ecx + 0x10u));
/* eaa03d: pi2fd mm2, mm2 */
  guest_unsupported(0xeaa03d); /* pi2fd mm2, mm2 */
/* eaa041: pi2fd mm3, mm3 */
  guest_unsupported(0xeaa041); /* pi2fd mm3, mm3 */
/* eaa045: pfadd mm0, qword ptr [0xeb3c28] */
  guest_unsupported(0xeaa045); /* pfadd mm0, qword ptr [0xeb3c28] */
/* eaa04d: pfmul mm3, qword ptr [0xeb3c30] */
  guest_unsupported(0xeaa04d); /* pfmul mm3, qword ptr [0xeb3c30] */
/* eaa055: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* eaa058: punpckhdq mm5, mm5 */
  guest_unsupported(0xeaa058); /* punpckhdq mm5, mm5 */
/* eaa05b: pfsub mm5, mm4 */
  guest_unsupported(0xeaa05b); /* pfsub mm5, mm4 */
/* eaa05f: pfmul mm0, mm3 */
  guest_unsupported(0xeaa05f); /* pfmul mm0, mm3 */
/* eaa063: pfmul mm1, mm5 */
  guest_unsupported(0xeaa063); /* pfmul mm1, mm5 */
/* eaa067: pfadd mm1, mm4 */
  guest_unsupported(0xeaa067); /* pfadd mm1, mm4 */
/* eaa06b: pfadd mm0, mm2 */
  guest_unsupported(0xeaa06b); /* pfadd mm0, mm2 */
/* eaa06f: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaa072: movd dword ptr [eax + 8], mm1 */
  guest_unsupported(0xeaa072); /* movd dword ptr [eax + 8], mm1 */
/* eaa076: femms  */
  guest_unsupported(0xeaa076); /* femms  */
L_eaa078: /* eaa078: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eaa07b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaa07c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa09f(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa09f: /* eaa09f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eaa0a0: mov ebp, esp */
  ebp = esp;
/* eaa0a2: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eaa0a5: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* eaa0a8: xor eax, eax */
  eax = 0;
/* eaa0aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa0ab: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* eaa0ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa0af: xor esi, esi */
  esi = 0;
/* eaa0b1: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa0b3: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa0b6: xor edx, edx */
  edx = 0;
/* eaa0b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa0b9: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* eaa0bc: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eaa0be: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa0c0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa0c3: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* eaa0c5: xor edx, edx */
  edx = 0;
/* eaa0c7: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eaa0c9: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa0cb: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa0ce: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* eaa0d0: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eaa0d3: ja 0xeaa1f6 */
  if ((!cf && !zf)) goto L_eaa1f6;
L_eaa0d9: /* eaa0d9: jmp dword ptr [eax*4 + 0xeaa2a5] */
  switch (R32((uint32_t)(eax*4 + 0xeaa2a5u))) {
    case 0xeaa0e0u: goto L_eaa0e0;
    case 0xeaa135u: goto L_eaa135;
    case 0xeaa149u: goto L_eaa149;
    case 0xeaa15du: goto L_eaa15d;
    case 0xeaa17cu: goto L_eaa17c;
    case 0xeaa18du: goto L_eaa18d;
    case 0xeaa1acu: goto L_eaa1ac;
    case 0xeaa1cbu: goto L_eaa1cb;
    default: guest_badjump(0xeaa0d9, R32((uint32_t)(eax*4 + 0xeaa2a5u))); return;
  }
L_eaa0e0: /* eaa0e0: fldz  */
  FPUSH(0.0);
/* eaa0e2: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* eaa0e5: fldz  */
  FPUSH(0.0);
/* eaa0e7: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* eaa0ea: fldz  */
  FPUSH(0.0);
/* eaa0ec: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* eaa0ef: fldz  */
  FPUSH(0.0);
/* eaa0f1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* eaa0f4: fldz  */
  FPUSH(0.0);
/* eaa0f6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* eaa0f9: fldz  */
  FPUSH(0.0);
/* eaa0fb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* eaa0fe: fldz  */
  FPUSH(0.0);
/* eaa100: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* eaa103: fldz  */
  FPUSH(0.0);
/* eaa105: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* eaa108: fldz  */
  FPUSH(0.0);
/* eaa10a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* eaa10d: fldz  */
  FPUSH(0.0);
/* eaa10f: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* eaa112: fldz  */
  FPUSH(0.0);
/* eaa114: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* eaa117: fldz  */
  FPUSH(0.0);
/* eaa119: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* eaa11c: fld1  */
  FPUSH(1.0);
/* eaa11e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* eaa121: fld1  */
  FPUSH(1.0);
/* eaa123: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* eaa126: fld1  */
  FPUSH(1.0);
/* eaa128: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* eaa12b: fld1  */
  FPUSH(1.0);
/* eaa12d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* eaa130: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa135: /* eaa135: femms  */
  guest_unsupported(0xeaa135); /* femms  */
/* eaa137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa139: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa13c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa13d: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa142u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa142: femms  */
  guest_unsupported(0xeaa142); /* femms  */
/* eaa144: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa149: /* eaa149: femms  */
  guest_unsupported(0xeaa149); /* femms  */
/* eaa14b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa14c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa14d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa151: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa156u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa156: femms  */
  guest_unsupported(0xeaa156); /* femms  */
/* eaa158: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa15d: /* eaa15d: femms  */
  guest_unsupported(0xeaa15d); /* femms  */
/* eaa15f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa161: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa165: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa16au); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa16a: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa16e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa16f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa173: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa178u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa178: femms  */
  guest_unsupported(0xeaa178); /* femms  */
/* eaa17a: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa17c: /* eaa17c: femms  */
  guest_unsupported(0xeaa17c); /* femms  */
/* eaa17e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa17f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa180: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa183: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa184: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa189u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa189: femms  */
  guest_unsupported(0xeaa189); /* femms  */
/* eaa18b: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa18d: /* eaa18d: femms  */
  guest_unsupported(0xeaa18d); /* femms  */
/* eaa18f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa191: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa194: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa195: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa19au); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa19a: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa19e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa19f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1a3: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa1a8u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa1a8: femms  */
  guest_unsupported(0xeaa1a8); /* femms  */
/* eaa1aa: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa1ac: /* eaa1ac: femms  */
  guest_unsupported(0xeaa1ac); /* femms  */
/* eaa1ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa1af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa1b0: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1b4: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa1b9u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa1b9: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa1be: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1c2: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa1c7u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa1c7: femms  */
  guest_unsupported(0xeaa1c7); /* femms  */
/* eaa1c9: jmp 0xeaa1f6 */
  goto L_eaa1f6;
L_eaa1cb: /* eaa1cb: femms  */
  guest_unsupported(0xeaa1cb); /* femms  */
/* eaa1cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa1ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa1cf: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1d3: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa1d8u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa1d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa1d9: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1dd: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1e1: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa1e6u); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa1e6: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa1eb: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa1ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa1ef: call 0xea960a */
  esp -= 4; W32(esp, 0xeaa1f4u); SPILL(); f_ea960a(); if (g_unwind) return; RELOAD();
/* eaa1f4: femms  */
  guest_unsupported(0xeaa1f4); /* femms  */
L_eaa1f6: /* eaa1f6: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa1f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eaa1fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eaa1fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eaa1fc: je 0xeaa28f */
  if (zf) goto L_eaa28f;
L_eaa202: /* eaa202: femms  */
  guest_unsupported(0xeaa202); /* femms  */
/* eaa204: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eaa207: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eaa20a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* eaa20d: movq mm1, qword ptr [eax] */
  MMX[1] = R64((uint32_t)(eax));
/* eaa210: movq mm2, qword ptr [eax + 8] */
  MMX[2] = R64((uint32_t)(eax + 0x8u));
/* eaa214: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaa217: pi2fd mm1, mm1 */
  guest_unsupported(0xeaa217); /* pi2fd mm1, mm1 */
/* eaa21b: movq mm4, qword ptr [eax + 0x10] */
  MMX[4] = R64((uint32_t)(eax + 0x10u));
/* eaa21f: pi2fd mm2, mm2 */
  guest_unsupported(0xeaa21f); /* pi2fd mm2, mm2 */
/* eaa223: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaa226: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa226); /* punpckhdq mm3, mm3 */
/* eaa229: pfrcp mm5, mm2 */
  guest_unsupported(0xeaa229); /* pfrcp mm5, mm2 */
/* eaa22d: pfrcp mm3, mm3 */
  guest_unsupported(0xeaa22d); /* pfrcp mm3, mm3 */
/* eaa231: pfsub mm0, mm1 */
  guest_unsupported(0xeaa231); /* pfsub mm0, mm1 */
/* eaa235: punpckldq mm5, mm3 */
  guest_unsupported(0xeaa235); /* punpckldq mm5, mm3 */
/* eaa238: pfrcpit1 mm2, mm5 */
  guest_unsupported(0xeaa238); /* pfrcpit1 mm2, mm5 */
/* eaa23c: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xeaa23c); /* movd mm3, dword ptr [ecx + 8] */
/* eaa240: pfrcpit2 mm2, mm5 */
  guest_unsupported(0xeaa240); /* pfrcpit2 mm2, mm5 */
/* eaa244: pfmul mm2, qword ptr [0xeb3c38] */
  guest_unsupported(0xeaa244); /* pfmul mm2, qword ptr [0xeb3c38] */
/* eaa24c: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* eaa24f: pfmul mm0, mm2 */
  guest_unsupported(0xeaa24f); /* pfmul mm0, mm2 */
/* eaa253: punpckhdq mm5, mm5 */
  guest_unsupported(0xeaa253); /* punpckhdq mm5, mm5 */
/* eaa256: pfsub mm0, qword ptr [0xeb3c28] */
  guest_unsupported(0xeaa256); /* pfsub mm0, qword ptr [0xeb3c28] */
/* eaa25e: pfsub mm5, mm4 */
  guest_unsupported(0xeaa25e); /* pfsub mm5, mm4 */
/* eaa262: pfrcp mm6, mm5 */
  guest_unsupported(0xeaa262); /* pfrcp mm6, mm5 */
/* eaa266: pxor mm0, qword ptr [0xeb3c20] */
  guest_unsupported(0xeaa266); /* pxor mm0, qword ptr [0xeb3c20] */
/* eaa26d: pfrcpit1 mm5, mm6 */
  guest_unsupported(0xeaa26d); /* pfrcpit1 mm5, mm6 */
/* eaa271: pfrcpit2 mm5, mm6 */
  guest_unsupported(0xeaa271); /* pfrcpit2 mm5, mm6 */
/* eaa275: pfsub mm3, mm4 */
  guest_unsupported(0xeaa275); /* pfsub mm3, mm4 */
/* eaa279: pfmul mm3, mm5 */
  guest_unsupported(0xeaa279); /* pfmul mm3, mm5 */
/* eaa27d: movq qword ptr [edx], mm0 */
  W64((uint32_t)(edx), MMX[0]);
/* eaa280: movd dword ptr [edx + 8], mm3 */
  guest_unsupported(0xeaa280); /* movd dword ptr [edx + 8], mm3 */
/* eaa284: femms  */
  guest_unsupported(0xeaa284); /* femms  */
/* eaa286: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa28a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaa28d: jmp 0xeaa296 */
  goto L_eaa296;
L_eaa28f: /* eaa28f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa293: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
L_eaa296: /* eaa296: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaa299: call 0xea9cc0 */
  esp -= 4; W32(esp, 0xeaa29eu); SPILL(); f_ea9cc0(); if (g_unwind) return; RELOAD();
/* eaa29e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eaa2a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaa2a2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa2c5(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa2c5: /* eaa2c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eaa2c6: mov ebp, esp */
  ebp = esp;
/* eaa2c8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eaa2cb: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* eaa2ce: xor eax, eax */
  eax = 0;
/* eaa2d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa2d1: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* eaa2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa2d5: xor esi, esi */
  esi = 0;
/* eaa2d7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa2d9: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa2dc: xor edx, edx */
  edx = 0;
/* eaa2de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa2df: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* eaa2e2: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eaa2e4: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa2e6: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa2e9: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* eaa2eb: xor edx, edx */
  edx = 0;
/* eaa2ed: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eaa2ef: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa2f1: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* eaa2f4: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* eaa2f6: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* eaa2f9: ja 0xeaa349 */
  if ((!cf && !zf)) goto L_eaa349;
L_eaa2fb: /* eaa2fb: jmp dword ptr [eax*4 + 0xeaa3f8] */
  switch (R32((uint32_t)(eax*4 + 0xeaa3f8u))) {
    case 0xeaa302u: goto L_eaa302;
    case 0xeaa30eu: goto L_eaa30e;
    case 0xeaa311u: goto L_eaa311;
    case 0xeaa314u: goto L_eaa314;
    case 0xeaa318u: goto L_eaa318;
    case 0xeaa31bu: goto L_eaa31b;
    case 0xeaa31eu: goto L_eaa31e;
    case 0xeaa322u: goto L_eaa322;
    default: guest_badjump(0xeaa2fb, R32((uint32_t)(eax*4 + 0xeaa3f8u))); return;
  }
L_eaa302: /* eaa302: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa306: call 0xea6292 */
  esp -= 4; W32(esp, 0xeaa30bu); SPILL(); f_ea6292(); if (g_unwind) return; RELOAD();
/* eaa30b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eaa30c: jmp 0xeaa349 */
  goto L_eaa349;
L_eaa30e: /* eaa30e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa30f: jmp 0xeaa33f */
  goto L_eaa33f;
L_eaa311: /* eaa311: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa312: jmp 0xeaa33f */
  goto L_eaa33f;
L_eaa314: /* eaa314: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa315: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa316: jmp 0xeaa332 */
  goto L_eaa332;
L_eaa318: /* eaa318: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa319: jmp 0xeaa33f */
  goto L_eaa33f;
L_eaa31b: /* eaa31b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa31c: jmp 0xeaa31f */
  goto L_eaa31f;
L_eaa31e: /* eaa31e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_eaa31f: /* eaa31f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa320: jmp 0xeaa332 */
  goto L_eaa332;
L_eaa322: /* eaa322: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaa323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eaa324: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa328: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa32du); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa32d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa32e: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_eaa332: /* eaa332: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa336: call 0xea9d4b */
  esp -= 4; W32(esp, 0xeaa33bu); SPILL(); f_ea9d4b(); if (g_unwind) return; RELOAD();
/* eaa33b: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa33e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_eaa33f: /* eaa33f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa342: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaa343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa344: call 0xea8f30 */
  esp -= 4; W32(esp, 0xeaa349u); SPILL(); f_ea8f30(); if (g_unwind) return; RELOAD();
L_eaa349: /* eaa349: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eaa34c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eaa34d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eaa34e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eaa34f: je 0xeaa3e2 */
  if (zf) goto L_eaa3e2;
L_eaa355: /* eaa355: femms  */
  guest_unsupported(0xeaa355); /* femms  */
/* eaa357: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eaa35a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* eaa35d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* eaa360: movq mm1, qword ptr [eax] */
  MMX[1] = R64((uint32_t)(eax));
/* eaa363: movq mm2, qword ptr [eax + 8] */
  MMX[2] = R64((uint32_t)(eax + 0x8u));
/* eaa367: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaa36a: pi2fd mm1, mm1 */
  guest_unsupported(0xeaa36a); /* pi2fd mm1, mm1 */
/* eaa36e: movq mm4, qword ptr [eax + 0x10] */
  MMX[4] = R64((uint32_t)(eax + 0x10u));
/* eaa372: pi2fd mm2, mm2 */
  guest_unsupported(0xeaa372); /* pi2fd mm2, mm2 */
/* eaa376: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaa379: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa379); /* punpckhdq mm3, mm3 */
/* eaa37c: pfrcp mm5, mm2 */
  guest_unsupported(0xeaa37c); /* pfrcp mm5, mm2 */
/* eaa380: pfrcp mm3, mm3 */
  guest_unsupported(0xeaa380); /* pfrcp mm3, mm3 */
/* eaa384: pfsub mm0, mm1 */
  guest_unsupported(0xeaa384); /* pfsub mm0, mm1 */
/* eaa388: punpckldq mm5, mm3 */
  guest_unsupported(0xeaa388); /* punpckldq mm5, mm3 */
/* eaa38b: pfrcpit1 mm2, mm5 */
  guest_unsupported(0xeaa38b); /* pfrcpit1 mm2, mm5 */
/* eaa38f: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xeaa38f); /* movd mm3, dword ptr [ecx + 8] */
/* eaa393: pfrcpit2 mm2, mm5 */
  guest_unsupported(0xeaa393); /* pfrcpit2 mm2, mm5 */
/* eaa397: pfmul mm2, qword ptr [0xeb3c38] */
  guest_unsupported(0xeaa397); /* pfmul mm2, qword ptr [0xeb3c38] */
/* eaa39f: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* eaa3a2: pfmul mm0, mm2 */
  guest_unsupported(0xeaa3a2); /* pfmul mm0, mm2 */
/* eaa3a6: punpckhdq mm5, mm5 */
  guest_unsupported(0xeaa3a6); /* punpckhdq mm5, mm5 */
/* eaa3a9: pfsub mm0, qword ptr [0xeb3c28] */
  guest_unsupported(0xeaa3a9); /* pfsub mm0, qword ptr [0xeb3c28] */
/* eaa3b1: pfsub mm5, mm4 */
  guest_unsupported(0xeaa3b1); /* pfsub mm5, mm4 */
/* eaa3b5: pfrcp mm6, mm5 */
  guest_unsupported(0xeaa3b5); /* pfrcp mm6, mm5 */
/* eaa3b9: pxor mm0, qword ptr [0xeb3c20] */
  guest_unsupported(0xeaa3b9); /* pxor mm0, qword ptr [0xeb3c20] */
/* eaa3c0: pfrcpit1 mm5, mm6 */
  guest_unsupported(0xeaa3c0); /* pfrcpit1 mm5, mm6 */
/* eaa3c4: pfrcpit2 mm5, mm6 */
  guest_unsupported(0xeaa3c4); /* pfrcpit2 mm5, mm6 */
/* eaa3c8: pfsub mm3, mm4 */
  guest_unsupported(0xeaa3c8); /* pfsub mm3, mm4 */
/* eaa3cc: pfmul mm3, mm5 */
  guest_unsupported(0xeaa3cc); /* pfmul mm3, mm5 */
/* eaa3d0: movq qword ptr [edx], mm0 */
  W64((uint32_t)(edx), MMX[0]);
/* eaa3d3: movd dword ptr [edx + 8], mm3 */
  guest_unsupported(0xeaa3d3); /* movd dword ptr [edx + 8], mm3 */
/* eaa3d7: femms  */
  guest_unsupported(0xeaa3d7); /* femms  */
/* eaa3d9: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa3dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa3dd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaa3e0: jmp 0xeaa3e9 */
  goto L_eaa3e9;
L_eaa3e2: /* eaa3e2: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* eaa3e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaa3e6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
L_eaa3e9: /* eaa3e9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaa3ec: call 0xea9cc0 */
  esp -= 4; W32(esp, 0xeaa3f1u); SPILL(); f_ea9cc0(); if (g_unwind) return; RELOAD();
/* eaa3f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eaa3f4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaa3f5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa418(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa418: /* eaa418: femms  */
  guest_unsupported(0xeaa418); /* femms  */
/* eaa41a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa41e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa422: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eaa426: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* eaa429: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa42c: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa42c); /* punpckldq mm0, mm0 */
/* eaa42f: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaa42f); /* punpckhdq mm1, mm1 */
/* eaa432: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaa435: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaa435); /* pfmul mm0, qword ptr [edx] */
/* eaa439: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaa43c: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xeaa43c); /* pfmul mm1, qword ptr [edx + 0x10] */
/* eaa441: pfadd mm0, qword ptr [edx + 0x30] */
  guest_unsupported(0xeaa441); /* pfadd mm0, qword ptr [edx + 0x30] */
/* eaa446: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xeaa446); /* pfmul mm3, qword ptr [edx + 8] */
/* eaa44b: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xeaa44b); /* pfmul mm4, qword ptr [edx + 0x18] */
/* eaa450: pfadd mm0, mm1 */
  guest_unsupported(0xeaa450); /* pfadd mm0, mm1 */
/* eaa454: pfadd mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xeaa454); /* pfadd mm3, qword ptr [edx + 0x38] */
/* eaa459: pfadd mm3, mm4 */
  guest_unsupported(0xeaa459); /* pfadd mm3, mm4 */
/* eaa45d: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* eaa460: movq qword ptr [ecx + 8], mm3 */
  W64((uint32_t)(ecx + 0x8u), MMX[3]);
/* eaa464: femms  */
  guest_unsupported(0xeaa464); /* femms  */
/* eaa466: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa46a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaa46d(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa46d: /* eaa46d: femms  */
  guest_unsupported(0xeaa46d); /* femms  */
/* eaa46f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa473: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa477: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eaa47b: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* eaa47e: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa481: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa481); /* punpckldq mm0, mm0 */
/* eaa484: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaa484); /* punpckhdq mm1, mm1 */
/* eaa487: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaa48a: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaa48a); /* pfmul mm0, qword ptr [edx] */
/* eaa48e: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaa491: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xeaa491); /* pfmul mm1, qword ptr [edx + 0x10] */
/* eaa496: pfadd mm0, mm1 */
  guest_unsupported(0xeaa496); /* pfadd mm0, mm1 */
/* eaa49a: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* eaa49d: femms  */
  guest_unsupported(0xeaa49d); /* femms  */
/* eaa49f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa4a3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaa4a6(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa4a6: /* eaa4a6: femms  */
  guest_unsupported(0xeaa4a6); /* femms  */
/* eaa4a8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa4ac: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa4b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* eaa4b4: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* eaa4b7: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa4ba: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa4ba); /* punpckldq mm0, mm0 */
/* eaa4bd: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaa4bd); /* punpckhdq mm1, mm1 */
/* eaa4c0: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaa4c3: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaa4c3); /* pfmul mm0, qword ptr [edx] */
/* eaa4c7: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaa4ca: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xeaa4ca); /* pfmul mm1, qword ptr [edx + 0x10] */
/* eaa4cf: pfadd mm0, qword ptr [edx + 0x30] */
  guest_unsupported(0xeaa4cf); /* pfadd mm0, qword ptr [edx + 0x30] */
/* eaa4d4: pfmul mm3, qword ptr [edx + 8] */
  guest_unsupported(0xeaa4d4); /* pfmul mm3, qword ptr [edx + 8] */
/* eaa4d9: pfmul mm4, qword ptr [edx + 0x18] */
  guest_unsupported(0xeaa4d9); /* pfmul mm4, qword ptr [edx + 0x18] */
/* eaa4de: pfadd mm0, mm1 */
  guest_unsupported(0xeaa4de); /* pfadd mm0, mm1 */
/* eaa4e2: pfadd mm3, qword ptr [edx + 0x38] */
  guest_unsupported(0xeaa4e2); /* pfadd mm3, qword ptr [edx + 0x38] */
/* eaa4e7: pfadd mm3, mm4 */
  guest_unsupported(0xeaa4e7); /* pfadd mm3, mm4 */
/* eaa4eb: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa4eb); /* punpckhdq mm3, mm3 */
/* eaa4ee: pfrcp mm4, mm3 */
  guest_unsupported(0xeaa4ee); /* pfrcp mm4, mm3 */
/* eaa4f2: pfrcpit1 mm3, mm4 */
  guest_unsupported(0xeaa4f2); /* pfrcpit1 mm3, mm4 */
/* eaa4f6: pfrcpit2 mm3, mm4 */
  guest_unsupported(0xeaa4f6); /* pfrcpit2 mm3, mm4 */
/* eaa4fa: pfmul mm0, mm3 */
  guest_unsupported(0xeaa4fa); /* pfmul mm0, mm3 */
/* eaa4fe: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* eaa501: femms  */
  guest_unsupported(0xeaa501); /* femms  */
/* eaa503: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa507: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaa50a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa50a: /* eaa50a: femms  */
  guest_unsupported(0xeaa50a); /* femms  */
/* eaa50c: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaa50c); /* movd mm0, dword ptr [esp + 0x18] */
/* eaa511: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa514: pfmul mm1, mm1 */
  guest_unsupported(0xeaa514); /* pfmul mm1, mm1 */
/* eaa518: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eaa51b: pfmul mm2, mm0 */
  guest_unsupported(0xeaa51b); /* pfmul mm2, mm0 */
/* eaa51f: movq mm3, qword ptr [0xeb3c38] */
  MMX[3] = R64((uint32_t)(0xeb3c38u));
/* eaa526: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaa529: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* eaa52c: pfsub mm7, mm1 */
  guest_unsupported(0xeaa52c); /* pfsub mm7, mm1 */
/* eaa530: pfmul mm4, mm3 */
  guest_unsupported(0xeaa530); /* pfmul mm4, mm3 */
/* eaa534: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaa537: pfmul mm1, qword ptr [0xeb3c40] */
  guest_unsupported(0xeaa537); /* pfmul mm1, qword ptr [0xeb3c40] */
/* eaa53f: pfmul mm2, mm3 */
  guest_unsupported(0xeaa53f); /* pfmul mm2, mm3 */
/* eaa543: pfsub mm6, mm4 */
  guest_unsupported(0xeaa543); /* pfsub mm6, mm4 */
/* eaa547: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaa54a: pfsub mm1, mm2 */
  guest_unsupported(0xeaa54a); /* pfsub mm1, mm2 */
/* eaa54e: pfadd mm6, mm0 */
  guest_unsupported(0xeaa54e); /* pfadd mm6, mm0 */
/* eaa552: pfsub mm2, mm5 */
  guest_unsupported(0xeaa552); /* pfsub mm2, mm5 */
/* eaa556: pfadd mm2, qword ptr [0xeb3c28] */
  guest_unsupported(0xeaa556); /* pfadd mm2, qword ptr [0xeb3c28] */
/* eaa55e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa562: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaa566: punpckldq mm1, mm1 */
  guest_unsupported(0xeaa566); /* punpckldq mm1, mm1 */
/* eaa569: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa56d: punpckldq mm6, mm6 */
  guest_unsupported(0xeaa56d); /* punpckldq mm6, mm6 */
/* eaa570: punpckldq mm7, mm7 */
  guest_unsupported(0xeaa570); /* punpckldq mm7, mm7 */
/* eaa573: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa573); /* punpckldq mm2, mm2 */
/* eaa576: pfmul mm2, qword ptr [ecx] */
  guest_unsupported(0xeaa576); /* pfmul mm2, qword ptr [ecx] */
/* eaa57a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaa57e: pfmul mm6, qword ptr [edx] */
  guest_unsupported(0xeaa57e); /* pfmul mm6, qword ptr [edx] */
/* eaa582: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eaa586: pfadd mm2, mm6 */
  guest_unsupported(0xeaa586); /* pfadd mm2, mm6 */
/* eaa58a: pfmul mm1, qword ptr [ecx] */
  guest_unsupported(0xeaa58a); /* pfmul mm1, qword ptr [ecx] */
/* eaa58e: pfmul mm7, qword ptr [edx] */
  guest_unsupported(0xeaa58e); /* pfmul mm7, qword ptr [edx] */
/* eaa592: pfadd mm1, mm7 */
  guest_unsupported(0xeaa592); /* pfadd mm1, mm7 */
/* eaa596: pfadd mm2, mm1 */
  guest_unsupported(0xeaa596); /* pfadd mm2, mm1 */
/* eaa59a: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* eaa59d: femms  */
  guest_unsupported(0xeaa59d); /* femms  */
/* eaa59f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa5a2(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa5a2: /* eaa5a2: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa5a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaa5aa: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa5ae: movd mm6, dword ptr [esp + 0x14] */
  guest_unsupported(0xeaa5ae); /* movd mm6, dword ptr [esp + 0x14] */
/* eaa5b3: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaa5b6: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* eaa5b9: movq mm4, qword ptr [eax] */
  MMX[4] = R64((uint32_t)(eax));
/* eaa5bc: punpckldq mm6, mm6 */
  guest_unsupported(0xeaa5bc); /* punpckldq mm6, mm6 */
/* eaa5bf: movd mm7, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaa5bf); /* movd mm7, dword ptr [esp + 0x18] */
/* eaa5c4: pfsub mm0, mm4 */
  guest_unsupported(0xeaa5c4); /* pfsub mm0, mm4 */
/* eaa5c8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa5cc: punpckldq mm7, mm7 */
  guest_unsupported(0xeaa5cc); /* punpckldq mm7, mm7 */
/* eaa5cf: pfmul mm0, mm6 */
  guest_unsupported(0xeaa5cf); /* pfmul mm0, mm6 */
/* eaa5d3: pfsub mm2, mm4 */
  guest_unsupported(0xeaa5d3); /* pfsub mm2, mm4 */
/* eaa5d7: pfadd mm4, mm0 */
  guest_unsupported(0xeaa5d7); /* pfadd mm4, mm0 */
/* eaa5db: pfmul mm2, mm7 */
  guest_unsupported(0xeaa5db); /* pfmul mm2, mm7 */
/* eaa5df: pfadd mm4, mm2 */
  guest_unsupported(0xeaa5df); /* pfadd mm4, mm2 */
/* eaa5e3: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* eaa5e6: femms  */
  guest_unsupported(0xeaa5e6); /* femms  */
/* eaa5e8: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa5eb(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa5eb: /* eaa5eb: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eaa5ef: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaa5f2: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa5f5: pfmul mm0, mm0 */
  guest_unsupported(0xeaa5f5); /* pfmul mm0, mm0 */
/* eaa5f9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa5fd: pfacc mm0, mm0 */
  guest_unsupported(0xeaa5fd); /* pfacc mm0, mm0 */
/* eaa601: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eaa604: pfrsqrt mm4, mm0 */
  guest_unsupported(0xeaa604); /* pfrsqrt mm4, mm0 */
/* eaa608: pfcmpgt mm2, qword ptr [0xeb3c10] */
  guest_unsupported(0xeaa608); /* pfcmpgt mm2, qword ptr [0xeb3c10] */
/* eaa610: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* eaa613: pfmul mm4, mm4 */
  guest_unsupported(0xeaa613); /* pfmul mm4, mm4 */
/* eaa617: pfrsqit1 mm4, mm0 */
  guest_unsupported(0xeaa617); /* pfrsqit1 mm4, mm0 */
/* eaa61b: pand mm1, mm2 */
  guest_unsupported(0xeaa61b); /* pand mm1, mm2 */
/* eaa61e: pfrcpit2 mm4, mm5 */
  guest_unsupported(0xeaa61e); /* pfrcpit2 mm4, mm5 */
/* eaa622: pfmul mm1, mm4 */
  guest_unsupported(0xeaa622); /* pfmul mm1, mm4 */
/* eaa626: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* eaa629: femms  */
  guest_unsupported(0xeaa629); /* femms  */
/* eaa62b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eaa62e(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa62e: /* eaa62e: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaa62e); /* movd mm0, dword ptr [esp + 0x18] */
/* eaa633: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa636: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa636); /* punpckldq mm0, mm0 */
/* eaa639: pfmul mm0, mm0 */
  guest_unsupported(0xeaa639); /* pfmul mm0, mm0 */
/* eaa63d: punpckldq mm1, dword ptr [0xeb3ba0] */
  guest_unsupported(0xeaa63d); /* punpckldq mm1, dword ptr [0xeb3ba0] */
/* eaa644: pfmul mm0, mm1 */
  guest_unsupported(0xeaa644); /* pfmul mm0, mm1 */
/* eaa648: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eaa64b: pfmul mm1, mm1 */
  guest_unsupported(0xeaa64b); /* pfmul mm1, mm1 */
/* eaa64f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eaa653: pxor mm7, mm7 */
  guest_unsupported(0xeaa653); /* pxor mm7, mm7 */
/* eaa656: pfsub mm0, mm1 */
  guest_unsupported(0xeaa656); /* pfsub mm0, mm1 */
/* eaa65a: punpckldq mm1, mm1 */
  guest_unsupported(0xeaa65a); /* punpckldq mm1, mm1 */
/* eaa65d: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaa660: punpckldq mm3, mm3 */
  guest_unsupported(0xeaa660); /* punpckldq mm3, mm3 */
/* eaa663: pfmul mm0, qword ptr [0xeb3bb0] */
  guest_unsupported(0xeaa663); /* pfmul mm0, qword ptr [0xeb3bb0] */
/* eaa66b: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaa66e: punpckldq mm0, mm4 */
  guest_unsupported(0xeaa66e); /* punpckldq mm0, mm4 */
/* eaa671: pxor mm3, qword ptr [0xeb3bc0] */
  guest_unsupported(0xeaa671); /* pxor mm3, qword ptr [0xeb3bc0] */
/* eaa678: punpckhdq mm5, mm7 */
  guest_unsupported(0xeaa678); /* punpckhdq mm5, mm7 */
/* eaa67b: pfadd mm1, mm3 */
  guest_unsupported(0xeaa67b); /* pfadd mm1, mm3 */
/* eaa67f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* eaa683: pfsub mm1, mm0 */
  guest_unsupported(0xeaa683); /* pfsub mm1, mm0 */
/* eaa687: pfsub mm0, mm5 */
  guest_unsupported(0xeaa687); /* pfsub mm0, mm5 */
/* eaa68b: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eaa68e: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaa68e); /* punpckhdq mm1, mm1 */
/* eaa691: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaa694: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa694); /* punpckldq mm0, mm0 */
/* eaa697: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eaa69b: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa69b); /* punpckldq mm2, mm2 */
/* eaa69e: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xeaa69e); /* pfmul mm1, qword ptr [edx] */
/* eaa6a2: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa6a2); /* punpckhdq mm3, mm3 */
/* eaa6a5: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xeaa6a5); /* pfmul mm0, qword ptr [ecx] */
/* eaa6a9: pfmul mm2, qword ptr [eax] */
  guest_unsupported(0xeaa6a9); /* pfmul mm2, qword ptr [eax] */
/* eaa6ad: pfadd mm0, mm1 */
  guest_unsupported(0xeaa6ad); /* pfadd mm0, mm1 */
/* eaa6b1: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eaa6b5: pfadd mm4, mm5 */
  guest_unsupported(0xeaa6b5); /* pfadd mm4, mm5 */
/* eaa6b9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa6bd: pfadd mm0, mm2 */
  guest_unsupported(0xeaa6bd); /* pfadd mm0, mm2 */
/* eaa6c1: pfmul mm3, qword ptr [edx] */
  guest_unsupported(0xeaa6c1); /* pfmul mm3, qword ptr [edx] */
/* eaa6c5: pfadd mm0, mm3 */
  guest_unsupported(0xeaa6c5); /* pfadd mm0, mm3 */
/* eaa6c9: pfmul mm0, qword ptr [0xeb3c08] */
  guest_unsupported(0xeaa6c9); /* pfmul mm0, qword ptr [0xeb3c08] */
/* eaa6d1: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaa6d4: femms  */
  guest_unsupported(0xeaa6d4); /* femms  */
/* eaa6d6: ret 0x18 */
  esp += 28; SPILL(); return;
}
