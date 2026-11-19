#include "recomp.h"
#include "rec_mod.h"

void f_eaa6d9(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa6d9: /* eaa6d9: femms  */
  guest_unsupported(0xeaa6d9); /* femms  */
/* eaa6db: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa6df: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa6e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaa6e7: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaa6ea: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa6ed: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa6ed); /* punpckldq mm0, mm0 */
/* eaa6f0: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaa6f0); /* punpckhdq mm1, mm1 */
/* eaa6f3: movq mm2, qword ptr [ecx + 8] */
  MMX[2] = R64((uint32_t)(ecx + 0x8u));
/* eaa6f7: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaa6fa: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa6fa); /* punpckldq mm2, mm2 */
/* eaa6fd: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa6fd); /* punpckhdq mm3, mm3 */
/* eaa700: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaa703: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaa703); /* pfmul mm0, qword ptr [edx] */
/* eaa707: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaa70a: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xeaa70a); /* pfmul mm1, qword ptr [edx + 0x10] */
/* eaa70f: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaa712: pfmul mm2, qword ptr [edx + 0x20] */
  guest_unsupported(0xeaa712); /* pfmul mm2, qword ptr [edx + 0x20] */
/* eaa717: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* eaa71a: pfmul mm3, qword ptr [edx + 0x30] */
  guest_unsupported(0xeaa71a); /* pfmul mm3, qword ptr [edx + 0x30] */
/* eaa71f: pfadd mm0, mm1 */
  guest_unsupported(0xeaa71f); /* pfadd mm0, mm1 */
/* eaa723: pfmul mm4, qword ptr [edx + 8] */
  guest_unsupported(0xeaa723); /* pfmul mm4, qword ptr [edx + 8] */
/* eaa728: pfadd mm2, mm3 */
  guest_unsupported(0xeaa728); /* pfadd mm2, mm3 */
/* eaa72c: pfmul mm5, qword ptr [edx + 0x18] */
  guest_unsupported(0xeaa72c); /* pfmul mm5, qword ptr [edx + 0x18] */
/* eaa731: pfmul mm6, qword ptr [edx + 0x28] */
  guest_unsupported(0xeaa731); /* pfmul mm6, qword ptr [edx + 0x28] */
/* eaa736: pfmul mm7, qword ptr [edx + 0x38] */
  guest_unsupported(0xeaa736); /* pfmul mm7, qword ptr [edx + 0x38] */
/* eaa73b: pfadd mm0, mm2 */
  guest_unsupported(0xeaa73b); /* pfadd mm0, mm2 */
/* eaa73f: pfadd mm4, mm5 */
  guest_unsupported(0xeaa73f); /* pfadd mm4, mm5 */
/* eaa743: pfadd mm6, mm7 */
  guest_unsupported(0xeaa743); /* pfadd mm6, mm7 */
/* eaa747: pfadd mm4, mm6 */
  guest_unsupported(0xeaa747); /* pfadd mm4, mm6 */
/* eaa74b: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaa74e: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* eaa752: femms  */
  guest_unsupported(0xeaa752); /* femms  */
/* eaa754: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa758: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaa75b(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa75b: /* eaa75b: femms  */
  guest_unsupported(0xeaa75b); /* femms  */
/* eaa75d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaa761: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaa764: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa767: movq mm2, qword ptr [ecx + 8] */
  MMX[2] = R64((uint32_t)(ecx + 0x8u));
/* eaa76b: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaa76e: pfmul mm0, mm0 */
  guest_unsupported(0xeaa76e); /* pfmul mm0, mm0 */
/* eaa772: pfmul mm2, mm2 */
  guest_unsupported(0xeaa772); /* pfmul mm2, mm2 */
/* eaa776: pfadd mm0, mm2 */
  guest_unsupported(0xeaa776); /* pfadd mm0, mm2 */
/* eaa77a: pfacc mm0, mm0 */
  guest_unsupported(0xeaa77a); /* pfacc mm0, mm0 */
/* eaa77e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa782: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaa785: pfrsqrt mm4, mm0 */
  guest_unsupported(0xeaa785); /* pfrsqrt mm4, mm0 */
/* eaa789: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xeaa789); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* eaa791: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* eaa794: pfmul mm2, mm4 */
  guest_unsupported(0xeaa794); /* pfmul mm2, mm4 */
/* eaa798: pfrsqit1 mm0, mm2 */
  guest_unsupported(0xeaa798); /* pfrsqit1 mm0, mm2 */
/* eaa79c: pand mm1, mm5 */
  guest_unsupported(0xeaa79c); /* pand mm1, mm5 */
/* eaa79f: pand mm3, mm5 */
  guest_unsupported(0xeaa79f); /* pand mm3, mm5 */
/* eaa7a2: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xeaa7a2); /* pfrcpit2 mm0, mm4 */
/* eaa7a6: pfmul mm1, mm0 */
  guest_unsupported(0xeaa7a6); /* pfmul mm1, mm0 */
/* eaa7aa: pfmul mm3, mm0 */
  guest_unsupported(0xeaa7aa); /* pfmul mm3, mm0 */
/* eaa7ae: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* eaa7b1: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* eaa7b5: femms  */
  guest_unsupported(0xeaa7b5); /* femms  */
/* eaa7b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eaa7ba(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa7ba: /* eaa7ba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaa7bb: femms  */
  guest_unsupported(0xeaa7bb); /* femms  */
/* eaa7bd: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* eaa7c1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaa7c5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eaa7c9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa7cd: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaa7d0: movq mm1, qword ptr [edx] */
  MMX[1] = R64((uint32_t)(edx));
/* eaa7d3: movq mm2, qword ptr [ecx + 8] */
  MMX[2] = R64((uint32_t)(ecx + 0x8u));
/* eaa7d7: movq mm3, qword ptr [edx + 8] */
  MMX[3] = R64((uint32_t)(edx + 0x8u));
/* eaa7db: movq mm4, mm3 */
  MMX[4] = MMX[3];
/* eaa7de: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaa7e1: punpckhdq mm4, mm4 */
  guest_unsupported(0xeaa7e1); /* punpckhdq mm4, mm4 */
/* eaa7e4: punpckhdq mm6, mm6 */
  guest_unsupported(0xeaa7e4); /* punpckhdq mm6, mm6 */
/* eaa7e7: movq mm5, mm2 */
  MMX[5] = MMX[2];
/* eaa7ea: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* eaa7ed: punpckldq mm5, mm5 */
  guest_unsupported(0xeaa7ed); /* punpckldq mm5, mm5 */
/* eaa7f0: punpckldq mm7, mm7 */
  guest_unsupported(0xeaa7f0); /* punpckldq mm7, mm7 */
/* eaa7f3: punpckhdq mm5, mm0 */
  guest_unsupported(0xeaa7f3); /* punpckhdq mm5, mm0 */
/* eaa7f6: punpckhdq mm7, mm1 */
  guest_unsupported(0xeaa7f6); /* punpckhdq mm7, mm1 */
/* eaa7f9: pfmul mm4, mm5 */
  guest_unsupported(0xeaa7f9); /* pfmul mm4, mm5 */
/* eaa7fd: pfmul mm6, mm7 */
  guest_unsupported(0xeaa7fd); /* pfmul mm6, mm7 */
/* eaa801: pfsub mm4, mm6 */
  guest_unsupported(0xeaa801); /* pfsub mm4, mm6 */
/* eaa805: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaa808: punpckhdq mm5, mm2 */
  guest_unsupported(0xeaa808); /* punpckhdq mm5, mm2 */
/* eaa80b: movq mm6, mm3 */
  MMX[6] = MMX[3];
/* eaa80e: punpckldq mm6, mm1 */
  guest_unsupported(0xeaa80e); /* punpckldq mm6, mm1 */
/* eaa811: pfmul mm5, mm6 */
  guest_unsupported(0xeaa811); /* pfmul mm5, mm6 */
/* eaa815: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* eaa818: punpckhdq mm6, mm3 */
  guest_unsupported(0xeaa818); /* punpckhdq mm6, mm3 */
/* eaa81b: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* eaa81e: punpckldq mm7, mm0 */
  guest_unsupported(0xeaa81e); /* punpckldq mm7, mm0 */
/* eaa821: pfmul mm6, mm7 */
  guest_unsupported(0xeaa821); /* pfmul mm6, mm7 */
/* eaa825: pfsub mm5, mm6 */
  guest_unsupported(0xeaa825); /* pfsub mm5, mm6 */
/* eaa829: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* eaa82c: punpckldq mm6, mm6 */
  guest_unsupported(0xeaa82c); /* punpckldq mm6, mm6 */
/* eaa82f: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa82f); /* punpckldq mm2, mm2 */
/* eaa832: punpckhdq mm2, mm0 */
  guest_unsupported(0xeaa832); /* punpckhdq mm2, mm0 */
/* eaa835: punpckldq mm3, mm3 */
  guest_unsupported(0xeaa835); /* punpckldq mm3, mm3 */
/* eaa838: punpckldq mm0, mm0 */
  guest_unsupported(0xeaa838); /* punpckldq mm0, mm0 */
/* eaa83b: pfmul mm6, mm2 */
  guest_unsupported(0xeaa83b); /* pfmul mm6, mm2 */
/* eaa83f: punpckhdq mm3, mm1 */
  guest_unsupported(0xeaa83f); /* punpckhdq mm3, mm1 */
/* eaa842: pfmul mm0, mm3 */
  guest_unsupported(0xeaa842); /* pfmul mm0, mm3 */
/* eaa846: pfsub mm6, mm0 */
  guest_unsupported(0xeaa846); /* pfsub mm6, mm0 */
/* eaa84a: movq mm0, qword ptr [ebx] */
  MMX[0] = R64((uint32_t)(ebx));
/* eaa84d: movq mm1, qword ptr [ebx + 8] */
  MMX[1] = R64((uint32_t)(ebx + 0x8u));
/* eaa851: movq mm7, qword ptr [0xeb3c20] */
  MMX[7] = R64((uint32_t)(0xeb3c20u));
/* eaa858: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* eaa85b: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaa85e: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa85e); /* punpckldq mm2, mm2 */
/* eaa861: punpckldq mm3, mm3 */
  guest_unsupported(0xeaa861); /* punpckldq mm3, mm3 */
/* eaa864: pxor mm2, mm7 */
  guest_unsupported(0xeaa864); /* pxor mm2, mm7 */
/* eaa867: punpckhdq mm0, mm3 */
  guest_unsupported(0xeaa867); /* punpckhdq mm0, mm3 */
/* eaa86a: pfmul mm2, mm0 */
  guest_unsupported(0xeaa86a); /* pfmul mm2, mm0 */
/* eaa86e: movq mm0, mm7 */
  MMX[0] = MMX[7];
/* eaa871: movq mm3, mm4 */
  MMX[3] = MMX[4];
/* eaa874: movq mm7, mm5 */
  MMX[7] = MMX[5];
/* eaa877: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaa877); /* punpckhdq mm3, mm3 */
/* eaa87a: punpckhdq mm7, mm7 */
  guest_unsupported(0xeaa87a); /* punpckhdq mm7, mm7 */
/* eaa87d: punpckldq mm3, mm5 */
  guest_unsupported(0xeaa87d); /* punpckldq mm3, mm5 */
/* eaa880: punpckldq mm7, mm6 */
  guest_unsupported(0xeaa880); /* punpckldq mm7, mm6 */
/* eaa883: pfmul mm3, mm1 */
  guest_unsupported(0xeaa883); /* pfmul mm3, mm1 */
/* eaa887: pfmul mm7, mm1 */
  guest_unsupported(0xeaa887); /* pfmul mm7, mm1 */
/* eaa88b: pxor mm3, mm0 */
  guest_unsupported(0xeaa88b); /* pxor mm3, mm0 */
/* eaa88e: pxor mm7, mm0 */
  guest_unsupported(0xeaa88e); /* pxor mm7, mm0 */
/* eaa891: pfacc mm3, mm7 */
  guest_unsupported(0xeaa891); /* pfacc mm3, mm7 */
/* eaa895: movq mm7, mm0 */
  MMX[7] = MMX[0];
/* eaa898: movq mm0, qword ptr [ebx] */
  MMX[0] = R64((uint32_t)(ebx));
/* eaa89b: pfsub mm2, mm3 */
  guest_unsupported(0xeaa89b); /* pfsub mm2, mm3 */
/* eaa89f: movq qword ptr [eax], mm2 */
  W64((uint32_t)(eax), MMX[2]);
/* eaa8a2: punpckhdq mm4, mm5 */
  guest_unsupported(0xeaa8a2); /* punpckhdq mm4, mm5 */
/* eaa8a5: pxor mm4, mm7 */
  guest_unsupported(0xeaa8a5); /* pxor mm4, mm7 */
/* eaa8a8: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eaa8ab: psrlq mm7, 0x20 */
  guest_unsupported(0xeaa8ab); /* psrlq mm7, 0x20 */
/* eaa8af: punpckldq mm2, mm6 */
  guest_unsupported(0xeaa8af); /* punpckldq mm2, mm6 */
/* eaa8b2: pxor mm2, mm7 */
  guest_unsupported(0xeaa8b2); /* pxor mm2, mm7 */
/* eaa8b5: punpckhdq mm6, mm6 */
  guest_unsupported(0xeaa8b5); /* punpckhdq mm6, mm6 */
/* eaa8b8: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eaa8bb: punpckldq mm3, mm3 */
  guest_unsupported(0xeaa8bb); /* punpckldq mm3, mm3 */
/* eaa8be: pxor mm6, mm7 */
  guest_unsupported(0xeaa8be); /* pxor mm6, mm7 */
/* eaa8c1: punpckhdq mm1, mm3 */
  guest_unsupported(0xeaa8c1); /* punpckhdq mm1, mm3 */
/* eaa8c4: psllq mm7, 0x20 */
  guest_unsupported(0xeaa8c4); /* psllq mm7, 0x20 */
/* eaa8c8: pfmul mm4, mm0 */
  guest_unsupported(0xeaa8c8); /* pfmul mm4, mm0 */
/* eaa8cc: pfmul mm2, mm0 */
  guest_unsupported(0xeaa8cc); /* pfmul mm2, mm0 */
/* eaa8d0: pfmul mm1, mm6 */
  guest_unsupported(0xeaa8d0); /* pfmul mm1, mm6 */
/* eaa8d4: pxor mm4, mm7 */
  guest_unsupported(0xeaa8d4); /* pxor mm4, mm7 */
/* eaa8d7: pxor mm2, mm7 */
  guest_unsupported(0xeaa8d7); /* pxor mm2, mm7 */
/* eaa8da: pfacc mm4, mm2 */
  guest_unsupported(0xeaa8da); /* pfacc mm4, mm2 */
/* eaa8de: pfadd mm1, mm4 */
  guest_unsupported(0xeaa8de); /* pfadd mm1, mm4 */
/* eaa8e2: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* eaa8e6: femms  */
  guest_unsupported(0xeaa8e6); /* femms  */
/* eaa8e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eaa8e9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eaa8ec(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa8ec: /* eaa8ec: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa8f0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaa8f4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaa8f8: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaa8fb: movq mm1, qword ptr [edx + 8] */
  MMX[1] = R64((uint32_t)(edx + 0x8u));
/* eaa8ff: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* eaa902: movq mm3, qword ptr [ecx + 8] */
  MMX[3] = R64((uint32_t)(ecx + 0x8u));
/* eaa906: movq mm4, qword ptr [eax] */
  MMX[4] = R64((uint32_t)(eax));
/* eaa909: movq mm5, qword ptr [eax + 8] */
  MMX[5] = R64((uint32_t)(eax + 0x8u));
/* eaa90d: movd mm6, dword ptr [esp + 0x14] */
  guest_unsupported(0xeaa90d); /* movd mm6, dword ptr [esp + 0x14] */
/* eaa912: movd mm7, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaa912); /* movd mm7, dword ptr [esp + 0x18] */
/* eaa917: pfsub mm0, mm4 */
  guest_unsupported(0xeaa917); /* pfsub mm0, mm4 */
/* eaa91b: pfsub mm1, mm5 */
  guest_unsupported(0xeaa91b); /* pfsub mm1, mm5 */
/* eaa91f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa923: pfsub mm2, mm4 */
  guest_unsupported(0xeaa923); /* pfsub mm2, mm4 */
/* eaa927: pfsub mm3, mm5 */
  guest_unsupported(0xeaa927); /* pfsub mm3, mm5 */
/* eaa92b: punpckldq mm6, mm6 */
  guest_unsupported(0xeaa92b); /* punpckldq mm6, mm6 */
/* eaa92e: punpckldq mm7, mm7 */
  guest_unsupported(0xeaa92e); /* punpckldq mm7, mm7 */
/* eaa931: pfmul mm0, mm6 */
  guest_unsupported(0xeaa931); /* pfmul mm0, mm6 */
/* eaa935: pfmul mm1, mm6 */
  guest_unsupported(0xeaa935); /* pfmul mm1, mm6 */
/* eaa939: pfmul mm2, mm7 */
  guest_unsupported(0xeaa939); /* pfmul mm2, mm7 */
/* eaa93d: pfadd mm0, mm4 */
  guest_unsupported(0xeaa93d); /* pfadd mm0, mm4 */
/* eaa941: pfmul mm3, mm7 */
  guest_unsupported(0xeaa941); /* pfmul mm3, mm7 */
/* eaa945: pfadd mm1, mm5 */
  guest_unsupported(0xeaa945); /* pfadd mm1, mm5 */
/* eaa949: pfadd mm0, mm2 */
  guest_unsupported(0xeaa949); /* pfadd mm0, mm2 */
/* eaa94d: pfadd mm1, mm3 */
  guest_unsupported(0xeaa94d); /* pfadd mm1, mm3 */
/* eaa951: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaa954: movq qword ptr [eax + 8], mm1 */
  W64((uint32_t)(eax + 0x8u), MMX[1]);
/* eaa958: femms  */
  guest_unsupported(0xeaa958); /* femms  */
/* eaa95a: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaa95d(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaa95d: /* eaa95d: femms  */
  guest_unsupported(0xeaa95d); /* femms  */
/* eaa95f: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaa95f); /* movd mm0, dword ptr [esp + 0x18] */
/* eaa964: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaa967: pfmul mm1, mm1 */
  guest_unsupported(0xeaa967); /* pfmul mm1, mm1 */
/* eaa96b: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eaa96e: pfmul mm2, mm0 */
  guest_unsupported(0xeaa96e); /* pfmul mm2, mm0 */
/* eaa972: movq mm3, qword ptr [0xeb3c38] */
  MMX[3] = R64((uint32_t)(0xeb3c38u));
/* eaa979: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaa97c: movq mm7, mm2 */
  MMX[7] = MMX[2];
/* eaa97f: pfsub mm7, mm1 */
  guest_unsupported(0xeaa97f); /* pfsub mm7, mm1 */
/* eaa983: pfmul mm4, mm3 */
  guest_unsupported(0xeaa983); /* pfmul mm4, mm3 */
/* eaa987: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaa98a: pfmul mm1, qword ptr [0xeb3c40] */
  guest_unsupported(0xeaa98a); /* pfmul mm1, qword ptr [0xeb3c40] */
/* eaa992: pfmul mm2, mm3 */
  guest_unsupported(0xeaa992); /* pfmul mm2, mm3 */
/* eaa996: pfsub mm6, mm4 */
  guest_unsupported(0xeaa996); /* pfsub mm6, mm4 */
/* eaa99a: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaa99d: pfsub mm1, mm2 */
  guest_unsupported(0xeaa99d); /* pfsub mm1, mm2 */
/* eaa9a1: pfadd mm6, mm0 */
  guest_unsupported(0xeaa9a1); /* pfadd mm6, mm0 */
/* eaa9a5: pfsub mm2, mm5 */
  guest_unsupported(0xeaa9a5); /* pfsub mm2, mm5 */
/* eaa9a9: pfadd mm2, qword ptr [0xeb3c28] */
  guest_unsupported(0xeaa9a9); /* pfadd mm2, qword ptr [0xeb3c28] */
/* eaa9b1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* eaa9b5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaa9b9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaa9bd: punpckldq mm7, mm7 */
  guest_unsupported(0xeaa9bd); /* punpckldq mm7, mm7 */
/* eaa9c0: punpckldq mm1, mm1 */
  guest_unsupported(0xeaa9c0); /* punpckldq mm1, mm1 */
/* eaa9c3: punpckldq mm6, mm6 */
  guest_unsupported(0xeaa9c3); /* punpckldq mm6, mm6 */
/* eaa9c6: punpckldq mm2, mm2 */
  guest_unsupported(0xeaa9c6); /* punpckldq mm2, mm2 */
/* eaa9c9: movq mm5, mm7 */
  MMX[5] = MMX[7];
/* eaa9cc: pfmul mm7, qword ptr [eax] */
  guest_unsupported(0xeaa9cc); /* pfmul mm7, qword ptr [eax] */
/* eaa9d0: movq mm0, mm1 */
  MMX[0] = MMX[1];
/* eaa9d3: pfmul mm1, qword ptr [ecx] */
  guest_unsupported(0xeaa9d3); /* pfmul mm1, qword ptr [ecx] */
/* eaa9d7: pfmul mm5, qword ptr [eax + 8] */
  guest_unsupported(0xeaa9d7); /* pfmul mm5, qword ptr [eax + 8] */
/* eaa9dc: pfmul mm0, qword ptr [ecx + 8] */
  guest_unsupported(0xeaa9dc); /* pfmul mm0, qword ptr [ecx + 8] */
/* eaa9e1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaa9e5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaa9e9: movq mm4, mm6 */
  MMX[4] = MMX[6];
/* eaa9ec: pfmul mm6, qword ptr [edx] */
  guest_unsupported(0xeaa9ec); /* pfmul mm6, qword ptr [edx] */
/* eaa9f0: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaa9f3: pfmul mm2, qword ptr [ecx] */
  guest_unsupported(0xeaa9f3); /* pfmul mm2, qword ptr [ecx] */
/* eaa9f7: pfmul mm4, qword ptr [edx + 8] */
  guest_unsupported(0xeaa9f7); /* pfmul mm4, qword ptr [edx + 8] */
/* eaa9fc: pfmul mm3, qword ptr [ecx + 8] */
  guest_unsupported(0xeaa9fc); /* pfmul mm3, qword ptr [ecx + 8] */
/* eaaa01: pfadd mm1, mm7 */
  guest_unsupported(0xeaaa01); /* pfadd mm1, mm7 */
/* eaaa05: pfadd mm0, mm5 */
  guest_unsupported(0xeaaa05); /* pfadd mm0, mm5 */
/* eaaa09: pfadd mm2, mm6 */
  guest_unsupported(0xeaaa09); /* pfadd mm2, mm6 */
/* eaaa0d: pfadd mm3, mm4 */
  guest_unsupported(0xeaaa0d); /* pfadd mm3, mm4 */
/* eaaa11: pfadd mm1, mm2 */
  guest_unsupported(0xeaaa11); /* pfadd mm1, mm2 */
/* eaaa15: pfadd mm0, mm3 */
  guest_unsupported(0xeaaa15); /* pfadd mm0, mm3 */
/* eaaa19: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* eaaa1c: movq qword ptr [eax + 8], mm0 */
  W64((uint32_t)(eax + 0x8u), MMX[0]);
/* eaaa20: femms  */
  guest_unsupported(0xeaaa20); /* femms  */
/* eaaa22: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaaa25(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaaa25: /* eaaa25: movd mm0, dword ptr [esp + 0x18] */
  guest_unsupported(0xeaaa25); /* movd mm0, dword ptr [esp + 0x18] */
/* eaaa2a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eaaa2e: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaaa31: punpckldq mm0, mm0 */
  guest_unsupported(0xeaaa31); /* punpckldq mm0, mm0 */
/* eaaa34: pfmul mm0, mm0 */
  guest_unsupported(0xeaaa34); /* pfmul mm0, mm0 */
/* eaaa38: punpckldq mm1, dword ptr [0xeb3ba0] */
  guest_unsupported(0xeaaa38); /* punpckldq mm1, dword ptr [0xeb3ba0] */
/* eaaa3f: pfmul mm0, mm1 */
  guest_unsupported(0xeaaa3f); /* pfmul mm0, mm1 */
/* eaaa43: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eaaa46: pfmul mm1, mm1 */
  guest_unsupported(0xeaaa46); /* pfmul mm1, mm1 */
/* eaaa4a: pxor mm7, mm7 */
  guest_unsupported(0xeaaa4a); /* pxor mm7, mm7 */
/* eaaa4d: pfsub mm0, mm1 */
  guest_unsupported(0xeaaa4d); /* pfsub mm0, mm1 */
/* eaaa51: punpckldq mm1, mm1 */
  guest_unsupported(0xeaaa51); /* punpckldq mm1, mm1 */
/* eaaa54: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaaa57: punpckldq mm3, mm3 */
  guest_unsupported(0xeaaa57); /* punpckldq mm3, mm3 */
/* eaaa5a: pfmul mm0, qword ptr [0xeb3bb0] */
  guest_unsupported(0xeaaa5a); /* pfmul mm0, qword ptr [0xeb3bb0] */
/* eaaa62: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaaa65: punpckldq mm0, mm4 */
  guest_unsupported(0xeaaa65); /* punpckldq mm0, mm4 */
/* eaaa68: pxor mm3, qword ptr [0xeb3bc0] */
  guest_unsupported(0xeaaa68); /* pxor mm3, qword ptr [0xeb3bc0] */
/* eaaa6f: punpckhdq mm5, mm7 */
  guest_unsupported(0xeaaa6f); /* punpckhdq mm5, mm7 */
/* eaaa72: pfadd mm1, mm3 */
  guest_unsupported(0xeaaa72); /* pfadd mm1, mm3 */
/* eaaa76: pfsub mm1, mm0 */
  guest_unsupported(0xeaaa76); /* pfsub mm1, mm0 */
/* eaaa7a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* eaaa7e: pfsub mm0, mm5 */
  guest_unsupported(0xeaaa7e); /* pfsub mm0, mm5 */
/* eaaa82: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eaaa85: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaaa85); /* punpckhdq mm1, mm1 */
/* eaaa88: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eaaa8b: punpckldq mm0, mm0 */
  guest_unsupported(0xeaaa8b); /* punpckldq mm0, mm0 */
/* eaaa8e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eaaa92: punpckldq mm2, mm2 */
  guest_unsupported(0xeaaa92); /* punpckldq mm2, mm2 */
/* eaaa95: movq mm4, mm1 */
  MMX[4] = MMX[1];
/* eaaa98: pfmul mm1, qword ptr [edx] */
  guest_unsupported(0xeaaa98); /* pfmul mm1, qword ptr [edx] */
/* eaaa9c: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaaa9c); /* punpckhdq mm3, mm3 */
/* eaaa9f: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaaaa2: pfmul mm0, qword ptr [ecx] */
  guest_unsupported(0xeaaaa2); /* pfmul mm0, qword ptr [ecx] */
/* eaaaa6: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaaaa9: pfmul mm2, qword ptr [eax] */
  guest_unsupported(0xeaaaa9); /* pfmul mm2, qword ptr [eax] */
/* eaaaad: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* eaaab0: pfmul mm4, qword ptr [edx + 8] */
  guest_unsupported(0xeaaab0); /* pfmul mm4, qword ptr [edx + 8] */
/* eaaab5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eaaab9: pfmul mm5, qword ptr [ecx + 8] */
  guest_unsupported(0xeaaab9); /* pfmul mm5, qword ptr [ecx + 8] */
/* eaaabe: pfadd mm0, mm1 */
  guest_unsupported(0xeaaabe); /* pfadd mm0, mm1 */
/* eaaac2: pfmul mm6, qword ptr [eax + 8] */
  guest_unsupported(0xeaaac2); /* pfmul mm6, qword ptr [eax + 8] */
/* eaaac7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaaacb: pfadd mm4, mm5 */
  guest_unsupported(0xeaaacb); /* pfadd mm4, mm5 */
/* eaaacf: pfadd mm0, mm2 */
  guest_unsupported(0xeaaacf); /* pfadd mm0, mm2 */
/* eaaad3: pfmul mm3, qword ptr [edx] */
  guest_unsupported(0xeaaad3); /* pfmul mm3, qword ptr [edx] */
/* eaaad7: movq mm1, qword ptr [0xeb3c08] */
  MMX[1] = R64((uint32_t)(0xeb3c08u));
/* eaaade: pfadd mm0, mm3 */
  guest_unsupported(0xeaaade); /* pfadd mm0, mm3 */
/* eaaae2: pfmul mm7, qword ptr [edx + 8] */
  guest_unsupported(0xeaaae2); /* pfmul mm7, qword ptr [edx + 8] */
/* eaaae7: pfadd mm4, mm6 */
  guest_unsupported(0xeaaae7); /* pfadd mm4, mm6 */
/* eaaaeb: pfmul mm0, mm1 */
  guest_unsupported(0xeaaaeb); /* pfmul mm0, mm1 */
/* eaaaef: pfadd mm4, mm7 */
  guest_unsupported(0xeaaaef); /* pfadd mm4, mm7 */
/* eaaaf3: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaaaf6: pfmul mm4, mm1 */
  guest_unsupported(0xeaaaf6); /* pfmul mm4, mm1 */
/* eaaafa: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* eaaafe: femms  */
  guest_unsupported(0xeaaafe); /* femms  */
/* eaab00: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eaab03(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaab03: /* eaab03: femms  */
  guest_unsupported(0xeaab03); /* femms  */
/* eaab05: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaab09: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaab0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaab11: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaab14: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xeaab14); /* movd mm1, dword ptr [edx + 8] */
/* eaab18: movq mm2, qword ptr [ecx] */
  MMX[2] = R64((uint32_t)(ecx));
/* eaab1b: movd mm3, dword ptr [ecx + 8] */
  guest_unsupported(0xeaab1b); /* movd mm3, dword ptr [ecx + 8] */
/* eaab1f: pfmul mm2, mm0 */
  guest_unsupported(0xeaab1f); /* pfmul mm2, mm0 */
/* eaab23: pfmul mm3, mm1 */
  guest_unsupported(0xeaab23); /* pfmul mm3, mm1 */
/* eaab27: pfacc mm2, mm2 */
  guest_unsupported(0xeaab27); /* pfacc mm2, mm2 */
/* eaab2b: pfadd mm2, mm3 */
  guest_unsupported(0xeaab2b); /* pfadd mm2, mm3 */
/* eaab2f: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaab32: pxor mm2, qword ptr [0xeb3c18] */
  guest_unsupported(0xeaab32); /* pxor mm2, qword ptr [0xeb3c18] */
/* eaab39: movd dword ptr [eax + 8], mm1 */
  guest_unsupported(0xeaab39); /* movd dword ptr [eax + 8], mm1 */
/* eaab3d: movd dword ptr [eax + 0xc], mm2 */
  guest_unsupported(0xeaab3d); /* movd dword ptr [eax + 0xc], mm2 */
/* eaab41: femms  */
  guest_unsupported(0xeaab41); /* femms  */
/* eaab43: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaab46(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaab46: /* eaab46: femms  */
  guest_unsupported(0xeaab46); /* femms  */
/* eaab48: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* eaab4c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eaab50: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eaab54: movq mm3, qword ptr [0xeb3c20] */
  MMX[3] = R64((uint32_t)(0xeb3c20u));
/* eaab5b: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaab5e: movd mm1, dword ptr [edx + 8] */
  guest_unsupported(0xeaab5e); /* movd mm1, dword ptr [edx + 8] */
/* eaab62: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eaab65: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaab68: movd mm6, dword ptr [ecx + 8] */
  guest_unsupported(0xeaab68); /* movd mm6, dword ptr [ecx + 8] */
/* eaab6c: punpckldq mm1, mm1 */
  guest_unsupported(0xeaab6c); /* punpckldq mm1, mm1 */
/* eaab6f: punpckldq mm6, dword ptr [eax + 8] */
  guest_unsupported(0xeaab6f); /* punpckldq mm6, dword ptr [eax + 8] */
/* eaab73: pfsub mm0, qword ptr [eax] */
  guest_unsupported(0xeaab73); /* pfsub mm0, qword ptr [eax] */
/* eaab77: pfsub mm1, mm6 */
  guest_unsupported(0xeaab77); /* pfsub mm1, mm6 */
/* eaab7b: pfsub mm4, qword ptr [ecx] */
  guest_unsupported(0xeaab7b); /* pfsub mm4, qword ptr [ecx] */
/* eaab7f: pxor mm7, mm7 */
  guest_unsupported(0xeaab7f); /* pxor mm7, mm7 */
/* eaab82: pfsub mm7, mm4 */
  guest_unsupported(0xeaab82); /* pfsub mm7, mm4 */
/* eaab86: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaab89: punpckhdq mm0, mm7 */
  guest_unsupported(0xeaab89); /* punpckhdq mm0, mm7 */
/* eaab8c: pfmul mm0, mm1 */
  guest_unsupported(0xeaab8c); /* pfmul mm0, mm1 */
/* eaab90: movq mm6, mm7 */
  MMX[6] = MMX[7];
/* eaab93: punpckldq mm6, mm1 */
  guest_unsupported(0xeaab93); /* punpckldq mm6, mm1 */
/* eaab96: punpckhdq mm1, mm3 */
  guest_unsupported(0xeaab96); /* punpckhdq mm1, mm3 */
/* eaab99: punpckldq mm1, mm5 */
  guest_unsupported(0xeaab99); /* punpckldq mm1, mm5 */
/* eaab9c: pfmul mm1, mm6 */
  guest_unsupported(0xeaab9c); /* pfmul mm1, mm6 */
/* eaaba0: pfacc mm0, mm1 */
  guest_unsupported(0xeaaba0); /* pfacc mm0, mm1 */
/* eaaba4: pxor mm0, mm3 */
  guest_unsupported(0xeaaba4); /* pxor mm0, mm3 */
/* eaaba7: movq mm1, mm4 */
  MMX[1] = MMX[4];
/* eaabaa: punpckldq mm4, mm7 */
  guest_unsupported(0xeaabaa); /* punpckldq mm4, mm7 */
/* eaabad: punpckhdq mm1, mm4 */
  guest_unsupported(0xeaabad); /* punpckhdq mm1, mm4 */
/* eaabb0: pfmul mm1, mm5 */
  guest_unsupported(0xeaabb0); /* pfmul mm1, mm5 */
/* eaabb4: pfacc mm1, mm1 */
  guest_unsupported(0xeaabb4); /* pfacc mm1, mm1 */
/* eaabb8: movq mm6, mm0 */
  MMX[6] = MMX[0];
/* eaabbb: movq mm7, mm1 */
  MMX[7] = MMX[1];
/* eaabbe: psllq mm7, 0x20 */
  guest_unsupported(0xeaabbe); /* psllq mm7, 0x20 */
/* eaabc2: pfmul mm6, mm6 */
  guest_unsupported(0xeaabc2); /* pfmul mm6, mm6 */
/* eaabc6: pfmul mm7, mm7 */
  guest_unsupported(0xeaabc6); /* pfmul mm7, mm7 */
/* eaabca: pfadd mm6, mm7 */
  guest_unsupported(0xeaabca); /* pfadd mm6, mm7 */
/* eaabce: pfacc mm6, mm6 */
  guest_unsupported(0xeaabce); /* pfacc mm6, mm6 */
/* eaabd2: movq mm5, mm6 */
  MMX[5] = MMX[6];
/* eaabd5: pfrsqrt mm4, mm6 */
  guest_unsupported(0xeaabd5); /* pfrsqrt mm4, mm6 */
/* eaabd9: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xeaabd9); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* eaabe1: movq mm7, mm4 */
  MMX[7] = MMX[4];
/* eaabe4: pfmul mm7, mm4 */
  guest_unsupported(0xeaabe4); /* pfmul mm7, mm4 */
/* eaabe8: pfrsqit1 mm6, mm7 */
  guest_unsupported(0xeaabe8); /* pfrsqit1 mm6, mm7 */
/* eaabec: pand mm0, mm5 */
  guest_unsupported(0xeaabec); /* pand mm0, mm5 */
/* eaabef: pand mm1, mm5 */
  guest_unsupported(0xeaabef); /* pand mm1, mm5 */
/* eaabf2: pfrcpit2 mm6, mm4 */
  guest_unsupported(0xeaabf2); /* pfrcpit2 mm6, mm4 */
/* eaabf6: pfmul mm0, mm6 */
  guest_unsupported(0xeaabf6); /* pfmul mm0, mm6 */
/* eaabfa: pfmul mm1, mm6 */
  guest_unsupported(0xeaabfa); /* pfmul mm1, mm6 */
/* eaabfe: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaac02: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaac05: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaac08: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaac08); /* pfmul mm0, qword ptr [edx] */
/* eaac0c: pfmul mm1, mm2 */
  guest_unsupported(0xeaac0c); /* pfmul mm1, mm2 */
/* eaac10: pfacc mm0, mm0 */
  guest_unsupported(0xeaac10); /* pfacc mm0, mm0 */
/* eaac14: pfadd mm0, mm1 */
  guest_unsupported(0xeaac14); /* pfadd mm0, mm1 */
/* eaac18: punpckldq mm5, mm0 */
  guest_unsupported(0xeaac18); /* punpckldq mm5, mm0 */
/* eaac1b: pxor mm5, mm3 */
  guest_unsupported(0xeaac1b); /* pxor mm5, mm3 */
/* eaac1e: movq qword ptr [eax], mm4 */
  W64((uint32_t)(eax), MMX[4]);
/* eaac21: movq qword ptr [eax + 8], mm5 */
  W64((uint32_t)(eax + 0x8u), MMX[5]);
/* eaac25: femms  */
  guest_unsupported(0xeaac25); /* femms  */
/* eaac27: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eaac2a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaac2a: /* eaac2a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eaac2e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* eaac32: movq mm0, qword ptr [eax] */
  MMX[0] = R64((uint32_t)(eax));
/* eaac35: movq mm1, qword ptr [eax + 8] */
  MMX[1] = R64((uint32_t)(eax + 0x8u));
/* eaac39: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* eaac3d: movq mm4, qword ptr [edx] */
  MMX[4] = R64((uint32_t)(edx));
/* eaac40: movd mm5, dword ptr [edx + 8] */
  guest_unsupported(0xeaac40); /* movd mm5, dword ptr [edx + 8] */
/* eaac44: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eaac47: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eaac4a: movq mm6, qword ptr [ecx] */
  MMX[6] = R64((uint32_t)(ecx));
/* eaac4d: pfmul mm2, mm4 */
  guest_unsupported(0xeaac4d); /* pfmul mm2, mm4 */
/* eaac51: pfmul mm3, mm5 */
  guest_unsupported(0xeaac51); /* pfmul mm3, mm5 */
/* eaac55: movd mm7, dword ptr [ecx + 8] */
  guest_unsupported(0xeaac55); /* movd mm7, dword ptr [ecx + 8] */
/* eaac59: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaac5c: pfadd mm2, mm3 */
  guest_unsupported(0xeaac5c); /* pfadd mm2, mm3 */
/* eaac60: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaac63: pfmul mm4, mm6 */
  guest_unsupported(0xeaac63); /* pfmul mm4, mm6 */
/* eaac67: pfmul mm5, mm7 */
  guest_unsupported(0xeaac67); /* pfmul mm5, mm7 */
/* eaac6b: pfadd mm4, mm5 */
  guest_unsupported(0xeaac6b); /* pfadd mm4, mm5 */
/* eaac6f: pxor mm3, mm3 */
  guest_unsupported(0xeaac6f); /* pxor mm3, mm3 */
/* eaac72: pfsub mm4, mm2 */
  guest_unsupported(0xeaac72); /* pfsub mm4, mm2 */
/* eaac76: punpckldq mm7, dword ptr [0xeb3b90] */
  guest_unsupported(0xeaac76); /* punpckldq mm7, dword ptr [0xeb3b90] */
/* eaac7d: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eaac80: pfacc mm4, mm4 */
  guest_unsupported(0xeaac80); /* pfacc mm4, mm4 */
/* eaac84: pfcmpeq mm3, mm4 */
  guest_unsupported(0xeaac84); /* pfcmpeq mm3, mm4 */
/* eaac88: movd eax, mm3 */
  guest_unsupported(0xeaac88); /* movd eax, mm3 */
/* eaac8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eaac8d: pfrcp mm5, mm4 */
  guest_unsupported(0xeaac8d); /* pfrcp mm5, mm4 */
/* eaac91: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaac95: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eaac98: pfmul mm2, mm6 */
  guest_unsupported(0xeaac98); /* pfmul mm2, mm6 */
/* eaac9c: je 0xeaaca5 */
  if (zf) goto L_eaaca5;
L_eaac9e: /* eaac9e: xor eax, eax */
  eax = 0;
/* eaaca0: femms  */
  guest_unsupported(0xeaaca0); /* femms  */
/* eaaca2: ret 0x10 */
  esp += 20; SPILL(); return;
L_eaaca5: /* eaaca5: pfmul mm3, mm7 */
  guest_unsupported(0xeaaca5); /* pfmul mm3, mm7 */
/* eaaca9: pfrcpit1 mm4, mm5 */
  guest_unsupported(0xeaaca9); /* pfrcpit1 mm4, mm5 */
/* eaacad: pfadd mm2, mm3 */
  guest_unsupported(0xeaacad); /* pfadd mm2, mm3 */
/* eaacb1: movq mm3, qword ptr [edx] */
  MMX[3] = R64((uint32_t)(edx));
/* eaacb4: pfrcpit2 mm4, mm5 */
  guest_unsupported(0xeaacb4); /* pfrcpit2 mm4, mm5 */
/* eaacb8: pfacc mm2, mm2 */
  guest_unsupported(0xeaacb8); /* pfacc mm2, mm2 */
/* eaacbc: movd mm5, dword ptr [edx + 8] */
  guest_unsupported(0xeaacbc); /* movd mm5, dword ptr [edx + 8] */
/* eaacc0: pfsub mm3, mm6 */
  guest_unsupported(0xeaacc0); /* pfsub mm3, mm6 */
/* eaacc4: pfmul mm2, mm4 */
  guest_unsupported(0xeaacc4); /* pfmul mm2, mm4 */
/* eaacc8: pfsub mm5, mm7 */
  guest_unsupported(0xeaacc8); /* pfsub mm5, mm7 */
/* eaaccc: pfmul mm3, mm2 */
  guest_unsupported(0xeaaccc); /* pfmul mm3, mm2 */
/* eaacd0: pfmul mm5, mm2 */
  guest_unsupported(0xeaacd0); /* pfmul mm5, mm2 */
/* eaacd4: pfadd mm3, mm6 */
  guest_unsupported(0xeaacd4); /* pfadd mm3, mm6 */
/* eaacd8: pfadd mm5, mm7 */
  guest_unsupported(0xeaacd8); /* pfadd mm5, mm7 */
/* eaacdc: movq qword ptr [eax], mm3 */
  W64((uint32_t)(eax), MMX[3]);
/* eaacdf: movd dword ptr [eax + 8], mm5 */
  guest_unsupported(0xeaacdf); /* movd dword ptr [eax + 8], mm5 */
/* eaace3: femms  */
  guest_unsupported(0xeaace3); /* femms  */
/* eaace5: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eaace8(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaace8: /* eaace8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* eaacec: movq mm0, qword ptr [edx] */
  MMX[0] = R64((uint32_t)(edx));
/* eaacef: movq mm2, qword ptr [edx + 8] */
  MMX[2] = R64((uint32_t)(edx + 0x8u));
/* eaacf3: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaacf6: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaacf9: pand mm2, qword ptr [0xeb3bf0] */
  guest_unsupported(0xeaacf9); /* pand mm2, qword ptr [0xeb3bf0] */
/* eaad00: pfmul mm0, mm0 */
  guest_unsupported(0xeaad00); /* pfmul mm0, mm0 */
/* eaad04: pfmul mm2, mm2 */
  guest_unsupported(0xeaad04); /* pfmul mm2, mm2 */
/* eaad08: pfadd mm0, mm2 */
  guest_unsupported(0xeaad08); /* pfadd mm0, mm2 */
/* eaad0c: pfacc mm0, mm0 */
  guest_unsupported(0xeaad0c); /* pfacc mm0, mm0 */
/* eaad10: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eaad13: pfrsqrt mm4, mm0 */
  guest_unsupported(0xeaad13); /* pfrsqrt mm4, mm0 */
/* eaad17: pfcmpgt mm5, qword ptr [0xeb3c10] */
  guest_unsupported(0xeaad17); /* pfcmpgt mm5, qword ptr [0xeb3c10] */
/* eaad1f: movq mm2, mm4 */
  MMX[2] = MMX[4];
/* eaad22: pfmul mm2, mm4 */
  guest_unsupported(0xeaad22); /* pfmul mm2, mm4 */
/* eaad26: pfrsqit1 mm0, mm2 */
  guest_unsupported(0xeaad26); /* pfrsqit1 mm0, mm2 */
/* eaad2a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaad2e: pand mm1, mm5 */
  guest_unsupported(0xeaad2e); /* pand mm1, mm5 */
/* eaad31: pand mm3, mm5 */
  guest_unsupported(0xeaad31); /* pand mm3, mm5 */
/* eaad34: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xeaad34); /* pfrcpit2 mm0, mm4 */
/* eaad38: pfmul mm1, mm0 */
  guest_unsupported(0xeaad38); /* pfmul mm1, mm0 */
/* eaad3c: pfmul mm3, mm0 */
  guest_unsupported(0xeaad3c); /* pfmul mm3, mm0 */
/* eaad40: movq qword ptr [eax], mm1 */
  W64((uint32_t)(eax), MMX[1]);
/* eaad43: movq qword ptr [eax + 8], mm3 */
  W64((uint32_t)(eax + 0x8u), MMX[3]);
/* eaad47: femms  */
  guest_unsupported(0xeaad47); /* femms  */
/* eaad49: ret 8 */
  esp += 12; SPILL(); return;
}

void f_eaad4c(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaad4c: /* eaad4c: femms  */
  guest_unsupported(0xeaad4c); /* femms  */
/* eaad4e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* eaad52: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* eaad56: movq mm0, qword ptr [ecx] */
  MMX[0] = R64((uint32_t)(ecx));
/* eaad59: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eaad5c: punpckldq mm0, mm0 */
  guest_unsupported(0xeaad5c); /* punpckldq mm0, mm0 */
/* eaad5f: punpckhdq mm1, mm1 */
  guest_unsupported(0xeaad5f); /* punpckhdq mm1, mm1 */
/* eaad62: movq mm2, qword ptr [ecx + 8] */
  MMX[2] = R64((uint32_t)(ecx + 0x8u));
/* eaad66: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eaad69: punpckldq mm2, mm2 */
  guest_unsupported(0xeaad69); /* punpckldq mm2, mm2 */
/* eaad6c: punpckhdq mm3, mm3 */
  guest_unsupported(0xeaad6c); /* punpckhdq mm3, mm3 */
/* eaad6f: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eaad72: pfmul mm0, qword ptr [edx] */
  guest_unsupported(0xeaad72); /* pfmul mm0, qword ptr [edx] */
/* eaad76: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eaad79: pfmul mm1, qword ptr [edx + 0x10] */
  guest_unsupported(0xeaad79); /* pfmul mm1, qword ptr [edx + 0x10] */
/* eaad7e: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaad81: pfmul mm2, qword ptr [edx + 0x20] */
  guest_unsupported(0xeaad81); /* pfmul mm2, qword ptr [edx + 0x20] */
/* eaad86: movq mm7, mm3 */
  MMX[7] = MMX[3];
/* eaad89: pfmul mm3, qword ptr [edx + 0x30] */
  guest_unsupported(0xeaad89); /* pfmul mm3, qword ptr [edx + 0x30] */
/* eaad8e: pfadd mm0, mm1 */
  guest_unsupported(0xeaad8e); /* pfadd mm0, mm1 */
/* eaad92: pfmul mm4, qword ptr [edx + 8] */
  guest_unsupported(0xeaad92); /* pfmul mm4, qword ptr [edx + 8] */
/* eaad97: pfadd mm2, mm3 */
  guest_unsupported(0xeaad97); /* pfadd mm2, mm3 */
/* eaad9b: pfmul mm5, qword ptr [edx + 0x18] */
  guest_unsupported(0xeaad9b); /* pfmul mm5, qword ptr [edx + 0x18] */
/* eaada0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eaada4: pfmul mm6, qword ptr [edx + 0x28] */
  guest_unsupported(0xeaada4); /* pfmul mm6, qword ptr [edx + 0x28] */
/* eaada9: pfmul mm7, qword ptr [edx + 0x38] */
  guest_unsupported(0xeaada9); /* pfmul mm7, qword ptr [edx + 0x38] */
/* eaadae: pfadd mm0, mm2 */
  guest_unsupported(0xeaadae); /* pfadd mm0, mm2 */
/* eaadb2: pfadd mm4, mm5 */
  guest_unsupported(0xeaadb2); /* pfadd mm4, mm5 */
/* eaadb6: pfadd mm6, mm7 */
  guest_unsupported(0xeaadb6); /* pfadd mm6, mm7 */
/* eaadba: pfadd mm4, mm6 */
  guest_unsupported(0xeaadba); /* pfadd mm4, mm6 */
/* eaadbe: movq qword ptr [eax], mm0 */
  W64((uint32_t)(eax), MMX[0]);
/* eaadc1: movq qword ptr [eax + 8], mm4 */
  W64((uint32_t)(eax + 0x8u), MMX[4]);
/* eaadc5: femms  */
  guest_unsupported(0xeaadc5); /* femms  */
/* eaadc7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eaadca(void) {
  LOAD_REGS();
L_eaadca: /* eaadca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eaadcb: mov ebp, esp */
  ebp = esp;
/* eaadcd: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eaadd0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* eaadd3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* eaadd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaadd7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* eaadda: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* eaaddd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eaaddf: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaade1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eaade4: jae 0xeaaeeb */
  if (!cf) goto L_eaaeeb;
L_eaadea: /* eaadea: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eaaded: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* eaadf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaadf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaadf2: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* eaadf5: mov esi, 0xffc03fc0 */
  esi = 0xffc03fc0u;
/* eaadfa: mov eax, 0xff00ff */
  eax = 0xff00ffu;
L_eaadff: /* eaadff: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaae02: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eaae05: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* eaae08: jae 0xeaaecf */
  if (!cf) goto L_eaaecf;
L_eaae0e: /* eaae0e: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* eaae11: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* eaae13: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* eaae14: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* eaae17: lea ecx, [edx + 4] */
  ecx = (uint32_t)(edx + 0x4u);
/* eaae1a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* eaae1b: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* eaae1e: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_eaae21: /* eaae21: mov edx, dword ptr [ecx + edi] */
  edx = R32((uint32_t)(ecx + edi));
/* eaae24: mov edi, dword ptr [edi + ecx - 4] */
  edi = R32((uint32_t)(edi + ecx + 0xfffffffcu));
/* eaae28: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* eaae2b: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* eaae2e: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae30: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* eaae33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* eaae35: mov ecx, dword ptr [ecx - 4] */
  ecx = R32((uint32_t)(ecx + 0xfffffffcu));
/* eaae38: mov ebx, ecx */
  ebx = ecx;
/* eaae3a: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* eaae3d: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eaae3f: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eaae41: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* eaae44: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* eaae47: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae49: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eaae4b: mov edi, edx */
  edi = edx;
/* eaae4d: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* eaae50: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae52: lea ebx, [ebx + edi - 0x7fff80] */
  ebx = (uint32_t)(ebx + edi + 0xff800080u);
/* eaae59: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* eaae5c: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae5e: mov esi, ecx */
  esi = ecx;
/* eaae60: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* eaae62: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eaae64: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* eaae67: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae69: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eaae6b: mov edi, edx */
  edi = edx;
/* eaae6d: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae6f: lea esi, [esi + edi + 0x20002] */
  esi = (uint32_t)(esi + edi + 0x20002u);
/* eaae76: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* eaae79: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* eaae7c: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eaae7f: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eaae81: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* eaae84: mov esi, 0x3fc03fc0 */
  esi = 0x3fc03fc0u;
/* eaae89: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* eaae8b: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae8d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaae8f: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* eaae92: shr edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* eaae95: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaae97: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaae99: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* eaae9c: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* eaae9f: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* eaaea1: lea ecx, [ecx + edx + 0x800080] */
  ecx = (uint32_t)(ecx + edx + 0x800080u);
/* eaaea8: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eaaeaa: xor ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eaaeac: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* eaaeaf: add dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* eaaeb3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* eaaeb5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaaeb8: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaaebb: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* eaaebe: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* eaaec1: mov esi, 0xffc03fc0 */
  esi = 0xffc03fc0u;
/* eaaec6: jne 0xeaae21 */
  if (!zf) goto L_eaae21;
L_eaaecc: /* eaaecc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_eaaecf: /* eaaecf: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* eaaed2: add dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eaaed5: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* eaaed8: add dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* eaaedb: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* eaaedd: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaaee0: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* eaaee3: jb 0xeaadff */
  if (cf) goto L_eaadff;
L_eaaee9: /* eaaee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eaaeea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_eaaeeb: /* eaaeeb: xor eax, eax */
  eax = 0;
/* eaaeed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eaaeee: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaaeef: ret  */
  esp += 4; SPILL(); return;
}

void f_eaaef0(void) {
  LOAD_REGS();
L_eaaef0: /* eaaef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eaaef1: mov ebp, esp */
  ebp = esp;
/* eaaef3: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eaaef6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* eaaef9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* eaaefc: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* eaaeff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eaaf00: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* eaaf03: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaaf05: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaaf07: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* eaaf0a: jae 0xeaafd3 */
  if (!cf) goto L_eaafd3;
L_eaaf10: /* eaaf10: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* eaaf13: lea ecx, [edi + ecx*4] */
  ecx = (uint32_t)(edi + ecx*4);
/* eaaf16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eaaf17: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* eaaf1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eaaf1b: mov edx, 0xff00ff */
  edx = 0xff00ffu;
/* eaaf20: mov ecx, 0xff00 */
  ecx = 0xff00u;
L_eaaf25: /* eaaf25: cmp edi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaaf28: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eaaf2b: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* eaaf2e: jae 0xeaafb7 */
  if (!cf) goto L_eaafb7;
L_eaaf34: /* eaaf34: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* eaaf37: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* eaaf39: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* eaaf3a: shr ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* eaaf3d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* eaaf3e: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* eaaf41: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_eaaf44: /* eaaf44: mov edi, dword ptr [esi + eax] */
  edi = R32((uint32_t)(esi + eax));
/* eaaf47: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* eaaf4a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* eaaf4c: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* eaaf4f: mov edi, dword ptr [eax + esi - 4] */
  edi = R32((uint32_t)(eax + esi + 0xfffffffcu));
/* eaaf53: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* eaaf56: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* eaaf59: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf5b: mov ebx, eax */
  ebx = eax;
/* eaaf5d: and ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eaaf5f: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eaaf61: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* eaaf64: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf66: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eaaf68: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* eaaf6b: and edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf6d: lea ebx, [ebx + edi + 0x20002] */
  ebx = (uint32_t)(ebx + edi + 0x20002u);
/* eaaf74: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* eaaf77: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eaaf79: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf7b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eaaf7d: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* eaaf80: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf82: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eaaf84: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* eaaf87: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* eaaf89: lea eax, [eax + edi + 0x200] */
  eax = (uint32_t)(eax + edi + 0x200u);
/* eaaf90: and eax, 0x3fc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fc00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eaaf95: and ebx, 0x3fc03fc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fc03fcu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eaaf9b: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* eaaf9d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* eaafa0: add dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eaafa4: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* eaafa7: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eaafaa: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* eaafad: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* eaafaf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* eaafb2: jne 0xeaaf44 */
  if (!zf) goto L_eaaf44;
L_eaafb4: /* eaafb4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_eaafb7: /* eaafb7: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* eaafba: add dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eaafbd: lea esi, [eax + eax] */
  esi = (uint32_t)(eax + eax);
/* eaafc0: add dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* eaafc3: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* eaafc5: cmp edi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eaafc8: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* eaafcb: jb 0xeaaf25 */
  if (cf) goto L_eaaf25;
L_eaafd1: /* eaafd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eaafd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_eaafd3: /* eaafd3: xor eax, eax */
  eax = 0;
/* eaafd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eaafd6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaafd7: ret  */
  esp += 4; SPILL(); return;
}

void f_eaafd8(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaafd8: /* eaafd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eaafd9: mov ebp, esp */
  ebp = esp;
/* eaafdb: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eaafde: test byte ptr [ebp + 0x10], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* eaafe2: je 0xeab000 */
  if (zf) goto L_eab000;
L_eaafe4: /* eaafe4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* eaafe7: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* eaafea: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* eaafed: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* eaaff0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eaaff3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eaaff6: call 0xeaadca */
  esp -= 4; W32(esp, 0xeaaffbu); SPILL(); f_eaadca(); if (g_unwind) return; RELOAD();
/* eaaffb: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eaaffe: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eaafff: ret  */
  esp += 4; SPILL(); return;
L_eab000: /* eab000: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* eab003: imul eax, dword ptr [ebp + 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x18u)));
  eax = (uint32_t)r;
  }
/* eab007: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab00a: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* eab00e: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* eab012: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eab013: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* eab016: mov eax, 0x20002 */
  eax = 0x20002u;
/* eab01b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eab01c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eab01d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eab020: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* eab023: emms  */
/* eab025: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eab028: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab02b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* eab02e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eab031: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* eab034: movq mm4, qword ptr [ebp - 0x1c] */
  MMX[4] = R64((uint32_t)(ebp + 0xffffffe4u));
/* eab038: pxor mm6, mm6 */
  guest_unsupported(0xeab038); /* pxor mm6, mm6 */
/* eab03b: cmp eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eab03e: jge 0xeab0e5 */
  if ((sf == of)) goto L_eab0e5;
L_eab044: /* eab044: mov edi, eax */
  edi = eax;
/* eab046: mov esi, eax */
  esi = eax;
/* eab048: add esi, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eab04b: mov ebx, edi */
  ebx = edi;
/* eab04d: add ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eab050: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* eab053: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* eab056: mov eax, edx */
  eax = edx;
/* eab058: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eab05a: jge 0xeab0cd */
  if ((sf == of)) goto L_eab0cd;
L_eab05c: /* eab05c: movq mm0, qword ptr [edi] */
  MMX[0] = R64((uint32_t)(edi));
/* eab05f: movq mm2, qword ptr [esi] */
  MMX[2] = R64((uint32_t)(esi));
/* eab062: movq mm4, qword ptr [edi + 8] */
  MMX[4] = R64((uint32_t)(edi + 0x8u));
/* eab066: movq mm6, qword ptr [esi + 8] */
  MMX[6] = R64((uint32_t)(esi + 0x8u));
/* eab06a: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab06d: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eab070: movq mm5, mm4 */
  MMX[5] = MMX[4];
/* eab073: movq mm7, mm6 */
  MMX[7] = MMX[6];
/* eab076: punpcklbw mm0, dword ptr [ebp - 0x14] */
  guest_unsupported(0xeab076); /* punpcklbw mm0, dword ptr [ebp - 0x14] */
/* eab07a: punpckhbw mm1, qword ptr [ebp - 0x14] */
  guest_unsupported(0xeab07a); /* punpckhbw mm1, qword ptr [ebp - 0x14] */
/* eab07e: punpcklbw mm2, dword ptr [ebp - 0x14] */
  guest_unsupported(0xeab07e); /* punpcklbw mm2, dword ptr [ebp - 0x14] */
/* eab082: punpckhbw mm3, qword ptr [ebp - 0x14] */
  guest_unsupported(0xeab082); /* punpckhbw mm3, qword ptr [ebp - 0x14] */
/* eab086: punpcklbw mm4, dword ptr [ebp - 0x14] */
  guest_unsupported(0xeab086); /* punpcklbw mm4, dword ptr [ebp - 0x14] */
/* eab08a: punpckhbw mm5, qword ptr [ebp - 0x14] */
  guest_unsupported(0xeab08a); /* punpckhbw mm5, qword ptr [ebp - 0x14] */
/* eab08e: punpcklbw mm6, dword ptr [ebp - 0x14] */
  guest_unsupported(0xeab08e); /* punpcklbw mm6, dword ptr [ebp - 0x14] */
/* eab092: punpckhbw mm7, qword ptr [ebp - 0x14] */
  guest_unsupported(0xeab092); /* punpckhbw mm7, qword ptr [ebp - 0x14] */
/* eab096: mov ecx, eax */
  ecx = eax;
/* eab098: paddw mm0, mm1 */
  guest_unsupported(0xeab098); /* paddw mm0, mm1 */
/* eab09b: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* eab09e: paddw mm4, mm5 */
  guest_unsupported(0xeab09e); /* paddw mm4, mm5 */
/* eab0a1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eab0a4: paddw mm0, mm2 */
  guest_unsupported(0xeab0a4); /* paddw mm0, mm2 */
/* eab0a7: paddw mm4, mm6 */
  guest_unsupported(0xeab0a7); /* paddw mm4, mm6 */
/* eab0aa: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab0ad: paddw mm0, mm3 */
  guest_unsupported(0xeab0ad); /* paddw mm0, mm3 */
/* eab0b0: paddw mm4, mm7 */
  guest_unsupported(0xeab0b0); /* paddw mm4, mm7 */
/* eab0b3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eab0b5: paddw mm0, qword ptr [ebp - 0x1c] */
  guest_unsupported(0xeab0b5); /* paddw mm0, qword ptr [ebp - 0x1c] */
/* eab0b9: paddw mm4, qword ptr [ebp - 0x1c] */
  guest_unsupported(0xeab0b9); /* paddw mm4, qword ptr [ebp - 0x1c] */
/* eab0bd: psraw mm0, 2 */
  guest_unsupported(0xeab0bd); /* psraw mm0, 2 */
/* eab0c1: psraw mm4, 2 */
  guest_unsupported(0xeab0c1); /* psraw mm4, 2 */
/* eab0c5: packuswb mm0, mm4 */
  guest_unsupported(0xeab0c5); /* packuswb mm0, mm4 */
/* eab0c8: movq qword ptr [ecx], mm0 */
  W64((uint32_t)(ecx), MMX[0]);
/* eab0cb: jl 0xeab05c */
  if ((sf != of)) goto L_eab05c;
L_eab0cd: /* eab0cd: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* eab0d0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* eab0d3: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab0d6: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab0d9: add edx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* eab0dc: cmp eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eab0df: jl 0xeab044 */
  if ((sf != of)) goto L_eab044;
L_eab0e5: /* eab0e5: emms  */
/* eab0e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eab0e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eab0e9: xor eax, eax */
  eax = 0;
/* eab0eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eab0ec: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eab0ed: ret  */
  esp += 4; SPILL(); return;
}

void f_eab0ee(void) {
  LOAD_REGS();
L_eab0ee: /* eab0ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eab0ef: mov ebp, esp */
  ebp = esp;
/* eab0f1: call 0xe9e9d2 */
  esp -= 4; W32(esp, 0xeab0f6u); SPILL(); f_e9e9d2(); if (g_unwind) return; RELOAD();
/* eab0f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eab0f8: je 0xeab10b */
  if (zf) goto L_eab10b;
L_eab0fa: /* eab0fa: mov eax, 0xeaafd8 */
  eax = 0xeaafd8u;
/* eab0ff: mov dword ptr [0xebc2a8], eax */
  W32((uint32_t)(0xebc2a8u), eax);
/* eab104: mov dword ptr [0xebc2ac], eax */
  W32((uint32_t)(0xebc2acu), eax);
/* eab109: jmp 0xeab11f */
  goto L_eab11f;
L_eab10b: /* eab10b: mov dword ptr [0xebc2a8], 0xeaadca */
  W32((uint32_t)(0xebc2a8u), 0xeaadcau);
/* eab115: mov dword ptr [0xebc2ac], 0xeaaef0 */
  W32((uint32_t)(0xebc2acu), 0xeaaef0u);
L_eab11f: /* eab11f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eab120: jmp dword ptr [0xebc2a8] */
  { uint32_t t = R32((uint32_t)(0xebc2a8u)); SPILL(); call_ind(t); return; }
}

void f_eab126(void) {
  LOAD_REGS();
L_eab126: /* eab126: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eab127: mov ebp, esp */
  ebp = esp;
/* eab129: call 0xe9e9d2 */
  esp -= 4; W32(esp, 0xeab12eu); SPILL(); f_e9e9d2(); if (g_unwind) return; RELOAD();
/* eab12e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eab130: je 0xeab13e */
  if (zf) goto L_eab13e;
L_eab132: /* eab132: mov eax, 0xeaafd8 */
  eax = 0xeaafd8u;
/* eab137: mov dword ptr [0xebc2a8], eax */
  W32((uint32_t)(0xebc2a8u), eax);
/* eab13c: jmp 0xeab14d */
  goto L_eab14d;
L_eab13e: /* eab13e: mov dword ptr [0xebc2a8], 0xeaadca */
  W32((uint32_t)(0xebc2a8u), 0xeaadcau);
/* eab148: mov eax, 0xeaaef0 */
  eax = 0xeaaef0u;
L_eab14d: /* eab14d: mov dword ptr [0xebc2ac], eax */
  W32((uint32_t)(0xebc2acu), eax);
/* eab152: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eab153: jmp eax */
  { uint32_t t = eax; SPILL(); call_ind(t); return; }
}

void f_eab160(void) {
  LOAD_REGS();
L_eab160: /* eab160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eab161: mov ebp, esp */
  ebp = esp;
/* eab163: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eab166: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xeab166); /* movaps xmm0, xmmword ptr [eax] */
/* eab169: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* eab16c: movaps xmm1, xmm0 */
  guest_unsupported(0xeab16c); /* movaps xmm1, xmm0 */
/* eab16f: movaps xmm6, xmm0 */
  guest_unsupported(0xeab16f); /* movaps xmm6, xmm0 */
/* eab172: andps xmm0, xmmword ptr [0xebc680] */
  guest_unsupported(0xeab172); /* andps xmm0, xmmword ptr [0xebc680] */
/* eab179: andps xmm1, xmmword ptr [0xebc670] */
  guest_unsupported(0xeab179); /* andps xmm1, xmmword ptr [0xebc670] */
/* eab180: movaps xmm2, xmm0 */
  guest_unsupported(0xeab180); /* movaps xmm2, xmm0 */
/* eab183: movaps xmm7, xmm0 */
  guest_unsupported(0xeab183); /* movaps xmm7, xmm0 */
/* eab186: mulps xmm0, xmmword ptr [0xebc660] */
  guest_unsupported(0xeab186); /* mulps xmm0, xmmword ptr [0xebc660] */
/* eab18d: movaps xmm4, xmmword ptr [0xebc650] */
  guest_unsupported(0xeab18d); /* movaps xmm4, xmmword ptr [0xebc650] */
/* eab194: movaps xmm5, xmmword ptr [0xebc640] */
  guest_unsupported(0xeab194); /* movaps xmm5, xmmword ptr [0xebc640] */
/* eab19b: mov edx, esp */
  edx = esp;
/* eab19d: add edx, -0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* eab1a0: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* eab1a3: movaps xmm6, xmmword ptr [0xebc630] */
  guest_unsupported(0xeab1a3); /* movaps xmm6, xmmword ptr [0xebc630] */
/* eab1aa: movaps xmm7, xmmword ptr [0xebc620] */
  guest_unsupported(0xeab1aa); /* movaps xmm7, xmmword ptr [0xebc620] */
/* eab1b1: addps xmm0, xmmword ptr [0xebc610] */
  guest_unsupported(0xeab1b1); /* addps xmm0, xmmword ptr [0xebc610] */
/* eab1b8: movaps xmm3, xmm0 */
  guest_unsupported(0xeab1b8); /* movaps xmm3, xmm0 */
/* eab1bb: subps xmm0, xmmword ptr [0xebc610] */
  guest_unsupported(0xeab1bb); /* subps xmm0, xmmword ptr [0xebc610] */
/* eab1c2: mulps xmm4, xmm0 */
  guest_unsupported(0xeab1c2); /* mulps xmm4, xmm0 */
/* eab1c5: mulps xmm5, xmm0 */
  guest_unsupported(0xeab1c5); /* mulps xmm5, xmm0 */
/* eab1c8: mulps xmm6, xmm0 */
  guest_unsupported(0xeab1c8); /* mulps xmm6, xmm0 */
/* eab1cb: mulps xmm7, xmm0 */
  guest_unsupported(0xeab1cb); /* mulps xmm7, xmm0 */
/* eab1ce: subps xmm2, xmm4 */
  guest_unsupported(0xeab1ce); /* subps xmm2, xmm4 */
/* eab1d1: subps xmm2, xmm5 */
  guest_unsupported(0xeab1d1); /* subps xmm2, xmm5 */
/* eab1d4: movaps xmm5, xmmword ptr [0xebc600] */
  guest_unsupported(0xeab1d4); /* movaps xmm5, xmmword ptr [0xebc600] */
/* eab1db: subps xmm2, xmm6 */
  guest_unsupported(0xeab1db); /* subps xmm2, xmm6 */
/* eab1de: movaps xmm6, xmmword ptr [0xebc5f0] */
  guest_unsupported(0xeab1de); /* movaps xmm6, xmmword ptr [0xebc5f0] */
/* eab1e5: subps xmm2, xmm7 */
  guest_unsupported(0xeab1e5); /* subps xmm2, xmm7 */
/* eab1e8: movaps xmm4, xmm2 */
  guest_unsupported(0xeab1e8); /* movaps xmm4, xmm2 */
/* eab1eb: mulps xmm4, xmm4 */
  guest_unsupported(0xeab1eb); /* mulps xmm4, xmm4 */
/* eab1ee: andps xmm3, xmmword ptr [0xebc5e0] */
  guest_unsupported(0xeab1ee); /* andps xmm3, xmmword ptr [0xebc5e0] */
/* eab1f5: movaps xmm0, xmm3 */
  guest_unsupported(0xeab1f5); /* movaps xmm0, xmm3 */
/* eab1f8: movaps xmm7, xmm3 */
  guest_unsupported(0xeab1f8); /* movaps xmm7, xmm3 */
/* eab1fb: andps xmm0, xmmword ptr [0xebc5d0] */
  guest_unsupported(0xeab1fb); /* andps xmm0, xmmword ptr [0xebc5d0] */
/* eab202: movaps xmmword ptr [edx], xmm0 */
  guest_unsupported(0xeab202); /* movaps xmmword ptr [edx], xmm0 */
/* eab205: movaps xmmword ptr [edx + 0x10], xmm3 */
  guest_unsupported(0xeab205); /* movaps xmmword ptr [edx + 0x10], xmm3 */
/* eab209: movaps xmmword ptr [edx + 0x20], xmm7 */
  guest_unsupported(0xeab209); /* movaps xmmword ptr [edx + 0x20], xmm7 */
/* eab20d: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* eab210: sub eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eab212: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab218: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab21b: mov dword ptr [edx + 0x10], eax */
  W32((uint32_t)(edx + 0x10u), eax);
/* eab21e: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* eab221: sub eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eab224: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab22a: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab22d: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* eab230: mov eax, dword ptr [edx + 0x18] */
  eax = R32((uint32_t)(edx + 0x18u));
/* eab233: sub eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eab236: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab23c: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab23f: mov dword ptr [edx + 0x18], eax */
  W32((uint32_t)(edx + 0x18u), eax);
/* eab242: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* eab245: sub eax, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eab248: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab24e: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab251: mov dword ptr [edx + 0x1c], eax */
  W32((uint32_t)(edx + 0x1cu), eax);
/* eab254: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* eab257: add eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab259: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab25f: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab262: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* eab265: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* eab268: add eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab26b: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab271: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab274: mov dword ptr [edx + 0x24], eax */
  W32((uint32_t)(edx + 0x24u), eax);
/* eab277: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* eab27a: add eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab27d: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab283: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab286: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* eab289: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* eab28c: add eax, dword ptr [edx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eab28f: and eax, dword ptr [0xebc5c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebc5c0u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eab295: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab298: mov dword ptr [edx + 0x2c], eax */
  W32((uint32_t)(edx + 0x2cu), eax);
/* eab29b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* eab29d: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab2a0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* eab2a2: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* eab2a5: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab2a8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* eab2ab: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* eab2ae: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab2b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* eab2b4: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* eab2b7: shl eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 30;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* eab2ba: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* eab2bd: movaps xmm3, xmmword ptr [edx + 0x10] */
  guest_unsupported(0xeab2bd); /* movaps xmm3, xmmword ptr [edx + 0x10] */
/* eab2c1: movaps xmm7, xmmword ptr [edx + 0x20] */
  guest_unsupported(0xeab2c1); /* movaps xmm7, xmmword ptr [edx + 0x20] */
/* eab2c5: movaps xmm0, xmmword ptr [edx] */
  guest_unsupported(0xeab2c5); /* movaps xmm0, xmmword ptr [edx] */
/* eab2c8: xorps xmm3, xmm1 */
  guest_unsupported(0xeab2c8); /* xorps xmm3, xmm1 */
/* eab2cb: xorps xmm1, xmm1 */
  guest_unsupported(0xeab2cb); /* xorps xmm1, xmm1 */
/* eab2ce: cmpneqps xmm0, xmm1 */
  guest_unsupported(0xeab2ce); /* cmpneqps xmm0, xmm1 */
/* eab2d2: mulps xmm5, xmm4 */
  guest_unsupported(0xeab2d2); /* mulps xmm5, xmm4 */
/* eab2d5: mulps xmm6, xmm4 */
  guest_unsupported(0xeab2d5); /* mulps xmm6, xmm4 */
/* eab2d8: addps xmm5, xmmword ptr [0xebc5b0] */
  guest_unsupported(0xeab2d8); /* addps xmm5, xmmword ptr [0xebc5b0] */
/* eab2df: addps xmm6, xmmword ptr [0xebc5a0] */
  guest_unsupported(0xeab2df); /* addps xmm6, xmmword ptr [0xebc5a0] */
/* eab2e6: mulps xmm5, xmm4 */
  guest_unsupported(0xeab2e6); /* mulps xmm5, xmm4 */
/* eab2e9: mulps xmm6, xmm4 */
  guest_unsupported(0xeab2e9); /* mulps xmm6, xmm4 */
/* eab2ec: addps xmm5, xmmword ptr [0xebc590] */
  guest_unsupported(0xeab2ec); /* addps xmm5, xmmword ptr [0xebc590] */
/* eab2f3: addps xmm6, xmmword ptr [0xebc580] */
  guest_unsupported(0xeab2f3); /* addps xmm6, xmmword ptr [0xebc580] */
/* eab2fa: mulps xmm5, xmm4 */
  guest_unsupported(0xeab2fa); /* mulps xmm5, xmm4 */
/* eab2fd: mulps xmm6, xmm4 */
  guest_unsupported(0xeab2fd); /* mulps xmm6, xmm4 */
/* eab300: addps xmm5, xmmword ptr [0xebc570] */
  guest_unsupported(0xeab300); /* addps xmm5, xmmword ptr [0xebc570] */
/* eab307: addps xmm6, xmmword ptr [0xebc560] */
  guest_unsupported(0xeab307); /* addps xmm6, xmmword ptr [0xebc560] */
/* eab30e: mulps xmm5, xmm2 */
  guest_unsupported(0xeab30e); /* mulps xmm5, xmm2 */
/* eab311: mulps xmm6, xmm4 */
  guest_unsupported(0xeab311); /* mulps xmm6, xmm4 */
/* eab314: addps xmm6, xmmword ptr [0xebc550] */
  guest_unsupported(0xeab314); /* addps xmm6, xmmword ptr [0xebc550] */
/* eab31b: movaps xmm1, xmm0 */
  guest_unsupported(0xeab31b); /* movaps xmm1, xmm0 */
/* eab31e: movaps xmm2, xmm0 */
  guest_unsupported(0xeab31e); /* movaps xmm2, xmm0 */
/* eab321: andnps xmm1, xmm5 */
  guest_unsupported(0xeab321); /* andnps xmm1, xmm5 */
/* eab324: andps xmm2, xmm6 */
  guest_unsupported(0xeab324); /* andps xmm2, xmm6 */
/* eab327: orps xmm1, xmm2 */
  guest_unsupported(0xeab327); /* orps xmm1, xmm2 */
/* eab32a: movaps xmm2, xmm0 */
  guest_unsupported(0xeab32a); /* movaps xmm2, xmm0 */
/* eab32d: andps xmm0, xmm5 */
  guest_unsupported(0xeab32d); /* andps xmm0, xmm5 */
/* eab330: andnps xmm2, xmm6 */
  guest_unsupported(0xeab330); /* andnps xmm2, xmm6 */
/* eab333: orps xmm0, xmm2 */
  guest_unsupported(0xeab333); /* orps xmm0, xmm2 */
/* eab336: xorps xmm0, xmm7 */
  guest_unsupported(0xeab336); /* xorps xmm0, xmm7 */
/* eab339: xorps xmm1, xmm3 */
  guest_unsupported(0xeab339); /* xorps xmm1, xmm3 */
/* eab33c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eab33f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* eab342: movaps xmmword ptr [eax], xmm1 */
  guest_unsupported(0xeab342); /* movaps xmmword ptr [eax], xmm1 */
/* eab345: movaps xmmword ptr [edx], xmm0 */
  guest_unsupported(0xeab345); /* movaps xmmword ptr [edx], xmm0 */
/* eab348: mov esp, ebp */
  esp = ebp;
/* eab34a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eab34b: ret  */
  esp += 4; SPILL(); return;
}

void f_eab34c(void) {
  LOAD_REGS();
L_eab34c: /* eab34c: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_eab350(); return;
}

void f_eab350(void) {
  LOAD_REGS();
L_eab350: /* eab350: movaps xmm1, xmm0 */
  guest_unsupported(0xeab350); /* movaps xmm1, xmm0 */
/* eab353: pand xmm0, xmmword ptr [0xebc760] */
  guest_unsupported(0xeab353); /* pand xmm0, xmmword ptr [0xebc760] */
/* eab35b: pand xmm1, xmmword ptr [0xebc750] */
  guest_unsupported(0xeab35b); /* pand xmm1, xmmword ptr [0xebc750] */
/* eab363: movaps xmm2, xmm0 */
  guest_unsupported(0xeab363); /* movaps xmm2, xmm0 */
/* eab366: mulps xmm0, xmmword ptr [0xebc740] */
  guest_unsupported(0xeab366); /* mulps xmm0, xmmword ptr [0xebc740] */
/* eab36d: movaps xmm4, xmmword ptr [0xebc730] */
  guest_unsupported(0xeab36d); /* movaps xmm4, xmmword ptr [0xebc730] */
/* eab374: addps xmm0, xmmword ptr [0xebc720] */
  guest_unsupported(0xeab374); /* addps xmm0, xmmword ptr [0xebc720] */
/* eab37b: movaps xmm3, xmm0 */
  guest_unsupported(0xeab37b); /* movaps xmm3, xmm0 */
/* eab37e: subps xmm0, xmmword ptr [0xebc720] */
  guest_unsupported(0xeab37e); /* subps xmm0, xmmword ptr [0xebc720] */
/* eab385: mulps xmm4, xmm0 */
  guest_unsupported(0xeab385); /* mulps xmm4, xmm0 */
/* eab388: subps xmm2, xmm4 */
  guest_unsupported(0xeab388); /* subps xmm2, xmm4 */
/* eab38b: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xeab38b); /* shufps xmm4, xmm4, 0x39 */
/* eab38f: subps xmm2, xmm4 */
  guest_unsupported(0xeab38f); /* subps xmm2, xmm4 */
/* eab392: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xeab392); /* shufps xmm4, xmm4, 0x39 */
/* eab396: subps xmm2, xmm4 */
  guest_unsupported(0xeab396); /* subps xmm2, xmm4 */
/* eab399: shufps xmm4, xmm4, 0x39 */
  guest_unsupported(0xeab399); /* shufps xmm4, xmm4, 0x39 */
/* eab39d: subps xmm2, xmm4 */
  guest_unsupported(0xeab39d); /* subps xmm2, xmm4 */
/* eab3a0: movaps xmm4, xmm2 */
  guest_unsupported(0xeab3a0); /* movaps xmm4, xmm2 */
/* eab3a3: mulps xmm4, xmm4 */
  guest_unsupported(0xeab3a3); /* mulps xmm4, xmm4 */
/* eab3a6: andps xmm3, xmmword ptr [0xebc710] */
  guest_unsupported(0xeab3a6); /* andps xmm3, xmmword ptr [0xebc710] */
/* eab3ad: movaps xmm0, xmm3 */
  guest_unsupported(0xeab3ad); /* movaps xmm0, xmm3 */
/* eab3b0: movaps xmm7, xmm3 */
  guest_unsupported(0xeab3b0); /* movaps xmm7, xmm3 */
/* eab3b3: andps xmm0, xmmword ptr [0xebc700] */
  guest_unsupported(0xeab3b3); /* andps xmm0, xmmword ptr [0xebc700] */
/* eab3ba: psubd xmm3, xmm0 */
  guest_unsupported(0xeab3ba); /* psubd xmm3, xmm0 */
/* eab3be: paddd xmm7, xmm0 */
  guest_unsupported(0xeab3be); /* paddd xmm7, xmm0 */
/* eab3c2: pand xmm3, xmmword ptr [0xebc6f0] */
  guest_unsupported(0xeab3c2); /* pand xmm3, xmmword ptr [0xebc6f0] */
/* eab3ca: pand xmm7, xmmword ptr [0xebc6f0] */
  guest_unsupported(0xeab3ca); /* pand xmm7, xmmword ptr [0xebc6f0] */
/* eab3d2: pslld xmm3, 0x1e */
  guest_unsupported(0xeab3d2); /* pslld xmm3, 0x1e */
/* eab3d7: pslld xmm7, 0x1e */
  guest_unsupported(0xeab3d7); /* pslld xmm7, 0x1e */
/* eab3dc: pxor xmm3, xmm1 */
  guest_unsupported(0xeab3dc); /* pxor xmm3, xmm1 */
/* eab3e0: pslld xmm0, 0x1e */
  guest_unsupported(0xeab3e0); /* pslld xmm0, 0x1e */
/* eab3e5: pxor xmm1, xmm1 */
  guest_unsupported(0xeab3e5); /* pxor xmm1, xmm1 */
/* eab3e9: cmpneqps xmm0, xmm1 */
  guest_unsupported(0xeab3e9); /* cmpneqps xmm0, xmm1 */
/* eab3ed: movaps xmm5, xmmword ptr [0xebc6e0] */
  guest_unsupported(0xeab3ed); /* movaps xmm5, xmmword ptr [0xebc6e0] */
/* eab3f4: mulps xmm5, xmm4 */
  guest_unsupported(0xeab3f4); /* mulps xmm5, xmm4 */
/* eab3f7: addps xmm5, xmmword ptr [0xebc6d0] */
  guest_unsupported(0xeab3f7); /* addps xmm5, xmmword ptr [0xebc6d0] */
/* eab3fe: mulps xmm5, xmm4 */
  guest_unsupported(0xeab3fe); /* mulps xmm5, xmm4 */
/* eab401: addps xmm5, xmmword ptr [0xebc6c0] */
  guest_unsupported(0xeab401); /* addps xmm5, xmmword ptr [0xebc6c0] */
/* eab408: mulps xmm5, xmm4 */
  guest_unsupported(0xeab408); /* mulps xmm5, xmm4 */
/* eab40b: addps xmm5, xmmword ptr [0xebc6b0] */
  guest_unsupported(0xeab40b); /* addps xmm5, xmmword ptr [0xebc6b0] */
/* eab412: unpcklps xmm2, xmm4 */
  guest_unsupported(0xeab412); /* unpcklps xmm2, xmm4 */
/* eab415: mulps xmm5, xmm2 */
  guest_unsupported(0xeab415); /* mulps xmm5, xmm2 */
/* eab418: addps xmm5, xmmword ptr [0xebc6a0] */
  guest_unsupported(0xeab418); /* addps xmm5, xmmword ptr [0xebc6a0] */
/* eab41f: movaps xmm2, xmm0 */
  guest_unsupported(0xeab41f); /* movaps xmm2, xmm0 */
/* eab422: andps xmm0, xmm5 */
  guest_unsupported(0xeab422); /* andps xmm0, xmm5 */
/* eab425: andnps xmm2, xmm5 */
  guest_unsupported(0xeab425); /* andnps xmm2, xmm5 */
/* eab428: shufps xmm2, xmm2, 0xb1 */
  guest_unsupported(0xeab428); /* shufps xmm2, xmm2, 0xb1 */
/* eab42c: orps xmm0, xmm2 */
  guest_unsupported(0xeab42c); /* orps xmm0, xmm2 */
/* eab42f: unpcklps xmm7, xmm3 */
  guest_unsupported(0xeab42f); /* unpcklps xmm7, xmm3 */
/* eab432: xorps xmm0, xmm7 */
  guest_unsupported(0xeab432); /* xorps xmm0, xmm7 */
/* eab435: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eab439(void) {
  LOAD_REGS();
L_eab439: /* eab439: lea esi, [esi] */
  esi = (uint32_t)(esi);
  SPILL(); f_eab440(); return;
}

void f_eab440(void) {
  LOAD_REGS();
L_eab440: /* eab440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eab441: mov ebp, esp */
  ebp = esp;
/* eab443: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eab446: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0xeab446); /* movaps xmm0, xmmword ptr [eax] */
/* eab449: lea esi, [esi] */
  esi = (uint32_t)(esi);
/* eab44c: movaps xmm1, xmm0 */
  guest_unsupported(0xeab44c); /* movaps xmm1, xmm0 */
/* eab44f: movaps xmm6, xmm0 */
  guest_unsupported(0xeab44f); /* movaps xmm6, xmm0 */
/* eab452: pand xmm0, xmmword ptr [0xebc8a0] */
  guest_unsupported(0xeab452); /* pand xmm0, xmmword ptr [0xebc8a0] */
/* eab45a: pand xmm1, xmmword ptr [0xebc890] */
  guest_unsupported(0xeab45a); /* pand xmm1, xmmword ptr [0xebc890] */
/* eab462: movaps xmm2, xmm0 */
  guest_unsupported(0xeab462); /* movaps xmm2, xmm0 */
/* eab465: movaps xmm7, xmm0 */
  guest_unsupported(0xeab465); /* movaps xmm7, xmm0 */
/* eab468: mulps xmm0, xmmword ptr [0xebc880] */
  guest_unsupported(0xeab468); /* mulps xmm0, xmmword ptr [0xebc880] */
/* eab46f: movaps xmm4, xmmword ptr [0xebc870] */
  guest_unsupported(0xeab46f); /* movaps xmm4, xmmword ptr [0xebc870] */
/* eab476: movaps xmm5, xmmword ptr [0xebc860] */
  guest_unsupported(0xeab476); /* movaps xmm5, xmmword ptr [0xebc860] */
/* eab47d: movaps xmm6, xmmword ptr [0xebc850] */
  guest_unsupported(0xeab47d); /* movaps xmm6, xmmword ptr [0xebc850] */
/* eab484: movaps xmm7, xmmword ptr [0xebc840] */
  guest_unsupported(0xeab484); /* movaps xmm7, xmmword ptr [0xebc840] */
/* eab48b: addps xmm0, xmmword ptr [0xebc830] */
  guest_unsupported(0xeab48b); /* addps xmm0, xmmword ptr [0xebc830] */
/* eab492: movaps xmm3, xmm0 */
  guest_unsupported(0xeab492); /* movaps xmm3, xmm0 */
/* eab495: subps xmm0, xmmword ptr [0xebc830] */
  guest_unsupported(0xeab495); /* subps xmm0, xmmword ptr [0xebc830] */
/* eab49c: mulps xmm4, xmm0 */
  guest_unsupported(0xeab49c); /* mulps xmm4, xmm0 */
/* eab49f: mulps xmm5, xmm0 */
  guest_unsupported(0xeab49f); /* mulps xmm5, xmm0 */
/* eab4a2: mulps xmm6, xmm0 */
  guest_unsupported(0xeab4a2); /* mulps xmm6, xmm0 */
/* eab4a5: mulps xmm7, xmm0 */
  guest_unsupported(0xeab4a5); /* mulps xmm7, xmm0 */
/* eab4a8: subps xmm2, xmm4 */
  guest_unsupported(0xeab4a8); /* subps xmm2, xmm4 */
/* eab4ab: subps xmm2, xmm5 */
  guest_unsupported(0xeab4ab); /* subps xmm2, xmm5 */
/* eab4ae: movaps xmm5, xmmword ptr [0xebc820] */
  guest_unsupported(0xeab4ae); /* movaps xmm5, xmmword ptr [0xebc820] */
/* eab4b5: subps xmm2, xmm6 */
  guest_unsupported(0xeab4b5); /* subps xmm2, xmm6 */
/* eab4b8: movaps xmm6, xmmword ptr [0xebc810] */
  guest_unsupported(0xeab4b8); /* movaps xmm6, xmmword ptr [0xebc810] */
/* eab4bf: subps xmm2, xmm7 */
  guest_unsupported(0xeab4bf); /* subps xmm2, xmm7 */
/* eab4c2: movaps xmm4, xmm2 */
  guest_unsupported(0xeab4c2); /* movaps xmm4, xmm2 */
/* eab4c5: mulps xmm4, xmm4 */
  guest_unsupported(0xeab4c5); /* mulps xmm4, xmm4 */
/* eab4c8: andps xmm3, xmmword ptr [0xebc800] */
  guest_unsupported(0xeab4c8); /* andps xmm3, xmmword ptr [0xebc800] */
/* eab4cf: movaps xmm0, xmm3 */
  guest_unsupported(0xeab4cf); /* movaps xmm0, xmm3 */
/* eab4d2: movaps xmm7, xmm3 */
  guest_unsupported(0xeab4d2); /* movaps xmm7, xmm3 */
/* eab4d5: andps xmm0, xmmword ptr [0xebc7f0] */
  guest_unsupported(0xeab4d5); /* andps xmm0, xmmword ptr [0xebc7f0] */
/* eab4dc: psubd xmm3, xmm0 */
  guest_unsupported(0xeab4dc); /* psubd xmm3, xmm0 */
/* eab4e0: paddd xmm7, xmm0 */
  guest_unsupported(0xeab4e0); /* paddd xmm7, xmm0 */
/* eab4e4: pand xmm3, xmmword ptr [0xebc7e0] */
  guest_unsupported(0xeab4e4); /* pand xmm3, xmmword ptr [0xebc7e0] */
/* eab4ec: pand xmm7, xmmword ptr [0xebc7e0] */
  guest_unsupported(0xeab4ec); /* pand xmm7, xmmword ptr [0xebc7e0] */
/* eab4f4: pslld xmm3, 0x1e */
  guest_unsupported(0xeab4f4); /* pslld xmm3, 0x1e */
/* eab4f9: pslld xmm7, 0x1e */
  guest_unsupported(0xeab4f9); /* pslld xmm7, 0x1e */
/* eab4fe: pxor xmm3, xmm1 */
  guest_unsupported(0xeab4fe); /* pxor xmm3, xmm1 */
/* eab502: pslld xmm0, 0x1e */
  guest_unsupported(0xeab502); /* pslld xmm0, 0x1e */
/* eab507: pxor xmm1, xmm1 */
  guest_unsupported(0xeab507); /* pxor xmm1, xmm1 */
/* eab50b: cmpneqps xmm0, xmm1 */
  guest_unsupported(0xeab50b); /* cmpneqps xmm0, xmm1 */
/* eab50f: mulps xmm5, xmm4 */
  guest_unsupported(0xeab50f); /* mulps xmm5, xmm4 */
/* eab512: mulps xmm6, xmm4 */
  guest_unsupported(0xeab512); /* mulps xmm6, xmm4 */
/* eab515: addps xmm5, xmmword ptr [0xebc7d0] */
  guest_unsupported(0xeab515); /* addps xmm5, xmmword ptr [0xebc7d0] */
/* eab51c: addps xmm6, xmmword ptr [0xebc7c0] */
  guest_unsupported(0xeab51c); /* addps xmm6, xmmword ptr [0xebc7c0] */
/* eab523: mulps xmm5, xmm4 */
  guest_unsupported(0xeab523); /* mulps xmm5, xmm4 */
/* eab526: mulps xmm6, xmm4 */
  guest_unsupported(0xeab526); /* mulps xmm6, xmm4 */
/* eab529: addps xmm5, xmmword ptr [0xebc7b0] */
  guest_unsupported(0xeab529); /* addps xmm5, xmmword ptr [0xebc7b0] */
/* eab530: addps xmm6, xmmword ptr [0xebc7a0] */
  guest_unsupported(0xeab530); /* addps xmm6, xmmword ptr [0xebc7a0] */
/* eab537: mulps xmm5, xmm4 */
  guest_unsupported(0xeab537); /* mulps xmm5, xmm4 */
/* eab53a: mulps xmm6, xmm4 */
  guest_unsupported(0xeab53a); /* mulps xmm6, xmm4 */
/* eab53d: addps xmm5, xmmword ptr [0xebc790] */
  guest_unsupported(0xeab53d); /* addps xmm5, xmmword ptr [0xebc790] */
/* eab544: addps xmm6, xmmword ptr [0xebc780] */
  guest_unsupported(0xeab544); /* addps xmm6, xmmword ptr [0xebc780] */
/* eab54b: mulps xmm5, xmm2 */
  guest_unsupported(0xeab54b); /* mulps xmm5, xmm2 */
/* eab54e: mulps xmm6, xmm4 */
  guest_unsupported(0xeab54e); /* mulps xmm6, xmm4 */
/* eab551: addps xmm6, xmmword ptr [0xebc770] */
  guest_unsupported(0xeab551); /* addps xmm6, xmmword ptr [0xebc770] */
/* eab558: movaps xmm1, xmm0 */
  guest_unsupported(0xeab558); /* movaps xmm1, xmm0 */
/* eab55b: movaps xmm2, xmm0 */
  guest_unsupported(0xeab55b); /* movaps xmm2, xmm0 */
/* eab55e: andnps xmm1, xmm5 */
  guest_unsupported(0xeab55e); /* andnps xmm1, xmm5 */
/* eab561: andps xmm2, xmm6 */
  guest_unsupported(0xeab561); /* andps xmm2, xmm6 */
/* eab564: orps xmm1, xmm2 */
  guest_unsupported(0xeab564); /* orps xmm1, xmm2 */
/* eab567: movaps xmm2, xmm0 */
  guest_unsupported(0xeab567); /* movaps xmm2, xmm0 */
/* eab56a: andps xmm0, xmm5 */
  guest_unsupported(0xeab56a); /* andps xmm0, xmm5 */
/* eab56d: andnps xmm2, xmm6 */
  guest_unsupported(0xeab56d); /* andnps xmm2, xmm6 */
/* eab570: orps xmm0, xmm2 */
  guest_unsupported(0xeab570); /* orps xmm0, xmm2 */
/* eab573: xorps xmm0, xmm7 */
  guest_unsupported(0xeab573); /* xorps xmm0, xmm7 */
/* eab576: xorps xmm1, xmm3 */
  guest_unsupported(0xeab576); /* xorps xmm1, xmm3 */
/* eab579: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* eab57c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* eab57f: movaps xmmword ptr [eax], xmm1 */
  guest_unsupported(0xeab57f); /* movaps xmmword ptr [eax], xmm1 */
/* eab582: movaps xmmword ptr [edx], xmm0 */
  guest_unsupported(0xeab582); /* movaps xmmword ptr [edx], xmm0 */
/* eab585: mov esp, ebp */
  esp = ebp;
/* eab587: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eab588: ret  */
  esp += 4; SPILL(); return;
}

void f_eab5c0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eab5c0: /* eab5c0: movd mm7, dword ptr [0xebc958] */
  guest_unsupported(0xeab5c0); /* movd mm7, dword ptr [0xebc958] */
/* eab5c7: movd mm5, dword ptr [0xebc95c] */
  guest_unsupported(0xeab5c7); /* movd mm5, dword ptr [0xebc95c] */
/* eab5ce: pand mm7, mm0 */
  guest_unsupported(0xeab5ce); /* pand mm7, mm0 */
/* eab5d1: movd mm6, dword ptr [0xebc968] */
  guest_unsupported(0xeab5d1); /* movd mm6, dword ptr [0xebc968] */
/* eab5d8: pand mm0, mm5 */
  guest_unsupported(0xeab5d8); /* pand mm0, mm5 */
/* eab5db: pcmpgtd mm6, mm0 */
  guest_unsupported(0xeab5db); /* pcmpgtd mm6, mm0 */
/* eab5de: pfrcp mm2, mm0 */
  guest_unsupported(0xeab5de); /* pfrcp mm2, mm0 */
/* eab5e2: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab5e5: pfrcpit1 mm0, mm2 */
  guest_unsupported(0xeab5e5); /* pfrcpit1 mm0, mm2 */
/* eab5e9: movd mm3, dword ptr [0xebc990] */
  guest_unsupported(0xeab5e9); /* movd mm3, dword ptr [0xebc990] */
/* eab5f0: pfrcpit2 mm0, mm2 */
  guest_unsupported(0xeab5f0); /* pfrcpit2 mm0, mm2 */
/* eab5f4: movd mm4, dword ptr [0xebc99c] */
  guest_unsupported(0xeab5f4); /* movd mm4, dword ptr [0xebc99c] */
/* eab5fb: pfmin mm0, mm1 */
  guest_unsupported(0xeab5fb); /* pfmin mm0, mm1 */
/* eab5ff: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab602: pfmul mm0, mm0 */
  guest_unsupported(0xeab602); /* pfmul mm0, mm0 */
/* eab606: movd mm5, dword ptr [0xebc998] */
  guest_unsupported(0xeab606); /* movd mm5, dword ptr [0xebc998] */
/* eab60d: pfadd mm3, mm0 */
  guest_unsupported(0xeab60d); /* pfadd mm3, mm0 */
/* eab611: pfmul mm4, mm0 */
  guest_unsupported(0xeab611); /* pfmul mm4, mm0 */
/* eab615: movd mm2, dword ptr [0xebc98c] */
  guest_unsupported(0xeab615); /* movd mm2, dword ptr [0xebc98c] */
/* eab61c: pfmul mm3, mm0 */
  guest_unsupported(0xeab61c); /* pfmul mm3, mm0 */
/* eab620: pfadd mm4, mm5 */
  guest_unsupported(0xeab620); /* pfadd mm4, mm5 */
/* eab624: movd mm5, dword ptr [0xebc994] */
  guest_unsupported(0xeab624); /* movd mm5, dword ptr [0xebc994] */
/* eab62b: pfadd mm3, mm2 */
  guest_unsupported(0xeab62b); /* pfadd mm3, mm2 */
/* eab62f: pfmul mm4, mm0 */
  guest_unsupported(0xeab62f); /* pfmul mm4, mm0 */
/* eab633: movd mm2, dword ptr [0xebc988] */
  guest_unsupported(0xeab633); /* movd mm2, dword ptr [0xebc988] */
/* eab63a: pfmul mm3, mm0 */
  guest_unsupported(0xeab63a); /* pfmul mm3, mm0 */
/* eab63e: pfadd mm4, mm5 */
  guest_unsupported(0xeab63e); /* pfadd mm4, mm5 */
/* eab642: pfadd mm3, mm2 */
  guest_unsupported(0xeab642); /* pfadd mm3, mm2 */
/* eab646: pfmul mm0, mm4 */
  guest_unsupported(0xeab646); /* pfmul mm0, mm4 */
/* eab64a: pfmul mm0, mm1 */
  guest_unsupported(0xeab64a); /* pfmul mm0, mm1 */
/* eab64e: pfrcp mm5, mm3 */
  guest_unsupported(0xeab64e); /* pfrcp mm5, mm3 */
/* eab652: movd mm4, dword ptr [0xebc9b4] */
  guest_unsupported(0xeab652); /* movd mm4, dword ptr [0xebc9b4] */
/* eab659: pfrcpit1 mm3, mm5 */
  guest_unsupported(0xeab659); /* pfrcpit1 mm3, mm5 */
/* eab65d: pfrcpit2 mm3, mm5 */
  guest_unsupported(0xeab65d); /* pfrcpit2 mm3, mm5 */
/* eab661: pfmul mm0, mm3 */
  guest_unsupported(0xeab661); /* pfmul mm0, mm3 */
/* eab665: pfadd mm0, mm1 */
  guest_unsupported(0xeab665); /* pfadd mm0, mm1 */
/* eab669: pfsub mm4, mm0 */
  guest_unsupported(0xeab669); /* pfsub mm4, mm0 */
/* eab66d: pandn mm6, mm4 */
  guest_unsupported(0xeab66d); /* pandn mm6, mm4 */
/* eab670: pfmax mm0, mm6 */
  guest_unsupported(0xeab670); /* pfmax mm0, mm6 */
/* eab674: por mm0, mm7 */
  guest_unsupported(0xeab674); /* por mm0, mm7 */
/* eab677: ret  */
  esp += 4; SPILL(); return;
}

void f_eab678(void) {
  LOAD_REGS();
L_eab678: /* eab678: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab67f: nop  */
  SPILL(); f_eab680(); return;
}

void f_eab680(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eab680: /* eab680: movd mm7, dword ptr [0xebc958] */
  guest_unsupported(0xeab680); /* movd mm7, dword ptr [0xebc958] */
/* eab687: movd mm6, dword ptr [0xebc958] */
  guest_unsupported(0xeab687); /* movd mm6, dword ptr [0xebc958] */
/* eab68e: movd mm5, dword ptr [0xebc95c] */
  guest_unsupported(0xeab68e); /* movd mm5, dword ptr [0xebc95c] */
/* eab695: pand mm7, mm0 */
  guest_unsupported(0xeab695); /* pand mm7, mm0 */
/* eab698: pand mm6, mm1 */
  guest_unsupported(0xeab698); /* pand mm6, mm1 */
/* eab69b: psrld mm7, 1 */
  guest_unsupported(0xeab69b); /* psrld mm7, 1 */
/* eab69f: por mm7, mm6 */
  guest_unsupported(0xeab69f); /* por mm7, mm6 */
/* eab6a2: pand mm1, mm5 */
  guest_unsupported(0xeab6a2); /* pand mm1, mm5 */
/* eab6a5: pand mm0, mm5 */
  guest_unsupported(0xeab6a5); /* pand mm0, mm5 */
/* eab6a8: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* eab6ab: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eab6ae: pcmpgtd mm6, mm0 */
  guest_unsupported(0xeab6ae); /* pcmpgtd mm6, mm0 */
/* eab6b1: pfmax mm0, mm1 */
  guest_unsupported(0xeab6b1); /* pfmax mm0, mm1 */
/* eab6b5: pslld mm6, 0x1f */
  guest_unsupported(0xeab6b5); /* pslld mm6, 0x1f */
/* eab6b9: pfmin mm1, mm2 */
  guest_unsupported(0xeab6b9); /* pfmin mm1, mm2 */
/* eab6bd: pfrcp mm2, mm0 */
  guest_unsupported(0xeab6bd); /* pfrcp mm2, mm0 */
/* eab6c1: movd mm5, dword ptr [0xebc998] */
  guest_unsupported(0xeab6c1); /* movd mm5, dword ptr [0xebc998] */
/* eab6c8: pfrcpit1 mm0, mm2 */
  guest_unsupported(0xeab6c8); /* pfrcpit1 mm0, mm2 */
/* eab6cc: movd mm4, dword ptr [0xebc99c] */
  guest_unsupported(0xeab6cc); /* movd mm4, dword ptr [0xebc99c] */
/* eab6d3: pfrcpit2 mm0, mm2 */
  guest_unsupported(0xeab6d3); /* pfrcpit2 mm0, mm2 */
/* eab6d7: movd mm3, dword ptr [0xebc990] */
  guest_unsupported(0xeab6d7); /* movd mm3, dword ptr [0xebc990] */
/* eab6de: pfmul mm0, mm1 */
  guest_unsupported(0xeab6de); /* pfmul mm0, mm1 */
/* eab6e2: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab6e5: pfmul mm0, mm0 */
  guest_unsupported(0xeab6e5); /* pfmul mm0, mm0 */
/* eab6e9: pfadd mm3, mm0 */
  guest_unsupported(0xeab6e9); /* pfadd mm3, mm0 */
/* eab6ed: pfmul mm4, mm0 */
  guest_unsupported(0xeab6ed); /* pfmul mm4, mm0 */
/* eab6f1: movd mm2, dword ptr [0xebc98c] */
  guest_unsupported(0xeab6f1); /* movd mm2, dword ptr [0xebc98c] */
/* eab6f8: pfmul mm3, mm0 */
  guest_unsupported(0xeab6f8); /* pfmul mm3, mm0 */
/* eab6fc: pfadd mm4, mm5 */
  guest_unsupported(0xeab6fc); /* pfadd mm4, mm5 */
/* eab700: movd mm5, dword ptr [0xebc994] */
  guest_unsupported(0xeab700); /* movd mm5, dword ptr [0xebc994] */
/* eab707: pfadd mm3, mm2 */
  guest_unsupported(0xeab707); /* pfadd mm3, mm2 */
/* eab70b: pfmul mm4, mm0 */
  guest_unsupported(0xeab70b); /* pfmul mm4, mm0 */
/* eab70f: movd mm2, dword ptr [0xebc988] */
  guest_unsupported(0xeab70f); /* movd mm2, dword ptr [0xebc988] */
/* eab716: pfmul mm3, mm0 */
  guest_unsupported(0xeab716); /* pfmul mm3, mm0 */
/* eab71a: pfadd mm4, mm5 */
  guest_unsupported(0xeab71a); /* pfadd mm4, mm5 */
/* eab71e: pfadd mm3, mm2 */
  guest_unsupported(0xeab71e); /* pfadd mm3, mm2 */
/* eab722: pfmul mm0, mm4 */
  guest_unsupported(0xeab722); /* pfmul mm0, mm4 */
/* eab726: movq mm4, mm7 */
  MMX[4] = MMX[7];
/* eab729: pfmul mm0, mm1 */
  guest_unsupported(0xeab729); /* pfmul mm0, mm1 */
/* eab72d: pfrcp mm5, mm3 */
  guest_unsupported(0xeab72d); /* pfrcp mm5, mm3 */
/* eab731: pslld mm7, 1 */
  guest_unsupported(0xeab731); /* pslld mm7, 1 */
/* eab735: pfrcpit1 mm3, mm5 */
  guest_unsupported(0xeab735); /* pfrcpit1 mm3, mm5 */
/* eab739: pfrcpit2 mm3, mm5 */
  guest_unsupported(0xeab739); /* pfrcpit2 mm3, mm5 */
/* eab73d: movq mm5, mm7 */
  MMX[5] = MMX[7];
/* eab740: pxor mm7, mm6 */
  guest_unsupported(0xeab740); /* pxor mm7, mm6 */
/* eab743: pfmul mm0, mm3 */
  guest_unsupported(0xeab743); /* pfmul mm0, mm3 */
/* eab747: movd mm3, dword ptr [0xebc9b8] */
  guest_unsupported(0xeab747); /* movd mm3, dword ptr [0xebc9b8] */
/* eab74e: pxor mm5, mm3 */
  guest_unsupported(0xeab74e); /* pxor mm5, mm3 */
/* eab751: psrad mm6, 0x1f */
  guest_unsupported(0xeab751); /* psrad mm6, 0x1f */
/* eab755: pfadd mm0, mm1 */
  guest_unsupported(0xeab755); /* pfadd mm0, mm1 */
/* eab759: pandn mm6, mm5 */
  guest_unsupported(0xeab759); /* pandn mm6, mm5 */
/* eab75c: movd mm1, dword ptr [0xebc958] */
  guest_unsupported(0xeab75c); /* movd mm1, dword ptr [0xebc958] */
/* eab763: pfsub mm6, mm3 */
  guest_unsupported(0xeab763); /* pfsub mm6, mm3 */
/* eab767: por mm0, mm7 */
  guest_unsupported(0xeab767); /* por mm0, mm7 */
/* eab76a: pand mm1, mm4 */
  guest_unsupported(0xeab76a); /* pand mm1, mm4 */
/* eab76d: pfadd mm0, mm6 */
  guest_unsupported(0xeab76d); /* pfadd mm0, mm6 */
/* eab771: por mm0, mm1 */
  guest_unsupported(0xeab771); /* por mm0, mm1 */
/* eab774: ret  */
  esp += 4; SPILL(); return;
}

void f_eab775(void) {
  LOAD_REGS();
L_eab775: /* eab775: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab77c: lea esp, [esp] */
  esp = (uint32_t)(esp);
  SPILL(); f_eab780(); return;
}

void f_eab780(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eab780: /* eab780: movd mm6, dword ptr [0xebc958] */
  guest_unsupported(0xeab780); /* movd mm6, dword ptr [0xebc958] */
/* eab787: movd mm7, dword ptr [0xebc95c] */
  guest_unsupported(0xeab787); /* movd mm7, dword ptr [0xebc95c] */
/* eab78e: movd mm4, dword ptr [0xebc96c] */
  guest_unsupported(0xeab78e); /* movd mm4, dword ptr [0xebc96c] */
/* eab795: pand mm6, mm0 */
  guest_unsupported(0xeab795); /* pand mm6, mm0 */
/* eab798: movd mm5, dword ptr [0xebc968] */
  guest_unsupported(0xeab798); /* movd mm5, dword ptr [0xebc968] */
/* eab79f: pand mm0, mm7 */
  guest_unsupported(0xeab79f); /* pand mm0, mm7 */
/* eab7a2: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eab7a5: pcmpgtd mm3, mm5 */
  guest_unsupported(0xeab7a5); /* pcmpgtd mm3, mm5 */
/* eab7a8: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eab7ab: pfmul mm0, mm4 */
  guest_unsupported(0xeab7ab); /* pfmul mm0, mm4 */
/* eab7af: movd mm2, dword ptr [0xebc9a0] */
  guest_unsupported(0xeab7af); /* movd mm2, dword ptr [0xebc9a0] */
/* eab7b6: pfsubr mm0, mm4 */
  guest_unsupported(0xeab7b6); /* pfsubr mm0, mm4 */
/* eab7ba: pfrsqrt mm7, mm0 */
  guest_unsupported(0xeab7ba); /* pfrsqrt mm7, mm0 */
/* eab7be: movq mm1, mm7 */
  MMX[1] = MMX[7];
/* eab7c1: pfmul mm7, mm7 */
  guest_unsupported(0xeab7c1); /* pfmul mm7, mm7 */
/* eab7c5: pcmpgtd mm2, mm5 */
  guest_unsupported(0xeab7c5); /* pcmpgtd mm2, mm5 */
/* eab7c8: pfrsqit1 mm7, mm0 */
  guest_unsupported(0xeab7c8); /* pfrsqit1 mm7, mm0 */
/* eab7cc: movd mm4, dword ptr [0xebc9b0] */
  guest_unsupported(0xeab7cc); /* movd mm4, dword ptr [0xebc9b0] */
/* eab7d3: pfrcpit2 mm7, mm1 */
  guest_unsupported(0xeab7d3); /* pfrcpit2 mm7, mm1 */
/* eab7d7: pfmul mm7, mm0 */
  guest_unsupported(0xeab7d7); /* pfmul mm7, mm0 */
/* eab7db: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eab7de: pand mm5, mm2 */
  guest_unsupported(0xeab7de); /* pand mm5, mm2 */
/* eab7e1: pandn mm0, mm7 */
  guest_unsupported(0xeab7e1); /* pandn mm0, mm7 */
/* eab7e4: movd mm7, dword ptr [0xebc9a8] */
  guest_unsupported(0xeab7e4); /* movd mm7, dword ptr [0xebc9a8] */
/* eab7eb: por mm0, mm5 */
  guest_unsupported(0xeab7eb); /* por mm0, mm5 */
/* eab7ee: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab7f1: pfmul mm0, mm0 */
  guest_unsupported(0xeab7f1); /* pfmul mm0, mm0 */
/* eab7f5: movd mm5, dword ptr [0xebc9a4] */
  guest_unsupported(0xeab7f5); /* movd mm5, dword ptr [0xebc9a4] */
/* eab7fc: pfmul mm7, mm0 */
  guest_unsupported(0xeab7fc); /* pfmul mm7, mm0 */
/* eab800: pfadd mm4, mm0 */
  guest_unsupported(0xeab800); /* pfadd mm4, mm0 */
/* eab804: pfadd mm7, mm5 */
  guest_unsupported(0xeab804); /* pfadd mm7, mm5 */
/* eab808: movd mm5, dword ptr [0xebc9ac] */
  guest_unsupported(0xeab808); /* movd mm5, dword ptr [0xebc9ac] */
/* eab80f: pfmul mm7, mm0 */
  guest_unsupported(0xeab80f); /* pfmul mm7, mm0 */
/* eab813: pfmul mm0, mm4 */
  guest_unsupported(0xeab813); /* pfmul mm0, mm4 */
/* eab817: pfadd mm0, mm5 */
  guest_unsupported(0xeab817); /* pfadd mm0, mm5 */
/* eab81b: pfmul mm7, mm1 */
  guest_unsupported(0xeab81b); /* pfmul mm7, mm1 */
/* eab81f: pfrcp mm4, mm0 */
  guest_unsupported(0xeab81f); /* pfrcp mm4, mm0 */
/* eab823: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xeab823); /* pfrcpit1 mm0, mm4 */
/* eab827: movd mm5, dword ptr [0xebc9b8] */
  guest_unsupported(0xeab827); /* movd mm5, dword ptr [0xebc9b8] */
/* eab82e: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xeab82e); /* pfrcpit2 mm0, mm4 */
/* eab832: pfmul mm0, mm7 */
  guest_unsupported(0xeab832); /* pfmul mm0, mm7 */
/* eab836: movq mm4, mm2 */
  MMX[4] = MMX[2];
/* eab839: pandn mm2, mm5 */
  guest_unsupported(0xeab839); /* pandn mm2, mm5 */
/* eab83c: movd mm5, dword ptr [0xebc9b4] */
  guest_unsupported(0xeab83c); /* movd mm5, dword ptr [0xebc9b4] */
/* eab843: movq mm7, mm4 */
  MMX[7] = MMX[4];
/* eab846: pxor mm2, mm6 */
  guest_unsupported(0xeab846); /* pxor mm2, mm6 */
/* eab849: pfadd mm1, mm0 */
  guest_unsupported(0xeab849); /* pfadd mm1, mm0 */
/* eab84d: movd mm0, dword ptr [0xebc974] */
  guest_unsupported(0xeab84d); /* movd mm0, dword ptr [0xebc974] */
/* eab854: pfadd mm2, mm5 */
  guest_unsupported(0xeab854); /* pfadd mm2, mm5 */
/* eab858: pslld mm7, 0x1f */
  guest_unsupported(0xeab858); /* pslld mm7, 0x1f */
/* eab85c: pandn mm4, mm1 */
  guest_unsupported(0xeab85c); /* pandn mm4, mm1 */
/* eab85f: pxor mm7, mm6 */
  guest_unsupported(0xeab85f); /* pxor mm7, mm6 */
/* eab862: pfadd mm1, mm4 */
  guest_unsupported(0xeab862); /* pfadd mm1, mm4 */
/* eab866: pand mm0, mm3 */
  guest_unsupported(0xeab866); /* pand mm0, mm3 */
/* eab869: por mm1, mm7 */
  guest_unsupported(0xeab869); /* por mm1, mm7 */
/* eab86c: pfadd mm2, mm1 */
  guest_unsupported(0xeab86c); /* pfadd mm2, mm1 */
/* eab870: pandn mm3, mm2 */
  guest_unsupported(0xeab870); /* pandn mm3, mm2 */
/* eab873: por mm0, mm3 */
  guest_unsupported(0xeab873); /* por mm0, mm3 */
/* eab876: ret  */
  esp += 4; SPILL(); return;
}

void f_eab877(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eab877: /* eab877: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab87e: mov edi, edi */
  edi = edi;
/* eab880: movd mm6, dword ptr [0xebc958] */
  guest_unsupported(0xeab880); /* movd mm6, dword ptr [0xebc958] */
/* eab887: movd mm7, dword ptr [0xebc95c] */
  guest_unsupported(0xeab887); /* movd mm7, dword ptr [0xebc95c] */
/* eab88e: movd mm4, dword ptr [0xebc96c] */
  guest_unsupported(0xeab88e); /* movd mm4, dword ptr [0xebc96c] */
/* eab895: pand mm6, mm0 */
  guest_unsupported(0xeab895); /* pand mm6, mm0 */
/* eab898: movd mm5, dword ptr [0xebc968] */
  guest_unsupported(0xeab898); /* movd mm5, dword ptr [0xebc968] */
/* eab89f: pand mm0, mm7 */
  guest_unsupported(0xeab89f); /* pand mm0, mm7 */
/* eab8a2: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eab8a5: pcmpgtd mm3, mm5 */
  guest_unsupported(0xeab8a5); /* pcmpgtd mm3, mm5 */
/* eab8a8: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eab8ab: pfmul mm0, mm4 */
  guest_unsupported(0xeab8ab); /* pfmul mm0, mm4 */
/* eab8af: movd mm2, dword ptr [0xebc9a0] */
  guest_unsupported(0xeab8af); /* movd mm2, dword ptr [0xebc9a0] */
/* eab8b6: pfsubr mm0, mm4 */
  guest_unsupported(0xeab8b6); /* pfsubr mm0, mm4 */
/* eab8ba: pfrsqrt mm7, mm0 */
  guest_unsupported(0xeab8ba); /* pfrsqrt mm7, mm0 */
/* eab8be: movq mm1, mm7 */
  MMX[1] = MMX[7];
/* eab8c1: pfmul mm7, mm7 */
  guest_unsupported(0xeab8c1); /* pfmul mm7, mm7 */
/* eab8c5: pcmpgtd mm2, mm5 */
  guest_unsupported(0xeab8c5); /* pcmpgtd mm2, mm5 */
/* eab8c8: pfrsqit1 mm7, mm0 */
  guest_unsupported(0xeab8c8); /* pfrsqit1 mm7, mm0 */
/* eab8cc: movd mm4, dword ptr [0xebc9b0] */
  guest_unsupported(0xeab8cc); /* movd mm4, dword ptr [0xebc9b0] */
/* eab8d3: pfrcpit2 mm7, mm1 */
  guest_unsupported(0xeab8d3); /* pfrcpit2 mm7, mm1 */
/* eab8d7: pfmul mm7, mm0 */
  guest_unsupported(0xeab8d7); /* pfmul mm7, mm0 */
/* eab8db: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eab8de: pand mm5, mm2 */
  guest_unsupported(0xeab8de); /* pand mm5, mm2 */
/* eab8e1: pandn mm0, mm7 */
  guest_unsupported(0xeab8e1); /* pandn mm0, mm7 */
/* eab8e4: movd mm7, dword ptr [0xebc9a8] */
  guest_unsupported(0xeab8e4); /* movd mm7, dword ptr [0xebc9a8] */
/* eab8eb: por mm0, mm5 */
  guest_unsupported(0xeab8eb); /* por mm0, mm5 */
/* eab8ee: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eab8f1: pfmul mm0, mm0 */
  guest_unsupported(0xeab8f1); /* pfmul mm0, mm0 */
/* eab8f5: movd mm5, dword ptr [0xebc9a4] */
  guest_unsupported(0xeab8f5); /* movd mm5, dword ptr [0xebc9a4] */
/* eab8fc: pfmul mm7, mm0 */
  guest_unsupported(0xeab8fc); /* pfmul mm7, mm0 */
/* eab900: pfadd mm4, mm0 */
  guest_unsupported(0xeab900); /* pfadd mm4, mm0 */
/* eab904: pfadd mm7, mm5 */
  guest_unsupported(0xeab904); /* pfadd mm7, mm5 */
/* eab908: movd mm5, dword ptr [0xebc9ac] */
  guest_unsupported(0xeab908); /* movd mm5, dword ptr [0xebc9ac] */
/* eab90f: pfmul mm7, mm0 */
  guest_unsupported(0xeab90f); /* pfmul mm7, mm0 */
/* eab913: pfmul mm0, mm4 */
  guest_unsupported(0xeab913); /* pfmul mm0, mm4 */
/* eab917: pfadd mm0, mm5 */
  guest_unsupported(0xeab917); /* pfadd mm0, mm5 */
/* eab91b: pfmul mm7, mm1 */
  guest_unsupported(0xeab91b); /* pfmul mm7, mm1 */
/* eab91f: pfrcp mm4, mm0 */
  guest_unsupported(0xeab91f); /* pfrcp mm4, mm0 */
/* eab923: pfrcpit1 mm0, mm4 */
  guest_unsupported(0xeab923); /* pfrcpit1 mm0, mm4 */
/* eab927: pfrcpit2 mm0, mm4 */
  guest_unsupported(0xeab927); /* pfrcpit2 mm0, mm4 */
/* eab92b: movd mm4, dword ptr [0xebc9b4] */
  guest_unsupported(0xeab92b); /* movd mm4, dword ptr [0xebc9b4] */
/* eab932: pfmul mm7, mm0 */
  guest_unsupported(0xeab932); /* pfmul mm7, mm0 */
/* eab936: movd mm0, dword ptr [0xebc974] */
  guest_unsupported(0xeab936); /* movd mm0, dword ptr [0xebc974] */
/* eab93d: pfadd mm1, mm7 */
  guest_unsupported(0xeab93d); /* pfadd mm1, mm7 */
/* eab941: movq mm5, mm1 */
  MMX[5] = MMX[1];
/* eab944: pfadd mm1, mm1 */
  guest_unsupported(0xeab944); /* pfadd mm1, mm1 */
/* eab948: pfsubr mm1, mm4 */
  guest_unsupported(0xeab948); /* pfsubr mm1, mm4 */
/* eab94c: pand mm5, mm2 */
  guest_unsupported(0xeab94c); /* pand mm5, mm2 */
/* eab94f: pandn mm2, mm1 */
  guest_unsupported(0xeab94f); /* pandn mm2, mm1 */
/* eab952: pand mm0, mm3 */
  guest_unsupported(0xeab952); /* pand mm0, mm3 */
/* eab955: por mm2, mm5 */
  guest_unsupported(0xeab955); /* por mm2, mm5 */
/* eab958: por mm2, mm6 */
  guest_unsupported(0xeab958); /* por mm2, mm6 */
/* eab95b: pandn mm3, mm2 */
  guest_unsupported(0xeab95b); /* pandn mm3, mm2 */
/* eab95e: por mm0, mm3 */
  guest_unsupported(0xeab95e); /* por mm0, mm3 */
/* eab961: ret  */
  esp += 4; SPILL(); return;
}

void f_eab962(void) {
  LOAD_REGS();
L_eab962: /* eab962: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab969: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab970: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab977: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eab97e: mov edi, edi */
  edi = edi;
  SPILL(); f_eab980(); return;
}

void f_eab980(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eab980: /* eab980: movd mm6, dword ptr [0xebc960] */
  guest_unsupported(0xeab980); /* movd mm6, dword ptr [0xebc960] */
/* eab987: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eab98a: movd mm2, dword ptr [0xebc964] */
  guest_unsupported(0xeab98a); /* movd mm2, dword ptr [0xebc964] */
/* eab991: pand mm0, mm6 */
  guest_unsupported(0xeab991); /* pand mm0, mm6 */
/* eab994: movd mm3, dword ptr [0xebc968] */
  guest_unsupported(0xeab994); /* movd mm3, dword ptr [0xebc968] */
/* eab99b: pand mm4, mm2 */
  guest_unsupported(0xeab99b); /* pand mm4, mm2 */
/* eab99e: por mm0, mm3 */
  guest_unsupported(0xeab99e); /* por mm0, mm3 */
/* eab9a1: movd mm3, dword ptr [0xebc9d0] */
  guest_unsupported(0xeab9a1); /* movd mm3, dword ptr [0xebc9d0] */
/* eab9a8: psrld mm4, 0x17 */
  guest_unsupported(0xeab9a8); /* psrld mm4, 0x17 */
/* eab9ac: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eab9af: pxor mm5, mm5 */
  guest_unsupported(0xeab9af); /* pxor mm5, mm5 */
/* eab9b2: movd mm6, dword ptr [0xebc9d4] */
  guest_unsupported(0xeab9b2); /* movd mm6, dword ptr [0xebc9d4] */
/* eab9b9: pcmpgtd mm0, mm3 */
  guest_unsupported(0xeab9b9); /* pcmpgtd mm0, mm3 */
/* eab9bc: pcmpeqd mm5, mm4 */
  guest_unsupported(0xeab9bc); /* pcmpeqd mm5, mm4 */
/* eab9bf: psubd mm4, mm0 */
  guest_unsupported(0xeab9bf); /* psubd mm4, mm0 */
/* eab9c2: movd mm3, dword ptr [0xebc9d8] */
  guest_unsupported(0xeab9c2); /* movd mm3, dword ptr [0xebc9d8] */
/* eab9c9: pand mm0, mm6 */
  guest_unsupported(0xeab9c9); /* pand mm0, mm6 */
/* eab9cc: movd mm6, dword ptr [0xebc968] */
  guest_unsupported(0xeab9cc); /* movd mm6, dword ptr [0xebc968] */
/* eab9d3: psubd mm2, mm0 */
  guest_unsupported(0xeab9d3); /* psubd mm2, mm0 */
/* eab9d6: psubd mm4, mm3 */
  guest_unsupported(0xeab9d6); /* psubd mm4, mm3 */
/* eab9d9: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eab9dc: pfadd mm2, mm6 */
  guest_unsupported(0xeab9dc); /* pfadd mm2, mm6 */
/* eab9e0: pfsub mm0, mm6 */
  guest_unsupported(0xeab9e0); /* pfsub mm0, mm6 */
/* eab9e4: pi2fd mm4, mm4 */
  guest_unsupported(0xeab9e4); /* pi2fd mm4, mm4 */
/* eab9e8: movd mm7, dword ptr [0xebc9cc] */
  guest_unsupported(0xeab9e8); /* movd mm7, dword ptr [0xebc9cc] */
/* eab9ef: pfrcp mm6, mm2 */
  guest_unsupported(0xeab9ef); /* pfrcp mm6, mm2 */
/* eab9f3: movd mm3, dword ptr [0xebc9c8] */
  guest_unsupported(0xeab9f3); /* movd mm3, dword ptr [0xebc9c8] */
/* eab9fa: pfrcpit1 mm2, mm6 */
  guest_unsupported(0xeab9fa); /* pfrcpit1 mm2, mm6 */
/* eab9fe: pfmul mm7, mm4 */
  guest_unsupported(0xeab9fe); /* pfmul mm7, mm4 */
/* eaba02: pfmul mm3, mm4 */
  guest_unsupported(0xeaba02); /* pfmul mm3, mm4 */
/* eaba06: movd mm4, dword ptr [0xebc9dc] */
  guest_unsupported(0xeaba06); /* movd mm4, dword ptr [0xebc9dc] */
/* eaba0d: pfrcpit2 mm2, mm6 */
  guest_unsupported(0xeaba0d); /* pfrcpit2 mm2, mm6 */
/* eaba11: movd mm1, dword ptr [0xebc9e0] */
  guest_unsupported(0xeaba11); /* movd mm1, dword ptr [0xebc9e0] */
/* eaba18: pfmul mm2, mm0 */
  guest_unsupported(0xeaba18); /* pfmul mm2, mm0 */
/* eaba1c: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eaba1f: pfadd mm0, mm0 */
  guest_unsupported(0xeaba1f); /* pfadd mm0, mm0 */
/* eaba23: pfmul mm2, mm2 */
  guest_unsupported(0xeaba23); /* pfmul mm2, mm2 */
/* eaba27: movq mm6, mm2 */
  MMX[6] = MMX[2];
/* eaba2a: pfmul mm2, mm4 */
  guest_unsupported(0xeaba2a); /* pfmul mm2, mm4 */
/* eaba2e: movd mm4, dword ptr [0xebc9e4] */
  guest_unsupported(0xeaba2e); /* movd mm4, dword ptr [0xebc9e4] */
/* eaba35: pfadd mm2, mm1 */
  guest_unsupported(0xeaba35); /* pfadd mm2, mm1 */
/* eaba39: pfmul mm2, mm6 */
  guest_unsupported(0xeaba39); /* pfmul mm2, mm6 */
/* eaba3d: movd mm1, dword ptr [0xebc9ec] */
  guest_unsupported(0xeaba3d); /* movd mm1, dword ptr [0xebc9ec] */
/* eaba44: pfmul mm6, mm0 */
  guest_unsupported(0xeaba44); /* pfmul mm6, mm0 */
/* eaba48: pfadd mm2, mm4 */
  guest_unsupported(0xeaba48); /* pfadd mm2, mm4 */
/* eaba4c: pfmul mm2, mm6 */
  guest_unsupported(0xeaba4c); /* pfmul mm2, mm6 */
/* eaba50: pfadd mm2, mm0 */
  guest_unsupported(0xeaba50); /* pfadd mm2, mm0 */
/* eaba54: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* eaba57: pand mm5, mm1 */
  guest_unsupported(0xeaba57); /* pand mm5, mm1 */
/* eaba5a: pfadd mm2, mm7 */
  guest_unsupported(0xeaba5a); /* pfadd mm2, mm7 */
/* eaba5e: pfadd mm2, mm3 */
  guest_unsupported(0xeaba5e); /* pfadd mm2, mm3 */
/* eaba62: pandn mm0, mm2 */
  guest_unsupported(0xeaba62); /* pandn mm0, mm2 */
/* eaba65: por mm0, mm5 */
  guest_unsupported(0xeaba65); /* por mm0, mm5 */
/* eaba68: ret  */
  esp += 4; SPILL(); return;
}

void f_eaba69(void) {
  LOAD_REGS();
L_eaba69: /* eaba69: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eaba70: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eaba77: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eaba7e: mov edi, edi */
  edi = edi;
/* eaba80: call 0xeab980 */
  esp -= 4; W32(esp, 0xeaba85u); SPILL(); f_eab980(); if (g_unwind) return; RELOAD();
/* eaba85: movd mm1, dword ptr [0xebca0c] */
  guest_unsupported(0xeaba85); /* movd mm1, dword ptr [0xebca0c] */
/* eaba8c: pfmul mm0, mm1 */
  guest_unsupported(0xeaba8c); /* pfmul mm0, mm1 */
/* eaba90: ret  */
  esp += 4; SPILL(); return;
}

void f_eaba91(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eaba91: /* eaba91: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eaba98: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eaba9f: nop  */
/* eabaa0: movd mm4, dword ptr [0xebc9bc] */
  guest_unsupported(0xeabaa0); /* movd mm4, dword ptr [0xebc9bc] */
/* eabaa7: movq mm6, mm0 */
  MMX[6] = MMX[0];
/* eabaaa: movd mm1, dword ptr [0xebc9c0] */
  guest_unsupported(0xeabaaa); /* movd mm1, dword ptr [0xebc9c0] */
/* eabab1: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eabab4: movd mm3, dword ptr [0xebc958] */
  guest_unsupported(0xeabab4); /* movd mm3, dword ptr [0xebc958] */
/* eababb: pfmul mm4, mm0 */
  guest_unsupported(0xeababb); /* pfmul mm4, mm0 */
/* eababf: pfcmpge mm6, mm1 */
  guest_unsupported(0xeababf); /* pfcmpge mm6, mm1 */
/* eabac3: movd mm1, dword ptr [0xebc96c] */
  guest_unsupported(0xeabac3); /* movd mm1, dword ptr [0xebc96c] */
/* eabaca: pand mm3, mm0 */
  guest_unsupported(0xeabaca); /* pand mm3, mm0 */
/* eabacd: movd mm2, dword ptr [0xebc9c4] */
  guest_unsupported(0xeabacd); /* movd mm2, dword ptr [0xebc9c4] */
/* eabad4: por mm3, mm1 */
  guest_unsupported(0xeabad4); /* por mm3, mm1 */
/* eabad7: movd mm7, dword ptr [0xebc9c8] */
  guest_unsupported(0xeabad7); /* movd mm7, dword ptr [0xebc9c8] */
/* eabade: pfadd mm4, mm3 */
  guest_unsupported(0xeabade); /* pfadd mm4, mm3 */
/* eabae2: movd mm1, dword ptr [0xebc9cc] */
  guest_unsupported(0xeabae2); /* movd mm1, dword ptr [0xebc9cc] */
/* eabae9: pf2id mm4, mm4 */
  guest_unsupported(0xeabae9); /* pf2id mm4, mm4 */
/* eabaed: pfcmpge mm5, mm2 */
  guest_unsupported(0xeabaed); /* pfcmpge mm5, mm2 */
/* eabaf1: pi2fd mm3, mm4 */
  guest_unsupported(0xeabaf1); /* pi2fd mm3, mm4 */
/* eabaf5: pfmul mm7, mm3 */
  guest_unsupported(0xeabaf5); /* pfmul mm7, mm3 */
/* eabaf9: pfmul mm1, mm3 */
  guest_unsupported(0xeabaf9); /* pfmul mm1, mm3 */
/* eabafd: movd mm3, dword ptr [0xebc984] */
  guest_unsupported(0xeabafd); /* movd mm3, dword ptr [0xebc984] */
/* eabb04: pfsub mm0, mm7 */
  guest_unsupported(0xeabb04); /* pfsub mm0, mm7 */
/* eabb08: movd mm7, dword ptr [0xebc980] */
  guest_unsupported(0xeabb08); /* movd mm7, dword ptr [0xebc980] */
/* eabb0f: pfsub mm0, mm1 */
  guest_unsupported(0xeabb0f); /* pfsub mm0, mm1 */
/* eabb13: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabb16: pfmul mm0, mm0 */
  guest_unsupported(0xeabb16); /* pfmul mm0, mm0 */
/* eabb1a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eabb1d: pfadd mm0, mm3 */
  guest_unsupported(0xeabb1d); /* pfadd mm0, mm3 */
/* eabb21: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eabb24: pfmul mm2, mm7 */
  guest_unsupported(0xeabb24); /* pfmul mm2, mm7 */
/* eabb28: movd mm7, dword ptr [0xebc97c] */
  guest_unsupported(0xeabb28); /* movd mm7, dword ptr [0xebc97c] */
/* eabb2f: pfadd mm2, mm7 */
  guest_unsupported(0xeabb2f); /* pfadd mm2, mm7 */
/* eabb33: pfmul mm2, mm1 */
  guest_unsupported(0xeabb33); /* pfmul mm2, mm1 */
/* eabb37: pfsub mm0, mm2 */
  guest_unsupported(0xeabb37); /* pfsub mm0, mm2 */
/* eabb3b: pfrcp mm1, mm0 */
  guest_unsupported(0xeabb3b); /* pfrcp mm1, mm0 */
/* eabb3f: pfrcpit1 mm0, mm1 */
  guest_unsupported(0xeabb3f); /* pfrcpit1 mm0, mm1 */
/* eabb43: pfadd mm2, mm2 */
  guest_unsupported(0xeabb43); /* pfadd mm2, mm2 */
/* eabb47: movd mm3, dword ptr [0xebc968] */
  guest_unsupported(0xeabb47); /* movd mm3, dword ptr [0xebc968] */
/* eabb4e: pfrcpit2 mm0, mm1 */
  guest_unsupported(0xeabb4e); /* pfrcpit2 mm0, mm1 */
/* eabb52: pslld mm4, 0x17 */
  guest_unsupported(0xeabb52); /* pslld mm4, 0x17 */
/* eabb56: pfmul mm2, mm0 */
  guest_unsupported(0xeabb56); /* pfmul mm2, mm0 */
/* eabb5a: movd mm0, dword ptr [0xebca08] */
  guest_unsupported(0xeabb5a); /* movd mm0, dword ptr [0xebca08] */
/* eabb61: pfadd mm2, mm3 */
  guest_unsupported(0xeabb61); /* pfadd mm2, mm3 */
/* eabb65: pand mm0, mm6 */
  guest_unsupported(0xeabb65); /* pand mm0, mm6 */
/* eabb68: paddd mm2, mm4 */
  guest_unsupported(0xeabb68); /* paddd mm2, mm4 */
/* eabb6b: pand mm2, mm5 */
  guest_unsupported(0xeabb6b); /* pand mm2, mm5 */
/* eabb6e: pandn mm6, mm2 */
  guest_unsupported(0xeabb6e); /* pandn mm6, mm2 */
/* eabb71: por mm0, mm2 */
  guest_unsupported(0xeabb71); /* por mm0, mm2 */
/* eabb74: ret  */
  esp += 4; SPILL(); return;
}

void f_eabb75(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabb75: /* eabb75: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabb7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabb80: pfrsqrt mm1, mm0 */
  guest_unsupported(0xeabb80); /* pfrsqrt mm1, mm0 */
/* eabb84: movq mm2, mm1 */
  MMX[2] = MMX[1];
/* eabb87: pfmul mm1, mm1 */
  guest_unsupported(0xeabb87); /* pfmul mm1, mm1 */
/* eabb8b: pfrsqit1 mm1, mm0 */
  guest_unsupported(0xeabb8b); /* pfrsqit1 mm1, mm0 */
/* eabb8f: pfrcpit2 mm1, mm2 */
  guest_unsupported(0xeabb8f); /* pfrcpit2 mm1, mm2 */
/* eabb93: pfmul mm0, mm1 */
  guest_unsupported(0xeabb93); /* pfmul mm0, mm1 */
/* eabb97: ret  */
  esp += 4; SPILL(); return;
}

void f_eabb98(void) {
  LOAD_REGS();
L_eabb98: /* eabb98: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabb9f: nop  */
/* eabba0: pand mm0, qword ptr [0xebc8f8] */
  guest_unsupported(0xeabba0); /* pand mm0, qword ptr [0xebc8f8] */
/* eabba7: ret  */
  esp += 4; SPILL(); return;
}

void f_eabba8(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabba8: /* eabba8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabbaf: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabbb6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabbbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* eabbc0: pxor mm4, mm4 */
  guest_unsupported(0xeabbc0); /* pxor mm4, mm4 */
/* eabbc3: movq mm3, qword ptr [0xebc900] */
  MMX[3] = R64((uint32_t)(0xebc900u));
/* eabbca: pf2id mm2, mm0 */
  guest_unsupported(0xeabbca); /* pf2id mm2, mm0 */
/* eabbce: movq mm1, qword ptr [0xebc8d8] */
  MMX[1] = R64((uint32_t)(0xebc8d8u));
/* eabbd5: pi2fd mm2, mm2 */
  guest_unsupported(0xeabbd5); /* pi2fd mm2, mm2 */
/* eabbd9: pand mm3, mm0 */
  guest_unsupported(0xeabbd9); /* pand mm3, mm0 */
/* eabbdc: pfsub mm0, mm2 */
  guest_unsupported(0xeabbdc); /* pfsub mm0, mm2 */
/* eabbe0: pfcmpgt mm0, mm4 */
  guest_unsupported(0xeabbe0); /* pfcmpgt mm0, mm4 */
/* eabbe4: pand mm0, mm1 */
  guest_unsupported(0xeabbe4); /* pand mm0, mm1 */
/* eabbe7: por mm2, mm3 */
  guest_unsupported(0xeabbe7); /* por mm2, mm3 */
/* eabbea: por mm0, mm3 */
  guest_unsupported(0xeabbea); /* por mm0, mm3 */
/* eabbed: pfadd mm0, mm2 */
  guest_unsupported(0xeabbed); /* pfadd mm0, mm2 */
/* eabbf1: ret  */
  esp += 4; SPILL(); return;
}

void f_eabbf2(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabbf2: /* eabbf2: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabbf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabc00: pf2id mm2, mm0 */
  guest_unsupported(0xeabc00); /* pf2id mm2, mm0 */
/* eabc04: pxor mm1, mm1 */
  guest_unsupported(0xeabc04); /* pxor mm1, mm1 */
/* eabc07: pi2fd mm2, mm2 */
  guest_unsupported(0xeabc07); /* pi2fd mm2, mm2 */
/* eabc0b: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eabc0e: pfsubr mm2, mm0 */
  guest_unsupported(0xeabc0e); /* pfsubr mm2, mm0 */
/* eabc12: pfcmpgt mm1, mm2 */
  guest_unsupported(0xeabc12); /* pfcmpgt mm1, mm2 */
/* eabc16: movq mm0, qword ptr [0xebc8d8] */
  MMX[0] = R64((uint32_t)(0xebc8d8u));
/* eabc1d: pand mm0, mm1 */
  guest_unsupported(0xeabc1d); /* pand mm0, mm1 */
/* eabc20: pfsubr mm0, mm3 */
  guest_unsupported(0xeabc20); /* pfsubr mm0, mm3 */
/* eabc24: ret  */
  esp += 4; SPILL(); return;
}

void f_eabc25(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabc25: /* eabc25: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabc2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabc33: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabc3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* eabc40: movq mm2, qword ptr [0xebc8f0] */
  MMX[2] = R64((uint32_t)(0xebc8f0u));
/* eabc47: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabc4a: movq mm3, qword ptr [0xebc8e8] */
  MMX[3] = R64((uint32_t)(0xebc8e8u));
/* eabc51: pand mm0, mm2 */
  guest_unsupported(0xeabc51); /* pand mm0, mm2 */
/* eabc54: movq mm2, qword ptr [0xebc8c0] */
  MMX[2] = R64((uint32_t)(0xebc8c0u));
/* eabc5b: pand mm1, mm3 */
  guest_unsupported(0xeabc5b); /* pand mm1, mm3 */
/* eabc5e: movq mm3, qword ptr [0xebc8c8] */
  MMX[3] = R64((uint32_t)(0xebc8c8u));
/* eabc65: por mm0, mm2 */
  guest_unsupported(0xeabc65); /* por mm0, mm2 */
/* eabc68: movq mm2, qword ptr [0xebc908] */
  MMX[2] = R64((uint32_t)(0xebc908u));
/* eabc6f: psrld mm1, 0x17 */
  guest_unsupported(0xeabc6f); /* psrld mm1, 0x17 */
/* eabc73: pfmul mm0, mm3 */
  guest_unsupported(0xeabc73); /* pfmul mm0, mm3 */
/* eabc77: psubd mm1, mm2 */
  guest_unsupported(0xeabc77); /* psubd mm1, mm2 */
/* eabc7a: punpckldq mm0, mm1 */
  guest_unsupported(0xeabc7a); /* punpckldq mm0, mm1 */
/* eabc7d: ret  */
  esp += 4; SPILL(); return;
}

void f_eabc7e(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabc7e: /* eabc7e: mov edi, edi */
  edi = edi;
/* eabc80: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eabc83: pand mm0, qword ptr [0xebc8f8] */
  guest_unsupported(0xeabc83); /* pand mm0, qword ptr [0xebc8f8] */
/* eabc8a: psrld mm0, 0x17 */
  guest_unsupported(0xeabc8a); /* psrld mm0, 0x17 */
/* eabc8e: paddd mm0, mm1 */
  guest_unsupported(0xeabc8e); /* paddd mm0, mm1 */
/* eabc91: movd eax, mm0 */
  guest_unsupported(0xeabc91); /* movd eax, mm0 */
/* eabc94: pand mm2, qword ptr [0xebc8f0] */
  guest_unsupported(0xeabc94); /* pand mm2, qword ptr [0xebc8f0] */
/* eabc9b: mov edx, eax */
  edx = eax;
/* eabc9d: and eax, 0xffffff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* eabca2: jne 0xeabcc0 */
  if (!zf) goto L_eabcc0;
L_eabca4: /* eabca4: pslld mm0, 0x17 */
  guest_unsupported(0xeabca4); /* pslld mm0, 0x17 */
/* eabca8: paddd mm0, mm2 */
  guest_unsupported(0xeabca8); /* paddd mm0, mm2 */
/* eabcab: ret  */
  esp += 4; SPILL(); return;
L_eabcc0: /* eabcc0: and edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* eabcc6: pxor mm0, mm0 */
  guest_unsupported(0xeabcc6); /* pxor mm0, mm0 */
/* eabcc9: jne 0xeabcdc */
  if (!zf) goto L_eabcdc;
L_eabccb: /* eabccb: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eabcce: pand mm0, qword ptr [0xebc900] */
  guest_unsupported(0xeabcce); /* pand mm0, qword ptr [0xebc900] */
/* eabcd5: por mm0, qword ptr [0xebc8e8] */
  guest_unsupported(0xeabcd5); /* por mm0, qword ptr [0xebc8e8] */
L_eabcdc: /* eabcdc: nop  */
/* eabcdd: ret  */
  esp += 4; SPILL(); return;
}

void f_eabcac(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabcac: /* eabcac: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabcb3: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabcba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* eabcc0: and edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* eabcc6: pxor mm0, mm0 */
  guest_unsupported(0xeabcc6); /* pxor mm0, mm0 */
/* eabcc9: jne 0xeabcdc */
  if (!zf) goto L_eabcdc;
L_eabccb: /* eabccb: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eabcce: pand mm0, qword ptr [0xebc900] */
  guest_unsupported(0xeabcce); /* pand mm0, qword ptr [0xebc900] */
/* eabcd5: por mm0, qword ptr [0xebc8e8] */
  guest_unsupported(0xeabcd5); /* por mm0, qword ptr [0xebc8e8] */
L_eabcdc: /* eabcdc: nop  */
/* eabcdd: ret  */
  esp += 4; SPILL(); return;
}

void f_eabcde(void) {
  LOAD_REGS();
L_eabcde: /* eabcde: mov edi, edi */
  edi = edi;
/* eabce0: pf2id mm1, mm0 */
  guest_unsupported(0xeabce0); /* pf2id mm1, mm0 */
/* eabce4: pi2fd mm1, mm1 */
  guest_unsupported(0xeabce4); /* pi2fd mm1, mm1 */
/* eabce8: pfsub mm0, mm1 */
  guest_unsupported(0xeabce8); /* pfsub mm0, mm1 */
/* eabcec: punpckldq mm0, mm1 */
  guest_unsupported(0xeabcec); /* punpckldq mm0, mm1 */
/* eabcef: ret  */
  esp += 4; SPILL(); return;
}

void f_eabcf0(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabcf0: /* eabcf0: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabcf7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabcfe: mov edi, edi */
  edi = edi;
/* eabd00: movd eax, mm1 */
  guest_unsupported(0xeabd00); /* movd eax, mm1 */
/* eabd03: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eabd06: je 0xeabd40 */
  if (zf) goto L_eabd40;
L_eabd08: /* eabd08: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eabd0b: movq mm3, mm1 */
  MMX[3] = MMX[1];
/* eabd0e: pfrcp mm0, mm1 */
  guest_unsupported(0xeabd0e); /* pfrcp mm0, mm1 */
/* eabd12: pfrcpit1 mm1, mm0 */
  guest_unsupported(0xeabd12); /* pfrcpit1 mm1, mm0 */
/* eabd16: pfrcpit2 mm1, mm0 */
  guest_unsupported(0xeabd16); /* pfrcpit2 mm1, mm0 */
/* eabd1a: pfmul mm2, mm1 */
  guest_unsupported(0xeabd1a); /* pfmul mm2, mm1 */
/* eabd1e: pf2id mm1, mm2 */
  guest_unsupported(0xeabd1e); /* pf2id mm1, mm2 */
/* eabd22: pi2fd mm1, mm1 */
  guest_unsupported(0xeabd22); /* pi2fd mm1, mm1 */
/* eabd26: pfsub mm2, mm1 */
  guest_unsupported(0xeabd26); /* pfsub mm2, mm1 */
/* eabd2a: movq mm0, mm3 */
  MMX[0] = MMX[3];
/* eabd2d: pfmul mm0, mm2 */
  guest_unsupported(0xeabd2d); /* pfmul mm0, mm2 */
/* eabd31: ret  */
  esp += 4; SPILL(); return;
L_eabd40: /* eabd40: movq mm0, qword ptr [0xebc8f8] */
  MMX[0] = R64((uint32_t)(0xebc8f8u));
/* eabd47: ret  */
  esp += 4; SPILL(); return;
}

void f_eabd32(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabd32: /* eabd32: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabd39: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabd40: movq mm0, qword ptr [0xebc8f8] */
  MMX[0] = R64((uint32_t)(0xebc8f8u));
/* eabd47: ret  */
  esp += 4; SPILL(); return;
}

void f_eabd48(void) {
  LOAD_REGS();
L_eabd48: /* eabd48: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabd4f: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabd56: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eabd5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
  SPILL(); f_eabd60(); return;
}

void f_eabd60(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabd60: /* eabd60: movd eax, mm0 */
  guest_unsupported(0xeabd60); /* movd eax, mm0 */
/* eabd63: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabd66: movd mm3, dword ptr [0xebc95c] */
  guest_unsupported(0xeabd66); /* movd mm3, dword ptr [0xebc95c] */
/* eabd6d: mov ebx, eax */
  ebx = eax;
/* eabd6f: mov edx, eax */
  edx = eax;
/* eabd71: pand mm0, mm3 */
  guest_unsupported(0xeabd71); /* pand mm0, mm3 */
/* eabd74: and ebx, 0x80000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eabd7a: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* eabd7d: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* eabd7f: cmp eax, dword ptr [0xebca14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebca14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eabd85: movd mm2, dword ptr [0xebca10] */
  guest_unsupported(0xeabd85); /* movd mm2, dword ptr [0xebca10] */
/* eabd8c: jl 0xeabda0 */
  if ((sf != of)) goto L_eabda0;
L_eabd8e: /* eabd8e: movd mm0, dword ptr [0xebc968] */
  guest_unsupported(0xeabd8e); /* movd mm0, dword ptr [0xebc968] */
/* eabd95: jmp 0xeabe77 */
  goto L_eabe77;
L_eabda0: /* eabda0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabda3: pfmul mm0, mm2 */
  guest_unsupported(0xeabda3); /* pfmul mm0, mm2 */
/* eabda7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabdae: pf2id mm0, mm0 */
  guest_unsupported(0xeabdae); /* pf2id mm0, mm0 */
/* eabdb2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabdb9: movd ecx, mm0 */
  guest_unsupported(0xeabdb9); /* movd ecx, mm0 */
/* eabdbc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabdbc); /* pi2fd mm0, mm0 */
/* eabdc0: mov esi, ecx */
  esi = ecx;
/* eabdc2: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eabdc9: punpckldq mm0, mm0 */
  guest_unsupported(0xeabdc9); /* punpckldq mm0, mm0 */
/* eabdcc: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eabdd3: pfmul mm0, mm3 */
  guest_unsupported(0xeabdd3); /* pfmul mm0, mm3 */
/* eabdd7: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eabdde: pfadd mm1, mm0 */
  guest_unsupported(0xeabdde); /* pfadd mm1, mm0 */
/* eabde2: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabde5: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabde5); /* punpckhdq mm0, mm0 */
/* eabde8: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eabdea: pfadd mm1, mm0 */
  guest_unsupported(0xeabdea); /* pfadd mm1, mm0 */
/* eabdee: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabdf4: punpckldq mm1, mm1 */
  guest_unsupported(0xeabdf4); /* punpckldq mm1, mm1 */
/* eabdf7: je 0xeabdfd */
  if (zf) goto L_eabdfd;
L_eabdf9: /* eabdf9: pfsubr mm1, mm3 */
  guest_unsupported(0xeabdf9); /* pfsubr mm1, mm3 */
L_eabdfd: /* eabdfd: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eabe00: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eabe03: punpckldq mm2, mm1 */
  guest_unsupported(0xeabe03); /* punpckldq mm2, mm1 */
/* eabe06: pfmul mm1, mm1 */
  guest_unsupported(0xeabe06); /* pfmul mm1, mm1 */
/* eabe0a: mov esi, ecx */
  esi = ecx;
/* eabe0c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eabe13: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabe15: pfmul mm7, mm1 */
  guest_unsupported(0xeabe15); /* pfmul mm7, mm1 */
/* eabe19: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eabe1b: pfmul mm6, mm1 */
  guest_unsupported(0xeabe1b); /* pfmul mm6, mm1 */
/* eabe1f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eabe22: pfadd mm7, mm5 */
  guest_unsupported(0xeabe22); /* pfadd mm7, mm5 */
/* eabe26: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eabe28: pfmul mm4, mm1 */
  guest_unsupported(0xeabe28); /* pfmul mm4, mm1 */
/* eabe2c: pfmul mm7, mm6 */
  guest_unsupported(0xeabe2c); /* pfmul mm7, mm6 */
/* eabe30: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eabe37: pfadd mm7, mm5 */
  guest_unsupported(0xeabe37); /* pfadd mm7, mm5 */
/* eabe3b: pfmul mm6, mm1 */
  guest_unsupported(0xeabe3b); /* pfmul mm6, mm1 */
/* eabe3f: pfmul mm4, mm7 */
  guest_unsupported(0xeabe3f); /* pfmul mm4, mm7 */
/* eabe43: movd mm0, edx */
  guest_unsupported(0xeabe43); /* movd mm0, edx */
/* eabe46: pfadd mm4, mm5 */
  guest_unsupported(0xeabe46); /* pfadd mm4, mm5 */
/* eabe4a: punpckldq mm6, mm5 */
  guest_unsupported(0xeabe4a); /* punpckldq mm6, mm5 */
/* eabe4d: psrlq mm5, 0x20 */
  guest_unsupported(0xeabe4d); /* psrlq mm5, 0x20 */
/* eabe51: pfmul mm4, mm6 */
  guest_unsupported(0xeabe51); /* pfmul mm4, mm6 */
/* eabe55: punpckldq mm0, mm0 */
  guest_unsupported(0xeabe55); /* punpckldq mm0, mm0 */
/* eabe58: movd mm1, ebx */
  guest_unsupported(0xeabe58); /* movd mm1, ebx */
/* eabe5b: pfadd mm4, mm5 */
  guest_unsupported(0xeabe5b); /* pfadd mm4, mm5 */
/* eabe5f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabe65: pfmul mm4, mm2 */
  guest_unsupported(0xeabe65); /* pfmul mm4, mm2 */
/* eabe69: je 0xeabe71 */
  if (zf) goto L_eabe71;
L_eabe6b: /* eabe6b: punpckldq mm5, mm4 */
  guest_unsupported(0xeabe6b); /* punpckldq mm5, mm4 */
/* eabe6e: punpckhdq mm4, mm5 */
  guest_unsupported(0xeabe6e); /* punpckhdq mm4, mm5 */
L_eabe71: /* eabe71: pxor mm4, mm1 */
  guest_unsupported(0xeabe71); /* pxor mm4, mm1 */
/* eabe74: pxor mm0, mm4 */
  guest_unsupported(0xeabe74); /* pxor mm0, mm4 */
L_eabe77: /* eabe77: nop  */
/* eabe78: ret  */
  esp += 4; SPILL(); return;
}

void f_eabd9a(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabd9a: /* eabd9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* eabda0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabda3: pfmul mm0, mm2 */
  guest_unsupported(0xeabda3); /* pfmul mm0, mm2 */
/* eabda7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabdae: pf2id mm0, mm0 */
  guest_unsupported(0xeabdae); /* pf2id mm0, mm0 */
/* eabdb2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabdb9: movd ecx, mm0 */
  guest_unsupported(0xeabdb9); /* movd ecx, mm0 */
/* eabdbc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabdbc); /* pi2fd mm0, mm0 */
/* eabdc0: mov esi, ecx */
  esi = ecx;
/* eabdc2: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eabdc9: punpckldq mm0, mm0 */
  guest_unsupported(0xeabdc9); /* punpckldq mm0, mm0 */
/* eabdcc: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eabdd3: pfmul mm0, mm3 */
  guest_unsupported(0xeabdd3); /* pfmul mm0, mm3 */
/* eabdd7: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eabdde: pfadd mm1, mm0 */
  guest_unsupported(0xeabdde); /* pfadd mm1, mm0 */
/* eabde2: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabde5: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabde5); /* punpckhdq mm0, mm0 */
/* eabde8: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eabdea: pfadd mm1, mm0 */
  guest_unsupported(0xeabdea); /* pfadd mm1, mm0 */
/* eabdee: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabdf4: punpckldq mm1, mm1 */
  guest_unsupported(0xeabdf4); /* punpckldq mm1, mm1 */
/* eabdf7: je 0xeabdfd */
  if (zf) goto L_eabdfd;
L_eabdf9: /* eabdf9: pfsubr mm1, mm3 */
  guest_unsupported(0xeabdf9); /* pfsubr mm1, mm3 */
L_eabdfd: /* eabdfd: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eabe00: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eabe03: punpckldq mm2, mm1 */
  guest_unsupported(0xeabe03); /* punpckldq mm2, mm1 */
/* eabe06: pfmul mm1, mm1 */
  guest_unsupported(0xeabe06); /* pfmul mm1, mm1 */
/* eabe0a: mov esi, ecx */
  esi = ecx;
/* eabe0c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eabe13: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabe15: pfmul mm7, mm1 */
  guest_unsupported(0xeabe15); /* pfmul mm7, mm1 */
/* eabe19: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eabe1b: pfmul mm6, mm1 */
  guest_unsupported(0xeabe1b); /* pfmul mm6, mm1 */
/* eabe1f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eabe22: pfadd mm7, mm5 */
  guest_unsupported(0xeabe22); /* pfadd mm7, mm5 */
/* eabe26: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eabe28: pfmul mm4, mm1 */
  guest_unsupported(0xeabe28); /* pfmul mm4, mm1 */
/* eabe2c: pfmul mm7, mm6 */
  guest_unsupported(0xeabe2c); /* pfmul mm7, mm6 */
/* eabe30: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eabe37: pfadd mm7, mm5 */
  guest_unsupported(0xeabe37); /* pfadd mm7, mm5 */
/* eabe3b: pfmul mm6, mm1 */
  guest_unsupported(0xeabe3b); /* pfmul mm6, mm1 */
/* eabe3f: pfmul mm4, mm7 */
  guest_unsupported(0xeabe3f); /* pfmul mm4, mm7 */
/* eabe43: movd mm0, edx */
  guest_unsupported(0xeabe43); /* movd mm0, edx */
/* eabe46: pfadd mm4, mm5 */
  guest_unsupported(0xeabe46); /* pfadd mm4, mm5 */
/* eabe4a: punpckldq mm6, mm5 */
  guest_unsupported(0xeabe4a); /* punpckldq mm6, mm5 */
/* eabe4d: psrlq mm5, 0x20 */
  guest_unsupported(0xeabe4d); /* psrlq mm5, 0x20 */
/* eabe51: pfmul mm4, mm6 */
  guest_unsupported(0xeabe51); /* pfmul mm4, mm6 */
/* eabe55: punpckldq mm0, mm0 */
  guest_unsupported(0xeabe55); /* punpckldq mm0, mm0 */
/* eabe58: movd mm1, ebx */
  guest_unsupported(0xeabe58); /* movd mm1, ebx */
/* eabe5b: pfadd mm4, mm5 */
  guest_unsupported(0xeabe5b); /* pfadd mm4, mm5 */
/* eabe5f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabe65: pfmul mm4, mm2 */
  guest_unsupported(0xeabe65); /* pfmul mm4, mm2 */
/* eabe69: je 0xeabe71 */
  if (zf) goto L_eabe71;
L_eabe6b: /* eabe6b: punpckldq mm5, mm4 */
  guest_unsupported(0xeabe6b); /* punpckldq mm5, mm4 */
/* eabe6e: punpckhdq mm4, mm5 */
  guest_unsupported(0xeabe6e); /* punpckhdq mm4, mm5 */
L_eabe71: /* eabe71: pxor mm4, mm1 */
  guest_unsupported(0xeabe71); /* pxor mm4, mm1 */
/* eabe74: pxor mm0, mm4 */
  guest_unsupported(0xeabe74); /* pxor mm0, mm4 */
/* eabe77: nop  */
/* eabe78: ret  */
  esp += 4; SPILL(); return;
}

void f_eabe79(void) {
  LOAD_REGS();
L_eabe79: /* eabe79: lea esp, [esp] */
  esp = (uint32_t)(esp);
  SPILL(); f_eabe80(); return;
}

void f_eabe80(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabe80: /* eabe80: movd eax, mm0 */
  guest_unsupported(0xeabe80); /* movd eax, mm0 */
/* eabe83: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabe86: movd mm3, dword ptr [0xebc95c] */
  guest_unsupported(0xeabe86); /* movd mm3, dword ptr [0xebc95c] */
/* eabe8d: mov ebx, eax */
  ebx = eax;
/* eabe8f: mov edx, eax */
  edx = eax;
/* eabe91: pand mm0, mm3 */
  guest_unsupported(0xeabe91); /* pand mm0, mm3 */
/* eabe94: and ebx, 0x80000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eabe9a: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* eabe9d: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* eabe9f: cmp eax, dword ptr [0xebca14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebca14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eabea5: movd mm2, dword ptr [0xebca10] */
  guest_unsupported(0xeabea5); /* movd mm2, dword ptr [0xebca10] */
/* eabeac: jl 0xeabec0 */
  if ((sf != of)) goto L_eabec0;
L_eabeae: /* eabeae: movd mm0, dword ptr [0xebc968] */
  guest_unsupported(0xeabeae); /* movd mm0, dword ptr [0xebc968] */
/* eabeb5: jmp 0xeabf97 */
  goto L_eabf97;
L_eabec0: /* eabec0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabec3: pfmul mm0, mm2 */
  guest_unsupported(0xeabec3); /* pfmul mm0, mm2 */
/* eabec7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabece: pf2id mm0, mm0 */
  guest_unsupported(0xeabece); /* pf2id mm0, mm0 */
/* eabed2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabed9: movd ecx, mm0 */
  guest_unsupported(0xeabed9); /* movd ecx, mm0 */
/* eabedc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabedc); /* pi2fd mm0, mm0 */
/* eabee0: mov esi, ecx */
  esi = ecx;
/* eabee2: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eabee9: punpckldq mm0, mm0 */
  guest_unsupported(0xeabee9); /* punpckldq mm0, mm0 */
/* eabeec: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eabef3: pfmul mm0, mm3 */
  guest_unsupported(0xeabef3); /* pfmul mm0, mm3 */
/* eabef7: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eabefe: pfadd mm1, mm0 */
  guest_unsupported(0xeabefe); /* pfadd mm1, mm0 */
/* eabf02: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabf05: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabf05); /* punpckhdq mm0, mm0 */
/* eabf08: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eabf0a: pfadd mm1, mm0 */
  guest_unsupported(0xeabf0a); /* pfadd mm1, mm0 */
/* eabf0e: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabf14: punpckldq mm1, mm1 */
  guest_unsupported(0xeabf14); /* punpckldq mm1, mm1 */
/* eabf17: je 0xeabf1d */
  if (zf) goto L_eabf1d;
L_eabf19: /* eabf19: pfsubr mm1, mm3 */
  guest_unsupported(0xeabf19); /* pfsubr mm1, mm3 */
L_eabf1d: /* eabf1d: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eabf20: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eabf23: punpckldq mm2, mm1 */
  guest_unsupported(0xeabf23); /* punpckldq mm2, mm1 */
/* eabf26: pfmul mm1, mm1 */
  guest_unsupported(0xeabf26); /* pfmul mm1, mm1 */
/* eabf2a: mov esi, ecx */
  esi = ecx;
/* eabf2c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eabf33: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabf35: pfmul mm7, mm1 */
  guest_unsupported(0xeabf35); /* pfmul mm7, mm1 */
/* eabf39: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eabf3b: pfmul mm6, mm1 */
  guest_unsupported(0xeabf3b); /* pfmul mm6, mm1 */
/* eabf3f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eabf42: pfadd mm7, mm5 */
  guest_unsupported(0xeabf42); /* pfadd mm7, mm5 */
/* eabf46: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eabf48: pfmul mm4, mm1 */
  guest_unsupported(0xeabf48); /* pfmul mm4, mm1 */
/* eabf4c: pfmul mm7, mm6 */
  guest_unsupported(0xeabf4c); /* pfmul mm7, mm6 */
/* eabf50: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eabf57: pfadd mm7, mm5 */
  guest_unsupported(0xeabf57); /* pfadd mm7, mm5 */
/* eabf5b: pfmul mm6, mm1 */
  guest_unsupported(0xeabf5b); /* pfmul mm6, mm1 */
/* eabf5f: pfmul mm4, mm7 */
  guest_unsupported(0xeabf5f); /* pfmul mm4, mm7 */
/* eabf63: movd mm0, edx */
  guest_unsupported(0xeabf63); /* movd mm0, edx */
/* eabf66: pfadd mm4, mm5 */
  guest_unsupported(0xeabf66); /* pfadd mm4, mm5 */
/* eabf6a: punpckldq mm6, mm5 */
  guest_unsupported(0xeabf6a); /* punpckldq mm6, mm5 */
/* eabf6d: psrlq mm5, 0x20 */
  guest_unsupported(0xeabf6d); /* psrlq mm5, 0x20 */
/* eabf71: pfmul mm4, mm6 */
  guest_unsupported(0xeabf71); /* pfmul mm4, mm6 */
/* eabf75: punpckldq mm0, mm0 */
  guest_unsupported(0xeabf75); /* punpckldq mm0, mm0 */
/* eabf78: movd mm1, ebx */
  guest_unsupported(0xeabf78); /* movd mm1, ebx */
/* eabf7b: pfadd mm4, mm5 */
  guest_unsupported(0xeabf7b); /* pfadd mm4, mm5 */
/* eabf7f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabf85: pfmul mm4, mm2 */
  guest_unsupported(0xeabf85); /* pfmul mm4, mm2 */
/* eabf89: je 0xeabf91 */
  if (zf) goto L_eabf91;
L_eabf8b: /* eabf8b: punpckldq mm5, mm4 */
  guest_unsupported(0xeabf8b); /* punpckldq mm5, mm4 */
/* eabf8e: punpckhdq mm4, mm5 */
  guest_unsupported(0xeabf8e); /* punpckhdq mm4, mm5 */
L_eabf91: /* eabf91: pxor mm4, mm1 */
  guest_unsupported(0xeabf91); /* pxor mm4, mm1 */
/* eabf94: pxor mm0, mm4 */
  guest_unsupported(0xeabf94); /* pxor mm0, mm4 */
L_eabf97: /* eabf97: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabf97); /* punpckhdq mm0, mm0 */
/* eabf9a: ret  */
  esp += 4; SPILL(); return;
}

void f_eabeba(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabeba: /* eabeba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* eabec0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabec3: pfmul mm0, mm2 */
  guest_unsupported(0xeabec3); /* pfmul mm0, mm2 */
/* eabec7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabece: pf2id mm0, mm0 */
  guest_unsupported(0xeabece); /* pf2id mm0, mm0 */
/* eabed2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabed9: movd ecx, mm0 */
  guest_unsupported(0xeabed9); /* movd ecx, mm0 */
/* eabedc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabedc); /* pi2fd mm0, mm0 */
/* eabee0: mov esi, ecx */
  esi = ecx;
/* eabee2: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eabee9: punpckldq mm0, mm0 */
  guest_unsupported(0xeabee9); /* punpckldq mm0, mm0 */
/* eabeec: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eabef3: pfmul mm0, mm3 */
  guest_unsupported(0xeabef3); /* pfmul mm0, mm3 */
/* eabef7: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eabefe: pfadd mm1, mm0 */
  guest_unsupported(0xeabefe); /* pfadd mm1, mm0 */
/* eabf02: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabf05: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabf05); /* punpckhdq mm0, mm0 */
/* eabf08: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eabf0a: pfadd mm1, mm0 */
  guest_unsupported(0xeabf0a); /* pfadd mm1, mm0 */
/* eabf0e: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabf14: punpckldq mm1, mm1 */
  guest_unsupported(0xeabf14); /* punpckldq mm1, mm1 */
/* eabf17: je 0xeabf1d */
  if (zf) goto L_eabf1d;
L_eabf19: /* eabf19: pfsubr mm1, mm3 */
  guest_unsupported(0xeabf19); /* pfsubr mm1, mm3 */
L_eabf1d: /* eabf1d: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eabf20: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eabf23: punpckldq mm2, mm1 */
  guest_unsupported(0xeabf23); /* punpckldq mm2, mm1 */
/* eabf26: pfmul mm1, mm1 */
  guest_unsupported(0xeabf26); /* pfmul mm1, mm1 */
/* eabf2a: mov esi, ecx */
  esi = ecx;
/* eabf2c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eabf33: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eabf35: pfmul mm7, mm1 */
  guest_unsupported(0xeabf35); /* pfmul mm7, mm1 */
/* eabf39: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eabf3b: pfmul mm6, mm1 */
  guest_unsupported(0xeabf3b); /* pfmul mm6, mm1 */
/* eabf3f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eabf42: pfadd mm7, mm5 */
  guest_unsupported(0xeabf42); /* pfadd mm7, mm5 */
/* eabf46: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eabf48: pfmul mm4, mm1 */
  guest_unsupported(0xeabf48); /* pfmul mm4, mm1 */
/* eabf4c: pfmul mm7, mm6 */
  guest_unsupported(0xeabf4c); /* pfmul mm7, mm6 */
/* eabf50: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eabf57: pfadd mm7, mm5 */
  guest_unsupported(0xeabf57); /* pfadd mm7, mm5 */
/* eabf5b: pfmul mm6, mm1 */
  guest_unsupported(0xeabf5b); /* pfmul mm6, mm1 */
/* eabf5f: pfmul mm4, mm7 */
  guest_unsupported(0xeabf5f); /* pfmul mm4, mm7 */
/* eabf63: movd mm0, edx */
  guest_unsupported(0xeabf63); /* movd mm0, edx */
/* eabf66: pfadd mm4, mm5 */
  guest_unsupported(0xeabf66); /* pfadd mm4, mm5 */
/* eabf6a: punpckldq mm6, mm5 */
  guest_unsupported(0xeabf6a); /* punpckldq mm6, mm5 */
/* eabf6d: psrlq mm5, 0x20 */
  guest_unsupported(0xeabf6d); /* psrlq mm5, 0x20 */
/* eabf71: pfmul mm4, mm6 */
  guest_unsupported(0xeabf71); /* pfmul mm4, mm6 */
/* eabf75: punpckldq mm0, mm0 */
  guest_unsupported(0xeabf75); /* punpckldq mm0, mm0 */
/* eabf78: movd mm1, ebx */
  guest_unsupported(0xeabf78); /* movd mm1, ebx */
/* eabf7b: pfadd mm4, mm5 */
  guest_unsupported(0xeabf7b); /* pfadd mm4, mm5 */
/* eabf7f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eabf85: pfmul mm4, mm2 */
  guest_unsupported(0xeabf85); /* pfmul mm4, mm2 */
/* eabf89: je 0xeabf91 */
  if (zf) goto L_eabf91;
L_eabf8b: /* eabf8b: punpckldq mm5, mm4 */
  guest_unsupported(0xeabf8b); /* punpckldq mm5, mm4 */
/* eabf8e: punpckhdq mm4, mm5 */
  guest_unsupported(0xeabf8e); /* punpckhdq mm4, mm5 */
L_eabf91: /* eabf91: pxor mm4, mm1 */
  guest_unsupported(0xeabf91); /* pxor mm4, mm1 */
/* eabf94: pxor mm0, mm4 */
  guest_unsupported(0xeabf94); /* pxor mm0, mm4 */
/* eabf97: punpckhdq mm0, mm0 */
  guest_unsupported(0xeabf97); /* punpckhdq mm0, mm0 */
/* eabf9a: ret  */
  esp += 4; SPILL(); return;
}

void f_eabf9b(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabf9b: /* eabf9b: add eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eabfa0: movd eax, mm0 */
  guest_unsupported(0xeabfa0); /* movd eax, mm0 */
/* eabfa3: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabfa6: movd mm3, dword ptr [0xebc95c] */
  guest_unsupported(0xeabfa6); /* movd mm3, dword ptr [0xebc95c] */
/* eabfad: mov ebx, eax */
  ebx = eax;
/* eabfaf: mov edx, eax */
  edx = eax;
/* eabfb1: pand mm0, mm3 */
  guest_unsupported(0xeabfb1); /* pand mm0, mm3 */
/* eabfb4: and ebx, 0x80000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* eabfba: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* eabfbd: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* eabfbf: cmp eax, dword ptr [0xebca14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xebca14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eabfc5: movd mm2, dword ptr [0xebca10] */
  guest_unsupported(0xeabfc5); /* movd mm2, dword ptr [0xebca10] */
/* eabfcc: jl 0xeabfe0 */
  if ((sf != of)) goto L_eabfe0;
L_eabfce: /* eabfce: movd mm0, dword ptr [0xebc968] */
  guest_unsupported(0xeabfce); /* movd mm0, dword ptr [0xebc968] */
/* eabfd5: jmp 0xeac0b7 */
  goto L_eac0b7;
L_eabfe0: /* eabfe0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabfe3: pfmul mm0, mm2 */
  guest_unsupported(0xeabfe3); /* pfmul mm0, mm2 */
/* eabfe7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabfee: pf2id mm0, mm0 */
  guest_unsupported(0xeabfee); /* pf2id mm0, mm0 */
/* eabff2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabff9: movd ecx, mm0 */
  guest_unsupported(0xeabff9); /* movd ecx, mm0 */
/* eabffc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabffc); /* pi2fd mm0, mm0 */
/* eac000: mov esi, ecx */
  esi = ecx;
/* eac002: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eac009: punpckldq mm0, mm0 */
  guest_unsupported(0xeac009); /* punpckldq mm0, mm0 */
/* eac00c: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eac013: pfmul mm0, mm3 */
  guest_unsupported(0xeac013); /* pfmul mm0, mm3 */
/* eac017: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eac01e: pfadd mm1, mm0 */
  guest_unsupported(0xeac01e); /* pfadd mm1, mm0 */
/* eac022: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eac025: punpckhdq mm0, mm0 */
  guest_unsupported(0xeac025); /* punpckhdq mm0, mm0 */
/* eac028: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eac02a: pfadd mm1, mm0 */
  guest_unsupported(0xeac02a); /* pfadd mm1, mm0 */
/* eac02e: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac034: punpckldq mm1, mm1 */
  guest_unsupported(0xeac034); /* punpckldq mm1, mm1 */
/* eac037: je 0xeac03d */
  if (zf) goto L_eac03d;
L_eac039: /* eac039: pfsubr mm1, mm3 */
  guest_unsupported(0xeac039); /* pfsubr mm1, mm3 */
L_eac03d: /* eac03d: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eac040: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eac043: punpckldq mm2, mm1 */
  guest_unsupported(0xeac043); /* punpckldq mm2, mm1 */
/* eac046: pfmul mm1, mm1 */
  guest_unsupported(0xeac046); /* pfmul mm1, mm1 */
/* eac04a: mov esi, ecx */
  esi = ecx;
/* eac04c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eac053: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eac055: pfmul mm7, mm1 */
  guest_unsupported(0xeac055); /* pfmul mm7, mm1 */
/* eac059: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eac05b: pfmul mm6, mm1 */
  guest_unsupported(0xeac05b); /* pfmul mm6, mm1 */
/* eac05f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eac062: pfadd mm7, mm5 */
  guest_unsupported(0xeac062); /* pfadd mm7, mm5 */
/* eac066: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eac068: pfmul mm4, mm1 */
  guest_unsupported(0xeac068); /* pfmul mm4, mm1 */
/* eac06c: pfmul mm7, mm6 */
  guest_unsupported(0xeac06c); /* pfmul mm7, mm6 */
/* eac070: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eac077: pfadd mm7, mm5 */
  guest_unsupported(0xeac077); /* pfadd mm7, mm5 */
/* eac07b: pfmul mm6, mm1 */
  guest_unsupported(0xeac07b); /* pfmul mm6, mm1 */
/* eac07f: pfmul mm4, mm7 */
  guest_unsupported(0xeac07f); /* pfmul mm4, mm7 */
/* eac083: movd mm0, edx */
  guest_unsupported(0xeac083); /* movd mm0, edx */
/* eac086: pfadd mm4, mm5 */
  guest_unsupported(0xeac086); /* pfadd mm4, mm5 */
/* eac08a: punpckldq mm6, mm5 */
  guest_unsupported(0xeac08a); /* punpckldq mm6, mm5 */
/* eac08d: psrlq mm5, 0x20 */
  guest_unsupported(0xeac08d); /* psrlq mm5, 0x20 */
/* eac091: pfmul mm4, mm6 */
  guest_unsupported(0xeac091); /* pfmul mm4, mm6 */
/* eac095: punpckldq mm0, mm0 */
  guest_unsupported(0xeac095); /* punpckldq mm0, mm0 */
/* eac098: movd mm1, ebx */
  guest_unsupported(0xeac098); /* movd mm1, ebx */
/* eac09b: pfadd mm4, mm5 */
  guest_unsupported(0xeac09b); /* pfadd mm4, mm5 */
/* eac09f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac0a5: pfmul mm4, mm2 */
  guest_unsupported(0xeac0a5); /* pfmul mm4, mm2 */
/* eac0a9: je 0xeac0b1 */
  if (zf) goto L_eac0b1;
L_eac0ab: /* eac0ab: punpckldq mm5, mm4 */
  guest_unsupported(0xeac0ab); /* punpckldq mm5, mm4 */
/* eac0ae: punpckhdq mm4, mm5 */
  guest_unsupported(0xeac0ae); /* punpckhdq mm4, mm5 */
L_eac0b1: /* eac0b1: pxor mm4, mm1 */
  guest_unsupported(0xeac0b1); /* pxor mm4, mm1 */
/* eac0b4: pxor mm0, mm4 */
  guest_unsupported(0xeac0b4); /* pxor mm0, mm4 */
L_eac0b7: /* eac0b7: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eac0ba: pfrcp mm2, mm0 */
  guest_unsupported(0xeac0ba); /* pfrcp mm2, mm0 */
/* eac0be: punpckhdq mm1, mm1 */
  guest_unsupported(0xeac0be); /* punpckhdq mm1, mm1 */
/* eac0c1: pfrcpit1 mm0, mm2 */
  guest_unsupported(0xeac0c1); /* pfrcpit1 mm0, mm2 */
/* eac0c5: pfrcpit2 mm0, mm2 */
  guest_unsupported(0xeac0c5); /* pfrcpit2 mm0, mm2 */
/* eac0c9: pfmul mm0, mm1 */
  guest_unsupported(0xeac0c9); /* pfmul mm0, mm1 */
/* eac0cd: ret  */
  esp += 4; SPILL(); return;
}

void f_eabfda(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eabfda: /* eabfda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* eabfe0: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eabfe3: pfmul mm0, mm2 */
  guest_unsupported(0xeabfe3); /* pfmul mm0, mm2 */
/* eabfe7: movq mm3, qword ptr [0xebc920] */
  MMX[3] = R64((uint32_t)(0xebc920u));
/* eabfee: pf2id mm0, mm0 */
  guest_unsupported(0xeabfee); /* pf2id mm0, mm0 */
/* eabff2: movq mm7, qword ptr [0xebc928] */
  MMX[7] = R64((uint32_t)(0xebc928u));
/* eabff9: movd ecx, mm0 */
  guest_unsupported(0xeabff9); /* movd ecx, mm0 */
/* eabffc: pi2fd mm0, mm0 */
  guest_unsupported(0xeabffc); /* pi2fd mm0, mm0 */
/* eac000: mov esi, ecx */
  esi = ecx;
/* eac002: movq mm6, qword ptr [0xebc938] */
  MMX[6] = R64((uint32_t)(0xebc938u));
/* eac009: punpckldq mm0, mm0 */
  guest_unsupported(0xeac009); /* punpckldq mm0, mm0 */
/* eac00c: movq mm5, qword ptr [0xebc8d8] */
  MMX[5] = R64((uint32_t)(0xebc8d8u));
/* eac013: pfmul mm0, mm3 */
  guest_unsupported(0xeac013); /* pfmul mm0, mm3 */
/* eac017: movq mm3, qword ptr [0xebc930] */
  MMX[3] = R64((uint32_t)(0xebc930u));
/* eac01e: pfadd mm1, mm0 */
  guest_unsupported(0xeac01e); /* pfadd mm1, mm0 */
/* eac022: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eac025: punpckhdq mm0, mm0 */
  guest_unsupported(0xeac025); /* punpckhdq mm0, mm0 */
/* eac028: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* eac02a: pfadd mm1, mm0 */
  guest_unsupported(0xeac02a); /* pfadd mm1, mm0 */
/* eac02e: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac034: punpckldq mm1, mm1 */
  guest_unsupported(0xeac034); /* punpckldq mm1, mm1 */
/* eac037: je 0xeac03d */
  if (zf) goto L_eac03d;
L_eac039: /* eac039: pfsubr mm1, mm3 */
  guest_unsupported(0xeac039); /* pfsubr mm1, mm3 */
L_eac03d: /* eac03d: movq mm2, mm5 */
  MMX[2] = MMX[5];
/* eac040: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* eac043: punpckldq mm2, mm1 */
  guest_unsupported(0xeac043); /* punpckldq mm2, mm1 */
/* eac046: pfmul mm1, mm1 */
  guest_unsupported(0xeac046); /* pfmul mm1, mm1 */
/* eac04a: mov esi, ecx */
  esi = ecx;
/* eac04c: movq mm4, qword ptr [0xebc940] */
  MMX[4] = R64((uint32_t)(0xebc940u));
/* eac053: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* eac055: pfmul mm7, mm1 */
  guest_unsupported(0xeac055); /* pfmul mm7, mm1 */
/* eac059: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eac05b: pfmul mm6, mm1 */
  guest_unsupported(0xeac05b); /* pfmul mm6, mm1 */
/* eac05f: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* eac062: pfadd mm7, mm5 */
  guest_unsupported(0xeac062); /* pfadd mm7, mm5 */
/* eac066: xor ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* eac068: pfmul mm4, mm1 */
  guest_unsupported(0xeac068); /* pfmul mm4, mm1 */
/* eac06c: pfmul mm7, mm6 */
  guest_unsupported(0xeac06c); /* pfmul mm7, mm6 */
/* eac070: movq mm6, qword ptr [0xebc948] */
  MMX[6] = R64((uint32_t)(0xebc948u));
/* eac077: pfadd mm7, mm5 */
  guest_unsupported(0xeac077); /* pfadd mm7, mm5 */
/* eac07b: pfmul mm6, mm1 */
  guest_unsupported(0xeac07b); /* pfmul mm6, mm1 */
/* eac07f: pfmul mm4, mm7 */
  guest_unsupported(0xeac07f); /* pfmul mm4, mm7 */
/* eac083: movd mm0, edx */
  guest_unsupported(0xeac083); /* movd mm0, edx */
/* eac086: pfadd mm4, mm5 */
  guest_unsupported(0xeac086); /* pfadd mm4, mm5 */
/* eac08a: punpckldq mm6, mm5 */
  guest_unsupported(0xeac08a); /* punpckldq mm6, mm5 */
/* eac08d: psrlq mm5, 0x20 */
  guest_unsupported(0xeac08d); /* psrlq mm5, 0x20 */
/* eac091: pfmul mm4, mm6 */
  guest_unsupported(0xeac091); /* pfmul mm4, mm6 */
/* eac095: punpckldq mm0, mm0 */
  guest_unsupported(0xeac095); /* punpckldq mm0, mm0 */
/* eac098: movd mm1, ebx */
  guest_unsupported(0xeac098); /* movd mm1, ebx */
/* eac09b: pfadd mm4, mm5 */
  guest_unsupported(0xeac09b); /* pfadd mm4, mm5 */
/* eac09f: test ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac0a5: pfmul mm4, mm2 */
  guest_unsupported(0xeac0a5); /* pfmul mm4, mm2 */
/* eac0a9: je 0xeac0b1 */
  if (zf) goto L_eac0b1;
L_eac0ab: /* eac0ab: punpckldq mm5, mm4 */
  guest_unsupported(0xeac0ab); /* punpckldq mm5, mm4 */
/* eac0ae: punpckhdq mm4, mm5 */
  guest_unsupported(0xeac0ae); /* punpckhdq mm4, mm5 */
L_eac0b1: /* eac0b1: pxor mm4, mm1 */
  guest_unsupported(0xeac0b1); /* pxor mm4, mm1 */
/* eac0b4: pxor mm0, mm4 */
  guest_unsupported(0xeac0b4); /* pxor mm0, mm4 */
/* eac0b7: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eac0ba: pfrcp mm2, mm0 */
  guest_unsupported(0xeac0ba); /* pfrcp mm2, mm0 */
/* eac0be: punpckhdq mm1, mm1 */
  guest_unsupported(0xeac0be); /* punpckhdq mm1, mm1 */
/* eac0c1: pfrcpit1 mm0, mm2 */
  guest_unsupported(0xeac0c1); /* pfrcpit1 mm0, mm2 */
/* eac0c5: pfrcpit2 mm0, mm2 */
  guest_unsupported(0xeac0c5); /* pfrcpit2 mm0, mm2 */
/* eac0c9: pfmul mm0, mm1 */
  guest_unsupported(0xeac0c9); /* pfmul mm0, mm1 */
/* eac0cd: ret  */
  esp += 4; SPILL(); return;
}

void f_eac0ce(void) {
  LOAD_REGS();
  uint64_t MMX[8];
L_eac0ce: /* eac0ce: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eac0d5: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eac0dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* eac0e0: movq mm6, mm1 */
  MMX[6] = MMX[1];
/* eac0e3: pf2id mm6, mm6 */
  guest_unsupported(0xeac0e3); /* pf2id mm6, mm6 */
/* eac0e7: pslld mm6, 0x1f */
  guest_unsupported(0xeac0e7); /* pslld mm6, 0x1f */
/* eac0eb: pand mm6, mm0 */
  guest_unsupported(0xeac0eb); /* pand mm6, mm0 */
/* eac0ee: movd mm5, dword ptr [0xebc960] */
  guest_unsupported(0xeac0ee); /* movd mm5, dword ptr [0xebc960] */
/* eac0f5: movq mm4, mm0 */
  MMX[4] = MMX[0];
/* eac0f8: movd mm2, dword ptr [0xebc964] */
  guest_unsupported(0xeac0f8); /* movd mm2, dword ptr [0xebc964] */
/* eac0ff: pand mm0, mm5 */
  guest_unsupported(0xeac0ff); /* pand mm0, mm5 */
/* eac102: movd mm3, dword ptr [0xebc968] */
  guest_unsupported(0xeac102); /* movd mm3, dword ptr [0xebc968] */
/* eac109: pand mm4, mm2 */
  guest_unsupported(0xeac109); /* pand mm4, mm2 */
/* eac10c: por mm0, mm3 */
  guest_unsupported(0xeac10c); /* por mm0, mm3 */
/* eac10f: movd mm3, dword ptr [0xebc9d0] */
  guest_unsupported(0xeac10f); /* movd mm3, dword ptr [0xebc9d0] */
/* eac116: psrld mm4, 0x17 */
  guest_unsupported(0xeac116); /* psrld mm4, 0x17 */
/* eac11a: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eac11d: pxor mm5, mm5 */
  guest_unsupported(0xeac11d); /* pxor mm5, mm5 */
/* eac120: pcmpgtd mm0, mm3 */
  guest_unsupported(0xeac120); /* pcmpgtd mm0, mm3 */
/* eac123: pcmpeqd mm5, mm4 */
  guest_unsupported(0xeac123); /* pcmpeqd mm5, mm4 */
/* eac126: movd mm3, dword ptr [0xebc9d4] */
  guest_unsupported(0xeac126); /* movd mm3, dword ptr [0xebc9d4] */
/* eac12d: psubd mm4, mm0 */
  guest_unsupported(0xeac12d); /* psubd mm4, mm0 */
/* eac130: pand mm0, mm3 */
  guest_unsupported(0xeac130); /* pand mm0, mm3 */
/* eac133: movd mm3, dword ptr [0xebc9d8] */
  guest_unsupported(0xeac133); /* movd mm3, dword ptr [0xebc9d8] */
/* eac13a: psubd mm2, mm0 */
  guest_unsupported(0xeac13a); /* psubd mm2, mm0 */
/* eac13d: psubd mm4, mm3 */
  guest_unsupported(0xeac13d); /* psubd mm4, mm3 */
/* eac140: movd mm3, dword ptr [0xebc968] */
  guest_unsupported(0xeac140); /* movd mm3, dword ptr [0xebc968] */
/* eac147: movq mm0, mm2 */
  MMX[0] = MMX[2];
/* eac14a: pfadd mm2, mm3 */
  guest_unsupported(0xeac14a); /* pfadd mm2, mm3 */
/* eac14e: pfsub mm0, mm3 */
  guest_unsupported(0xeac14e); /* pfsub mm0, mm3 */
/* eac152: movd mm7, dword ptr [0xebc9dc] */
  guest_unsupported(0xeac152); /* movd mm7, dword ptr [0xebc9dc] */
/* eac159: pfrcp mm3, mm2 */
  guest_unsupported(0xeac159); /* pfrcp mm3, mm2 */
/* eac15d: pfrcpit1 mm2, mm3 */
  guest_unsupported(0xeac15d); /* pfrcpit1 mm2, mm3 */
/* eac161: pi2fd mm4, mm4 */
  guest_unsupported(0xeac161); /* pi2fd mm4, mm4 */
/* eac165: pfrcpit2 mm2, mm3 */
  guest_unsupported(0xeac165); /* pfrcpit2 mm2, mm3 */
/* eac169: pfmul mm0, mm2 */
  guest_unsupported(0xeac169); /* pfmul mm0, mm2 */
/* eac16d: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eac170: pfmul mm0, mm0 */
  guest_unsupported(0xeac170); /* pfmul mm0, mm0 */
/* eac174: movq mm3, mm0 */
  MMX[3] = MMX[0];
/* eac177: pfmul mm0, mm7 */
  guest_unsupported(0xeac177); /* pfmul mm0, mm7 */
/* eac17b: movd mm7, dword ptr [0xebc9e8] */
  guest_unsupported(0xeac17b); /* movd mm7, dword ptr [0xebc9e8] */
/* eac182: pfmul mm2, mm7 */
  guest_unsupported(0xeac182); /* pfmul mm2, mm7 */
/* eac186: movd mm7, dword ptr [0xebc9e0] */
  guest_unsupported(0xeac186); /* movd mm7, dword ptr [0xebc9e0] */
/* eac18d: pfadd mm0, mm7 */
  guest_unsupported(0xeac18d); /* pfadd mm0, mm7 */
/* eac191: movd mm7, dword ptr [0xebc9e4] */
  guest_unsupported(0xeac191); /* movd mm7, dword ptr [0xebc9e4] */
/* eac198: pfmul mm0, mm3 */
  guest_unsupported(0xeac198); /* pfmul mm0, mm3 */
/* eac19c: pfmul mm3, mm2 */
  guest_unsupported(0xeac19c); /* pfmul mm3, mm2 */
/* eac1a0: pfadd mm0, mm7 */
  guest_unsupported(0xeac1a0); /* pfadd mm0, mm7 */
/* eac1a4: movd mm7, dword ptr [0xebc9ec] */
  guest_unsupported(0xeac1a4); /* movd mm7, dword ptr [0xebc9ec] */
/* eac1ab: pfmul mm3, mm0 */
  guest_unsupported(0xeac1ab); /* pfmul mm3, mm0 */
/* eac1af: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* eac1b2: pfadd mm2, mm3 */
  guest_unsupported(0xeac1b2); /* pfadd mm2, mm3 */
/* eac1b6: pand mm5, mm7 */
  guest_unsupported(0xeac1b6); /* pand mm5, mm7 */
/* eac1b9: pfadd mm2, mm4 */
  guest_unsupported(0xeac1b9); /* pfadd mm2, mm4 */
/* eac1bd: pandn mm0, mm2 */
  guest_unsupported(0xeac1bd); /* pandn mm0, mm2 */
/* eac1c0: pfmul mm0, mm1 */
  guest_unsupported(0xeac1c0); /* pfmul mm0, mm1 */
/* eac1c4: por mm0, mm5 */
  guest_unsupported(0xeac1c4); /* por mm0, mm5 */
/* eac1c7: pf2id mm4, mm0 */
  guest_unsupported(0xeac1c7); /* pf2id mm4, mm0 */
/* eac1cb: movq mm5, mm0 */
  MMX[5] = MMX[0];
/* eac1ce: pi2fd mm1, mm4 */
  guest_unsupported(0xeac1ce); /* pi2fd mm1, mm4 */
/* eac1d2: movd mm3, dword ptr [0xebc9f0] */
  guest_unsupported(0xeac1d2); /* movd mm3, dword ptr [0xebc9f0] */
/* eac1d9: pfsub mm0, mm1 */
  guest_unsupported(0xeac1d9); /* pfsub mm0, mm1 */
/* eac1dd: movq mm1, mm0 */
  MMX[1] = MMX[0];
/* eac1e0: pfmul mm0, mm0 */
  guest_unsupported(0xeac1e0); /* pfmul mm0, mm0 */
/* eac1e4: movd mm7, dword ptr [0xebc9f4] */
  guest_unsupported(0xeac1e4); /* movd mm7, dword ptr [0xebc9f4] */
/* eac1eb: movq mm2, mm0 */
  MMX[2] = MMX[0];
/* eac1ee: pfadd mm0, mm3 */
  guest_unsupported(0xeac1ee); /* pfadd mm0, mm3 */
/* eac1f2: movq mm3, mm2 */
  MMX[3] = MMX[2];
/* eac1f5: pfmul mm2, mm7 */
  guest_unsupported(0xeac1f5); /* pfmul mm2, mm7 */
/* eac1f9: movd mm7, dword ptr [0xebc9fc] */
  guest_unsupported(0xeac1f9); /* movd mm7, dword ptr [0xebc9fc] */
/* eac200: pfmul mm0, mm3 */
  guest_unsupported(0xeac200); /* pfmul mm0, mm3 */
/* eac204: movd mm3, dword ptr [0xebc9f8] */
  guest_unsupported(0xeac204); /* movd mm3, dword ptr [0xebc9f8] */
/* eac20b: pfadd mm2, mm7 */
  guest_unsupported(0xeac20b); /* pfadd mm2, mm7 */
/* eac20f: movd mm7, dword ptr [0xebc970] */
  guest_unsupported(0xeac20f); /* movd mm7, dword ptr [0xebc970] */
/* eac216: pfadd mm0, mm3 */
  guest_unsupported(0xeac216); /* pfadd mm0, mm3 */
/* eac21a: pfmul mm2, mm1 */
  guest_unsupported(0xeac21a); /* pfmul mm2, mm1 */
/* eac21e: pfsub mm0, mm2 */
  guest_unsupported(0xeac21e); /* pfsub mm0, mm2 */
/* eac222: pfmul mm2, mm7 */
  guest_unsupported(0xeac222); /* pfmul mm2, mm7 */
/* eac226: pfrcp mm1, mm0 */
  guest_unsupported(0xeac226); /* pfrcp mm1, mm0 */
/* eac22a: movd mm7, dword ptr [0xebc968] */
  guest_unsupported(0xeac22a); /* movd mm7, dword ptr [0xebc968] */
/* eac231: pfrcpit1 mm0, mm1 */
  guest_unsupported(0xeac231); /* pfrcpit1 mm0, mm1 */
/* eac235: pslld mm4, 0x17 */
  guest_unsupported(0xeac235); /* pslld mm4, 0x17 */
/* eac239: pfrcpit2 mm0, mm1 */
  guest_unsupported(0xeac239); /* pfrcpit2 mm0, mm1 */
/* eac23d: movd mm3, dword ptr [0xebca00] */
  guest_unsupported(0xeac23d); /* movd mm3, dword ptr [0xebca00] */
/* eac244: pfmul mm2, mm0 */
  guest_unsupported(0xeac244); /* pfmul mm2, mm0 */
/* eac248: movd mm1, dword ptr [0xebca04] */
  guest_unsupported(0xeac248); /* movd mm1, dword ptr [0xebca04] */
/* eac24f: pfadd mm2, mm7 */
  guest_unsupported(0xeac24f); /* pfadd mm2, mm7 */
/* eac253: movq mm0, mm5 */
  MMX[0] = MMX[5];
/* eac256: pfcmpge mm5, mm3 */
  guest_unsupported(0xeac256); /* pfcmpge mm5, mm3 */
/* eac25a: pfcmpge mm0, mm1 */
  guest_unsupported(0xeac25a); /* pfcmpge mm0, mm1 */
/* eac25e: movd mm1, dword ptr [0xebca08] */
  guest_unsupported(0xeac25e); /* movd mm1, dword ptr [0xebca08] */
/* eac265: paddd mm4, mm2 */
  guest_unsupported(0xeac265); /* paddd mm4, mm2 */
/* eac268: pand mm1, mm0 */
  guest_unsupported(0xeac268); /* pand mm1, mm0 */
/* eac26b: pand mm5, mm4 */
  guest_unsupported(0xeac26b); /* pand mm5, mm4 */
/* eac26e: pandn mm0, mm5 */
  guest_unsupported(0xeac26e); /* pandn mm0, mm5 */
/* eac271: por mm0, mm1 */
  guest_unsupported(0xeac271); /* por mm0, mm1 */
/* eac274: pxor mm0, mm6 */
  guest_unsupported(0xeac274); /* pxor mm0, mm6 */
/* eac277: ret  */
  esp += 4; SPILL(); return;
}

void f_eac278(void) {
  LOAD_REGS();
L_eac278: /* eac278: jmp dword ptr [0xeae030] */
  SPILL(); f_4e44fd(); return; /* Core!?Tick@USubsystem@@UAEXM@Z */
}

void f_eac27e(void) {
  LOAD_REGS();
L_eac27e: /* eac27e: jmp dword ptr [0xeae034] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_eac284(void) {
  LOAD_REGS();
L_eac284: /* eac284: jmp dword ptr [0xeae038] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_eac28a(void) {
  LOAD_REGS();
L_eac28a: /* eac28a: jmp dword ptr [0xeae03c] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_eac290(void) {
  LOAD_REGS();
L_eac290: /* eac290: jmp dword ptr [0xeae040] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_eac296(void) {
  LOAD_REGS();
L_eac296: /* eac296: jmp dword ptr [0xeae044] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_eac29c(void) {
  LOAD_REGS();
L_eac29c: /* eac29c: jmp dword ptr [0xeae048] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_eac2a2(void) {
  LOAD_REGS();
L_eac2a2: /* eac2a2: jmp dword ptr [0xeae04c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_eac2a8(void) {
  LOAD_REGS();
L_eac2a8: /* eac2a8: jmp dword ptr [0xeae050] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_eac2ae(void) {
  LOAD_REGS();
L_eac2ae: /* eac2ae: jmp dword ptr [0xeae054] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_eac2b4(void) {
  LOAD_REGS();
L_eac2b4: /* eac2b4: jmp dword ptr [0xeae058] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_eac2ba(void) {
  LOAD_REGS();
L_eac2ba: /* eac2ba: jmp dword ptr [0xeae05c] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_eac2c0(void) {
  LOAD_REGS();
L_eac2c0: /* eac2c0: jmp dword ptr [0xeae060] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_eac2c6(void) {
  LOAD_REGS();
L_eac2c6: /* eac2c6: jmp dword ptr [0xeae064] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_eac2cc(void) {
  LOAD_REGS();
L_eac2cc: /* eac2cc: jmp dword ptr [0xeae068] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_eac2d2(void) {
  LOAD_REGS();
L_eac2d2: /* eac2d2: jmp dword ptr [0xeae06c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_eac2d8(void) {
  LOAD_REGS();
L_eac2d8: /* eac2d8: jmp dword ptr [0xeae070] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_eac2de(void) {
  LOAD_REGS();
L_eac2de: /* eac2de: jmp dword ptr [0xeae074] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_eac2e4(void) {
  LOAD_REGS();
L_eac2e4: /* eac2e4: jmp dword ptr [0xeae078] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_eac2ea(void) {
  LOAD_REGS();
L_eac2ea: /* eac2ea: jmp dword ptr [0xeae07c] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_eac2f0(void) {
  LOAD_REGS();
L_eac2f0: /* eac2f0: jmp dword ptr [0xeae080] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_eac2f6(void) {
  LOAD_REGS();
L_eac2f6: /* eac2f6: jmp dword ptr [0xeae084] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_eac2fc(void) {
  LOAD_REGS();
L_eac2fc: /* eac2fc: jmp dword ptr [0xeae088] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_eac302(void) {
  LOAD_REGS();
L_eac302: /* eac302: jmp dword ptr [0xeae08c] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_eac308(void) {
  LOAD_REGS();
L_eac308: /* eac308: jmp dword ptr [0xeae090] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_eac30e(void) {
  LOAD_REGS();
L_eac30e: /* eac30e: jmp dword ptr [0xeae094] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_eac314(void) {
  LOAD_REGS();
L_eac314: /* eac314: jmp dword ptr [0xeae0dc] */
  SPILL(); f_4e40fc(); return; /* Core!?CopyCompleteValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac31a(void) {
  LOAD_REGS();
L_eac31a: /* eac31a: jmp dword ptr [0xeae0e0] */
  SPILL(); f_4e2527(); return; /* Core!?CopySingleValue@UFloatProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac320(void) {
  LOAD_REGS();
L_eac320: /* eac320: jmp dword ptr [0xeae0e4] */
  SPILL(); f_4e10d2(); return; /* Core!?ImportText@UFloatProperty@@UBEPBGPBGPAEH@Z */
}

void f_eac326(void) {
  LOAD_REGS();
L_eac326: /* eac326: jmp dword ptr [0xeae0e8] */
  SPILL(); f_4e3b2f(); return; /* Core!?ExportTextItem@UFloatProperty@@UBEXPAGPAE1H@Z */
}

void f_eac32c(void) {
  LOAD_REGS();
L_eac32c: /* eac32c: jmp dword ptr [0xeae0ec] */
  SPILL(); f_4e359e(); return; /* Core!?NetSerializeItem@UFloatProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eac332(void) {
  LOAD_REGS();
L_eac332: /* eac332: jmp dword ptr [0xeae0f0] */
  SPILL(); f_4e30d0(); return; /* Core!?SerializeItem@UFloatProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eac338(void) {
  LOAD_REGS();
L_eac338: /* eac338: jmp dword ptr [0xeae0f4] */
  SPILL(); f_4e235b(); return; /* Core!?ExportCppItem@UFloatProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eac33e(void) {
  LOAD_REGS();
L_eac33e: /* eac33e: jmp dword ptr [0xeae0f8] */
  SPILL(); f_4e2937(); return; /* Core!?Identical@UFloatProperty@@UBEHPBX0@Z */
}

void f_eac344(void) {
  LOAD_REGS();
L_eac344: /* eac344: jmp dword ptr [0xeae0fc] */
  SPILL(); f_4e33c3(); return; /* Core!?Link@UFloatProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eac34a(void) {
  LOAD_REGS();
L_eac34a: /* eac34a: jmp dword ptr [0xeae100] */
  SPILL(); f_4e3ff3(); return; /* Core!?CopyCompleteValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac350(void) {
  LOAD_REGS();
L_eac350: /* eac350: jmp dword ptr [0xeae104] */
  SPILL(); f_4e2365(); return; /* Core!?CopySingleValue@UIntProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac356(void) {
  LOAD_REGS();
L_eac356: /* eac356: jmp dword ptr [0xeae108] */
  SPILL(); f_4e1140(); return; /* Core!?ImportText@UIntProperty@@UBEPBGPBGPAEH@Z */
}

void f_eac35c(void) {
  LOAD_REGS();
L_eac35c: /* eac35c: jmp dword ptr [0xeae10c] */
  SPILL(); f_4e35f8(); return; /* Core!?ExportTextItem@UIntProperty@@UBEXPAGPAE1H@Z */
}

void f_eac362(void) {
  LOAD_REGS();
L_eac362: /* eac362: jmp dword ptr [0xeae110] */
  SPILL(); f_4e23d3(); return; /* Core!?NetSerializeItem@UIntProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eac368(void) {
  LOAD_REGS();
L_eac368: /* eac368: jmp dword ptr [0xeae114] */
  SPILL(); f_4e31bb(); return; /* Core!?SerializeItem@UIntProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eac36e(void) {
  LOAD_REGS();
L_eac36e: /* eac36e: jmp dword ptr [0xeae118] */
  SPILL(); f_4e439a(); return; /* Core!?ExportCppItem@UIntProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eac374(void) {
  LOAD_REGS();
L_eac374: /* eac374: jmp dword ptr [0xeae11c] */
  SPILL(); f_4e118b(); return; /* Core!?Identical@UIntProperty@@UBEHPBX0@Z */
}

void f_eac37a(void) {
  LOAD_REGS();
L_eac37a: /* eac37a: jmp dword ptr [0xeae120] */
  SPILL(); f_4e3279(); return; /* Core!?Link@UIntProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eac380(void) {
  LOAD_REGS();
L_eac380: /* eac380: jmp dword ptr [0xeae124] */
  SPILL(); f_4e12fd(); return; /* Core!?Serialize@UProperty@@UAEXAAVFArchive@@@Z */
}

void f_eac386(void) {
  LOAD_REGS();
L_eac386: /* eac386: jmp dword ptr [0xeae128] */
  SPILL(); f_4e3508(); return; /* Core!?GetID@UProperty@@UBEEXZ */
}

void f_eac38c(void) {
  LOAD_REGS();
L_eac38c: /* eac38c: jmp dword ptr [0xeae12c] */
  SPILL(); f_4e1e1f(); return; /* Core!?Port@UProperty@@UBEHXZ */
}

void f_eac392(void) {
  LOAD_REGS();
L_eac392: /* eac392: jmp dword ptr [0xeae130] */
  SPILL(); f_4e2fa4(); return; /* Core!?DestroyValue@UProperty@@UBEXPAX@Z */
}

void f_eac398(void) {
  LOAD_REGS();
L_eac398: /* eac398: jmp dword ptr [0xeae134] */
  SPILL(); f_4e445d(); return; /* Core!?CopyCompleteValue@UProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac39e(void) {
  LOAD_REGS();
L_eac39e: /* eac39e: jmp dword ptr [0xeae138] */
  SPILL(); f_4e2b6c(); return; /* Core!?CopySingleValue@UBoolProperty@@UBEXPAX0PAVUObject@@@Z */
}

void f_eac3a4(void) {
  LOAD_REGS();
L_eac3a4: /* eac3a4: jmp dword ptr [0xeae13c] */
  SPILL(); f_4e1e88(); return; /* Core!?ExportText@UProperty@@UBEHHPAGPAE1H@Z */
}

void f_eac3aa(void) {
  LOAD_REGS();
L_eac3aa: /* eac3aa: jmp dword ptr [0xeae140] */
  SPILL(); f_4e23ab(); return; /* Core!?ImportText@UBoolProperty@@UBEPBGPBGPAEH@Z */
}

void f_eac3b0(void) {
  LOAD_REGS();
L_eac3b0: /* eac3b0: jmp dword ptr [0xeae144] */
  SPILL(); f_4e17ad(); return; /* Core!?ExportTextItem@UBoolProperty@@UBEXPAGPAE1H@Z */
}

void f_eac3b6(void) {
  LOAD_REGS();
L_eac3b6: /* eac3b6: jmp dword ptr [0xeae148] */
  SPILL(); f_4e1802(); return; /* Core!?NetSerializeItem@UBoolProperty@@UBEHAAVFArchive@@PAVUPackageMap@@PAX@Z */
}

void f_eac3bc(void) {
  LOAD_REGS();
L_eac3bc: /* eac3bc: jmp dword ptr [0xeae14c] */
  SPILL(); f_4e20f9(); return; /* Core!?SerializeItem@UBoolProperty@@UBEXAAVFArchive@@PAXH@Z */
}

void f_eac3c2(void) {
  LOAD_REGS();
L_eac3c2: /* eac3c2: jmp dword ptr [0xeae150] */
  SPILL(); f_4e20cc(); return; /* Core!?ExportCppItem@UBoolProperty@@UBEXAAVFOutputDevice@@H@Z */
}

void f_eac3c8(void) {
  LOAD_REGS();
L_eac3c8: /* eac3c8: jmp dword ptr [0xeae154] */
  SPILL(); f_4e269e(); return; /* Core!?ExportCpp@UProperty@@UBEXAAVFOutputDevice@@HHHH@Z */
}

void f_eac3ce(void) {
  LOAD_REGS();
L_eac3ce: /* eac3ce: jmp dword ptr [0xeae158] */
  SPILL(); f_4e3a35(); return; /* Core!?Identical@UBoolProperty@@UBEHPBX0@Z */
}

void f_eac3d4(void) {
  LOAD_REGS();
L_eac3d4: /* eac3d4: jmp dword ptr [0xeae15c] */
  SPILL(); f_4e40cf(); return; /* Core!?Link@UBoolProperty@@UAEXAAVFArchive@@PAVUProperty@@@Z */
}

void f_eac3da(void) {
  LOAD_REGS();
L_eac3da: /* eac3da: jmp dword ptr [0xeae160] */
  SPILL(); f_4e34e5(); return; /* Core!?CleanupDestroyed@UProperty@@UBEXPAE@Z */
}

void f_eac3e0(void) {
  LOAD_REGS();
L_eac3e0: /* eac3e0: jmp dword ptr [0xeae164] */
  SPILL(); f_4e1023(); return; /* Core!?GetPropertiesSize@UField@@UAEHXZ */
}

void f_eac3e6(void) {
  LOAD_REGS();
L_eac3e6: /* eac3e6: jmp dword ptr [0xeae168] */
  SPILL(); f_4e1901(); return; /* Core!?GetOwnerClass@UField@@UAEPAVUClass@@XZ */
}

void f_eac3ec(void) {
  LOAD_REGS();
L_eac3ec: /* eac3ec: jmp dword ptr [0xeae16c] */
  SPILL(); f_4e2342(); return; /* Core!?Bind@UField@@UAEXXZ */
}

void f_eac3f2(void) {
  LOAD_REGS();
L_eac3f2: /* eac3f2: jmp dword ptr [0xeae170] */
  SPILL(); f_4e1ee7(); return; /* Core!?MergeBools@UField@@UAEHXZ */
}

void f_eac3f8(void) {
  LOAD_REGS();
L_eac3f8: /* eac3f8: jmp dword ptr [0xeae174] */
  SPILL(); f_4e36f7(); return; /* Core!?AddCppProperty@UField@@UAEXPAVUProperty@@@Z */
}

void f_eac3fe(void) {
  LOAD_REGS();
L_eac3fe: /* eac3fe: jmp dword ptr [0xeae178] */
  SPILL(); f_4e15f0(); return; /* Core!?Register@UField@@UAEXXZ */
}

void f_eac404(void) {
  LOAD_REGS();
L_eac404: /* eac404: jmp dword ptr [0xeae17c] */
  SPILL(); f_4e1e51(); return; /* Core!?Serialize@UBoolProperty@@UAEXAAVFArchive@@@Z */
}

void f_eac40a(void) {
  LOAD_REGS();
L_eac40a: /* eac40a: jmp dword ptr [0xeae180] */
  SPILL(); f_4e3652(); return; /* Core!?PostLoad@UField@@UAEXXZ */
}

void f_eac410(void) {
  LOAD_REGS();
L_eac410: /* eac410: jmp dword ptr [0xeae248] */
  SPILL(); f_6c82d8(); return; /* Engine!?PixoIsVisible@FRenderInterface@@UAEHAAVFBox@@@Z */
}

void f_eac416(void) {
  LOAD_REGS();
L_eac416: /* eac416: jmp dword ptr [0xeae24c] */
  SPILL(); f_6c6e1a(); return; /* Engine!?PixoCreateTexture@FRenderInterface@@UAEPAVUTexture@@PAVFRenderTarget@@H@Z */
}

void f_eac41c(void) {
  LOAD_REGS();
L_eac41c: /* eac41c: jmp dword ptr [0xeae250] */
  SPILL(); f_6c9b01(); return; /* Engine!?PixoResetHint@FRenderInterface@@UAEXK@Z */
}

void f_eac422(void) {
  LOAD_REGS();
L_eac422: /* eac422: jmp dword ptr [0xeae254] */
  SPILL(); f_6c21e9(); return; /* Engine!?PixoSetHint@FRenderInterface@@UAEXK@Z */
}

void f_eac436(void) {
  LOAD_REGS();
L_eac436: /* eac436: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* eac438: push 0xeb6490 */
  { uint32_t v = 0xeb6490u; esp -= 4; W32(esp, v); }
/* eac43d: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac442u); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac442: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_eac446: /* eac446: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* eac449: js 0xeac459 */
  if (sf) goto L_eac459;
L_eac44b: /* eac44b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eac44e: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eac451: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* eac454: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeac457u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac457: jmp 0xeac446 */
  goto L_eac446;
L_eac459: /* eac459: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac45d: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac462u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac462: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eac465(void) {
  LOAD_REGS();
L_eac465: /* eac465: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* eac468: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eac46b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eac46e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac470: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* eac473: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eac476: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac47c: je 0xeac48e */
  if (zf) goto L_eac48e;
L_eac47e: /* eac47e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* eac485: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* eac488: ret  */
  esp += 4; SPILL(); return;
L_eac48e: /* eac48e: call 0xeac8d0 */
  esp -= 4; W32(esp, 0xeac493u); SPILL(); f_eac8d0(); if (g_unwind) return; RELOAD();
L_eac493: guest_badaddr(0xeac493); return;
}

void f_eac489(void) {
  LOAD_REGS();
  goto L_eac489;
L_eac459: /* eac459: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac45d: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac462u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac462: ret 0x10 */
  esp += 20; SPILL(); return;
L_eac489: /* eac489: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* eac48c: jmp 0xeac459 */
  goto L_eac459;
}

void f_eac494(void) {
  LOAD_REGS();
L_eac494: /* eac494: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eac496: push 0xeb64a0 */
  { uint32_t v = 0xeb64a0u; esp -= 4; W32(esp, v); }
/* eac49b: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac4a0u); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac4a0: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eac4a4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* eac4a7: mov eax, esi */
  eax = esi;
/* eac4a9: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* eac4ad: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eac4b0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_eac4b4: /* eac4b4: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* eac4b7: js 0xeac4c4 */
  if (sf) goto L_eac4c4;
L_eac4b9: /* eac4b9: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eac4bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eac4bf: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeac4c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac4c2: jmp 0xeac4b4 */
  goto L_eac4b4;
L_eac4c4: /* eac4c4: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eac4cb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac4cf: call 0xeac4dc */
  esp -= 4; W32(esp, 0xeac4d4u); SPILL(); f_eac4dc(); if (g_unwind) return; RELOAD();
/* eac4d4: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac4d9u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac4d9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eac4dc(void) {
  LOAD_REGS();
L_eac4dc: /* eac4dc: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac4e0: jne 0xeac4f3 */
  if (!zf) goto L_eac4f3;
L_eac4e2: /* eac4e2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* eac4e5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* eac4e8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eac4eb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eac4ee: call 0xeac436 */
  esp -= 4; W32(esp, 0xeac4f3u); SPILL(); f_eac436(); if (g_unwind) return; RELOAD();
L_eac4f3: /* eac4f3: ret  */
  esp += 4; SPILL(); return;
}

void f_eac4f4(void) {
  LOAD_REGS();
L_eac4f4: /* eac4f4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eac4f6: push 0xeb64b0 */
  { uint32_t v = 0xeb64b0u; esp -= 4; W32(esp, v); }
/* eac4fb: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac500u); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac500: xor eax, eax */
  eax = 0;
/* eac502: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eac505: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* eac508: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_eac50b: /* eac50b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eac50e: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eac511: jge 0xeac52a */
  if ((sf == of)) goto L_eac52a;
L_eac513: /* eac513: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eac516: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* eac519: call dword ptr [ebp + 0x18] */
  { uint32_t t = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, 0xeac51cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac51c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* eac51f: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* eac522: add dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* eac525: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* eac528: jmp 0xeac50b */
  goto L_eac50b;
L_eac52a: /* eac52a: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eac531: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac535: call 0xeac542 */
  esp -= 4; W32(esp, 0xeac53au); SPILL(); f_eac542(); if (g_unwind) return; RELOAD();
/* eac53a: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac53fu); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac53f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_eac542(void) {
  LOAD_REGS();
L_eac542: /* eac542: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac546: jne 0xeac559 */
  if (!zf) goto L_eac559;
L_eac548: /* eac548: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* eac54b: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* eac54e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* eac551: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eac554: call 0xeac436 */
  esp -= 4; W32(esp, 0xeac559u); SPILL(); f_eac436(); if (g_unwind) return; RELOAD();
L_eac559: /* eac559: ret  */
  esp += 4; SPILL(); return;
}

void f_eac560(void) {
  LOAD_REGS();
L_eac560: /* eac560: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eac564: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* eac568: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* eac56a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* eac56e: jne 0xeac579 */
  if (!zf) goto L_eac579;
L_eac570: /* eac570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* eac574: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* eac576: ret 0x10 */
  esp += 20; SPILL(); return;
L_eac579: /* eac579: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac57a: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* eac57c: mov ebx, eax */
  ebx = eax;
/* eac57e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eac582: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* eac586: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* eac588: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eac58c: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* eac58e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* eac590: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eac591: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_eac594(void) {
  LOAD_REGS();
L_eac594: /* eac594: cmp dword ptr [0xebef50], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef50u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac59b: jne 0xeac5a3 */
  if (!zf) goto L_eac5a3;
L_eac59d: /* eac59d: jmp dword ptr [0xeae318] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_eac5a3: /* eac5a3: push 0xebef4c */
  { uint32_t v = 0xebef4cu; esp -= 4; W32(esp, v); }
/* eac5a8: push 0xebef50 */
  { uint32_t v = 0xebef50u; esp -= 4; W32(esp, v); }
/* eac5ad: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* eac5b1: call 0xeac924 */
  esp -= 4; W32(esp, 0xeac5b6u); SPILL(); f_eac924(); if (g_unwind) return; RELOAD();
/* eac5b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* eac5b9: ret  */
  esp += 4; SPILL(); return;
}

void f_eac5ba(void) {
  LOAD_REGS();
L_eac5ba: /* eac5ba: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* eac5be: call 0xeac594 */
  esp -= 4; W32(esp, 0xeac5c3u); SPILL(); f_eac594(); if (g_unwind) return; RELOAD();
/* eac5c3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* eac5c5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* eac5c7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* eac5c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eac5ca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* eac5cb: ret  */
  esp += 4; SPILL(); return;
}

void f_eac5cc(void) {
  LOAD_REGS();
L_eac5cc: /* eac5cc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* eac5ce: push 0xeb64c0 */
  { uint32_t v = 0xeb64c0u; esp -= 4; W32(esp, v); }
/* eac5d3: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac5d8u); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac5d8: xor eax, eax */
  eax = 0;
/* eac5da: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* eac5dd: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* eac5e0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_eac5e3: /* eac5e3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* eac5e6: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eac5e9: jge 0xeac5fe */
  if ((sf == of)) goto L_eac5fe;
L_eac5eb: /* eac5eb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* eac5ee: mov ecx, esi */
  ecx = esi;
/* eac5f0: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xeac5f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac5f3: add esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* eac5f6: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* eac5f9: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* eac5fc: jmp 0xeac5e3 */
  goto L_eac5e3;
L_eac5fe: /* eac5fe: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* eac605: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac609: call 0xeac616 */
  esp -= 4; W32(esp, 0xeac60eu); SPILL(); f_eac616(); if (g_unwind) return; RELOAD();
/* eac60e: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac613u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac613: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_eac616(void) {
  LOAD_REGS();
L_eac616: /* eac616: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac61a: jne 0xeac62d */
  if (!zf) goto L_eac62d;
L_eac61c: /* eac61c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* eac61f: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* eac622: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* eac625: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* eac628: call 0xeac436 */
  esp -= 4; W32(esp, 0xeac62du); SPILL(); f_eac436(); if (g_unwind) return; RELOAD();
L_eac62d: /* eac62d: ret  */
  esp += 4; SPILL(); return;
}

void f_eac630(void) {
  LOAD_REGS();
L_eac630: /* eac630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eac631: mov ebp, esp */
  ebp = esp;
/* eac633: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eac636: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* eac639: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* eac63b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* eac63f: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* eac643: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* eac647: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* eac64b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eac64f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac651: je 0xeac68f */
  if (zf) goto L_eac68f;
L_eac653: /* eac653: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* eac655: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* eac657: jns 0xeac677 */
  if (!sf) goto L_eac677;
L_eac659: /* eac659: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* eac65c: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* eac65f: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* eac665: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* eac66b: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* eac66e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eac672: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* eac675: jmp 0xeac6a3 */
  goto L_eac6a3;
L_eac677: /* eac677: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* eac67a: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* eac67d: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* eac683: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* eac686: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eac68a: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* eac68d: jmp 0xeac6a3 */
  goto L_eac6a3;
L_eac68f: /* eac68f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* eac693: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac699: jne 0xeac653 */
  if (!zf) goto L_eac653;
L_eac69b: /* eac69b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* eac69f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_eac6a3: /* eac6a3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eac6a4: ret  */
  esp += 4; SPILL(); return;
}

void f_eac6a5(void) {
  LOAD_REGS();
L_eac6a5: /* eac6a5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* eac6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac6ab: jne 0xeac6bb */
  if (!zf) goto L_eac6bb;
L_eac6ad: /* eac6ad: cmp dword ptr [0xebef10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* eac6b3: jle 0xeac6e3 */
  if ((zf || sf != of)) goto L_eac6e3;
L_eac6b5: /* eac6b5: dec dword ptr [0xebef10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xebef10u), r);
  }
L_eac6bb: /* eac6bb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac6be: mov ecx, dword ptr [0xeae310] */
  ecx = R32((uint32_t)(0xeae310u));
/* eac6c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eac6c6: mov dword ptr [0xebef44], ecx */
  W32((uint32_t)(0xebef44u), ecx);
/* eac6cc: jne 0xeac71d */
  if (!zf) goto L_eac71d;
L_eac6ce: /* eac6ce: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* eac6d3: call dword ptr [0xeae324] */
  esp -= 4; W32(esp, 0xeac6d9u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* eac6d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac6db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eac6dc: mov dword ptr [0xebef50], eax */
  W32((uint32_t)(0xebef50u), eax);
/* eac6e1: jne 0xeac6e7 */
  if (!zf) goto L_eac6e7;
L_eac6e3: /* eac6e3: xor eax, eax */
  eax = 0;
/* eac6e5: jmp 0xeac760 */
  goto L_eac760;
L_eac6e7: /* eac6e7: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* eac6ea: mov eax, dword ptr [0xebef50] */
  eax = R32((uint32_t)(0xebef50u));
/* eac6ef: mov dword ptr [0xebef4c], eax */
  W32((uint32_t)(0xebef4cu), eax);
/* eac6f4: call 0xeac930 */
  esp -= 4; W32(esp, 0xeac6f9u); SPILL(); f_eac930(); if (g_unwind) return; RELOAD();
/* eac6f9: push 0xeac974 */
  { uint32_t v = 0xeac974u; esp -= 4; W32(esp, v); }
/* eac6fe: call 0xeac5ba */
  esp -= 4; W32(esp, 0xeac703u); SPILL(); f_eac5ba(); if (g_unwind) return; RELOAD();
/* eac703: mov dword ptr [esp], 0xeba00c */
  W32((uint32_t)(esp), 0xeba00cu);
/* eac70a: push 0xeba000 */
  { uint32_t v = 0xeba000u; esp -= 4; W32(esp, v); }
/* eac70f: call 0xeac92a */
  esp -= 4; W32(esp, 0xeac714u); SPILL(); f_eac92a(); if (g_unwind) return; RELOAD();
/* eac714: inc dword ptr [0xebef10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xebef10u), r);
  }
/* eac71a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eac71b: jmp 0xeac75c */
  goto L_eac75c;
L_eac71d: /* eac71d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac71f: jne 0xeac75d */
  if (!zf) goto L_eac75d;
L_eac721: /* eac721: mov eax, dword ptr [0xebef50] */
  eax = R32((uint32_t)(0xebef50u));
/* eac726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac728: je 0xeac75d */
  if (zf) goto L_eac75d;
L_eac72a: /* eac72a: jmp 0xeac73f */
  goto L_eac73f;
L_eac72c: /* eac72c: mov ecx, dword ptr [0xebef4c] */
  ecx = R32((uint32_t)(0xebef4cu));
/* eac732: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* eac734: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac736: je 0xeac73f */
  if (zf) goto L_eac73f;
L_eac738: /* eac738: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xeac73au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac73a: mov eax, dword ptr [0xebef50] */
  eax = R32((uint32_t)(0xebef50u));
L_eac73f: /* eac73f: sub dword ptr [0xebef4c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef4cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xebef4cu), r);
  }
/* eac746: cmp dword ptr [0xebef4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac74c: jae 0xeac72c */
  if (!cf) goto L_eac72c;
L_eac74e: /* eac74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac74f: call dword ptr [0xeae354] */
  esp -= 4; W32(esp, 0xeac755u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* eac755: and dword ptr [0xebef50], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef50u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xebef50u), r);
  }
L_eac75c: /* eac75c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_eac75d: /* eac75d: xor eax, eax */
  eax = 0;
/* eac75f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_eac760: /* eac760: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eac763(void) {
  LOAD_REGS();
L_eac763: /* eac763: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* eac764: mov ebp, esp */
  ebp = esp;
/* eac766: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac767: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* eac76a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac76b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* eac76e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac771: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* eac774: jne 0xeac77f */
  if (!zf) goto L_eac77f;
L_eac776: /* eac776: cmp dword ptr [0xebef10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xebef10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac77d: jmp 0xeac7a5 */
  goto L_eac7a5;
L_eac77f: /* eac77f: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac782: je 0xeac789 */
  if (zf) goto L_eac789;
L_eac784: /* eac784: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac787: jne 0xeac7ab */
  if (!zf) goto L_eac7ab;
L_eac789: /* eac789: mov eax, dword ptr [0xebef48] */
  eax = R32((uint32_t)(0xebef48u));
/* eac78e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac790: je 0xeac79b */
  if (zf) goto L_eac79b;
L_eac792: /* eac792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac794: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac795: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac797u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac797: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac799: je 0xeac7a7 */
  if (zf) goto L_eac7a7;
L_eac79b: /* eac79b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac79c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac79d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac79e: call 0xeac6a5 */
  esp -= 4; W32(esp, 0xeac7a3u); SPILL(); f_eac6a5(); if (g_unwind) return; RELOAD();
/* eac7a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_eac7a5: /* eac7a5: jne 0xeac7ab */
  if (!zf) goto L_eac7ab;
L_eac7a7: /* eac7a7: xor eax, eax */
  eax = 0;
/* eac7a9: jmp 0xeac7f9 */
  goto L_eac7f9;
L_eac7ab: /* eac7ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac7ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac7ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac7ae: call 0xe81000 */
  esp -= 4; W32(esp, 0xeac7b3u); SPILL(); f_e81000(); if (g_unwind) return; RELOAD();
/* eac7b3: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac7b6: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* eac7b9: jne 0xeac7c7 */
  if (!zf) goto L_eac7c7;
L_eac7bb: /* eac7bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac7bd: jne 0xeac7f6 */
  if (!zf) goto L_eac7f6;
L_eac7bf: /* eac7bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac7c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac7c2: call 0xeac6a5 */
  esp -= 4; W32(esp, 0xeac7c7u); SPILL(); f_eac6a5(); if (g_unwind) return; RELOAD();
L_eac7c7: /* eac7c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac7c9: je 0xeac7d0 */
  if (zf) goto L_eac7d0;
L_eac7cb: /* eac7cb: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac7ce: jne 0xeac7f6 */
  if (!zf) goto L_eac7f6;
L_eac7d0: /* eac7d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac7d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac7d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac7d3: call 0xeac6a5 */
  esp -= 4; W32(esp, 0xeac7d8u); SPILL(); f_eac6a5(); if (g_unwind) return; RELOAD();
/* eac7d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac7da: jne 0xeac7df */
  if (!zf) goto L_eac7df;
L_eac7dc: /* eac7dc: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_eac7df: /* eac7df: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* eac7e3: je 0xeac7f6 */
  if (zf) goto L_eac7f6;
L_eac7e5: /* eac7e5: mov eax, dword ptr [0xebef48] */
  eax = R32((uint32_t)(0xebef48u));
/* eac7ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac7ec: je 0xeac7f6 */
  if (zf) goto L_eac7f6;
L_eac7ee: /* eac7ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac7ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac7f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac7f1: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac7f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac7f3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_eac7f6: /* eac7f6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_eac7f9: /* eac7f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eac7fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eac7fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eac7fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* eac7fd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_eac800(void) { hle_CIacos(); }

void f_eac806(void) {
  LOAD_REGS();
L_eac806: /* eac806: jmp dword ptr [0xeae330] */
  SPILL(); f_432b75(); return; /* MSVCR70!_finite */
}

void f_eac810(void) {
  LOAD_REGS();
L_eac810: /* eac810: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac815: jae 0xeac825 */
  if (!cf) goto L_eac825;
L_eac817: /* eac817: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* eac819: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eac81b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eac81e: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eac820: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* eac821: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac824: ret  */
  esp += 4; SPILL(); return;
L_eac825: /* eac825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eac826: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_eac82a: /* eac82a: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eac830: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* eac835: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eac837: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac83c: jae 0xeac82a */
  if (!cf) goto L_eac82a;
L_eac83e: /* eac83e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* eac840: mov eax, esp */
  eax = esp;
/* eac842: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* eac844: mov esp, ecx */
  esp = ecx;
/* eac846: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* eac848: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* eac84b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac84c: ret  */
  esp += 4; SPILL(); return;
}

void f_eac84e(void) {
  LOAD_REGS();
L_eac84e: /* eac84e: jmp dword ptr [0xeae334] */
  SPILL(); f_42b6a5(); return; /* MSVCR70!_snprintf */
}

void f_eac854(void) {
  LOAD_REGS();
L_eac854: /* eac854: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* eac856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eac85d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac85e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* eac862: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* eac869: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* eac86d: lea ebp, [esp + 0xc] */
  ebp = (uint32_t)(esp + 0xcu);
/* eac871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac872: ret  */
  esp += 4; SPILL(); return;
}

void f_eac874(void) {
  LOAD_REGS();
L_eac874: /* eac874: jmp dword ptr [0xeae338] */
  SPILL(); f_42ba9c(); return; /* MSVCR70!_vsnprintf */
}

void f_eac87a(void) {
  LOAD_REGS();
L_eac87a: /* eac87a: jmp dword ptr [0xeae33c] */
  SPILL(); f_4152ea(); return; /* MSVCR70!atoi */
}

void f_eac880(void) {
  LOAD_REGS();
L_eac880: /* eac880: jmp dword ptr [0xeae340] */
  SPILL(); f_40152b(); return; /* MSVCR70!isdigit */
}

void f_eac886(void) {
  LOAD_REGS();
L_eac886: /* eac886: jmp dword ptr [0xeae344] */
  SPILL(); f_415396(); return; /* MSVCR70!isalpha */
}

void f_eac88c(void) {
  LOAD_REGS();
L_eac88c: /* eac88c: jmp dword ptr [0xeae348] */
  SPILL(); f_4154fc(); return; /* MSVCR70!isalnum */
}

void f_eac892(void) {
  LOAD_REGS();
L_eac892: /* eac892: jmp dword ptr [0xeae34c] */
  SPILL(); f_415488(); return; /* MSVCR70!isspace */
}

void f_eac898(void) {
  LOAD_REGS();
L_eac898: /* eac898: jmp dword ptr [0xeae30c] */
  SPILL(); f_42d29b(); return; /* MSVCR70!sscanf */
}

void f_eac89e(void) {
  LOAD_REGS();
L_eac89e: /* eac89e: jmp dword ptr [0xeae354] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_eac8a4(void) {
  LOAD_REGS();
L_eac8a4: /* eac8a4: jmp dword ptr [0xeae358] */
  SPILL(); f_406e43(); return; /* MSVCR70!_strdup */
}

void f_eac8aa(void) {
  LOAD_REGS();
L_eac8aa: /* eac8aa: jmp dword ptr [0xeae35c] */
  SPILL(); f_405e8c(); return; /* MSVCR70!setlocale */
}

void f_eac8b0(void) {
  LOAD_REGS();
L_eac8b0: /* eac8b0: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* eac8b3: jae 0xeac8ca */
  if (!cf) goto L_eac8ca;
L_eac8b5: /* eac8b5: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* eac8b8: jae 0xeac8c0 */
  if (!cf) goto L_eac8c0;
L_eac8ba: /* eac8ba: shrd eax, edx, cl */
  { uint32_t a = eax, b = edx, c = ((ecx & 31)) & 31;
  if (c) {
  uint32_t r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1;
  zf = r == 0; sf = r >> 31; pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu); of = 0;
  eax = r;
  } }
/* eac8bd: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* eac8bf: ret  */
  esp += 4; SPILL(); return;
L_eac8c0: /* eac8c0: mov eax, edx */
  eax = edx;
/* eac8c2: xor edx, edx */
  edx = 0;
/* eac8c4: and cl, 0x1f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* eac8c7: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* eac8c9: ret  */
  esp += 4; SPILL(); return;
L_eac8ca: /* eac8ca: xor eax, eax */
  eax = 0;
/* eac8cc: xor edx, edx */
  edx = 0;
/* eac8ce: ret  */
  esp += 4; SPILL(); return;
}

void f_eac8d0(void) {
  LOAD_REGS();
L_eac8d0: /* eac8d0: jmp dword ptr [0xeae320] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_eac8d8(void) {
  LOAD_REGS();
L_eac8d8: /* eac8d8: push 0xeac9b8 */
  { uint32_t v = 0xeac9b8u; esp -= 4; W32(esp, v); }
/* eac8dd: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* eac8e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac8e4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* eac8e8: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* eac8ec: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* eac8f0: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* eac8f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* eac8f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* eac8f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* eac8f5: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* eac8f8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* eac8fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eac8fc: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* eac8ff: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* eac906: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* eac909: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* eac90c: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* eac912: ret  */
  esp += 4; SPILL(); return;
}

void f_eac913(void) {
  LOAD_REGS();
L_eac913: /* eac913: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eac916: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* eac91d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eac91e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* eac91f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* eac920: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* eac921: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* eac922: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* eac923: ret  */
  esp += 4; SPILL(); return;
}

void f_eac924(void) {
  LOAD_REGS();
L_eac924: /* eac924: jmp dword ptr [0xeae31c] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_eac92a(void) {
  LOAD_REGS();
L_eac92a: /* eac92a: jmp dword ptr [0xeae314] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_eac930(void) {
  LOAD_REGS();
L_eac930: /* eac930: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eac932: push 0xeb64d0 */
  { uint32_t v = 0xeb64d0u; esp -= 4; W32(esp, v); }
/* eac937: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac93cu); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac93c: mov dword ptr [ebp - 0x1c], 0xeb64f0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xeb64f0u);
L_eac943: /* eac943: cmp dword ptr [ebp - 0x1c], 0xeb64f0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xeb64f0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac94a: jae 0xeac96e */
  if (!cf) goto L_eac96e;
L_eac94c: /* eac94c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac950: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eac953: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac957: je 0xeac964 */
  if (zf) goto L_eac964;
L_eac959: /* eac959: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac95bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac95b: jmp 0xeac964 */
  goto L_eac964;
L_eac964: /* eac964: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac968: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eac96c: jmp 0xeac943 */
  goto L_eac943;
L_eac96e: /* eac96e: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac973u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac973: ret  */
  esp += 4; SPILL(); return;
}

void f_eac95d(void) {
  LOAD_REGS();
L_eac95d: /* eac95d: xor eax, eax */
  eax = 0;
/* eac95f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eac960: ret  */
  esp += 4; SPILL(); return;
}

void f_eac961(void) {
  LOAD_REGS();
  goto L_eac961;
L_eac943: /* eac943: cmp dword ptr [ebp - 0x1c], 0xeb64f0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xeb64f0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac94a: jae 0xeac96e */
  if (!cf) goto L_eac96e;
L_eac94c: /* eac94c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac950: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eac953: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac957: je 0xeac964 */
  if (zf) goto L_eac964;
L_eac959: /* eac959: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac95bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac95b: jmp 0xeac964 */
  goto L_eac964;
L_eac961: /* eac961: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_eac964: /* eac964: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac968: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eac96c: jmp 0xeac943 */
  goto L_eac943;
L_eac96e: /* eac96e: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac973u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac973: ret  */
  esp += 4; SPILL(); return;
}

void f_eac974(void) {
  LOAD_REGS();
L_eac974: /* eac974: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* eac976: push 0xeb64e0 */
  { uint32_t v = 0xeb64e0u; esp -= 4; W32(esp, v); }
/* eac97b: call 0xeac8d8 */
  esp -= 4; W32(esp, 0xeac980u); SPILL(); f_eac8d8(); if (g_unwind) return; RELOAD();
/* eac980: mov dword ptr [ebp - 0x1c], 0xeb64f8 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xeb64f8u);
L_eac987: /* eac987: cmp dword ptr [ebp - 0x1c], 0xeb64f8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xeb64f8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac98e: jae 0xeac9b2 */
  if (!cf) goto L_eac9b2;
L_eac990: /* eac990: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac994: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eac997: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac999: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac99b: je 0xeac9a8 */
  if (zf) goto L_eac9a8;
L_eac99d: /* eac99d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac99fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac99f: jmp 0xeac9a8 */
  goto L_eac9a8;
L_eac9a8: /* eac9a8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac9ac: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eac9b0: jmp 0xeac987 */
  goto L_eac987;
L_eac9b2: /* eac9b2: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac9b7u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac9b7: ret  */
  esp += 4; SPILL(); return;
}

void f_eac9a1(void) {
  LOAD_REGS();
L_eac9a1: /* eac9a1: xor eax, eax */
  eax = 0;
/* eac9a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* eac9a4: ret  */
  esp += 4; SPILL(); return;
}

void f_eac9a5(void) {
  LOAD_REGS();
  goto L_eac9a5;
L_eac987: /* eac987: cmp dword ptr [ebp - 0x1c], 0xeb64f8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xeb64f8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* eac98e: jae 0xeac9b2 */
  if (!cf) goto L_eac9b2;
L_eac990: /* eac990: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac994: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* eac997: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* eac999: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* eac99b: je 0xeac9a8 */
  if (zf) goto L_eac9a8;
L_eac99d: /* eac99d: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xeac99fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* eac99f: jmp 0xeac9a8 */
  goto L_eac9a8;
L_eac9a5: /* eac9a5: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_eac9a8: /* eac9a8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* eac9ac: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* eac9b0: jmp 0xeac987 */
  goto L_eac987;
L_eac9b2: /* eac9b2: call 0xeac913 */
  esp -= 4; W32(esp, 0xeac9b7u); SPILL(); f_eac913(); if (g_unwind) return; RELOAD();
/* eac9b7: ret  */
  esp += 4; SPILL(); return;
}

void f_eac9b8(void) {
  LOAD_REGS();
L_eac9b8: /* eac9b8: jmp dword ptr [0xeae350] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_eac9c0(void) {
  LOAD_REGS();
L_eac9c0: /* eac9c0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eac9c3: jmp dword ptr [0xeae024] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eac9c9(void) {
  LOAD_REGS();
  goto L_eac9c9;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eac9c9: /* eac9c9: mov eax, 0xeb6570 */
  eax = 0xeb6570u;
/* eac9ce: jmp 0xeac430 */
  goto L_eac430;
}

void f_eac9e0(void) {
  LOAD_REGS();
  goto L_eac9e0;
L_e816e0: /* e816e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e816e2: push 0xeac9c9 */
  { uint32_t v = 0xeac9c9u; esp -= 4; W32(esp, v); }
/* e816e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e816ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e816ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e816f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e816f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e816f7: mov esi, ecx */
  esi = ecx;
/* e816f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e816fd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e81700: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e81702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e81703: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e81705: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e8170d: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe81713u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e81713: mov ecx, esi */
  ecx = esi;
/* e81715: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e8171d: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe81723u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e81723: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e81727: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e81728: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e8172f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e81732: ret  */
  esp += 4; SPILL(); return;
L_eac9e0: /* eac9e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eac9e3: jmp 0xe816e0 */
  goto L_e816e0;
}

void f_eac9e8(void) {
  LOAD_REGS();
L_eac9e8: /* eac9e8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eac9eb: jmp dword ptr [0xeae024] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_eac9f1(void) {
  LOAD_REGS();
  goto L_eac9f1;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eac9f1: /* eac9f1: mov eax, 0xeb65e4 */
  eax = 0xeb65e4u;
/* eac9f6: jmp 0xeac430 */
  goto L_eac430;
}

void f_eaca00(void) {
  LOAD_REGS();
L_eaca00: /* eaca00: push 0xe812d0 */
  { uint32_t v = 0xe812d0u; esp -= 4; W32(esp, v); }
/* eaca05: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* eaca0a: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* eaca0f: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca12: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* eaca15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eaca16: call 0xeac494 */
  esp -= 4; W32(esp, 0xeaca1bu); SPILL(); f_eac494(); if (g_unwind) return; RELOAD();
/* eaca1b: ret  */
  esp += 4; SPILL(); return;
}

void f_eaca1c(void) {
  LOAD_REGS();
L_eaca1c: /* eaca1c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca1f: add ecx, 0x2b470 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca25: jmp 0xe81970 */
  SPILL(); f_e81970(); return;
}

void f_eaca2a(void) {
  LOAD_REGS();
  goto L_eaca2a;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eaca2a: /* eaca2a: mov eax, 0xeb6610 */
  eax = 0xeb6610u;
/* eaca2f: jmp 0xeac430 */
  goto L_eac430;
}

void f_eaca40(void) {
  LOAD_REGS();
L_eaca40: /* eaca40: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca43: jmp dword ptr [0xeae244] */
  SPILL(); f_6c8dc3(); return; /* Engine!??1URenderDevice@@UAE@XZ */
}

void f_eaca49(void) {
  LOAD_REGS();
L_eaca49: /* eaca49: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca4c: add ecx, 0x4654 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4654u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca52: jmp 0xe817a0 */
  SPILL(); f_e817a0(); return;
}

void f_eaca57(void) {
  LOAD_REGS();
L_eaca57: /* eaca57: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca5a: add ecx, 0x467c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x467cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca60: jmp 0xe81880 */
  SPILL(); f_e81880(); return;
}

void f_eaca65(void) {
  LOAD_REGS();
L_eaca65: /* eaca65: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca68: add ecx, 0x46f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca6e: jmp 0xe81a00 */
  SPILL(); f_e81a00(); return;
}

void f_eaca73(void) {
  LOAD_REGS();
L_eaca73: /* eaca73: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca76: add ecx, 0x2fc90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca7c: jmp dword ptr [0xeae240] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eaca82(void) {
  LOAD_REGS();
  goto L_eaca82;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eaca82: /* eaca82: mov eax, 0xeb6654 */
  eax = 0xeb6654u;
/* eaca87: jmp 0xeac430 */
  goto L_eac430;
}

void f_eaca90(void) {
  LOAD_REGS();
L_eaca90: /* eaca90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaca93: add ecx, 0x2b470 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eaca99: jmp 0xe81970 */
  SPILL(); f_e81970(); return;
}

void f_eaca9e(void) {
  LOAD_REGS();
  goto L_eaca9e;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eaca9e: /* eaca9e: mov eax, 0xeb6678 */
  eax = 0xeb6678u;
/* eacaa3: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacab0(void) {
  LOAD_REGS();
L_eacab0: /* eacab0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacab3: jmp dword ptr [0xeae244] */
  SPILL(); f_6c8dc3(); return; /* Engine!??1URenderDevice@@UAE@XZ */
}

void f_eacab9(void) {
  LOAD_REGS();
L_eacab9: /* eacab9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacabc: add ecx, 0x4654 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4654u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eacac2: jmp 0xe817a0 */
  SPILL(); f_e817a0(); return;
}

void f_eacac7(void) {
  LOAD_REGS();
L_eacac7: /* eacac7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacaca: add ecx, 0x467c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x467cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eacad0: jmp 0xe81880 */
  SPILL(); f_e81880(); return;
}

void f_eacad5(void) {
  LOAD_REGS();
L_eacad5: /* eacad5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacad8: add ecx, 0x46f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eacade: jmp 0xe81a00 */
  SPILL(); f_e81a00(); return;
}

void f_eacae3(void) {
  LOAD_REGS();
  goto L_eacae3;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacae3: /* eacae3: mov eax, 0xeb66b4 */
  eax = 0xeb66b4u;
/* eacae8: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacaf0(void) {
  LOAD_REGS();
L_eacaf0: /* eacaf0: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* eacaf6: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacafc(void) {
  LOAD_REGS();
L_eacafc: /* eacafc: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* eacb02: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb08(void) {
  LOAD_REGS();
L_eacb08: /* eacb08: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* eacb0e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb14(void) {
  LOAD_REGS();
L_eacb14: /* eacb14: lea ecx, [ebp - 0x1b4] */
  ecx = (uint32_t)(ebp + 0xfffffe4cu);
/* eacb1a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb20(void) {
  LOAD_REGS();
  goto L_eacb20;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacb20: /* eacb20: mov eax, 0xeb66f0 */
  eax = 0xeb66f0u;
/* eacb25: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacb30(void) {
  LOAD_REGS();
L_eacb30: /* eacb30: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eacb33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacb34: call 0xe81220 */
  esp -= 4; W32(esp, 0xeacb39u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* eacb39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eacb3a: ret  */
  esp += 4; SPILL(); return;
}

void f_eacb3b(void) {
  LOAD_REGS();
L_eacb3b: /* eacb3b: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eacb3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacb3f: call 0xe81220 */
  esp -= 4; W32(esp, 0xeacb44u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* eacb44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eacb45: ret  */
  esp += 4; SPILL(); return;
}

void f_eacb46(void) {
  LOAD_REGS();
L_eacb46: /* eacb46: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* eacb49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacb4a: call 0xe81220 */
  esp -= 4; W32(esp, 0xeacb4fu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* eacb4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eacb50: ret  */
  esp += 4; SPILL(); return;
}

void f_eacb51(void) {
  LOAD_REGS();
  goto L_eacb51;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacb51: /* eacb51: mov eax, 0xeb6724 */
  eax = 0xeb6724u;
/* eacb56: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacb5b(void) {
  LOAD_REGS();
L_eacb5b: /* eacb5b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* eacb5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacb5f: call 0xe81220 */
  esp -= 4; W32(esp, 0xeacb64u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* eacb64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eacb65: ret  */
  esp += 4; SPILL(); return;
}

void f_eacb66(void) {
  LOAD_REGS();
  goto L_eacb66;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacb66: /* eacb66: mov eax, 0xeb6748 */
  eax = 0xeb6748u;
/* eacb6b: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacb70(void) {
  LOAD_REGS();
L_eacb70: /* eacb70: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eacb73: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb79(void) {
  LOAD_REGS();
L_eacb79: /* eacb79: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacb7c: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb82(void) {
  LOAD_REGS();
  goto L_eacb82;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacb82: /* eacb82: mov eax, 0xeb6774 */
  eax = 0xeb6774u;
/* eacb87: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacb8c(void) {
  LOAD_REGS();
L_eacb8c: /* eacb8c: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* eacb8f: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacb95(void) {
  LOAD_REGS();
  goto L_eacb95;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacb95: /* eacb95: mov eax, 0xeb6798 */
  eax = 0xeb6798u;
/* eacb9a: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacb9f(void) {
  LOAD_REGS();
L_eacb9f: /* eacb9f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eacba2: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacba8(void) {
  LOAD_REGS();
L_eacba8: /* eacba8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eacbab: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbb1(void) {
  LOAD_REGS();
L_eacbb1: /* eacbb1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eacbb4: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbba(void) {
  LOAD_REGS();
  goto L_eacbba;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacbba: /* eacbba: mov eax, 0xeb67cc */
  eax = 0xeb67ccu;
/* eacbbf: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacbc4(void) {
  LOAD_REGS();
L_eacbc4: /* eacbc4: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* eacbca: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbd0(void) {
  LOAD_REGS();
  goto L_eacbd0;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacbd0: /* eacbd0: mov eax, 0xeb67f0 */
  eax = 0xeb67f0u;
/* eacbd5: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacbda(void) {
  LOAD_REGS();
L_eacbda: /* eacbda: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* eacbdd: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbe3(void) {
  LOAD_REGS();
L_eacbe3: /* eacbe3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacbe6: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbec(void) {
  LOAD_REGS();
L_eacbec: /* eacbec: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacbef: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbf5(void) {
  LOAD_REGS();
L_eacbf5: /* eacbf5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacbf8: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacbfe(void) {
  LOAD_REGS();
L_eacbfe: /* eacbfe: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc01: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc07(void) {
  LOAD_REGS();
L_eacc07: /* eacc07: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc0a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc10(void) {
  LOAD_REGS();
L_eacc10: /* eacc10: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc13: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc19(void) {
  LOAD_REGS();
L_eacc19: /* eacc19: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc1c: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc22(void) {
  LOAD_REGS();
L_eacc22: /* eacc22: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc25: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc2b(void) {
  LOAD_REGS();
L_eacc2b: /* eacc2b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc2e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc34(void) {
  LOAD_REGS();
L_eacc34: /* eacc34: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc37: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc3d(void) {
  LOAD_REGS();
L_eacc3d: /* eacc3d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc40: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc46(void) {
  LOAD_REGS();
L_eacc46: /* eacc46: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc49: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc4f(void) {
  LOAD_REGS();
L_eacc4f: /* eacc4f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc52: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc58(void) {
  LOAD_REGS();
L_eacc58: /* eacc58: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc5b: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc61(void) {
  LOAD_REGS();
L_eacc61: /* eacc61: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc64: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc6a(void) {
  LOAD_REGS();
L_eacc6a: /* eacc6a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc6d: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc73(void) {
  LOAD_REGS();
L_eacc73: /* eacc73: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc76: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc7c(void) {
  LOAD_REGS();
L_eacc7c: /* eacc7c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc7f: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc85(void) {
  LOAD_REGS();
L_eacc85: /* eacc85: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc88: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc8e(void) {
  LOAD_REGS();
L_eacc8e: /* eacc8e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc91: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacc97(void) {
  LOAD_REGS();
L_eacc97: /* eacc97: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacc9a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacca0(void) {
  LOAD_REGS();
L_eacca0: /* eacca0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacca3: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacca9(void) {
  LOAD_REGS();
L_eacca9: /* eacca9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccac: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccb2(void) {
  LOAD_REGS();
L_eaccb2: /* eaccb2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccb5: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccbb(void) {
  LOAD_REGS();
L_eaccbb: /* eaccbb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccbe: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccc4(void) {
  LOAD_REGS();
L_eaccc4: /* eaccc4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccc7: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacccd(void) {
  LOAD_REGS();
L_eacccd: /* eacccd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccd0: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccd6(void) {
  LOAD_REGS();
L_eaccd6: /* eaccd6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccd9: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccdf(void) {
  LOAD_REGS();
L_eaccdf: /* eaccdf: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacce2: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacce8(void) {
  LOAD_REGS();
L_eacce8: /* eacce8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacceb: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccf1(void) {
  LOAD_REGS();
L_eaccf1: /* eaccf1: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccf4: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaccfa(void) {
  LOAD_REGS();
L_eaccfa: /* eaccfa: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eaccfd: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd03(void) {
  LOAD_REGS();
L_eacd03: /* eacd03: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd06: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd0c(void) {
  LOAD_REGS();
L_eacd0c: /* eacd0c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd0f: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd15(void) {
  LOAD_REGS();
L_eacd15: /* eacd15: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd18: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd1e(void) {
  LOAD_REGS();
L_eacd1e: /* eacd1e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd21: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd27(void) {
  LOAD_REGS();
L_eacd27: /* eacd27: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd2a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd30(void) {
  LOAD_REGS();
L_eacd30: /* eacd30: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd33: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd39(void) {
  LOAD_REGS();
L_eacd39: /* eacd39: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd3c: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd42(void) {
  LOAD_REGS();
L_eacd42: /* eacd42: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd45: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd4b(void) {
  LOAD_REGS();
L_eacd4b: /* eacd4b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd4e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd54(void) {
  LOAD_REGS();
L_eacd54: /* eacd54: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd57: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd5d(void) {
  LOAD_REGS();
L_eacd5d: /* eacd5d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd60: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd66(void) {
  LOAD_REGS();
L_eacd66: /* eacd66: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd69: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd6f(void) {
  LOAD_REGS();
L_eacd6f: /* eacd6f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd72: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd78(void) {
  LOAD_REGS();
L_eacd78: /* eacd78: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd7b: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd81(void) {
  LOAD_REGS();
L_eacd81: /* eacd81: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd84: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd8a(void) {
  LOAD_REGS();
L_eacd8a: /* eacd8a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd8d: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd93(void) {
  LOAD_REGS();
L_eacd93: /* eacd93: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd96: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacd9c(void) {
  LOAD_REGS();
L_eacd9c: /* eacd9c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacd9f: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacda5(void) {
  LOAD_REGS();
L_eacda5: /* eacda5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacda8: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdae(void) {
  LOAD_REGS();
L_eacdae: /* eacdae: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdb1: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdb7(void) {
  LOAD_REGS();
L_eacdb7: /* eacdb7: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdba: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdc0(void) {
  LOAD_REGS();
L_eacdc0: /* eacdc0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdc3: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdc9(void) {
  LOAD_REGS();
L_eacdc9: /* eacdc9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdcc: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdd2(void) {
  LOAD_REGS();
L_eacdd2: /* eacdd2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdd5: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacddb(void) {
  LOAD_REGS();
  goto L_eacddb;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacddb: /* eacddb: mov eax, 0xeb69d4 */
  eax = 0xeb69d4u;
/* eacde0: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacde5(void) {
  LOAD_REGS();
L_eacde5: /* eacde5: lea ecx, [ebp - 0x444] */
  ecx = (uint32_t)(ebp + 0xfffffbbcu);
/* eacdeb: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacdf1(void) {
  LOAD_REGS();
  goto L_eacdf1;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacdf1: /* eacdf1: mov eax, 0xeb69f8 */
  eax = 0xeb69f8u;
/* eacdf6: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacdfb(void) {
  LOAD_REGS();
L_eacdfb: /* eacdfb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacdfe: jmp dword ptr [0xeae244] */
  SPILL(); f_6c8dc3(); return; /* Engine!??1URenderDevice@@UAE@XZ */
}

void f_eace04(void) {
  LOAD_REGS();
L_eace04: /* eace04: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eace07: add ecx, 0x4654 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4654u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eace0d: jmp 0xe817a0 */
  SPILL(); f_e817a0(); return;
}

void f_eace12(void) {
  LOAD_REGS();
L_eace12: /* eace12: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eace15: add ecx, 0x467c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x467cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eace1b: jmp 0xe81880 */
  SPILL(); f_e81880(); return;
}

void f_eace20(void) {
  LOAD_REGS();
L_eace20: /* eace20: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eace23: add ecx, 0x46f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eace29: jmp 0xe81a00 */
  SPILL(); f_e81a00(); return;
}

void f_eace2e(void) {
  LOAD_REGS();
L_eace2e: /* eace2e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* eace31: add ecx, 0x2fc90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* eace37: jmp dword ptr [0xeae240] */
  SPILL(); f_6c3e13(); return; /* Engine!??1?$TArray@E@@QAE@XZ */
}

void f_eace3d(void) {
  LOAD_REGS();
  goto L_eace3d;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eace3d: /* eace3d: mov eax, 0xeb6a3c */
  eax = 0xeb6a3cu;
/* eace42: jmp 0xeac430 */
  goto L_eac430;
}

void f_eace50(void) {
  LOAD_REGS();
L_eace50: /* eace50: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eace53: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace59(void) {
  LOAD_REGS();
  goto L_eace59;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eace59: /* eace59: mov eax, 0xeb6a60 */
  eax = 0xeb6a60u;
/* eace5e: jmp 0xeac430 */
  goto L_eac430;
}

void f_eace63(void) {
  LOAD_REGS();
L_eace63: /* eace63: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* eace69: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace6f(void) {
  LOAD_REGS();
L_eace6f: /* eace6f: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* eace75: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace7b(void) {
  LOAD_REGS();
L_eace7b: /* eace7b: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* eace81: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace87(void) {
  LOAD_REGS();
L_eace87: /* eace87: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* eace8a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace90(void) {
  LOAD_REGS();
L_eace90: /* eace90: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* eace96: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eace9c(void) {
  LOAD_REGS();
L_eace9c: /* eace9c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* eacea2: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacea8(void) {
  LOAD_REGS();
L_eacea8: /* eacea8: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* eaceae: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaceb4(void) {
  LOAD_REGS();
L_eaceb4: /* eaceb4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eaceb7: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacebd(void) {
  LOAD_REGS();
L_eacebd: /* eacebd: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* eacec3: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacec9(void) {
  LOAD_REGS();
L_eacec9: /* eacec9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* eacecc: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaced2(void) {
  LOAD_REGS();
L_eaced2: /* eaced2: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* eaced8: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacede(void) {
  LOAD_REGS();
L_eacede: /* eacede: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* eacee1: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacee7(void) {
  LOAD_REGS();
L_eacee7: /* eacee7: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* eaceed: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacef3(void) {
  LOAD_REGS();
L_eacef3: /* eacef3: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* eacef9: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eaceff(void) {
  LOAD_REGS();
L_eaceff: /* eaceff: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* eacf05: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf0b(void) {
  LOAD_REGS();
L_eacf0b: /* eacf0b: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* eacf11: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf17(void) {
  LOAD_REGS();
L_eacf17: /* eacf17: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* eacf1d: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf23(void) {
  LOAD_REGS();
L_eacf23: /* eacf23: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* eacf29: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf2f(void) {
  LOAD_REGS();
L_eacf2f: /* eacf2f: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* eacf35: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf3b(void) {
  LOAD_REGS();
L_eacf3b: /* eacf3b: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* eacf3e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf44(void) {
  LOAD_REGS();
L_eacf44: /* eacf44: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* eacf4a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf50(void) {
  LOAD_REGS();
L_eacf50: /* eacf50: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* eacf53: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf59(void) {
  LOAD_REGS();
L_eacf59: /* eacf59: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* eacf5c: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf62(void) {
  LOAD_REGS();
L_eacf62: /* eacf62: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacf65: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf6b(void) {
  LOAD_REGS();
L_eacf6b: /* eacf6b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* eacf6e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf74(void) {
  LOAD_REGS();
  goto L_eacf74;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacf74: /* eacf74: mov eax, 0xeb6b4c */
  eax = 0xeb6b4cu;
/* eacf79: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacf7e(void) {
  LOAD_REGS();
L_eacf7e: /* eacf7e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacf81: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf87(void) {
  LOAD_REGS();
  goto L_eacf87;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacf87: /* eacf87: mov eax, 0xeb6b70 */
  eax = 0xeb6b70u;
/* eacf8c: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacf91(void) {
  LOAD_REGS();
L_eacf91: /* eacf91: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* eacf94: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacf9a(void) {
  LOAD_REGS();
L_eacf9a: /* eacf9a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacf9d: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacfa3(void) {
  LOAD_REGS();
  goto L_eacfa3;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacfa3: /* eacfa3: mov eax, 0xeb6b9c */
  eax = 0xeb6b9cu;
/* eacfa8: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacfad(void) {
  LOAD_REGS();
L_eacfad: /* eacfad: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacfb0: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacfb6(void) {
  LOAD_REGS();
L_eacfb6: /* eacfb6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* eacfb9: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_eacfbf(void) {
  LOAD_REGS();
  goto L_eacfbf;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacfbf: /* eacfbf: mov eax, 0xeb6bc8 */
  eax = 0xeb6bc8u;
/* eacfc4: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacfc9(void) {
  LOAD_REGS();
L_eacfc9: /* eacfc9: mov eax, dword ptr [0xebe2a4] */
  eax = R32((uint32_t)(0xebe2a4u));
/* eacfce: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* eacfd1: mov dword ptr [0xebe2a4], eax */
  W32((uint32_t)(0xebe2a4u), eax);
/* eacfd6: ret  */
  esp += 4; SPILL(); return;
}

void f_eacfd7(void) {
  LOAD_REGS();
  goto L_eacfd7;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacfd7: /* eacfd7: mov eax, 0xeb6bec */
  eax = 0xeb6becu;
/* eacfdc: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacfe1(void) {
  LOAD_REGS();
L_eacfe1: /* eacfe1: mov eax, dword ptr [ebp - 0x498] */
  eax = R32((uint32_t)(ebp + 0xfffffb68u));
/* eacfe7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacfe8: call 0xe81220 */
  esp -= 4; W32(esp, 0xeacfedu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* eacfed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* eacfee: ret  */
  esp += 4; SPILL(); return;
}

void f_eacfef(void) {
  LOAD_REGS();
  goto L_eacfef;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_eacfef: /* eacfef: mov eax, 0xeb6c10 */
  eax = 0xeb6c10u;
/* eacff4: jmp 0xeac430 */
  goto L_eac430;
}

void f_eacff9(void) {
  LOAD_REGS();
L_eacff9: /* eacff9: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* eacffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* eacffd: call 0xe81220 */
  esp -= 4; W32(esp, 0xead002u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead002: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead003: ret  */
  esp += 4; SPILL(); return;
}

void f_ead004(void) {
  LOAD_REGS();
  goto L_ead004;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead004: /* ead004: mov eax, 0xeb6c34 */
  eax = 0xeb6c34u;
/* ead009: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead00e(void) {
  LOAD_REGS();
L_ead00e: /* ead00e: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ead012: call 0xe81220 */
  esp -= 4; W32(esp, 0xead017u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead017: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead018: ret  */
  esp += 4; SPILL(); return;
}

void f_ead019(void) {
  LOAD_REGS();
L_ead019: /* ead019: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead01c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ead01d: call 0xe81220 */
  esp -= 4; W32(esp, 0xead022u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead022: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead023: ret  */
  esp += 4; SPILL(); return;
}

void f_ead024(void) {
  LOAD_REGS();
  goto L_ead024;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead024: /* ead024: mov eax, 0xeb6c60 */
  eax = 0xeb6c60u;
/* ead029: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead02e(void) {
  LOAD_REGS();
  goto L_ead02e;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead02e: /* ead02e: mov eax, 0xeb6cb0 */
  eax = 0xeb6cb0u;
/* ead033: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead038(void) {
  LOAD_REGS();
L_ead038: /* ead038: push 0xe812d0 */
  { uint32_t v = 0xe812d0u; esp -= 4; W32(esp, v); }
/* ead03d: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* ead042: push 0x560 */
  { uint32_t v = 0x560u; esp -= 4; W32(esp, v); }
/* ead047: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead04a: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ead04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ead04e: call 0xeac494 */
  esp -= 4; W32(esp, 0xead053u); SPILL(); f_eac494(); if (g_unwind) return; RELOAD();
/* ead053: ret  */
  esp += 4; SPILL(); return;
}

void f_ead054(void) {
  LOAD_REGS();
L_ead054: /* ead054: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead057: add ecx, 0x2b470 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2b470u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead05d: jmp 0xe81970 */
  SPILL(); f_e81970(); return;
}

void f_ead062(void) {
  LOAD_REGS();
  goto L_ead062;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead062: /* ead062: mov eax, 0xeb6cdc */
  eax = 0xeb6cdcu;
/* ead067: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead06c(void) {
  LOAD_REGS();
L_ead06c: /* ead06c: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* ead072: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead078(void) {
  LOAD_REGS();
  goto L_ead078;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead078: /* ead078: mov eax, 0xeb6d00 */
  eax = 0xeb6d00u;
/* ead07d: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead090(void) {
  LOAD_REGS();
L_ead090: /* ead090: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead093: jmp dword ptr [0xeae024] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_ead099(void) {
  LOAD_REGS();
  goto L_ead099;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead099: /* ead099: mov eax, 0xeb6d24 */
  eax = 0xeb6d24u;
/* ead09e: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead0b0(void) {
  LOAD_REGS();
L_ead0b0: /* ead0b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead0b3: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead0b9(void) {
  LOAD_REGS();
  goto L_ead0b9;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead0b9: /* ead0b9: mov eax, 0xeb6d48 */
  eax = 0xeb6d48u;
/* ead0be: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead0c3(void) {
  LOAD_REGS();
L_ead0c3: /* ead0c3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead0c6: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead0cc(void) {
  LOAD_REGS();
  goto L_ead0cc;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead0cc: /* ead0cc: mov eax, 0xeb6d6c */
  eax = 0xeb6d6cu;
/* ead0d1: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead0e0(void) {
  LOAD_REGS();
L_ead0e0: /* ead0e0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead0e3: jmp 0xe98500 */
  SPILL(); f_e98500(); return;
}

void f_ead0e8(void) {
  LOAD_REGS();
  goto L_ead0e8;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead0e8: /* ead0e8: mov eax, 0xeb6d90 */
  eax = 0xeb6d90u;
/* ead0ed: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead0f2(void) {
  LOAD_REGS();
L_ead0f2: /* ead0f2: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead0f5: jmp 0xe98500 */
  SPILL(); f_e98500(); return;
}

void f_ead0fa(void) {
  LOAD_REGS();
  goto L_ead0fa;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead0fa: /* ead0fa: mov eax, 0xeb6db4 */
  eax = 0xeb6db4u;
/* ead0ff: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead104(void) {
  LOAD_REGS();
L_ead104: /* ead104: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* ead107: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead10d(void) {
  LOAD_REGS();
L_ead10d: /* ead10d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead110: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead116(void) {
  LOAD_REGS();
L_ead116: /* ead116: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead119: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead11f(void) {
  LOAD_REGS();
L_ead11f: /* ead11f: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead122: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead128(void) {
  LOAD_REGS();
L_ead128: /* ead128: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead12b: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead131(void) {
  LOAD_REGS();
L_ead131: /* ead131: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead134: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead13a(void) {
  LOAD_REGS();
L_ead13a: /* ead13a: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead13d: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead143(void) {
  LOAD_REGS();
L_ead143: /* ead143: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* ead146: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead14c(void) {
  LOAD_REGS();
  goto L_ead14c;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead14c: /* ead14c: mov eax, 0xeb6e10 */
  eax = 0xeb6e10u;
/* ead151: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead156(void) {
  LOAD_REGS();
L_ead156: /* ead156: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead159: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead15f(void) {
  LOAD_REGS();
  goto L_ead15f;
L_e9b080: /* e9b080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9b082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9b084: je 0xe9b08c */
  if (zf) goto L_e9b08c;
L_e9b086: /* e9b086: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b089: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9b08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b08c: /* e9b08c: ret  */
  esp += 4; SPILL(); return;
L_ead15f: /* ead15f: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* ead162: jmp 0xe9b080 */
  goto L_e9b080;
}

void f_ead167(void) {
  LOAD_REGS();
L_ead167: /* ead167: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead16a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead170(void) {
  LOAD_REGS();
L_ead170: /* ead170: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead173: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead179(void) {
  LOAD_REGS();
  goto L_ead179;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead179: /* ead179: mov eax, 0xeb6e4c */
  eax = 0xeb6e4cu;
/* ead17e: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead183(void) {
  LOAD_REGS();
L_ead183: /* ead183: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead186: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead18c(void) {
  LOAD_REGS();
  goto L_ead18c;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead18c: /* ead18c: mov eax, 0xeb6e70 */
  eax = 0xeb6e70u;
/* ead191: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead196(void) {
  LOAD_REGS();
  goto L_ead196;
L_e9b080: /* e9b080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9b082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9b084: je 0xe9b08c */
  if (zf) goto L_e9b08c;
L_e9b086: /* e9b086: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b089: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9b08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b08c: /* e9b08c: ret  */
  esp += 4; SPILL(); return;
L_ead196: /* ead196: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* ead199: jmp 0xe9b080 */
  goto L_e9b080;
}

void f_ead19e(void) {
  LOAD_REGS();
L_ead19e: /* ead19e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead1a1: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1a7(void) {
  LOAD_REGS();
L_ead1a7: /* ead1a7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead1aa: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1b0(void) {
  LOAD_REGS();
  goto L_ead1b0;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead1b0: /* ead1b0: mov eax, 0xeb6ea4 */
  eax = 0xeb6ea4u;
/* ead1b5: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead1ba(void) {
  LOAD_REGS();
L_ead1ba: /* ead1ba: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead1bd: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1c3(void) {
  LOAD_REGS();
  goto L_ead1c3;
L_e9b080: /* e9b080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9b082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9b084: je 0xe9b08c */
  if (zf) goto L_e9b08c;
L_e9b086: /* e9b086: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b089: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9b08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b08c: /* e9b08c: ret  */
  esp += 4; SPILL(); return;
L_ead1c3: /* ead1c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* ead1c6: jmp 0xe9b080 */
  goto L_e9b080;
}

void f_ead1cb(void) {
  LOAD_REGS();
L_ead1cb: /* ead1cb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead1ce: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1d4(void) {
  LOAD_REGS();
L_ead1d4: /* ead1d4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead1d7: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1dd(void) {
  LOAD_REGS();
  goto L_ead1dd;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead1dd: /* ead1dd: mov eax, 0xeb6ee0 */
  eax = 0xeb6ee0u;
/* ead1e2: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead1e7(void) {
  LOAD_REGS();
L_ead1e7: /* ead1e7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead1ea: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead1f0(void) {
  LOAD_REGS();
  goto L_ead1f0;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead1f0: /* ead1f0: mov eax, 0xeb6f04 */
  eax = 0xeb6f04u;
/* ead1f5: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead1fa(void) {
  LOAD_REGS();
  goto L_ead1fa;
L_e9b080: /* e9b080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9b082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9b084: je 0xe9b08c */
  if (zf) goto L_e9b08c;
L_e9b086: /* e9b086: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b089: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9b08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b08c: /* e9b08c: ret  */
  esp += 4; SPILL(); return;
L_ead1fa: /* ead1fa: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead1fd: jmp 0xe9b080 */
  goto L_e9b080;
}

void f_ead202(void) {
  LOAD_REGS();
L_ead202: /* ead202: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead205: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead20b(void) {
  LOAD_REGS();
L_ead20b: /* ead20b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead20e: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead214(void) {
  LOAD_REGS();
  goto L_ead214;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead214: /* ead214: mov eax, 0xeb6f38 */
  eax = 0xeb6f38u;
/* ead219: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead21e(void) {
  LOAD_REGS();
L_ead21e: /* ead21e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead221: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead227(void) {
  LOAD_REGS();
L_ead227: /* ead227: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* ead22a: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead230(void) {
  LOAD_REGS();
L_ead230: /* ead230: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead233: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead239(void) {
  LOAD_REGS();
  goto L_ead239;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead239: /* ead239: mov eax, 0xeb6f6c */
  eax = 0xeb6f6cu;
/* ead23e: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead243(void) {
  LOAD_REGS();
L_ead243: /* ead243: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead246: jmp 0xe98500 */
  SPILL(); f_e98500(); return;
}

void f_ead24b(void) {
  LOAD_REGS();
L_ead24b: /* ead24b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead24e: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead251: jmp 0xe9b2a0 */
  SPILL(); f_e9b2a0(); return;
}

void f_ead256(void) {
  LOAD_REGS();
  goto L_ead256;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead256: /* ead256: mov eax, 0xeb6f98 */
  eax = 0xeb6f98u;
/* ead25b: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead260(void) {
  LOAD_REGS();
L_ead260: /* ead260: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead263: jmp 0xe985c0 */
  SPILL(); f_e985c0(); return;
}

void f_ead268(void) {
  LOAD_REGS();
  goto L_ead268;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead268: /* ead268: mov eax, 0xeb6fbc */
  eax = 0xeb6fbcu;
/* ead26d: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead272(void) {
  LOAD_REGS();
L_ead272: /* ead272: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead275: add ecx, 0x448 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x448u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead27b: jmp 0xe9b2a0 */
  SPILL(); f_e9b2a0(); return;
}

void f_ead280(void) {
  LOAD_REGS();
  goto L_ead280;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead280: /* ead280: mov eax, 0xeb6fe0 */
  eax = 0xeb6fe0u;
/* ead285: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead28a(void) {
  LOAD_REGS();
L_ead28a: /* ead28a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead28d: add ecx, 0x448 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x448u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead293: jmp 0xe9b2a0 */
  SPILL(); f_e9b2a0(); return;
}

void f_ead298(void) {
  LOAD_REGS();
  goto L_ead298;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead298: /* ead298: mov eax, 0xeb7004 */
  eax = 0xeb7004u;
/* ead29d: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead2a2(void) {
  LOAD_REGS();
L_ead2a2: /* ead2a2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ead2a5: jmp 0xe9ae70 */
  SPILL(); f_e9ae70(); return;
}

void f_ead2aa(void) {
  LOAD_REGS();
L_ead2aa: /* ead2aa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* ead2ad: jmp dword ptr [0xeae0d0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_ead2b3(void) {
  LOAD_REGS();
  goto L_ead2b3;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead2b3: /* ead2b3: mov eax, 0xeb7030 */
  eax = 0xeb7030u;
/* ead2b8: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead2bd(void) {
  LOAD_REGS();
L_ead2bd: /* ead2bd: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead2c0: jmp 0xe98650 */
  SPILL(); f_e98650(); return;
}

void f_ead2c5(void) {
  LOAD_REGS();
  goto L_ead2c5;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead2c5: /* ead2c5: mov eax, 0xeb7054 */
  eax = 0xeb7054u;
/* ead2ca: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead2d0(void) {
  LOAD_REGS();
L_ead2d0: /* ead2d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead2d3: jmp dword ptr [0xeae024] */
  SPILL(); f_4e35b7(); return; /* Core!??1FArray@@QAE@XZ */
}

void f_ead2d9(void) {
  LOAD_REGS();
  goto L_ead2d9;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead2d9: /* ead2d9: mov eax, 0xeb709c */
  eax = 0xeb709cu;
/* ead2de: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead2e3(void) {
  LOAD_REGS();
  goto L_ead2e3;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead2e3: /* ead2e3: mov eax, 0xeb70ec */
  eax = 0xeb70ecu;
/* ead2e8: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead2ed(void) {
  LOAD_REGS();
L_ead2ed: /* ead2ed: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead2f0: jmp 0xea2096 */
  SPILL(); f_ea2096(); return;
}

void f_ead2f5(void) {
  LOAD_REGS();
L_ead2f5: /* ead2f5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead2f8: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead2fb: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead300(void) {
  LOAD_REGS();
L_ead300: /* ead300: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead303: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead306: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead30b(void) {
  LOAD_REGS();
L_ead30b: /* ead30b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead30e: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead311: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead316(void) {
  LOAD_REGS();
L_ead316: /* ead316: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead319: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead31c: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead321(void) {
  LOAD_REGS();
L_ead321: /* ead321: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead324: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead327: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead32c(void) {
  LOAD_REGS();
L_ead32c: /* ead32c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead32f: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead332: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead337(void) {
  LOAD_REGS();
L_ead337: /* ead337: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* ead33a: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ead33d: jmp 0xea1fd3 */
  SPILL(); f_ea1fd3(); return;
}

void f_ead342(void) {
  LOAD_REGS();
  goto L_ead342;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead342: /* ead342: mov eax, 0xeb7148 */
  eax = 0xeb7148u;
/* ead347: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead34c(void) {
  LOAD_REGS();
L_ead34c: /* ead34c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ead34f: call 0xe81220 */
  esp -= 4; W32(esp, 0xead354u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead354: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead355: ret  */
  esp += 4; SPILL(); return;
}

void f_ead356(void) {
  LOAD_REGS();
L_ead356: /* ead356: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ead359: call 0xe81220 */
  esp -= 4; W32(esp, 0xead35eu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead35e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead35f: ret  */
  esp += 4; SPILL(); return;
}

void f_ead360(void) {
  LOAD_REGS();
  goto L_ead360;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead360: /* ead360: mov eax, 0xeb71d0 */
  eax = 0xeb71d0u;
/* ead365: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead36a(void) {
  LOAD_REGS();
L_ead36a: /* ead36a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* ead36d: call 0xe81220 */
  esp -= 4; W32(esp, 0xead372u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ead372: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ead373: ret  */
  esp += 4; SPILL(); return;
}

void f_ead374(void) {
  LOAD_REGS();
  goto L_ead374;
L_eac430: /* eac430: jmp dword ptr [0xeae328] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_ead374: /* ead374: mov eax, 0xeb71f4 */
  eax = 0xeb71f4u;
/* ead379: jmp 0xeac430 */
  goto L_eac430;
}

void f_ead380(void) {
  LOAD_REGS();
L_ead380: /* ead380: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ead383: mov eax, dword ptr [0xeae20c] */
  eax = R32((uint32_t)(0xeae20cu));
/* ead388: mov ecx, dword ptr [0xeae2b4] */
  ecx = R32((uint32_t)(0xeae2b4u));
/* ead38e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ead38f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ead390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ead391: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ead392: push 0xe8b610 */
  { uint32_t v = 0xe8b610u; esp -= 4; W32(esp, v); }
/* ead397: push 0xe812c0 */
  { uint32_t v = 0xe812c0u; esp -= 4; W32(esp, v); }
/* ead39c: push 0x4084004 */
  { uint32_t v = 0x4084004u; esp -= 4; W32(esp, v); }
/* ead3a1: xor esi, esi */
  esi = 0;
/* ead3a3: xor edi, edi */
  edi = 0;
/* ead3a5: xor ebx, ebx */
  ebx = 0;
/* ead3a7: xor ebp, ebp */
  ebp = 0;
/* ead3a9: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* ead3ad: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* ead3b1: call dword ptr [0xeae208] */
  esp -= 4; W32(esp, 0xead3b7u); SPILL(); f_4e1735(); if (g_unwind) return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */ RELOAD();
/* ead3b7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* ead3bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ead3bc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* ead3c0: push 0xeba040 */
  { uint32_t v = 0xeba040u; esp -= 4; W32(esp, v); }
/* ead3c5: push 0xeb276a */
  { uint32_t v = 0xeb276au; esp -= 4; W32(esp, v); }
/* ead3ca: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ead3cd: mov edx, esp */
  edx = esp;
/* ead3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ead3d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ead3d1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* ead3d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ead3d5: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* ead3d8: push 0x30fd4 */
  { uint32_t v = 0x30fd4u; esp -= 4; W32(esp, v); }
/* ead3dd: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* ead3e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ead3e1: mov ecx, 0xebdd60 */
  ecx = 0xebdd60u;
/* ead3e6: mov dword ptr [edx + 0xc], ebp */
  W32((uint32_t)(edx + 0xcu), ebp);
/* ead3e9: call dword ptr [0xeae238] */
  esp -= 4; W32(esp, 0xead3efu); SPILL(); f_4e353f(); if (g_unwind) return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */ RELOAD();
/* ead3ef: push 0xead420 */
  { uint32_t v = 0xead420u; esp -= 4; W32(esp, v); }
/* ead3f4: call 0xeac5ba */
  esp -= 4; W32(esp, 0xead3f9u); SPILL(); f_eac5ba(); if (g_unwind) return; RELOAD();
/* ead3f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ead3fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ead3fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ead3fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ead3ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ead400: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ead403: ret  */
  esp += 4; SPILL(); return;
}

void f_ead410(void) {
  LOAD_REGS();
L_ead410: /* ead410: mov dword ptr [0xebe28c], 0xebdd60 */
  W32((uint32_t)(0xebe28cu), 0xebdd60u);
/* ead41a: ret  */
  esp += 4; SPILL(); return;
}

void f_ead420(void) {
  LOAD_REGS();
L_ead420: /* ead420: mov ecx, 0xebdd60 */
  ecx = 0xebdd60u;
/* ead425: jmp dword ptr [0xeae210] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_ead430(void) {
  LOAD_REGS();
  goto L_ead430;
L_e95d20: /* e95d20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e95d22: push 0xead099 */
  { uint32_t v = 0xead099u; esp -= 4; W32(esp, v); }
/* e95d27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e95d2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95d2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e95d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e95d36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e95d37: mov esi, ecx */
  esi = ecx;
/* e95d39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e95d3d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e95d40: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e95d42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e95d43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e95d45: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e95d4d: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe95d53u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e95d53: mov ecx, esi */
  ecx = esi;
/* e95d55: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e95d5d: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe95d63u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e95d63: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e95d67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e95d68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e95d6f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e95d72: ret  */
  esp += 4; SPILL(); return;
L_ead430: /* ead430: mov ecx, 0xebe2a8 */
  ecx = 0xebe2a8u;
/* ead435: jmp 0xe95d20 */
  goto L_e95d20;
}
