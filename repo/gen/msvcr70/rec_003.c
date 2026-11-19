#include "recomp.h"
#include "rec_mod.h"

void f_40ae08(void) {
  LOAD_REGS();
L_40ae08: /* 40ae08: movlpd xmm0, qword ptr [esp + 4] */
  guest_unsupported(0x40ae08); /* movlpd xmm0, qword ptr [esp + 4] */
/* 40ae0e: movlpd xmm7, qword ptr [0x4464d0] */
  guest_unsupported(0x40ae0e); /* movlpd xmm7, qword ptr [0x4464d0] */
/* 40ae16: movlpd xmm2, qword ptr [0x4464e0] */
  guest_unsupported(0x40ae16); /* movlpd xmm2, qword ptr [0x4464e0] */
/* 40ae1e: andpd xmm7, xmm0 */
  guest_unsupported(0x40ae1e); /* andpd xmm7, xmm0 */
/* 40ae22: movsd xmm4, xmm0 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40ae26: psrlq xmm0, 0x2c */
  guest_unsupported(0x40ae26); /* psrlq xmm0, 0x2c */
/* 40ae2b: pextrw eax, xmm0, 0 */
  guest_unsupported(0x40ae2b); /* pextrw eax, xmm0, 0 */
/* 40ae30: orpd xmm7, xmm2 */
  guest_unsupported(0x40ae30); /* orpd xmm7, xmm2 */
/* 40ae34: pextrw ecx, xmm4, 3 */
  guest_unsupported(0x40ae34); /* pextrw ecx, xmm4, 3 */
/* 40ae39: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40ae3e: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ae41: and eax, 0x1fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1feu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40ae46: mulsd xmm7, qword ptr [eax*4 + 0x442c40] */
  guest_unsupported(0x40ae46); /* mulsd xmm7, qword ptr [eax*4 + 0x442c40] */
/* 40ae4f: movlpd xmm5, qword ptr [eax*4 + 0x442c40] */
  guest_unsupported(0x40ae4f); /* movlpd xmm5, qword ptr [eax*4 + 0x442c40] */
/* 40ae58: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ae5a: movapd xmm6, xmmword ptr [eax*4 + 0x443050] */
  guest_unsupported(0x40ae5a); /* movapd xmm6, xmmword ptr [eax*4 + 0x443050] */
/* 40ae63: mov edx, 0x7fef */
  edx = 0x7fefu;
/* 40ae68: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40ae6a: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40ae6d: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 40ae6f: cmp ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40ae75: jae 0x40b156 */
  if (!cf) goto L_40b156;
L_40ae7b: /* 40ae7b: mov ecx, 0 */
  ecx = 0x0u;
/* 40ae80: mov edx, 0x3fe7f */
  edx = 0x3fe7fu;
L_40ae85: /* 40ae85: movd xmm1, edx */
  guest_unsupported(0x40ae85); /* movd xmm1, edx */
/* 40ae89: psubq xmm0, xmm1 */
  guest_unsupported(0x40ae89); /* psubq xmm0, xmm1 */
/* 40ae8d: psrlq xmm0, 8 */
  guest_unsupported(0x40ae8d); /* psrlq xmm0, 8 */
/* 40ae92: cvtdq2pd xmm0, xmm0 */
  guest_unsupported(0x40ae92); /* cvtdq2pd xmm0, xmm0 */
/* 40ae96: movlpd xmm1, qword ptr [0x446528] */
  guest_unsupported(0x40ae96); /* movlpd xmm1, qword ptr [0x446528] */
/* 40ae9e: movsd xmm3, xmm7 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40aea2: psrlq xmm7, 0x26 */
  guest_unsupported(0x40aea2); /* psrlq xmm7, 0x26 */
/* 40aea7: pextrw eax, xmm7, 0 */
  guest_unsupported(0x40aea7); /* pextrw eax, xmm7, 0 */
/* 40aeac: andpd xmm4, xmmword ptr [0x4464d0] */
  guest_unsupported(0x40aeac); /* andpd xmm4, xmmword ptr [0x4464d0] */
/* 40aeb4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40aeb9: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40aebc: and eax, 0x1fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1feu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40aec1: mulsd xmm3, qword ptr [eax*4 + 0x443860] */
  guest_unsupported(0x40aec1); /* mulsd xmm3, qword ptr [eax*4 + 0x443860] */
/* 40aeca: mulsd xmm5, qword ptr [eax*4 + 0x443860] */
  guest_unsupported(0x40aeca); /* mulsd xmm5, qword ptr [eax*4 + 0x443860] */
/* 40aed3: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40aed5: addpd xmm6, xmmword ptr [eax*4 + 0x443c70] */
  guest_unsupported(0x40aed5); /* addpd xmm6, xmmword ptr [eax*4 + 0x443c70] */
/* 40aede: orpd xmm4, xmmword ptr [0x4464e0] */
  guest_unsupported(0x40aede); /* orpd xmm4, xmmword ptr [0x4464e0] */
/* 40aee6: addsd xmm6, xmm0 */
  guest_unsupported(0x40aee6); /* addsd xmm6, xmm0 */
/* 40aeea: andpd xmm1, xmm4 */
  guest_unsupported(0x40aeea); /* andpd xmm1, xmm4 */
/* 40aeee: movsd xmm2, xmm3 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40aef2: psrlq xmm3, 0x1f */
  guest_unsupported(0x40aef2); /* psrlq xmm3, 0x1f */
/* 40aef7: pextrw eax, xmm3, 0 */
  guest_unsupported(0x40aef7); /* pextrw eax, xmm3, 0 */
/* 40aefc: movlpd xmm0, qword ptr [0x446528] */
  guest_unsupported(0x40aefc); /* movlpd xmm0, qword ptr [0x446528] */
/* 40af04: subsd xmm4, xmm1 */
  guest_unsupported(0x40af04); /* subsd xmm4, xmm1 */
/* 40af08: movlpd xmm7, qword ptr [0x446530] */
  guest_unsupported(0x40af08); /* movlpd xmm7, qword ptr [0x446530] */
/* 40af10: and eax, 0x1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40af15: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40af18: and eax, 0x3fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3feu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40af1d: mulsd xmm5, qword ptr [eax*4 + 0x444480] */
  guest_unsupported(0x40af1d); /* mulsd xmm5, qword ptr [eax*4 + 0x444480] */
/* 40af26: mulsd xmm2, qword ptr [eax*4 + 0x444480] */
  guest_unsupported(0x40af26); /* mulsd xmm2, qword ptr [eax*4 + 0x444480] */
/* 40af2f: addpd xmm6, xmmword ptr [eax*8 + 0x444c90] */
  guest_unsupported(0x40af2f); /* addpd xmm6, xmmword ptr [eax*8 + 0x444c90] */
/* 40af38: andpd xmm0, xmm5 */
  guest_unsupported(0x40af38); /* andpd xmm0, xmm5 */
/* 40af3c: subsd xmm5, xmm0 */
  guest_unsupported(0x40af3c); /* subsd xmm5, xmm0 */
/* 40af40: addsd xmm7, xmm2 */
  guest_unsupported(0x40af40); /* addsd xmm7, xmm2 */
/* 40af44: movsd xmm3, xmm0 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40af48: mulsd xmm0, xmm1 */
  guest_unsupported(0x40af48); /* mulsd xmm0, xmm1 */
/* 40af4c: mulsd xmm1, xmm5 */
  guest_unsupported(0x40af4c); /* mulsd xmm1, xmm5 */
/* 40af50: mulsd xmm3, xmm4 */
  guest_unsupported(0x40af50); /* mulsd xmm3, xmm4 */
/* 40af54: subsd xmm2, xmm0 */
  guest_unsupported(0x40af54); /* subsd xmm2, xmm0 */
/* 40af58: mulsd xmm4, xmm5 */
  guest_unsupported(0x40af58); /* mulsd xmm4, xmm5 */
/* 40af5c: movsd xmm0, xmm6 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40af60: subsd xmm2, xmm1 */
  guest_unsupported(0x40af60); /* subsd xmm2, xmm1 */
/* 40af64: addsd xmm6, xmm7 */
  guest_unsupported(0x40af64); /* addsd xmm6, xmm7 */
/* 40af68: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40af68); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40af6e: pextrw eax, xmm1, 3 */
  guest_unsupported(0x40af6e); /* pextrw eax, xmm1, 3 */
/* 40af73: subsd xmm2, xmm3 */
  guest_unsupported(0x40af73); /* subsd xmm2, xmm3 */
/* 40af77: subsd xmm0, xmm6 */
  guest_unsupported(0x40af77); /* subsd xmm0, xmm6 */
/* 40af7b: movlpd xmm3, qword ptr [0x446528] */
  guest_unsupported(0x40af7b); /* movlpd xmm3, qword ptr [0x446528] */
/* 40af83: pextrw edx, xmm6, 3 */
  guest_unsupported(0x40af83); /* pextrw edx, xmm6, 3 */
/* 40af88: subsd xmm2, xmm4 */
  guest_unsupported(0x40af88); /* subsd xmm2, xmm4 */
/* 40af8c: movsd xmm4, xmm6 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40af90: addsd xmm0, xmm7 */
  guest_unsupported(0x40af90); /* addsd xmm0, xmm7 */
/* 40af94: subsd xmm7, xmm2 */
  guest_unsupported(0x40af94); /* subsd xmm7, xmm2 */
/* 40af98: subsd xmm6, xmm2 */
  guest_unsupported(0x40af98); /* subsd xmm6, xmm2 */
/* 40af9c: unpcklpd xmm7, xmm7 */
  guest_unsupported(0x40af9c); /* unpcklpd xmm7, xmm7 */
/* 40afa0: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40afa5: cmp eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40afaa: jae 0x40b4c7 */
  if (!cf) goto L_40b4c7;
L_40afb0: /* 40afb0: and edx, 0x7ff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40afb6: sub eax, 0x3ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ff0u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40afbb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40afbd: mov edx, 0x40a0 */
  edx = 0x40a0u;
/* 40afc2: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40afc4: sub eax, 0x3c70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c70u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40afc9: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40afcb: cmp edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40afd1: jae 0x40b8b0 */
  if (!cf) goto L_40b8b0;
L_40afd7: /* 40afd7: subsd xmm4, xmm6 */
  guest_unsupported(0x40afd7); /* subsd xmm4, xmm6 */
/* 40afdb: subsd xmm2, xmm4 */
  guest_unsupported(0x40afdb); /* subsd xmm2, xmm4 */
/* 40afdf: movlpd xmm4, qword ptr [0x446528] */
  guest_unsupported(0x40afdf); /* movlpd xmm4, qword ptr [0x446528] */
/* 40afe7: andpd xmm3, xmm1 */
  guest_unsupported(0x40afe7); /* andpd xmm3, xmm1 */
/* 40afeb: andpd xmm4, xmm6 */
  guest_unsupported(0x40afeb); /* andpd xmm4, xmm6 */
/* 40afef: subsd xmm0, xmm2 */
  guest_unsupported(0x40afef); /* subsd xmm0, xmm2 */
/* 40aff3: xorpd xmm2, xmm2 */
  guest_unsupported(0x40aff3); /* xorpd xmm2, xmm2 */
/* 40aff7: mov edx, 0x4060 */
  edx = 0x4060u;
/* 40affc: pinsrw xmm2, edx, 3 */
  guest_unsupported(0x40affc); /* pinsrw xmm2, edx, 3 */
/* 40b001: movsd xmm5, xmm3 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b005: mulsd xmm3, xmm4 */
  guest_unsupported(0x40b005); /* mulsd xmm3, xmm4 */
/* 40b009: subsd xmm6, xmm4 */
  guest_unsupported(0x40b009); /* subsd xmm6, xmm4 */
/* 40b00d: subsd xmm1, xmm5 */
  guest_unsupported(0x40b00d); /* subsd xmm1, xmm5 */
/* 40b011: mulsd xmm3, xmm2 */
  guest_unsupported(0x40b011); /* mulsd xmm3, xmm2 */
/* 40b015: mulsd xmm5, xmm6 */
  guest_unsupported(0x40b015); /* mulsd xmm5, xmm6 */
/* 40b019: movapd xmm2, xmmword ptr [0x445ca0] */
  guest_unsupported(0x40b019); /* movapd xmm2, xmmword ptr [0x445ca0] */
/* 40b021: mulsd xmm4, xmm1 */
  guest_unsupported(0x40b021); /* mulsd xmm4, xmm1 */
/* 40b025: cvtsd2si eax, xmm3 */
  guest_unsupported(0x40b025); /* cvtsd2si eax, xmm3 */
/* 40b029: mulsd xmm6, xmm1 */
  guest_unsupported(0x40b029); /* mulsd xmm6, xmm1 */
/* 40b02d: movapd xmm1, xmmword ptr [0x445cb0] */
  guest_unsupported(0x40b02d); /* movapd xmm1, xmmword ptr [0x445cb0] */
/* 40b035: addsd xmm5, xmm4 */
  guest_unsupported(0x40b035); /* addsd xmm5, xmm4 */
/* 40b039: pshufd xmm4, xmm6, 0xee */
  guest_unsupported(0x40b039); /* pshufd xmm4, xmm6, 0xee */
/* 40b03e: addsd xmm5, xmm6 */
  guest_unsupported(0x40b03e); /* addsd xmm5, xmm6 */
/* 40b042: mov edx, 0x1ff7f */
  edx = 0x1ff7fu;
/* 40b047: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b049: add eax, 0x1e1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1e1ffu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b04e: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40b050: sub eax, 0x1e1ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1e1ffu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40b055: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40b058: jle 0x40b640 */
  if ((zf || sf != of)) goto L_40b640;
L_40b05e: /* 40b05e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40b060: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b063: and ecx, 0xffffff80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40b066: add ecx, 0x1ff80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ff80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40b06c: addsd xmm4, xmm0 */
  guest_unsupported(0x40b06c); /* addsd xmm4, xmm0 */
/* 40b070: movsd xmm0, xmm3 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b074: addsd xmm3, qword ptr [0x4464c0] */
  guest_unsupported(0x40b074); /* addsd xmm3, qword ptr [0x4464c0] */
/* 40b07c: mulpd xmm2, xmm7 */
  guest_unsupported(0x40b07c); /* mulpd xmm2, xmm7 */
/* 40b080: subsd xmm3, qword ptr [0x4464c0] */
  guest_unsupported(0x40b080); /* subsd xmm3, qword ptr [0x4464c0] */
/* 40b088: mulpd xmm7, xmm7 */
  guest_unsupported(0x40b088); /* mulpd xmm7, xmm7 */
/* 40b08c: subsd xmm0, xmm3 */
  guest_unsupported(0x40b08c); /* subsd xmm0, xmm3 */
/* 40b090: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b092: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b094: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b096: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b098: movapd xmm3, xmmword ptr [eax + 0x445cc0] */
  guest_unsupported(0x40b098); /* movapd xmm3, xmmword ptr [eax + 0x445cc0] */
/* 40b0a0: movapd xmm6, xmmword ptr [0x446500] */
  guest_unsupported(0x40b0a0); /* movapd xmm6, xmmword ptr [0x446500] */
/* 40b0a8: mulpd xmm1, xmm7 */
  guest_unsupported(0x40b0a8); /* mulpd xmm1, xmm7 */
/* 40b0ac: addpd xmm2, xmm1 */
  guest_unsupported(0x40b0ac); /* addpd xmm2, xmm1 */
/* 40b0b0: pshufd xmm1, xmm2, 0xee */
  guest_unsupported(0x40b0b0); /* pshufd xmm1, xmm2, 0xee */
/* 40b0b5: mulsd xmm2, xmm7 */
  guest_unsupported(0x40b0b5); /* mulsd xmm2, xmm7 */
/* 40b0b9: xorpd xmm7, xmm7 */
  guest_unsupported(0x40b0b9); /* xorpd xmm7, xmm7 */
/* 40b0bd: mov edx, 0x3f80 */
  edx = 0x3f80u;
/* 40b0c2: addsd xmm2, xmm1 */
  guest_unsupported(0x40b0c2); /* addsd xmm2, xmm1 */
/* 40b0c6: pinsrw xmm7, edx, 3 */
  guest_unsupported(0x40b0c6); /* pinsrw xmm7, edx, 3 */
/* 40b0cb: addsd xmm2, xmm4 */
  guest_unsupported(0x40b0cb); /* addsd xmm2, xmm4 */
/* 40b0cf: movlpd xmm4, qword ptr [0x446520] */
  guest_unsupported(0x40b0cf); /* movlpd xmm4, qword ptr [0x446520] */
/* 40b0d7: movd xmm1, ecx */
  guest_unsupported(0x40b0d7); /* movd xmm1, ecx */
/* 40b0db: mulsd xmm2, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b0db); /* mulsd xmm2, qword ptr [esp + 0xc] */
/* 40b0e1: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b0e1); /* mulsd xmm0, xmm7 */
/* 40b0e5: psllq xmm1, 0x2d */
  guest_unsupported(0x40b0e5); /* psllq xmm1, 0x2d */
/* 40b0ea: pshufd xmm1, xmm1, 0x44 */
  guest_unsupported(0x40b0ea); /* pshufd xmm1, xmm1, 0x44 */
/* 40b0ef: movapd xmm7, xmmword ptr [0x446510] */
  guest_unsupported(0x40b0ef); /* movapd xmm7, xmmword ptr [0x446510] */
/* 40b0f7: addsd xmm5, xmm2 */
  guest_unsupported(0x40b0f7); /* addsd xmm5, xmm2 */
/* 40b0fb: mulpd xmm3, xmm1 */
  guest_unsupported(0x40b0fb); /* mulpd xmm3, xmm1 */
/* 40b0ff: addsd xmm0, xmm5 */
  guest_unsupported(0x40b0ff); /* addsd xmm0, xmm5 */
/* 40b103: unpcklpd xmm0, xmm0 */
  guest_unsupported(0x40b103); /* unpcklpd xmm0, xmm0 */
/* 40b107: mulpd xmm6, xmm0 */
  guest_unsupported(0x40b107); /* mulpd xmm6, xmm0 */
/* 40b10b: mulsd xmm4, xmm0 */
  guest_unsupported(0x40b10b); /* mulsd xmm4, xmm0 */
/* 40b10f: mulpd xmm0, xmm0 */
  guest_unsupported(0x40b10f); /* mulpd xmm0, xmm0 */
/* 40b113: addpd xmm7, xmm6 */
  guest_unsupported(0x40b113); /* addpd xmm7, xmm6 */
/* 40b117: mulpd xmm7, xmm0 */
  guest_unsupported(0x40b117); /* mulpd xmm7, xmm0 */
/* 40b11b: mulsd xmm0, xmm3 */
  guest_unsupported(0x40b11b); /* mulsd xmm0, xmm3 */
/* 40b11f: pshufd xmm6, xmm7, 0xee */
  guest_unsupported(0x40b11f); /* pshufd xmm6, xmm7, 0xee */
/* 40b124: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b124); /* mulsd xmm0, xmm7 */
/* 40b128: pshufd xmm5, xmm3, 0xee */
  guest_unsupported(0x40b128); /* pshufd xmm5, xmm3, 0xee */
/* 40b12d: mulsd xmm6, xmm3 */
  guest_unsupported(0x40b12d); /* mulsd xmm6, xmm3 */
/* 40b131: mulsd xmm4, xmm3 */
  guest_unsupported(0x40b131); /* mulsd xmm4, xmm3 */
/* 40b135: addsd xmm0, xmm5 */
  guest_unsupported(0x40b135); /* addsd xmm0, xmm5 */
/* 40b139: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b13c: addsd xmm0, xmm6 */
  guest_unsupported(0x40b13c); /* addsd xmm0, xmm6 */
/* 40b140: addsd xmm0, xmm4 */
  guest_unsupported(0x40b140); /* addsd xmm0, xmm4 */
/* 40b144: addsd xmm0, xmm3 */
  guest_unsupported(0x40b144); /* addsd xmm0, xmm3 */
/* 40b148: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40b148); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40b14e: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40b152: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b155: ret  */
  esp += 4; SPILL(); return;
L_40b156: /* 40b156: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b156); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b15c: movlpd xmm3, qword ptr [0x4464f0] */
  guest_unsupported(0x40b15c); /* movlpd xmm3, qword ptr [0x4464f0] */
/* 40b164: movd eax, xmm1 */
  guest_unsupported(0x40b164); /* movd eax, xmm1 */
/* 40b168: movsd xmm2, xmm1 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b16c: andpd xmm1, xmm3 */
  guest_unsupported(0x40b16c); /* andpd xmm1, xmm3 */
/* 40b170: psrlq xmm1, 0x20 */
  guest_unsupported(0x40b170); /* psrlq xmm1, 0x20 */
/* 40b175: movd ecx, xmm1 */
  guest_unsupported(0x40b175); /* movd ecx, xmm1 */
/* 40b179: cmp ecx, 0x7ff00000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b17f: jae 0x40b25f */
  if (!cf) goto L_40b25f;
L_40b185: /* 40b185: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40b187: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b18a: je 0x40b5a3 */
  if (zf) goto L_40b5a3;
L_40b190: /* 40b190: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40b193: jge 0x40b29e */
  if ((sf == of)) goto L_40b29e;
L_40b199: /* 40b199: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40b19b: add edx, 0x7fef */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fefu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b1a1: psllq xmm3, 0x34 */
  guest_unsupported(0x40b1a1); /* psllq xmm3, 0x34 */
/* 40b1a6: orpd xmm2, xmm3 */
  guest_unsupported(0x40b1a6); /* orpd xmm2, xmm3 */
/* 40b1aa: mov ecx, 0x3f3 */
  ecx = 0x3f3u;
/* 40b1af: movd xmm3, ecx */
  guest_unsupported(0x40b1af); /* movd xmm3, ecx */
/* 40b1b3: psrlq xmm1, 0x14 */
  guest_unsupported(0x40b1b3); /* psrlq xmm1, 0x14 */
/* 40b1b8: psubd xmm1, xmm3 */
  guest_unsupported(0x40b1b8); /* psubd xmm1, xmm3 */
/* 40b1bc: pxor xmm3, xmm3 */
  guest_unsupported(0x40b1bc); /* pxor xmm3, xmm3 */
/* 40b1c0: pmaxsw xmm1, xmm3 */
  guest_unsupported(0x40b1c0); /* pmaxsw xmm1, xmm3 */
/* 40b1c4: psllq xmm2, xmm1 */
  guest_unsupported(0x40b1c4); /* psllq xmm2, xmm1 */
/* 40b1c8: pcmpeqd xmm2, xmm3 */
  guest_unsupported(0x40b1c8); /* pcmpeqd xmm2, xmm3 */
/* 40b1cc: pmovmskb eax, xmm2 */
  guest_unsupported(0x40b1cc); /* pmovmskb eax, xmm2 */
/* 40b1d0: mov ecx, edx */
  ecx = edx;
/* 40b1d2: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b1d8: cmp edx, 0x7ff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b1de: jae 0x40b387 */
  if (!cf) goto L_40b387;
L_40b1e4: /* 40b1e4: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b1e9: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b1ee: jne 0x40b480 */
  if (!zf) goto L_40b480;
L_40b1f4: /* 40b1f4: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b1f4); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b1fa: movlpd xmm2, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b1fa); /* movlpd xmm2, qword ptr [esp + 0xc] */
/* 40b200: mov ecx, 0x3f4 */
  ecx = 0x3f4u;
/* 40b205: movd xmm3, ecx */
  guest_unsupported(0x40b205); /* movd xmm3, ecx */
/* 40b209: andpd xmm1, xmmword ptr [0x4464f0] */
  guest_unsupported(0x40b209); /* andpd xmm1, xmmword ptr [0x4464f0] */
/* 40b211: psrlq xmm1, 0x34 */
  guest_unsupported(0x40b211); /* psrlq xmm1, 0x34 */
/* 40b216: psubd xmm1, xmm3 */
  guest_unsupported(0x40b216); /* psubd xmm1, xmm3 */
/* 40b21a: movlpd xmm3, qword ptr [0x446550] */
  guest_unsupported(0x40b21a); /* movlpd xmm3, qword ptr [0x446550] */
/* 40b222: psllq xmm2, xmm1 */
  guest_unsupported(0x40b222); /* psllq xmm2, xmm1 */
/* 40b226: pcmpeqd xmm2, xmm3 */
  guest_unsupported(0x40b226); /* pcmpeqd xmm2, xmm3 */
/* 40b22a: pmovmskb eax, xmm2 */
  guest_unsupported(0x40b22a); /* pmovmskb eax, xmm2 */
/* 40b22e: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b233: mov ecx, 0x3ff01 */
  ecx = 0x3ff01u;
/* 40b238: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40b23a: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40b240: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b243: jb 0x40b2a3 */
  if (cf) goto L_40b2a3;
L_40b245: /* 40b245: mov edx, 0xbfe7f */
  edx = 0xbfe7fu;
/* 40b24a: movlpd xmm3, qword ptr [0x4464d0] */
  guest_unsupported(0x40b24a); /* movlpd xmm3, qword ptr [0x4464d0] */
/* 40b252: movlpd xmm2, qword ptr [0x4464e0] */
  guest_unsupported(0x40b252); /* movlpd xmm2, qword ptr [0x4464e0] */
/* 40b25a: jmp 0x40ae85 */
  goto L_40ae85;
L_40b25f: /* 40b25f: movlpd xmm7, qword ptr [esp + 4] */
  guest_unsupported(0x40b25f); /* movlpd xmm7, qword ptr [esp + 4] */
/* 40b265: movlpd xmm4, qword ptr [esp + 4] */
  guest_unsupported(0x40b265); /* movlpd xmm4, qword ptr [esp + 4] */
/* 40b26b: movd edx, xmm7 */
  guest_unsupported(0x40b26b); /* movd edx, xmm7 */
/* 40b26f: psrlq xmm7, 0x20 */
  guest_unsupported(0x40b26f); /* psrlq xmm7, 0x20 */
/* 40b274: movd eax, xmm7 */
  guest_unsupported(0x40b274); /* movd eax, xmm7 */
/* 40b278: mov ecx, eax */
  ecx = eax;
/* 40b27a: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b27f: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b284: jb 0x40b51b */
  if (cf) goto L_40b51b;
L_40b28a: /* 40b28a: ja 0x40b46e */
  if ((!cf && !zf)) goto L_40b46e;
L_40b290: /* 40b290: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b293: ja 0x40b46e */
  if ((!cf && !zf)) goto L_40b46e;
L_40b299: /* 40b299: jmp 0x40b51b */
  goto L_40b51b;
L_40b29e: /* 40b29e: mov ecx, 0 */
  ecx = 0x0u;
L_40b2a3: /* 40b2a3: xorpd xmm0, xmm0 */
  guest_unsupported(0x40b2a3); /* xorpd xmm0, xmm0 */
/* 40b2a7: mov eax, 0x43f0 */
  eax = 0x43f0u;
/* 40b2ac: pinsrw xmm0, eax, 3 */
  guest_unsupported(0x40b2ac); /* pinsrw xmm0, eax, 3 */
/* 40b2b1: movlpd xmm7, qword ptr [0x4464d0] */
  guest_unsupported(0x40b2b1); /* movlpd xmm7, qword ptr [0x4464d0] */
/* 40b2b9: movlpd xmm2, qword ptr [0x4464e0] */
  guest_unsupported(0x40b2b9); /* movlpd xmm2, qword ptr [0x4464e0] */
/* 40b2c1: mulsd xmm0, xmm4 */
  guest_unsupported(0x40b2c1); /* mulsd xmm0, xmm4 */
/* 40b2c5: movd edx, xmm4 */
  guest_unsupported(0x40b2c5); /* movd edx, xmm4 */
/* 40b2c9: psrlq xmm4, 0x20 */
  guest_unsupported(0x40b2c9); /* psrlq xmm4, 0x20 */
/* 40b2ce: movd eax, xmm4 */
  guest_unsupported(0x40b2ce); /* movd eax, xmm4 */
/* 40b2d2: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b2d5: je 0x40b329 */
  if (zf) goto L_40b329;
L_40b2d7: /* 40b2d7: andpd xmm7, xmm0 */
  guest_unsupported(0x40b2d7); /* andpd xmm7, xmm0 */
/* 40b2db: movsd xmm4, xmm0 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b2df: andpd xmm0, xmmword ptr [0x4464f0] */
  guest_unsupported(0x40b2df); /* andpd xmm0, xmmword ptr [0x4464f0] */
/* 40b2e7: psrlq xmm0, 0x2c */
  guest_unsupported(0x40b2e7); /* psrlq xmm0, 0x2c */
/* 40b2ec: pextrw eax, xmm0, 0 */
  guest_unsupported(0x40b2ec); /* pextrw eax, xmm0, 0 */
/* 40b2f1: orpd xmm7, xmm2 */
  guest_unsupported(0x40b2f1); /* orpd xmm7, xmm2 */
/* 40b2f5: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b2fa: add eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b2fd: and eax, 0x1fe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1feu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b302: mulsd xmm7, qword ptr [eax*4 + 0x442c40] */
  guest_unsupported(0x40b302); /* mulsd xmm7, qword ptr [eax*4 + 0x442c40] */
/* 40b30b: movlpd xmm5, qword ptr [eax*4 + 0x442c40] */
  guest_unsupported(0x40b30b); /* movlpd xmm5, qword ptr [eax*4 + 0x442c40] */
/* 40b314: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b316: movapd xmm6, xmmword ptr [eax*4 + 0x443050] */
  guest_unsupported(0x40b316); /* movapd xmm6, xmmword ptr [eax*4 + 0x443050] */
/* 40b31f: mov edx, 0x43e7f */
  edx = 0x43e7fu;
/* 40b324: jmp 0x40ae85 */
  goto L_40ae85;
L_40b329: /* 40b329: mov edx, eax */
  edx = eax;
/* 40b32b: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b331: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b334: jne 0x40b2d7 */
  if (!zf) goto L_40b2d7;
L_40b336: /* 40b336: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 40b33a: and edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b340: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b343: je 0x40b376 */
  if (zf) goto L_40b376;
L_40b345: /* 40b345: shl ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40b348: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b34a: mov edx, 0x7ff00000 */
  edx = 0x7ff00000u;
/* 40b34f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40b351: movd xmm0, edx */
  guest_unsupported(0x40b351); /* movd xmm0, edx */
/* 40b355: psllq xmm0, 0x20 */
  guest_unsupported(0x40b355); /* psllq xmm0, 0x20 */
/* 40b35a: movlpd xmm1, qword ptr [0x4464e0] */
  guest_unsupported(0x40b35a); /* movlpd xmm1, qword ptr [0x4464e0] */
/* 40b362: movlpd xmm2, qword ptr [esp + 4] */
  guest_unsupported(0x40b362); /* movlpd xmm2, qword ptr [esp + 4] */
/* 40b368: divsd xmm1, xmm2 */
  guest_unsupported(0x40b368); /* divsd xmm1, xmm2 */
/* 40b36c: mov edx, 0x1b */
  edx = 0x1bu;
/* 40b371: jmp 0x40b610 */
  goto L_40b610;
L_40b376: /* 40b376: shl ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 40b379: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b37b: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b37e: jne 0x40b428 */
  if (!zf) goto L_40b428;
L_40b384: /* 40b384: fldz  */
  FPUSH(0.0);
/* 40b386: ret  */
  esp += 4; SPILL(); return;
L_40b387: /* 40b387: movlpd xmm3, qword ptr [0x4464d0] */
  guest_unsupported(0x40b387); /* movlpd xmm3, qword ptr [0x4464d0] */
/* 40b38f: xorpd xmm1, xmm1 */
  guest_unsupported(0x40b38f); /* xorpd xmm1, xmm1 */
/* 40b393: andpd xmm3, xmm4 */
  guest_unsupported(0x40b393); /* andpd xmm3, xmm4 */
/* 40b397: pcmpeqd xmm1, xmm3 */
  guest_unsupported(0x40b397); /* pcmpeqd xmm1, xmm3 */
/* 40b39b: pmovmskb ecx, xmm1 */
  guest_unsupported(0x40b39b); /* pmovmskb ecx, xmm1 */
/* 40b39f: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40b3a5: cmp ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b3ab: jne 0x40b46e */
  if (!zf) goto L_40b46e;
L_40b3b1: /* 40b3b1: pextrw ecx, xmm4, 3 */
  guest_unsupported(0x40b3b1); /* pextrw ecx, xmm4, 3 */
/* 40b3b6: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 40b3bc: cmp ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b3bf: je 0x40b452 */
  if (zf) goto L_40b452;
L_40b3c5: /* 40b3c5: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b3ca: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b3cf: jne 0x40b436 */
  if (!zf) goto L_40b436;
L_40b3d1: /* 40b3d1: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b3d1); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b3d7: movlpd xmm2, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b3d7); /* movlpd xmm2, qword ptr [esp + 0xc] */
/* 40b3dd: mov ecx, 0x3f4 */
  ecx = 0x3f4u;
/* 40b3e2: movd xmm3, ecx */
  guest_unsupported(0x40b3e2); /* movd xmm3, ecx */
/* 40b3e6: andpd xmm1, xmmword ptr [0x4464f0] */
  guest_unsupported(0x40b3e6); /* andpd xmm1, xmmword ptr [0x4464f0] */
/* 40b3ee: psrlq xmm1, 0x34 */
  guest_unsupported(0x40b3ee); /* psrlq xmm1, 0x34 */
/* 40b3f3: psubd xmm1, xmm3 */
  guest_unsupported(0x40b3f3); /* psubd xmm1, xmm3 */
/* 40b3f7: pxor xmm3, xmm3 */
  guest_unsupported(0x40b3f7); /* pxor xmm3, xmm3 */
/* 40b3fb: psllq xmm2, xmm1 */
  guest_unsupported(0x40b3fb); /* psllq xmm2, xmm1 */
/* 40b3ff: pcmpeqd xmm2, xmm3 */
  guest_unsupported(0x40b3ff); /* pcmpeqd xmm2, xmm3 */
/* 40b403: pmovmskb eax, xmm2 */
  guest_unsupported(0x40b403); /* pmovmskb eax, xmm2 */
/* 40b407: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b40c: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b411: je 0x40b436 */
  if (zf) goto L_40b436;
L_40b413: /* 40b413: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b413); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b419: pextrw eax, xmm1, 3 */
  guest_unsupported(0x40b419); /* pextrw eax, xmm1, 3 */
/* 40b41e: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b423: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b426: je 0x40b42f */
  if (zf) goto L_40b42f;
L_40b428: /* 40b428: fld qword ptr [0x446550] */
  { double v = F64((uint32_t)(0x446550u)); FPUSH(v); }
/* 40b42e: ret  */
  esp += 4; SPILL(); return;
L_40b42f: /* 40b42f: fld qword ptr [0x446548] */
  { double v = F64((uint32_t)(0x446548u)); FPUSH(v); }
/* 40b435: ret  */
  esp += 4; SPILL(); return;
L_40b436: /* 40b436: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b436); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b43c: pextrw eax, xmm1, 3 */
  guest_unsupported(0x40b43c); /* pextrw eax, xmm1, 3 */
/* 40b441: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b446: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b449: je 0x40b58d */
  if (zf) goto L_40b58d;
L_40b44f: /* 40b44f: fldz  */
  FPUSH(0.0);
/* 40b451: ret  */
  esp += 4; SPILL(); return;
L_40b452: /* 40b452: movlpd xmm1, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b452); /* movlpd xmm1, qword ptr [esp + 0xc] */
/* 40b458: pextrw eax, xmm1, 3 */
  guest_unsupported(0x40b458); /* pextrw eax, xmm1, 3 */
/* 40b45d: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b462: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b465: je 0x40b58d */
  if (zf) goto L_40b58d;
L_40b46b: /* 40b46b: fldz  */
  FPUSH(0.0);
/* 40b46d: ret  */
  esp += 4; SPILL(); return;
L_40b46e: /* 40b46e: addsd xmm4, xmm4 */
  guest_unsupported(0x40b46e); /* addsd xmm4, xmm4 */
/* 40b472: movsd xmm0, xmm4 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b476: mov edx, 0x3ee */
  edx = 0x3eeu;
/* 40b47b: jmp 0x40b610 */
  goto L_40b610;
L_40b480: /* 40b480: movlpd xmm2, qword ptr [esp + 4] */
  guest_unsupported(0x40b480); /* movlpd xmm2, qword ptr [esp + 4] */
/* 40b486: movd eax, xmm2 */
  guest_unsupported(0x40b486); /* movd eax, xmm2 */
/* 40b48a: psrlq xmm2, 0x20 */
  guest_unsupported(0x40b48a); /* psrlq xmm2, 0x20 */
/* 40b48f: movd edx, xmm2 */
  guest_unsupported(0x40b48f); /* movd edx, xmm2 */
/* 40b493: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b499: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40b49b: mov ecx, 0 */
  ecx = 0x0u;
/* 40b4a0: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b4a3: je 0x40b329 */
  if (zf) goto L_40b329;
L_40b4a9: /* 40b4a9: movlpd xmm1, qword ptr [0x446538] */
  guest_unsupported(0x40b4a9); /* movlpd xmm1, qword ptr [0x446538] */
/* 40b4b1: movlpd xmm0, qword ptr [0x446560] */
  guest_unsupported(0x40b4b1); /* movlpd xmm0, qword ptr [0x446560] */
/* 40b4b9: mulsd xmm1, xmm1 */
  guest_unsupported(0x40b4b9); /* mulsd xmm1, xmm1 */
/* 40b4bd: mov edx, 0x1c */
  edx = 0x1cu;
/* 40b4c2: jmp 0x40b610 */
  goto L_40b610;
L_40b4c7: /* 40b4c7: movlpd xmm4, qword ptr [esp + 4] */
  guest_unsupported(0x40b4c7); /* movlpd xmm4, qword ptr [esp + 4] */
/* 40b4cd: movlpd xmm2, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b4cd); /* movlpd xmm2, qword ptr [esp + 0xc] */
/* 40b4d3: movd eax, xmm4 */
  guest_unsupported(0x40b4d3); /* movd eax, xmm4 */
/* 40b4d7: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b4da: jne 0x40b51b */
  if (!zf) goto L_40b51b;
L_40b4dc: /* 40b4dc: psrlq xmm4, 0x20 */
  guest_unsupported(0x40b4dc); /* psrlq xmm4, 0x20 */
/* 40b4e1: movd edx, xmm4 */
  guest_unsupported(0x40b4e1); /* movd edx, xmm4 */
/* 40b4e5: cmp edx, 0x3ff00000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b4eb: je 0x40b5f9 */
  if (zf) goto L_40b5f9;
L_40b4f1: /* 40b4f1: cmp edx, 0xbff00000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xbff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b4f7: jne 0x40b51b */
  if (!zf) goto L_40b51b;
L_40b4f9: /* 40b4f9: movlpd xmm3, qword ptr [0x4464d0] */
  guest_unsupported(0x40b4f9); /* movlpd xmm3, qword ptr [0x4464d0] */
/* 40b501: xorpd xmm1, xmm1 */
  guest_unsupported(0x40b501); /* xorpd xmm1, xmm1 */
/* 40b505: andpd xmm3, xmm2 */
  guest_unsupported(0x40b505); /* andpd xmm3, xmm2 */
/* 40b509: pcmpeqd xmm1, xmm3 */
  guest_unsupported(0x40b509); /* pcmpeqd xmm1, xmm3 */
/* 40b50d: pmovmskb eax, xmm1 */
  guest_unsupported(0x40b50d); /* pmovmskb eax, xmm1 */
/* 40b511: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b516: jne 0x40b594 */
  if (!zf) goto L_40b594;
L_40b518: /* 40b518: fld1  */
  FPUSH(1.0);
/* 40b51a: ret  */
  esp += 4; SPILL(); return;
L_40b51b: /* 40b51b: movlpd xmm3, qword ptr [0x4464d0] */
  guest_unsupported(0x40b51b); /* movlpd xmm3, qword ptr [0x4464d0] */
/* 40b523: xorpd xmm1, xmm1 */
  guest_unsupported(0x40b523); /* xorpd xmm1, xmm1 */
/* 40b527: andpd xmm3, xmm2 */
  guest_unsupported(0x40b527); /* andpd xmm3, xmm2 */
/* 40b52b: pcmpeqd xmm1, xmm3 */
  guest_unsupported(0x40b52b); /* pcmpeqd xmm1, xmm3 */
/* 40b52f: pmovmskb eax, xmm1 */
  guest_unsupported(0x40b52f); /* pmovmskb eax, xmm1 */
/* 40b533: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b538: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b53d: jne 0x40b594 */
  if (!zf) goto L_40b594;
L_40b53f: /* 40b53f: pextrw eax, xmm2, 3 */
  guest_unsupported(0x40b53f); /* pextrw eax, xmm2, 3 */
/* 40b544: movlpd xmm4, qword ptr [esp + 4] */
  guest_unsupported(0x40b544); /* movlpd xmm4, qword ptr [esp + 4] */
/* 40b54a: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b54f: xor ecx, 0xbff00000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbff00000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 40b555: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40b557: cmp edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b55a: je 0x40b5f9 */
  if (zf) goto L_40b5f9;
L_40b560: /* 40b560: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b563: je 0x40b579 */
  if (zf) goto L_40b579;
L_40b565: /* 40b565: pextrw eax, xmm4, 3 */
  guest_unsupported(0x40b565); /* pextrw eax, xmm4, 3 */
/* 40b56a: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b56f: cmp eax, 0x3ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ff0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b574: jb 0x40b58d */
  if (cf) goto L_40b58d;
L_40b576: /* 40b576: fldz  */
  FPUSH(0.0);
/* 40b578: ret  */
  esp += 4; SPILL(); return;
L_40b579: /* 40b579: pextrw eax, xmm4, 3 */
  guest_unsupported(0x40b579); /* pextrw eax, xmm4, 3 */
/* 40b57e: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b583: cmp eax, 0x3ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ff0u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b588: jae 0x40b58d */
  if (!cf) goto L_40b58d;
L_40b58a: /* 40b58a: fldz  */
  FPUSH(0.0);
/* 40b58c: ret  */
  esp += 4; SPILL(); return;
L_40b58d: /* 40b58d: fld qword ptr [0x446540] */
  { double v = F64((uint32_t)(0x446540u)); FPUSH(v); }
/* 40b593: ret  */
  esp += 4; SPILL(); return;
L_40b594: /* 40b594: addsd xmm2, xmm2 */
  guest_unsupported(0x40b594); /* addsd xmm2, xmm2 */
/* 40b598: movsd xmm0, xmm2 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b59c: mov edx, 0x3ee */
  edx = 0x3eeu;
/* 40b5a1: jmp 0x40b610 */
  goto L_40b610;
L_40b5a3: /* 40b5a3: movd eax, xmm4 */
  guest_unsupported(0x40b5a3); /* movd eax, xmm4 */
/* 40b5a7: psrlq xmm4, 0x20 */
  guest_unsupported(0x40b5a7); /* psrlq xmm4, 0x20 */
/* 40b5ac: movd edx, xmm4 */
  guest_unsupported(0x40b5ac); /* movd edx, xmm4 */
/* 40b5b0: and edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b5b6: mov ecx, eax */
  ecx = eax;
/* 40b5b8: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40b5ba: movlpd xmm0, qword ptr [0x4464e0] */
  guest_unsupported(0x40b5ba); /* movlpd xmm0, qword ptr [0x4464e0] */
/* 40b5c2: mov edx, 0x1a */
  edx = 0x1au;
/* 40b5c7: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b5ca: je 0x40b610 */
  if (zf) goto L_40b610;
L_40b5cc: /* 40b5cc: movd eax, xmm4 */
  guest_unsupported(0x40b5cc); /* movd eax, xmm4 */
/* 40b5d0: mov edx, 0x1d */
  edx = 0x1du;
/* 40b5d5: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b5da: cmp eax, 0x7ff00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b5df: ja 0x40b610 */
  if ((!cf && !zf)) goto L_40b610;
L_40b5e1: /* 40b5e1: jb 0x40b5e8 */
  if (cf) goto L_40b5e8;
L_40b5e3: /* 40b5e3: cmp ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b5e6: ja 0x40b610 */
  if ((!cf && !zf)) goto L_40b610;
L_40b5e8: /* 40b5e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b5eb: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40b5eb); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40b5f1: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40b5f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b5f8: ret  */
  esp += 4; SPILL(); return;
L_40b5f9: /* 40b5f9: movlpd xmm1, qword ptr [0x446560] */
  guest_unsupported(0x40b5f9); /* movlpd xmm1, qword ptr [0x446560] */
/* 40b601: movlpd xmm0, qword ptr [esp + 0xc] */
  guest_unsupported(0x40b601); /* movlpd xmm0, qword ptr [esp + 0xc] */
/* 40b607: addsd xmm0, xmm1 */
  guest_unsupported(0x40b607); /* addsd xmm0, xmm1 */
/* 40b60b: mov edx, 0x1c */
  edx = 0x1cu;
L_40b610: /* 40b610: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b613: movlpd qword ptr [esp + 0x10], xmm0 */
  guest_unsupported(0x40b613); /* movlpd qword ptr [esp + 0x10], xmm0 */
/* 40b619: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 40b61d: mov edx, esp */
  edx = esp;
/* 40b61f: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b622: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 40b626: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b629: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 40b62d: sub edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b630: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 40b633: call 0x436052 */
  esp -= 4; W32(esp, 0x40b638u); SPILL(); f_436052(); if (g_unwind) return; RELOAD();
/* 40b638: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 40b63c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b63f: ret  */
  esp += 4; SPILL(); return;
L_40b640: /* 40b640: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40b643: jle 0x40b66d */
  if ((zf || sf != of)) goto L_40b66d;
L_40b645: /* 40b645: cmp eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b64a: jae 0x40b88c */
  if (!cf) goto L_40b88c;
L_40b650: /* 40b650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40b651: mov edx, eax */
  edx = eax;
/* 40b653: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b656: add ecx, 0x3ff00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ff00u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40b65c: sub edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b662: and edx, 0xffffff80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b665: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40b666: mov edi, 0x3ff0 */
  edi = 0x3ff0u;
/* 40b66b: jmp 0x40b693 */
  goto L_40b693;
L_40b66d: /* 40b66d: cmp eax, 0xfffc0200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffc0200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40b672: jle 0x40b869 */
  if ((zf || sf != of)) goto L_40b869;
L_40b678: /* 40b678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40b679: mov edx, eax */
  edx = eax;
/* 40b67b: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b67e: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40b684: and edx, 0xffffff80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b687: add edx, 0x3fe80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fe80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b68d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40b68e: mov edi, 0 */
  edi = 0x0u;
L_40b693: /* 40b693: addsd xmm4, xmm0 */
  guest_unsupported(0x40b693); /* addsd xmm4, xmm0 */
/* 40b697: movsd xmm0, xmm3 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b69b: addsd xmm3, qword ptr [0x4464c0] */
  guest_unsupported(0x40b69b); /* addsd xmm3, qword ptr [0x4464c0] */
/* 40b6a3: mov esi, edx */
  esi = edx;
/* 40b6a5: sub esi, 0x1ff80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ff80u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 40b6ab: mulpd xmm2, xmm7 */
  guest_unsupported(0x40b6ab); /* mulpd xmm2, xmm7 */
/* 40b6af: subsd xmm3, qword ptr [0x4464c0] */
  guest_unsupported(0x40b6af); /* subsd xmm3, qword ptr [0x4464c0] */
/* 40b6b7: mulpd xmm7, xmm7 */
  guest_unsupported(0x40b6b7); /* mulpd xmm7, xmm7 */
/* 40b6bb: subsd xmm0, xmm3 */
  guest_unsupported(0x40b6bb); /* subsd xmm0, xmm3 */
/* 40b6bf: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b6c1: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b6c3: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b6c5: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40b6c7: movapd xmm3, xmmword ptr [eax + 0x445cc0] */
  guest_unsupported(0x40b6c7); /* movapd xmm3, xmmword ptr [eax + 0x445cc0] */
/* 40b6cf: movapd xmm6, xmmword ptr [0x446500] */
  guest_unsupported(0x40b6cf); /* movapd xmm6, xmmword ptr [0x446500] */
/* 40b6d7: mulpd xmm1, xmm7 */
  guest_unsupported(0x40b6d7); /* mulpd xmm1, xmm7 */
/* 40b6db: addpd xmm2, xmm1 */
  guest_unsupported(0x40b6db); /* addpd xmm2, xmm1 */
/* 40b6df: pshufd xmm1, xmm2, 0xee */
  guest_unsupported(0x40b6df); /* pshufd xmm1, xmm2, 0xee */
/* 40b6e4: mulsd xmm2, xmm7 */
  guest_unsupported(0x40b6e4); /* mulsd xmm2, xmm7 */
/* 40b6e8: addsd xmm2, xmm1 */
  guest_unsupported(0x40b6e8); /* addsd xmm2, xmm1 */
/* 40b6ec: addsd xmm2, xmm4 */
  guest_unsupported(0x40b6ec); /* addsd xmm2, xmm4 */
/* 40b6f0: movlpd xmm4, qword ptr [0x446520] */
  guest_unsupported(0x40b6f0); /* movlpd xmm4, qword ptr [0x446520] */
/* 40b6f8: movd xmm1, edx */
  guest_unsupported(0x40b6f8); /* movd xmm1, edx */
/* 40b6fc: sub edx, 0x1ff80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1ff80u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b702: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40b704: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 40b707: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b70a: mov eax, edx */
  eax = edx;
/* 40b70c: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b70f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40b711: xorpd xmm7, xmm7 */
  guest_unsupported(0x40b711); /* xorpd xmm7, xmm7 */
/* 40b715: mov eax, 0x3f80 */
  eax = 0x3f80u;
/* 40b71a: pinsrw xmm7, eax, 3 */
  guest_unsupported(0x40b71a); /* pinsrw xmm7, eax, 3 */
/* 40b71f: mulsd xmm2, qword ptr [esp + 0x14] */
  guest_unsupported(0x40b71f); /* mulsd xmm2, qword ptr [esp + 0x14] */
/* 40b725: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b725); /* mulsd xmm0, xmm7 */
/* 40b729: psllq xmm1, 0x2d */
  guest_unsupported(0x40b729); /* psllq xmm1, 0x2d */
/* 40b72e: pshufd xmm1, xmm1, 0x44 */
  guest_unsupported(0x40b72e); /* pshufd xmm1, xmm1, 0x44 */
/* 40b733: movapd xmm7, xmmword ptr [0x446510] */
  guest_unsupported(0x40b733); /* movapd xmm7, xmmword ptr [0x446510] */
/* 40b73b: addsd xmm5, xmm2 */
  guest_unsupported(0x40b73b); /* addsd xmm5, xmm2 */
/* 40b73f: mulpd xmm3, xmm1 */
  guest_unsupported(0x40b73f); /* mulpd xmm3, xmm1 */
/* 40b743: addsd xmm0, xmm5 */
  guest_unsupported(0x40b743); /* addsd xmm0, xmm5 */
/* 40b747: unpcklpd xmm0, xmm0 */
  guest_unsupported(0x40b747); /* unpcklpd xmm0, xmm0 */
/* 40b74b: mulpd xmm6, xmm0 */
  guest_unsupported(0x40b74b); /* mulpd xmm6, xmm0 */
/* 40b74f: mulsd xmm4, xmm0 */
  guest_unsupported(0x40b74f); /* mulsd xmm4, xmm0 */
/* 40b753: mulpd xmm0, xmm0 */
  guest_unsupported(0x40b753); /* mulpd xmm0, xmm0 */
/* 40b757: addpd xmm7, xmm6 */
  guest_unsupported(0x40b757); /* addpd xmm7, xmm6 */
/* 40b75b: mulpd xmm7, xmm0 */
  guest_unsupported(0x40b75b); /* mulpd xmm7, xmm0 */
/* 40b75f: mulsd xmm0, xmm3 */
  guest_unsupported(0x40b75f); /* mulsd xmm0, xmm3 */
/* 40b763: pshufd xmm6, xmm7, 0xee */
  guest_unsupported(0x40b763); /* pshufd xmm6, xmm7, 0xee */
/* 40b768: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b768); /* mulsd xmm0, xmm7 */
/* 40b76c: pshufd xmm5, xmm3, 0xee */
  guest_unsupported(0x40b76c); /* pshufd xmm5, xmm3, 0xee */
/* 40b771: mulsd xmm6, xmm3 */
  guest_unsupported(0x40b771); /* mulsd xmm6, xmm3 */
/* 40b775: mulsd xmm4, xmm3 */
  guest_unsupported(0x40b775); /* mulsd xmm4, xmm3 */
/* 40b779: movd xmm7, ecx */
  guest_unsupported(0x40b779); /* movd xmm7, ecx */
/* 40b77d: psllq xmm7, 0x2d */
  guest_unsupported(0x40b77d); /* psllq xmm7, 0x2d */
/* 40b782: movd xmm2, edx */
  guest_unsupported(0x40b782); /* movd xmm2, edx */
/* 40b786: pcmpeqd xmm1, xmm1 */
  guest_unsupported(0x40b786); /* pcmpeqd xmm1, xmm1 */
/* 40b78a: psllq xmm1, xmm2 */
  guest_unsupported(0x40b78a); /* psllq xmm1, xmm2 */
/* 40b78e: addsd xmm0, xmm5 */
  guest_unsupported(0x40b78e); /* addsd xmm0, xmm5 */
/* 40b792: addsd xmm0, xmm6 */
  guest_unsupported(0x40b792); /* addsd xmm0, xmm6 */
/* 40b796: andpd xmm1, xmm3 */
  guest_unsupported(0x40b796); /* andpd xmm1, xmm3 */
/* 40b79a: addsd xmm0, xmm4 */
  guest_unsupported(0x40b79a); /* addsd xmm0, xmm4 */
/* 40b79e: xorpd xmm6, xmm6 */
  guest_unsupported(0x40b79e); /* xorpd xmm6, xmm6 */
/* 40b7a2: pcmpeqd xmm4, xmm4 */
  guest_unsupported(0x40b7a2); /* pcmpeqd xmm4, xmm4 */
/* 40b7a6: psllq xmm4, xmm2 */
  guest_unsupported(0x40b7a6); /* psllq xmm4, xmm2 */
/* 40b7aa: subsd xmm3, xmm1 */
  guest_unsupported(0x40b7aa); /* subsd xmm3, xmm1 */
/* 40b7ae: movsd xmm2, xmm1 */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40b7b2: addsd xmm1, xmm0 */
  guest_unsupported(0x40b7b2); /* addsd xmm1, xmm0 */
/* 40b7b6: andpd xmm1, xmm4 */
  guest_unsupported(0x40b7b6); /* andpd xmm1, xmm4 */
/* 40b7ba: pinsrw xmm6, edi, 3 */
  guest_unsupported(0x40b7ba); /* pinsrw xmm6, edi, 3 */
/* 40b7bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40b7c0: subsd xmm2, xmm1 */
  guest_unsupported(0x40b7c0); /* subsd xmm2, xmm1 */
/* 40b7c4: addsd xmm0, xmm2 */
  guest_unsupported(0x40b7c4); /* addsd xmm0, xmm2 */
/* 40b7c8: addsd xmm0, xmm3 */
  guest_unsupported(0x40b7c8); /* addsd xmm0, xmm3 */
/* 40b7cc: cmp esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40b7cf: jg 0x40b81f */
  if ((!zf && sf == of)) goto L_40b81f;
L_40b7d1: /* 40b7d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40b7d2: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b7d2); /* mulsd xmm0, xmm7 */
/* 40b7d6: mulsd xmm1, xmm7 */
  guest_unsupported(0x40b7d6); /* mulsd xmm1, xmm7 */
/* 40b7da: addsd xmm0, xmm1 */
  guest_unsupported(0x40b7da); /* addsd xmm0, xmm1 */
/* 40b7de: mulsd xmm6, xmm0 */
  guest_unsupported(0x40b7de); /* mulsd xmm6, xmm0 */
/* 40b7e2: addsd xmm0, xmm6 */
  guest_unsupported(0x40b7e2); /* addsd xmm0, xmm6 */
/* 40b7e6: pextrw eax, xmm0, 3 */
  guest_unsupported(0x40b7e6); /* pextrw eax, xmm0, 3 */
/* 40b7eb: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b7f0: mov edx, 0x18 */
  edx = 0x18u;
/* 40b7f5: cmp eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b7fa: je 0x40b610 */
  if (zf) goto L_40b610;
L_40b800: /* 40b800: mov edx, 0x19 */
  edx = 0x19u;
/* 40b805: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b808: je 0x40b610 */
  if (zf) goto L_40b610;
L_40b80e: /* 40b80e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b811: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40b811); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40b817: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40b81b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b81e: ret  */
  esp += 4; SPILL(); return;
L_40b81f: /* 40b81f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40b820: addsd xmm0, xmm1 */
  guest_unsupported(0x40b820); /* addsd xmm0, xmm1 */
/* 40b824: mulsd xmm0, xmm7 */
  guest_unsupported(0x40b824); /* mulsd xmm0, xmm7 */
/* 40b828: mulsd xmm6, xmm0 */
  guest_unsupported(0x40b828); /* mulsd xmm6, xmm0 */
/* 40b82c: addsd xmm0, xmm6 */
  guest_unsupported(0x40b82c); /* addsd xmm0, xmm6 */
/* 40b830: pextrw eax, xmm0, 3 */
  guest_unsupported(0x40b830); /* pextrw eax, xmm0, 3 */
/* 40b835: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b83a: mov edx, 0x18 */
  edx = 0x18u;
/* 40b83f: cmp eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b844: je 0x40b610 */
  if (zf) goto L_40b610;
L_40b84a: /* 40b84a: mov edx, 0x19 */
  edx = 0x19u;
/* 40b84f: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b852: je 0x40b610 */
  if (zf) goto L_40b610;
L_40b858: /* 40b858: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b85b: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40b85b); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40b861: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40b865: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b868: ret  */
  esp += 4; SPILL(); return;
L_40b869: /* 40b869: movlpd xmm0, qword ptr [0x446558] */
  guest_unsupported(0x40b869); /* movlpd xmm0, qword ptr [0x446558] */
/* 40b871: movd xmm1, ecx */
  guest_unsupported(0x40b871); /* movd xmm1, ecx */
/* 40b875: mulsd xmm0, xmm0 */
  guest_unsupported(0x40b875); /* mulsd xmm0, xmm0 */
/* 40b879: psllq xmm1, 0x2d */
  guest_unsupported(0x40b879); /* psllq xmm1, 0x2d */
/* 40b87e: orpd xmm0, xmm1 */
  guest_unsupported(0x40b87e); /* orpd xmm0, xmm1 */
/* 40b882: mov edx, 0x19 */
  edx = 0x19u;
/* 40b887: jmp 0x40b610 */
  goto L_40b610;
L_40b88c: /* 40b88c: mov edx, 0x18 */
  edx = 0x18u;
/* 40b891: cmp ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b894: je 0x40b8a3 */
  if (zf) goto L_40b8a3;
L_40b896: /* 40b896: movlpd xmm0, qword ptr [0x446548] */
  guest_unsupported(0x40b896); /* movlpd xmm0, qword ptr [0x446548] */
/* 40b89e: jmp 0x40b610 */
  goto L_40b610;
L_40b8a3: /* 40b8a3: movlpd xmm0, qword ptr [0x446540] */
  guest_unsupported(0x40b8a3); /* movlpd xmm0, qword ptr [0x446540] */
/* 40b8ab: jmp 0x40b610 */
  goto L_40b610;
L_40b8b0: /* 40b8b0: pshufd xmm4, xmm1, 0x44 */
  guest_unsupported(0x40b8b0); /* pshufd xmm4, xmm1, 0x44 */
/* 40b8b5: mulpd xmm4, xmm6 */
  guest_unsupported(0x40b8b5); /* mulpd xmm4, xmm6 */
/* 40b8b9: pextrw eax, xmm4, 3 */
  guest_unsupported(0x40b8b9); /* pextrw eax, xmm4, 3 */
/* 40b8be: and eax, 0x7ff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b8c3: mov edx, 0x40a0 */
  edx = 0x40a0u;
/* 40b8c8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b8ca: sub eax, 0x3c70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c70u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40b8cf: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 40b8d1: cmp edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b8d7: jb 0x40afd7 */
  if (cf) goto L_40afd7;
L_40b8dd: /* 40b8dd: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40b8e2: jb 0x40b904 */
  if (cf) goto L_40b904;
L_40b8e4: /* 40b8e4: or ecx, 0x1ff80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1ff80u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 40b8ea: movd xmm0, ecx */
  guest_unsupported(0x40b8ea); /* movd xmm0, ecx */
/* 40b8ee: psllq xmm0, 0x2d */
  guest_unsupported(0x40b8ee); /* psllq xmm0, 0x2d */
/* 40b8f3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40b8f6: movlpd qword ptr [esp + 4], xmm0 */
  guest_unsupported(0x40b8f6); /* movlpd qword ptr [esp + 4], xmm0 */
/* 40b8fc: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 40b900: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40b903: ret  */
  esp += 4; SPILL(); return;
L_40b904: /* 40b904: movlpd xmm4, qword ptr [esp + 4] */
  guest_unsupported(0x40b904); /* movlpd xmm4, qword ptr [esp + 4] */
/* 40b90a: pextrw edx, xmm4, 3 */
  guest_unsupported(0x40b90a); /* pextrw edx, xmm4, 3 */
/* 40b90f: and edx, 0x7ff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7ff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40b915: sub edx, 0x3ff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ff0u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 40b91b: pextrw eax, xmm1, 3 */
  guest_unsupported(0x40b91b); /* pextrw eax, xmm1, 3 */
/* 40b920: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 40b922: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40b927: cmp eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40b92a: jne 0x40b869 */
  if (!zf) goto L_40b869;
L_40b930: /* 40b930: jmp 0x40b88c */
  goto L_40b88c;
}

void f_40b935(void) {
  LOAD_REGS();
L_40b935: /* 40b935: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40b936: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40b93a: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40b93c: jne 0x40b956 */
  if (!zf) goto L_40b956;
L_40b93e: /* 40b93e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 40b942: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40b946: xor edx, edx */
  edx = 0;
/* 40b948: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40b948);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b94a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40b94e: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40b94e);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b950: mov eax, edx */
  eax = edx;
/* 40b952: xor edx, edx */
  edx = 0;
/* 40b954: jmp 0x40b9a6 */
  goto L_40b9a6;
L_40b956: /* 40b956: mov ecx, eax */
  ecx = eax;
/* 40b958: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 40b95c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 40b960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
L_40b964: /* 40b964: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 40b966: rcr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ebx = r;
  }
/* 40b968: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 40b96a: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 40b96c: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 40b96e: jne 0x40b964 */
  if (!zf) goto L_40b964;
L_40b970: /* 40b970: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x40b970);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b972: mov ecx, eax */
  ecx = eax;
/* 40b974: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40b978: xchg ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  ecx = b;
  eax = a;
  }
/* 40b979: mul dword ptr [esp + 0x10] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x10u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40b97d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 40b97f: jb 0x40b98f */
  if (cf) goto L_40b98f;
L_40b981: /* 40b981: cmp edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b985: ja 0x40b98f */
  if ((!cf && !zf)) goto L_40b98f;
L_40b987: /* 40b987: jb 0x40b997 */
  if (cf) goto L_40b997;
L_40b989: /* 40b989: cmp eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b98d: jbe 0x40b997 */
  if ((cf | zf)) goto L_40b997;
L_40b98f: /* 40b98f: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 40b993: sbb edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_40b997: /* 40b997: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 40b99b: sbb edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 40b99f: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40b9a1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40b9a3: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_40b9a6: /* 40b9a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40b9a7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_40b9aa(void) {
  LOAD_REGS();
L_40b9aa: /* 40b9aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40b9ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40b9ac: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 40b9b0: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40b9b2: jne 0x40b9cc */
  if (!zf) goto L_40b9cc;
L_40b9b4: /* 40b9b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 40b9b8: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40b9bc: xor edx, edx */
  edx = 0;
/* 40b9be: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40b9be);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b9c0: mov ebx, eax */
  ebx = eax;
/* 40b9c2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40b9c6: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40b9c6);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b9c8: mov edx, ebx */
  edx = ebx;
/* 40b9ca: jmp 0x40ba0d */
  goto L_40ba0d;
L_40b9cc: /* 40b9cc: mov ecx, eax */
  ecx = eax;
/* 40b9ce: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 40b9d2: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 40b9d6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_40b9da: /* 40b9da: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 40b9dc: rcr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ebx = r;
  }
/* 40b9de: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 40b9e0: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 40b9e2: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 40b9e4: jne 0x40b9da */
  if (!zf) goto L_40b9da;
L_40b9e6: /* 40b9e6: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x40b9e6);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40b9e8: mov esi, eax */
  esi = eax;
/* 40b9ea: mul dword ptr [esp + 0x18] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x18u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40b9ee: mov ecx, eax */
  ecx = eax;
/* 40b9f0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40b9f4: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40b9f6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 40b9f8: jb 0x40ba08 */
  if (cf) goto L_40ba08;
L_40b9fa: /* 40b9fa: cmp edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40b9fe: ja 0x40ba08 */
  if ((!cf && !zf)) goto L_40ba08;
L_40ba00: /* 40ba00: jb 0x40ba09 */
  if (cf) goto L_40ba09;
L_40ba02: /* 40ba02: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40ba06: jbe 0x40ba09 */
  if ((cf | zf)) goto L_40ba09;
L_40ba08: /* 40ba08: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_40ba09: /* 40ba09: xor edx, edx */
  edx = 0;
/* 40ba0b: mov eax, esi */
  eax = esi;
L_40ba0d: /* 40ba0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40ba0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40ba0f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_40ba12(void) {
  LOAD_REGS();
L_40ba12: /* 40ba12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ba13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ba14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40ba15: xor edi, edi */
  edi = 0;
/* 40ba17: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40ba1b: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 40ba1d: jge 0x40ba33 */
  if ((sf == of)) goto L_40ba33;
L_40ba1f: /* 40ba1f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40ba20: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 40ba24: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40ba26: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 40ba28: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40ba2b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 40ba2f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_40ba33: /* 40ba33: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 40ba37: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 40ba39: jge 0x40ba4f */
  if ((sf == of)) goto L_40ba4f;
L_40ba3b: /* 40ba3b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40ba3c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 40ba40: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40ba42: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 40ba44: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40ba47: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 40ba4b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_40ba4f: /* 40ba4f: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40ba51: jne 0x40ba6b */
  if (!zf) goto L_40ba6b;
L_40ba53: /* 40ba53: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 40ba57: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 40ba5b: xor edx, edx */
  edx = 0;
/* 40ba5d: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40ba5d);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40ba5f: mov ebx, eax */
  ebx = eax;
/* 40ba61: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40ba65: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40ba65);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40ba67: mov edx, ebx */
  edx = ebx;
/* 40ba69: jmp 0x40baac */
  goto L_40baac;
L_40ba6b: /* 40ba6b: mov ebx, eax */
  ebx = eax;
/* 40ba6d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 40ba71: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 40ba75: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_40ba79: /* 40ba79: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* 40ba7b: rcr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ecx = r;
  }
/* 40ba7d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 40ba7f: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 40ba81: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* 40ba83: jne 0x40ba79 */
  if (!zf) goto L_40ba79;
L_40ba85: /* 40ba85: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40ba85);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40ba87: mov esi, eax */
  esi = eax;
/* 40ba89: mul dword ptr [esp + 0x1c] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x1cu))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40ba8d: mov ecx, eax */
  ecx = eax;
/* 40ba8f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 40ba93: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40ba95: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 40ba97: jb 0x40baa7 */
  if (cf) goto L_40baa7;
L_40ba99: /* 40ba99: cmp edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40ba9d: ja 0x40baa7 */
  if ((!cf && !zf)) goto L_40baa7;
L_40ba9f: /* 40ba9f: jb 0x40baa8 */
  if (cf) goto L_40baa8;
L_40baa1: /* 40baa1: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40baa5: jbe 0x40baa8 */
  if ((cf | zf)) goto L_40baa8;
L_40baa7: /* 40baa7: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_40baa8: /* 40baa8: xor edx, edx */
  edx = 0;
/* 40baaa: mov eax, esi */
  eax = esi;
L_40baac: /* 40baac: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 40baad: jne 0x40bab6 */
  if (!zf) goto L_40bab6;
L_40baaf: /* 40baaf: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40bab1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40bab3: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_40bab6: /* 40bab6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40bab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40bab8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40bab9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_40babc(void) {
  LOAD_REGS();
L_40babc: /* 40babc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40babd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40babe: xor edi, edi */
  edi = 0;
/* 40bac0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40bac4: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 40bac6: jge 0x40badc */
  if ((sf == of)) goto L_40badc;
L_40bac8: /* 40bac8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40bac9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 40bacd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40bacf: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 40bad1: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40bad4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 40bad8: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
L_40badc: /* 40badc: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 40bae0: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  sf = ((r) >> 31) & 1;
  of = 0;
  eax = r;
  }
/* 40bae2: jge 0x40baf7 */
  if ((sf == of)) goto L_40baf7;
L_40bae4: /* 40bae4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 40bae8: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40baea: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 40baec: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 40baef: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 40baf3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_40baf7: /* 40baf7: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 40baf9: jne 0x40bb16 */
  if (!zf) goto L_40bb16;
L_40bafb: /* 40bafb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 40baff: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40bb03: xor edx, edx */
  edx = 0;
/* 40bb05: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40bb05);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40bb07: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40bb0b: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40bb0b);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40bb0d: mov eax, edx */
  eax = edx;
/* 40bb0f: xor edx, edx */
  edx = 0;
/* 40bb11: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 40bb12: jns 0x40bb62 */
  if (!sf) goto L_40bb62;
L_40bb14: /* 40bb14: jmp 0x40bb69 */
  goto L_40bb69;
L_40bb16: /* 40bb16: mov ebx, eax */
  ebx = eax;
/* 40bb18: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 40bb1c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 40bb20: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_40bb24: /* 40bb24: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ebx = r;
  }
/* 40bb26: rcr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ecx = r;
  }
/* 40bb28: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 40bb2a: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 40bb2c: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ebx = r;
  }
/* 40bb2e: jne 0x40bb24 */
  if (!zf) goto L_40bb24;
L_40bb30: /* 40bb30: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40bb30);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40bb32: mov ecx, eax */
  ecx = eax;
/* 40bb34: mul dword ptr [esp + 0x18] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x18u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40bb38: xchg ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  ecx = b;
  eax = a;
  }
/* 40bb39: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40bb3d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 40bb3f: jb 0x40bb4f */
  if (cf) goto L_40bb4f;
L_40bb41: /* 40bb41: cmp edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40bb45: ja 0x40bb4f */
  if ((!cf && !zf)) goto L_40bb4f;
L_40bb47: /* 40bb47: jb 0x40bb57 */
  if (cf) goto L_40bb57;
L_40bb49: /* 40bb49: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40bb4d: jbe 0x40bb57 */
  if ((cf | zf)) goto L_40bb57;
L_40bb4f: /* 40bb4f: sub eax, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 40bb53: sbb edx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_40bb57: /* 40bb57: sub eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 40bb5b: sbb edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 40bb5f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 40bb60: jns 0x40bb69 */
  if (!sf) goto L_40bb69;
L_40bb62: /* 40bb62: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40bb64: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40bb66: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_40bb69: /* 40bb69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40bb6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40bb6b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_40bd0e(void) {
  LOAD_REGS();
L_40bd0e: /* 40bd0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40bd11: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 40bd13: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 40bd15: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 40bd18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bd19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40bd1a: call 0x412551 */
  esp -= 4; W32(esp, 0x40bd1fu); SPILL(); f_412551(); if (g_unwind) return; RELOAD();
/* 40bd1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd21: ret  */
  esp += 4; SPILL(); return;
}

void f_40bd22(void) {
  LOAD_REGS();
  goto L_40bd22;
L_4040de: /* 4040de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4040df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4040e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4040e1: ret  */
  esp += 4; SPILL(); return;
L_40bd22: /* 40bd22: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40bd25: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40bd28: call 0x40f783 */
  esp -= 4; W32(esp, 0x40bd2du); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
/* 40bd2d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40bd32u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40bd32: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 40bd38: xor eax, eax */
  eax = 0;
/* 40bd3a: jmp 0x4040de */
  goto L_4040de;
}

void f_40be4d(void) {
  LOAD_REGS();
L_40be4d: /* 40be4d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40be50: jmp 0x40174f */
  SPILL(); f_40174f(); return;
}

void f_40be55(void) {
  LOAD_REGS();
L_40be55: /* 40be55: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40be58: jmp 0x401881 */
  SPILL(); f_401881(); return;
}

void f_40bf71(void) {
  LOAD_REGS();
L_40bf71: /* 40bf71: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_40bf74(); return;
}

void f_40bf74(void) {
  LOAD_REGS();
L_40bf74: /* 40bf74: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40bf76: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40bf7bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40bf7b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bf7c: ret  */
  esp += 4; SPILL(); return;
}

void f_40bfca(void) {
  LOAD_REGS();
L_40bfca: /* 40bfca: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_40bfcd(); return;
}

void f_40bfcd(void) {
  LOAD_REGS();
L_40bfcd: /* 40bfcd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40bfcf: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40bfd4u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40bfd4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bfd5: ret  */
  esp += 4; SPILL(); return;
}

void f_40c03a(void) {
  LOAD_REGS();
L_40c03a: /* 40c03a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c03c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40c041u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40c041: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c042: ret  */
  esp += 4; SPILL(); return;
}

void f_40c094(void) {
  LOAD_REGS();
L_40c094: /* 40c094: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c096: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40c09bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40c09b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c09c: ret  */
  esp += 4; SPILL(); return;
}

void f_40c0e9(void) {
  LOAD_REGS();
L_40c0e9: /* 40c0e9: xor ebx, ebx */
  ebx = 0;
/* 40c0eb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
  SPILL(); f_40c0ee(); return;
}

void f_40c0ee(void) {
  LOAD_REGS();
L_40c0ee: /* 40c0ee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c0f0: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40c0f5u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40c0f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c0f6: ret  */
  esp += 4; SPILL(); return;
}

void f_40c165(void) {
  LOAD_REGS();
L_40c165: /* 40c165: xor ebx, ebx */
  ebx = 0;
/* 40c167: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
  SPILL(); f_40c16a(); return;
}

void f_40c16a(void) {
  LOAD_REGS();
L_40c16a: /* 40c16a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c16c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40c171u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40c171: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c172: ret  */
  esp += 4; SPILL(); return;
}

void f_40c43b(void) {
  LOAD_REGS();
L_40c43b: /* 40c43b: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 40c43e: jmp 0x403ce4 */
  SPILL(); f_403ce4(); return;
}

void f_40c721(void) {
  LOAD_REGS();
L_40c721: /* 40c721: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40c724: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40c726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40c728: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40c72b: xor eax, eax */
  eax = 0;
/* 40c72d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40c72e: ret  */
  esp += 4; SPILL(); return;
}

void f_40c72f(void) {
  LOAD_REGS();
  goto L_40c72f;
L_404c1b: /* 404c1b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404c1f: call 0x40105a */
  esp -= 4; W32(esp, 0x404c24u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404c24: ret  */
  esp += 4; SPILL(); return;
L_40c72f: /* 40c72f: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40c732: cmp dword ptr [ebp - 0x20], 0xc0000017 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0xc0000017u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c739: jne 0x40c743 */
  if (!zf) goto L_40c743;
L_40c73b: /* 40c73b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40c73d: call dword ptr [0x43905c] */
  esp -= 4; W32(esp, 0x40c743u); SPILL(); call_ind(R32(0x43905cu)); if (g_unwind) return; /* KERNEL32!SetLastError */ RELOAD();
L_40c743: /* 40c743: xor eax, eax */
  eax = 0;
/* 40c745: jmp 0x404c1b */
  goto L_404c1b;
}

void f_40ca7e(void) {
  LOAD_REGS();
L_40ca7e: /* 40ca7e: xor eax, eax */
  eax = 0;
/* 40ca80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40ca81: ret  */
  esp += 4; SPILL(); return;
}

void f_40ca82(void) {
  LOAD_REGS();
  goto L_40ca82;
L_404708: /* 404708: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40470b: je 0x40ca9e */
  if (zf) goto L_40ca9e;
L_404711: /* 404711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404712: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404715: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 404718: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40471b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40471d: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 404720: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x404726u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 404726: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404728: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40472e: /* 40472e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40472f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404731: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404734: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404737: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40473a: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404740u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404740: mov edi, eax */
  edi = eax;
/* 404742: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 404745: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404747: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_404749: /* 404749: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40474d: jne 0x40cabf */
  if (!zf) goto L_40cabf;
L_404753: /* 404753: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 40475a: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 40475d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 404760: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 404763: call 0x4014ee */
  esp -= 4; W32(esp, 0x404768u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 404768: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40476b: mov eax, esp */
  eax = esp;
/* 40476d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 404770: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 404774: cmp dword ptr [ebp - 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404777: je 0x40cb0c */
  if (zf) goto L_40cb0c;
L_40477d: /* 40477d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40477e: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 404781: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404782: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404785: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404788: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40478b: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404791u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404793: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_404795: /* 404795: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404797: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40479a: je 0x40cb2d */
  if (zf) goto L_40cb2d;
L_4047a0: /* 4047a0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4047a3: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_4047a6: /* 4047a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4047a7: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4047aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4047ab: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4047ae: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4047b4u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4047b4: mov edi, eax */
  edi = eax;
L_4047b6: /* 4047b6: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047b9: jne 0x40cb34 */
  if (!zf) goto L_40cb34;
L_4047bf: /* 4047bf: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047c2: jne 0x40cb42 */
  if (!zf) goto L_40cb42;
L_4047c8: /* 4047c8: mov eax, edi */
  eax = edi;
L_4047ca: /* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_4047d3: /* 4047d3: xor eax, eax */
  eax = 0;
/* 4047d5: jmp 0x4047ca */
  goto L_4047ca;
L_40ca82: /* 40ca82: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40ca85: call 0x415709 */
  esp -= 4; W32(esp, 0x40ca8au); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40ca8a: xor ebx, ebx */
  ebx = 0;
/* 40ca8c: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 40ca8f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40ca93: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40ca96: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 40ca99: jmp 0x404708 */
  goto L_404708;
L_40ca9e: /* 40ca9e: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40caa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40caa2: call 0x4010eb */
  esp -= 4; W32(esp, 0x40caa7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40caa7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40caa8: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40caab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40caad: je 0x4047d3 */
  if (zf) goto L_4047d3;
L_40cab3: /* 40cab3: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40caba: jmp 0x404711 */
  goto L_404711;
L_40cabf: /* 40cabf: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cac2: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40cac8: /* 40cac8: cmp edi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40cacb: jg 0x4047b6 */
  if ((!zf && sf == of)) goto L_4047b6;
L_40cad1: /* 40cad1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cad4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cad7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cad8: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40cadb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cade: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cae1: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x40cae7u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 40cae7: jmp 0x4047b6 */
  goto L_4047b6;
L_40cb0c: /* 40cb0c: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 40cb0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cb10: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cb15u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cb15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb16: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 40cb19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb1b: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40cb21: /* 40cb21: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cb28: jmp 0x40477d */
  goto L_40477d;
L_40cb2d: /* 40cb2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2f: jmp 0x4047a6 */
  goto L_4047a6;
L_40cb34: /* 40cb34: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 40cb37: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb3cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb3d: jmp 0x4047bf */
  goto L_4047bf;
L_40cb42: /* 40cb42: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40cb45: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb4au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb4b: jmp 0x4047c8 */
  goto L_4047c8;
}

void f_40caec(void) {
  LOAD_REGS();
L_40caec: /* 40caec: xor eax, eax */
  eax = 0;
/* 40caee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40caef: ret  */
  esp += 4; SPILL(); return;
}

void f_40caf0(void) {
  LOAD_REGS();
  goto L_40caf0;
L_404774: /* 404774: cmp dword ptr [ebp - 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 404777: je 0x40cb0c */
  if (zf) goto L_40cb0c;
L_40477d: /* 40477d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40477e: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 404781: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 404782: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 404785: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 404788: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40478b: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x404791u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 404791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 404793: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_404795: /* 404795: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404796: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 404797: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40479a: je 0x40cb2d */
  if (zf) goto L_40cb2d;
L_4047a0: /* 4047a0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4047a3: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_4047a6: /* 4047a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4047a7: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4047aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4047ab: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4047ae: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x4047b4u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 4047b4: mov edi, eax */
  edi = eax;
L_4047b6: /* 4047b6: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047b9: jne 0x40cb34 */
  if (!zf) goto L_40cb34;
L_4047bf: /* 4047bf: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4047c2: jne 0x40cb42 */
  if (!zf) goto L_40cb42;
L_4047c8: /* 4047c8: mov eax, edi */
  eax = edi;
/* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_40caf0: /* 40caf0: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40caf3: call 0x415709 */
  esp -= 4; W32(esp, 0x40caf8u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40caf8: xor ebx, ebx */
  ebx = 0;
/* 40cafa: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 40cafd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40cb01: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40cb04: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 40cb07: jmp 0x404774 */
  goto L_404774;
L_40cb0c: /* 40cb0c: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 40cb0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cb10: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cb15u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cb15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb16: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 40cb19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cb1b: je 0x4047b6 */
  if (zf) goto L_4047b6;
L_40cb21: /* 40cb21: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cb28: jmp 0x40477d */
  goto L_40477d;
L_40cb2d: /* 40cb2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cb2f: jmp 0x4047a6 */
  goto L_4047a6;
L_40cb34: /* 40cb34: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 40cb37: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb3cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb3d: jmp 0x4047bf */
  goto L_4047bf;
L_40cb42: /* 40cb42: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40cb45: call 0x401156 */
  esp -= 4; W32(esp, 0x40cb4au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cb4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cb4b: jmp 0x4047c8 */
  goto L_4047c8;
}

void f_40cbf2(void) {
  LOAD_REGS();
L_40cbf2: /* 40cbf2: xor eax, eax */
  eax = 0;
/* 40cbf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40cbf5: ret  */
  esp += 4; SPILL(); return;
}

void f_40cbf6(void) {
  LOAD_REGS();
  goto L_40cbf6;
L_4047ca: /* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_40cbf6: /* 40cbf6: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40cbf9: call 0x415709 */
  esp -= 4; W32(esp, 0x40cbfeu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40cbfe: xor ebx, ebx */
  ebx = 0;
/* 40cc00: xor edi, edi */
  edi = 0;
/* 40cc02: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40cc06: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc08: jne 0x40cc2d */
  if (!zf) goto L_40cc2d;
L_40cc0a: /* 40cc0a: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc0d: call 0x4010eb */
  esp -= 4; W32(esp, 0x40cc12u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40cc12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cc13: mov edi, eax */
  edi = eax;
/* 40cc15: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc17: je 0x40cc4a */
  if (zf) goto L_40cc4a;
L_40cc19: /* 40cc19: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40cc1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc1e: call 0x4010fd */
  esp -= 4; W32(esp, 0x40cc23u); SPILL(); hle_memset(); RELOAD();
/* 40cc23: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cc26: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
L_40cc2d: /* 40cc2d: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 40cc30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc31: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cc34: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 40cc37: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cc3a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cc3d: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40cc43u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40cc43: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 40cc46: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc48: jne 0x40cc4e */
  if (!zf) goto L_40cc4e;
L_40cc4a: /* 40cc4a: xor esi, esi */
  esi = 0;
/* 40cc4c: jmp 0x40cc74 */
  goto L_40cc74;
L_40cc4e: /* 40cc4e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cc51: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cc54: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 40cc57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40cc58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc59: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40cc5c: push dword ptr [ebp - 0x3c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc4u)); esp -= 4; W32(esp, v); }
/* 40cc5f: call 0x413727 */
  esp -= 4; W32(esp, 0x40cc64u); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40cc64: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40cc67: mov esi, eax */
  esi = eax;
/* 40cc69: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 40cc6b: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 40cc6d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 40cc6f: jmp 0x40cc74 */
  goto L_40cc74;
L_40cc74: /* 40cc74: cmp dword ptr [ebp - 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc77: je 0x40cc9c */
  if (zf) goto L_40cc9c;
L_40cc79: /* 40cc79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40cc7a: call 0x401156 */
  esp -= 4; W32(esp, 0x40cc7fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cc7f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cc80: jmp 0x40cc9c */
  goto L_40cc9c;
L_40cc9c: /* 40cc9c: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc9f: je 0x40ccaa */
  if (zf) goto L_40ccaa;
L_40cca1: /* 40cca1: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 40cca4: call 0x401156 */
  esp -= 4; W32(esp, 0x40cca9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cca9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40ccaa: /* 40ccaa: mov eax, esi */
  eax = esi;
/* 40ccac: jmp 0x4047ca */
  goto L_4047ca;
}

void f_40cc82(void) {
  LOAD_REGS();
  goto L_40cc82;
L_4047ca: /* 4047ca: lea esp, [ebp - 0x54] */
  esp = (uint32_t)(ebp + 0xffffffacu);
/* 4047cd: call 0x40105a */
  esp -= 4; W32(esp, 0x4047d2u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4047d2: ret  */
  esp += 4; SPILL(); return;
L_40cc82: /* 40cc82: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40cc85: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40cc88: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40cc8b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40cc8e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40cc91: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40cc94: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40cc9au); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40cc9a: mov esi, eax */
  esi = eax;
/* 40cc9c: cmp dword ptr [ebp - 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40cc9f: je 0x40ccaa */
  if (zf) goto L_40ccaa;
L_40cca1: /* 40cca1: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 40cca4: call 0x401156 */
  esp -= 4; W32(esp, 0x40cca9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cca9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40ccaa: /* 40ccaa: mov eax, esi */
  eax = esi;
/* 40ccac: jmp 0x4047ca */
  goto L_4047ca;
}

void f_40cccf(void) {
  LOAD_REGS();
L_40cccf: /* 40cccf: xor eax, eax */
  eax = 0;
/* 40ccd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40ccd2: ret  */
  esp += 4; SPILL(); return;
}

void f_40ccd3(void) {
  LOAD_REGS();
  goto L_40ccd3;
L_40534d: /* 40534d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40534f: je 0x40cce9 */
  if (zf) goto L_40cce9;
L_405355: /* 405355: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405357: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40535a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40535d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40535f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405362: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x405368u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 405368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40536a: je 0x40537d */
  if (zf) goto L_40537d;
L_40536c: /* 40536c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40536f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 405370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405371: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405374: call dword ptr [0x4390ec] */
  esp -= 4; W32(esp, 0x40537au); SPILL(); call_ind(R32(0x4390ecu)); if (g_unwind) return; /* KERNEL32!GetStringTypeW */ RELOAD();
/* 40537a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_40537d: /* 40537d: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405381: jne 0x40cd09 */
  if (!zf) goto L_40cd09;
L_405387: /* 405387: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_40538a: /* 40538a: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 40538d: call 0x40105a */
  esp -= 4; W32(esp, 0x405392u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405392: ret  */
  esp += 4; SPILL(); return;
L_4053b0: /* 4053b0: xor eax, eax */
  eax = 0;
/* 4053b2: jmp 0x40538a */
  goto L_40538a;
L_40ccd3: /* 40ccd3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40ccd6: call 0x415709 */
  esp -= 4; W32(esp, 0x40ccdbu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40ccdb: xor esi, esi */
  esi = 0;
/* 40ccdd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40cce1: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 40cce4: jmp 0x40534d */
  goto L_40534d;
L_40cce9: /* 40cce9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40ccea: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40ccec: call 0x4016cb */
  esp -= 4; W32(esp, 0x40ccf1u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40ccf1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ccf3: mov esi, eax */
  esi = eax;
/* 40ccf5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ccf7: je 0x4053b0 */
  if (zf) goto L_4053b0;
L_40ccfd: /* 40ccfd: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40cd04: jmp 0x405355 */
  goto L_405355;
L_40cd09: /* 40cd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40cd0a: call 0x401156 */
  esp -= 4; W32(esp, 0x40cd0fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40cd0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40cd10: jmp 0x405387 */
  goto L_405387;
}

void f_40d3c4(void) {
  LOAD_REGS();
  goto L_40d3c4;
L_406247: /* 406247: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 40624a: call 0x40105a */
  esp -= 4; W32(esp, 0x40624fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40624f: ret  */
  esp += 4; SPILL(); return;
L_40d3bd: /* 40d3bd: xor eax, eax */
  eax = 0;
/* 40d3bf: jmp 0x406247 */
  goto L_406247;
L_40d3c4: /* 40d3c4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40d3c7: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d3ca: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40d3cd: call 0x4014ee */
  esp -= 4; W32(esp, 0x40d3d2u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40d3d2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40d3d5: mov esi, esp */
  esi = esp;
/* 40d3d7: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 40d3da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d3de: jmp 0x40d3f7 */
  goto L_40d3f7;
L_40d3f7: /* 40d3f7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3f9: jne 0x40d40d */
  if (!zf) goto L_40d40d;
L_40d3fb: /* 40d3fb: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d3fe: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d403u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d403: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d404: mov esi, eax */
  esi = eax;
/* 40d406: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d408: je 0x40d3bd */
  if (zf) goto L_40d3bd;
L_40d40a: /* 40d40a: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_40d40d: /* 40d40d: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d411: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d414: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d417: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d41du); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d41f: je 0x40d440 */
  if (zf) goto L_40d440;
L_40d421: /* 40d421: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d424: jne 0x40d42a */
  if (!zf) goto L_40d42a;
L_40d426: /* 40d426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d428: jmp 0x40d430 */
  goto L_40d430;
L_40d42a: /* 40d42a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d42d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_40d430: /* 40d430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40d432: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d434: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40d437: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40d43du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40d43d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40d440: /* 40d440: cmp dword ptr [ebp - 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d443: je 0x40d44c */
  if (zf) goto L_40d44c;
L_40d445: /* 40d445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d446: call 0x401156 */
  esp -= 4; W32(esp, 0x40d44bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d44c: /* 40d44c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d44f: jmp 0x406247 */
  goto L_406247;
}

void f_40d3e0(void) {
  LOAD_REGS();
L_40d3e0: /* 40d3e0: xor eax, eax */
  eax = 0;
/* 40d3e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d3e3: ret  */
  esp += 4; SPILL(); return;
}

void f_40d3e4(void) {
  LOAD_REGS();
  goto L_40d3e4;
L_406247: /* 406247: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 40624a: call 0x40105a */
  esp -= 4; W32(esp, 0x40624fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40624f: ret  */
  esp += 4; SPILL(); return;
L_40d3bd: /* 40d3bd: xor eax, eax */
  eax = 0;
/* 40d3bf: jmp 0x406247 */
  goto L_406247;
L_40d3e4: /* 40d3e4: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40d3e7: call 0x415709 */
  esp -= 4; W32(esp, 0x40d3ecu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40d3ec: xor edi, edi */
  edi = 0;
/* 40d3ee: xor esi, esi */
  esi = 0;
/* 40d3f0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d3f4: xor ebx, ebx */
  ebx = 0;
/* 40d3f6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40d3f7: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d3f9: jne 0x40d40d */
  if (!zf) goto L_40d40d;
L_40d3fb: /* 40d3fb: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d3fe: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d403u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d403: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d404: mov esi, eax */
  esi = eax;
/* 40d406: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d408: je 0x40d3bd */
  if (zf) goto L_40d3bd;
L_40d40a: /* 40d40a: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_40d40d: /* 40d40d: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40d410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d411: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d414: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d417: call dword ptr [0x439110] */
  esp -= 4; W32(esp, 0x40d41du); SPILL(); call_ind(R32(0x439110u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoA */ RELOAD();
/* 40d41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d41f: je 0x40d440 */
  if (zf) goto L_40d440;
L_40d421: /* 40d421: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d424: jne 0x40d42a */
  if (!zf) goto L_40d42a;
L_40d426: /* 40d426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d428: jmp 0x40d430 */
  goto L_40d430;
L_40d42a: /* 40d42a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d42d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_40d430: /* 40d430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 40d432: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d434: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40d437: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40d43du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40d43d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40d440: /* 40d440: cmp dword ptr [ebp - 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d443: je 0x40d44c */
  if (zf) goto L_40d44c;
L_40d445: /* 40d445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d446: call 0x401156 */
  esp -= 4; W32(esp, 0x40d44bu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d44b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d44c: /* 40d44c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d44f: jmp 0x406247 */
  goto L_406247;
}

void f_40d472(void) {
  LOAD_REGS();
L_40d472: /* 40d472: xor eax, eax */
  eax = 0;
/* 40d474: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d475: ret  */
  esp += 4; SPILL(); return;
}

void f_40d476(void) {
  LOAD_REGS();
  goto L_40d476;
L_405e18: /* 405e18: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e1a: je 0x40d48e */
  if (zf) goto L_40d48e;
L_405e20: /* 405e20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 405e21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e22: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 405e25: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 405e28: call dword ptr [0x439124] */
  esp -= 4; W32(esp, 0x405e2eu); SPILL(); call_ind(R32(0x439124u)); if (g_unwind) return; /* KERNEL32!GetLocaleInfoW */ RELOAD();
/* 405e2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 405e30: je 0x405e53 */
  if (zf) goto L_405e53;
L_405e32: /* 405e32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e34: cmp dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e37: je 0x40d4ae */
  if (zf) goto L_40d4ae;
L_405e3d: /* 405e3d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 405e40: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
L_405e43: /* 405e43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 405e45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 405e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 405e47: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 405e4a: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x405e50u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 405e50: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_405e53: /* 405e53: cmp dword ptr [ebp - 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 405e56: jne 0x40d4b5 */
  if (!zf) goto L_40d4b5;
L_405e5c: /* 405e5c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_405e5f: /* 405e5f: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 405e62: call 0x40105a */
  esp -= 4; W32(esp, 0x405e67u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 405e67: ret  */
  esp += 4; SPILL(); return;
L_405e88: /* 405e88: xor eax, eax */
  eax = 0;
/* 405e8a: jmp 0x405e5f */
  goto L_405e5f;
L_40d476: /* 40d476: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40d479: call 0x415709 */
  esp -= 4; W32(esp, 0x40d47eu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40d47e: xor esi, esi */
  esi = 0;
/* 40d480: xor edi, edi */
  edi = 0;
/* 40d482: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d486: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 40d489: jmp 0x405e18 */
  goto L_405e18;
L_40d48e: /* 40d48e: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 40d491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d492: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d497u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d497: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d498: mov edi, eax */
  edi = eax;
/* 40d49a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d49c: je 0x405e88 */
  if (zf) goto L_405e88;
L_40d4a2: /* 40d4a2: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40d4a9: jmp 0x405e20 */
  goto L_405e20;
L_40d4ae: /* 40d4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d4b0: jmp 0x405e43 */
  goto L_405e43;
L_40d4b5: /* 40d4b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d4b6: call 0x401156 */
  esp -= 4; W32(esp, 0x40d4bbu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d4bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d4bc: jmp 0x405e5c */
  goto L_405e5c;
}

void f_40d4e9(void) {
  LOAD_REGS();
L_40d4e9: /* 40d4e9: xor eax, eax */
  eax = 0;
/* 40d4eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d4ec: ret  */
  esp += 4; SPILL(); return;
}

void f_40d4ed(void) {
  LOAD_REGS();
  goto L_40d4ed;
L_404153: /* 404153: cmp dword ptr [ebp - 0x1c], 0x43e28c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x43e28cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40415a: jb 0x40d4d8 */
  if (cf) goto L_40d4d8;
L_404160: /* 404160: call 0x40105a */
  esp -= 4; W32(esp, 0x404165u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 404165: ret  */
  esp += 4; SPILL(); return;
L_40d4d8: /* 40d4d8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d4dc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40d4df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40d4e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d4e3: je 0x40d4f0 */
  if (zf) goto L_40d4f0;
L_40d4e5: /* 40d4e5: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40d4e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40d4e7: jmp 0x40d4f0 */
  goto L_40d4f0;
L_40d4ed: /* 40d4ed: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_40d4f0: /* 40d4f0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40d4f4: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40d4f8: jmp 0x404153 */
  goto L_404153;
}

void f_40d5ac(void) {
  LOAD_REGS();
L_40d5ac: /* 40d5ac: xor edi, edi */
  edi = 0;
/* 40d5ae: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 40d5b1: jmp 0x404264 */
  SPILL(); f_404264(); return;
}

void f_40dc96(void) {
  LOAD_REGS();
L_40dc96: /* 40dc96: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 40dc99: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 40dc9c: xor edi, edi */
  edi = 0;
  SPILL(); f_40dc9e(); return;
}

void f_40dc9e(void) {
  LOAD_REGS();
L_40dc9e: /* 40dc9e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40dca0: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40dca5u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40dca5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dca6: ret  */
  esp += 4; SPILL(); return;
}

void f_40dde5(void) {
  LOAD_REGS();
L_40dde5: /* 40dde5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 40dde8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_40ddeb(); return;
}

void f_40ddeb(void) {
  LOAD_REGS();
L_40ddeb: /* 40ddeb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40dded: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40ddf2u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40ddf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ddf3: xor edi, edi */
  edi = 0;
/* 40ddf5: ret  */
  esp += 4; SPILL(); return;
}

void f_40de5d(void) {
  LOAD_REGS();
L_40de5d: /* 40de5d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
  SPILL(); f_40de60(); return;
}

void f_40de60(void) {
  LOAD_REGS();
L_40de60: /* 40de60: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40de62: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40de67u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40de67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40de68: ret  */
  esp += 4; SPILL(); return;
}

void f_40deb2(void) {
  LOAD_REGS();
L_40deb2: /* 40deb2: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
  SPILL(); f_40deb5(); return;
}

void f_40deb5(void) {
  LOAD_REGS();
L_40deb5: /* 40deb5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40deb7: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40debcu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40debc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40debd: ret  */
  esp += 4; SPILL(); return;
}

void f_40df6c(void) {
  LOAD_REGS();
  goto L_40df6c;
L_4019a4: /* 4019a4: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4019a7: call 0x40105a */
  esp -= 4; W32(esp, 0x4019acu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4019ac: ret  */
  esp += 4; SPILL(); return;
L_40df65: /* 40df65: xor eax, eax */
  eax = 0;
/* 40df67: jmp 0x4019a4 */
  goto L_4019a4;
L_40df6c: /* 40df6c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 40df6f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40df72: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40df75: call 0x4014ee */
  esp -= 4; W32(esp, 0x40df7au); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40df7a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40df7d: mov eax, esp */
  eax = esp;
/* 40df7f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40df82: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40df86: jmp 0x40dfa0 */
  goto L_40dfa0;
L_40dfa0: /* 40dfa0: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfa3: jne 0x40dfb8 */
  if (!zf) goto L_40dfb8;
L_40dfa5: /* 40dfa5: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfa8: call 0x4010eb */
  esp -= 4; W32(esp, 0x40dfadu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40dfad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dfae: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40dfb1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfb3: je 0x40df65 */
  if (zf) goto L_40df65;
L_40dfb5: /* 40dfb5: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_40dfb8: /* 40dfb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfba: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfbd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfc0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40dfc3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40dfc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfc7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40dfca: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x40dfd0u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 40dfd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dfd2: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dfd8: /* 40dfd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfda: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfdd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfe0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40dfe3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40dfe6: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40dfecu); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40dfec: mov esi, eax */
  esi = eax;
/* 40dfee: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 40dff1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dff3: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dff9: /* 40dff9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40dffc: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40dfff: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40e002: call 0x4014ee */
  esp -= 4; W32(esp, 0x40e007u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40e007: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40e00a: mov edi, esp */
  edi = esp;
/* 40e00c: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 40e00f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e013: jmp 0x40e02c */
  goto L_40e02c;
L_40e02c: /* 40e02c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e02e: jne 0x40e044 */
  if (!zf) goto L_40e044;
L_40e030: /* 40e030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e031: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e036u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e036: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e037: mov edi, eax */
  edi = eax;
/* 40e039: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e03b: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e03d: /* 40e03d: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_40e044: /* 40e044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e046: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e049: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e04c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e04f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e052: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40e058u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40e058: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e05a: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e05c: /* 40e05c: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e060: je 0x40e081 */
  if (zf) goto L_40e081;
L_40e062: /* 40e062: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 40e065: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e068: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e06a: /* 40e06a: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e06d: jge 0x40e072 */
  if ((sf == of)) goto L_40e072;
L_40e06f: /* 40e06f: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
L_40e072: /* 40e072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e074: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e077: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40e07cu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40e07c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e07f: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e081: /* 40e081: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e084: jne 0x40e08a */
  if (!zf) goto L_40e08a;
L_40e086: /* 40e086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e087: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e088: jmp 0x40e090 */
  goto L_40e090;
L_40e08a: /* 40e08a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e08d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_40e090: /* 40e090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e092: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40e094: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40e097: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40e09du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40e09d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40e0a0: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e0a2: /* 40e0a2: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
L_40e0a5: /* 40e0a5: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0a8: je 0x40e0b1 */
  if (zf) goto L_40e0b1;
L_40e0aa: /* 40e0aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e0ab: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0b0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0b1: /* 40e0b1: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0b4: je 0x40e0bf */
  if (zf) goto L_40e0bf;
L_40e0b6: /* 40e0b6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e0b9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0beu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0bf: /* 40e0bf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40e0c2: jmp 0x4019a4 */
  goto L_4019a4;
}

void f_40df88(void) {
  LOAD_REGS();
L_40df88: /* 40df88: xor eax, eax */
  eax = 0;
/* 40df8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40df8b: ret  */
  esp += 4; SPILL(); return;
}

void f_40df8c(void) {
  LOAD_REGS();
  goto L_40df8c;
L_4019a4: /* 4019a4: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4019a7: call 0x40105a */
  esp -= 4; W32(esp, 0x4019acu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4019ac: ret  */
  esp += 4; SPILL(); return;
L_40df65: /* 40df65: xor eax, eax */
  eax = 0;
/* 40df67: jmp 0x4019a4 */
  goto L_4019a4;
L_40df8c: /* 40df8c: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40df8f: call 0x415709 */
  esp -= 4; W32(esp, 0x40df94u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40df94: xor ebx, ebx */
  ebx = 0;
/* 40df96: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 40df99: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40df9d: xor edi, edi */
  edi = 0;
/* 40df9f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40dfa0: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfa3: jne 0x40dfb8 */
  if (!zf) goto L_40dfb8;
L_40dfa5: /* 40dfa5: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfa8: call 0x4010eb */
  esp -= 4; W32(esp, 0x40dfadu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40dfad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dfae: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40dfb1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfb3: je 0x40df65 */
  if (zf) goto L_40df65;
L_40dfb5: /* 40dfb5: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_40dfb8: /* 40dfb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfba: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfbd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfc0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40dfc3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40dfc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfc7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40dfca: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x40dfd0u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 40dfd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dfd2: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dfd8: /* 40dfd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfda: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfdd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfe0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40dfe3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40dfe6: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40dfecu); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40dfec: mov esi, eax */
  esi = eax;
/* 40dfee: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 40dff1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dff3: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dff9: /* 40dff9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40dffc: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40dfff: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40e002: call 0x4014ee */
  esp -= 4; W32(esp, 0x40e007u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40e007: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40e00a: mov edi, esp */
  edi = esp;
/* 40e00c: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 40e00f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e013: jmp 0x40e02c */
  goto L_40e02c;
L_40e02c: /* 40e02c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e02e: jne 0x40e044 */
  if (!zf) goto L_40e044;
L_40e030: /* 40e030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e031: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e036u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e036: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e037: mov edi, eax */
  edi = eax;
/* 40e039: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e03b: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e03d: /* 40e03d: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_40e044: /* 40e044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e046: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e049: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e04c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e04f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e052: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40e058u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40e058: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e05a: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e05c: /* 40e05c: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e060: je 0x40e081 */
  if (zf) goto L_40e081;
L_40e062: /* 40e062: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 40e065: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e068: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e06a: /* 40e06a: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e06d: jge 0x40e072 */
  if ((sf == of)) goto L_40e072;
L_40e06f: /* 40e06f: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
L_40e072: /* 40e072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e074: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e077: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40e07cu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40e07c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e07f: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e081: /* 40e081: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e084: jne 0x40e08a */
  if (!zf) goto L_40e08a;
L_40e086: /* 40e086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e087: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e088: jmp 0x40e090 */
  goto L_40e090;
L_40e08a: /* 40e08a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e08d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_40e090: /* 40e090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e092: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40e094: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40e097: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40e09du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40e09d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40e0a0: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e0a2: /* 40e0a2: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
L_40e0a5: /* 40e0a5: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0a8: je 0x40e0b1 */
  if (zf) goto L_40e0b1;
L_40e0aa: /* 40e0aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e0ab: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0b0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0b1: /* 40e0b1: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0b4: je 0x40e0bf */
  if (zf) goto L_40e0bf;
L_40e0b6: /* 40e0b6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e0b9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0beu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0bf: /* 40e0bf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40e0c2: jmp 0x4019a4 */
  goto L_4019a4;
}

void f_40e015(void) {
  LOAD_REGS();
L_40e015: /* 40e015: xor eax, eax */
  eax = 0;
/* 40e017: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40e018: ret  */
  esp += 4; SPILL(); return;
}

void f_40e019(void) {
  LOAD_REGS();
  goto L_40e019;
L_4019a4: /* 4019a4: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4019a7: call 0x40105a */
  esp -= 4; W32(esp, 0x4019acu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4019ac: ret  */
  esp += 4; SPILL(); return;
L_40e019: /* 40e019: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40e01c: call 0x415709 */
  esp -= 4; W32(esp, 0x40e021u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40e021: xor ebx, ebx */
  ebx = 0;
/* 40e023: xor edi, edi */
  edi = 0;
/* 40e025: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e029: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 40e02c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e02e: jne 0x40e044 */
  if (!zf) goto L_40e044;
L_40e030: /* 40e030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e031: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e036u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e036: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e037: mov edi, eax */
  edi = eax;
/* 40e039: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e03b: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e03d: /* 40e03d: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_40e044: /* 40e044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e046: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e049: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e04c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e04f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e052: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40e058u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40e058: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e05a: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e05c: /* 40e05c: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e060: je 0x40e081 */
  if (zf) goto L_40e081;
L_40e062: /* 40e062: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 40e065: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e068: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e06a: /* 40e06a: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e06d: jge 0x40e072 */
  if ((sf == of)) goto L_40e072;
L_40e06f: /* 40e06f: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
L_40e072: /* 40e072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e074: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e077: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40e07cu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40e07c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e07f: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e081: /* 40e081: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e084: jne 0x40e08a */
  if (!zf) goto L_40e08a;
L_40e086: /* 40e086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e087: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e088: jmp 0x40e090 */
  goto L_40e090;
L_40e08a: /* 40e08a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e08d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_40e090: /* 40e090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e092: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40e094: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40e097: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40e09du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40e09d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40e0a0: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e0a5: /* 40e0a5: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0a8: je 0x40e0b1 */
  if (zf) goto L_40e0b1;
L_40e0aa: /* 40e0aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e0ab: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0b0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0b1: /* 40e0b1: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0b4: je 0x40e0bf */
  if (zf) goto L_40e0bf;
L_40e0b6: /* 40e0b6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e0b9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0beu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0bf: /* 40e0bf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40e0c2: jmp 0x4019a4 */
  goto L_4019a4;
}

void f_40e1ab(void) {
  LOAD_REGS();
L_40e1ab: /* 40e1ab: xor eax, eax */
  eax = 0;
/* 40e1ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40e1ae: ret  */
  esp += 4; SPILL(); return;
}

void f_40e1af(void) {
  LOAD_REGS();
  goto L_40e1af;
L_4039e5: /* 4039e5: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 4039e8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4039ea: je 0x40e1cc */
  if (zf) goto L_40e1cc;
L_4039f0: /* 4039f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4039f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4039f2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4039f5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4039f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4039f9: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4039fc: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a02u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a04: je 0x403a83 */
  if (zf) goto L_403a83;
L_403a06: /* 403a06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 403a08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 403a0a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 403a0d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 403a10: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 403a12: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 403a15: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a1bu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a1b: mov esi, eax */
  esi = eax;
/* 403a1d: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 403a20: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a22: je 0x403a83 */
  if (zf) goto L_403a83;
L_403a24: /* 403a24: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 403a2b: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 403a2e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403a31: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 403a34: call 0x4014ee */
  esp -= 4; W32(esp, 0x403a39u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 403a39: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 403a3c: mov edi, esp */
  edi = esp;
/* 403a3e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 403a41: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 403a45: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a47: je 0x40e206 */
  if (zf) goto L_40e206;
L_403a4d: /* 403a4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a4f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 403a52: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 403a55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 403a57: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 403a5a: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a60u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a62: je 0x403a79 */
  if (zf) goto L_403a79;
L_403a64: /* 403a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403a67: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 403a6a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 403a6d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 403a70: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x403a76u); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 403a76: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_403a79: /* 403a79: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a7d: jne 0x40e226 */
  if (!zf) goto L_40e226;
L_403a83: /* 403a83: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a87: jne 0x40e232 */
  if (!zf) goto L_40e232;
L_403a8d: /* 403a8d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
L_403a90: /* 403a90: lea esp, [ebp - 0x5c] */
  esp = (uint32_t)(ebp + 0xffffffa4u);
/* 403a93: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 403a96: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 403a99: call 0x4013ab */
  esp -= 4; W32(esp, 0x403a9eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 403a9e: call 0x40105a */
  esp -= 4; W32(esp, 0x403aa3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 403aa3: ret  */
  esp += 4; SPILL(); return;
L_403ab5: /* 403ab5: xor eax, eax */
  eax = 0;
/* 403ab7: jmp 0x403a90 */
  goto L_403a90;
L_40e1af: /* 40e1af: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40e1b2: call 0x415709 */
  esp -= 4; W32(esp, 0x40e1b7u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40e1b7: and dword ptr [ebp - 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffbcu), r);
  }
/* 40e1bb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e1bf: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 40e1c2: xor esi, esi */
  esi = 0;
/* 40e1c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40e1c5: xor edi, edi */
  edi = 0;
/* 40e1c7: jmp 0x4039e5 */
  goto L_4039e5;
L_40e1cc: /* 40e1cc: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 40e1cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e1d0: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e1d5u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e1d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e1d6: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 40e1d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e1db: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e1e1: /* 40e1e1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40e1e4: jmp 0x4039f0 */
  goto L_4039f0;
L_40e206: /* 40e206: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40e209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e20a: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e20fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e20f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e210: mov edi, eax */
  edi = eax;
/* 40e212: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e214: je 0x403a83 */
  if (zf) goto L_403a83;
L_40e21a: /* 40e21a: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40e221: jmp 0x403a4d */
  goto L_403a4d;
L_40e226: /* 40e226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e227: call 0x401156 */
  esp -= 4; W32(esp, 0x40e22cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e22c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e22d: jmp 0x403a83 */
  goto L_403a83;
L_40e232: /* 40e232: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 40e235: call 0x401156 */
  esp -= 4; W32(esp, 0x40e23au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e23a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e23b: jmp 0x403a8d */
  goto L_403a8d;
}

void f_40e1e9(void) {
  LOAD_REGS();
L_40e1e9: /* 40e1e9: xor eax, eax */
  eax = 0;
/* 40e1eb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40e1ec: ret  */
  esp += 4; SPILL(); return;
}

void f_40e1ed(void) {
  LOAD_REGS();
  goto L_40e1ed;
L_403a45: /* 403a45: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a47: je 0x40e206 */
  if (zf) goto L_40e206;
L_403a4d: /* 403a4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a4f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 403a52: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 403a55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 403a57: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 403a5a: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a60u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a62: je 0x403a79 */
  if (zf) goto L_403a79;
L_403a64: /* 403a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403a67: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 403a6a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 403a6d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 403a70: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x403a76u); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 403a76: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_403a79: /* 403a79: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a7d: jne 0x40e226 */
  if (!zf) goto L_40e226;
L_403a83: /* 403a83: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a87: jne 0x40e232 */
  if (!zf) goto L_40e232;
L_403a8d: /* 403a8d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 403a90: lea esp, [ebp - 0x5c] */
  esp = (uint32_t)(ebp + 0xffffffa4u);
/* 403a93: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 403a96: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 403a99: call 0x4013ab */
  esp -= 4; W32(esp, 0x403a9eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 403a9e: call 0x40105a */
  esp -= 4; W32(esp, 0x403aa3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 403aa3: ret  */
  esp += 4; SPILL(); return;
L_40e1ed: /* 40e1ed: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40e1f0: call 0x415709 */
  esp -= 4; W32(esp, 0x40e1f5u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40e1f5: xor edi, edi */
  edi = 0;
/* 40e1f7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e1fb: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 40e1fe: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 40e201: jmp 0x403a45 */
  goto L_403a45;
L_40e206: /* 40e206: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40e209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e20a: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e20fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e20f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e210: mov edi, eax */
  edi = eax;
/* 40e212: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e214: je 0x403a83 */
  if (zf) goto L_403a83;
L_40e21a: /* 40e21a: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40e221: jmp 0x403a4d */
  goto L_403a4d;
L_40e226: /* 40e226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e227: call 0x401156 */
  esp -= 4; W32(esp, 0x40e22cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e22c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e22d: jmp 0x403a83 */
  goto L_403a83;
L_40e232: /* 40e232: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 40e235: call 0x401156 */
  esp -= 4; W32(esp, 0x40e23au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e23a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e23b: jmp 0x403a8d */
  goto L_403a8d;
}

void f_40e429(void) {
  LOAD_REGS();
L_40e429: /* 40e429: xor eax, eax */
  eax = 0;
/* 40e42b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40e42c: ret  */
  esp += 4; SPILL(); return;
}

void f_40e42d(void) {
  LOAD_REGS();
  goto L_40e42d;
L_4029bd: /* 4029bd: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4029c1: je 0x4029ee */
  if (zf) goto L_4029ee;
L_4029c3: /* 4029c3: mov eax, ebx */
  eax = ebx;
/* 4029c5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4029c8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 4029cb: mov esi, ebx */
  esi = ebx;
L_4029cd: /* 4029cd: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 4029d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4029d1: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4029d4: call 0x402a4e */
  esp -= 4; W32(esp, 0x4029d9u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 4029d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4029da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4029db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4029dd: jle 0x4029ee */
  if ((zf || sf != of)) goto L_4029ee;
L_4029df: /* 4029df: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4029e1: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 4029e4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4029e5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4029e6: mov eax, esi */
  eax = esi;
/* 4029e8: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4029ec: jne 0x4029cd */
  if (!zf) goto L_4029cd;
L_4029ee: /* 4029ee: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4029f1: and byte ptr [eax + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + edi), r);
  }
/* 4029f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4029f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4029f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4029fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4029fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4029fc: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4029ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402a00: call 0x402ac1 */
  esp -= 4; W32(esp, 0x402a05u); SPILL(); f_402ac1(); if (g_unwind) return; RELOAD();
/* 402a05: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402a08: mov esi, eax */
  esi = eax;
/* 402a0a: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402a0e: jne 0x40e47f */
  if (!zf) goto L_40e47f;
L_402a14: /* 402a14: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402a17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402a19: je 0x402a23 */
  if (zf) goto L_402a23;
L_402a1b: /* 402a1b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 402a1e: lea ecx, [ebx + ecx*2] */
  ecx = (uint32_t)(ebx + ecx*2);
/* 402a21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_402a23: /* 402a23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 402a25: test cx, 0x240 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x240u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 402a2a: jne 0x40e48d */
  if (!zf) goto L_40e48d;
L_402a30: /* 402a30: test cl, 0x81 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x81u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402a33: jne 0x40e4a1 */
  if (!zf) goto L_40e4a1;
L_402a39: /* 402a39: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402a3c: jne 0x40e4b1 */
  if (!zf) goto L_40e4b1;
L_402a42: /* 402a42: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
L_402a45: /* 402a45: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* 402a48: call 0x40105a */
  esp -= 4; W32(esp, 0x402a4du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 402a4d: ret  */
  esp += 4; SPILL(); return;
L_40e42d: /* 40e42d: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40e430: call 0x415709 */
  esp -= 4; W32(esp, 0x40e435u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 40e435: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40e438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e439: call 0x4013b8 */
  esp -= 4; W32(esp, 0x40e43eu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 40e43e: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 40e442: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e443: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e448u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e448: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e449: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e44a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 40e44d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e44f: jne 0x40e46c */
  if (!zf) goto L_40e46c;
L_40e451: /* 40e451: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40e456u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40e456: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 40e45c: wait  */
/* 40e45d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e461: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 40e467: jmp 0x402a45 */
  goto L_402a45;
L_40e46c: /* 40e46c: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40e473: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e477: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 40e47a: jmp 0x4029bd */
  goto L_4029bd;
L_40e47f: /* 40e47f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e482: call 0x401156 */
  esp -= 4; W32(esp, 0x40e487u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e487: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e488: jmp 0x402a14 */
  goto L_402a14;
L_40e48d: /* 40e48d: fldz  */
  FPUSH(0.0);
/* 40e48f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e491: je 0x402a45 */
  if (zf) goto L_402a45;
L_40e497: /* 40e497: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40e49a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40e49c: jmp 0x402a45 */
  goto L_402a45;
L_40e4a1: /* 40e4a1: fld qword ptr [0x4491cc] */
  { double v = F64((uint32_t)(0x4491ccu)); FPUSH(v); }
/* 40e4a7: cmp word ptr [ebx], 0x2d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e4ab: jne 0x40e4b3 */
  if (!zf) goto L_40e4b3;
L_40e4ad: /* 40e4ad: fchs  */
  ST0 = -ST0;
/* 40e4af: jmp 0x40e4b3 */
  goto L_40e4b3;
L_40e4b1: /* 40e4b1: fldz  */
  FPUSH(0.0);
L_40e4b3: /* 40e4b3: fstp qword ptr [ebp - 0x4c] */
  WF64((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 40e4b6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40e4bbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40e4bb: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 40e4c1: fld qword ptr [ebp - 0x4c] */
  { double v = F64((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 40e4c4: jmp 0x402a45 */
  goto L_402a45;
}

void f_40e675(void) {
  LOAD_REGS();
L_40e675: /* 40e675: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 40e678: jmp 0x404300 */
  SPILL(); f_404300(); return;
}

void f_40f26d(void) {
  LOAD_REGS();
L_40f26d: /* 40f26d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f26e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40f270: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40f275u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40f275: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40f279: mov esi, dword ptr [0x44f0c0] */
  esi = R32((uint32_t)(0x44f0c0u));
/* 40f27f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40f281: mov dword ptr [0x44f0c0], eax */
  W32((uint32_t)(0x44f0c0u), eax);
/* 40f286: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40f28bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40f28b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f28c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f28d: mov eax, esi */
  eax = esi;
/* 40f28f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f290: ret  */
  esp += 4; SPILL(); return;
}

void f_40f291(void) {
  LOAD_REGS();
L_40f291: /* 40f291: mov eax, dword ptr [0x44f0c0] */
  eax = R32((uint32_t)(0x44f0c0u));
/* 40f296: ret  */
  esp += 4; SPILL(); return;
}

void f_40f297(void) {
  LOAD_REGS();
L_40f297: /* 40f297: mov eax, dword ptr [0x44f0c0] */
  eax = R32((uint32_t)(0x44f0c0u));
/* 40f29c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f29e: je 0x40f2af */
  if (zf) goto L_40f2af;
L_40f2a0: /* 40f2a0: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 40f2a4: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40f2a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40f2a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f2a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f2a9: je 0x40f2af */
  if (zf) goto L_40f2af;
L_40f2ab: /* 40f2ab: xor eax, eax */
  eax = 0;
/* 40f2ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f2ae: ret  */
  esp += 4; SPILL(); return;
L_40f2af: /* 40f2af: xor eax, eax */
  eax = 0;
/* 40f2b1: ret  */
  esp += 4; SPILL(); return;
}

void f_40f2b2(void) {
  LOAD_REGS();
L_40f2b2: /* 40f2b2: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f2b7: je 0x40f2cd */
  if (zf) goto L_40f2cd;
L_40f2b9: /* 40f2b9: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 40f2bb: push 0x43e588 */
  { uint32_t v = 0x43e588u; esp -= 4; W32(esp, v); }
/* 40f2c0: push 0x43e57c */
  { uint32_t v = 0x43e57cu; esp -= 4; W32(esp, v); }
/* 40f2c5: call 0x41202b */
  esp -= 4; W32(esp, 0x40f2cau); SPILL(); f_41202b(); if (g_unwind) return; RELOAD();
/* 40f2ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40f2cd: /* 40f2cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40f2cf: call 0x40f26d */
  esp -= 4; W32(esp, 0x40f2d4u); SPILL(); f_40f26d(); if (g_unwind) return; RELOAD();
/* 40f2d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f2d5: xor eax, eax */
  eax = 0;
/* 40f2d7: ret  */
  esp += 4; SPILL(); return;
}

void f_40f2d8(void) {
  LOAD_REGS();
L_40f2d8: /* 40f2d8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 40f2dc: mov eax, ecx */
  eax = ecx;
/* 40f2de: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40f2e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f2e3: je 0x40f2e9 */
  if (zf) goto L_40f2e9;
L_40f2e5: /* 40f2e5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40f2e8: ret  */
  esp += 4; SPILL(); return;
L_40f2e9: /* 40f2e9: mov eax, dword ptr [0x44a854] */
  eax = R32((uint32_t)(0x44a854u));
/* 40f2ee: mov dword ptr [0x44a854], ecx */
  W32((uint32_t)(0x44a854u), ecx);
/* 40f2f4: ret  */
  esp += 4; SPILL(); return;
}

void f_40f2f5(void) {
  LOAD_REGS();
L_40f2f5: /* 40f2f5: mov eax, dword ptr [0x44a854] */
  eax = R32((uint32_t)(0x44a854u));
/* 40f2fa: ret  */
  esp += 4; SPILL(); return;
}

void f_40f2fb(void) {
  LOAD_REGS();
L_40f2fb: /* 40f2fb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 40f2ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40f301: jl 0x40f31f */
  if ((sf != of)) goto L_40f31f;
L_40f303: /* 40f303: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40f306: jle 0x40f313 */
  if ((zf || sf != of)) goto L_40f313;
L_40f308: /* 40f308: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f30b: jne 0x40f31f */
  if (!zf) goto L_40f31f;
L_40f30d: /* 40f30d: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 40f312: ret  */
  esp += 4; SPILL(); return;
L_40f313: /* 40f313: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 40f318: mov dword ptr [0x44f3e8], ecx */
  W32((uint32_t)(0x44f3e8u), ecx);
/* 40f31e: ret  */
  esp += 4; SPILL(); return;
L_40f31f: /* 40f31f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40f322: ret  */
  esp += 4; SPILL(); return;
}

void f_40f323(void) {
  LOAD_REGS();
L_40f323: /* 40f323: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40f327: and dword ptr [0x44ba78], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ba78u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44ba78u), r);
  }
/* 40f32e: mov dword ptr [0x44f0c4], eax */
  W32((uint32_t)(0x44f0c4u), eax);
/* 40f333: ret  */
  esp += 4; SPILL(); return;
}

void f_40f334(void) {
  LOAD_REGS();
L_40f334: /* 40f334: mov eax, dword ptr [0x44f0c4] */
  eax = R32((uint32_t)(0x44f0c4u));
/* 40f339: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f33b: je 0x40f33f */
  if (zf) goto L_40f33f;
L_40f33d: /* 40f33d: jmp eax */
  { uint32_t t = eax; SPILL(); call_ind(t); return; }
L_40f33f: /* 40f33f: xor eax, eax */
  eax = 0;
/* 40f341: ret  */
  esp += 4; SPILL(); return;
}

void f_40f342(void) {
  LOAD_REGS();
L_40f342: /* 40f342: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40f343: mov ebp, esp */
  ebp = esp;
/* 40f345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f346: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 40f349: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f34d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f34e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f352: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f353: mov edi, edx */
  edi = edx;
/* 40f355: mov esi, ecx */
  esi = ecx;
/* 40f357: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 40f35d: mov ecx, edi */
  ecx = edi;
/* 40f35f: je 0x40f36a */
  if (zf) goto L_40f36a;
L_40f361: /* 40f361: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 40f364: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f368: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_40f36a: /* 40f36a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f36c: je 0x40f373 */
  if (zf) goto L_40f373;
L_40f36e: /* 40f36e: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40f370: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 40f372: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f373: /* 40f373: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 40f375: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40f379: /* 40f379: cmp byte ptr [ecx], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f37c: jne 0x40f38e */
  if (!zf) goto L_40f38e;
L_40f37e: /* 40f37e: xor edx, edx */
  edx = 0;
/* 40f380: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f383: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40f386: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f387: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 40f38a: mov dl, 0x22 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x22u) & 0xffu);
/* 40f38c: jmp 0x40f3bb */
  goto L_40f3bb;
L_40f38e: /* 40f38e: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 40f390: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f392: je 0x40f399 */
  if (zf) goto L_40f399;
L_40f394: /* 40f394: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f396: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 40f398: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f399: /* 40f399: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f39b: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 40f39e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f39f: test byte ptr [edi + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f3a6: je 0x40f3b7 */
  if (zf) goto L_40f3b7;
L_40f3a8: /* 40f3a8: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 40f3aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f3ac: je 0x40f3b6 */
  if (zf) goto L_40f3b6;
L_40f3ae: /* 40f3ae: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f3b0: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 40f3b2: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f3b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f3b6: /* 40f3b6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_40f3b7: /* 40f3b7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f3b9: je 0x40f3ed */
  if (zf) goto L_40f3ed;
L_40f3bb: /* 40f3bb: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3bf: jne 0x40f379 */
  if (!zf) goto L_40f379;
L_40f3c1: /* 40f3c1: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3c4: je 0x40f3cb */
  if (zf) goto L_40f3cb;
L_40f3c6: /* 40f3c6: cmp dl, 9 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3c9: jne 0x40f379 */
  if (!zf) goto L_40f379;
L_40f3cb: /* 40f3cb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f3cd: je 0x40f3d3 */
  if (zf) goto L_40f3d3;
L_40f3cf: /* 40f3cf: and byte ptr [esi - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xffffffffu), r);
  }
L_40f3d3: /* 40f3d3: xor edi, edi */
  edi = 0;
L_40f3d5: /* 40f3d5: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3d8: je 0x40f4c6 */
  if (zf) goto L_40f4c6;
L_40f3de: /* 40f3de: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f3e0: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3e3: je 0x40f3ea */
  if (zf) goto L_40f3ea;
L_40f3e5: /* 40f3e5: cmp dl, 9 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3e8: jne 0x40f3f0 */
  if (!zf) goto L_40f3f0;
L_40f3ea: /* 40f3ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f3eb: jmp 0x40f3de */
  goto L_40f3de;
L_40f3ed: /* 40f3ed: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 40f3ee: jmp 0x40f3d3 */
  goto L_40f3d3;
L_40f3f0: /* 40f3f0: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3f3: je 0x40f4c6 */
  if (zf) goto L_40f4c6;
L_40f3f9: /* 40f3f9: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f3fd: je 0x40f408 */
  if (zf) goto L_40f408;
L_40f3ff: /* 40f3ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 40f402: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f406: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_40f408: /* 40f408: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* 40f40a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f40c: je 0x40f413 */
  if (zf) goto L_40f413;
L_40f40e: /* 40f40e: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f410: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 40f412: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f413: /* 40f413: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_40f415: /* 40f415: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40f41c: xor ebx, ebx */
  ebx = 0;
/* 40f41e: jmp 0x40f422 */
  goto L_40f422;
L_40f420: /* 40f420: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f421: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_40f422: /* 40f422: cmp byte ptr [ecx], 0x5c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f425: je 0x40f420 */
  if (zf) goto L_40f420;
L_40f427: /* 40f427: cmp byte ptr [ecx], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f42a: jne 0x40f450 */
  if (!zf) goto L_40f450;
L_40f42c: /* 40f42c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f42f: jne 0x40f44e */
  if (!zf) goto L_40f44e;
L_40f431: /* 40f431: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f433: je 0x40f441 */
  if (zf) goto L_40f441;
L_40f435: /* 40f435: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 40f438: cmp byte ptr [edx], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f43b: jne 0x40f441 */
  if (!zf) goto L_40f441;
L_40f43d: /* 40f43d: mov ecx, edx */
  ecx = edx;
/* 40f43f: jmp 0x40f445 */
  goto L_40f445;
L_40f441: /* 40f441: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40f445: /* 40f445: xor edx, edx */
  edx = 0;
/* 40f447: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f449: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40f44c: mov edi, edx */
  edi = edx;
L_40f44e: /* 40f44e: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
L_40f450: /* 40f450: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f452: je 0x40f463 */
  if (zf) goto L_40f463;
L_40f454: /* 40f454: mov edx, ebx */
  edx = ebx;
L_40f456: /* 40f456: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f458: je 0x40f45e */
  if (zf) goto L_40f45e;
L_40f45a: /* 40f45a: mov byte ptr [esi], 0x5c */
  W8((uint32_t)(esi), 0x5cu);
/* 40f45d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f45e: /* 40f45e: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 40f460: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 40f461: jne 0x40f456 */
  if (!zf) goto L_40f456;
L_40f463: /* 40f463: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f465: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f467: je 0x40f4b4 */
  if (zf) goto L_40f4b4;
L_40f469: /* 40f469: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f46b: jne 0x40f477 */
  if (!zf) goto L_40f477;
L_40f46d: /* 40f46d: cmp dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f470: je 0x40f4b4 */
  if (zf) goto L_40f4b4;
L_40f472: /* 40f472: cmp dl, 9 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f475: je 0x40f4b4 */
  if (zf) goto L_40f4b4;
L_40f477: /* 40f477: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f47b: je 0x40f4ae */
  if (zf) goto L_40f4ae;
L_40f47d: /* 40f47d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f47f: je 0x40f49a */
  if (zf) goto L_40f49a;
L_40f481: /* 40f481: movzx ebx, dl */
  ebx = (uint32_t)((edx & 0xffu));
/* 40f484: test byte ptr [ebx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f48b: je 0x40f493 */
  if (zf) goto L_40f493;
L_40f48d: /* 40f48d: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 40f48f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40f490: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f491: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_40f493: /* 40f493: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40f495: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 40f497: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40f498: jmp 0x40f4ac */
  goto L_40f4ac;
L_40f49a: /* 40f49a: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 40f49d: test byte ptr [edx + 0x449341], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x449341u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f4a4: je 0x40f4ac */
  if (zf) goto L_40f4ac;
L_40f4a6: /* 40f4a6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 40f4a8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f4a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f4aa: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_40f4ac: /* 40f4ac: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_40f4ae: /* 40f4ae: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40f4af: jmp 0x40f415 */
  goto L_40f415;
L_40f4b4: /* 40f4b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f4b6: je 0x40f4bc */
  if (zf) goto L_40f4bc;
L_40f4b8: /* 40f4b8: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 40f4bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40f4bc: /* 40f4bc: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 40f4be: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f4c1: jmp 0x40f3d5 */
  goto L_40f3d5;
L_40f4c6: /* 40f4c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40f4c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f4cb: je 0x40f4d0 */
  if (zf) goto L_40f4d0;
L_40f4cd: /* 40f4cd: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_40f4d0: /* 40f4d0: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* 40f4d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40f4d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f4d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f4d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40f4d6: ret  */
  esp += 4; SPILL(); return;
}

void f_40f4d7(void) {
  LOAD_REGS();
L_40f4d7: /* 40f4d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40f4d8: mov ebp, esp */
  ebp = esp;
/* 40f4da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f4db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f4dc: and byte ptr [0x44f1cc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f1ccu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44f1ccu), r);
  }
/* 40f4e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f4e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f4e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f4e6: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 40f4eb: mov esi, 0x44f0c8 */
  esi = 0x44f0c8u;
/* 40f4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f4f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40f4f3: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x40f4f9u); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 40f4f9: mov eax, dword ptr [0x449210] */
  eax = R32((uint32_t)(0x449210u));
/* 40f4fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f500: mov dword ptr [0x449204], esi */
  W32((uint32_t)(0x449204u), esi);
/* 40f506: je 0x40f50f */
  if (zf) goto L_40f50f;
L_40f508: /* 40f508: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40f50b: mov ebx, eax */
  ebx = eax;
/* 40f50d: jne 0x40f511 */
  if (!zf) goto L_40f511;
L_40f50f: /* 40f50f: mov ebx, esi */
  ebx = esi;
L_40f511: /* 40f511: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40f514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40f517: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40f51a: xor ecx, ecx */
  ecx = 0;
/* 40f51c: mov edx, ebx */
  edx = ebx;
/* 40f51e: call 0x40f342 */
  esp -= 4; W32(esp, 0x40f523u); SPILL(); f_40f342(); if (g_unwind) return; RELOAD();
/* 40f523: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40f526: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40f529: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 40f52c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40f52e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f52f: call 0x4010eb */
  esp -= 4; W32(esp, 0x40f534u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40f534: mov edi, eax */
  edi = eax;
/* 40f536: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40f539: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f53b: jne 0x40f542 */
  if (!zf) goto L_40f542;
L_40f53d: /* 40f53d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40f540: jmp 0x40f56e */
  goto L_40f56e;
L_40f542: /* 40f542: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40f545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f546: lea ecx, [esi + edi] */
  ecx = (uint32_t)(esi + edi);
/* 40f549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f54a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40f54d: mov edx, ebx */
  edx = ebx;
/* 40f54f: call 0x40f342 */
  esp -= 4; W32(esp, 0x40f554u); SPILL(); f_40f342(); if (g_unwind) return; RELOAD();
/* 40f554: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40f557: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f558: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40f559: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f55a: mov dword ptr [0x4491e8], eax */
  W32((uint32_t)(0x4491e8u), eax);
/* 40f55f: mov dword ptr [0x4491ec], edi */
  W32((uint32_t)(0x4491ecu), edi);
/* 40f565: call 0x40fec6 */
  esp -= 4; W32(esp, 0x40f56au); SPILL(); f_40fec6(); if (g_unwind) return; RELOAD();
/* 40f56a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40f56c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_40f56e: /* 40f56e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40f56f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f570: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f571: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40f572: ret  */
  esp += 4; SPILL(); return;
}

void f_40f573(void) {
  LOAD_REGS();
L_40f573: /* 40f573: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40f574: mov ebp, esp */
  ebp = esp;
/* 40f576: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f577: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f578: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f57b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f57c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f57d: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 40f580: xor esi, esi */
  esi = 0;
/* 40f582: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f585: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 40f587: mov dword ptr [ebx], 1 */
  W32((uint32_t)(ebx), 0x1u);
/* 40f58d: je 0x40f598 */
  if (zf) goto L_40f598;
L_40f58f: /* 40f58f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40f592: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f596: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_40f598: /* 40f598: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f59a: je 0x40f5a4 */
  if (zf) goto L_40f5a4;
L_40f59c: /* 40f59c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f59f: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 40f5a2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f5a3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f5a4: /* 40f5a4: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
L_40f5a6: /* 40f5a6: push 0x22 */
  { uint32_t v = 0x22u; esp -= 4; W32(esp, v); }
/* 40f5a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f5a9: cmp word ptr [eax], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f5ac: jne 0x40f5be */
  if (!zf) goto L_40f5be;
L_40f5ae: /* 40f5ae: xor ebx, ebx */
  ebx = 0;
/* 40f5b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f5b2: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40f5b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f5b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f5b7: mov esi, ebx */
  esi = ebx;
/* 40f5b9: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f5bc: jmp 0x40f5d6 */
  goto L_40f5d6;
L_40f5be: /* 40f5be: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 40f5c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f5c2: je 0x40f5cc */
  if (zf) goto L_40f5cc;
L_40f5c4: /* 40f5c4: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f5c7: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 40f5ca: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f5cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f5cc: /* 40f5cc: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f5cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f5d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f5d1: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40f5d4: je 0x40f611 */
  if (zf) goto L_40f611;
L_40f5d6: /* 40f5d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f5d8: jne 0x40f5a6 */
  if (!zf) goto L_40f5a6;
L_40f5da: /* 40f5da: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f5de: je 0x40f5e6 */
  if (zf) goto L_40f5e6;
L_40f5e0: /* 40f5e0: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f5e4: jne 0x40f5a6 */
  if (!zf) goto L_40f5a6;
L_40f5e6: /* 40f5e6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f5e8: je 0x40f5ef */
  if (zf) goto L_40f5ef;
L_40f5ea: /* 40f5ea: and word ptr [edx - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(edx + 0xfffffffeu), r);
  }
L_40f5ef: /* 40f5ef: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40f5f3: /* 40f5f3: xor esi, esi */
  esi = 0;
/* 40f5f5: cmp word ptr [eax], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f5f8: je 0x40f6d4 */
  if (zf) goto L_40f6d4;
L_40f5fe: /* 40f5fe: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f601: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f605: je 0x40f60d */
  if (zf) goto L_40f60d;
L_40f607: /* 40f607: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f60b: jne 0x40f615 */
  if (!zf) goto L_40f615;
L_40f60d: /* 40f60d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f60e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f60f: jmp 0x40f5fe */
  goto L_40f5fe;
L_40f611: /* 40f611: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40f612: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40f613: jmp 0x40f5ef */
  goto L_40f5ef;
L_40f615: /* 40f615: cmp word ptr [eax], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f618: je 0x40f6d4 */
  if (zf) goto L_40f6d4;
L_40f61e: /* 40f61e: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f621: je 0x40f62c */
  if (zf) goto L_40f62c;
L_40f623: /* 40f623: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40f626: add dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40f62a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_40f62c: /* 40f62c: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* 40f62e: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f630: je 0x40f63a */
  if (zf) goto L_40f63a;
L_40f632: /* 40f632: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f635: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 40f638: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f639: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f63a: /* 40f63a: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
L_40f63c: /* 40f63c: xor esi, esi */
  esi = 0;
/* 40f63e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40f63f: xor ebx, ebx */
  ebx = 0;
/* 40f641: jmp 0x40f646 */
  goto L_40f646;
L_40f643: /* 40f643: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f644: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f645: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_40f646: /* 40f646: cmp word ptr [eax], 0x5c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f64a: je 0x40f643 */
  if (zf) goto L_40f643;
L_40f64c: /* 40f64c: cmp word ptr [eax], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f650: jne 0x40f67c */
  if (!zf) goto L_40f67c;
L_40f652: /* 40f652: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40f655: jne 0x40f67a */
  if (!zf) goto L_40f67a;
L_40f657: /* 40f657: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f65b: je 0x40f66a */
  if (zf) goto L_40f66a;
L_40f65d: /* 40f65d: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 40f660: cmp word ptr [ecx], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f664: jne 0x40f66a */
  if (!zf) goto L_40f66a;
L_40f666: /* 40f666: mov eax, ecx */
  eax = ecx;
/* 40f668: jmp 0x40f66c */
  goto L_40f66c;
L_40f66a: /* 40f66a: xor esi, esi */
  esi = 0;
L_40f66c: /* 40f66c: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 40f66f: xor ecx, ecx */
  ecx = 0;
/* 40f671: cmp dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f674: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 40f677: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_40f67a: /* 40f67a: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
L_40f67c: /* 40f67c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f67e: je 0x40f690 */
  if (zf) goto L_40f690;
L_40f680: /* 40f680: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f682: je 0x40f68b */
  if (zf) goto L_40f68b;
L_40f684: /* 40f684: mov word ptr [edx], 0x5c */
  W16((uint32_t)(edx), 0x5cu);
/* 40f689: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f68a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f68b: /* 40f68b: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 40f68d: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 40f68e: jne 0x40f680 */
  if (!zf) goto L_40f680;
L_40f690: /* 40f690: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 40f693: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40f696: je 0x40f6c0 */
  if (zf) goto L_40f6c0;
L_40f698: /* 40f698: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f69c: jne 0x40f6aa */
  if (!zf) goto L_40f6aa;
L_40f69e: /* 40f69e: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f6a2: je 0x40f6c0 */
  if (zf) goto L_40f6c0;
L_40f6a4: /* 40f6a4: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f6a8: je 0x40f6c0 */
  if (zf) goto L_40f6c0;
L_40f6aa: /* 40f6aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f6ac: je 0x40f6b9 */
  if (zf) goto L_40f6b9;
L_40f6ae: /* 40f6ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f6b0: je 0x40f6b7 */
  if (zf) goto L_40f6b7;
L_40f6b2: /* 40f6b2: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 40f6b5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f6b6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f6b7: /* 40f6b7: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
L_40f6b9: /* 40f6b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f6ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f6bb: jmp 0x40f63c */
  goto L_40f63c;
L_40f6c0: /* 40f6c0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f6c2: je 0x40f6ca */
  if (zf) goto L_40f6ca;
L_40f6c4: /* 40f6c4: and word ptr [edx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(edx), r);
  }
/* 40f6c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40f6c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_40f6ca: /* 40f6ca: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 40f6cc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 40f6cf: jmp 0x40f5f3 */
  goto L_40f5f3;
L_40f6d4: /* 40f6d4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40f6d7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f6d9: je 0x40f6dd */
  if (zf) goto L_40f6dd;
L_40f6db: /* 40f6db: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_40f6dd: /* 40f6dd: inc dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx), r);
  }
/* 40f6df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40f6e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f6e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f6e2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40f6e3: ret  */
  esp += 4; SPILL(); return;
}

void f_40f6e4(void) {
  LOAD_REGS();
L_40f6e4: /* 40f6e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40f6e5: mov ebp, esp */
  ebp = esp;
/* 40f6e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f6e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f6e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f6ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f6eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f6ec: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 40f6f1: mov esi, 0x44f1d0 */
  esi = 0x44f1d0u;
/* 40f6f6: xor edi, edi */
  edi = 0;
/* 40f6f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f6f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f6fa: mov word ptr [0x44f3d8], di */
  W16((uint32_t)(0x44f3d8u), (edi & 0xffffu));
/* 40f701: call dword ptr [0x439004] */
  esp -= 4; W32(esp, 0x40f707u); SPILL(); call_ind(R32(0x439004u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameW */ RELOAD();
/* 40f707: mov eax, dword ptr [0x44920c] */
  eax = R32((uint32_t)(0x44920cu));
/* 40f70c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f70e: mov dword ptr [0x449208], esi */
  W32((uint32_t)(0x449208u), esi);
/* 40f714: je 0x40f71d */
  if (zf) goto L_40f71d;
L_40f716: /* 40f716: cmp word ptr [eax], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40f719: mov ebx, eax */
  ebx = eax;
/* 40f71b: jne 0x40f71f */
  if (!zf) goto L_40f71f;
L_40f71d: /* 40f71d: mov ebx, esi */
  ebx = esi;
L_40f71f: /* 40f71f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40f722: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f723: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40f726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f727: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f728: xor edx, edx */
  edx = 0;
/* 40f72a: mov eax, ebx */
  eax = ebx;
/* 40f72c: call 0x40f573 */
  esp -= 4; W32(esp, 0x40f731u); SPILL(); f_40f573(); if (g_unwind) return; RELOAD();
/* 40f731: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40f734: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40f737: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 40f73a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40f73c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f73d: call 0x4010eb */
  esp -= 4; W32(esp, 0x40f742u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40f742: mov esi, eax */
  esi = eax;
/* 40f744: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40f747: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f749: jne 0x40f750 */
  if (!zf) goto L_40f750;
L_40f74b: /* 40f74b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40f74e: jmp 0x40f77e */
  goto L_40f77e;
L_40f750: /* 40f750: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 40f753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f754: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40f757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f758: lea edx, [esi + edi*4] */
  edx = (uint32_t)(esi + edi*4);
/* 40f75b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f75c: mov eax, ebx */
  eax = ebx;
/* 40f75e: call 0x40f573 */
  esp -= 4; W32(esp, 0x40f763u); SPILL(); f_40f573(); if (g_unwind) return; RELOAD();
/* 40f763: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40f766: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40f769: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40f76a: mov dword ptr [0x4491e8], eax */
  W32((uint32_t)(0x4491e8u), eax);
/* 40f76f: mov dword ptr [0x4491f0], esi */
  W32((uint32_t)(0x4491f0u), esi);
/* 40f775: call 0x4101d9 */
  esp -= 4; W32(esp, 0x40f77au); SPILL(); f_4101d9(); if (g_unwind) return; RELOAD();
/* 40f77a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40f77c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_40f77e: /* 40f77e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40f77f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f780: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f781: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40f782: ret  */
  esp += 4; SPILL(); return;
}

void f_40f783(void) {
  LOAD_REGS();
L_40f783: /* 40f783: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f784: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40f786: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40f78a: xor ebx, ebx */
  ebx = 0;
/* 40f78c: call 0x404373 */
  esp -= 4; W32(esp, 0x40f791u); SPILL(); f_404373(); if (g_unwind) return; RELOAD();
/* 40f791: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f792: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f793: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f794: ret  */
  esp += 4; SPILL(); return;
}

void f_40f795(void) {
  LOAD_REGS();
L_40f795: /* 40f795: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f796: xor ebx, ebx */
  ebx = 0;
/* 40f798: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40f799: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40f79c: call 0x404373 */
  esp -= 4; W32(esp, 0x40f7a1u); SPILL(); f_404373(); if (g_unwind) return; RELOAD();
/* 40f7a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f7a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f7a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f7a4: ret  */
  esp += 4; SPILL(); return;
}

void f_40f7a5(void) {
  LOAD_REGS();
L_40f7a5: /* 40f7a5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40f7a7: call 0x40f95e */
  esp -= 4; W32(esp, 0x40f7acu); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40f7ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f7ad: ret  */
  esp += 4; SPILL(); return;
}

void f_40f7ae(void) {
  LOAD_REGS();
L_40f7ae: /* 40f7ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40f7af: mov ebp, esp */
  ebp = esp;
/* 40f7b1: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 40f7b7: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 40f7bc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 40f7bf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40f7c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f7c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40f7c4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 40f7c7: xor edx, edx */
  edx = 0;
/* 40f7c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f7ca: xor eax, eax */
  eax = 0;
L_40f7cc: /* 40f7cc: cmp ecx, dword ptr [eax*8 + 0x44ba80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax*8 + 0x44ba80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f7d3: je 0x40f7db */
  if (zf) goto L_40f7db;
L_40f7d5: /* 40f7d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f7d6: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40f7d9: jb 0x40f7cc */
  if (cf) goto L_40f7cc;
L_40f7db: /* 40f7db: mov esi, eax */
  esi = eax;
/* 40f7dd: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 40f7e0: cmp ecx, dword ptr [esi + 0x44ba80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44ba80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f7e6: jne 0x40f90f */
  if (!zf) goto L_40f90f;
L_40f7ec: /* 40f7ec: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 40f7f1: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f7f4: je 0x40f8ea */
  if (zf) goto L_40f8ea;
L_40f7fa: /* 40f7fa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f7fc: jne 0x40f80b */
  if (!zf) goto L_40f80b;
L_40f7fe: /* 40f7fe: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f805: je 0x40f8ea */
  if (zf) goto L_40f8ea;
L_40f80b: /* 40f80b: cmp ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f811: je 0x40f90f */
  if (zf) goto L_40f90f;
L_40f817: /* 40f817: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 40f81c: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 40f822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f823: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40f824: mov byte ptr [ebp - 8], dl */
  W8((uint32_t)(ebp + 0xfffffff8u), (edx & 0xffu));
/* 40f827: call dword ptr [0x439000] */
  esp -= 4; W32(esp, 0x40f82du); SPILL(); call_ind(R32(0x439000u)); if (g_unwind) return; /* KERNEL32!GetModuleFileNameA */ RELOAD();
/* 40f82d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f82f: jne 0x40f844 */
  if (!zf) goto L_40f844;
L_40f831: /* 40f831: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 40f837: push 0x43e8f4 */
  { uint32_t v = 0x43e8f4u; esp -= 4; W32(esp, v); }
/* 40f83c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f83d: call 0x404b3a */
  esp -= 4; W32(esp, 0x40f842u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40f842: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f843: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40f844: /* 40f844: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 40f84a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f84b: lea edi, [ebp - 0x10c] */
  edi = (uint32_t)(ebp + 0xfffffef4u);
/* 40f851: call 0x402493 */
  esp -= 4; W32(esp, 0x40f856u); SPILL(); hle_strlen(); RELOAD();
/* 40f856: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f857: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40f85a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f85b: jbe 0x40f886 */
  if ((cf | zf)) goto L_40f886;
L_40f85d: /* 40f85d: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 40f863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f864: call 0x402493 */
  esp -= 4; W32(esp, 0x40f869u); SPILL(); hle_strlen(); RELOAD();
/* 40f869: mov edi, eax */
  edi = eax;
/* 40f86b: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 40f871: sub eax, 0x3b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40f874: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40f876: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40f878: push 0x43e8f0 */
  { uint32_t v = 0x43e8f0u; esp -= 4; W32(esp, v); }
/* 40f87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f87e: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40f883u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40f883: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40f886: /* 40f886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f887: call 0x402493 */
  esp -= 4; W32(esp, 0x40f88cu); SPILL(); hle_strlen(); RELOAD();
/* 40f88c: push dword ptr [esi + 0x44ba84] */
  { uint32_t v = R32((uint32_t)(esi + 0x44ba84u)); esp -= 4; W32(esp, v); }
/* 40f892: mov ebx, eax */
  ebx = eax;
/* 40f894: call 0x402493 */
  esp -= 4; W32(esp, 0x40f899u); SPILL(); hle_strlen(); RELOAD();
/* 40f899: lea eax, [ebx + eax + 0x1c] */
  eax = (uint32_t)(ebx + eax + 0x1cu);
/* 40f89d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f89e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40f8a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f8a2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40f8a5: call 0x4014ee */
  esp -= 4; W32(esp, 0x40f8aau); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40f8aa: mov ebx, esp */
  ebx = esp;
/* 40f8ac: push 0x43e8d4 */
  { uint32_t v = 0x43e8d4u; esp -= 4; W32(esp, v); }
/* 40f8b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f8b2: call 0x404b3a */
  esp -= 4; W32(esp, 0x40f8b7u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40f8b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f8b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f8b9: call 0x401d57 */
  esp -= 4; W32(esp, 0x40f8beu); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 40f8be: push 0x43e8d0 */
  { uint32_t v = 0x43e8d0u; esp -= 4; W32(esp, v); }
/* 40f8c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f8c4: call 0x401d57 */
  esp -= 4; W32(esp, 0x40f8c9u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 40f8c9: push dword ptr [esi + 0x44ba84] */
  { uint32_t v = R32((uint32_t)(esi + 0x44ba84u)); esp -= 4; W32(esp, v); }
/* 40f8cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f8d0: call 0x401d57 */
  esp -= 4; W32(esp, 0x40f8d5u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 40f8d5: push 0x12010 */
  { uint32_t v = 0x12010u; esp -= 4; W32(esp, v); }
/* 40f8da: push 0x43e8a8 */
  { uint32_t v = 0x43e8a8u; esp -= 4; W32(esp, v); }
/* 40f8df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40f8e0: call 0x41240c */
  esp -= 4; W32(esp, 0x40f8e5u); SPILL(); f_41240c(); if (g_unwind) return; RELOAD();
/* 40f8e5: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40f8e8: jmp 0x40f90f */
  goto L_40f90f;
L_40f8ea: /* 40f8ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40f8eb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 40f8ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f8ef: lea esi, [esi + 0x44ba84] */
  esi = (uint32_t)(esi + 0x44ba84u);
/* 40f8f5: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40f8f7: call 0x402493 */
  esp -= 4; W32(esp, 0x40f8fcu); SPILL(); hle_strlen(); RELOAD();
/* 40f8fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f8fe: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40f900: push -0xc */
  { uint32_t v = 0xfffffff4u; esp -= 4; W32(esp, v); }
/* 40f902: call dword ptr [0x439020] */
  esp -= 4; W32(esp, 0x40f908u); SPILL(); call_ind(R32(0x439020u)); if (g_unwind) return; /* KERNEL32!GetStdHandle */ RELOAD();
/* 40f908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f909: call dword ptr [0x43901c] */
  esp -= 4; W32(esp, 0x40f90fu); SPILL(); call_ind(R32(0x43901cu)); if (g_unwind) return; /* KERNEL32!WriteFile */ RELOAD();
L_40f90f: /* 40f90f: lea esp, [ebp - 0x118] */
  esp = (uint32_t)(ebp + 0xfffffee8u);
/* 40f915: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40f918: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 40f91b: call 0x4013ab */
  esp -= 4; W32(esp, 0x40f920u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 40f920: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40f921: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40f922: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40f923: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40f924: ret  */
  esp += 4; SPILL(); return;
}

void f_40f925(void) {
  LOAD_REGS();
L_40f925: /* 40f925: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 40f92a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f92d: je 0x40f93c */
  if (zf) goto L_40f93c;
L_40f92f: /* 40f92f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f931: jne 0x40f95d */
  if (!zf) goto L_40f95d;
L_40f933: /* 40f933: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f93a: jne 0x40f95d */
  if (!zf) goto L_40f95d;
L_40f93c: /* 40f93c: push 0xfc */
  { uint32_t v = 0xfcu; esp -= 4; W32(esp, v); }
/* 40f941: call 0x40f7ae */
  esp -= 4; W32(esp, 0x40f946u); SPILL(); f_40f7ae(); if (g_unwind) return; RELOAD();
/* 40f946: mov eax, dword ptr [0x44f3e0] */
  eax = R32((uint32_t)(0x44f3e0u));
/* 40f94b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f94d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f94e: je 0x40f952 */
  if (zf) goto L_40f952;
L_40f950: /* 40f950: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40f952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_40f952: /* 40f952: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 40f957: call 0x40f7ae */
  esp -= 4; W32(esp, 0x40f95cu); SPILL(); f_40f7ae(); if (g_unwind) return; RELOAD();
/* 40f95c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40f95d: /* 40f95d: ret  */
  esp += 4; SPILL(); return;
}

void f_40f95e(void) {
  LOAD_REGS();
L_40f95e: /* 40f95e: mov eax, dword ptr [0x44f3e8] */
  eax = R32((uint32_t)(0x44f3e8u));
/* 40f963: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f966: je 0x40f975 */
  if (zf) goto L_40f975;
L_40f968: /* 40f968: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f96a: jne 0x40f97a */
  if (!zf) goto L_40f97a;
L_40f96c: /* 40f96c: cmp dword ptr [0x44afbc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44afbcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40f973: jne 0x40f97a */
  if (!zf) goto L_40f97a;
L_40f975: /* 40f975: call 0x40f925 */
  esp -= 4; W32(esp, 0x40f97au); SPILL(); f_40f925(); if (g_unwind) return; RELOAD();
L_40f97a: /* 40f97a: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 40f97e: call 0x40f7ae */
  esp -= 4; W32(esp, 0x40f983u); SPILL(); f_40f7ae(); if (g_unwind) return; RELOAD();
/* 40f983: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 40f988: call dword ptr [0x449000] */
  { uint32_t t = R32((uint32_t)(0x449000u)); esp -= 4; W32(esp, 0x40f98eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40f98e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f98f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f990: ret  */
  esp += 4; SPILL(); return;
}

void f_40f991(void) {
  LOAD_REGS();
L_40f991: /* 40f991: mov eax, 0x449210 */
  eax = 0x449210u;
/* 40f996: ret  */
  esp += 4; SPILL(); return;
}

void f_40f997(void) {
  LOAD_REGS();
L_40f997: /* 40f997: mov eax, 0x44920c */
  eax = 0x44920cu;
/* 40f99c: ret  */
  esp += 4; SPILL(); return;
}

void f_40f99d(void) {
  LOAD_REGS();
L_40f99d: /* 40f99d: mov eax, 0x44bc78 */
  eax = 0x44bc78u;
/* 40f9a2: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9a3(void) {
  LOAD_REGS();
L_40f9a3: /* 40f9a3: mov eax, 0x4491ec */
  eax = 0x4491ecu;
/* 40f9a8: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9a9(void) {
  LOAD_REGS();
L_40f9a9: /* 40f9a9: mov eax, 0x4491f0 */
  eax = 0x4491f0u;
/* 40f9ae: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9af(void) {
  LOAD_REGS();
L_40f9af: /* 40f9af: mov eax, 0x449040 */
  eax = 0x449040u;
/* 40f9b4: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9b5(void) {
  LOAD_REGS();
L_40f9b5: /* 40f9b5: mov eax, 0x449048 */
  eax = 0x449048u;
/* 40f9ba: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9bb(void) {
  LOAD_REGS();
L_40f9bb: /* 40f9bb: mov eax, 0x4491f4 */
  eax = 0x4491f4u;
/* 40f9c0: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9c1(void) {
  LOAD_REGS();
L_40f9c1: /* 40f9c1: mov eax, 0x4491fc */
  eax = 0x4491fcu;
/* 40f9c6: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9c7(void) {
  LOAD_REGS();
L_40f9c7: /* 40f9c7: mov eax, 0x449004 */
  eax = 0x449004u;
/* 40f9cc: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9cd(void) {
  LOAD_REGS();
L_40f9cd: /* 40f9cd: mov eax, 0x4491f8 */
  eax = 0x4491f8u;
/* 40f9d2: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9d3(void) {
  LOAD_REGS();
L_40f9d3: /* 40f9d3: mov eax, 0x449200 */
  eax = 0x449200u;
/* 40f9d8: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9d9(void) {
  LOAD_REGS();
L_40f9d9: /* 40f9d9: mov eax, 0x449568 */
  eax = 0x449568u;
/* 40f9de: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9df(void) {
  LOAD_REGS();
L_40f9df: /* 40f9df: mov eax, 0x449340 */
  eax = 0x449340u;
/* 40f9e4: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9e5(void) {
  LOAD_REGS();
L_40f9e5: /* 40f9e5: mov eax, 0x449460 */
  eax = 0x449460u;
/* 40f9ea: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9eb(void) {
  LOAD_REGS();
L_40f9eb: /* 40f9eb: mov eax, 0x44902c */
  eax = 0x44902cu;
/* 40f9f0: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9f1(void) {
  LOAD_REGS();
L_40f9f1: /* 40f9f1: mov eax, 0x4491d8 */
  eax = 0x4491d8u;
/* 40f9f6: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9f7(void) {
  LOAD_REGS();
L_40f9f7: /* 40f9f7: mov eax, 0x449030 */
  eax = 0x449030u;
/* 40f9fc: ret  */
  esp += 4; SPILL(); return;
}

void f_40f9fd(void) {
  LOAD_REGS();
L_40f9fd: /* 40f9fd: mov eax, 0x449034 */
  eax = 0x449034u;
/* 40fa02: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa03(void) {
  LOAD_REGS();
L_40fa03: /* 40fa03: mov eax, 0x449204 */
  eax = 0x449204u;
/* 40fa08: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa09(void) {
  LOAD_REGS();
L_40fa09: /* 40fa09: mov eax, 0x449208 */
  eax = 0x449208u;
/* 40fa0e: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa0f(void) {
  LOAD_REGS();
L_40fa0f: /* 40fa0f: mov eax, 0x44903c */
  eax = 0x44903cu;
/* 40fa14: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa15(void) {
  LOAD_REGS();
L_40fa15: /* 40fa15: mov eax, 0x44a800 */
  eax = 0x44a800u;
/* 40fa1a: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa1b(void) {
  LOAD_REGS();
L_40fa1b: /* 40fa1b: mov eax, 0x4491e0 */
  eax = 0x4491e0u;
/* 40fa20: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa21(void) {
  LOAD_REGS();
L_40fa21: /* 40fa21: mov eax, 0x4491e4 */
  eax = 0x4491e4u;
/* 40fa26: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa27(void) {
  LOAD_REGS();
L_40fa27: /* 40fa27: mov eax, 0x4491dc */
  eax = 0x4491dcu;
/* 40fa2c: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa2d(void) {
  LOAD_REGS();
L_40fa2d: /* 40fa2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40fa2e: mov ebx, dword ptr [0x439034] */
  ebx = R32((uint32_t)(0x439034u));
/* 40fa34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fa35: mov esi, 0x44a9b8 */
  esi = 0x44a9b8u;
/* 40fa3a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_40fa3b: /* 40fa3b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 40fa3d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fa3f: je 0x40fa54 */
  if (zf) goto L_40fa54;
L_40fa41: /* 40fa41: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fa45: je 0x40fa54 */
  if (zf) goto L_40fa54;
L_40fa47: /* 40fa47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fa48: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x40fa4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40fa4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fa4b: call 0x401156 */
  esp -= 4; W32(esp, 0x40fa50u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40fa50: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 40fa53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40fa54: /* 40fa54: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40fa57: cmp esi, 0x44aad8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44aad8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40fa5d: jl 0x40fa3b */
  if ((sf != of)) goto L_40fa3b;
L_40fa5f: /* 40fa5f: mov esi, 0x44a9b8 */
  esi = 0x44a9b8u;
/* 40fa64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_40fa65: /* 40fa65: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40fa67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fa69: je 0x40fa74 */
  if (zf) goto L_40fa74;
L_40fa6b: /* 40fa6b: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fa6f: jne 0x40fa74 */
  if (!zf) goto L_40fa74;
L_40fa71: /* 40fa71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fa72: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x40fa74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_40fa74: /* 40fa74: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40fa77: cmp esi, 0x44aad8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44aad8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40fa7d: jl 0x40fa65 */
  if ((sf != of)) goto L_40fa65;
L_40fa7f: /* 40fa7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40fa80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40fa81: ret  */
  esp += 4; SPILL(); return;
}

void f_40fa82(void) {
  LOAD_REGS();
L_40fa82: /* 40fa82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40fa83: mov ebp, esp */
  ebp = esp;
/* 40fa85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fa86: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40fa89: lea esi, [esi*8 + 0x44a9b8] */
  esi = (uint32_t)(esi*8 + 0x44a9b8u);
/* 40fa90: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fa93: je 0x40fa9a */
  if (zf) goto L_40fa9a;
L_40fa95: /* 40fa95: xor eax, eax */
  eax = 0;
/* 40fa97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40fa98: jmp 0x40fafe */
  goto L_40fafe;
L_40fa9a: /* 40fa9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fa9b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 40fa9d: call 0x4010eb */
  esp -= 4; W32(esp, 0x40faa2u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40faa2: mov edi, eax */
  edi = eax;
/* 40faa4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40faa6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40faa7: jne 0x40fab8 */
  if (!zf) goto L_40fab8;
L_40faa9: /* 40faa9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40faaeu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40faae: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 40fab4: xor eax, eax */
  eax = 0;
/* 40fab6: jmp 0x40fafd */
  goto L_40fafd;
L_40fab8: /* 40fab8: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40faba: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40fabfu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40fabf: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fac2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fac3: jne 0x40faeb */
  if (!zf) goto L_40faeb;
L_40fac5: /* 40fac5: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 40faca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40facb: call 0x404bf7 */
  esp -= 4; W32(esp, 0x40fad0u); SPILL(); f_404bf7(); if (g_unwind) return; RELOAD();
/* 40fad0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fad2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fad3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fad4: jne 0x40fae7 */
  if (!zf) goto L_40fae7;
L_40fad6: /* 40fad6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fad7: call 0x401156 */
  esp -= 4; W32(esp, 0x40fadcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40fadc: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40fade: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40fae3u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40fae3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fae4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fae5: jmp 0x40faa9 */
  goto L_40faa9;
L_40fae7: /* 40fae7: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 40fae9: jmp 0x40faf2 */
  goto L_40faf2;
L_40faeb: /* 40faeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40faec: call 0x401156 */
  esp -= 4; W32(esp, 0x40faf1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40faf1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40faf2: /* 40faf2: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40faf4: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40faf9u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40faf9: xor eax, eax */
  eax = 0;
/* 40fafb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fafc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40fafd: /* 40fafd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_40fafe: /* 40fafe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40faff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40fb00: ret  */
  esp += 4; SPILL(); return;
}

void f_40fb01(void) {
  LOAD_REGS();
L_40fb01: /* 40fb01: mov eax, dword ptr [0x44ab64] */
  eax = R32((uint32_t)(0x44ab64u));
/* 40fb06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fb08: je 0x40fb0c */
  if (zf) goto L_40fb0c;
L_40fb0a: /* 40fb0a: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40fb0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_40fb0c: /* 40fb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fb0d: call 0x40137f */
  esp -= 4; W32(esp, 0x40fb12u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 40fb12: mov esi, eax */
  esi = eax;
/* 40fb14: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fb16: jne 0x40fb20 */
  if (!zf) goto L_40fb20;
L_40fb18: /* 40fb18: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40fb1a: call 0x40f95e */
  esp -= 4; W32(esp, 0x40fb1fu); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40fb1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40fb20: /* 40fb20: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 40fb23: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fb26: je 0x40fb2f */
  if (zf) goto L_40fb2f;
L_40fb28: /* 40fb28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fb29: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x40fb2fu); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
L_40fb2f: /* 40fb2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fb30: call 0x401798 */
  esp -= 4; W32(esp, 0x40fb35u); SPILL(); f_401798(); if (g_unwind) return; RELOAD();
/* 40fb35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fb36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40fb38: call dword ptr [0x439040] */
  esp -= 4; W32(esp, 0x40fb3eu); SPILL(); call_ind(R32(0x439040u)); if (g_unwind) return; /* KERNEL32!ExitThread */ RELOAD();
/* 40fb3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40fb3f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 40fb41: push 0x43e910 */
  { uint32_t v = 0x43e910u; esp -= 4; W32(esp, v); }
/* 40fb46: call 0x40101f */
  esp -= 4; W32(esp, 0x40fb4bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 40fb4b: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40fb51: call dword ptr [0x439048] */
  esp -= 4; W32(esp, 0x40fb57u); SPILL(); call_ind(R32(0x439048u)); if (g_unwind) return; /* KERNEL32!TlsGetValue */ RELOAD();
/* 40fb57: mov esi, eax */
  esi = eax;
/* 40fb59: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fb5b: jne 0x40fb7a */
  if (!zf) goto L_40fb7a;
L_40fb5d: /* 40fb5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40fb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fb61: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40fb67: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x40fb6du); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 40fb6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fb6f: jne 0x40fb96 */
  if (!zf) goto L_40fb96;
L_40fb71: /* 40fb71: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40fb73: call 0x40f95e */
  esp -= 4; W32(esp, 0x40fb78u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40fb78: jmp 0x40fb95 */
  goto L_40fb95;
L_40fb7a: /* 40fb7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40fb7d: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 40fb80: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 40fb83: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 40fb86: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 40fb89: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 40fb8c: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 40fb8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fb90: call 0x401156 */
  esp -= 4; W32(esp, 0x40fb95u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
L_40fb95: /* 40fb95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40fb96: /* 40fb96: mov eax, dword ptr [0x44ab60] */
  eax = R32((uint32_t)(0x44ab60u));
/* 40fb9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fb9d: je 0x40fba1 */
  if (zf) goto L_40fba1;
L_40fb9f: /* 40fb9f: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x40fba1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_40fba1: /* 40fba1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40fba5: push dword ptr [esi + 0x50] */
  { uint32_t v = R32((uint32_t)(esi + 0x50u)); esp -= 4; W32(esp, v); }
/* 40fba8: call dword ptr [esi + 0x4c] */
  { uint32_t t = R32((uint32_t)(esi + 0x4cu)); esp -= 4; W32(esp, 0x40fbabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40fbab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fbac: call 0x40fb01 */
  esp -= 4; W32(esp, 0x40fbb1u); SPILL(); f_40fb01(); if (g_unwind) return; RELOAD();
/* 40fbb1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40fbb5: xor eax, eax */
  eax = 0;
/* 40fbb7: call 0x40105a */
  esp -= 4; W32(esp, 0x40fbbcu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 40fbbc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_40fbbf(void) {
  LOAD_REGS();
L_40fbbf: /* 40fbbf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40fbc2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 40fbc4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 40fbc6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 40fbc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fbca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40fbcb: call 0x412551 */
  esp -= 4; W32(esp, 0x40fbd0u); SPILL(); f_412551(); if (g_unwind) return; RELOAD();
/* 40fbd0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fbd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fbd2: ret  */
  esp += 4; SPILL(); return;
}

void f_40fbd3(void) {
  LOAD_REGS();
L_40fbd3: /* 40fbd3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40fbd6: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40fbd9: call 0x40f783 */
  esp -= 4; W32(esp, 0x40fbdeu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
  SPILL(); f_40fbde(); return;
}

void f_40fbde(void) {
  LOAD_REGS();
L_40fbde: /* 40fbde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40fbdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fbe0: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 40fbe4: xor ebx, ebx */
  ebx = 0;
/* 40fbe6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fbe8: jne 0x40fbfa */
  if (!zf) goto L_40fbfa;
L_40fbea: /* 40fbea: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40fbefu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40fbef: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 40fbf5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40fbf8: jmp 0x40fc6c */
  goto L_40fc6c;
L_40fbfa: /* 40fbfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fbfb: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 40fc00: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40fc02: call 0x4016cb */
  esp -= 4; W32(esp, 0x40fc07u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40fc07: mov esi, eax */
  esi = eax;
/* 40fc09: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fc0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fc0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fc0d: je 0x40fc52 */
  if (zf) goto L_40fc52;
L_40fc0f: /* 40fc0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fc10: call 0x40173b */
  esp -= 4; W32(esp, 0x40fc15u); SPILL(); f_40173b(); if (g_unwind) return; RELOAD();
/* 40fc15: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 40fc19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fc1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fc1b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40fc1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fc1e: push 0x40fb3f */
  { uint32_t v = 0x40fb3fu; esp -= 4; W32(esp, v); }
/* 40fc23: push dword ptr [esp + 0x24] */
  { uint32_t v = R32((uint32_t)(esp + 0x24u)); esp -= 4; W32(esp, v); }
/* 40fc27: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 40fc2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40fc2c: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 40fc2f: call dword ptr [0x439054] */
  esp -= 4; W32(esp, 0x40fc35u); SPILL(); call_ind(R32(0x439054u)); if (g_unwind) return; /* KERNEL32!CreateThread */ RELOAD();
/* 40fc35: mov edi, eax */
  edi = eax;
/* 40fc37: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fc39: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 40fc3c: je 0x40fc4a */
  if (zf) goto L_40fc4a;
L_40fc3e: /* 40fc3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fc3f: call dword ptr [0x439050] */
  esp -= 4; W32(esp, 0x40fc45u); SPILL(); call_ind(R32(0x439050u)); if (g_unwind) return; /* KERNEL32!ResumeThread */ RELOAD();
/* 40fc45: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fc48: jne 0x40fc69 */
  if (!zf) goto L_40fc69;
L_40fc4a: /* 40fc4a: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40fc50u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40fc50: mov ebx, eax */
  ebx = eax;
L_40fc52: /* 40fc52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fc53: call 0x401156 */
  esp -= 4; W32(esp, 0x40fc58u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40fc58: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fc5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fc5b: je 0x40fc64 */
  if (zf) goto L_40fc64;
L_40fc5d: /* 40fc5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40fc5e: call 0x4102b7 */
  esp -= 4; W32(esp, 0x40fc63u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 40fc63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40fc64: /* 40fc64: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40fc67: jmp 0x40fc6b */
  goto L_40fc6b;
L_40fc69: /* 40fc69: mov eax, edi */
  eax = edi;
L_40fc6b: /* 40fc6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_40fc6c: /* 40fc6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40fc6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40fc6e: ret  */
  esp += 4; SPILL(); return;
}

void f_40fc6f(void) {
  LOAD_REGS();
L_40fc6f: /* 40fc6f: call 0x40fa2d */
  esp -= 4; W32(esp, 0x40fc74u); SPILL(); f_40fa2d(); if (g_unwind) return; RELOAD();
/* 40fc74: mov eax, dword ptr [0x44a850] */
  eax = R32((uint32_t)(0x44a850u));
/* 40fc79: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fc7c: je 0x40fc8c */
  if (zf) goto L_40fc8c;
L_40fc7e: /* 40fc7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fc7f: call dword ptr [0x439058] */
  esp -= 4; W32(esp, 0x40fc85u); SPILL(); call_ind(R32(0x439058u)); if (g_unwind) return; /* KERNEL32!TlsFree */ RELOAD();
/* 40fc85: or dword ptr [0x44a850], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a850u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44a850u), r);
  }
L_40fc8c: /* 40fc8c: ret  */
  esp += 4; SPILL(); return;
}

void f_40fc8d(void) {
  LOAD_REGS();
L_40fc8d: /* 40fc8d: jmp dword ptr [0x439024] */
  SPILL(); call_ind(R32(0x439024u)); return; /* KERNEL32!GetCurrentThreadId */
}

void f_40fc93(void) {
  LOAD_REGS();
L_40fc93: /* 40fc93: jmp dword ptr [0x439060] */
  SPILL(); call_ind(R32(0x439060u)); return; /* KERNEL32!GetCurrentThread */
}

void f_40fc99(void) {
  LOAD_REGS();
L_40fc99: /* 40fc99: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40fc9b: call 0x4010eb */
  esp -= 4; W32(esp, 0x40fca0u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40fca0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fca2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fca3: jne 0x40fca9 */
  if (!zf) goto L_40fca9;
L_40fca5: /* 40fca5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40fca8: ret  */
  esp += 4; SPILL(); return;
L_40fca9: /* 40fca9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 40fcad: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 40fcb1: cmp dword ptr [0x44f3ec], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3ecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fcb8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40fcba: je 0x40fcc7 */
  if (zf) goto L_40fcc7;
L_40fcbc: /* 40fcbc: mov ecx, dword ptr [0x44f3f8] */
  ecx = R32((uint32_t)(0x44f3f8u));
/* 40fcc2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 40fcc5: jmp 0x40fccc */
  goto L_40fccc;
L_40fcc7: /* 40fcc7: mov dword ptr [0x44f3ec], eax */
  W32((uint32_t)(0x44f3ecu), eax);
L_40fccc: /* 40fccc: mov dword ptr [0x44f3f8], eax */
  W32((uint32_t)(0x44f3f8u), eax);
/* 40fcd1: xor eax, eax */
  eax = 0;
/* 40fcd3: ret  */
  esp += 4; SPILL(); return;
}

void f_40fcd4(void) {
  LOAD_REGS();
L_40fcd4: /* 40fcd4: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fcd9: je 0x40fd32 */
  if (zf) goto L_40fd32;
L_40fcdb: /* 40fcdb: cmp dword ptr [0x44f3f0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3f0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fce2: jne 0x40fcf8 */
  if (!zf) goto L_40fcf8;
L_40fce4: /* 40fce4: push 0x244 */
  { uint32_t v = 0x244u; esp -= 4; W32(esp, v); }
/* 40fce9: call 0x4010eb */
  esp -= 4; W32(esp, 0x40fceeu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40fcee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fcf0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fcf1: mov dword ptr [0x44f3f0], eax */
  W32((uint32_t)(0x44f3f0u), eax);
/* 40fcf6: je 0x40fd5b */
  if (zf) goto L_40fd5b;
L_40fcf8: /* 40fcf8: mov eax, dword ptr [0x44f3f4] */
  eax = R32((uint32_t)(0x44f3f4u));
/* 40fcfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fcff: je 0x40fd0f */
  if (zf) goto L_40fd0f;
L_40fd01: /* 40fd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fd02: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x40fd08u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* 40fd08: and dword ptr [0x44f3f4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3f4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f3f4u), r);
  }
L_40fd0f: /* 40fd0f: push dword ptr [0x44f3f0] */
  { uint32_t v = R32((uint32_t)(0x44f3f0u)); esp -= 4; W32(esp, v); }
/* 40fd15: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40fd19: call dword ptr [0x43906c] */
  esp -= 4; W32(esp, 0x40fd1fu); SPILL(); call_ind(R32(0x43906cu)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* 40fd1f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd22: mov dword ptr [0x44f3f4], eax */
  W32((uint32_t)(0x44f3f4u), eax);
/* 40fd27: je 0x40fd5b */
  if (zf) goto L_40fd5b;
L_40fd29: /* 40fd29: mov eax, dword ptr [0x44f3f0] */
  eax = R32((uint32_t)(0x44f3f0u));
/* 40fd2e: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40fd31: ret  */
  esp += 4; SPILL(); return;
L_40fd32: /* 40fd32: push dword ptr [0x44f3f0] */
  { uint32_t v = R32((uint32_t)(0x44f3f0u)); esp -= 4; W32(esp, v); }
/* 40fd38: push dword ptr [0x44f3f4] */
  { uint32_t v = R32((uint32_t)(0x44f3f4u)); esp -= 4; W32(esp, v); }
/* 40fd3e: call dword ptr [0x439068] */
  esp -= 4; W32(esp, 0x40fd44u); SPILL(); call_ind(R32(0x439068u)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* 40fd44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fd46: jne 0x40fd29 */
  if (!zf) goto L_40fd29;
L_40fd48: /* 40fd48: push dword ptr [0x44f3f4] */
  { uint32_t v = R32((uint32_t)(0x44f3f4u)); esp -= 4; W32(esp, v); }
/* 40fd4e: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x40fd54u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* 40fd54: and dword ptr [0x44f3f4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3f4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f3f4u), r);
  }
L_40fd5b: /* 40fd5b: xor eax, eax */
  eax = 0;
/* 40fd5d: ret  */
  esp += 4; SPILL(); return;
}

void f_40fd5e(void) {
  LOAD_REGS();
L_40fd5e: /* 40fd5e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 40fd5f: mov ebp, esp */
  ebp = esp;
/* 40fd61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40fd62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40fd63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40fd64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fd65: xor ebx, ebx */
  ebx = 0;
/* 40fd67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fd68: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 40fd6b: mov esi, eax */
  esi = eax;
/* 40fd6d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 40fd70: jmp 0x40fd91 */
  goto L_40fd91;
L_40fd72: /* 40fd72: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40fd74: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd76: je 0x40fd95 */
  if (zf) goto L_40fd95;
L_40fd78: /* 40fd78: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd7a: je 0x40fd95 */
  if (zf) goto L_40fd95;
L_40fd7c: /* 40fd7c: cmp al, 0x3a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd7e: je 0x40fd9a */
  if (zf) goto L_40fd9a;
L_40fd80: /* 40fd80: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 40fd81: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40fd83: jbe 0x40fd93 */
  if ((cf | zf)) goto L_40fd93;
L_40fd85: /* 40fd85: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40fd86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fd87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fd88: call 0x411f2a */
  esp -= 4; W32(esp, 0x40fd8du); SPILL(); f_411f2a(); if (g_unwind) return; RELOAD();
/* 40fd8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fd8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fd8f: mov esi, eax */
  esi = eax;
L_40fd91: /* 40fd91: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_40fd93: /* 40fd93: jne 0x40fd72 */
  if (!zf) goto L_40fd72;
L_40fd95: /* 40fd95: cmp byte ptr [esi], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd98: jne 0x40fda7 */
  if (!zf) goto L_40fda7;
L_40fd9a: /* 40fd9a: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 40fd9d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fd9f: je 0x40fda7 */
  if (zf) goto L_40fda7;
L_40fda1: /* 40fda1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fda2: jmp 0x40febb */
  goto L_40febb;
L_40fda7: /* 40fda7: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40fda9: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fdab: je 0x40fdb5 */
  if (zf) goto L_40fdb5;
L_40fdad: /* 40fdad: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fdaf: je 0x40fdb5 */
  if (zf) goto L_40fdb5;
L_40fdb1: /* 40fdb1: cmp al, 0x3a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fdb3: jne 0x40fdba */
  if (!zf) goto L_40fdba;
L_40fdb5: /* 40fdb5: mov ebx, esi */
  ebx = esi;
/* 40fdb7: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 40fdb9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_40fdba: /* 40fdba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fdbb: call 0x40fcd4 */
  esp -= 4; W32(esp, 0x40fdc0u); SPILL(); f_40fcd4(); if (g_unwind) return; RELOAD();
/* 40fdc0: mov edi, eax */
  edi = eax;
/* 40fdc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fdc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fdc5: je 0x40feb8 */
  if (zf) goto L_40feb8;
L_40fdcb: /* 40fdcb: mov eax, dword ptr [0x44f3f8] */
  eax = R32((uint32_t)(0x44f3f8u));
/* 40fdd0: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_40fdd3: /* 40fdd3: push 0x43e37c */
  { uint32_t v = 0x43e37cu; esp -= 4; W32(esp, v); }
/* 40fdd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fdd9: call 0x411e96 */
  esp -= 4; W32(esp, 0x40fddeu); SPILL(); f_411e96(); if (g_unwind) return; RELOAD();
/* 40fdde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fde0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fde1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fde2: je 0x40fe58 */
  if (zf) goto L_40fe58;
L_40fde4: /* 40fde4: push 0x43e91c */
  { uint32_t v = 0x43e91cu; esp -= 4; W32(esp, v); }
/* 40fde9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fdea: call 0x411e96 */
  esp -= 4; W32(esp, 0x40fdefu); SPILL(); f_411e96(); if (g_unwind) return; RELOAD();
/* 40fdef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fdf1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fdf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fdf3: je 0x40fe58 */
  if (zf) goto L_40fe58;
L_40fdf5: /* 40fdf5: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40fdf7: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fdf9: je 0x40fe1a */
  if (zf) goto L_40fe1a;
L_40fdfb: /* 40fdfb: cmp al, 0x3a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fdfd: je 0x40fe1a */
  if (zf) goto L_40fe1a;
L_40fdff: /* 40fdff: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fe01: je 0x40fe1a */
  if (zf) goto L_40fe1a;
L_40fe03: /* 40fe03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fe04: call 0x406e43 */
  esp -= 4; W32(esp, 0x40fe09u); SPILL(); f_406e43(); if (g_unwind) return; RELOAD();
/* 40fe09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe0c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 40fe0f: je 0x40fe7b */
  if (zf) goto L_40fe7b;
L_40fe11: /* 40fe11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fe12: call 0x40fc99 */
  esp -= 4; W32(esp, 0x40fe17u); SPILL(); f_40fc99(); if (g_unwind) return; RELOAD();
/* 40fe17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe18: jmp 0x40fe51 */
  goto L_40fe51;
L_40fe1a: /* 40fe1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fe1b: call 0x402493 */
  esp -= 4; W32(esp, 0x40fe20u); SPILL(); hle_strlen(); RELOAD();
/* 40fe20: lea eax, [eax + ebx + 1] */
  eax = (uint32_t)(eax + ebx + 0x1u);
/* 40fe24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fe25: call 0x4010eb */
  esp -= 4; W32(esp, 0x40fe2au); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40fe2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe2e: je 0x40fe7b */
  if (zf) goto L_40fe7b;
L_40fe30: /* 40fe30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fe31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40fe32: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40fe35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fe36: call 0x411e03 */
  esp -= 4; W32(esp, 0x40fe3bu); SPILL(); f_411e03(); if (g_unwind) return; RELOAD();
/* 40fe3b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40fe3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40fe40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fe41: call 0x404b3a */
  esp -= 4; W32(esp, 0x40fe46u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40fe46: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40fe48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fe49: call 0x40fc99 */
  esp -= 4; W32(esp, 0x40fe4eu); SPILL(); f_40fc99(); if (g_unwind) return; RELOAD();
/* 40fe4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40fe51: /* 40fe51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe53: jne 0x40fe7b */
  if (!zf) goto L_40fe7b;
L_40fe55: /* 40fe55: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_40fe58: /* 40fe58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40fe5a: call 0x40fcd4 */
  esp -= 4; W32(esp, 0x40fe5fu); SPILL(); f_40fcd4(); if (g_unwind) return; RELOAD();
/* 40fe5f: mov edi, eax */
  edi = eax;
/* 40fe61: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe64: jne 0x40fdd3 */
  if (!zf) goto L_40fdd3;
L_40fe6a: /* 40fe6a: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fe6d: je 0x40feb8 */
  if (zf) goto L_40feb8;
L_40fe6f: /* 40fe6f: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40fe72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe74: je 0x40fe80 */
  if (zf) goto L_40fe80;
L_40fe76: /* 40fe76: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 40fe79: jmp 0x40fe86 */
  goto L_40fe86;
L_40fe7b: /* 40fe7b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40fe7e: jmp 0x40fec1 */
  goto L_40fec1;
L_40fe80: /* 40fe80: mov esi, dword ptr [0x44f3ec] */
  esi = R32((uint32_t)(0x44f3ecu));
L_40fe86: /* 40fe86: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fe88: je 0x40feb4 */
  if (zf) goto L_40feb4;
L_40fe8a: /* 40fe8a: jmp 0x40fead */
  goto L_40fead;
L_40fe8c: /* 40fe8c: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40fe8e: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 40fe90: call 0x411cb8 */
  esp -= 4; W32(esp, 0x40fe95u); SPILL(); f_411cb8(); if (g_unwind) return; RELOAD();
/* 40fe95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40fe97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fe99: jge 0x40fea3 */
  if ((sf == of)) goto L_40fea3;
L_40fe9b: /* 40fe9b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 40fe9d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40fe9f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 40fea1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_40fea3: /* 40fea3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 40fea6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fea8: jne 0x40fe8c */
  if (!zf) goto L_40fe8c;
L_40feaa: /* 40feaa: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_40fead: /* 40fead: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 40feb0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40feb2: jne 0x40fe8c */
  if (!zf) goto L_40fe8c;
L_40feb4: /* 40feb4: xor eax, eax */
  eax = 0;
/* 40feb6: jmp 0x40fec1 */
  goto L_40fec1;
L_40feb8: /* 40feb8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
L_40febb: /* 40febb: call 0x40fc99 */
  esp -= 4; W32(esp, 0x40fec0u); SPILL(); f_40fc99(); if (g_unwind) return; RELOAD();
/* 40fec0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40fec1: /* 40fec1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40fec2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40fec3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40fec4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40fec5: ret  */
  esp += 4; SPILL(); return;
}

void f_40fec6(void) {
  LOAD_REGS();
L_40fec6: /* 40fec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40fec7: mov esi, dword ptr [0x4491ec] */
  esi = R32((uint32_t)(0x4491ecu));
/* 40fecd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40fece: xor edi, edi */
  edi = 0;
/* 40fed0: mov dword ptr [0x44f3f8], edi */
  W32((uint32_t)(0x44f3f8u), edi);
/* 40fed6: mov dword ptr [0x44f3ec], edi */
  W32((uint32_t)(0x44f3ecu), edi);
/* 40fedc: jmp 0x40fef8 */
  goto L_40fef8;
L_40fede: /* 40fede: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40fee0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40fee2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40fee3: cmp cl, 0x22 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40fee6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40fee8: jne 0x40ff05 */
  if (!zf) goto L_40ff05;
L_40feea: /* 40feea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_40feeb: /* 40feeb: call 0x40fc99 */
  esp -= 4; W32(esp, 0x40fef0u); SPILL(); f_40fc99(); if (g_unwind) return; RELOAD();
L_40fef0: /* 40fef0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40fef2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40fef3: jne 0x40ff39 */
  if (!zf) goto L_40ff39;
L_40fef5: /* 40fef5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_40fef8: /* 40fef8: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40fefa: jne 0x40fede */
  if (!zf) goto L_40fede;
L_40fefc: /* 40fefc: mov eax, dword ptr [0x44f3ec] */
  eax = R32((uint32_t)(0x44f3ecu));
/* 40ff01: xor esi, esi */
  esi = 0;
/* 40ff03: jmp 0x40ff23 */
  goto L_40ff23;
L_40ff05: /* 40ff05: push 0x43e920 */
  { uint32_t v = 0x43e920u; esp -= 4; W32(esp, v); }
/* 40ff0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ff0b: call 0x412004 */
  esp -= 4; W32(esp, 0x40ff10u); SPILL(); f_412004(); if (g_unwind) return; RELOAD();
/* 40ff10: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ff13: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ff14: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40ff16: je 0x40feeb */
  if (zf) goto L_40feeb;
L_40ff18: /* 40ff18: call 0x40fd5e */
  esp -= 4; W32(esp, 0x40ff1du); SPILL(); f_40fd5e(); if (g_unwind) return; RELOAD();
/* 40ff1d: jmp 0x40fef0 */
  goto L_40fef0;
L_40ff1f: /* 40ff1f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 40ff22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40ff23: /* 40ff23: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff25: jne 0x40ff1f */
  if (!zf) goto L_40ff1f;
L_40ff27: /* 40ff27: lea eax, [esi*4 + 4] */
  eax = (uint32_t)(esi*4 + 0x4u);
/* 40ff2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ff2f: call 0x4010eb */
  esp -= 4; W32(esp, 0x40ff34u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40ff34: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff36: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ff37: jne 0x40ff3e */
  if (!zf) goto L_40ff3e;
L_40ff39: /* 40ff39: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40ff3c: jmp 0x40ff85 */
  goto L_40ff85;
L_40ff3e: /* 40ff3e: mov ecx, dword ptr [0x44f3ec] */
  ecx = R32((uint32_t)(0x44f3ecu));
/* 40ff44: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff46: mov dword ptr [0x4491ec], eax */
  W32((uint32_t)(0x4491ecu), eax);
/* 40ff4b: mov dword ptr [0x4491e8], esi */
  W32((uint32_t)(0x4491e8u), esi);
/* 40ff51: mov edx, ecx */
  edx = ecx;
/* 40ff53: je 0x40ff63 */
  if (zf) goto L_40ff63;
L_40ff55: /* 40ff55: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 40ff57: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 40ff59: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 40ff5c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ff5f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff61: jne 0x40ff55 */
  if (!zf) goto L_40ff55;
L_40ff63: /* 40ff63: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 40ff65: jmp 0x40ff7d */
  goto L_40ff7d;
L_40ff67: /* 40ff67: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 40ff6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ff6b: mov dword ptr [0x44f3ec], ecx */
  W32((uint32_t)(0x44f3ecu), ecx);
/* 40ff71: call 0x401156 */
  esp -= 4; W32(esp, 0x40ff76u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40ff76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ff77: mov ecx, dword ptr [0x44f3ec] */
  ecx = R32((uint32_t)(0x44f3ecu));
L_40ff7d: /* 40ff7d: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ff7f: mov eax, ecx */
  eax = ecx;
/* 40ff81: jne 0x40ff67 */
  if (!zf) goto L_40ff67;
L_40ff83: /* 40ff83: xor eax, eax */
  eax = 0;
L_40ff85: /* 40ff85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40ff86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40ff87: ret  */
  esp += 4; SPILL(); return;
}

void f_40ff88(void) {
  LOAD_REGS();
L_40ff88: /* 40ff88: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40ff8a: call 0x4010eb */
  esp -= 4; W32(esp, 0x40ff8fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40ff8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ff91: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ff92: jne 0x40ff98 */
  if (!zf) goto L_40ff98;
L_40ff94: /* 40ff94: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40ff97: ret  */
  esp += 4; SPILL(); return;
L_40ff98: /* 40ff98: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 40ff9c: and dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 40ffa0: cmp dword ptr [0x44f3fc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3fcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ffa7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40ffa9: je 0x40ffb6 */
  if (zf) goto L_40ffb6;
L_40ffab: /* 40ffab: mov ecx, dword ptr [0x44f408] */
  ecx = R32((uint32_t)(0x44f408u));
/* 40ffb1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 40ffb4: jmp 0x40ffbb */
  goto L_40ffbb;
L_40ffb6: /* 40ffb6: mov dword ptr [0x44f3fc], eax */
  W32((uint32_t)(0x44f3fcu), eax);
L_40ffbb: /* 40ffbb: mov dword ptr [0x44f408], eax */
  W32((uint32_t)(0x44f408u), eax);
/* 40ffc0: xor eax, eax */
  eax = 0;
/* 40ffc2: ret  */
  esp += 4; SPILL(); return;
}

void f_40ffc3(void) {
  LOAD_REGS();
L_40ffc3: /* 40ffc3: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ffc8: je 0x410021 */
  if (zf) goto L_410021;
L_40ffca: /* 40ffca: cmp dword ptr [0x44f404], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f404u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ffd1: jne 0x40ffe7 */
  if (!zf) goto L_40ffe7;
L_40ffd3: /* 40ffd3: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 40ffd8: call 0x4010eb */
  esp -= 4; W32(esp, 0x40ffddu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40ffdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ffdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ffe0: mov dword ptr [0x44f404], eax */
  W32((uint32_t)(0x44f404u), eax);
/* 40ffe5: je 0x41004a */
  if (zf) goto L_41004a;
L_40ffe7: /* 40ffe7: mov eax, dword ptr [0x44f400] */
  eax = R32((uint32_t)(0x44f400u));
/* 40ffec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ffee: je 0x40fffe */
  if (zf) goto L_40fffe;
L_40fff0: /* 40fff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40fff1: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x40fff7u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* 40fff7: and dword ptr [0x44f400], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f400u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f400u), r);
  }
L_40fffe: /* 40fffe: push dword ptr [0x44f404] */
  { uint32_t v = R32((uint32_t)(0x44f404u)); esp -= 4; W32(esp, v); }
/* 410004: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 410008: call dword ptr [0x439078] */
  esp -= 4; W32(esp, 0x41000eu); SPILL(); call_ind(R32(0x439078u)); if (g_unwind) return; /* KERNEL32!FindFirstFileW */ RELOAD();
/* 41000e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410011: mov dword ptr [0x44f400], eax */
  W32((uint32_t)(0x44f400u), eax);
/* 410016: je 0x41004a */
  if (zf) goto L_41004a;
L_410018: /* 410018: mov eax, dword ptr [0x44f404] */
  eax = R32((uint32_t)(0x44f404u));
/* 41001d: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410020: ret  */
  esp += 4; SPILL(); return;
L_410021: /* 410021: push dword ptr [0x44f404] */
  { uint32_t v = R32((uint32_t)(0x44f404u)); esp -= 4; W32(esp, v); }
/* 410027: push dword ptr [0x44f400] */
  { uint32_t v = R32((uint32_t)(0x44f400u)); esp -= 4; W32(esp, v); }
/* 41002d: call dword ptr [0x439074] */
  esp -= 4; W32(esp, 0x410033u); SPILL(); call_ind(R32(0x439074u)); if (g_unwind) return; /* KERNEL32!FindNextFileW */ RELOAD();
/* 410033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410035: jne 0x410018 */
  if (!zf) goto L_410018;
L_410037: /* 410037: push dword ptr [0x44f400] */
  { uint32_t v = R32((uint32_t)(0x44f400u)); esp -= 4; W32(esp, v); }
/* 41003d: call dword ptr [0x439070] */
  esp -= 4; W32(esp, 0x410043u); SPILL(); call_ind(R32(0x439070u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* 410043: and dword ptr [0x44f400], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f400u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f400u), r);
  }
L_41004a: /* 41004a: xor eax, eax */
  eax = 0;
/* 41004c: ret  */
  esp += 4; SPILL(); return;
}

void f_41004d(void) {
  LOAD_REGS();
L_41004d: /* 41004d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41004e: mov ebp, esp */
  ebp = esp;
/* 410050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410052: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410056: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 410059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41005a: xor edi, edi */
  edi = 0;
/* 41005c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 41005f: jmp 0x41007b */
  goto L_41007b;
L_410061: /* 410061: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 410064: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410068: je 0x41007f */
  if (zf) goto L_41007f;
L_41006a: /* 41006a: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41006e: je 0x41007f */
  if (zf) goto L_41007f;
L_410070: /* 410070: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410074: je 0x410085 */
  if (zf) goto L_410085;
L_410076: /* 410076: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410077: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410078: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_41007b: /* 41007b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41007d: jne 0x410061 */
  if (!zf) goto L_410061;
L_41007f: /* 41007f: cmp word ptr [esi], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410083: jne 0x410098 */
  if (!zf) goto L_410098;
L_410085: /* 410085: lea eax, [ecx + 2] */
  eax = (uint32_t)(ecx + 0x2u);
/* 410088: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41008a: je 0x410098 */
  if (zf) goto L_410098;
L_41008c: /* 41008c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41008d: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410092u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410092: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410093: jmp 0x4101d5 */
  goto L_4101d5;
L_410098: /* 410098: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41009b: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41009f: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a1: /* 4100a1: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100a5: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a7: /* 4100a7: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100ab: jne 0x4100b4 */
  if (!zf) goto L_4100b4;
L_4100ad: /* 4100ad: mov edi, esi */
  edi = esi;
/* 4100af: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4100b1: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 4100b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_4100b4: /* 4100b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4100b6: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x4100bbu); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 4100bb: mov ebx, eax */
  ebx = eax;
/* 4100bd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100c0: je 0x4101cb */
  if (zf) goto L_4101cb;
L_4100c6: /* 4100c6: mov eax, dword ptr [0x44f408] */
  eax = R32((uint32_t)(0x44f408u));
/* 4100cb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4100ce: /* 4100ce: push 0x43e92c */
  { uint32_t v = 0x43e92cu; esp -= 4; W32(esp, v); }
/* 4100d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100d4: call 0x40134d */
  esp -= 4; W32(esp, 0x4100d9u); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dd: je 0x410170 */
  if (zf) goto L_410170;
L_4100e3: /* 4100e3: push 0x43e924 */
  { uint32_t v = 0x43e924u; esp -= 4; W32(esp, v); }
/* 4100e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100e9: call 0x40134d */
  esp -= 4; W32(esp, 0x4100eeu); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f2: je 0x410170 */
  if (zf) goto L_410170;
L_4100f4: /* 4100f4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4100f7: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100fb: je 0x41012a */
  if (zf) goto L_41012a;
L_4100fd: /* 4100fd: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410101: je 0x41012a */
  if (zf) goto L_41012a;
L_410103: /* 410103: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410107: je 0x41012a */
  if (zf) goto L_41012a;
L_410109: /* 410109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41010a: call 0x404047 */
  esp -= 4; W32(esp, 0x41010fu); SPILL(); f_404047(); if (g_unwind) return; RELOAD();
/* 41010f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410111: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410112: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 410115: je 0x410122 */
  if (zf) goto L_410122;
L_410117: /* 410117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410118: call 0x40ff88 */
  esp -= 4; W32(esp, 0x41011du); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 41011d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41011f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410120: je 0x41016d */
  if (zf) goto L_41016d;
L_410122: /* 410122: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 410125: jmp 0x4101d4 */
  goto L_4101d4;
L_41012a: /* 41012a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41012b: call 0x4013b8 */
  esp -= 4; W32(esp, 0x410130u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 410130: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410132: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 410136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410137: call 0x4010eb */
  esp -= 4; W32(esp, 0x41013cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41013c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41013e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41013f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410140: je 0x410122 */
  if (zf) goto L_410122;
L_410142: /* 410142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410143: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410144: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 410147: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 41014a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41014b: call 0x401a95 */
  esp -= 4; W32(esp, 0x410150u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 410150: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410152: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410156: call 0x4013ce */
  esp -= 4; W32(esp, 0x41015bu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 41015b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41015d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41015e: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410163u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410163: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410168: jne 0x410122 */
  if (!zf) goto L_410122;
L_41016a: /* 41016a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_41016d: /* 41016d: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_410170: /* 410170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410172: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x410177u); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 410177: mov ebx, eax */
  ebx = eax;
/* 410179: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41017b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41017c: jne 0x4100ce */
  if (!zf) goto L_4100ce;
L_410182: /* 410182: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410185: je 0x4101cb */
  if (zf) goto L_4101cb;
L_410187: /* 410187: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41018a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41018c: je 0x410193 */
  if (zf) goto L_410193;
L_41018e: /* 41018e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 410191: jmp 0x410199 */
  goto L_410199;
L_410193: /* 410193: mov esi, dword ptr [0x44f3fc] */
  esi = R32((uint32_t)(0x44f3fcu));
L_410199: /* 410199: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41019b: je 0x4101c7 */
  if (zf) goto L_4101c7;
L_41019d: /* 41019d: jmp 0x4101c0 */
  goto L_4101c0;
L_41019f: /* 41019f: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4101a1: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 4101a3: call 0x4019b9 */
  esp -= 4; W32(esp, 0x4101a8u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 4101a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4101aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ac: jge 0x4101b6 */
  if ((sf == of)) goto L_4101b6;
L_4101ae: /* 4101ae: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4101b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4101b2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4101b4: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_4101b6: /* 4101b6: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 4101b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101bb: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101bd: /* 4101bd: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_4101c0: /* 4101c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4101c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101c5: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101c7: /* 4101c7: xor eax, eax */
  eax = 0;
/* 4101c9: jmp 0x4101d4 */
  goto L_4101d4;
L_4101cb: /* 4101cb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4101ce: call 0x40ff88 */
  esp -= 4; W32(esp, 0x4101d3u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 4101d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4101d4: /* 4101d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4101d5: /* 4101d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4101d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4101d7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4101d8: ret  */
  esp += 4; SPILL(); return;
}

void f_410050(void) {
  LOAD_REGS();
L_410050: /* 410050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410052: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410055: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410056: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 410059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41005a: xor edi, edi */
  edi = 0;
/* 41005c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 41005f: jmp 0x41007b */
  goto L_41007b;
L_410061: /* 410061: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 410064: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410068: je 0x41007f */
  if (zf) goto L_41007f;
L_41006a: /* 41006a: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41006e: je 0x41007f */
  if (zf) goto L_41007f;
L_410070: /* 410070: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410074: je 0x410085 */
  if (zf) goto L_410085;
L_410076: /* 410076: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410077: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410078: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_41007b: /* 41007b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41007d: jne 0x410061 */
  if (!zf) goto L_410061;
L_41007f: /* 41007f: cmp word ptr [esi], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410083: jne 0x410098 */
  if (!zf) goto L_410098;
L_410085: /* 410085: lea eax, [ecx + 2] */
  eax = (uint32_t)(ecx + 0x2u);
/* 410088: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41008a: je 0x410098 */
  if (zf) goto L_410098;
L_41008c: /* 41008c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41008d: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410092u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410092: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410093: jmp 0x4101d5 */
  goto L_4101d5;
L_410098: /* 410098: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41009b: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41009f: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a1: /* 4100a1: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100a5: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a7: /* 4100a7: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100ab: jne 0x4100b4 */
  if (!zf) goto L_4100b4;
L_4100ad: /* 4100ad: mov edi, esi */
  edi = esi;
/* 4100af: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4100b1: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 4100b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_4100b4: /* 4100b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4100b6: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x4100bbu); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 4100bb: mov ebx, eax */
  ebx = eax;
/* 4100bd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100c0: je 0x4101cb */
  if (zf) goto L_4101cb;
L_4100c6: /* 4100c6: mov eax, dword ptr [0x44f408] */
  eax = R32((uint32_t)(0x44f408u));
/* 4100cb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4100ce: /* 4100ce: push 0x43e92c */
  { uint32_t v = 0x43e92cu; esp -= 4; W32(esp, v); }
/* 4100d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100d4: call 0x40134d */
  esp -= 4; W32(esp, 0x4100d9u); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dd: je 0x410170 */
  if (zf) goto L_410170;
L_4100e3: /* 4100e3: push 0x43e924 */
  { uint32_t v = 0x43e924u; esp -= 4; W32(esp, v); }
/* 4100e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100e9: call 0x40134d */
  esp -= 4; W32(esp, 0x4100eeu); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f2: je 0x410170 */
  if (zf) goto L_410170;
L_4100f4: /* 4100f4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4100f7: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100fb: je 0x41012a */
  if (zf) goto L_41012a;
L_4100fd: /* 4100fd: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410101: je 0x41012a */
  if (zf) goto L_41012a;
L_410103: /* 410103: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410107: je 0x41012a */
  if (zf) goto L_41012a;
L_410109: /* 410109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41010a: call 0x404047 */
  esp -= 4; W32(esp, 0x41010fu); SPILL(); f_404047(); if (g_unwind) return; RELOAD();
/* 41010f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410111: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410112: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 410115: je 0x410122 */
  if (zf) goto L_410122;
L_410117: /* 410117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410118: call 0x40ff88 */
  esp -= 4; W32(esp, 0x41011du); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 41011d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41011f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410120: je 0x41016d */
  if (zf) goto L_41016d;
L_410122: /* 410122: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 410125: jmp 0x4101d4 */
  goto L_4101d4;
L_41012a: /* 41012a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41012b: call 0x4013b8 */
  esp -= 4; W32(esp, 0x410130u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 410130: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410132: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 410136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410137: call 0x4010eb */
  esp -= 4; W32(esp, 0x41013cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41013c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41013e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41013f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410140: je 0x410122 */
  if (zf) goto L_410122;
L_410142: /* 410142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410143: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410144: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 410147: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 41014a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41014b: call 0x401a95 */
  esp -= 4; W32(esp, 0x410150u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 410150: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410152: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410156: call 0x4013ce */
  esp -= 4; W32(esp, 0x41015bu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 41015b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41015d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41015e: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410163u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410163: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410168: jne 0x410122 */
  if (!zf) goto L_410122;
L_41016a: /* 41016a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_41016d: /* 41016d: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_410170: /* 410170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410172: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x410177u); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 410177: mov ebx, eax */
  ebx = eax;
/* 410179: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41017b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41017c: jne 0x4100ce */
  if (!zf) goto L_4100ce;
L_410182: /* 410182: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410185: je 0x4101cb */
  if (zf) goto L_4101cb;
L_410187: /* 410187: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41018a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41018c: je 0x410193 */
  if (zf) goto L_410193;
L_41018e: /* 41018e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 410191: jmp 0x410199 */
  goto L_410199;
L_410193: /* 410193: mov esi, dword ptr [0x44f3fc] */
  esi = R32((uint32_t)(0x44f3fcu));
L_410199: /* 410199: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41019b: je 0x4101c7 */
  if (zf) goto L_4101c7;
L_41019d: /* 41019d: jmp 0x4101c0 */
  goto L_4101c0;
L_41019f: /* 41019f: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4101a1: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 4101a3: call 0x4019b9 */
  esp -= 4; W32(esp, 0x4101a8u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 4101a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4101aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ac: jge 0x4101b6 */
  if ((sf == of)) goto L_4101b6;
L_4101ae: /* 4101ae: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4101b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4101b2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4101b4: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_4101b6: /* 4101b6: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 4101b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101bb: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101bd: /* 4101bd: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_4101c0: /* 4101c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4101c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101c5: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101c7: /* 4101c7: xor eax, eax */
  eax = 0;
/* 4101c9: jmp 0x4101d4 */
  goto L_4101d4;
L_4101cb: /* 4101cb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4101ce: call 0x40ff88 */
  esp -= 4; W32(esp, 0x4101d3u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 4101d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4101d4: /* 4101d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4101d5: /* 4101d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4101d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4101d7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4101d8: ret  */
  esp += 4; SPILL(); return;
}

void f_410061(void) {
  LOAD_REGS();
L_410061: /* 410061: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 410064: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410068: je 0x41007f */
  if (zf) goto L_41007f;
L_41006a: /* 41006a: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41006e: je 0x41007f */
  if (zf) goto L_41007f;
L_410070: /* 410070: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410074: je 0x410085 */
  if (zf) goto L_410085;
L_410076: /* 410076: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410077: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410078: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 41007b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41007d: jne 0x410061 */
  if (!zf) goto L_410061;
L_41007f: /* 41007f: cmp word ptr [esi], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410083: jne 0x410098 */
  if (!zf) goto L_410098;
L_410085: /* 410085: lea eax, [ecx + 2] */
  eax = (uint32_t)(ecx + 0x2u);
/* 410088: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41008a: je 0x410098 */
  if (zf) goto L_410098;
L_41008c: /* 41008c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41008d: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410092u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410092: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410093: jmp 0x4101d5 */
  goto L_4101d5;
L_410098: /* 410098: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 41009b: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41009f: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a1: /* 4100a1: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100a5: je 0x4100ad */
  if (zf) goto L_4100ad;
L_4100a7: /* 4100a7: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100ab: jne 0x4100b4 */
  if (!zf) goto L_4100b4;
L_4100ad: /* 4100ad: mov edi, esi */
  edi = esi;
/* 4100af: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4100b1: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 4100b3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_4100b4: /* 4100b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4100b6: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x4100bbu); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 4100bb: mov ebx, eax */
  ebx = eax;
/* 4100bd: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100c0: je 0x4101cb */
  if (zf) goto L_4101cb;
L_4100c6: /* 4100c6: mov eax, dword ptr [0x44f408] */
  eax = R32((uint32_t)(0x44f408u));
/* 4100cb: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4100ce: /* 4100ce: push 0x43e92c */
  { uint32_t v = 0x43e92cu; esp -= 4; W32(esp, v); }
/* 4100d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100d4: call 0x40134d */
  esp -= 4; W32(esp, 0x4100d9u); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100dd: je 0x410170 */
  if (zf) goto L_410170;
L_4100e3: /* 4100e3: push 0x43e924 */
  { uint32_t v = 0x43e924u; esp -= 4; W32(esp, v); }
/* 4100e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4100e9: call 0x40134d */
  esp -= 4; W32(esp, 0x4100eeu); SPILL(); f_40134d(); if (g_unwind) return; RELOAD();
/* 4100ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4100f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4100f2: je 0x410170 */
  if (zf) goto L_410170;
L_4100f4: /* 4100f4: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4100f7: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4100fb: je 0x41012a */
  if (zf) goto L_41012a;
L_4100fd: /* 4100fd: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410101: je 0x41012a */
  if (zf) goto L_41012a;
L_410103: /* 410103: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 410107: je 0x41012a */
  if (zf) goto L_41012a;
L_410109: /* 410109: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41010a: call 0x404047 */
  esp -= 4; W32(esp, 0x41010fu); SPILL(); f_404047(); if (g_unwind) return; RELOAD();
/* 41010f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410111: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410112: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 410115: je 0x410122 */
  if (zf) goto L_410122;
L_410117: /* 410117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410118: call 0x40ff88 */
  esp -= 4; W32(esp, 0x41011du); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 41011d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41011f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410120: je 0x41016d */
  if (zf) goto L_41016d;
L_410122: /* 410122: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 410125: jmp 0x4101d4 */
  goto L_4101d4;
L_41012a: /* 41012a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41012b: call 0x4013b8 */
  esp -= 4; W32(esp, 0x410130u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 410130: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410132: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 410136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410137: call 0x4010eb */
  esp -= 4; W32(esp, 0x41013cu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 41013c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41013e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41013f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410140: je 0x410122 */
  if (zf) goto L_410122;
L_410142: /* 410142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410143: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410144: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 410147: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 41014a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41014b: call 0x401a95 */
  esp -= 4; W32(esp, 0x410150u); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 410150: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 410152: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410156: call 0x4013ce */
  esp -= 4; W32(esp, 0x41015bu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 41015b: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41015d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41015e: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410163u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 410163: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410168: jne 0x410122 */
  if (!zf) goto L_410122;
L_41016a: /* 41016a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_41016d: /* 41016d: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_410170: /* 410170: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410172: call 0x40ffc3 */
  esp -= 4; W32(esp, 0x410177u); SPILL(); f_40ffc3(); if (g_unwind) return; RELOAD();
/* 410177: mov ebx, eax */
  ebx = eax;
/* 410179: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41017b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41017c: jne 0x4100ce */
  if (!zf) goto L_4100ce;
L_410182: /* 410182: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410185: je 0x4101cb */
  if (zf) goto L_4101cb;
L_410187: /* 410187: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41018a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41018c: je 0x410193 */
  if (zf) goto L_410193;
L_41018e: /* 41018e: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 410191: jmp 0x410199 */
  goto L_410199;
L_410193: /* 410193: mov esi, dword ptr [0x44f3fc] */
  esi = R32((uint32_t)(0x44f3fcu));
L_410199: /* 410199: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41019b: je 0x4101c7 */
  if (zf) goto L_4101c7;
L_41019d: /* 41019d: jmp 0x4101c0 */
  goto L_4101c0;
L_41019f: /* 41019f: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4101a1: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 4101a3: call 0x4019b9 */
  esp -= 4; W32(esp, 0x4101a8u); SPILL(); f_4019b9(); if (g_unwind) return; RELOAD();
/* 4101a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4101aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4101ac: jge 0x4101b6 */
  if ((sf == of)) goto L_4101b6;
L_4101ae: /* 4101ae: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4101b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4101b2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4101b4: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_4101b6: /* 4101b6: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 4101b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101bb: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101bd: /* 4101bd: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
L_4101c0: /* 4101c0: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 4101c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4101c5: jne 0x41019f */
  if (!zf) goto L_41019f;
L_4101c7: /* 4101c7: xor eax, eax */
  eax = 0;
/* 4101c9: jmp 0x4101d4 */
  goto L_4101d4;
L_4101cb: /* 4101cb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4101ce: call 0x40ff88 */
  esp -= 4; W32(esp, 0x4101d3u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
/* 4101d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4101d4: /* 4101d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4101d5: /* 4101d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4101d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4101d7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4101d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4101d9(void) {
  LOAD_REGS();
L_4101d9: /* 4101d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4101da: mov esi, dword ptr [0x4491f0] */
  esi = R32((uint32_t)(0x4491f0u));
/* 4101e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4101e1: xor edi, edi */
  edi = 0;
/* 4101e3: mov dword ptr [0x44f408], edi */
  W32((uint32_t)(0x44f408u), edi);
/* 4101e9: mov dword ptr [0x44f3fc], edi */
  W32((uint32_t)(0x44f3fcu), edi);
/* 4101ef: jmp 0x41022f */
  goto L_41022f;
L_4101f1: /* 4101f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4101f3: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4101f6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4101f9: cmp cx, 0x22 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4101fd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4101ff: jne 0x410204 */
  if (!zf) goto L_410204;
L_410201: /* 410201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410202: jmp 0x410222 */
  goto L_410222;
L_410204: /* 410204: push 0x43e930 */
  { uint32_t v = 0x43e930u; esp -= 4; W32(esp, v); }
/* 410209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41020a: call 0x402730 */
  esp -= 4; W32(esp, 0x41020fu); SPILL(); f_402730(); if (g_unwind) return; RELOAD();
/* 41020f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410211: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410212: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410213: je 0x410220 */
  if (zf) goto L_410220;
L_410215: /* 410215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410216: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 410218: call 0x41004d */
  esp -= 4; W32(esp, 0x41021du); SPILL(); f_41004d(); if (g_unwind) return; RELOAD();
/* 41021d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41021e: jmp 0x410227 */
  goto L_410227;
L_410220: /* 410220: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
L_410222: /* 410222: call 0x40ff88 */
  esp -= 4; W32(esp, 0x410227u); SPILL(); f_40ff88(); if (g_unwind) return; RELOAD();
L_410227: /* 410227: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410229: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41022a: jne 0x410256 */
  if (!zf) goto L_410256;
L_41022c: /* 41022c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_41022f: /* 41022f: cmp dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410231: jne 0x4101f1 */
  if (!zf) goto L_4101f1;
L_410233: /* 410233: mov eax, dword ptr [0x44f3fc] */
  eax = R32((uint32_t)(0x44f3fcu));
/* 410238: xor esi, esi */
  esi = 0;
/* 41023a: jmp 0x410240 */
  goto L_410240;
L_41023c: /* 41023c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 41023f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_410240: /* 410240: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410242: jne 0x41023c */
  if (!zf) goto L_41023c;
L_410244: /* 410244: lea eax, [esi*4 + 4] */
  eax = (uint32_t)(esi*4 + 0x4u);
/* 41024b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41024c: call 0x4010eb */
  esp -= 4; W32(esp, 0x410251u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 410251: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410253: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410254: jne 0x41025b */
  if (!zf) goto L_41025b;
L_410256: /* 410256: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 410259: jmp 0x4102a2 */
  goto L_4102a2;
L_41025b: /* 41025b: mov ecx, dword ptr [0x44f3fc] */
  ecx = R32((uint32_t)(0x44f3fcu));
/* 410261: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410263: mov dword ptr [0x4491f0], eax */
  W32((uint32_t)(0x4491f0u), eax);
/* 410268: mov dword ptr [0x4491e8], esi */
  W32((uint32_t)(0x4491e8u), esi);
/* 41026e: mov edx, ecx */
  edx = ecx;
/* 410270: je 0x410280 */
  if (zf) goto L_410280;
L_410272: /* 410272: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 410274: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 410276: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 410279: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41027c: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41027e: jne 0x410272 */
  if (!zf) goto L_410272;
L_410280: /* 410280: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 410282: jmp 0x41029a */
  goto L_41029a;
L_410284: /* 410284: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 410287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410288: mov dword ptr [0x44f3fc], ecx */
  W32((uint32_t)(0x44f3fcu), ecx);
/* 41028e: call 0x401156 */
  esp -= 4; W32(esp, 0x410293u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 410293: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410294: mov ecx, dword ptr [0x44f3fc] */
  ecx = R32((uint32_t)(0x44f3fcu));
L_41029a: /* 41029a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41029c: mov eax, ecx */
  eax = ecx;
/* 41029e: jne 0x410284 */
  if (!zf) goto L_410284;
L_4102a0: /* 4102a0: xor eax, eax */
  eax = 0;
L_4102a2: /* 4102a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4102a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4102a4: ret  */
  esp += 4; SPILL(); return;
}

void f_4102a5(void) {
  LOAD_REGS();
L_4102a5: /* 4102a5: call 0x40137f */
  esp -= 4; W32(esp, 0x4102aau); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4102aa: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4102ad: ret  */
  esp += 4; SPILL(); return;
}

void f_4102ae(void) {
  LOAD_REGS();
L_4102ae: /* 4102ae: call 0x40137f */
  esp -= 4; W32(esp, 0x4102b3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4102b3: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4102b6: ret  */
  esp += 4; SPILL(); return;
}

void f_4102b7(void) {
  LOAD_REGS();
L_4102b7: /* 4102b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4102b8: call 0x40137f */
  esp -= 4; W32(esp, 0x4102bdu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4102bd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4102c1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4102c4: xor esi, esi */
  esi = 0;
L_4102c6: /* 4102c6: cmp ecx, dword ptr [esi*8 + 0x44bb10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi*8 + 0x44bb10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4102cd: je 0x4102ed */
  if (zf) goto L_4102ed;
L_4102cf: /* 4102cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4102d0: cmp esi, 0x2d */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4102d3: jb 0x4102c6 */
  if (cf) goto L_4102c6;
L_4102d5: /* 4102d5: cmp ecx, 0x13 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4102d8: jb 0x4102fe */
  if (cf) goto L_4102fe;
L_4102da: /* 4102da: cmp ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4102dd: ja 0x4102fe */
  if ((!cf && !zf)) goto L_4102fe;
L_4102df: /* 4102df: call 0x40137f */
  esp -= 4; W32(esp, 0x4102e4u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4102e4: mov dword ptr [eax + 8], 0xd */
  W32((uint32_t)(eax + 0x8u), 0xdu);
/* 4102eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4102ec: ret  */
  esp += 4; SPILL(); return;
L_4102ed: /* 4102ed: call 0x40137f */
  esp -= 4; W32(esp, 0x4102f2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4102f2: mov ecx, dword ptr [esi*8 + 0x44bb14] */
  ecx = R32((uint32_t)(esi*8 + 0x44bb14u));
/* 4102f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4102fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4102fd: ret  */
  esp += 4; SPILL(); return;
L_4102fe: /* 4102fe: cmp ecx, 0xbc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410304: jb 0x41031c */
  if (cf) goto L_41031c;
L_410306: /* 410306: cmp ecx, 0xca */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41030c: ja 0x41031c */
  if ((!cf && !zf)) goto L_41031c;
L_41030e: /* 41030e: call 0x40137f */
  esp -= 4; W32(esp, 0x410313u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 410313: mov dword ptr [eax + 8], 8 */
  W32((uint32_t)(eax + 0x8u), 0x8u);
/* 41031a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41031b: ret  */
  esp += 4; SPILL(); return;
L_41031c: /* 41031c: call 0x40137f */
  esp -= 4; W32(esp, 0x410321u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 410321: mov dword ptr [eax + 8], 0x16 */
  W32((uint32_t)(eax + 0x8u), 0x16u);
/* 410328: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 410329: ret  */
  esp += 4; SPILL(); return;
}

void f_41032a(void) {
  LOAD_REGS();
L_41032a: /* 41032a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41032b: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 41032f: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 410332: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410334: call dword ptr [0x439010] */
  esp -= 4; W32(esp, 0x41033au); SPILL(); call_ind(R32(0x439010u)); if (g_unwind) return; /* KERNEL32!GetModuleHandleA */ RELOAD();
/* 41033a: cmp word ptr [eax], 0x5a4d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x5a4du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 41033f: jne 0x410355 */
  if (!zf) goto L_410355;
L_410341: /* 410341: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 410344: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410346: je 0x410355 */
  if (zf) goto L_410355;
L_410348: /* 410348: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41034a: mov cl, byte ptr [eax + 0x1a] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1au))) & 0xffu);
/* 41034d: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 41034f: mov al, byte ptr [eax + 0x1b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1bu))) & 0xffu);
/* 410352: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
L_410355: /* 410355: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 410356: ret  */
  esp += 4; SPILL(); return;
}

void f_410357(void) {
  LOAD_REGS();
L_410357: /* 410357: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 41035c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41035f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410361: jne 0x4103ca */
  if (!zf) goto L_4103ca;
L_410363: /* 410363: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410364: xor ebx, ebx */
  ebx = 0;
/* 410366: cmp dword ptr [0x44f670], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41036c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41036d: mov ebp, dword ptr [0x439080] */
  ebp = R32((uint32_t)(0x439080u));
/* 410373: jle 0x4103b6 */
  if ((zf || sf != of)) goto L_4103b6;
L_410375: /* 410375: mov esi, dword ptr [0x44f674] */
  esi = R32((uint32_t)(0x44f674u));
/* 41037b: mov edi, dword ptr [0x439090] */
  edi = R32((uint32_t)(0x439090u));
/* 410381: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_410384: /* 410384: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 410389: push 0x100000 */
  { uint32_t v = 0x100000u; esp -= 4; W32(esp, v); }
/* 41038e: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 410390: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x410392u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 410392: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 410397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410399: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 41039b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x41039du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41039d: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 4103a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4103a2: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4103a8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x4103aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4103aa: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4103ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4103ae: cmp ebx, dword ptr [0x44f670] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f670u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4103b4: jl 0x410384 */
  if ((sf != of)) goto L_410384;
L_4103b6: /* 4103b6: push dword ptr [0x44f674] */
  { uint32_t v = R32((uint32_t)(0x44f674u)); esp -= 4; W32(esp, v); }
/* 4103bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4103be: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4103c4: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x4103c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4103c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4103c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4103c8: jmp 0x4103f1 */
  goto L_4103f1;
L_4103ca: /* 4103ca: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4103cd: jne 0x4103f1 */
  if (!zf) goto L_4103f1;
L_4103cf: /* 4103cf: mov edi, 0x44bc80 */
  edi = 0x44bc80u;
/* 4103d4: mov esi, edi */
  esi = edi;
L_4103d6: /* 4103d6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4103d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4103db: je 0x4103eb */
  if (zf) goto L_4103eb;
L_4103dd: /* 4103dd: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 4103e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4103e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4103e5: call dword ptr [0x439090] */
  esp -= 4; W32(esp, 0x4103ebu); SPILL(); call_ind(R32(0x439090u)); if (g_unwind) return; /* KERNEL32!VirtualFree */ RELOAD();
L_4103eb: /* 4103eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 4103ed: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4103ef: jne 0x4103d6 */
  if (!zf) goto L_4103d6;
L_4103f1: /* 4103f1: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4103f7: call dword ptr [0x439088] */
  esp -= 4; W32(esp, 0x4103fdu); SPILL(); call_ind(R32(0x439088u)); if (g_unwind) return; /* KERNEL32!HeapDestroy */ RELOAD();
/* 4103fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4103fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4103ff: ret  */
  esp += 4; SPILL(); return;
}

void f_410400(void) {
  LOAD_REGS();
L_410400: /* 410400: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 410405: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410408: jne 0x410410 */
  if (!zf) goto L_410410;
L_41040a: /* 41040a: mov eax, dword ptr [0x44f678] */
  eax = R32((uint32_t)(0x44f678u));
/* 41040f: ret  */
  esp += 4; SPILL(); return;
L_410410: /* 410410: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 410411: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 410412: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 410414: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 410416: not eax */
  eax = ~eax;
/* 410418: and eax, dword ptr [0x44dca4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca4u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41041e: ret  */
  esp += 4; SPILL(); return;
}

void f_41041f(void) {
  LOAD_REGS();
L_41041f: /* 41041f: push 0x140 */
  { uint32_t v = 0x140u; esp -= 4; W32(esp, v); }
/* 410424: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410426: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 41042c: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x410432u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 410432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410434: mov dword ptr [0x44f674], eax */
  W32((uint32_t)(0x44f674u), eax);
/* 410439: jne 0x41043c */
  if (!zf) goto L_41043c;
L_41043b: /* 41043b: ret  */
  esp += 4; SPILL(); return;
L_41043c: /* 41043c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 410440: and dword ptr [0x44f66c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f66cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f66cu), r);
  }
/* 410447: and dword ptr [0x44f670], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f670u), r);
  }
/* 41044e: mov dword ptr [0x44f67c], eax */
  W32((uint32_t)(0x44f67cu), eax);
/* 410453: xor eax, eax */
  eax = 0;
/* 410455: mov dword ptr [0x44f678], ecx */
  W32((uint32_t)(0x44f678u), ecx);
/* 41045b: mov dword ptr [0x44f680], 0x10 */
  W32((uint32_t)(0x44f680u), 0x10u);
/* 410465: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 410466: ret  */
  esp += 4; SPILL(); return;
}

void f_410467(void) {
  LOAD_REGS();
L_410467: /* 410467: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 41046c: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 41046f: mov eax, dword ptr [0x44f674] */
  eax = R32((uint32_t)(0x44f674u));
/* 410474: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 410477: jmp 0x41048b */
  goto L_41048b;
L_410479: /* 410479: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 41047d: sub edx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 410480: cmp edx, 0x100000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410486: jb 0x410491 */
  if (cf) goto L_410491;
L_410488: /* 410488: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_41048b: /* 41048b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41048d: jb 0x410479 */
  if (cf) goto L_410479;
L_41048f: /* 41048f: xor eax, eax */
  eax = 0;
L_410491: /* 410491: ret  */
  esp += 4; SPILL(); return;
}

void f_410492(void) {
  LOAD_REGS();
L_410492: /* 410492: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 410493: mov ebp, esp */
  ebp = esp;
/* 410495: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 410498: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41049b: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 41049e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41049f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4104a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4104a3: mov edi, esi */
  edi = esi;
/* 4104a5: sub edi, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4104a8: add esi, -4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4104ab: shr edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 4104ae: mov ecx, edi */
  ecx = edi;
/* 4104b0: imul ecx, ecx, 0x204 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x204u);
  ecx = (uint32_t)r;
  }
/* 4104b6: lea ecx, [ecx + eax + 0x144] */
  ecx = (uint32_t)(ecx + eax + 0x144u);
/* 4104bd: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 4104c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4104c2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4104c3: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4104c6: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 4104c9: jne 0x4107a6 */
  if (!zf) goto L_4107a6;
L_4104cf: /* 4104cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4104d0: lea ebx, [ecx + esi] */
  ebx = (uint32_t)(ecx + esi);
/* 4104d3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 4104d5: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 4104d8: mov edx, dword ptr [esi - 4] */
  edx = R32((uint32_t)(esi + 0xfffffffcu));
/* 4104db: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 4104de: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4104e1: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4104e4: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 4104e7: jne 0x41055d */
  if (!zf) goto L_41055d;
L_4104e9: /* 4104e9: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4104ec: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 4104ed: cmp edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4104f0: jbe 0x4104f5 */
  if ((cf | zf)) goto L_4104f5;
L_4104f2: /* 4104f2: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 4104f4: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_4104f5: /* 4104f5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 4104f8: cmp ecx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4104fb: jne 0x41053f */
  if (!zf) goto L_41053f;
L_4104fd: /* 4104fd: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410500: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410505: jae 0x410520 */
  if (!cf) goto L_410520;
L_410507: /* 410507: mov ecx, edx */
  ecx = edx;
/* 410509: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 41050b: lea ecx, [edx + eax + 4] */
  ecx = (uint32_t)(edx + eax + 0x4u);
/* 41050f: not ebx */
  ebx = ~ebx;
/* 410511: and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi*4 + 0x44u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edi*4 + 0x44u), r);
  }
/* 410515: dec byte ptr [ecx] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ecx), r);
  }
/* 410517: jne 0x41053c */
  if (!zf) goto L_41053c;
L_410519: /* 410519: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41051c: and dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 41051e: jmp 0x41053c */
  goto L_41053c;
L_410520: /* 410520: lea ecx, [edx - 0x20] */
  ecx = (uint32_t)(edx + 0xffffffe0u);
/* 410523: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410525: lea ecx, [edx + eax + 4] */
  ecx = (uint32_t)(edx + eax + 0x4u);
/* 410529: not ebx */
  ebx = ~ebx;
/* 41052b: and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi*4 + 0xc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edi*4 + 0xc4u), r);
  }
/* 410532: dec byte ptr [ecx] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ecx), r);
  }
/* 410534: jne 0x41053c */
  if (!zf) goto L_41053c;
L_410536: /* 410536: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410539: and dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_41053c: /* 41053c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_41053f: /* 41053f: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 410542: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 410545: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410548: add ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41054b: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 41054e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 410551: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 410554: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 410557: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 41055a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_41055d: /* 41055d: mov edx, ecx */
  edx = ecx;
/* 41055f: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 410562: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 410563: cmp edx, 0x3f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410566: jbe 0x41056b */
  if ((cf | zf)) goto L_41056b;
L_410568: /* 410568: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 41056a: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_41056b: /* 41056b: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41056e: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 410571: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 410574: jne 0x410609 */
  if (!zf) goto L_410609;
L_41057a: /* 41057a: sub esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 41057d: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 410580: sar ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 410583: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410585: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 410588: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 410589: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41058a: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41058c: jbe 0x410590 */
  if ((cf | zf)) goto L_410590;
L_41058e: /* 41058e: mov ebx, esi */
  ebx = esi;
L_410590: /* 410590: add ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 410593: mov edx, ecx */
  edx = ecx;
/* 410595: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 410598: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 410599: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41059b: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 41059e: jbe 0x4105a2 */
  if ((cf | zf)) goto L_4105a2;
L_4105a0: /* 4105a0: mov edx, esi */
  edx = esi;
L_4105a2: /* 4105a2: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4105a4: je 0x410604 */
  if (zf) goto L_410604;
L_4105a6: /* 4105a6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4105a9: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4105ac: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4105af: jne 0x4105ec */
  if (!zf) goto L_4105ec;
L_4105b1: /* 4105b1: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4105b4: mov esi, 0x80000000 */
  esi = 0x80000000u;
/* 4105b9: jae 0x4105d2 */
  if (!cf) goto L_4105d2;
L_4105bb: /* 4105bb: mov ecx, ebx */
  ecx = ebx;
/* 4105bd: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 4105bf: not esi */
  esi = ~esi;
/* 4105c1: and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi*4 + 0x44u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edi*4 + 0x44u), r);
  }
/* 4105c5: dec byte ptr [ebx + eax + 4] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + eax + 0x4u)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ebx + eax + 0x4u), r);
  }
/* 4105c9: jne 0x4105ec */
  if (!zf) goto L_4105ec;
L_4105cb: /* 4105cb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4105ce: and dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 4105d0: jmp 0x4105ec */
  goto L_4105ec;
L_4105d2: /* 4105d2: lea ecx, [ebx - 0x20] */
  ecx = (uint32_t)(ebx + 0xffffffe0u);
/* 4105d5: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 4105d7: not esi */
  esi = ~esi;
/* 4105d9: and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edi*4 + 0xc4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edi*4 + 0xc4u), r);
  }
/* 4105e0: dec byte ptr [ebx + eax + 4] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + eax + 0x4u)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ebx + eax + 0x4u), r);
  }
/* 4105e4: jne 0x4105ec */
  if (!zf) goto L_4105ec;
L_4105e6: /* 4105e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4105e9: and dword ptr [ecx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_4105ec: /* 4105ec: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4105ef: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 4105f2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4105f5: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 4105f8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4105fb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 4105fe: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 410601: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_410604: /* 410604: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 410607: jmp 0x41060c */
  goto L_41060c;
L_410609: /* 410609: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_41060c: /* 41060c: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410610: jne 0x41061a */
  if (!zf) goto L_41061a;
L_410612: /* 410612: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410614: je 0x41069a */
  if (zf) goto L_41069a;
L_41061a: /* 41061a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 41061d: lea ecx, [ecx + edx*8] */
  ecx = (uint32_t)(ecx + edx*8);
/* 410620: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 410623: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 410626: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 410629: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 41062c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 41062f: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 410632: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 410635: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410638: jne 0x41069a */
  if (!zf) goto L_41069a;
L_41063a: /* 41063a: mov cl, byte ptr [edx + eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0x4u))) & 0xffu);
/* 41063e: mov byte ptr [ebp + 0xf], cl */
  W8((uint32_t)(ebp + 0xfu), (ecx & 0xffu));
/* 410641: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 410643: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410646: mov byte ptr [edx + eax + 4], cl */
  W8((uint32_t)(edx + eax + 0x4u), (ecx & 0xffu));
/* 41064a: jae 0x410671 */
  if (!cf) goto L_410671;
L_41064c: /* 41064c: cmp byte ptr [ebp + 0xf], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410650: jne 0x410660 */
  if (!zf) goto L_410660;
L_410652: /* 410652: mov ecx, edx */
  ecx = edx;
/* 410654: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410659: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 41065b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41065e: or dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx), r);
  }
L_410660: /* 410660: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410665: mov ecx, edx */
  ecx = edx;
/* 410667: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410669: lea eax, [eax + edi*4 + 0x44] */
  eax = (uint32_t)(eax + edi*4 + 0x44u);
/* 41066d: or dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 41066f: jmp 0x41069a */
  goto L_41069a;
L_410671: /* 410671: cmp byte ptr [ebp + 0xf], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410675: jne 0x410687 */
  if (!zf) goto L_410687;
L_410677: /* 410677: lea ecx, [edx - 0x20] */
  ecx = (uint32_t)(edx + 0xffffffe0u);
/* 41067a: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 41067f: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410681: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410684: or dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_410687: /* 410687: lea ecx, [edx - 0x20] */
  ecx = (uint32_t)(edx + 0xffffffe0u);
/* 41068a: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 41068f: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 410691: lea eax, [eax + edi*4 + 0xc4] */
  eax = (uint32_t)(eax + edi*4 + 0xc4u);
/* 410698: or dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_41069a: /* 41069a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41069d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 41069f: mov dword ptr [eax + esi - 4], eax */
  W32((uint32_t)(eax + esi + 0xfffffffcu), eax);
/* 4106a3: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4106a6: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(eax), r);
  }
/* 4106a8: jne 0x4107a5 */
  if (!zf) goto L_4107a5;
L_4106ae: /* 4106ae: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 4106b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4106b5: je 0x410797 */
  if (zf) goto L_410797;
L_4106bb: /* 4106bb: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 4106c1: mov esi, dword ptr [0x439090] */
  esi = R32((uint32_t)(0x439090u));
/* 4106c7: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 4106cc: shl ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4106cf: add ecx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4106d2: mov ebx, 0x8000 */
  ebx = 0x8000u;
/* 4106d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4106d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4106d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4106dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4106db: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 4106e1: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 4106e6: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 4106eb: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 4106ed: or dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 4106f0: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 4106f5: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 4106f8: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 4106fe: and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4 + 0xc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + ecx*4 + 0xc4u), r);
  }
/* 410706: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 41070b: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 41070e: dec byte ptr [eax + 0x43] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x43u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(eax + 0x43u), r);
  }
/* 410711: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410716: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 410719: cmp byte ptr [ecx + 0x43], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x43u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41071d: jne 0x410728 */
  if (!zf) goto L_410728;
L_41071f: /* 41071f: and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 410723: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
L_410728: /* 410728: cmp dword ptr [eax + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41072c: jne 0x410797 */
  if (!zf) goto L_410797;
L_41072e: /* 41072e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41072f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410731: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 410734: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x410736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 410736: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 41073b: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 41073e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410740: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 410746: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x41074cu); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
/* 41074c: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 410751: mov edx, dword ptr [0x44f674] */
  edx = R32((uint32_t)(0x44f674u));
/* 410757: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 41075a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41075d: mov ecx, eax */
  ecx = eax;
/* 41075f: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410764: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 410766: lea ecx, [ecx + edx - 0x14] */
  ecx = (uint32_t)(ecx + edx + 0xffffffecu);
/* 41076a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41076b: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 41076e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41076f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410770: call 0x403f12 */
  esp -= 4; W32(esp, 0x410775u); SPILL(); hle_memcpy(); RELOAD();
/* 410775: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 410778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41077b: dec dword ptr [0x44f670] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f670u), r);
  }
/* 410781: cmp eax, dword ptr [0x44f66c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f66cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410787: jbe 0x41078d */
  if ((cf | zf)) goto L_41078d;
L_410789: /* 410789: sub dword ptr [ebp + 8], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_41078d: /* 41078d: mov eax, dword ptr [0x44f674] */
  eax = R32((uint32_t)(0x44f674u));
/* 410792: mov dword ptr [0x44f67c], eax */
  W32((uint32_t)(0x44f67cu), eax);
L_410797: /* 410797: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41079a: mov dword ptr [0x44f66c], eax */
  W32((uint32_t)(0x44f66cu), eax);
/* 41079f: mov dword ptr [0x44f684], edi */
  W32((uint32_t)(0x44f684u), edi);
L_4107a5: /* 4107a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4107a6: /* 4107a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4107a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4107a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4107a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4107aa(void) {
  LOAD_REGS();
L_4107aa: /* 4107aa: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 4107af: mov ecx, dword ptr [0x44f680] */
  ecx = R32((uint32_t)(0x44f680u));
/* 4107b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4107b6: xor edi, edi */
  edi = 0;
/* 4107b8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4107ba: jne 0x4107f0 */
  if (!zf) goto L_4107f0;
L_4107bc: /* 4107bc: lea eax, [ecx + ecx*4 + 0x50] */
  eax = (uint32_t)(ecx + ecx*4 + 0x50u);
/* 4107c0: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4107c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4107c4: push dword ptr [0x44f674] */
  { uint32_t v = R32((uint32_t)(0x44f674u)); esp -= 4; W32(esp, v); }
/* 4107ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4107cb: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4107d1: call dword ptr [0x439098] */
  esp -= 4; W32(esp, 0x4107d7u); SPILL(); call_ind(R32(0x439098u)); if (g_unwind) return; /* KERNEL32!HeapReAlloc */ RELOAD();
/* 4107d7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4107d9: jne 0x4107df */
  if (!zf) goto L_4107df;
L_4107db: /* 4107db: xor eax, eax */
  eax = 0;
/* 4107dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4107de: ret  */
  esp += 4; SPILL(); return;
L_4107df: /* 4107df: add dword ptr [0x44f680], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f680u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44f680u), r);
  }
/* 4107e6: mov dword ptr [0x44f674], eax */
  W32((uint32_t)(0x44f674u), eax);
/* 4107eb: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
L_4107f0: /* 4107f0: mov ecx, dword ptr [0x44f674] */
  ecx = R32((uint32_t)(0x44f674u));
/* 4107f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4107f7: push 0x41c4 */
  { uint32_t v = 0x41c4u; esp -= 4; W32(esp, v); }
/* 4107fc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4107fe: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 410804: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 410807: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 41080a: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x410810u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 410810: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410812: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 410815: jne 0x41081b */
  if (!zf) goto L_41081b;
L_410817: /* 410817: xor eax, eax */
  eax = 0;
/* 410819: jmp 0x41085e */
  goto L_41085e;
L_41081b: /* 41081b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 41081d: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 410822: push 0x100000 */
  { uint32_t v = 0x100000u; esp -= 4; W32(esp, v); }
/* 410827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410828: call dword ptr [0x439094] */
  esp -= 4; W32(esp, 0x41082eu); SPILL(); call_ind(R32(0x439094u)); if (g_unwind) return; /* KERNEL32!VirtualAlloc */ RELOAD();
/* 41082e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410830: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 410833: jne 0x410847 */
  if (!zf) goto L_410847;
L_410835: /* 410835: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 410838: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410839: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 41083f: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x410845u); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
/* 410845: jmp 0x410817 */
  goto L_410817;
L_410847: /* 410847: or dword ptr [esi + 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 41084b: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 41084d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 410850: inc dword ptr [0x44f670] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f670u), r);
  }
/* 410856: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 410859: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 41085c: mov eax, esi */
  eax = esi;
L_41085e: /* 41085e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41085f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 410860: ret  */
  esp += 4; SPILL(); return;
}

void f_410861(void) {
  LOAD_REGS();
L_410861: /* 410861: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 410862: mov ebp, esp */
  ebp = esp;
/* 410864: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410866: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410869: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 41086c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41086d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41086e: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 410871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410872: xor ebx, ebx */
  ebx = 0;
/* 410874: jmp 0x410879 */
  goto L_410879;
L_410876: /* 410876: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 410878: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_410879: /* 410879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41087b: jge 0x410876 */
  if ((sf == of)) goto L_410876;
L_41087d: /* 41087d: mov eax, ebx */
  eax = ebx;
/* 41087f: imul eax, eax, 0x204 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x204u);
  eax = (uint32_t)r;
  }
/* 410885: lea eax, [eax + esi + 0x144] */
  eax = (uint32_t)(eax + esi + 0x144u);
/* 41088c: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 41088e: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 410891: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_410892: /* 410892: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* 410895: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* 410898: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41089b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 41089c: jne 0x410892 */
  if (!zf) goto L_410892;
L_41089e: /* 41089e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4108a0: mov edi, ebx */
  edi = ebx;
/* 4108a2: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 4108a7: shl edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 4108aa: add edi, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4108ad: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 4108b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4108b3: call dword ptr [0x439094] */
  esp -= 4; W32(esp, 0x4108b9u); SPILL(); call_ind(R32(0x439094u)); if (g_unwind) return; /* KERNEL32!VirtualAlloc */ RELOAD();
/* 4108b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4108bb: jne 0x4108c5 */
  if (!zf) goto L_4108c5;
L_4108bd: /* 4108bd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4108c0: jmp 0x410962 */
  goto L_410962;
L_4108c5: /* 4108c5: lea edx, [edi + 0x7000] */
  edx = (uint32_t)(edi + 0x7000u);
/* 4108cb: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4108cd: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 4108d0: ja 0x410915 */
  if ((!cf && !zf)) goto L_410915;
L_4108d2: /* 4108d2: mov ecx, edx */
  ecx = edx;
/* 4108d4: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4108d6: shr ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4108d9: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 4108dc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_4108dd: /* 4108dd: or dword ptr [eax - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xfffffff8u), r);
  }
/* 4108e1: or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xfecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0xfecu), r);
  }
/* 4108e8: lea edx, [eax + 0xffc] */
  edx = (uint32_t)(eax + 0xffcu);
/* 4108ee: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4108f0: lea edx, [eax - 0x1004] */
  edx = (uint32_t)(eax + 0xffffeffcu);
/* 4108f6: mov dword ptr [eax - 4], 0xff0 */
  W32((uint32_t)(eax + 0xfffffffcu), 0xff0u);
/* 4108fd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 410900: mov dword ptr [eax + 0xfe8], 0xff0 */
  W32((uint32_t)(eax + 0xfe8u), 0xff0u);
/* 41090a: add eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41090f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 410910: jne 0x4108dd */
  if (!zf) goto L_4108dd;
L_410912: /* 410912: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_410915: /* 410915: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 410918: add eax, 0x1f8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1f8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41091d: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 410920: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 410923: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 410926: lea ecx, [edx + 0xc] */
  ecx = (uint32_t)(edx + 0xcu);
/* 410929: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 41092c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 41092f: and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + ebx*4 + 0x44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + ebx*4 + 0x44u), r);
  }
/* 410934: xor edi, edi */
  edi = 0;
/* 410936: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 410937: mov dword ptr [esi + ebx*4 + 0xc4], edi */
  W32((uint32_t)(esi + ebx*4 + 0xc4u), edi);
/* 41093e: mov al, byte ptr [esi + 0x43] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x43u))) & 0xffu);
/* 410941: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 410943: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 410945: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 410947: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41094a: mov byte ptr [esi + 0x43], cl */
  W8((uint32_t)(esi + 0x43u), (ecx & 0xffu));
/* 41094d: jne 0x410952 */
  if (!zf) goto L_410952;
L_41094f: /* 41094f: or dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(eax + 0x4u), r);
  }
L_410952: /* 410952: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 410957: mov ecx, ebx */
  ecx = ebx;
/* 410959: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 41095b: not edx */
  edx = ~edx;
/* 41095d: and dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 410960: mov eax, ebx */
  eax = ebx;
L_410962: /* 410962: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 410963: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 410964: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 410965: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 410966: ret  */
  esp += 4; SPILL(); return;
}

void f_410967(void) {
  LOAD_REGS();
L_410967: /* 410967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 410968: mov ebp, esp */
  ebp = esp;
/* 41096a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41096d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410970: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 410973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410974: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410975: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 410978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410979: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 41097c: mov edx, edi */
  edx = edi;
/* 41097e: sub edx, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 410981: add esi, 0x17 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 410984: shr edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 410987: mov ecx, edx */
  ecx = edx;
/* 410989: imul ecx, ecx, 0x204 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x204u);
  ecx = (uint32_t)r;
  }
/* 41098f: lea ecx, [ecx + eax + 0x144] */
  ecx = (uint32_t)(ecx + eax + 0x144u);
/* 410996: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 410999: mov ecx, dword ptr [edi - 4] */
  ecx = R32((uint32_t)(edi + 0xfffffffcu));
/* 41099c: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41099f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4109a0: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4109a2: lea edi, [ecx + edi - 4] */
  edi = (uint32_t)(ecx + edi + 0xfffffffcu);
/* 4109a6: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 4109a8: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 4109ab: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4109ae: jle 0x410b09 */
  if ((zf || sf != of)) goto L_410b09;
L_4109b4: /* 4109b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4109b7: jne 0x410b02 */
  if (!zf) goto L_410b02;
L_4109bd: /* 4109bd: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4109bf: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4109c1: jg 0x410b02 */
  if ((!zf && sf == of)) goto L_410b02;
L_4109c7: /* 4109c7: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4109ca: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4109cd: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4109ce: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4109d1: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 4109d4: jbe 0x4109dc */
  if ((cf | zf)) goto L_4109dc;
L_4109d6: /* 4109d6: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 4109d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4109d9: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
L_4109dc: /* 4109dc: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 4109df: cmp ebx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4109e2: jne 0x410a27 */
  if (!zf) goto L_410a27;
L_4109e4: /* 4109e4: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4109e7: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 4109ec: jae 0x410a08 */
  if (!cf) goto L_410a08;
L_4109ee: /* 4109ee: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 4109f0: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4109f3: lea ecx, [ecx + eax + 4] */
  ecx = (uint32_t)(ecx + eax + 0x4u);
/* 4109f7: not ebx */
  ebx = ~ebx;
/* 4109f9: and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0x44u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edx*4 + 0x44u), r);
  }
/* 4109fd: dec byte ptr [ecx] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ecx), r);
  }
/* 4109ff: jne 0x410a27 */
  if (!zf) goto L_410a27;
L_410a01: /* 410a01: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410a04: and dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 410a06: jmp 0x410a27 */
  goto L_410a27;
L_410a08: /* 410a08: add ecx, -0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 410a0b: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410a0d: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 410a10: lea ecx, [ecx + eax + 4] */
  ecx = (uint32_t)(ecx + eax + 0x4u);
/* 410a14: not ebx */
  ebx = ~ebx;
/* 410a16: and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0xc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edx*4 + 0xc4u), r);
  }
/* 410a1d: dec byte ptr [ecx] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ecx), r);
  }
/* 410a1f: jne 0x410a27 */
  if (!zf) goto L_410a27;
L_410a21: /* 410a21: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410a24: and dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_410a27: /* 410a27: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 410a2a: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 410a2d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 410a30: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 410a33: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 410a36: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 410a39: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 410a3c: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 410a3e: add dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 410a41: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410a45: jle 0x410af0 */
  if ((zf || sf != of)) goto L_410af0;
L_410a4b: /* 410a4b: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410a4e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 410a51: sar edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 410a54: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 410a55: cmp edi, 0x3f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410a58: lea ecx, [ecx + esi - 4] */
  ecx = (uint32_t)(ecx + esi + 0xfffffffcu);
/* 410a5c: jbe 0x410a61 */
  if ((cf | zf)) goto L_410a61;
L_410a5e: /* 410a5e: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410a60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_410a61: /* 410a61: mov ebx, dword ptr [ebp - 0xc] */
  ebx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 410a64: lea ebx, [ebx + edi*8] */
  ebx = (uint32_t)(ebx + edi*8);
/* 410a67: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 410a6a: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 410a6d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 410a70: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 410a73: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 410a76: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 410a79: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 410a7c: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 410a7f: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 410a82: cmp ebx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410a85: jne 0x410ade */
  if (!zf) goto L_410ade;
L_410a87: /* 410a87: mov cl, byte ptr [edi + eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x4u))) & 0xffu);
/* 410a8b: mov byte ptr [ebp + 0x13], cl */
  W8((uint32_t)(ebp + 0x13u), (ecx & 0xffu));
/* 410a8e: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 410a90: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410a93: mov byte ptr [edi + eax + 4], cl */
  W8((uint32_t)(edi + eax + 0x4u), (ecx & 0xffu));
/* 410a97: jae 0x410ab5 */
  if (!cf) goto L_410ab5;
L_410a99: /* 410a99: cmp byte ptr [ebp + 0x13], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x13u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410a9d: jne 0x410aad */
  if (!zf) goto L_410aad;
L_410a9f: /* 410a9f: mov ecx, edi */
  ecx = edi;
/* 410aa1: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410aa6: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410aa8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410aab: or dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx), r);
  }
L_410aad: /* 410aad: lea eax, [eax + edx*4 + 0x44] */
  eax = (uint32_t)(eax + edx*4 + 0x44u);
/* 410ab1: mov ecx, edi */
  ecx = edi;
/* 410ab3: jmp 0x410ad5 */
  goto L_410ad5;
L_410ab5: /* 410ab5: cmp byte ptr [ebp + 0x13], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x13u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410ab9: jne 0x410acb */
  if (!zf) goto L_410acb;
L_410abb: /* 410abb: lea ecx, [edi - 0x20] */
  ecx = (uint32_t)(edi + 0xffffffe0u);
/* 410abe: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410ac3: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410ac5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410ac8: or dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_410acb: /* 410acb: lea eax, [eax + edx*4 + 0xc4] */
  eax = (uint32_t)(eax + edx*4 + 0xc4u);
/* 410ad2: lea ecx, [edi - 0x20] */
  ecx = (uint32_t)(edi + 0xffffffe0u);
L_410ad5: /* 410ad5: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 410ada: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 410adc: or dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_410ade: /* 410ade: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 410ae1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410ae4: lea eax, [edx + esi - 4] */
  eax = (uint32_t)(edx + esi + 0xfffffffcu);
/* 410ae8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 410aea: mov dword ptr [ecx + eax - 4], ecx */
  W32((uint32_t)(ecx + eax + 0xfffffffcu), ecx);
/* 410aee: jmp 0x410af3 */
  goto L_410af3;
L_410af0: /* 410af0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_410af3: /* 410af3: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 410af6: mov dword ptr [edx - 4], eax */
  W32((uint32_t)(edx + 0xfffffffcu), eax);
/* 410af9: mov dword ptr [edx + esi - 8], eax */
  W32((uint32_t)(edx + esi + 0xfffffff8u), eax);
/* 410afd: jmp 0x410c3e */
  goto L_410c3e;
L_410b02: /* 410b02: xor eax, eax */
  eax = 0;
/* 410b04: jmp 0x410c41 */
  goto L_410c41;
L_410b09: /* 410b09: jge 0x410c3e */
  if ((sf == of)) goto L_410c3e;
L_410b0f: /* 410b0f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 410b12: sub dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 410b15: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 410b18: mov dword ptr [ebx - 4], ecx */
  W32((uint32_t)(ebx + 0xfffffffcu), ecx);
/* 410b1b: lea ebx, [ebx + esi - 4] */
  ebx = (uint32_t)(ebx + esi + 0xfffffffcu);
/* 410b1f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 410b22: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 410b25: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410b26: cmp esi, 0x3f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410b29: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 410b2c: mov dword ptr [ebx - 4], ecx */
  W32((uint32_t)(ebx + 0xfffffffcu), ecx);
/* 410b2f: jbe 0x410b34 */
  if ((cf | zf)) goto L_410b34;
L_410b31: /* 410b31: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410b33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_410b34: /* 410b34: test byte ptr [ebp - 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 410b38: jne 0x410bbe */
  if (!zf) goto L_410bbe;
L_410b3e: /* 410b3e: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410b41: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 410b44: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410b45: cmp esi, 0x3f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410b48: jbe 0x410b4d */
  if ((cf | zf)) goto L_410b4d;
L_410b4a: /* 410b4a: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410b4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_410b4d: /* 410b4d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 410b50: cmp ecx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410b53: jne 0x410b97 */
  if (!zf) goto L_410b97;
L_410b55: /* 410b55: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410b58: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 410b5d: jae 0x410b78 */
  if (!cf) goto L_410b78;
L_410b5f: /* 410b5f: mov ecx, esi */
  ecx = esi;
/* 410b61: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410b63: lea esi, [esi + eax + 4] */
  esi = (uint32_t)(esi + eax + 0x4u);
/* 410b67: not ebx */
  ebx = ~ebx;
/* 410b69: and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0x44u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edx*4 + 0x44u), r);
  }
/* 410b6d: dec byte ptr [esi] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(esi), r);
  }
/* 410b6f: jne 0x410b94 */
  if (!zf) goto L_410b94;
L_410b71: /* 410b71: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410b74: and dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 410b76: jmp 0x410b94 */
  goto L_410b94;
L_410b78: /* 410b78: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
/* 410b7b: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 410b7d: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 410b81: not ebx */
  ebx = ~ebx;
/* 410b83: and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0xc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + edx*4 + 0xc4u), r);
  }
/* 410b8a: dec byte ptr [ecx] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(ecx), r);
  }
/* 410b8c: jne 0x410b94 */
  if (!zf) goto L_410b94;
L_410b8e: /* 410b8e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410b91: and dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_410b94: /* 410b94: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_410b97: /* 410b97: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 410b9a: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 410b9d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 410ba0: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 410ba3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 410ba6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 410ba9: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 410bac: add esi, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 410baf: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* 410bb2: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 410bb5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 410bb6: cmp esi, 0x3f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410bb9: jbe 0x410bbe */
  if ((cf | zf)) goto L_410bbe;
L_410bbb: /* 410bbb: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_410bbe: /* 410bbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 410bc1: lea ecx, [ecx + esi*8] */
  ecx = (uint32_t)(ecx + esi*8);
/* 410bc4: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 410bc7: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 410bca: mov dword ptr [ebx + 4], edi */
  W32((uint32_t)(ebx + 0x4u), edi);
/* 410bcd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 410bd0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 410bd3: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 410bd6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 410bd9: cmp ecx, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410bdc: jne 0x410c35 */
  if (!zf) goto L_410c35;
L_410bde: /* 410bde: mov cl, byte ptr [esi + eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x4u))) & 0xffu);
/* 410be2: mov byte ptr [ebp + 0xf], cl */
  W8((uint32_t)(ebp + 0xfu), (ecx & 0xffu));
/* 410be5: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 410be7: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410bea: mov byte ptr [esi + eax + 4], cl */
  W8((uint32_t)(esi + eax + 0x4u), (ecx & 0xffu));
/* 410bee: jae 0x410c0c */
  if (!cf) goto L_410c0c;
L_410bf0: /* 410bf0: cmp byte ptr [ebp + 0xf], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410bf4: jne 0x410c04 */
  if (!zf) goto L_410c04;
L_410bf6: /* 410bf6: mov ecx, esi */
  ecx = esi;
/* 410bf8: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 410bfd: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 410bff: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410c02: or dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx), r);
  }
L_410c04: /* 410c04: lea eax, [eax + edx*4 + 0x44] */
  eax = (uint32_t)(eax + edx*4 + 0x44u);
/* 410c08: mov ecx, esi */
  ecx = esi;
/* 410c0a: jmp 0x410c2c */
  goto L_410c2c;
L_410c0c: /* 410c0c: cmp byte ptr [ebp + 0xf], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 410c10: jne 0x410c22 */
  if (!zf) goto L_410c22;
L_410c12: /* 410c12: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
/* 410c15: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 410c1a: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 410c1c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 410c1f: or dword ptr [ecx + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ecx + 0x4u), r);
  }
L_410c22: /* 410c22: lea eax, [eax + edx*4 + 0xc4] */
  eax = (uint32_t)(eax + edx*4 + 0xc4u);
/* 410c29: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
L_410c2c: /* 410c2c: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 410c31: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 410c33: or dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_410c35: /* 410c35: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 410c38: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 410c3a: mov dword ptr [eax + ebx - 4], eax */
  W32((uint32_t)(eax + ebx + 0xfffffffcu), eax);
L_410c3e: /* 410c3e: xor eax, eax */
  eax = 0;
/* 410c40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_410c41: /* 410c41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 410c42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 410c43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 410c44: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 410c45: ret  */
  esp += 4; SPILL(); return;
}

void f_410c46(void) {
  LOAD_REGS();
L_410c46: /* 410c46: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410c4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410c4d: je 0x410d16 */
  if (zf) goto L_410d16;
L_410c53: /* 410c53: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 410c59: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 410c5e: shl ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 410c61: add ecx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 410c64: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 410c69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410c6a: call dword ptr [0x439090] */
  esp -= 4; W32(esp, 0x410c70u); SPILL(); call_ind(R32(0x439090u)); if (g_unwind) return; /* KERNEL32!VirtualFree */ RELOAD();
/* 410c70: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 410c76: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410c7b: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 410c80: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 410c82: or dword ptr [eax + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 410c85: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410c8a: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 410c8d: mov ecx, dword ptr [0x44f684] */
  ecx = R32((uint32_t)(0x44f684u));
/* 410c93: and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4 + 0xc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + ecx*4 + 0xc4u), r);
  }
/* 410c9b: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410ca0: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 410ca3: dec byte ptr [eax + 0x43] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x43u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(eax + 0x43u), r);
  }
/* 410ca6: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410cab: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 410cae: cmp byte ptr [ecx + 0x43], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x43u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 410cb2: jne 0x410cbd */
  if (!zf) goto L_410cbd;
L_410cb4: /* 410cb4: and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 410cb8: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
L_410cbd: /* 410cbd: cmp dword ptr [eax + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410cc1: jne 0x410d0f */
  if (!zf) goto L_410d0f;
L_410cc3: /* 410cc3: cmp dword ptr [0x44f670], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410cca: jle 0x410d0f */
  if ((zf || sf != of)) goto L_410d0f;
L_410ccc: /* 410ccc: push dword ptr [eax + 0x10] */
  { uint32_t v = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, v); }
/* 410ccf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 410cd1: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 410cd7: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x410cddu); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
/* 410cdd: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 410ce2: mov edx, dword ptr [0x44f674] */
  edx = R32((uint32_t)(0x44f674u));
/* 410ce8: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 410ceb: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 410cee: mov ecx, eax */
  ecx = eax;
/* 410cf0: mov eax, dword ptr [0x44f66c] */
  eax = R32((uint32_t)(0x44f66cu));
/* 410cf5: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 410cf7: lea ecx, [ecx + edx - 0x14] */
  ecx = (uint32_t)(ecx + edx + 0xffffffecu);
/* 410cfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410cfc: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 410cff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 410d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410d01: call 0x403f12 */
  esp -= 4; W32(esp, 0x410d06u); SPILL(); hle_memcpy(); RELOAD();
/* 410d06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 410d09: dec dword ptr [0x44f670] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f670u), r);
  }
L_410d0f: /* 410d0f: and dword ptr [0x44f66c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f66cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f66cu), r);
  }
L_410d16: /* 410d16: ret  */
  esp += 4; SPILL(); return;
}

void f_410d17(void) {
  LOAD_REGS();
L_410d17: /* 410d17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 410d18: mov ebp, esp */
  ebp = esp;
/* 410d1a: sub esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 410d20: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 410d25: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 410d28: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 410d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 410d2c: push dword ptr [0x44f674] */
  { uint32_t v = R32((uint32_t)(0x44f674u)); esp -= 4; W32(esp, v); }
/* 410d32: call dword ptr [0x43909c] */
  esp -= 4; W32(esp, 0x410d38u); SPILL(); call_ind(R32(0x43909cu)); if (g_unwind) return; /* KERNEL32!IsBadWritePtr */ RELOAD();
/* 410d38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410d3a: je 0x410d41 */
  if (zf) goto L_410d41;
L_410d3c: /* 410d3c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 410d3f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 410d40: ret  */
  esp += 4; SPILL(); return;
L_410d41: /* 410d41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 410d42: mov ebx, dword ptr [0x44f674] */
  ebx = R32((uint32_t)(0x44f674u));
/* 410d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 410d4a: xor edi, edi */
  edi = 0;
/* 410d4c: cmp dword ptr [0x44f670], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f670u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410d52: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 410d55: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 410d58: jg 0x410d63 */
  if ((!zf && sf == of)) goto L_410d63;
L_410d5a: /* 410d5a: xor eax, eax */
  eax = 0;
L_410d5c: /* 410d5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 410d5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 410d5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 410d5f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 410d60: ret  */
  esp += 4; SPILL(); return;
L_410d61: /* 410d61: xor edi, edi */
  edi = 0;
L_410d63: /* 410d63: mov esi, dword ptr [ebx + 0x10] */
  esi = R32((uint32_t)(ebx + 0x10u));
/* 410d66: push 0x41c4 */
  { uint32_t v = 0x41c4u; esp -= 4; W32(esp, v); }
/* 410d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 410d6c: call dword ptr [0x43909c] */
  esp -= 4; W32(esp, 0x410d72u); SPILL(); call_ind(R32(0x43909cu)); if (g_unwind) return; /* KERNEL32!IsBadWritePtr */ RELOAD();
/* 410d72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410d74: jne 0x410ff0 */
  if (!zf) goto L_410ff0;
L_410d7a: /* 410d7a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 410d7d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 410d80: lea eax, [esi + 0x144] */
  eax = (uint32_t)(esi + 0x144u);
/* 410d86: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 410d89: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 410d8c: add esi, 0xc4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 410d92: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 410d95: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 410d98: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 410d9b: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 410d9e: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 410da1: jmp 0x410da5 */
  goto L_410da5;
L_410da3: /* 410da3: xor edi, edi */
  edi = 0;
L_410da5: /* 410da5: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 410da8: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 410dab: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 410dae: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 410db0: xor eax, eax */
  eax = 0;
/* 410db2: cmp dword ptr [ebp - 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410db5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 410db6: lea edi, [ebp - 0x138] */
  edi = (uint32_t)(ebp + 0xfffffec8u);
/* 410dbc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 410dbe: jl 0x410f89 */
  if ((sf != of)) goto L_410f89;
L_410dc4: /* 410dc4: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 410dc9: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 410dcc: call dword ptr [0x43909c] */
  esp -= 4; W32(esp, 0x410dd2u); SPILL(); call_ind(R32(0x43909cu)); if (g_unwind) return; /* KERNEL32!IsBadWritePtr */ RELOAD();
/* 410dd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 410dd4: jne 0x410ff8 */
  if (!zf) goto L_410ff8;
L_410dda: /* 410dda: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 410ddd: xor ebx, ebx */
  ebx = 0;
/* 410ddf: add edx, 0xffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_410de5: /* 410de5: cmp dword ptr [edx - 0xff4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xfffff00cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410dec: lea esi, [edx - 0xff0] */
  esi = (uint32_t)(edx + 0xfffff010u);
/* 410df2: jne 0x411008 */
  if (!zf) goto L_411008;
L_410df8: /* 410df8: cmp dword ptr [edx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410dfb: jne 0x411008 */
  if (!zf) goto L_411008;
L_410e01: /* 410e01: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 410e03: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 410e06: mov edi, ecx */
  edi = ecx;
/* 410e08: je 0x410e1c */
  if (zf) goto L_410e1c;
L_410e0a: /* 410e0a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 410e0b: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410e11: jg 0x410ffc */
  if ((!zf && sf == of)) goto L_410ffc;
L_410e17: /* 410e17: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 410e1a: jmp 0x410e33 */
  goto L_410e33;
L_410e1c: /* 410e1c: mov eax, ecx */
  eax = ecx;
/* 410e1e: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 410e21: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 410e22: cmp eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410e25: jle 0x410e2a */
  if ((zf || sf != of)) goto L_410e2a;
L_410e27: /* 410e27: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410e29: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_410e2a: /* 410e2a: lea eax, [ebp + eax*4 - 0x138] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffec8u);
/* 410e31: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_410e33: /* 410e33: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410e36: jl 0x411004 */
  if ((sf != of)) goto L_411004;
L_410e3c: /* 410e3c: test cl, 0xf */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 410e3f: jne 0x411004 */
  if (!zf) goto L_411004;
L_410e45: /* 410e45: cmp ecx, 0xff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410e4b: jg 0x411004 */
  if ((!zf && sf == of)) goto L_411004;
L_410e51: /* 410e51: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 410e54: cmp dword ptr [eax - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410e57: jne 0x411000 */
  if (!zf) goto L_411000;
L_410e5d: /* 410e5d: mov esi, eax */
  esi = eax;
/* 410e5f: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 410e61: jb 0x410e01 */
  if (cf) goto L_410e01;
L_410e63: /* 410e63: jne 0x411000 */
  if (!zf) goto L_411000;
L_410e69: /* 410e69: add edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 410e6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 410e70: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410e73: jl 0x410de5 */
  if ((sf != of)) goto L_410de5;
L_410e79: /* 410e79: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410e7c: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 410e7f: cmp dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410e81: jne 0x41100c */
  if (!zf) goto L_41100c;
L_410e87: /* 410e87: xor esi, esi */
  esi = 0;
L_410e89: /* 410e89: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 410e8d: lea ebx, [edi + 8] */
  ebx = (uint32_t)(edi + 0x8u);
/* 410e90: mov eax, dword ptr [ebx - 4] */
  eax = R32((uint32_t)(ebx + 0xfffffffcu));
/* 410e93: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410e95: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 410e98: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 410e9b: je 0x410f53 */
  if (zf) goto L_410f53;
L_410ea1: /* 410ea1: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410ea4: cmp ecx, dword ptr [ebp + esi*4 - 0x138] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + esi*4 + 0xfffffec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410eab: je 0x410f2c */
  if (zf) goto L_410f2c;
L_410ead: /* 410ead: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 410eb0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410eb2: jb 0x41101c */
  if (cf) goto L_41101c;
L_410eb8: /* 410eb8: add ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 410ebe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 410ec0: jae 0x41101c */
  if (!cf) goto L_41101c;
L_410ec6: /* 410ec6: mov ecx, eax */
  ecx = eax;
/* 410ec8: and ecx, 0xfffff000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 410ece: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 410ed1: lea edx, [ecx + 0xff0] */
  edx = (uint32_t)(ecx + 0xff0u);
/* 410ed7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410ed9: je 0x411010 */
  if (zf) goto L_411010;
L_410edf: /* 410edf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410ee1: je 0x410ef1 */
  if (zf) goto L_410ef1;
L_410ee3: /* 410ee3: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 410ee5: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 410ee8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 410eea: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410eec: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 410eef: jne 0x410edf */
  if (!zf) goto L_410edf;
L_410ef1: /* 410ef1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410ef3: je 0x411010 */
  if (zf) goto L_411010;
L_410ef9: /* 410ef9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 410efb: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 410efe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 410eff: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410f02: jle 0x410f07 */
  if ((zf || sf != of)) goto L_410f07;
L_410f04: /* 410f04: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 410f06: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_410f07: /* 410f07: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f09: jne 0x411014 */
  if (!zf) goto L_411014;
L_410f0f: /* 410f0f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 410f12: cmp dword ptr [eax + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f15: jne 0x411018 */
  if (!zf) goto L_411018;
L_410f1b: /* 410f1b: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 410f1e: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 410f21: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 410f24: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f26: jne 0x410ea1 */
  if (!zf) goto L_410ea1;
L_410f2c: /* 410f2c: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f30: je 0x410f53 */
  if (zf) goto L_410f53;
L_410f32: /* 410f32: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410f35: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 410f3a: jge 0x410f48 */
  if ((sf == of)) goto L_410f48;
L_410f3c: /* 410f3c: mov ecx, esi */
  ecx = esi;
/* 410f3e: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 410f40: or dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 410f43: or dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 410f46: jmp 0x410f53 */
  goto L_410f53;
L_410f48: /* 410f48: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
/* 410f4b: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 410f4d: or dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 410f50: or dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_410f53: /* 410f53: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 410f56: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f59: jne 0x411024 */
  if (!zf) goto L_411024;
L_410f5f: /* 410f5f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 410f62: cmp ecx, dword ptr [ebp + esi*4 - 0x138] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + esi*4 + 0xfffffec8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f69: jne 0x411024 */
  if (!zf) goto L_411024;
L_410f6f: /* 410f6f: cmp dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f71: jne 0x411020 */
  if (!zf) goto L_411020;
L_410f77: /* 410f77: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 410f78: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410f7b: mov edi, ebx */
  edi = ebx;
/* 410f7d: jl 0x410e89 */
  if ((sf != of)) goto L_410e89;
L_410f83: /* 410f83: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 410f86: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_410f89: /* 410f89: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 410f8c: cmp eax, dword ptr [esi - 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xffffff80u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f8f: jne 0x411028 */
  if (!zf) goto L_411028;
L_410f95: /* 410f95: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 410f98: cmp eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410f9a: jne 0x411028 */
  if (!zf) goto L_411028;
L_410fa0: /* 410fa0: add dword ptr [ebp - 8], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 410fa7: add dword ptr [ebp - 0x24], 0x204 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x204u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 410fae: shl dword ptr [ebp - 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 410fb1: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 410fb4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 410fb7: cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410fbb: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 410fbe: jl 0x410da3 */
  if ((sf != of)) goto L_410da3;
L_410fc4: /* 410fc4: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 410fc7: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410fc9: jne 0x41102c */
  if (!zf) goto L_41102c;
L_410fcb: /* 410fcb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 410fce: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 410fd1: jne 0x41102c */
  if (!zf) goto L_41102c;
L_410fd3: /* 410fd3: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 410fd6: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 410fd9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 410fdc: cmp eax, dword ptr [0x44f670] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f670u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 410fe2: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 410fe5: jl 0x410d61 */
  if ((sf != of)) goto L_410d61;
L_410feb: /* 410feb: jmp 0x410d5a */
  goto L_410d5a;
L_410ff0: /* 410ff0: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_410ff2: /* 410ff2: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 410ff3: jmp 0x410d5c */
  goto L_410d5c;
L_410ff8: /* 410ff8: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 410ffa: jmp 0x410ff2 */
  goto L_410ff2;
L_410ffc: /* 410ffc: push -6 */
  { uint32_t v = 0xfffffffau; esp -= 4; W32(esp, v); }
/* 410ffe: jmp 0x410ff2 */
  goto L_410ff2;
L_411000: /* 411000: push -8 */
  { uint32_t v = 0xfffffff8u; esp -= 4; W32(esp, v); }
/* 411002: jmp 0x410ff2 */
  goto L_410ff2;
L_411004: /* 411004: push -7 */
  { uint32_t v = 0xfffffff9u; esp -= 4; W32(esp, v); }
/* 411006: jmp 0x410ff2 */
  goto L_410ff2;
L_411008: /* 411008: push -5 */
  { uint32_t v = 0xfffffffbu; esp -= 4; W32(esp, v); }
/* 41100a: jmp 0x410ff2 */
  goto L_410ff2;
L_41100c: /* 41100c: push -9 */
  { uint32_t v = 0xfffffff7u; esp -= 4; W32(esp, v); }
/* 41100e: jmp 0x410ff2 */
  goto L_410ff2;
L_411010: /* 411010: push -0xb */
  { uint32_t v = 0xfffffff5u; esp -= 4; W32(esp, v); }
/* 411012: jmp 0x410ff2 */
  goto L_410ff2;
L_411014: /* 411014: push -0xc */
  { uint32_t v = 0xfffffff4u; esp -= 4; W32(esp, v); }
/* 411016: jmp 0x410ff2 */
  goto L_410ff2;
L_411018: /* 411018: push -0xd */
  { uint32_t v = 0xfffffff3u; esp -= 4; W32(esp, v); }
/* 41101a: jmp 0x410ff2 */
  goto L_410ff2;
L_41101c: /* 41101c: push -0xa */
  { uint32_t v = 0xfffffff6u; esp -= 4; W32(esp, v); }
/* 41101e: jmp 0x410ff2 */
  goto L_410ff2;
L_411020: /* 411020: push -0xf */
  { uint32_t v = 0xfffffff1u; esp -= 4; W32(esp, v); }
/* 411022: jmp 0x410ff2 */
  goto L_410ff2;
L_411024: /* 411024: push -0xe */
  { uint32_t v = 0xfffffff2u; esp -= 4; W32(esp, v); }
/* 411026: jmp 0x410ff2 */
  goto L_410ff2;
L_411028: /* 411028: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* 41102a: jmp 0x410ff2 */
  goto L_410ff2;
L_41102c: /* 41102c: push -0x11 */
  { uint32_t v = 0xffffffefu; esp -= 4; W32(esp, v); }
/* 41102e: jmp 0x410ff2 */
  goto L_410ff2;
}

void f_411030(void) {
  LOAD_REGS();
L_411030: /* 411030: cmp dword ptr [0x44bc90], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44bc90u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411037: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411038: jne 0x4110a1 */
  if (!zf) goto L_4110a1;
L_41103a: /* 41103a: mov esi, 0x44bc80 */
  esi = 0x44bc80u;
L_41103f: /* 41103f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411041: mov ebp, dword ptr [0x439094] */
  ebp = R32((uint32_t)(0x439094u));
/* 411047: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411048: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 41104a: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
/* 41104f: push 0x400000 */
  { uint32_t v = 0x400000u; esp -= 4; W32(esp, v); }
/* 411054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 411056: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x411058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 411058: mov edi, eax */
  edi = eax;
/* 41105a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41105c: je 0x411152 */
  if (zf) goto L_411152;
L_411062: /* 411062: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 411064: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 411069: mov ebx, 0x10000 */
  ebx = 0x10000u;
/* 41106e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41106f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411070: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x411072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 411072: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411074: je 0x411144 */
  if (zf) goto L_411144;
L_41107a: /* 41107a: mov eax, 0x44bc80 */
  eax = 0x44bc80u;
/* 41107f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411081: jne 0x4110bc */
  if (!zf) goto L_4110bc;
L_411083: /* 411083: cmp dword ptr [0x44bc80], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44bc80u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41108a: jne 0x411091 */
  if (!zf) goto L_411091;
L_41108c: /* 41108c: mov dword ptr [0x44bc80], eax */
  W32((uint32_t)(0x44bc80u), eax);
L_411091: /* 411091: cmp dword ptr [0x44bc84], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44bc84u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411098: jne 0x4110d1 */
  if (!zf) goto L_4110d1;
L_41109a: /* 41109a: mov dword ptr [0x44bc84], eax */
  W32((uint32_t)(0x44bc84u), eax);
/* 41109f: jmp 0x4110d1 */
  goto L_4110d1;
L_4110a1: /* 4110a1: push 0x2020 */
  { uint32_t v = 0x2020u; esp -= 4; W32(esp, v); }
/* 4110a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4110a8: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4110ae: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x4110b4u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 4110b4: mov esi, eax */
  esi = eax;
/* 4110b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4110b8: jne 0x41103f */
  if (!zf) goto L_41103f;
L_4110ba: /* 4110ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4110bb: ret  */
  esp += 4; SPILL(); return;
L_4110bc: /* 4110bc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4110be: mov eax, dword ptr [0x44bc84] */
  eax = R32((uint32_t)(0x44bc84u));
/* 4110c3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4110c6: mov dword ptr [0x44bc84], esi */
  W32((uint32_t)(0x44bc84u), esi);
/* 4110cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4110cf: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_4110d1: /* 4110d1: lea eax, [edi + 0x400000] */
  eax = (uint32_t)(edi + 0x400000u);
/* 4110d7: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 4110dd: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 4110e0: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 4110e3: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 4110e6: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 4110e9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4110ec: xor ebp, ebp */
  ebp = 0;
/* 4110ee: mov ecx, 0xf1 */
  ecx = 0xf1u;
L_4110f3: /* 4110f3: xor edx, edx */
  edx = 0;
/* 4110f5: cmp ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4110f8: setge dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 4110fb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4110fe: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 4110ff: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 411101: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 411102: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 411104: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 411105: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 411108: cmp ebp, 0x400 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41110e: jl 0x4110f3 */
  if ((sf != of)) goto L_4110f3;
L_411110: /* 411110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411111: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 411113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411114: call 0x4010fd */
  esp -= 4; W32(esp, 0x411119u); SPILL(); hle_memset(); RELOAD();
/* 411119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41111c: jmp 0x411137 */
  goto L_411137;
L_41111e: /* 41111e: or byte ptr [edi + 0xf8], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xf8u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edi + 0xf8u), r);
  }
/* 411125: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 411128: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 41112a: mov dword ptr [edi + 4], 0xf0 */
  W32((uint32_t)(edi + 0x4u), 0xf0u);
/* 411131: add edi, 0x1000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_411137: /* 411137: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 41113a: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41113c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41113e: jb 0x41111e */
  if (cf) goto L_41111e;
L_411140: /* 411140: mov eax, esi */
  eax = esi;
/* 411142: jmp 0x41116b */
  goto L_41116b;
L_411144: /* 411144: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 411149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41114b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41114c: call dword ptr [0x439090] */
  esp -= 4; W32(esp, 0x411152u); SPILL(); call_ind(R32(0x439090u)); if (g_unwind) return; /* KERNEL32!VirtualFree */ RELOAD();
L_411152: /* 411152: cmp esi, 0x44bc80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44bc80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411158: je 0x411169 */
  if (zf) goto L_411169;
L_41115a: /* 41115a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41115b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41115d: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 411163: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x411169u); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
L_411169: /* 411169: xor eax, eax */
  eax = 0;
L_41116b: /* 41116b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41116c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 41116d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41116e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41116f: ret  */
  esp += 4; SPILL(); return;
}

void f_411170(void) {
  LOAD_REGS();
L_411170: /* 411170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411171: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 411175: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 41117a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41117c: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 41117f: call dword ptr [0x439090] */
  esp -= 4; W32(esp, 0x411185u); SPILL(); call_ind(R32(0x439090u)); if (g_unwind) return; /* KERNEL32!VirtualFree */ RELOAD();
/* 411185: cmp dword ptr [0x44dca0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dca0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41118b: jne 0x411195 */
  if (!zf) goto L_411195;
L_41118d: /* 41118d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 411190: mov dword ptr [0x44dca0], eax */
  W32((uint32_t)(0x44dca0u), eax);
L_411195: /* 411195: cmp esi, 0x44bc80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44bc80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41119b: je 0x4111bd */
  if (zf) goto L_4111bd;
L_41119d: /* 41119d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4111a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4111a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4111a4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4111a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 4111a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4111aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4111ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4111af: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4111b5: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x4111bbu); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
/* 4111bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4111bc: ret  */
  esp += 4; SPILL(); return;
L_4111bd: /* 4111bd: or dword ptr [0x44bc90], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44bc90u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44bc90u), r);
  }
/* 4111c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4111c5: ret  */
  esp += 4; SPILL(); return;
}

void f_4111c6(void) {
  LOAD_REGS();
L_4111c6: /* 4111c6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4111c7: mov ebp, esp */
  ebp = esp;
/* 4111c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4111ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4111cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4111cc: mov esi, dword ptr [0x44bc84] */
  esi = R32((uint32_t)(0x44bc84u));
/* 4111d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4111d3: /* 4111d3: cmp dword ptr [esi + 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4111d7: je 0x411271 */
  if (zf) goto L_411271;
L_4111dd: /* 4111dd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4111e1: lea edi, [esi + 0x2010] */
  edi = (uint32_t)(esi + 0x2010u);
/* 4111e7: mov ebx, 0x3ff000 */
  ebx = 0x3ff000u;
L_4111ec: /* 4111ec: cmp dword ptr [edi], 0xf0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4111f2: jne 0x41122d */
  if (!zf) goto L_41122d;
L_4111f4: /* 4111f4: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 4111f7: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 4111fc: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 411201: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 411203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411204: call dword ptr [0x439090] */
  esp -= 4; W32(esp, 0x41120au); SPILL(); call_ind(R32(0x439090u)); if (g_unwind) return; /* KERNEL32!VirtualFree */ RELOAD();
/* 41120a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41120c: je 0x41122d */
  if (zf) goto L_41122d;
L_41120e: /* 41120e: or dword ptr [edi], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
/* 411211: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 411214: dec dword ptr [0x44f40c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f40cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f40cu), r);
  }
/* 41121a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41121c: je 0x411222 */
  if (zf) goto L_411222;
L_41121e: /* 41121e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411220: jbe 0x411225 */
  if ((cf | zf)) goto L_411225;
L_411222: /* 411222: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
L_411225: /* 411225: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 411228: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 41122b: je 0x41123a */
  if (zf) goto L_41123a;
L_41122d: /* 41122d: sub ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 411233: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 411236: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 411238: jge 0x4111ec */
  if ((sf == of)) goto L_4111ec;
L_41123a: /* 41123a: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41123e: mov ecx, esi */
  ecx = esi;
/* 411240: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 411243: je 0x411271 */
  if (zf) goto L_411271;
L_411245: /* 411245: cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411249: jne 0x411271 */
  if (!zf) goto L_411271;
L_41124b: /* 41124b: xor edx, edx */
  edx = 0;
/* 41124d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41124e: lea eax, [ecx + 0x20] */
  eax = (uint32_t)(ecx + 0x20u);
L_411251: /* 411251: cmp dword ptr [eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411254: jne 0x411262 */
  if (!zf) goto L_411262;
L_411256: /* 411256: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 411257: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41125a: cmp edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411260: jl 0x411251 */
  if ((sf != of)) goto L_411251;
L_411262: /* 411262: cmp edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411268: jne 0x411271 */
  if (!zf) goto L_411271;
L_41126a: /* 41126a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41126b: call 0x411170 */
  esp -= 4; W32(esp, 0x411270u); SPILL(); f_411170(); if (g_unwind) return; RELOAD();
/* 411270: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_411271: /* 411271: cmp esi, dword ptr [0x44bc84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44bc84u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411277: je 0x411283 */
  if (zf) goto L_411283;
L_411279: /* 411279: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41127d: jg 0x4111d3 */
  if ((!zf && sf == of)) goto L_4111d3;
L_411283: /* 411283: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411286: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411287: ret  */
  esp += 4; SPILL(); return;
}

void f_411288(void) {
  LOAD_REGS();
L_411288: /* 411288: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 41128c: mov edx, 0x44bc80 */
  edx = 0x44bc80u;
/* 411291: mov ecx, edx */
  ecx = edx;
/* 411293: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_411294: /* 411294: cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411297: jbe 0x41129e */
  if ((cf | zf)) goto L_41129e;
L_411299: /* 411299: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41129c: jb 0x4112a8 */
  if (cf) goto L_4112a8;
L_41129e: /* 41129e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4112a0: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4112a2: jne 0x411294 */
  if (!zf) goto L_411294;
L_4112a4: /* 4112a4: xor eax, eax */
  eax = 0;
/* 4112a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4112a7: ret  */
  esp += 4; SPILL(); return;
L_4112a8: /* 4112a8: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4112aa: jne 0x4112a4 */
  if (!zf) goto L_4112a4;
L_4112ac: /* 4112ac: mov esi, eax */
  esi = eax;
/* 4112ae: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4112b4: mov edx, 0x100 */
  edx = 0x100u;
/* 4112b9: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4112bb: jb 0x4112a4 */
  if (cf) goto L_4112a4;
L_4112bd: /* 4112bd: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4112c1: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4112c3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 4112c7: mov ecx, eax */
  ecx = eax;
/* 4112c9: and ecx, 0xfffff000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4112cf: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4112d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4112d3: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4112d6: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 4112d8: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 4112dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4112dd: ret  */
  esp += 4; SPILL(); return;
}

void f_4112de(void) {
  LOAD_REGS();
L_4112de: /* 4112de: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4112e2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4112e6: sub ecx, dword ptr [eax + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4112e9: sar ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 12;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4112ec: lea eax, [eax + ecx*8 + 0x18] */
  eax = (uint32_t)(eax + ecx*8 + 0x18u);
/* 4112f0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4112f4: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 4112f7: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 4112f9: and byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx), r);
  }
/* 4112fc: cmp dword ptr [eax], 0xf0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411302: mov dword ptr [eax + 4], 0xf1 */
  W32((uint32_t)(eax + 0x4u), 0xf1u);
/* 411309: jne 0x411322 */
  if (!zf) goto L_411322;
L_41130b: /* 41130b: inc dword ptr [0x44f40c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f40cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f40cu), r);
  }
/* 411311: cmp dword ptr [0x44f40c], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f40cu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411318: jne 0x411322 */
  if (!zf) goto L_411322;
L_41131a: /* 41131a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41131c: call 0x4111c6 */
  esp -= 4; W32(esp, 0x411321u); SPILL(); f_4111c6(); if (g_unwind) return; RELOAD();
/* 411321: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_411322: /* 411322: ret  */
  esp += 4; SPILL(); return;
}

void f_411323(void) {
  LOAD_REGS();
L_411323: /* 411323: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411324: mov ebp, esp */
  ebp = esp;
/* 411326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411327: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41132a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 41132d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41132e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41132f: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 411332: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411334: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411335: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 411337: lea ebx, [ecx + 0xf8] */
  ebx = (uint32_t)(ecx + 0xf8u);
/* 41133d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 411340: mov eax, edi */
  eax = edi;
/* 411342: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 411345: jb 0x411368 */
  if (cf) goto L_411368;
L_411347: /* 411347: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 41134a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41134c: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 41134e: jae 0x411357 */
  if (!cf) goto L_411357;
L_411350: /* 411350: add dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 411352: sub dword ptr [ecx + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 411355: jmp 0x411360 */
  goto L_411360;
L_411357: /* 411357: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 41135b: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 41135e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_411360: /* 411360: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 411363: jmp 0x411439 */
  goto L_411439;
L_411368: /* 411368: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41136a: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41136d: je 0x411371 */
  if (zf) goto L_411371;
L_41136f: /* 41136f: mov eax, esi */
  eax = esi;
L_411371: /* 411371: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 411374: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411376: jae 0x4113b7 */
  if (!cf) goto L_4113b7;
L_411378: /* 411378: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41137a: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41137c: jne 0x4113aa */
  if (!zf) goto L_4113aa;
L_41137e: /* 41137e: xor esi, esi */
  esi = 0;
/* 411380: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 411383: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 411384: jmp 0x411388 */
  goto L_411388;
L_411386: /* 411386: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 411387: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_411388: /* 411388: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41138b: je 0x411386 */
  if (zf) goto L_411386;
L_41138d: /* 41138d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41138f: jae 0x4113bc */
  if (!cf) goto L_4113bc;
L_411391: /* 411391: cmp eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411394: jne 0x41139b */
  if (!zf) goto L_41139b;
L_411396: /* 411396: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 411399: jmp 0x4113a3 */
  goto L_4113a3;
L_41139b: /* 41139b: sub dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 41139e: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4113a1: jb 0x411413 */
  if (cf) goto L_411413;
L_4113a3: /* 4113a3: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4113a6: mov eax, ebx */
  eax = ebx;
/* 4113a8: jmp 0x4113af */
  goto L_4113af;
L_4113aa: /* 4113aa: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* 4113ad: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4113af: /* 4113af: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 4113b2: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4113b5: jb 0x411378 */
  if (cf) goto L_411378;
L_4113b7: /* 4113b7: lea esi, [ecx + 8] */
  esi = (uint32_t)(ecx + 0x8u);
/* 4113ba: jmp 0x41140f */
  goto L_41140f;
L_4113bc: /* 4113bc: lea ebx, [eax + edx] */
  ebx = (uint32_t)(eax + edx);
/* 4113bf: cmp ebx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4113c2: jae 0x4113cd */
  if (!cf) goto L_4113cd;
L_4113c4: /* 4113c4: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4113c6: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 4113c8: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 4113cb: jmp 0x4113d6 */
  goto L_4113d6;
L_4113cd: /* 4113cd: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4113d1: lea esi, [ecx + 8] */
  esi = (uint32_t)(ecx + 0x8u);
/* 4113d4: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_4113d6: /* 4113d6: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 4113d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4113db: jmp 0x411439 */
  goto L_411439;
L_4113dd: /* 4113dd: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* 4113e0: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4113e3: jae 0x411413 */
  if (!cf) goto L_411413;
L_4113e5: /* 4113e5: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4113e7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4113e9: jne 0x41140a */
  if (!zf) goto L_41140a;
L_4113eb: /* 4113eb: xor eax, eax */
  eax = 0;
/* 4113ed: lea ebx, [esi + 1] */
  ebx = (uint32_t)(esi + 0x1u);
/* 4113f0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4113f1: jmp 0x4113f5 */
  goto L_4113f5;
L_4113f3: /* 4113f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4113f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4113f5: /* 4113f5: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4113f8: je 0x4113f3 */
  if (zf) goto L_4113f3;
L_4113fa: /* 4113fa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4113fc: jae 0x41141a */
  if (!cf) goto L_41141a;
L_4113fe: /* 4113fe: sub dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 411401: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411404: jb 0x411413 */
  if (cf) goto L_411413;
L_411406: /* 411406: mov esi, ebx */
  esi = ebx;
/* 411408: jmp 0x41140f */
  goto L_41140f;
L_41140a: /* 41140a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 41140d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_41140f: /* 41140f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411411: jb 0x4113dd */
  if (cf) goto L_4113dd;
L_411413: /* 411413: xor eax, eax */
  eax = 0;
L_411415: /* 411415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411417: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411418: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411419: ret  */
  esp += 4; SPILL(); return;
L_41141a: /* 41141a: lea ebx, [esi + edx] */
  ebx = (uint32_t)(esi + edx);
/* 41141d: cmp ebx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411420: jae 0x41142b */
  if (!cf) goto L_41142b;
L_411422: /* 411422: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 411424: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 411426: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 411429: jmp 0x411434 */
  goto L_411434;
L_41142b: /* 41142b: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 41142f: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 411432: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_411434: /* 411434: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 411436: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
L_411439: /* 411439: imul ecx, ecx, 0xf */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0xfu);
  ecx = (uint32_t)r;
  }
/* 41143c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 41143f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 411441: jmp 0x411415 */
  goto L_411415;
}

void f_411443(void) {
  LOAD_REGS();
L_411443: /* 411443: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411444: mov ebp, esp */
  ebp = esp;
/* 411446: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411447: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 41144a: movzx ecx, byte ptr [edx] */
  ecx = (uint32_t)(R8((uint32_t)(edx)));
/* 41144d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 411451: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411452: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 411455: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411456: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 411459: mov eax, ebx */
  eax = ebx;
/* 41145b: sub eax, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41145e: sar eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 411461: cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411464: lea edi, [edi + eax*8 + 0x18] */
  edi = (uint32_t)(edi + eax*8 + 0x18u);
/* 411468: jbe 0x411483 */
  if ((cf | zf)) goto L_411483;
L_41146a: /* 41146a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 41146d: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 41146f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 411471: add dword ptr [edi], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 411473: mov dword ptr [edi + 4], 0xf1 */
  W32((uint32_t)(edi + 0x4u), 0xf1u);
/* 41147a: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 411481: jmp 0x4114ec */
  goto L_4114ec;
L_411483: /* 411483: jae 0x4114ec */
  if (!cf) goto L_4114ec;
L_411485: /* 411485: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 411488: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411489: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 41148c: lea eax, [ebx + 0xf8] */
  eax = (uint32_t)(ebx + 0xf8u);
/* 411492: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411494: ja 0x4114eb */
  if ((!cf && !zf)) goto L_4114eb;
L_411496: /* 411496: lea eax, [ecx + edx] */
  eax = (uint32_t)(ecx + edx);
/* 411499: jmp 0x4114a1 */
  goto L_4114a1;
L_41149b: /* 41149b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41149e: jne 0x4114a5 */
  if (!zf) goto L_4114a5;
L_4114a0: /* 4114a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4114a1: /* 4114a1: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4114a3: jb 0x41149b */
  if (cf) goto L_41149b;
L_4114a5: /* 4114a5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4114a7: jne 0x4114eb */
  if (!zf) goto L_4114eb;
L_4114a9: /* 4114a9: mov al, byte ptr [ebp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 4114ac: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 4114ae: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4114b0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4114b2: ja 0x4114df */
  if ((!cf && !zf)) goto L_4114df;
L_4114b4: /* 4114b4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4114b6: jbe 0x4114df */
  if ((cf | zf)) goto L_4114df;
L_4114b8: /* 4114b8: lea eax, [ebx + 0xf8] */
  eax = (uint32_t)(ebx + 0xf8u);
/* 4114be: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4114c0: jae 0x4114d6 */
  if (!cf) goto L_4114d6;
L_4114c2: /* 4114c2: xor eax, eax */
  eax = 0;
/* 4114c4: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 4114c6: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4114c8: jne 0x4114d1 */
  if (!zf) goto L_4114d1;
L_4114ca: /* 4114ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4114cb: cmp byte ptr [esi + eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4114cf: je 0x4114ca */
  if (zf) goto L_4114ca;
L_4114d1: /* 4114d1: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 4114d4: jmp 0x4114df */
  goto L_4114df;
L_4114d6: /* 4114d6: and dword ptr [ebx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* 4114da: lea eax, [ebx + 8] */
  eax = (uint32_t)(ebx + 0x8u);
/* 4114dd: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
L_4114df: /* 4114df: sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4114e2: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4114e9: add dword ptr [edi], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_4114eb: /* 4114eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4114ec: /* 4114ec: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4114ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4114f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4114f1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4114f2: ret  */
  esp += 4; SPILL(); return;
}

void f_4114f3(void) {
  LOAD_REGS();
L_4114f3: /* 4114f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4114f4: mov ebp, esp */
  ebp = esp;
/* 4114f6: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4114f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4114fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4114fb: xor ebx, ebx */
  ebx = 0;
/* 4114fd: mov eax, 0x44bc80 */
  eax = 0x44bc80u;
/* 411502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411503: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 411506: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_411509: /* 411509: cmp dword ptr [0x44dca0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dca0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41150f: jne 0x411514 */
  if (!zf) goto L_411514;
L_411511: /* 411511: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_411514: /* 411514: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 411517: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41151a: je 0x411614 */
  if (zf) goto L_411614;
L_411520: /* 411520: mov edi, ecx */
  edi = ecx;
/* 411522: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 411525: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 411528: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 41152b: lea esi, [edi + 0xf8] */
  esi = (uint32_t)(edi + 0xf8u);
/* 411531: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
L_411534: /* 411534: cmp dword ptr [edx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411537: jne 0x41154f */
  if (!zf) goto L_41154f;
L_411539: /* 411539: cmp dword ptr [ebp - 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41153c: jne 0x411547 */
  if (!zf) goto L_411547;
L_41153e: /* 41153e: cmp dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411541: jne 0x411636 */
  if (!zf) goto L_411636;
L_411547: /* 411547: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41154a: jmp 0x4115f5 */
  goto L_4115f5;
L_41154f: /* 41154f: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411551: jae 0x41163b */
  if (!cf) goto L_41163b;
L_411557: /* 411557: cmp byte ptr [esi], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41155a: jne 0x411640 */
  if (!zf) goto L_411640;
L_411560: /* 411560: xor ecx, ecx */
  ecx = 0;
/* 411562: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 411565: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 411568: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
L_41156b: /* 41156b: lea edx, [esi + ecx - 0xf0] */
  edx = (uint32_t)(esi + ecx + 0xffffff10u);
/* 411572: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411574: jne 0x411579 */
  if (!zf) goto L_411579;
L_411576: /* 411576: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_411579: /* 411579: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 41157b: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41157d: jne 0x411588 */
  if (!zf) goto L_411588;
L_41157f: /* 41157f: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 411582: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 411585: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 411586: jmp 0x4115db */
  goto L_4115db;
L_411588: /* 411588: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41158b: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 41158e: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411591: jge 0x411644 */
  if ((sf == of)) goto L_411644;
L_411597: /* 411597: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41159b: jne 0x4115b0 */
  if (!zf) goto L_4115b0;
L_41159d: /* 41159d: cmp eax, dword ptr [esi - 0xf4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xffffff0cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4115a3: jl 0x411648 */
  if ((sf != of)) goto L_411648;
L_4115a9: /* 4115a9: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_4115b0: /* 4115b0: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4115b4: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 4115b7: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 4115ba: jmp 0x4115d0 */
  goto L_4115d0;
L_4115bc: /* 4115bc: cmp byte ptr [esi + edx - 0xf0], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + edx + 0xffffff10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4115c4: jne 0x41164c */
  if (!zf) goto L_41164c;
L_4115ca: /* 4115ca: movzx eax, byte ptr [ecx + edi + 8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edi + 0x8u)));
/* 4115cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_4115d0: /* 4115d0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4115d2: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4115d4: jl 0x4115bc */
  if ((sf != of)) goto L_4115bc;
L_4115d6: /* 4115d6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4115d9: mov ecx, edx */
  ecx = edx;
L_4115db: /* 4115db: cmp ecx, 0xf0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4115e1: jl 0x41156b */
  if ((sf != of)) goto L_41156b;
L_4115e3: /* 4115e3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4115e6: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4115e9: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4115eb: jne 0x411650 */
  if (!zf) goto L_411650;
L_4115ed: /* 4115ed: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4115f1: je 0x411654 */
  if (zf) goto L_411654;
L_4115f3: /* 4115f3: xor ebx, ebx */
  ebx = 0;
L_4115f5: /* 4115f5: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 4115f8: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 4115fd: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 411600: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 411602: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 411604: cmp dword ptr [ebp - 0x18], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41160b: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 41160e: jl 0x411534 */
  if ((sf != of)) goto L_411534;
L_411614: /* 411614: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 411616: cmp eax, 0x44bc80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44bc80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41161b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 41161e: jne 0x411509 */
  if (!zf) goto L_411509;
L_411624: /* 411624: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 411627: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 411629: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41162b: and eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41162e: add eax, -9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_411631: /* 411631: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411632: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411634: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411635: ret  */
  esp += 4; SPILL(); return;
L_411636: /* 411636: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 411639: jmp 0x411631 */
  goto L_411631;
L_41163b: /* 41163b: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
L_41163d: /* 41163d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 41163e: jmp 0x411631 */
  goto L_411631;
L_411640: /* 411640: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 411642: jmp 0x41163d */
  goto L_41163d;
L_411644: /* 411644: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
/* 411646: jmp 0x41163d */
  goto L_41163d;
L_411648: /* 411648: push -5 */
  { uint32_t v = 0xfffffffbu; esp -= 4; W32(esp, v); }
/* 41164a: jmp 0x41163d */
  goto L_41163d;
L_41164c: /* 41164c: push -6 */
  { uint32_t v = 0xfffffffau; esp -= 4; W32(esp, v); }
/* 41164e: jmp 0x41163d */
  goto L_41163d;
L_411650: /* 411650: push -7 */
  { uint32_t v = 0xfffffff9u; esp -= 4; W32(esp, v); }
/* 411652: jmp 0x41163d */
  goto L_41163d;
L_411654: /* 411654: push -8 */
  { uint32_t v = 0xfffffff8u; esp -= 4; W32(esp, v); }
/* 411656: jmp 0x41163d */
  goto L_41163d;
}

void f_411658(void) {
  LOAD_REGS();
L_411658: /* 411658: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411659: mov ebp, esp */
  ebp = esp;
/* 41165b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41165c: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 411661: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411664: jne 0x411677 */
  if (!zf) goto L_411677;
L_411666: /* 411666: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 411669: cmp eax, 0x3f8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41166e: ja 0x411696 */
  if ((!cf && !zf)) goto L_411696;
L_411670: /* 411670: mov dword ptr [0x44f678], eax */
  W32((uint32_t)(0x44f678u), eax);
/* 411675: jmp 0x411691 */
  goto L_411691;
L_411677: /* 411677: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41167a: jne 0x41169a */
  if (!zf) goto L_41169a;
L_41167c: /* 41167c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41167f: add eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 411682: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 411685: cmp eax, 0x780 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x780u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41168a: ja 0x411696 */
  if ((!cf && !zf)) goto L_411696;
L_41168c: /* 41168c: mov dword ptr [0x44dca4], eax */
  W32((uint32_t)(0x44dca4u), eax);
L_411691: /* 411691: xor eax, eax */
  eax = 0;
/* 411693: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 411694: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411695: ret  */
  esp += 4; SPILL(); return;
L_411696: /* 411696: xor eax, eax */
  eax = 0;
/* 411698: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411699: ret  */
  esp += 4; SPILL(); return;
L_41169a: /* 41169a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41169d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41169e: jne 0x411708 */
  if (!zf) goto L_411708;
L_4116a0: /* 4116a0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4116a3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4116a5: jbe 0x411708 */
  if ((cf | zf)) goto L_411708;
L_4116a7: /* 4116a7: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4116aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4116ab: call 0x41032a */
  esp -= 4; W32(esp, 0x4116b0u); SPILL(); f_41032a(); if (g_unwind) return; RELOAD();
/* 4116b0: cmp byte ptr [ebp - 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 4116b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4116b5: jb 0x4116df */
  if (cf) goto L_4116df;
L_4116b7: /* 4116b7: cmp esi, 0x3f8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3f8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4116bd: ja 0x411708 */
  if ((!cf && !zf)) goto L_411708;
L_4116bf: /* 4116bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4116c0: call 0x41041f */
  esp -= 4; W32(esp, 0x4116c5u); SPILL(); f_41041f(); if (g_unwind) return; RELOAD();
/* 4116c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4116c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4116c8: je 0x411708 */
  if (zf) goto L_411708;
L_4116ca: /* 4116ca: mov dword ptr [0x44f678], esi */
  W32((uint32_t)(0x44f678u), esi);
/* 4116d0: mov dword ptr [0x44a84c], 3 */
  W32((uint32_t)(0x44a84cu), 0x3u);
L_4116da: /* 4116da: xor eax, eax */
  eax = 0;
/* 4116dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4116dd: jmp 0x41170a */
  goto L_41170a;
L_4116df: /* 4116df: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4116e2: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4116e5: cmp esi, 0x780 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x780u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4116eb: ja 0x411708 */
  if ((!cf && !zf)) goto L_411708;
L_4116ed: /* 4116ed: call 0x411030 */
  esp -= 4; W32(esp, 0x4116f2u); SPILL(); f_411030(); if (g_unwind) return; RELOAD();
/* 4116f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4116f4: je 0x411708 */
  if (zf) goto L_411708;
L_4116f6: /* 4116f6: mov dword ptr [0x44dca4], esi */
  W32((uint32_t)(0x44dca4u), esi);
/* 4116fc: mov dword ptr [0x44a84c], 2 */
  W32((uint32_t)(0x44a84cu), 0x2u);
/* 411706: jmp 0x4116da */
  goto L_4116da;
L_411708: /* 411708: xor eax, eax */
  eax = 0;
L_41170a: /* 41170a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41170b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41170c: ret  */
  esp += 4; SPILL(); return;
}

void f_41170d(void) {
  LOAD_REGS();
L_41170d: /* 41170d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41170e: mov ebp, esp */
  ebp = esp;
/* 411710: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 411713: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411716: mov eax, dword ptr [0x44f670] */
  eax = R32((uint32_t)(0x44f670u));
/* 41171b: mov edx, dword ptr [0x44f674] */
  edx = R32((uint32_t)(0x44f674u));
/* 411721: add ecx, 0x17 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 411724: and ecx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 411727: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411728: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 41172b: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 41172e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41172f: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 411732: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 411733: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 411734: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411737: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* 41173a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 41173d: jge 0x41174a */
  if ((sf == of)) goto L_41174a;
L_41173f: /* 41173f: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 411742: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 411744: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 411748: jmp 0x411757 */
  goto L_411757;
L_41174a: /* 41174a: add ecx, -0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41174d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 411750: xor esi, esi */
  esi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 411752: shr eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
  }
/* 411754: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_411757: /* 411757: mov eax, dword ptr [0x44f67c] */
  eax = R32((uint32_t)(0x44f67cu));
/* 41175c: mov ebx, eax */
  ebx = eax;
/* 41175e: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 411761: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411763: jmp 0x411779 */
  goto L_411779;
L_411765: /* 411765: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 411768: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 41176a: and ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41176d: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 41176f: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 411771: jne 0x41177e */
  if (!zf) goto L_41177e;
L_411773: /* 411773: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 411776: cmp ebx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
L_411779: /* 411779: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 41177c: jb 0x411765 */
  if (cf) goto L_411765;
L_41177e: /* 41177e: cmp ebx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411781: jne 0x4117a7 */
  if (!zf) goto L_4117a7;
L_411783: /* 411783: mov ebx, edx */
  ebx = edx;
/* 411785: jmp 0x411798 */
  goto L_411798;
L_411787: /* 411787: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 41178a: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 41178c: and ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41178f: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 411791: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 411793: jne 0x41179f */
  if (!zf) goto L_41179f;
L_411795: /* 411795: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_411798: /* 411798: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41179a: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 41179d: jb 0x411787 */
  if (cf) goto L_411787;
L_41179f: /* 41179f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4117a1: je 0x41183b */
  if (zf) goto L_41183b;
L_4117a7: /* 4117a7: mov dword ptr [0x44f67c], ebx */
  W32((uint32_t)(0x44f67cu), ebx);
/* 4117ad: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 4117b0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4117b2: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4117b5: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 4117b8: je 0x4117ce */
  if (zf) goto L_4117ce;
L_4117ba: /* 4117ba: mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0xc4u));
/* 4117c1: mov edi, dword ptr [eax + edx*4 + 0x44] */
  edi = R32((uint32_t)(eax + edx*4 + 0x44u));
/* 4117c5: and ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4117c8: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 4117ca: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4117cc: jne 0x411804 */
  if (!zf) goto L_411804;
L_4117ce: /* 4117ce: mov edx, dword ptr [eax + 0xc4] */
  edx = R32((uint32_t)(eax + 0xc4u));
/* 4117d4: and edx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4117d7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4117db: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 4117de: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4117e0: and esi, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4117e3: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 4117e5: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4117e8: jne 0x411801 */
  if (!zf) goto L_411801;
L_4117ea: /* 4117ea: mov edx, dword ptr [ecx + 0x84] */
  edx = R32((uint32_t)(ecx + 0x84u));
/* 4117f0: and edx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4117f3: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4117f6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4117f9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 4117fb: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 4117fd: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  edx = r;
  }
/* 4117ff: je 0x4117ea */
  if (zf) goto L_4117ea;
L_411801: /* 411801: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_411804: /* 411804: mov ecx, edx */
  ecx = edx;
/* 411806: imul ecx, ecx, 0x204 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x204u);
  ecx = (uint32_t)r;
  }
/* 41180c: lea ecx, [ecx + eax + 0x144] */
  ecx = (uint32_t)(ecx + eax + 0x144u);
/* 411813: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 411816: mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x44u));
/* 41181a: xor edi, edi */
  edi = 0;
/* 41181c: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41181e: jne 0x41188d */
  if (!zf) goto L_41188d;
L_411820: /* 411820: mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0xc4u));
/* 411827: and ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41182a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41182c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41182d: jmp 0x41188d */
  goto L_41188d;
L_41182f: /* 41182f: cmp dword ptr [ebx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411833: jne 0x411840 */
  if (!zf) goto L_411840;
L_411835: /* 411835: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 411838: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
L_41183b: /* 41183b: cmp ebx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 41183e: jb 0x41182f */
  if (cf) goto L_41182f;
L_411840: /* 411840: cmp ebx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411843: jne 0x41186b */
  if (!zf) goto L_41186b;
L_411845: /* 411845: mov ebx, edx */
  ebx = edx;
/* 411847: jmp 0x411852 */
  goto L_411852;
L_411849: /* 411849: cmp dword ptr [ebx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41184d: jne 0x411859 */
  if (!zf) goto L_411859;
L_41184f: /* 41184f: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_411852: /* 411852: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411854: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 411857: jb 0x411849 */
  if (cf) goto L_411849;
L_411859: /* 411859: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41185b: jne 0x41186b */
  if (!zf) goto L_41186b;
L_41185d: /* 41185d: call 0x4107aa */
  esp -= 4; W32(esp, 0x411862u); SPILL(); f_4107aa(); if (g_unwind) return; RELOAD();
/* 411862: mov ebx, eax */
  ebx = eax;
/* 411864: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411866: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 411869: je 0x411883 */
  if (zf) goto L_411883;
L_41186b: /* 41186b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41186c: call 0x410861 */
  esp -= 4; W32(esp, 0x411871u); SPILL(); f_410861(); if (g_unwind) return; RELOAD();
/* 411871: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 411872: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 411875: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 411877: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 41187a: cmp dword ptr [eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41187d: jne 0x4117a7 */
  if (!zf) goto L_4117a7;
L_411883: /* 411883: xor eax, eax */
  eax = 0;
/* 411885: jmp 0x411a04 */
  goto L_411a04;
L_41188a: /* 41188a: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 41188c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_41188d: /* 41188d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41188f: jge 0x41188a */
  if ((sf == of)) goto L_41188a;
L_411891: /* 411891: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 411894: mov edx, dword ptr [ecx + edi*8 + 4] */
  edx = R32((uint32_t)(ecx + edi*8 + 0x4u));
/* 411898: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 41189a: sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 41189d: mov esi, ecx */
  esi = ecx;
/* 41189f: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 4118a2: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4118a3: cmp esi, 0x3f */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4118a6: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 4118a9: jle 0x4118ae */
  if ((zf || sf != of)) goto L_4118ae;
L_4118ab: /* 4118ab: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 4118ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4118ae: /* 4118ae: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4118b0: je 0x4119b7 */
  if (zf) goto L_4119b7;
L_4118b6: /* 4118b6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 4118b9: cmp ecx, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4118bc: jne 0x41191a */
  if (!zf) goto L_41191a;
L_4118be: /* 4118be: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4118c1: mov ebx, 0x80000000 */
  ebx = 0x80000000u;
/* 4118c6: jge 0x4118ee */
  if ((sf == of)) goto L_4118ee;
L_4118c8: /* 4118c8: mov ecx, edi */
  ecx = edi;
/* 4118ca: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 4118cc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4118cf: lea edi, [eax + edi + 4] */
  edi = (uint32_t)(eax + edi + 0x4u);
/* 4118d3: not ebx */
  ebx = ~ebx;
/* 4118d5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4118d8: and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx*4 + 0x44u)));
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 4118dc: mov dword ptr [eax + ecx*4 + 0x44], ebx */
  W32((uint32_t)(eax + ecx*4 + 0x44u), ebx);
/* 4118e0: dec byte ptr [edi] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(edi), r);
  }
/* 4118e2: jne 0x411917 */
  if (!zf) goto L_411917;
L_4118e4: /* 4118e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 4118e7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4118ea: and dword ptr [ebx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx), r);
  }
/* 4118ec: jmp 0x41191a */
  goto L_41191a;
L_4118ee: /* 4118ee: lea ecx, [edi - 0x20] */
  ecx = (uint32_t)(edi + 0xffffffe0u);
/* 4118f1: shr ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
  }
/* 4118f3: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4118f6: lea ecx, [eax + ecx*4 + 0xc4] */
  ecx = (uint32_t)(eax + ecx*4 + 0xc4u);
/* 4118fd: lea edi, [eax + edi + 4] */
  edi = (uint32_t)(eax + edi + 0x4u);
/* 411901: not ebx */
  ebx = ~ebx;
/* 411903: and dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 411905: dec byte ptr [edi] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - 1);
  zf = (r) == 0;
  W8((uint32_t)(edi), r);
  }
/* 411907: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 41190a: jne 0x411917 */
  if (!zf) goto L_411917;
L_41190c: /* 41190c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 41190f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 411912: and dword ptr [ebx + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x4u), r);
  }
/* 411915: jmp 0x41191a */
  goto L_41191a;
L_411917: /* 411917: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_41191a: /* 41191a: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41191e: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 411921: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 411924: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 411927: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 41192a: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 41192d: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 411930: je 0x4119c3 */
  if (zf) goto L_4119c3;
L_411936: /* 411936: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 411939: lea ecx, [ecx + esi*8] */
  ecx = (uint32_t)(ecx + esi*8);
/* 41193c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 41193f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 411942: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 411945: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 411948: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 41194b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 41194e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 411951: cmp ecx, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411954: jne 0x4119b4 */
  if (!zf) goto L_4119b4;
L_411956: /* 411956: mov cl, byte ptr [esi + eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax + 0x4u))) & 0xffu);
/* 41195a: mov byte ptr [ebp + 0xb], cl */
  W8((uint32_t)(ebp + 0xbu), (ecx & 0xffu));
/* 41195d: inc cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41195f: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411962: mov byte ptr [esi + eax + 4], cl */
  W8((uint32_t)(esi + eax + 0x4u), (ecx & 0xffu));
/* 411966: jge 0x41198b */
  if ((sf == of)) goto L_41198b;
L_411968: /* 411968: cmp byte ptr [ebp + 0xb], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41196c: jne 0x411979 */
  if (!zf) goto L_411979;
L_41196e: /* 41196e: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 411973: mov ecx, esi */
  ecx = esi;
/* 411975: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 411977: or dword ptr [ebx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ebx), r);
  }
L_411979: /* 411979: mov ecx, esi */
  ecx = esi;
/* 41197b: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 411980: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 411982: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 411985: or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4 + 0x44u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + ecx*4 + 0x44u), r);
  }
/* 411989: jmp 0x4119b4 */
  goto L_4119b4;
L_41198b: /* 41198b: cmp byte ptr [ebp + 0xb], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41198f: jne 0x41199e */
  if (!zf) goto L_41199e;
L_411991: /* 411991: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
/* 411994: mov edi, 0x80000000 */
  edi = 0x80000000u;
/* 411999: shr edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
  }
/* 41199b: or dword ptr [ebx + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  W32((uint32_t)(ebx + 0x4u), r);
  }
L_41199e: /* 41199e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4119a1: lea edi, [eax + ecx*4 + 0xc4] */
  edi = (uint32_t)(eax + ecx*4 + 0xc4u);
/* 4119a8: lea ecx, [esi - 0x20] */
  ecx = (uint32_t)(esi + 0xffffffe0u);
/* 4119ab: mov esi, 0x80000000 */
  esi = 0x80000000u;
/* 4119b0: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 4119b2: or dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_4119b4: /* 4119b4: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_4119b7: /* 4119b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4119b9: je 0x4119c6 */
  if (zf) goto L_4119c6;
L_4119bb: /* 4119bb: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 4119bd: mov dword ptr [ecx + edx - 4], ecx */
  W32((uint32_t)(ecx + edx + 0xfffffffcu), ecx);
/* 4119c1: jmp 0x4119c6 */
  goto L_4119c6;
L_4119c3: /* 4119c3: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
L_4119c6: /* 4119c6: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4119c9: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4119cb: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 4119ce: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 4119d0: mov dword ptr [edx + esi - 4], ecx */
  W32((uint32_t)(edx + esi + 0xfffffffcu), ecx);
/* 4119d4: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4119d7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4119d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4119db: lea edi, [ecx + 1] */
  edi = (uint32_t)(ecx + 0x1u);
/* 4119de: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 4119e0: jne 0x4119fc */
  if (!zf) goto L_4119fc;
L_4119e2: /* 4119e2: cmp ebx, dword ptr [0x44f66c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f66cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4119e8: jne 0x4119fc */
  if (!zf) goto L_4119fc;
L_4119ea: /* 4119ea: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4119ed: cmp ecx, dword ptr [0x44f684] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f684u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4119f3: jne 0x4119fc */
  if (!zf) goto L_4119fc;
L_4119f5: /* 4119f5: and dword ptr [0x44f66c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f66cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f66cu), r);
  }
L_4119fc: /* 4119fc: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4119ff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 411a01: lea eax, [edx + 4] */
  eax = (uint32_t)(edx + 0x4u);
L_411a04: /* 411a04: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411a05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411a06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411a07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411a08: ret  */
  esp += 4; SPILL(); return;
}

void f_411a09(void) {
  LOAD_REGS();
L_411a09: /* 411a09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 411a0a: mov ebp, esp */
  ebp = esp;
/* 411a0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411a0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411a0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411a0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411a10: mov esi, dword ptr [0x44dca0] */
  esi = R32((uint32_t)(0x44dca0u));
/* 411a16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_411a17: /* 411a17: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 411a1a: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411a1d: je 0x411ab2 */
  if (zf) goto L_411ab2;
L_411a23: /* 411a23: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 411a26: mov ebx, edi */
  ebx = edi;
/* 411a28: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 411a2a: sub ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 411a2d: sar ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 411a30: shl ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 411a33: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 411a35: jmp 0x411a67 */
  goto L_411a67;
L_411a37: /* 411a37: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 411a39: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411a3c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411a3e: jl 0x411a5e */
  if ((sf != of)) goto L_411a5e;
L_411a40: /* 411a40: cmp dword ptr [edi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411a43: jbe 0x411a5e */
  if ((cf | zf)) goto L_411a5e;
L_411a45: /* 411a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411a48: call 0x411323 */
  esp -= 4; W32(esp, 0x411a4du); SPILL(); f_411323(); if (g_unwind) return; RELOAD();
/* 411a4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411a50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411a52: jne 0x411b15 */
  if (!zf) goto L_411b15;
L_411a58: /* 411a58: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 411a5b: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_411a5e: /* 411a5e: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 411a61: add ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_411a67: /* 411a67: lea eax, [esi + 0x2018] */
  eax = (uint32_t)(esi + 0x2018u);
/* 411a6d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411a6f: jb 0x411a37 */
  if (cf) goto L_411a37;
L_411a71: /* 411a71: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 411a74: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 411a77: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 411a7a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411a7c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 411a7f: jae 0x411ab2 */
  if (!cf) goto L_411ab2;
L_411a81: /* 411a81: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 411a83: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411a86: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411a88: jl 0x411aa4 */
  if ((sf != of)) goto L_411aa4;
L_411a8a: /* 411a8a: cmp dword ptr [edi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 411a8d: jbe 0x411aa4 */
  if ((cf | zf)) goto L_411aa4;
L_411a8f: /* 411a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 411a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411a91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 411a92: call 0x411323 */
  esp -= 4; W32(esp, 0x411a97u); SPILL(); f_411323(); if (g_unwind) return; RELOAD();
/* 411a97: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411a9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411a9c: jne 0x411b15 */
  if (!zf) goto L_411b15;
L_411a9e: /* 411a9e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 411aa1: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_411aa4: /* 411aa4: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 411aa7: add ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 411aad: cmp edi, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411ab0: jb 0x411a81 */
  if (cf) goto L_411a81;
L_411ab2: /* 411ab2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 411ab4: cmp esi, dword ptr [0x44dca0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411aba: jne 0x411a17 */
  if (!zf) goto L_411a17;
L_411ac0: /* 411ac0: mov eax, 0x44bc80 */
  eax = 0x44bc80u;
/* 411ac5: mov edi, eax */
  edi = eax;
L_411ac7: /* 411ac7: cmp dword ptr [edi + 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411acb: je 0x411ad3 */
  if (zf) goto L_411ad3;
L_411acd: /* 411acd: cmp dword ptr [edi + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411ad1: jne 0x411b28 */
  if (!zf) goto L_411b28;
L_411ad3: /* 411ad3: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 411ad5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411ad7: jne 0x411ac7 */
  if (!zf) goto L_411ac7;
L_411ad9: /* 411ad9: call 0x411030 */
  esp -= 4; W32(esp, 0x411adeu); SPILL(); f_411030(); if (g_unwind) return; RELOAD();
/* 411ade: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 411ae0: je 0x411bfd */
  if (zf) goto L_411bfd;
L_411ae6: /* 411ae6: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 411ae9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 411aec: lea esi, [ecx + edx + 8] */
  esi = (uint32_t)(ecx + edx + 0x8u);
/* 411af0: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 411af2: mov esi, 0xf0 */
  esi = 0xf0u;
/* 411af7: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 411af9: mov byte ptr [ecx + 8], dl */
  W8((uint32_t)(ecx + 0x8u), (edx & 0xffu));
/* 411afc: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 411aff: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 411b02: sub dword ptr [eax + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax + 0x18u), r);
  }
/* 411b05: mov dword ptr [0x44dca0], eax */
  W32((uint32_t)(0x44dca0u), eax);
/* 411b0a: lea eax, [ecx + 0x100] */
  eax = (uint32_t)(ecx + 0x100u);
/* 411b10: jmp 0x411bff */
  goto L_411bff;
L_411b15: /* 411b15: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 411b18: sub dword ptr [edi], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edi), r);
  }
/* 411b1a: mov dword ptr [0x44dca0], esi */
  W32((uint32_t)(0x44dca0u), esi);
/* 411b20: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 411b23: jmp 0x411bff */
  goto L_411bff;
L_411b28: /* 411b28: mov ebx, dword ptr [edi + 0xc] */
  ebx = R32((uint32_t)(edi + 0xcu));
/* 411b2b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 411b2f: mov esi, ebx */
  esi = ebx;
/* 411b31: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 411b33: sub esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 411b36: sar esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 411b39: shl esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 411b3c: add esi, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 411b3f: cmp dword ptr [ebx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411b42: mov eax, ebx */
  eax = ebx;
/* 411b44: jne 0x411b57 */
  if (!zf) goto L_411b57;
L_411b46: /* 411b46: cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 411b4a: jge 0x411b57 */
  if ((sf == of)) goto L_411b57;
L_411b4c: /* 411b4c: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 411b4f: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 411b52: cmp dword ptr [eax], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411b55: je 0x411b46 */
  if (zf) goto L_411b46;
L_411b57: /* 411b57: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 411b5a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 411b5c: shl eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 411b5f: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 411b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 411b65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411b66: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 411b69: call dword ptr [0x439094] */
  esp -= 4; W32(esp, 0x411b6fu); SPILL(); call_ind(R32(0x439094u)); if (g_unwind) return; /* KERNEL32!VirtualAlloc */ RELOAD();
/* 411b6f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411b71: jne 0x411bfd */
  if (!zf) goto L_411bfd;
L_411b77: /* 411b77: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 411b7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 411b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 411b7d: call 0x4010fd */
  esp -= 4; W32(esp, 0x411b82u); SPILL(); hle_memset(); RELOAD();
/* 411b82: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 411b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 411b88: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 411b8a: mov ecx, ebx */
  ecx = ebx;
/* 411b8c: jle 0x411bbe */
  if ((zf || sf != of)) goto L_411bbe;
L_411b8e: /* 411b8e: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 411b91: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
L_411b94: /* 411b94: or byte ptr [eax + 0xf4], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xf4u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0xf4u), r);
  }
/* 411b9b: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 411b9e: mov dword ptr [eax - 4], edx */
  W32((uint32_t)(eax + 0xfffffffcu), edx);
/* 411ba1: mov edx, 0xf0 */
  edx = 0xf0u;
/* 411ba6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 411ba8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 411baa: mov dword ptr [ecx + 4], 0xf1 */
  W32((uint32_t)(ecx + 0x4u), 0xf1u);
/* 411bb1: add eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 411bb6: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 411bb9: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 411bbc: jne 0x411b94 */
  if (!zf) goto L_411b94;
L_411bbe: /* 411bbe: mov dword ptr [0x44dca0], edi */
  W32((uint32_t)(0x44dca0u), edi);
/* 411bc4: lea eax, [edi + 0x2018] */
  eax = (uint32_t)(edi + 0x2018u);
/* 411bca: jmp 0x411bd4 */
  goto L_411bd4;
L_411bcc: /* 411bcc: cmp dword ptr [ecx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 411bcf: je 0x411bd8 */
  if (zf) goto L_411bd8;
L_411bd1: /* 411bd1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_411bd4: /* 411bd4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411bd6: jb 0x411bcc */
  if (cf) goto L_411bcc;
L_411bd8: /* 411bd8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 411bda: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 411bdc: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 411bde: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 411be1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 411be4: mov byte ptr [esi + 8], al */
  W8((uint32_t)(esi + 0x8u), (eax & 0xffu));
/* 411be7: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 411bea: sub dword ptr [ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebx), r);
  }
/* 411bec: sub dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 411bef: lea ecx, [esi + eax + 8] */
  ecx = (uint32_t)(esi + eax + 0x8u);
/* 411bf3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 411bf5: lea eax, [esi + 0x100] */
  eax = (uint32_t)(esi + 0x100u);
/* 411bfb: jmp 0x411bff */
  goto L_411bff;
L_411bfd: /* 411bfd: xor eax, eax */
  eax = 0;
L_411bff: /* 411bff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 411c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 411c01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 411c02: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 411c03: ret  */
  esp += 4; SPILL(); return;
}
