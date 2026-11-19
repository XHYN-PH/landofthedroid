#include "recomp.h"
#include "rec_mod.h"

void f_8617ec(void) {
  LOAD_REGS();
L_8617ec: /* 8617ec: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 8617f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8617f7: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8617fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8617fe: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 861804: call 0x99caf8 */
  esp -= 4; W32(esp, 0x861809u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_861809(); return;
}

void f_861809(void) {
  LOAD_REGS();
L_861809: /* 861809: push 0xa17c44 */
  { uint32_t v = 0xa17c44u; esp -= 4; W32(esp, v); }
/* 86180e: push 0xae50e8 */
  { uint32_t v = 0xae50e8u; esp -= 4; W32(esp, v); }
/* 861813: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x861819u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 861819: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86181c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86181e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861820: call 0x99caf8 */
  esp -= 4; W32(esp, 0x861825u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_861825: guest_badaddr(0x861825); return;
}

void f_861f60(void) {
  LOAD_REGS();
L_861f60: /* 861f60: mov eax, ecx */
  eax = ecx;
/* 861f62: ret  */
  esp += 4; SPILL(); return;
}

void f_861f80(void) {
  LOAD_REGS();
L_861f80: /* 861f80: mov eax, ecx */
  eax = ecx;
/* 861f82: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x861f82); /* movaps xmmword ptr [eax], xmm0 */
/* 861f85: ret  */
  esp += 4; SPILL(); return;
}

void f_861fa0(void) {
  LOAD_REGS();
L_861fa0: /* 861fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 861fa4: movaps xmm0, xmmword ptr [ecx] */
  guest_unsupported(0x861fa4); /* movaps xmm0, xmmword ptr [ecx] */
/* 861fa7: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x861fa7); /* movaps xmmword ptr [eax], xmm0 */
/* 861faa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_861fc0(void) {
  LOAD_REGS();
L_861fc0: /* 861fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 861fc1: mov ebp, esp */
  ebp = esp;
/* 861fc3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 861fc6: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x861fc6); /* movaps xmm0, xmmword ptr [eax] */
/* 861fc9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 861fcc: movaps xmm1, xmmword ptr [ecx] */
  guest_unsupported(0x861fcc); /* movaps xmm1, xmmword ptr [ecx] */
/* 861fcf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 861fd2: andps xmm1, xmm0 */
  guest_unsupported(0x861fd2); /* andps xmm1, xmm0 */
/* 861fd5: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 861fd8: movaps xmmword ptr [eax], xmm1 */
  guest_unsupported(0x861fd8); /* movaps xmmword ptr [eax], xmm1 */
/* 861fdb: mov esp, ebp */
  esp = ebp;
/* 861fdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 861fde: ret  */
  esp += 4; SPILL(); return;
}

void f_861ff0(void) {
  LOAD_REGS();
L_861ff0: /* 861ff0: mov eax, ecx */
  eax = ecx;
/* 861ff2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 861ff6: movaps xmm0, xmmword ptr [ecx] */
  guest_unsupported(0x861ff6); /* movaps xmm0, xmmword ptr [ecx] */
/* 861ff9: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x861ff9); /* movaps xmmword ptr [eax], xmm0 */
/* 861ffc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862010(void) {
  LOAD_REGS();
L_862010: /* 862010: mov eax, ecx */
  eax = ecx;
/* 862012: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 862016: movaps xmm0, xmmword ptr [ecx] */
  guest_unsupported(0x862016); /* movaps xmm0, xmmword ptr [ecx] */
/* 862019: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x862019); /* movaps xmmword ptr [eax], xmm0 */
/* 86201c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862030(void) {
  LOAD_REGS();
L_862030: /* 862030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 862031: mov ebp, esp */
  ebp = esp;
/* 862033: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 862036: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x862036); /* movaps xmm0, xmmword ptr [eax] */
/* 862039: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86203c: movaps xmm1, xmmword ptr [ecx] */
  guest_unsupported(0x86203c); /* movaps xmm1, xmmword ptr [ecx] */
/* 86203f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 862042: cmpltps xmm0, xmm1 */
  guest_unsupported(0x862042); /* cmpltps xmm0, xmm1 */
/* 862046: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 862049: movaps xmmword ptr [eax], xmm0 */
  guest_unsupported(0x862049); /* movaps xmmword ptr [eax], xmm0 */
/* 86204c: mov esp, ebp */
  esp = ebp;
/* 86204e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86204f: ret  */
  esp += 4; SPILL(); return;
}

void f_862060(void) {
  LOAD_REGS();
L_862060: /* 862060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 862061: mov ebp, esp */
  ebp = esp;
/* 862063: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 862066: movaps xmm0, xmmword ptr [eax] */
  guest_unsupported(0x862066); /* movaps xmm0, xmmword ptr [eax] */
/* 862069: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 86206c: movmskps eax, xmm0 */
  guest_unsupported(0x86206c); /* movmskps eax, xmm0 */
/* 86206f: mov esp, ebp */
  esp = ebp;
/* 862071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 862072: ret  */
  esp += 4; SPILL(); return;
}

void f_862090(void) {
  LOAD_REGS();
L_862090: /* 862090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 862091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 862092: mov ebx, ecx */
  ebx = ecx;
/* 862094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 862095: mov esi, ebx */
  esi = ebx;
/* 862097: mov edi, 0x20 */
  edi = 0x20u;
/* 86209c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8620a0: /* 8620a0: mov ecx, esi */
  ecx = esi;
/* 8620a2: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x8620a8u); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 8620a8: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8620ab: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8620ac: jne 0x8620a0 */
  if (!zf) goto L_8620a0;
L_8620ae: /* 8620ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8620af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8620b0: mov dword ptr [ebx + 0x200], 0 */
  W32((uint32_t)(ebx + 0x200u), 0x0u);
/* 8620ba: mov eax, ebx */
  eax = ebx;
/* 8620bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8620bd: ret  */
  esp += 4; SPILL(); return;
}

void f_8620d0(void) {
  LOAD_REGS();
L_8620d0: /* 8620d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8620d1: mov ebp, esp */
  ebp = esp;
/* 8620d3: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 8620d6: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8620d9: mov eax, dword ptr [0xcfa198] */
  eax = R32((uint32_t)(0xcfa198u));
/* 8620de: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8620e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8620e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8620e3: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8620e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8620e6: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8620ea: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 8620ee: je 0x8622c2 */
  if (zf) goto L_8622c2;
L_8620f4: /* 8620f4: mov eax, dword ptr [ecx + 0x200] */
  eax = R32((uint32_t)(ecx + 0x200u));
/* 8620fa: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8620fd: jl 0x8622c2 */
  if ((sf != of)) goto L_8622c2;
L_862103: /* 862103: mov esi, eax */
  esi = eax;
/* 862105: and esi, 0x80000003 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 86210b: jns 0x862112 */
  if (!sf) goto L_862112;
L_86210d: /* 86210d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 86210e: or esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 862111: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_862112: /* 862112: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 862115: movss xmm0, dword ptr [edi] */
  guest_unsupported(0x862115); /* movss xmm0, dword ptr [edi] */
/* 862119: movss xmm6, dword ptr [edi + 8] */
  guest_unsupported(0x862119); /* movss xmm6, dword ptr [edi + 8] */
/* 86211e: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x86211e); /* shufps xmm0, xmm0, 0 */
/* 862122: movaps xmmword ptr [esp + 0x50], xmm0 */
  guest_unsupported(0x862122); /* movaps xmmword ptr [esp + 0x50], xmm0 */
/* 862127: movss xmm0, dword ptr [edi + 4] */
  guest_unsupported(0x862127); /* movss xmm0, dword ptr [edi + 4] */
/* 86212c: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x86212c); /* shufps xmm0, xmm0, 0 */
/* 862130: movaps xmmword ptr [esp + 0x40], xmm0 */
  guest_unsupported(0x862130); /* movaps xmmword ptr [esp + 0x40], xmm0 */
/* 862135: movss xmm0, dword ptr [edi + 0xc] */
  guest_unsupported(0x862135); /* movss xmm0, dword ptr [edi + 0xc] */
/* 86213a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86213c: xor edx, edx */
  edx = 0;
/* 86213e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 862140: shufps xmm6, xmm6, 0 */
  guest_unsupported(0x862140); /* shufps xmm6, xmm6, 0 */
/* 862144: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x862144); /* shufps xmm0, xmm0, 0 */
/* 862148: movaps xmmword ptr [esp + 0x20], xmm6 */
  guest_unsupported(0x862148); /* movaps xmmword ptr [esp + 0x20], xmm6 */
/* 86214d: movaps xmmword ptr [esp + 0x70], xmm0 */
  guest_unsupported(0x86214d); /* movaps xmmword ptr [esp + 0x70], xmm0 */
/* 862152: jle 0x862248 */
  if ((zf || sf != of)) goto L_862248;
L_862158: /* 862158: movaps xmm4, xmmword ptr [esp + 0x70] */
  guest_unsupported(0x862158); /* movaps xmm4, xmmword ptr [esp + 0x70] */
/* 86215d: xorps xmm1, xmm1 */
  guest_unsupported(0x86215d); /* xorps xmm1, xmm1 */
/* 862160: subps xmm1, xmm0 */
  guest_unsupported(0x862160); /* subps xmm1, xmm0 */
/* 862163: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862166: movaps xmmword ptr [esp + 0x60], xmm1 */
  guest_unsupported(0x862166); /* movaps xmmword ptr [esp + 0x60], xmm1 */
/* 86216b: movaps xmm1, xmmword ptr [esp + 0x70] */
  guest_unsupported(0x86216b); /* movaps xmm1, xmmword ptr [esp + 0x70] */
/* 862170: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 862174: jmp 0x862180 */
  goto L_862180;
L_862176: /* 862176: movaps xmm6, xmmword ptr [esp + 0x20] */
  guest_unsupported(0x862176); /* movaps xmm6, xmmword ptr [esp + 0x20] */
/* 86217b: jmp 0x862180 */
  goto L_862180;
L_862180: /* 862180: movlps xmm4, qword ptr [ecx - 0x30] */
  guest_unsupported(0x862180); /* movlps xmm4, qword ptr [ecx - 0x30] */
/* 862184: lea ebx, [ecx - 0x20] */
  ebx = (uint32_t)(ecx + 0xffffffe0u);
/* 862187: add ecx, -0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86218a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86218e: movlps xmm1, qword ptr [ecx - 0x10] */
  guest_unsupported(0x86218e); /* movlps xmm1, qword ptr [ecx - 0x10] */
/* 862192: movhps xmm1, qword ptr [ecx] */
  guest_unsupported(0x862192); /* movhps xmm1, qword ptr [ecx] */
/* 862195: movaps xmm0, xmm4 */
  guest_unsupported(0x862195); /* movaps xmm0, xmm4 */
/* 862198: movhps xmm0, qword ptr [ebx] */
  guest_unsupported(0x862198); /* movhps xmm0, qword ptr [ebx] */
/* 86219b: lea ebx, [ecx - 0x10] */
  ebx = (uint32_t)(ecx + 0xfffffff0u);
/* 86219e: movaps xmm2, xmm0 */
  guest_unsupported(0x86219e); /* movaps xmm2, xmm0 */
/* 8621a1: movaps xmm3, xmm0 */
  guest_unsupported(0x8621a1); /* movaps xmm3, xmm0 */
/* 8621a4: movlps xmm0, qword ptr [ecx - 0x28] */
  guest_unsupported(0x8621a4); /* movlps xmm0, qword ptr [ecx - 0x28] */
/* 8621a8: movhps xmm0, qword ptr [ecx - 0x18] */
  guest_unsupported(0x8621a8); /* movhps xmm0, qword ptr [ecx - 0x18] */
/* 8621ac: lea ebx, [ecx - 0x18] */
  ebx = (uint32_t)(ecx + 0xffffffe8u);
/* 8621af: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8621b2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8621b6: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
/* 8621b9: movaps xmm4, xmm0 */
  guest_unsupported(0x8621b9); /* movaps xmm4, xmm0 */
/* 8621bc: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8621bf: movaps xmm5, xmm1 */
  guest_unsupported(0x8621bf); /* movaps xmm5, xmm1 */
/* 8621c2: movaps xmmword ptr [esp + 0x30], xmm1 */
  guest_unsupported(0x8621c2); /* movaps xmmword ptr [esp + 0x30], xmm1 */
/* 8621c7: movlps xmm1, qword ptr [ecx] */
  guest_unsupported(0x8621c7); /* movlps xmm1, qword ptr [ecx] */
/* 8621ca: movhps xmm1, qword ptr [ebx] */
  guest_unsupported(0x8621ca); /* movhps xmm1, qword ptr [ebx] */
/* 8621cd: shufps xmm3, xmmword ptr [esp + 0x30], 0xdd */
  guest_unsupported(0x8621cd); /* shufps xmm3, xmmword ptr [esp + 0x30], 0xdd */
/* 8621d3: mulps xmm3, xmmword ptr [esp + 0x40] */
  guest_unsupported(0x8621d3); /* mulps xmm3, xmmword ptr [esp + 0x40] */
/* 8621d8: mov bl, byte ptr [esp + 0x17] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 8621dc: shufps xmm0, xmm1, 0xdd */
  guest_unsupported(0x8621dc); /* shufps xmm0, xmm1, 0xdd */
/* 8621e0: movaps xmm7, xmm0 */
  guest_unsupported(0x8621e0); /* movaps xmm7, xmm0 */
/* 8621e3: shufps xmm2, xmm5, 0x88 */
  guest_unsupported(0x8621e3); /* shufps xmm2, xmm5, 0x88 */
/* 8621e7: mulps xmm2, xmmword ptr [esp + 0x50] */
  guest_unsupported(0x8621e7); /* mulps xmm2, xmmword ptr [esp + 0x50] */
/* 8621ec: movaps xmm0, xmm4 */
  guest_unsupported(0x8621ec); /* movaps xmm0, xmm4 */
/* 8621ef: shufps xmm0, xmm1, 0x88 */
  guest_unsupported(0x8621ef); /* shufps xmm0, xmm1, 0x88 */
/* 8621f3: mulps xmm0, xmm6 */
  guest_unsupported(0x8621f3); /* mulps xmm0, xmm6 */
/* 8621f6: addps xmm2, xmm3 */
  guest_unsupported(0x8621f6); /* addps xmm2, xmm3 */
/* 8621f9: addps xmm2, xmm0 */
  guest_unsupported(0x8621f9); /* addps xmm2, xmm0 */
/* 8621fc: movaps xmm0, xmm2 */
  guest_unsupported(0x8621fc); /* movaps xmm0, xmm2 */
/* 8621ff: movaps xmm2, xmmword ptr [esp + 0x60] */
  guest_unsupported(0x8621ff); /* movaps xmm2, xmmword ptr [esp + 0x60] */
/* 862204: subps xmm0, xmm7 */
  guest_unsupported(0x862204); /* subps xmm0, xmm7 */
/* 862207: cmpltps xmm2, xmm0 */
  guest_unsupported(0x862207); /* cmpltps xmm2, xmm0 */
/* 86220b: movmskps ecx, xmm2 */
  guest_unsupported(0x86220b); /* movmskps ecx, xmm2 */
/* 86220e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862210: je 0x862229 */
  if (zf) goto L_862229;
L_862212: /* 862212: movaps xmm2, xmmword ptr [esp + 0x70] */
  guest_unsupported(0x862212); /* movaps xmm2, xmmword ptr [esp + 0x70] */
/* 862217: or bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86221a: cmpltps xmm2, xmm0 */
  guest_unsupported(0x86221a); /* cmpltps xmm2, xmm0 */
/* 86221e: movmskps ecx, xmm2 */
  guest_unsupported(0x86221e); /* movmskps ecx, xmm2 */
/* 862221: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862223: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 862227: jne 0x862241 */
  if (!zf) goto L_862241;
L_862229: /* 862229: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86222d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 862230: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862233: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862235: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 862239: jl 0x862176 */
  if ((sf != of)) goto L_862176;
L_86223f: /* 86223f: jmp 0x862244 */
  goto L_862244;
L_862241: /* 862241: and bl, 0xfe */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_862244: /* 862244: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_862248: /* 862248: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86224a: je 0x8622a2 */
  if (zf) goto L_8622a2;
L_86224c: /* 86224c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86224f: je 0x8622a2 */
  if (zf) goto L_8622a2;
L_862251: /* 862251: mov esi, dword ptr [ecx + 0x200] */
  esi = R32((uint32_t)(ecx + 0x200u));
/* 862257: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862259: jge 0x8622a2 */
  if ((sf == of)) goto L_8622a2;
L_86225b: /* 86225b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 86225e: mov eax, edx */
  eax = edx;
/* 862260: fchs  */
  ST0 = -ST0;
/* 862262: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 862265: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 862269: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 86226d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_862270: /* 862270: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 862273: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 862276: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 862279: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86227b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86227d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 862280: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 862282: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 862284: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 862287: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 86228b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86228d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 862290: jne 0x8622ad */
  if (!zf) goto L_8622ad;
L_862292: /* 862292: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 862295: or bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 862298: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86229a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86229d: jne 0x8622af */
  if (!zf) goto L_8622af;
L_86229f: /* 86229f: and bl, 0xfe */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_8622a2: /* 8622a2: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 8622a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8622a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8622a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8622a7: mov esp, ebp */
  esp = ebp;
/* 8622a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8622aa: ret 4 */
  esp += 8; SPILL(); return;
L_8622ad: /* 8622ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8622af: /* 8622af: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8622b0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8622b3: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8622b5: jl 0x862270 */
  if ((sf != of)) goto L_862270;
L_8622b7: /* 8622b7: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 8622b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8622ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8622bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8622bc: mov esp, ebp */
  esp = ebp;
/* 8622be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8622bf: ret 4 */
  esp += 8; SPILL(); return;
L_8622c2: /* 8622c2: mov edi, dword ptr [ecx + 0x200] */
  edi = R32((uint32_t)(ecx + 0x200u));
/* 8622c8: xor esi, esi */
  esi = 0;
/* 8622ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8622cc: jle 0x8622a2 */
  if ((zf || sf != of)) goto L_8622a2;
L_8622ce: /* 8622ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8622d1: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 8622d4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8622d7: fchs  */
  ST0 = -ST0;
/* 8622d9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8622dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8622e0: /* 8622e0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8622e3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8622e6: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 8622e9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8622eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8622ed: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8622ef: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8622f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8622f4: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8622f7: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 8622fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8622fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 862300: jne 0x862311 */
  if (!zf) goto L_862311;
L_862302: /* 862302: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 862305: or bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 862308: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86230a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86230d: je 0x86229f */
  if (zf) goto L_86229f;
L_86230f: /* 86230f: jmp 0x862313 */
  goto L_862313;
L_862311: /* 862311: fstp st(0) */
  STI(0) = ST0; FPOP();
L_862313: /* 862313: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 862314: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862317: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862319: jl 0x8622e0 */
  if ((sf != of)) goto L_8622e0;
L_86231b: /* 86231b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86231c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86231d: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 86231f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 862320: mov esp, ebp */
  esp = ebp;
/* 862322: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 862323: ret 4 */
  esp += 8; SPILL(); return;
}

void f_86217d(void) {
  LOAD_REGS();
  goto L_86217d;
L_862176: /* 862176: movaps xmm6, xmmword ptr [esp + 0x20] */
  guest_unsupported(0x862176); /* movaps xmm6, xmmword ptr [esp + 0x20] */
/* 86217b: jmp 0x862180 */
  goto L_862180;
L_86217d: /* 86217d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_862180: /* 862180: movlps xmm4, qword ptr [ecx - 0x30] */
  guest_unsupported(0x862180); /* movlps xmm4, qword ptr [ecx - 0x30] */
/* 862184: lea ebx, [ecx - 0x20] */
  ebx = (uint32_t)(ecx + 0xffffffe0u);
/* 862187: add ecx, -0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86218a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86218e: movlps xmm1, qword ptr [ecx - 0x10] */
  guest_unsupported(0x86218e); /* movlps xmm1, qword ptr [ecx - 0x10] */
/* 862192: movhps xmm1, qword ptr [ecx] */
  guest_unsupported(0x862192); /* movhps xmm1, qword ptr [ecx] */
/* 862195: movaps xmm0, xmm4 */
  guest_unsupported(0x862195); /* movaps xmm0, xmm4 */
/* 862198: movhps xmm0, qword ptr [ebx] */
  guest_unsupported(0x862198); /* movhps xmm0, qword ptr [ebx] */
/* 86219b: lea ebx, [ecx - 0x10] */
  ebx = (uint32_t)(ecx + 0xfffffff0u);
/* 86219e: movaps xmm2, xmm0 */
  guest_unsupported(0x86219e); /* movaps xmm2, xmm0 */
/* 8621a1: movaps xmm3, xmm0 */
  guest_unsupported(0x8621a1); /* movaps xmm3, xmm0 */
/* 8621a4: movlps xmm0, qword ptr [ecx - 0x28] */
  guest_unsupported(0x8621a4); /* movlps xmm0, qword ptr [ecx - 0x28] */
/* 8621a8: movhps xmm0, qword ptr [ecx - 0x18] */
  guest_unsupported(0x8621a8); /* movhps xmm0, qword ptr [ecx - 0x18] */
/* 8621ac: lea ebx, [ecx - 0x18] */
  ebx = (uint32_t)(ecx + 0xffffffe8u);
/* 8621af: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8621b2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8621b6: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
/* 8621b9: movaps xmm4, xmm0 */
  guest_unsupported(0x8621b9); /* movaps xmm4, xmm0 */
/* 8621bc: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8621bf: movaps xmm5, xmm1 */
  guest_unsupported(0x8621bf); /* movaps xmm5, xmm1 */
/* 8621c2: movaps xmmword ptr [esp + 0x30], xmm1 */
  guest_unsupported(0x8621c2); /* movaps xmmword ptr [esp + 0x30], xmm1 */
/* 8621c7: movlps xmm1, qword ptr [ecx] */
  guest_unsupported(0x8621c7); /* movlps xmm1, qword ptr [ecx] */
/* 8621ca: movhps xmm1, qword ptr [ebx] */
  guest_unsupported(0x8621ca); /* movhps xmm1, qword ptr [ebx] */
/* 8621cd: shufps xmm3, xmmword ptr [esp + 0x30], 0xdd */
  guest_unsupported(0x8621cd); /* shufps xmm3, xmmword ptr [esp + 0x30], 0xdd */
/* 8621d3: mulps xmm3, xmmword ptr [esp + 0x40] */
  guest_unsupported(0x8621d3); /* mulps xmm3, xmmword ptr [esp + 0x40] */
/* 8621d8: mov bl, byte ptr [esp + 0x17] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 8621dc: shufps xmm0, xmm1, 0xdd */
  guest_unsupported(0x8621dc); /* shufps xmm0, xmm1, 0xdd */
/* 8621e0: movaps xmm7, xmm0 */
  guest_unsupported(0x8621e0); /* movaps xmm7, xmm0 */
/* 8621e3: shufps xmm2, xmm5, 0x88 */
  guest_unsupported(0x8621e3); /* shufps xmm2, xmm5, 0x88 */
/* 8621e7: mulps xmm2, xmmword ptr [esp + 0x50] */
  guest_unsupported(0x8621e7); /* mulps xmm2, xmmword ptr [esp + 0x50] */
/* 8621ec: movaps xmm0, xmm4 */
  guest_unsupported(0x8621ec); /* movaps xmm0, xmm4 */
/* 8621ef: shufps xmm0, xmm1, 0x88 */
  guest_unsupported(0x8621ef); /* shufps xmm0, xmm1, 0x88 */
/* 8621f3: mulps xmm0, xmm6 */
  guest_unsupported(0x8621f3); /* mulps xmm0, xmm6 */
/* 8621f6: addps xmm2, xmm3 */
  guest_unsupported(0x8621f6); /* addps xmm2, xmm3 */
/* 8621f9: addps xmm2, xmm0 */
  guest_unsupported(0x8621f9); /* addps xmm2, xmm0 */
/* 8621fc: movaps xmm0, xmm2 */
  guest_unsupported(0x8621fc); /* movaps xmm0, xmm2 */
/* 8621ff: movaps xmm2, xmmword ptr [esp + 0x60] */
  guest_unsupported(0x8621ff); /* movaps xmm2, xmmword ptr [esp + 0x60] */
/* 862204: subps xmm0, xmm7 */
  guest_unsupported(0x862204); /* subps xmm0, xmm7 */
/* 862207: cmpltps xmm2, xmm0 */
  guest_unsupported(0x862207); /* cmpltps xmm2, xmm0 */
/* 86220b: movmskps ecx, xmm2 */
  guest_unsupported(0x86220b); /* movmskps ecx, xmm2 */
/* 86220e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862210: je 0x862229 */
  if (zf) goto L_862229;
L_862212: /* 862212: movaps xmm2, xmmword ptr [esp + 0x70] */
  guest_unsupported(0x862212); /* movaps xmm2, xmmword ptr [esp + 0x70] */
/* 862217: or bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86221a: cmpltps xmm2, xmm0 */
  guest_unsupported(0x86221a); /* cmpltps xmm2, xmm0 */
/* 86221e: movmskps ecx, xmm2 */
  guest_unsupported(0x86221e); /* movmskps ecx, xmm2 */
/* 862221: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862223: mov byte ptr [esp + 0x17], bl */
  W8((uint32_t)(esp + 0x17u), (ebx & 0xffu));
/* 862227: jne 0x862241 */
  if (!zf) goto L_862241;
L_862229: /* 862229: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86222d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 862230: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862233: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862235: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 862239: jl 0x862176 */
  if ((sf != of)) goto L_862176;
L_86223f: /* 86223f: jmp 0x862244 */
  goto L_862244;
L_862241: /* 862241: and bl, 0xfe */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_862244: /* 862244: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 862248: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86224a: je 0x8622a2 */
  if (zf) goto L_8622a2;
L_86224c: /* 86224c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86224f: je 0x8622a2 */
  if (zf) goto L_8622a2;
L_862251: /* 862251: mov esi, dword ptr [ecx + 0x200] */
  esi = R32((uint32_t)(ecx + 0x200u));
/* 862257: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862259: jge 0x8622a2 */
  if ((sf == of)) goto L_8622a2;
L_86225b: /* 86225b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 86225e: mov eax, edx */
  eax = edx;
/* 862260: fchs  */
  ST0 = -ST0;
/* 862262: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 862265: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 862269: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 86226d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_862270: /* 862270: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 862273: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 862276: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 862279: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 86227b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86227d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 862280: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 862282: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 862284: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 862287: fcom dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
/* 86228b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86228d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 862290: jne 0x8622ad */
  if (!zf) goto L_8622ad;
L_862292: /* 862292: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 862295: or bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 862298: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86229a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86229d: jne 0x8622af */
  if (!zf) goto L_8622af;
L_86229f: /* 86229f: and bl, 0xfe */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_8622a2: /* 8622a2: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 8622a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8622a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8622a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8622a7: mov esp, ebp */
  esp = ebp;
/* 8622a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8622aa: ret 4 */
  esp += 8; SPILL(); return;
L_8622ad: /* 8622ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8622af: /* 8622af: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8622b0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8622b3: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8622b5: jl 0x862270 */
  if ((sf != of)) goto L_862270;
L_8622b7: /* 8622b7: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 8622b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8622ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8622bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8622bc: mov esp, ebp */
  esp = ebp;
/* 8622be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8622bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8623d0(void) {
  LOAD_REGS();
L_8623d0: /* 8623d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8623d1: mov ebp, esp */
  ebp = esp;
/* 8623d3: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 8623d6: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8623dc: mov eax, dword ptr [0xcfa198] */
  eax = R32((uint32_t)(0xcfa198u));
/* 8623e1: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8623e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8623e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8623e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8623e7: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8623eb: mov byte ptr [esp + 0x17], 1 */
  W8((uint32_t)(esp + 0x17u), 0x1u);
/* 8623f0: je 0x862651 */
  if (zf) goto L_862651;
L_8623f6: /* 8623f6: mov eax, dword ptr [ecx + 0x200] */
  eax = R32((uint32_t)(ecx + 0x200u));
/* 8623fc: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8623ff: jl 0x862651 */
  if ((sf != of)) goto L_862651;
L_862405: /* 862405: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 862408: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 86240b: movss xmm6, dword ptr [edi + 4] */
  guest_unsupported(0x86240b); /* movss xmm6, dword ptr [edi + 4] */
/* 862410: movss xmm7, dword ptr [edi + 8] */
  guest_unsupported(0x862410); /* movss xmm7, dword ptr [edi + 8] */
/* 862415: movss xmm5, dword ptr [edi] */
  guest_unsupported(0x862415); /* movss xmm5, dword ptr [edi] */
/* 862419: mov edx, 0xa17c70 */
  edx = 0xa17c70u;
/* 86241e: movaps xmm0, xmmword ptr [edx] */
  guest_unsupported(0x86241e); /* movaps xmm0, xmmword ptr [edx] */
/* 862421: movaps xmmword ptr [esp + 0x40], xmm0 */
  guest_unsupported(0x862421); /* movaps xmmword ptr [esp + 0x40], xmm0 */
/* 862426: movss xmm0, dword ptr [ebx] */
  guest_unsupported(0x862426); /* movss xmm0, dword ptr [ebx] */
/* 86242a: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x86242a); /* shufps xmm0, xmm0, 0 */
/* 86242e: movaps xmmword ptr [esp + 0x80], xmm0 */
  guest_unsupported(0x86242e); /* movaps xmmword ptr [esp + 0x80], xmm0 */
/* 862436: movss xmm0, dword ptr [ebx + 4] */
  guest_unsupported(0x862436); /* movss xmm0, dword ptr [ebx + 4] */
/* 86243b: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x86243b); /* shufps xmm0, xmm0, 0 */
/* 86243f: movaps xmmword ptr [esp + 0x60], xmm0 */
  guest_unsupported(0x86243f); /* movaps xmmword ptr [esp + 0x60], xmm0 */
/* 862444: movss xmm0, dword ptr [ebx + 8] */
  guest_unsupported(0x862444); /* movss xmm0, dword ptr [ebx + 8] */
/* 862449: mov edx, eax */
  edx = eax;
/* 86244b: and edx, 0x80000003 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000003u);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 862451: shufps xmm6, xmm6, 0 */
  guest_unsupported(0x862451); /* shufps xmm6, xmm6, 0 */
/* 862455: shufps xmm7, xmm7, 0 */
  guest_unsupported(0x862455); /* shufps xmm7, xmm7, 0 */
/* 862459: shufps xmm0, xmm0, 0 */
  guest_unsupported(0x862459); /* shufps xmm0, xmm0, 0 */
/* 86245d: shufps xmm5, xmm5, 0 */
  guest_unsupported(0x86245d); /* shufps xmm5, xmm5, 0 */
/* 862461: movaps xmmword ptr [esp + 0x50], xmm6 */
  guest_unsupported(0x862461); /* movaps xmmword ptr [esp + 0x50], xmm6 */
/* 862466: movaps xmmword ptr [esp + 0x70], xmm7 */
  guest_unsupported(0x862466); /* movaps xmmword ptr [esp + 0x70], xmm7 */
/* 86246b: movaps xmmword ptr [esp + 0x30], xmm0 */
  guest_unsupported(0x86246b); /* movaps xmmword ptr [esp + 0x30], xmm0 */
/* 862470: jns 0x862477 */
  if (!sf) goto L_862477;
L_862472: /* 862472: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 862473: or edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 862476: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_862477: /* 862477: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 862479: xor esi, esi */
  esi = 0;
/* 86247b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86247d: jle 0x8625a7 */
  if ((zf || sf != of)) goto L_8625a7;
L_862483: /* 862483: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862486: xorps xmm0, xmm0 */
  guest_unsupported(0x862486); /* xorps xmm0, xmm0 */
/* 862489: movaps xmmword ptr [esp + 0xa0], xmm0 */
  guest_unsupported(0x862489); /* movaps xmmword ptr [esp + 0xa0], xmm0 */
/* 862491: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 862495: jmp 0x8624a1 */
  goto L_8624a1;
L_862497: /* 862497: movaps xmm6, xmmword ptr [esp + 0x50] */
  guest_unsupported(0x862497); /* movaps xmm6, xmmword ptr [esp + 0x50] */
/* 86249c: movaps xmm7, xmmword ptr [esp + 0x70] */
  guest_unsupported(0x86249c); /* movaps xmm7, xmmword ptr [esp + 0x70] */
L_8624a1: /* 8624a1: movaps xmm0, xmmword ptr [esp + 0x20] */
  guest_unsupported(0x8624a1); /* movaps xmm0, xmmword ptr [esp + 0x20] */
/* 8624a6: movlps xmm0, qword ptr [ecx - 0x30] */
  guest_unsupported(0x8624a6); /* movlps xmm0, qword ptr [ecx - 0x30] */
/* 8624aa: movhps xmm0, qword ptr [ecx - 0x20] */
  guest_unsupported(0x8624aa); /* movhps xmm0, qword ptr [ecx - 0x20] */
/* 8624ae: movaps xmm1, xmmword ptr [esp + 0x90] */
  guest_unsupported(0x8624ae); /* movaps xmm1, xmmword ptr [esp + 0x90] */
/* 8624b6: lea ebx, [ecx - 0x20] */
  ebx = (uint32_t)(ecx + 0xffffffe0u);
/* 8624b9: add ecx, -0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8624bc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8624c0: movlps xmm1, qword ptr [ecx - 0x10] */
  guest_unsupported(0x8624c0); /* movlps xmm1, qword ptr [ecx - 0x10] */
/* 8624c4: movhps xmm1, qword ptr [ecx] */
  guest_unsupported(0x8624c4); /* movhps xmm1, qword ptr [ecx] */
/* 8624c7: lea ebx, [ecx - 0x10] */
  ebx = (uint32_t)(ecx + 0xfffffff0u);
/* 8624ca: movaps xmm2, xmm0 */
  guest_unsupported(0x8624ca); /* movaps xmm2, xmm0 */
/* 8624cd: movaps xmm3, xmm0 */
  guest_unsupported(0x8624cd); /* movaps xmm3, xmm0 */
/* 8624d0: movlps xmm0, qword ptr [ecx - 0x28] */
  guest_unsupported(0x8624d0); /* movlps xmm0, qword ptr [ecx - 0x28] */
/* 8624d4: movhps xmm0, qword ptr [ecx - 0x18] */
  guest_unsupported(0x8624d4); /* movhps xmm0, qword ptr [ecx - 0x18] */
/* 8624d8: lea ebx, [ecx - 0x18] */
  ebx = (uint32_t)(ecx + 0xffffffe8u);
/* 8624db: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8624de: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8624e2: shufps xmm2, xmm1, 0x88 */
  guest_unsupported(0x8624e2); /* shufps xmm2, xmm1, 0x88 */
/* 8624e6: shufps xmm3, xmm1, 0xdd */
  guest_unsupported(0x8624e6); /* shufps xmm3, xmm1, 0xdd */
/* 8624ea: movlps xmm1, qword ptr [ecx - 8] */
  guest_unsupported(0x8624ea); /* movlps xmm1, qword ptr [ecx - 8] */
/* 8624ee: movhps xmm1, qword ptr [ecx + 8] */
  guest_unsupported(0x8624ee); /* movhps xmm1, qword ptr [ecx + 8] */
/* 8624f2: movaps xmm4, xmm0 */
  guest_unsupported(0x8624f2); /* movaps xmm4, xmm0 */
/* 8624f5: shufps xmm0, xmm1, 0x88 */
  guest_unsupported(0x8624f5); /* shufps xmm0, xmm1, 0x88 */
/* 8624f9: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
/* 8624fc: add ecx, -8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8624ff: movaps xmmword ptr [esp + 0x20], xmm4 */
  guest_unsupported(0x8624ff); /* movaps xmmword ptr [esp + 0x20], xmm4 */
/* 862504: shufps xmm4, xmm1, 0xdd */
  guest_unsupported(0x862504); /* shufps xmm4, xmm1, 0xdd */
/* 862508: movaps xmmword ptr [esp + 0x90], xmm1 */
  guest_unsupported(0x862508); /* movaps xmmword ptr [esp + 0x90], xmm1 */
/* 862510: movaps xmm1, xmm0 */
  guest_unsupported(0x862510); /* movaps xmm1, xmm0 */
/* 862513: mulps xmm0, xmmword ptr [esp + 0x30] */
  guest_unsupported(0x862513); /* mulps xmm0, xmmword ptr [esp + 0x30] */
/* 862518: mulps xmm1, xmm7 */
  guest_unsupported(0x862518); /* mulps xmm1, xmm7 */
/* 86251b: movaps xmm7, xmm3 */
  guest_unsupported(0x86251b); /* movaps xmm7, xmm3 */
/* 86251e: mulps xmm3, xmmword ptr [esp + 0x60] */
  guest_unsupported(0x86251e); /* mulps xmm3, xmmword ptr [esp + 0x60] */
/* 862523: mulps xmm7, xmm6 */
  guest_unsupported(0x862523); /* mulps xmm7, xmm6 */
/* 862526: movaps xmm6, xmm2 */
  guest_unsupported(0x862526); /* movaps xmm6, xmm2 */
/* 862529: mulps xmm2, xmmword ptr [esp + 0x80] */
  guest_unsupported(0x862529); /* mulps xmm2, xmmword ptr [esp + 0x80] */
/* 862531: mulps xmm6, xmm5 */
  guest_unsupported(0x862531); /* mulps xmm6, xmm5 */
/* 862534: addps xmm6, xmm7 */
  guest_unsupported(0x862534); /* addps xmm6, xmm7 */
/* 862537: addps xmm6, xmm1 */
  guest_unsupported(0x862537); /* addps xmm6, xmm1 */
/* 86253a: movaps xmm1, xmm6 */
  guest_unsupported(0x86253a); /* movaps xmm1, xmm6 */
/* 86253d: subps xmm1, xmm4 */
  guest_unsupported(0x86253d); /* subps xmm1, xmm4 */
/* 862540: movaps xmm4, xmm0 */
  guest_unsupported(0x862540); /* movaps xmm4, xmm0 */
/* 862543: movaps xmm0, xmmword ptr [esp + 0x40] */
  guest_unsupported(0x862543); /* movaps xmm0, xmmword ptr [esp + 0x40] */
/* 862548: movaps xmm6, xmm0 */
  guest_unsupported(0x862548); /* movaps xmm6, xmm0 */
/* 86254b: andps xmm6, xmm4 */
  guest_unsupported(0x86254b); /* andps xmm6, xmm4 */
/* 86254e: movaps xmm4, xmm0 */
  guest_unsupported(0x86254e); /* movaps xmm4, xmm0 */
/* 862551: andps xmm0, xmm2 */
  guest_unsupported(0x862551); /* andps xmm0, xmm2 */
/* 862554: movaps xmm2, xmmword ptr [esp + 0xa0] */
  guest_unsupported(0x862554); /* movaps xmm2, xmmword ptr [esp + 0xa0] */
/* 86255c: andps xmm4, xmm3 */
  guest_unsupported(0x86255c); /* andps xmm4, xmm3 */
/* 86255f: addps xmm0, xmm4 */
  guest_unsupported(0x86255f); /* addps xmm0, xmm4 */
/* 862562: addps xmm0, xmm6 */
  guest_unsupported(0x862562); /* addps xmm0, xmm6 */
/* 862565: subps xmm2, xmm0 */
  guest_unsupported(0x862565); /* subps xmm2, xmm0 */
/* 862568: cmpltps xmm2, xmm1 */
  guest_unsupported(0x862568); /* cmpltps xmm2, xmm1 */
/* 86256c: movmskps ecx, xmm2 */
  guest_unsupported(0x86256c); /* movmskps ecx, xmm2 */
/* 86256f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862571: je 0x862583 */
  if (zf) goto L_862583;
L_862573: /* 862573: or byte ptr [esp + 0x17], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x17u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esp + 0x17u), r);
  }
/* 862578: cmpltps xmm0, xmm1 */
  guest_unsupported(0x862578); /* cmpltps xmm0, xmm1 */
/* 86257c: movmskps ecx, xmm0 */
  guest_unsupported(0x86257c); /* movmskps ecx, xmm0 */
/* 86257f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862581: jne 0x86259b */
  if (!zf) goto L_86259b;
L_862583: /* 862583: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 862587: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86258a: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86258d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86258f: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 862593: jl 0x862497 */
  if ((sf != of)) goto L_862497;
L_862599: /* 862599: jmp 0x8625a0 */
  goto L_8625a0;
L_86259b: /* 86259b: and byte ptr [esp + 0x17], 0xfe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x17u))); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esp + 0x17u), r);
  }
L_8625a0: /* 8625a0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8625a3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_8625a7: /* 8625a7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8625a9: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 8625ad: je 0x862648 */
  if (zf) goto L_862648;
L_8625b3: /* 8625b3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8625b5: je 0x862648 */
  if (zf) goto L_862648;
L_8625bb: /* 8625bb: mov edx, dword ptr [ecx + 0x200] */
  edx = R32((uint32_t)(ecx + 0x200u));
/* 8625c1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8625c3: jge 0x862648 */
  if ((sf == of)) goto L_862648;
L_8625c9: /* 8625c9: mov eax, esi */
  eax = esi;
/* 8625cb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8625ce: lea ecx, [eax + ecx + 8] */
  ecx = (uint32_t)(eax + ecx + 0x8u);
L_8625d2: /* 8625d2: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8625d4: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 8625d7: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 8625da: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8625dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8625df: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8625e2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8625e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8625e6: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8625e9: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 8625ec: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8625ee: fabs  */
  ST0 = fabs(ST0);
/* 8625f0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8625f2: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8625f5: fabs  */
  ST0 = fabs(ST0);
/* 8625f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8625f9: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8625fc: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 8625ff: fabs  */
  ST0 = fabs(ST0);
/* 862601: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 862603: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 862605: fchs  */
  ST0 = -ST0;
/* 862607: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 862609: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86260b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86260d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 862610: jne 0x862638 */
  if (!zf) goto L_862638;
L_862612: /* 862612: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 862616: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 862618: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 86261a: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86261c: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* 862620: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 862622: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 862624: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 862627: jne 0x86263c */
  if (!zf) goto L_86263c;
L_862629: /* 862629: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 86262d: and al, 0xfe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86262f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 862630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 862631: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 862632: mov esp, ebp */
  esp = ebp;
/* 862634: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 862635: ret 8 */
  esp += 12; SPILL(); return;
L_862638: /* 862638: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86263a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86263c: /* 86263c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86263d: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862640: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 862642: jl 0x8625d2 */
  if ((sf != of)) goto L_8625d2;
L_862644: /* 862644: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
L_862648: /* 862648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 862649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86264a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86264b: mov esp, ebp */
  esp = ebp;
/* 86264d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86264e: ret 8 */
  esp += 12; SPILL(); return;
L_862651: /* 862651: mov ebx, dword ptr [ecx + 0x200] */
  ebx = R32((uint32_t)(ecx + 0x200u));
/* 862657: xor edx, edx */
  edx = 0;
/* 862659: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86265b: jle 0x862644 */
  if ((zf || sf != of)) goto L_862644;
L_86265d: /* 86265d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 862660: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 862663: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_862666: /* 862666: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 862668: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 86266b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 86266e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 862671: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 862673: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 862676: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 862678: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86267a: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 86267d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 86267f: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 862682: fabs  */
  ST0 = fabs(ST0);
/* 862684: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 862686: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 862689: fabs  */
  ST0 = fabs(ST0);
/* 86268b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86268d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 862690: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 862693: fabs  */
  ST0 = fabs(ST0);
/* 862695: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 862697: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 862699: fchs  */
  ST0 = -ST0;
/* 86269b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 86269d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86269f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8626a1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8626a4: jne 0x8626c3 */
  if (!zf) goto L_8626c3;
L_8626a6: /* 8626a6: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 8626aa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8626ac: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8626ae: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8626b0: mov byte ptr [esp + 0x17], al */
  W8((uint32_t)(esp + 0x17u), (eax & 0xffu));
/* 8626b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8626b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8626b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8626bb: je 0x862629 */
  if (zf) goto L_862629;
L_8626c1: /* 8626c1: jmp 0x8626c7 */
  goto L_8626c7;
L_8626c3: /* 8626c3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8626c5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8626c7: /* 8626c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8626c8: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8626cb: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8626cd: jl 0x862666 */
  if ((sf != of)) goto L_862666;
L_8626cf: /* 8626cf: mov al, byte ptr [esp + 0x17] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x17u))) & 0xffu);
/* 8626d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8626d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8626d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8626d6: mov esp, ebp */
  esp = ebp;
/* 8626d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8626d9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8627b0(void) {
  LOAD_REGS();
L_8627b0: /* 8627b0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8627b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8627b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8627b5: mov ebx, ecx */
  ebx = ecx;
/* 8627b7: mov eax, dword ptr [ebx + 0x200] */
  eax = R32((uint32_t)(ebx + 0x200u));
/* 8627bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8627be: xor edi, edi */
  edi = 0;
/* 8627c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8627c2: jle 0x86283b */
  if ((zf || sf != of)) goto L_86283b;
L_8627c4: /* 8627c4: mov esi, ebx */
  esi = ebx;
L_8627c6: /* 8627c6: mov eax, esi */
  eax = esi;
/* 8627c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8627ca: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8627cd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8627d0: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 8627d4: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8627d8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8627db: fchs  */
  ST0 = -ST0;
/* 8627dd: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8627e1: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8627e5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8627e9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8627ed: fchs  */
  ST0 = -ST0;
/* 8627ef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8627f1: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8627f5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8627f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8627fa: fchs  */
  ST0 = -ST0;
/* 8627fc: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 862800: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 862804: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 862805: mov ecx, esi */
  ecx = esi;
/* 862807: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x86280du); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 86280d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86280e: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 862812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862813: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 862817: call 0x6cb096 */
  esp -= 4; W32(esp, 0x86281cu); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 86281c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86281e: je 0x862830 */
  if (zf) goto L_862830;
L_862820: /* 862820: mov eax, dword ptr [ebx + 0x200] */
  eax = R32((uint32_t)(ebx + 0x200u));
/* 862826: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 862827: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86282a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86282c: jl 0x8627c6 */
  if ((sf != of)) goto L_8627c6;
L_86282e: /* 86282e: jmp 0x86283b */
  goto L_86283b;
L_862830: /* 862830: mov dword ptr [esp + 0x13c], 0 */
  W32((uint32_t)(esp + 0x13cu), 0x0u);
L_86283b: /* 86283b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 86283f: lea esi, [esp + 0x3c] */
  esi = (uint32_t)(esp + 0x3cu);
/* 862843: mov edi, eax */
  edi = eax;
/* 862845: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86284a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86284c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86284d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86284e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86284f: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 862852: ret 0x14c */
  esp += 336; SPILL(); return;
}

void f_862890(void) {
  LOAD_REGS();
L_862890: /* 862890: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 862893: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 862896: ret  */
  esp += 4; SPILL(); return;
}

void f_8628b0(void) {
  LOAD_REGS();
L_8628b0: /* 8628b0: mov eax, 1 */
  eax = 0x1u;
/* 8628b5: ret  */
  esp += 4; SPILL(); return;
}

void f_8628d0(void) {
  LOAD_REGS();
L_8628d0: /* 8628d0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8628d3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8628d6: ret  */
  esp += 4; SPILL(); return;
}

void f_8628f0(void) {
  LOAD_REGS();
L_8628f0: /* 8628f0: mov eax, 0x10 */
  eax = 0x10u;
/* 8628f5: ret  */
  esp += 4; SPILL(); return;
}

void f_862910(void) {
  LOAD_REGS();
L_862910: /* 862910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 862914: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 86291a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 862921: mov dword ptr [eax + 8], 4 */
  W32((uint32_t)(eax + 0x8u), 0x4u);
/* 862928: mov dword ptr [eax + 0xc], 2 */
  W32((uint32_t)(eax + 0xcu), 0x2u);
/* 86292f: mov eax, 2 */
  eax = 0x2u;
/* 862934: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862950(void) {
  LOAD_REGS();
L_862950: /* 862950: mov eax, dword ptr [ecx + 0xa0] */
  eax = R32((uint32_t)(ecx + 0xa0u));
/* 862956: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 86295c: ret  */
  esp += 4; SPILL(); return;
}

void f_862970(void) {
  LOAD_REGS();
L_862970: /* 862970: mov eax, 1 */
  eax = 0x1u;
/* 862975: ret  */
  esp += 4; SPILL(); return;
}

void f_862990(void) {
  LOAD_REGS();
L_862990: /* 862990: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 862996: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 862999: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86299c: ret  */
  esp += 4; SPILL(); return;
}

void f_8629b0(void) {
  LOAD_REGS();
L_8629b0: /* 8629b0: mov eax, 0x18 */
  eax = 0x18u;
/* 8629b5: ret  */
  esp += 4; SPILL(); return;
}

void f_8629d0(void) {
  LOAD_REGS();
L_8629d0: /* 8629d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8629d4: mov edx, 4 */
  edx = 0x4u;
/* 8629d9: mov ecx, 2 */
  ecx = 0x2u;
/* 8629de: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8629e4: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 8629eb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8629ee: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8629f1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8629f4: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 8629f7: mov eax, 3 */
  eax = 0x3u;
/* 8629fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862a10(void) {
  LOAD_REGS();
L_862a10: /* 862a10: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 862a13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 862a16: ret  */
  esp += 4; SPILL(); return;
}

void f_862a30(void) {
  LOAD_REGS();
L_862a30: /* 862a30: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 862a33: ret  */
  esp += 4; SPILL(); return;
}

void f_862a50(void) {
  LOAD_REGS();
L_862a50: /* 862a50: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 862a53: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 862a55: ret  */
  esp += 4; SPILL(); return;
}

void f_862a70(void) {
  LOAD_REGS();
L_862a70: /* 862a70: mov eax, 2 */
  eax = 0x2u;
/* 862a75: ret  */
  esp += 4; SPILL(); return;
}

void f_862a90(void) {
  LOAD_REGS();
L_862a90: /* 862a90: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 862a93: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 862a95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862a96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 862a98: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 862a9b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x862aa1u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 862aa1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 862aa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862aa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 862aa7: call 0x6ca83f */
  esp -= 4; W32(esp, 0x862aacu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 862aac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 862aaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862ad0(void) {
  LOAD_REGS();
L_862ad0: /* 862ad0: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 862ad3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 862ad6: ret  */
  esp += 4; SPILL(); return;
}

void f_862af0(void) {
  LOAD_REGS();
L_862af0: /* 862af0: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 862af3: ret  */
  esp += 4; SPILL(); return;
}

void f_862b10(void) {
  LOAD_REGS();
L_862b10: /* 862b10: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 862b13: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 862b16: ret  */
  esp += 4; SPILL(); return;
}

void f_862b30(void) {
  LOAD_REGS();
L_862b30: /* 862b30: mov eax, 4 */
  eax = 0x4u;
/* 862b35: ret  */
  esp += 4; SPILL(); return;
}

void f_862b50(void) {
  LOAD_REGS();
L_862b50: /* 862b50: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 862b53: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 862b56: ret  */
  esp += 4; SPILL(); return;
}

void f_862b70(void) {
  LOAD_REGS();
L_862b70: /* 862b70: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 862b73: ret  */
  esp += 4; SPILL(); return;
}

void f_862b90(void) {
  LOAD_REGS();
L_862b90: /* 862b90: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 862b93: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 862b96: ret  */
  esp += 4; SPILL(); return;
}

void f_862bb0(void) {
  LOAD_REGS();
L_862bb0: /* 862bb0: mov eax, 4 */
  eax = 0x4u;
/* 862bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_862bd0(void) {
  LOAD_REGS();
L_862bd0: /* 862bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 862bd4: mov dword ptr [eax], 4 */
  W32((uint32_t)(eax), 0x4u);
/* 862bda: mov dword ptr [eax + 4], 2 */
  W32((uint32_t)(eax + 0x4u), 0x2u);
/* 862be1: mov eax, 1 */
  eax = 0x1u;
/* 862be6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862c00(void) {
  LOAD_REGS();
L_862c00: /* 862c00: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 862c03: ret  */
  esp += 4; SPILL(); return;
}

void f_862c20(void) {
  LOAD_REGS();
L_862c20: /* 862c20: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 862c23: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 862c26: ret  */
  esp += 4; SPILL(); return;
}

void f_862c40(void) {
  LOAD_REGS();
L_862c40: /* 862c40: mov eax, 1 */
  eax = 0x1u;
/* 862c45: ret  */
  esp += 4; SPILL(); return;
}

void f_862c60(void) {
  LOAD_REGS();
L_862c60: /* 862c60: mov eax, 1 */
  eax = 0x1u;
/* 862c65: ret  */
  esp += 4; SPILL(); return;
}

void f_862c80(void) {
  LOAD_REGS();
L_862c80: /* 862c80: xor eax, eax */
  eax = 0;
/* 862c82: ret  */
  esp += 4; SPILL(); return;
}

void f_862ca0(void) {
  LOAD_REGS();
L_862ca0: /* 862ca0: xor eax, eax */
  eax = 0;
/* 862ca2: ret  */
  esp += 4; SPILL(); return;
}

void f_862cc0(void) {
  LOAD_REGS();
L_862cc0: /* 862cc0: mov eax, 5 */
  eax = 0x5u;
/* 862cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_862ce0(void) {
  LOAD_REGS();
L_862ce0: /* 862ce0: mov eax, 1 */
  eax = 0x1u;
/* 862ce5: ret  */
  esp += 4; SPILL(); return;
}

void f_862d00(void) {
  LOAD_REGS();
L_862d00: /* 862d00: xor eax, eax */
  eax = 0;
/* 862d02: ret  */
  esp += 4; SPILL(); return;
}

void f_862d20(void) {
  LOAD_REGS();
L_862d20: /* 862d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 862d21: mov ebp, esp */
  ebp = esp;
/* 862d23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 862d25: push 0x9d42d0 */
  { uint32_t v = 0x9d42d0u; esp -= 4; W32(esp, v); }
/* 862d2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 862d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862d31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 862d38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 862d3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 862d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 862d41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 862d42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 862d43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 862d46: mov esi, ecx */
  esi = ecx;
/* 862d48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 862d4f: je 0x862d69 */
  if (zf) goto L_862d69;
L_862d51: /* 862d51: push 0x59b */
  { uint32_t v = 0x59bu; esp -= 4; W32(esp, v); }
/* 862d56: push 0xae5300 */
  { uint32_t v = 0xae5300u; esp -= 4; W32(esp, v); }
/* 862d5b: push 0xae5314 */
  { uint32_t v = 0xae5314u; esp -= 4; W32(esp, v); }
/* 862d60: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x862d66u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 862d66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_862d69: /* 862d69: cmp dword ptr [ebp + 0x14], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 862d6d: je 0x862d87 */
  if (zf) goto L_862d87;
L_862d6f: /* 862d6f: push 0x59c */
  { uint32_t v = 0x59cu; esp -= 4; W32(esp, v); }
/* 862d74: push 0xae5324 */
  { uint32_t v = 0xae5324u; esp -= 4; W32(esp, v); }
/* 862d79: push 0xae5338 */
  { uint32_t v = 0xae5338u; esp -= 4; W32(esp, v); }
/* 862d7e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x862d84u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 862d84: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_862d87: /* 862d87: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 862d8a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 862d8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 862d90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 862d91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 862d92: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 862d94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 862d9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 862d9c: mov esp, ebp */
  esp = ebp;
/* 862d9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 862d9f: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_862da2(void) {
  LOAD_REGS();
L_862da2: /* 862da2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 862da5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 862daa: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 862dad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 862dae: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 862db1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x862db6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_862db6(); return;
}

void f_862db6(void) {
  LOAD_REGS();
L_862db6: /* 862db6: push 0xa17c88 */
  { uint32_t v = 0xa17c88u; esp -= 4; W32(esp, v); }
/* 862dbb: push 0xae5354 */
  { uint32_t v = 0xae5354u; esp -= 4; W32(esp, v); }
/* 862dc0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x862dc6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 862dc6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 862dc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 862dcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 862dcd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x862dd2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_862dd2: guest_badaddr(0x862dd2); return;
}

void f_862e10(void) {
  LOAD_REGS();
L_862e10: /* 862e10: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 862e13: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862e30(void) {
  LOAD_REGS();
L_862e30: /* 862e30: xor eax, eax */
  eax = 0;
/* 862e32: ret  */
  esp += 4; SPILL(); return;
}

void f_862e50(void) {
  LOAD_REGS();
L_862e50: /* 862e50: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 862e53: ret  */
  esp += 4; SPILL(); return;
}

void f_862e70(void) {
  LOAD_REGS();
L_862e70: /* 862e70: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 862e73: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 862e76: ret  */
  esp += 4; SPILL(); return;
}

void f_862e90(void) {
  LOAD_REGS();
L_862e90: /* 862e90: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 862e93: ret  */
  esp += 4; SPILL(); return;
}

void f_862eb0(void) {
  LOAD_REGS();
L_862eb0: /* 862eb0: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 862eb3: ret  */
  esp += 4; SPILL(); return;
}

void f_862ed0(void) {
  LOAD_REGS();
L_862ed0: /* 862ed0: xor eax, eax */
  eax = 0;
/* 862ed2: ret  */
  esp += 4; SPILL(); return;
}

void f_862ef0(void) {
  LOAD_REGS();
L_862ef0: /* 862ef0: xor eax, eax */
  eax = 0;
/* 862ef2: ret  */
  esp += 4; SPILL(); return;
}

void f_862f10(void) {
  LOAD_REGS();
L_862f10: /* 862f10: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 862f13: ret  */
  esp += 4; SPILL(); return;
}

void f_862f30(void) {
  LOAD_REGS();
L_862f30: /* 862f30: mov eax, 1 */
  eax = 0x1u;
/* 862f35: ret  */
  esp += 4; SPILL(); return;
}

void f_862f50(void) {
  LOAD_REGS();
L_862f50: /* 862f50: xor eax, eax */
  eax = 0;
/* 862f52: ret  */
  esp += 4; SPILL(); return;
}

void f_862f70(void) {
  LOAD_REGS();
L_862f70: /* 862f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 862f71: mov esi, ecx */
  esi = ecx;
/* 862f73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x862f79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 862f79: mov eax, esi */
  eax = esi;
/* 862f7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 862f7c: ret  */
  esp += 4; SPILL(); return;
}

void f_862f90(void) {
  LOAD_REGS();
L_862f90: /* 862f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 862f91: mov esi, ecx */
  esi = ecx;
/* 862f93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x862f99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 862f99: mov eax, esi */
  eax = esi;
/* 862f9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 862f9c: ret  */
  esp += 4; SPILL(); return;
}

void f_862fb0(void) {
  LOAD_REGS();
L_862fb0: /* 862fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 862fb4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 862fb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862fb7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x862fbdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 862fbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862fd0(void) {
  LOAD_REGS();
L_862fd0: /* 862fd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 862fd4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 862fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 862fd7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x862fddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 862fdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_862ff0(void) {
  LOAD_REGS();
L_862ff0: /* 862ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 862ff1: mov esi, ecx */
  esi = ecx;
/* 862ff3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 862ff6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 862ff8: je 0x863008 */
  if (zf) goto L_863008;
L_862ffa: /* 862ffa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 863000: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 863002: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 863004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863005: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x863008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_863008: /* 863008: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 86300f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 863010: ret  */
  esp += 4; SPILL(); return;
}

void f_863030(void) {
  LOAD_REGS();
L_863030: /* 863030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863031: mov ebp, esp */
  ebp = esp;
/* 863033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863035: push 0x9d42e0 */
  { uint32_t v = 0x9d42e0u; esp -= 4; W32(esp, v); }
/* 86303a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863048: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86304b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863050: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 863053: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863055: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863056: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 863059: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863060: je 0x86307c */
  if (zf) goto L_86307c;
L_863062: /* 863062: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 863065: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 863068: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 86306b: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 86306e: mov byte ptr [ebp - 0x13], dh */
  W8((uint32_t)(ebp + 0xffffffedu), ((edx >> 8) & 0xffu));
/* 863071: mov byte ptr [ebp - 0x12], dl */
  W8((uint32_t)(ebp + 0xffffffeeu), (edx & 0xffu));
/* 863074: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 863077: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86307a: jmp 0x86307f */
  goto L_86307f;
L_86307c: /* 86307c: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
L_86307f: /* 86307f: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 863082: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 863084: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 863086: mov ecx, esi */
  ecx = esi;
/* 863088: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86308eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86308e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 863090: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 863093: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 863095: je 0x8630ad */
  if (zf) goto L_8630ad;
L_863097: /* 863097: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86309a: mov ecx, eax */
  ecx = eax;
/* 86309c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86309e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8630a1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8630a4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8630a7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8630aa: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_8630ad: /* 8630ad: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8630af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8630b1: mov ecx, esi */
  ecx = esi;
/* 8630b3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8630b9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8630b9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8630bb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8630be: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8630c0: je 0x8630d8 */
  if (zf) goto L_8630d8;
L_8630c2: /* 8630c2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8630c5: mov ecx, eax */
  ecx = eax;
/* 8630c7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8630c9: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8630cc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8630cf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8630d2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8630d5: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_8630d8: /* 8630d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8630db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8630dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8630dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8630e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8630e5: mov esp, ebp */
  esp = ebp;
/* 8630e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8630e8: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_8630eb(void) {
  LOAD_REGS();
L_8630eb: /* 8630eb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8630ee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8630f3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8630f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8630f7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8630fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8630ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8630ff(); return;
}

void f_8630ff(void) {
  LOAD_REGS();
L_8630ff: /* 8630ff: push 0xa17cdc */
  { uint32_t v = 0xa17cdcu; esp -= 4; W32(esp, v); }
/* 863104: push 0xae5288 */
  { uint32_t v = 0xae5288u; esp -= 4; W32(esp, v); }
/* 863109: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86310fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86310f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 863112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863116: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86311bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86311b: guest_badaddr(0x86311b); return;
}

void f_863160(void) {
  LOAD_REGS();
L_863160: /* 863160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863161: mov ebp, esp */
  ebp = esp;
/* 863163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863165: push 0x9d42f0 */
  { uint32_t v = 0x9d42f0u; esp -= 4; W32(esp, v); }
/* 86316a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863178: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86317b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863183: mov edi, ecx */
  edi = ecx;
/* 863185: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 863188: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86318b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863192: je 0x8631ae */
  if (zf) goto L_8631ae;
L_863194: /* 863194: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 863197: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86319a: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 86319d: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8631a0: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 8631a3: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 8631a6: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 8631a9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8631ac: jmp 0x8631b1 */
  goto L_8631b1;
L_8631ae: /* 8631ae: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
L_8631b1: /* 8631b1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8631b4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8631b7: fmul dword ptr [eax + 0x140] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x140u)));
/* 8631bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8631be: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8631c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8631c4: fmul dword ptr [eax + 0x130] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x130u)));
/* 8631ca: mov ecx, esp */
  ecx = esp;
/* 8631cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8631cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8631d1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8631d4: fmul dword ptr [eax + 0x120] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x120u)));
/* 8631da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8631dc: fadd dword ptr [eax + 0x150] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x150u)));
/* 8631e2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8631e8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8631ea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8631ec: fmul dword ptr [eax + 0x1a8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1a8u)));
/* 8631f2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8631f5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8631f7: fmul dword ptr [eax + 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1a4u)));
/* 8631fd: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 863200: fmul dword ptr [eax + 0x1a0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1a0u)));
/* 863206: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863209: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86320b: fmul dword ptr [eax + 0x1b4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1b4u)));
/* 863211: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 863214: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 863216: fmul dword ptr [eax + 0x1b0] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1b0u)));
/* 86321c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 86321f: fmul dword ptr [eax + 0x1ac] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1acu)));
/* 863225: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 863228: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 86322b: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 86322e: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 863231: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 863234: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 863237: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86323a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86323d: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 863240: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 863243: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 863246: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 863249: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 86324c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86324f: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 863252: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 863255: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 863258: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 86325b: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86325e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863260: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 863263: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863266: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863269: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 86326c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86326f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 863272: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863275: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 863278: mov eax, esp */
  eax = esp;
/* 86327a: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 86327d: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 863280: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 863283: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 863286: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 863289: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86328c: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 86328f: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 863292: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863295: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 863298: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86329b: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 86329e: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8632a1: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8632a4: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8632a7: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8632aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8632ac: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8632af: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8632b2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8632b5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8632b8: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8632bb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8632be: mov ecx, edi */
  ecx = edi;
/* 8632c0: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8632c5u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8632c5: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8632c8: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 8632cb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8632ce: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8632d1: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8632d4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8632d7: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8632da: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8632dd: mov ecx, edx */
  ecx = edx;
/* 8632df: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8632e2: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8632e5: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8632e8: mov edx, eax */
  edx = eax;
/* 8632ea: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8632ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8632ee: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8632f1: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8632f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8632f7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8632fa: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8632fd: mov eax, esp */
  eax = esp;
/* 8632ff: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863302: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 863304: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 863307: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86330a: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 86330d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863310: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 863313: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863316: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 863319: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86331c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 86331f: mov edx, esp */
  edx = esp;
/* 863321: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 863324: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 863327: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86332a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86332c: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 86332f: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863332: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863335: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 863338: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86333b: mov ecx, edi */
  ecx = edi;
/* 86333d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863340: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863345u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863345: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 863348: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 86334b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86334e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 863351: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 863354: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863357: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86335a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86335d: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 863360: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 863363: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 863366: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 863369: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 86336c: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 86336f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863370: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863373: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863376: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 863379: mov edx, esp */
  edx = esp;
/* 86337b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 86337e: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 863381: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 863383: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863386: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 863389: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 86338c: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86338f: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 863392: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 863395: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 863398: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 86339b: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 86339e: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8633a1: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8633a4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8633a7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8633aa: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8633ad: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8633b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8633b3: mov ecx, esp */
  ecx = esp;
/* 8633b5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8633b7: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8633ba: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8633bd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8633c0: mov ecx, edi */
  ecx = edi;
/* 8633c2: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8633c7u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8633c7: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8633ca: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8633cd: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8633d0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8633d3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8633d6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8633d9: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 8633dc: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8633df: mov edx, eax */
  edx = eax;
/* 8633e1: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8633e4: mov eax, ecx */
  eax = ecx;
/* 8633e6: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8633e9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8633ec: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8633ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8633f0: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8633f3: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8633f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8633f9: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8633fc: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8633ff: mov ecx, esp */
  ecx = esp;
/* 863401: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863404: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863406: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 863409: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86340c: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 86340f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863412: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 863415: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863418: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 86341b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86341e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 863421: mov eax, esp */
  eax = esp;
/* 863423: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 863426: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 863429: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86342c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86342e: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 863431: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 863434: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863437: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 86343a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86343d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863440: mov ecx, edi */
  ecx = edi;
/* 863442: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863447u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863447: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86344a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86344b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86344c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863453: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863454: mov esp, ebp */
  esp = ebp;
/* 863456: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863457: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_86345a(void) {
  LOAD_REGS();
L_86345a: /* 86345a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86345d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 863462: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 863465: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863466: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 863469: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86346eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86346e(); return;
}

void f_86346e(void) {
  LOAD_REGS();
L_86346e: /* 86346e: push 0xa17d14 */
  { uint32_t v = 0xa17d14u; esp -= 4; W32(esp, v); }
/* 863473: push 0xae5290 */
  { uint32_t v = 0xae5290u; esp -= 4; W32(esp, v); }
/* 863478: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86347eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86347e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 863481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863485: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86348au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86348a: guest_badaddr(0x86348a); return;
}

void f_863560(void) {
  LOAD_REGS();
L_863560: /* 863560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863561: mov ebp, esp */
  ebp = esp;
/* 863563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863565: push 0x9d4300 */
  { uint32_t v = 0x9d4300u; esp -= 4; W32(esp, v); }
/* 86356a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863578: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86357b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863582: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 863585: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 863588: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863589: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86358c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863593: je 0x8635af */
  if (zf) goto L_8635af;
L_863595: /* 863595: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 863598: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 86359b: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 86359e: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8635a1: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 8635a4: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 8635a7: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 8635aa: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8635ad: jmp 0x8635b2 */
  goto L_8635b2;
L_8635af: /* 8635af: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
L_8635b2: /* 8635b2: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 8635b8: mov dword ptr [ebp + 0x24], 2 */
  W32((uint32_t)(ebp + 0x24u), 0x2u);
/* 8635bf: lea esi, [ebp - 0x50] */
  esi = (uint32_t)(ebp + 0xffffffb0u);
L_8635c2: /* 8635c2: dec dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x24u), r);
  }
/* 8635c5: js 0x8635d4 */
  if (sf) goto L_8635d4;
L_8635c7: /* 8635c7: mov ecx, esi */
  ecx = esi;
/* 8635c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8635cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8635cb: mov eax, 0xc */
  eax = 0xcu;
/* 8635d0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8635d2: jmp 0x8635c2 */
  goto L_8635c2;
L_8635d4: /* 8635d4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8635d7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8635da: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8635dd: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 8635e0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8635e3: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8635e6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8635e9: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8635ec: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8635ef: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8635f2: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8635f5: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8635f8: xor esi, esi */
  esi = 0;
L_8635fa: /* 8635fa: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8635fd: mov dword ptr [ebp + 0x20], esi */
  W32((uint32_t)(ebp + 0x20u), esi);
/* 863600: jge 0x863779 */
  if ((sf == of)) goto L_863779;
L_863606: /* 863606: xor edi, edi */
  edi = 0;
/* 863608: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* 86360b: jmp 0x863610 */
  goto L_863610;
L_863610: /* 863610: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 863613: jge 0x863773 */
  if ((sf == of)) goto L_863773;
L_863619: /* 863619: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 86361c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 86361f: mov ecx, dword ptr [ebp + esi - 0x50] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb0u));
/* 863623: mov edx, ecx */
  edx = ecx;
/* 863625: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 863628: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 86362b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 86362e: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 863631: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 863634: mov eax, dword ptr [ebp + edi - 0x4c] */
  eax = R32((uint32_t)(ebp + edi + 0xffffffb4u));
/* 863638: mov ecx, eax */
  ecx = eax;
/* 86363a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 86363d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 863640: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863644: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 863647: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86364a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86364d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 863650: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863653: mov ecx, esp */
  ecx = esp;
/* 863655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863657: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86365a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 86365d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863660: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863663: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 863666: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863669: mov eax, esp */
  eax = esp;
/* 86366b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86366d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863673: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863676: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 863679: call 0x6cc74d */
  esp -= 4; W32(esp, 0x86367eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 86367e: mov edx, dword ptr [ebp + esi - 0x4c] */
  edx = R32((uint32_t)(ebp + esi + 0xffffffb4u));
/* 863682: mov ecx, dword ptr [ebp + edi - 0x48] */
  ecx = R32((uint32_t)(ebp + edi + 0xffffffb8u));
/* 863686: mov eax, edx */
  eax = edx;
/* 863688: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86368b: mov edx, ecx */
  edx = ecx;
/* 86368d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 863690: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863693: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 863696: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 863699: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86369c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86369d: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8636a0: mov eax, ecx */
  eax = ecx;
/* 8636a2: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8636a5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8636a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636ab: mov edx, esp */
  edx = esp;
/* 8636ad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8636af: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8636b2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8636b5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8636b8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8636bb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8636be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636c1: mov ecx, esp */
  ecx = esp;
/* 8636c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8636c5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8636c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8636cb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8636ce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8636d1: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8636d6u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8636d6: mov ecx, dword ptr [ebp + esi - 0x48] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb8u));
/* 8636da: lea eax, [ebp + esi - 0x48] */
  eax = (uint32_t)(ebp + esi + 0xffffffb8u);
/* 8636de: mov edx, ecx */
  edx = ecx;
/* 8636e0: lea eax, [ebp + edi - 0x50] */
  eax = (uint32_t)(ebp + edi + 0xffffffb0u);
/* 8636e4: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8636e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8636e9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8636ec: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8636ef: mov edx, ecx */
  edx = ecx;
/* 8636f1: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8636f4: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8636f7: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8636fa: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8636fd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863701: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 863704: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863707: mov edx, esp */
  edx = esp;
/* 863709: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86370b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86370e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863711: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863714: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863717: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86371a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86371d: mov ecx, esp */
  ecx = esp;
/* 86371f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863721: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863724: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863727: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86372a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86372d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863732u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863732: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 863735: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 863738: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 863739: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 86373c: mov edi, eax */
  edi = eax;
/* 86373e: jmp 0x863610 */
  goto L_863610;
L_863773: /* 863773: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 863774: jmp 0x8635fa */
  goto L_8635fa;
L_863779: /* 863779: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86377c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86377d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86377e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863785: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863786: mov esp, ebp */
  esp = ebp;
/* 863788: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863789: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_86360d(void) {
  LOAD_REGS();
  goto L_86360d;
L_8635fa: /* 8635fa: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8635fd: mov dword ptr [ebp + 0x20], esi */
  W32((uint32_t)(ebp + 0x20u), esi);
/* 863600: jge 0x863779 */
  if ((sf == of)) goto L_863779;
L_863606: /* 863606: xor edi, edi */
  edi = 0;
/* 863608: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* 86360b: jmp 0x863610 */
  goto L_863610;
L_86360d: /* 86360d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_863610: /* 863610: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 863613: jge 0x863773 */
  if ((sf == of)) goto L_863773;
L_863619: /* 863619: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 86361c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 86361f: mov ecx, dword ptr [ebp + esi - 0x50] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb0u));
/* 863623: mov edx, ecx */
  edx = ecx;
/* 863625: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 863628: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 86362b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 86362e: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 863631: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 863634: mov eax, dword ptr [ebp + edi - 0x4c] */
  eax = R32((uint32_t)(ebp + edi + 0xffffffb4u));
/* 863638: mov ecx, eax */
  ecx = eax;
/* 86363a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 86363d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 863640: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863644: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 863647: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86364a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86364d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 863650: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863653: mov ecx, esp */
  ecx = esp;
/* 863655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863657: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86365a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 86365d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863660: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863663: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 863666: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863669: mov eax, esp */
  eax = esp;
/* 86366b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86366d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863673: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863676: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 863679: call 0x6cc74d */
  esp -= 4; W32(esp, 0x86367eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 86367e: mov edx, dword ptr [ebp + esi - 0x4c] */
  edx = R32((uint32_t)(ebp + esi + 0xffffffb4u));
/* 863682: mov ecx, dword ptr [ebp + edi - 0x48] */
  ecx = R32((uint32_t)(ebp + edi + 0xffffffb8u));
/* 863686: mov eax, edx */
  eax = edx;
/* 863688: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86368b: mov edx, ecx */
  edx = ecx;
/* 86368d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 863690: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863693: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 863696: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 863699: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86369c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86369d: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8636a0: mov eax, ecx */
  eax = ecx;
/* 8636a2: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8636a5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8636a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636ab: mov edx, esp */
  edx = esp;
/* 8636ad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8636af: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8636b2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8636b5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8636b8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8636bb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8636be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636c1: mov ecx, esp */
  ecx = esp;
/* 8636c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8636c5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8636c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8636cb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8636ce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8636d1: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8636d6u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8636d6: mov ecx, dword ptr [ebp + esi - 0x48] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb8u));
/* 8636da: lea eax, [ebp + esi - 0x48] */
  eax = (uint32_t)(ebp + esi + 0xffffffb8u);
/* 8636de: mov edx, ecx */
  edx = ecx;
/* 8636e0: lea eax, [ebp + edi - 0x50] */
  eax = (uint32_t)(ebp + edi + 0xffffffb0u);
/* 8636e4: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8636e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8636e9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8636ec: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8636ef: mov edx, ecx */
  edx = ecx;
/* 8636f1: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8636f4: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8636f7: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8636fa: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8636fd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863701: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 863704: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863707: mov edx, esp */
  edx = esp;
/* 863709: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86370b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86370e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863711: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863714: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863717: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86371a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86371d: mov ecx, esp */
  ecx = esp;
/* 86371f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863721: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863724: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863727: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86372a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86372d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863732u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863732: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 863735: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 863738: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 863739: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 86373c: mov edi, eax */
  edi = eax;
/* 86373e: jmp 0x863610 */
  goto L_863610;
L_863773: /* 863773: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 863774: jmp 0x8635fa */
  goto L_8635fa;
L_863779: /* 863779: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86377c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86377d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86377e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863785: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863786: mov esp, ebp */
  esp = ebp;
/* 863788: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863789: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_863743(void) {
  LOAD_REGS();
L_863743: /* 863743: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 863746: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86374b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 86374e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86374f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 863752: call 0x99caf8 */
  esp -= 4; W32(esp, 0x863757u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_863757(); return;
}

void f_863757(void) {
  LOAD_REGS();
  goto L_863757;
L_8635fa: /* 8635fa: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8635fd: mov dword ptr [ebp + 0x20], esi */
  W32((uint32_t)(ebp + 0x20u), esi);
/* 863600: jge 0x863779 */
  if ((sf == of)) goto L_863779;
L_863606: /* 863606: xor edi, edi */
  edi = 0;
/* 863608: mov dword ptr [ebp + 0x24], edi */
  W32((uint32_t)(ebp + 0x24u), edi);
/* 86360b: jmp 0x863610 */
  goto L_863610;
L_863610: /* 863610: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 863613: jge 0x863773 */
  if ((sf == of)) goto L_863773;
L_863619: /* 863619: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 86361c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 86361f: mov ecx, dword ptr [ebp + esi - 0x50] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb0u));
/* 863623: mov edx, ecx */
  edx = ecx;
/* 863625: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 863628: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 86362b: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 86362e: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 863631: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 863634: mov eax, dword ptr [ebp + edi - 0x4c] */
  eax = R32((uint32_t)(ebp + edi + 0xffffffb4u));
/* 863638: mov ecx, eax */
  ecx = eax;
/* 86363a: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 86363d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 863640: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863644: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 863647: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86364a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 86364d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 863650: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863653: mov ecx, esp */
  ecx = esp;
/* 863655: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863657: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86365a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 86365d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863660: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863663: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 863666: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863669: mov eax, esp */
  eax = esp;
/* 86366b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86366d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863670: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863673: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863676: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 863679: call 0x6cc74d */
  esp -= 4; W32(esp, 0x86367eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 86367e: mov edx, dword ptr [ebp + esi - 0x4c] */
  edx = R32((uint32_t)(ebp + esi + 0xffffffb4u));
/* 863682: mov ecx, dword ptr [ebp + edi - 0x48] */
  ecx = R32((uint32_t)(ebp + edi + 0xffffffb8u));
/* 863686: mov eax, edx */
  eax = edx;
/* 863688: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86368b: mov edx, ecx */
  edx = ecx;
/* 86368d: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 863690: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863693: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 863696: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 863699: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86369c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86369d: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8636a0: mov eax, ecx */
  eax = ecx;
/* 8636a2: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8636a5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8636a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636ab: mov edx, esp */
  edx = esp;
/* 8636ad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8636af: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8636b2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8636b5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8636b8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8636bb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8636be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8636c1: mov ecx, esp */
  ecx = esp;
/* 8636c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8636c5: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8636c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8636cb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8636ce: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8636d1: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8636d6u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8636d6: mov ecx, dword ptr [ebp + esi - 0x48] */
  ecx = R32((uint32_t)(ebp + esi + 0xffffffb8u));
/* 8636da: lea eax, [ebp + esi - 0x48] */
  eax = (uint32_t)(ebp + esi + 0xffffffb8u);
/* 8636de: mov edx, ecx */
  edx = ecx;
/* 8636e0: lea eax, [ebp + edi - 0x50] */
  eax = (uint32_t)(ebp + edi + 0xffffffb0u);
/* 8636e4: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8636e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8636e9: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8636ec: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8636ef: mov edx, ecx */
  edx = ecx;
/* 8636f1: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8636f4: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8636f7: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8636fa: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8636fd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863701: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 863704: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863707: mov edx, esp */
  edx = esp;
/* 863709: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86370b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86370e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863711: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863714: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863717: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 86371a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86371d: mov ecx, esp */
  ecx = esp;
/* 86371f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863721: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863724: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863727: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86372a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86372d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863732u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863732: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 863735: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 863738: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 863739: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 86373c: mov edi, eax */
  edi = eax;
/* 86373e: jmp 0x863610 */
  goto L_863610;
L_863757: /* 863757: push 0xa17d50 */
  { uint32_t v = 0xa17d50u; esp -= 4; W32(esp, v); }
/* 86375c: push 0xae5298 */
  { uint32_t v = 0xae5298u; esp -= 4; W32(esp, v); }
/* 863761: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x863767u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 863767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86376a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86376c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86376e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x863773u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_863773: /* 863773: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 863774: jmp 0x8635fa */
  goto L_8635fa;
L_863779: /* 863779: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86377c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86377d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86377e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863785: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863786: mov esp, ebp */
  esp = ebp;
/* 863788: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863789: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_863820(void) {
  LOAD_REGS();
L_863820: /* 863820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863821: mov ebp, esp */
  ebp = esp;
/* 863823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863825: push 0x9d4310 */
  { uint32_t v = 0x9d4310u; esp -= 4; W32(esp, v); }
/* 86382a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863838: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86383b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863841: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 863844: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 863846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863847: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863848: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86384a: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 86384d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 863850: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863857: je 0x86386c */
  if (zf) goto L_86386c;
L_863859: /* 863859: mov eax, ecx */
  eax = ecx;
/* 86385b: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 86385e: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 863861: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 863864: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 863867: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 86386a: jmp 0x86386f */
  goto L_86386f;
L_86386c: /* 86386c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86386f: /* 86386f: fild dword ptr [ebp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 863872: xor eax, eax */
  eax = 0;
/* 863874: fdivr qword ptr [0xa0e970] */
  ST0 = (F64((uint32_t)(0xa0e970u))) / ST0;
/* 86387a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86387d: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 863880: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 863883: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 863886: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 863889: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 86388c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 86388f: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 863892: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863895: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 863898: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86389b: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 86389e: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8638a1: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8638a4: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8638a7: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8638aa: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8638ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8638b0: /* 8638b0: cmp eax, dword ptr [ebp + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8638b3: jge 0x8639e1 */
  if ((sf == of)) goto L_8639e1;
L_8638b9: /* 8638b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8638ba: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8638bd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8638c0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8638c3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8638c6: fst dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0);
/* 8638c9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8638cc: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x8638d2u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 8638d2: fst qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8638d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8638d8: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8638db: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8638de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8638e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8638e3: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8638e6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8638e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8638eb: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8638ee: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8638f0: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8638f3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8638f5: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8638f8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8638fb: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x863901u); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 863901: fst qword ptr [ebp - 0x3c] */
  WF64((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 863904: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 863907: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 86390a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86390d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86390f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 863910: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 863913: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 863916: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 863918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86391b: mov eax, esp */
  eax = esp;
/* 86391d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863920: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 863923: mov ecx, esp */
  ecx = esp;
/* 863925: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 863928: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86392a: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 86392d: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 863930: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 863932: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 863935: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 863938: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 86393b: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 86393e: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 863941: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 863943: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 863946: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 863949: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 86394c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86394f: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 863952: fmul dword ptr [ebp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x30u)));
/* 863955: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 86395b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 86395e: fadd dword ptr [ebp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x2cu)));
/* 863961: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 863964: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 863967: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 86396d: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 863970: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863973: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 863976: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 863978: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 86397b: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86397e: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 863981: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863984: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 863987: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 86398a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86398d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86398f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 863992: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863995: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863998: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86399b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8639a0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8639a0: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8639a3: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 8639a6: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8639a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8639ac: jmp 0x8638b0 */
  goto L_8638b0;
L_8639e1: /* 8639e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8639e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8639e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8639e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8639ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8639ee: mov esp, ebp */
  esp = ebp;
/* 8639f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8639f1: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_8639b1(void) {
  LOAD_REGS();
L_8639b1: /* 8639b1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8639b4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8639b9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8639bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8639bd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8639c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8639c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8639c5(); return;
}

void f_8639c5(void) {
  LOAD_REGS();
L_8639c5: /* 8639c5: push 0xa17d84 */
  { uint32_t v = 0xa17d84u; esp -= 4; W32(esp, v); }
/* 8639ca: push 0xae52a0 */
  { uint32_t v = 0xae52a0u; esp -= 4; W32(esp, v); }
/* 8639cf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8639d5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8639d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8639d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8639da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8639dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8639e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8639e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8639e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8639e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8639e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8639ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8639ee: mov esp, ebp */
  esp = ebp;
/* 8639f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8639f1: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_863a80(void) {
  LOAD_REGS();
L_863a80: /* 863a80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863a81: mov ebp, esp */
  ebp = esp;
/* 863a83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863a85: push 0x9d4320 */
  { uint32_t v = 0x9d4320u; esp -= 4; W32(esp, v); }
/* 863a8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863a91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863a98: sub esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863a9e: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863aa3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863aa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863aa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863aa6: mov edi, ecx */
  edi = ecx;
/* 863aa8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 863aab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 863aae: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863ab5: je 0x863ad1 */
  if (zf) goto L_863ad1;
L_863ab7: /* 863ab7: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 863aba: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 863abd: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 863ac0: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 863ac3: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 863ac6: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 863ac9: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 863acc: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 863acf: jmp 0x863ad4 */
  goto L_863ad4;
L_863ad1: /* 863ad1: mov esi, dword ptr [ebp + 0x3c] */
  esi = R32((uint32_t)(ebp + 0x3cu));
L_863ad4: /* 863ad4: fild dword ptr [ebp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x48u)); FPUSH(v); }
/* 863ad7: xor eax, eax */
  eax = 0;
/* 863ad9: fdivr qword ptr [0xa0e970] */
  ST0 = (F64((uint32_t)(0xa0e970u))) / ST0;
/* 863adf: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 863ae5: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 863ae8: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863aeb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 863aee: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863af1: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 863af4: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 863af7: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863afa: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863afd: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 863b00: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 863b03: fadd dword ptr [ebp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x3cu)));
/* 863b06: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 863b09: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 863b0c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 863b0f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 863b12: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_863b15: /* 863b15: cmp eax, dword ptr [ebp + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 863b18: jge 0x863e15 */
  if ((sf == of)) goto L_863e15;
L_863b1e: /* 863b1e: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 863b21: mov dword ptr [ebp + 0x3c], ebx */
  W32((uint32_t)(ebp + 0x3cu), ebx);
/* 863b24: fild dword ptr [ebp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 863b27: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863b2a: fmul dword ptr [ebp - 0x94] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff6cu)));
/* 863b30: fst dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0);
/* 863b33: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 863b36: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x863b3cu); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 863b3c: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 863b3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 863b42: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 863b45: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863b48: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 863b4a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 863b4d: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 863b50: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 863b52: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 863b55: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 863b58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 863b5a: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 863b60: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 863b62: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 863b65: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 863b68: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x863b6eu); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 863b6e: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 863b71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 863b74: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 863b77: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 863b79: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 863b7c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 863b7e: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 863b81: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 863b84: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 863b86: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 863b8c: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 863b8f: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 863b91: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 863b94: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 863b97: fld dword ptr [ebp - 0xb4] */
  { double v = F32((uint32_t)(ebp + 0xffffff4cu)); FPUSH(v); }
/* 863b9d: fadd dword ptr [ebp - 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff10u)));
/* 863ba3: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 863ba9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 863bab: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863bae: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 863bb1: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863bb4: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 863bba: fmul dword ptr [ebp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x40u)));
/* 863bbd: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 863bc0: fadd dword ptr [ebp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x3cu)));
/* 863bc3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 863bc6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 863bc9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 863bcc: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 863bce: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 863bd1: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 863bd4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 863bd7: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 863bda: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 863bdd: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 863be0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 863be2: fld dword ptr [ebp + 0x38] */
  { double v = F32((uint32_t)(ebp + 0x38u)); FPUSH(v); }
/* 863be5: fmul dword ptr [ebp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x44u)));
/* 863be8: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 863beb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 863bed: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 863bf0: fmul dword ptr [ebp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x44u)));
/* 863bf3: fst dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0);
/* 863bf6: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 863bf9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 863bfc: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 863bff: fmul dword ptr [ebp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x44u)));
/* 863c02: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 863c05: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 863c0b: fsubr dword ptr [ebp - 0x18] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe8u))) - ST0;
/* 863c0e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 863c11: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 863c14: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 863c17: fsub dword ptr [ebp - 0x108] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffef8u)));
/* 863c1d: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 863c23: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 863c29: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 863c2f: fsubr dword ptr [ebp - 0x20] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe0u))) - ST0;
/* 863c32: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 863c35: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 863c38: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 863c3e: fsub dword ptr [ebp - 0x8c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff74u)));
/* 863c44: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 863c4a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 863c4d: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 863c53: fsub dword ptr [ebp - 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff40u)));
/* 863c59: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 863c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863c60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863c63: mov edx, esp */
  edx = esp;
/* 863c65: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 863c68: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 863c6a: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 863c70: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 863c73: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863c76: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863c79: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 863c7c: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 863c7f: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 863c82: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863c85: mov ecx, esp */
  ecx = esp;
/* 863c87: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863c89: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 863c8c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863c8f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863c92: mov ecx, edi */
  ecx = edi;
/* 863c94: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863c99u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863c99: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 863c9c: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 863c9f: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 863ca2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 863ca5: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 863cab: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 863cb1: mov dword ptr [ebp - 0xcc], ecx */
  W32((uint32_t)(ebp + 0xffffff34u), ecx);
/* 863cb7: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 863cba: mov edx, eax */
  edx = eax;
/* 863cbc: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 863cc2: mov eax, ecx */
  eax = ecx;
/* 863cc4: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 863cc7: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 863cca: mov dword ptr [ebp - 0xe4], eax */
  W32((uint32_t)(ebp + 0xffffff1cu), eax);
/* 863cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863cd1: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 863cd7: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 863cdd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863ce0: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 863ce6: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 863cec: mov ecx, esp */
  ecx = esp;
/* 863cee: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 863cf1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 863cf3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 863cf6: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 863cf9: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 863cfc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 863cff: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 863d02: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 863d05: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 863d08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863d0b: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 863d11: mov eax, esp */
  eax = esp;
/* 863d13: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 863d16: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 863d19: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 863d1c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 863d1e: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 863d21: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 863d24: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863d27: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 863d2a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 863d2d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863d30: mov ecx, edi */
  ecx = edi;
/* 863d32: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863d37u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863d37: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 863d3a: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* 863d3d: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 863d40: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 863d43: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 863d46: mov dword ptr [ebp - 0xfc], eax */
  W32((uint32_t)(ebp + 0xffffff04u), eax);
/* 863d4c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 863d4f: mov ecx, edx */
  ecx = edx;
/* 863d51: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 863d54: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 863d5a: fld dword ptr [ebp - 0xfc] */
  { double v = F32((uint32_t)(ebp + 0xffffff04u)); FPUSH(v); }
/* 863d60: mov edx, eax */
  edx = eax;
/* 863d62: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 863d65: mov dword ptr [ebp - 0x114], edx */
  W32((uint32_t)(ebp + 0xfffffeecu), edx);
/* 863d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863d6c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863d6f: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 863d72: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 863d75: mov eax, esp */
  eax = esp;
/* 863d77: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 863d7a: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 863d7d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 863d7f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 863d82: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 863d85: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 863d88: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863d8b: fsubr dword ptr [ebp - 0x20] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe0u))) - ST0;
/* 863d8e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863d91: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 863d94: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863d97: fsub dword ptr [ebp - 0x98] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff68u)));
/* 863d9d: mov edx, esp */
  edx = esp;
/* 863d9f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 863da2: fsub dword ptr [ebp - 0x114] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeecu)));
/* 863da8: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 863dab: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 863dae: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 863db0: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 863db3: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 863db6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863db9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 863dbc: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 863dbf: mov ecx, edi */
  ecx = edi;
/* 863dc1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863dc4: call 0x6cc74d */
  esp -= 4; W32(esp, 0x863dc9u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 863dc9: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 863dcc: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 863dcf: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 863dd2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 863dd5: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 863dd8: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 863ddb: mov eax, ebx */
  eax = ebx;
/* 863ddd: jmp 0x863b15 */
  goto L_863b15;
L_863e15: /* 863e15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 863e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 863e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 863e1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863e21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863e22: mov esp, ebp */
  esp = ebp;
/* 863e24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863e25: ret 0x44 */
  esp += 72; SPILL(); return;
}

void f_863de2(void) {
  LOAD_REGS();
L_863de2: /* 863de2: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 863de8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 863ded: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 863df0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 863df1: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 863df4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x863df9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_863df9(); return;
}

void f_863df9(void) {
  LOAD_REGS();
L_863df9: /* 863df9: push 0xa17dc0 */
  { uint32_t v = 0xa17dc0u; esp -= 4; W32(esp, v); }
/* 863dfe: push 0xae52a8 */
  { uint32_t v = 0xae52a8u; esp -= 4; W32(esp, v); }
/* 863e03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x863e09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 863e09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 863e0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863e0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 863e10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x863e15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 863e15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 863e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 863e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 863e1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 863e21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 863e22: mov esp, ebp */
  esp = ebp;
/* 863e24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 863e25: ret 0x44 */
  esp += 72; SPILL(); return;
}

void f_863f20(void) {
  LOAD_REGS();
L_863f20: /* 863f20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 863f21: mov ebp, esp */
  ebp = esp;
/* 863f23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 863f25: push 0x9d4330 */
  { uint32_t v = 0x9d4330u; esp -= 4; W32(esp, v); }
/* 863f2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 863f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 863f31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 863f38: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863f3b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 863f40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 863f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 863f43: mov edi, ecx */
  edi = ecx;
/* 863f45: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 863f48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 863f4b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 863f52: je 0x863f6e */
  if (zf) goto L_863f6e;
L_863f54: /* 863f54: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 863f57: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 863f5a: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 863f5d: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 863f60: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 863f63: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 863f66: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 863f69: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 863f6c: jmp 0x863f71 */
  goto L_863f71;
L_863f6e: /* 863f6e: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
L_863f71: /* 863f71: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 863f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 863f75: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 863f7b: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 863f7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 863f7f: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 863f82: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x863f88u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 863f88: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 863f8b: fmul dword ptr [0xa17e54] */
  ST0 = ST0 * (F32((uint32_t)(0xa17e54u)));
/* 863f91: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 863f94: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 863f97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 863f98: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 863f9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863f9e: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 863fa1: mov eax, esp */
  eax = esp;
/* 863fa3: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 863fa9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 863fab: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 863fae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 863fb1: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 863fb4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 863fb7: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 863fba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 863fbd: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 863fc0: mov edx, esp */
  edx = esp;
/* 863fc2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 863fc5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 863fc8: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 863fcb: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 863fce: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 863fd1: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 863fd4: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 863fd7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 863fda: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 863fdd: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 863fe0: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 863fe3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 863fe6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 863fe9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 863feb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 863fee: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 863ff1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 863ff4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 863ff7: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 863ffa: mov ecx, edi */
  ecx = edi;
/* 863ffc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 863fff: call 0x6cc74d */
  esp -= 4; W32(esp, 0x864004u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 864004: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 864007: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 86400a: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 86400d: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864010: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 864013: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 864016: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864019: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 86401c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86401f: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864022: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 864025: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864028: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 86402b: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 86402e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 864031: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 864034: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 864036: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 864039: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86403c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 86403e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 864041: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 864043: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 864045: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 864048: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 86404b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 86404e: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 864051: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 864054: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 864057: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 86405a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 86405d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 864060: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 864063: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 864066: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 864069: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86406c: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86406f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864073: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 864076: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864079: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 86407c: mov ecx, esp */
  ecx = esp;
/* 86407e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 864080: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 864083: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 864086: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 864089: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 86408c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86408f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864092: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864095: mov eax, esp */
  eax = esp;
/* 864097: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 86409a: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 86409d: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8640a0: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 8640a3: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8640a6: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8640a9: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8640ac: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8640af: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8640b1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8640b4: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8640b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8640ba: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8640bd: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8640c0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8640c3: mov ecx, edi */
  ecx = edi;
/* 8640c5: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8640cau); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8640ca: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8640cd: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640d0: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8640d3: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640d6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8640d9: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8640dc: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640df: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8640e2: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8640e5: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640e8: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8640eb: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640ee: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8640f1: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8640f4: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8640f7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8640fa: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8640fc: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8640ff: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 864102: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 864104: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 864107: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 864109: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86410b: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 86410e: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 864111: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 864114: fsubr dword ptr [ebp + 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0x24u))) - ST0;
/* 864117: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86411a: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86411d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 864120: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 864123: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 864126: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 864129: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86412c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86412f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864132: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 864135: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864138: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 86413b: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 86413e: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864141: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 864144: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 864147: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86414a: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 86414d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 864150: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 864153: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 864156: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 864159: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86415a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86415d: mov edx, esp */
  edx = esp;
/* 86415f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 864162: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 864164: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 864167: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 86416a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 86416d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 864170: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 864173: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 864176: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 864179: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86417c: mov ecx, esp */
  ecx = esp;
/* 86417e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 864180: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 864183: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 864186: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 864189: mov ecx, edi */
  ecx = edi;
/* 86418b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x864190u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 864190: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 864193: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864197: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 86419a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86419d: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8641a0: mov eax, esp */
  eax = esp;
/* 8641a2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8641a5: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8641a8: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8641ab: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8641ae: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8641b1: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8641b4: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8641b7: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8641ba: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8641bd: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8641c0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8641c3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8641c6: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8641c8: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8641cb: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8641ce: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8641d0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8641d3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8641d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8641d7: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8641da: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8641dd: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8641e0: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 8641e3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8641e6: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8641e9: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8641ec: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8641ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8641f2: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8641f5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8641f7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8641fa: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8641fd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 864200: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 864203: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 864206: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864209: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 86420c: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 86420f: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 864212: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 864215: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 864218: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 86421b: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 86421e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 864221: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 864224: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 864227: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 86422a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 86422d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 864230: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 864233: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 864236: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 864239: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86423c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86423f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864242: mov edx, esp */
  edx = esp;
/* 864244: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 864246: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 864249: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 86424c: mov ecx, edi */
  ecx = edi;
/* 86424e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 864251: call 0x6cc74d */
  esp -= 4; W32(esp, 0x864256u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 864256: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 864259: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 86425c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86425d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 864260: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864263: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864266: mov ecx, esp */
  ecx = esp;
/* 864268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86426b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86426e: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 864271: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864274: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 864277: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 86427a: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 86427d: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 864280: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864283: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 864286: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 864289: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 86428c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 86428f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 864291: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 864294: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 864297: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 864299: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 86429c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86429e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8642a0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8642a3: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8642a6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8642a9: fsubr dword ptr [ebp + 0x20] */
  ST0 = (F32((uint32_t)(ebp + 0x20u))) - ST0;
/* 8642ac: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8642af: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8642b2: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8642b5: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8642b8: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8642bb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8642be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8642c0: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8642c3: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8642c6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8642c9: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8642cc: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8642cf: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8642d2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8642d5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8642d8: mov eax, esp */
  eax = esp;
/* 8642da: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8642dd: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8642e0: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 8642e3: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8642e6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8642e9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8642ec: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 8642ef: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8642f2: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8642f5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8642f8: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 8642fb: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8642fe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 864301: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 864303: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 864306: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 864309: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86430c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 86430f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 864312: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 864315: mov ecx, edi */
  ecx = edi;
/* 864317: call 0x6cc74d */
  esp -= 4; W32(esp, 0x86431cu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 86431c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86431f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864321: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 864328: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864329: mov esp, ebp */
  esp = ebp;
/* 86432b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86432c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_86432f(void) {
  LOAD_REGS();
L_86432f: /* 86432f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 864332: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 864337: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 86433a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86433b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 86433e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864343u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_864343(); return;
}

void f_864343(void) {
  LOAD_REGS();
L_864343: /* 864343: push 0xa17e00 */
  { uint32_t v = 0xa17e00u; esp -= 4; W32(esp, v); }
/* 864348: push 0xae52b0 */
  { uint32_t v = 0xae52b0u; esp -= 4; W32(esp, v); }
/* 86434d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x864353u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 864353: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864358: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86435a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86435fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86435f: guest_badaddr(0x86435f); return;
}

void f_864470(void) {
  LOAD_REGS();
L_864470: /* 864470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864471: mov ebp, esp */
  ebp = esp;
/* 864473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 864475: push 0x9d4340 */
  { uint32_t v = 0x9d4340u; esp -= 4; W32(esp, v); }
/* 86447a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 864480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 864488: sub esp, 0x28c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86448e: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 864493: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864494: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 864497: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 864499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86449a: xor edx, edx */
  edx = 0;
/* 86449c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86449d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86449f: mov ecx, dword ptr [ebp + 0x20c] */
  ecx = R32((uint32_t)(ebp + 0x20cu));
/* 8644a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8644a8: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 8644ab: je 0x8644c0 */
  if (zf) goto L_8644c0;
L_8644ad: /* 8644ad: mov eax, ecx */
  eax = ecx;
/* 8644af: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8644b2: mov byte ptr [ebp - 0x24], al */
  W8((uint32_t)(ebp + 0xffffffdcu), (eax & 0xffu));
/* 8644b5: mov byte ptr [ebp - 0x23], ch */
  W8((uint32_t)(ebp + 0xffffffddu), ((ecx >> 8) & 0xffu));
/* 8644b8: mov byte ptr [ebp - 0x22], cl */
  W8((uint32_t)(ebp + 0xffffffdeu), (ecx & 0xffu));
/* 8644bb: mov byte ptr [ebp - 0x21], ah */
  W8((uint32_t)(ebp + 0xffffffdfu), ((eax >> 8) & 0xffu));
/* 8644be: jmp 0x8644c3 */
  goto L_8644c3;
L_8644c0: /* 8644c0: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_8644c3: /* 8644c3: mov dword ptr [ebp + 0x20c], edx */
  W32((uint32_t)(ebp + 0x20cu), edx);
/* 8644c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8644d0: /* 8644d0: mov edx, dword ptr [ebp + 0x208] */
  edx = R32((uint32_t)(ebp + 0x208u));
/* 8644d6: cmp dword ptr [ebp + 0x20c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8644dc: jge 0x864931 */
  if ((sf == of)) goto L_864931;
L_8644e2: /* 8644e2: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 8644e8: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* 8644ef: mov ebx, 0xc */
  ebx = 0xcu;
/* 8644f4: lea esi, [ebp - 0x258] */
  esi = (uint32_t)(ebp + 0xfffffda8u);
/* 8644fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_864500: /* 864500: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 864503: js 0x86450d */
  if (sf) goto L_86450d;
L_864505: /* 864505: mov ecx, esi */
  ecx = esi;
/* 864507: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x864509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 864509: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86450b: jmp 0x864500 */
  goto L_864500;
L_86450d: /* 86450d: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 864513: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x864519u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 864519: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 86451f: mov dword ptr [ebp - 0x14], 3 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3u);
/* 864526: mov ebx, 0xc */
  ebx = 0xcu;
/* 86452b: lea esi, [ebp - 0x16c] */
  esi = (uint32_t)(ebp + 0xfffffe94u);
L_864531: /* 864531: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 864534: js 0x86453e */
  if (sf) goto L_86453e;
L_864536: /* 864536: mov ecx, esi */
  ecx = esi;
/* 864538: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x86453au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86453a: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86453c: jmp 0x864531 */
  goto L_864531;
L_86453e: /* 86453e: mov ebx, dword ptr [ebp + 0x20c] */
  ebx = R32((uint32_t)(ebp + 0x20cu));
/* 864544: mov eax, ebx */
  eax = ebx;
/* 864546: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864549: fld dword ptr [ebp + eax + 0x14] */
  { double v = F32((uint32_t)(ebp + eax + 0x14u)); FPUSH(v); }
/* 86454d: lea ecx, [ebp + eax + 8] */
  ecx = (uint32_t)(ebp + eax + 0x8u);
/* 864551: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 864553: mov dword ptr [ebp - 0x27c], edx */
  W32((uint32_t)(ebp + 0xfffffd84u), edx);
/* 864559: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86455c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86455f: mov dword ptr [ebp - 0x274], ecx */
  W32((uint32_t)(ebp + 0xfffffd8cu), ecx);
/* 864565: fld dword ptr [ebp - 0x274] */
  { double v = F32((uint32_t)(ebp + 0xfffffd8cu)); FPUSH(v); }
/* 86456b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86456d: mov dword ptr [ebp - 0x278], edx */
  W32((uint32_t)(ebp + 0xfffffd88u), edx);
/* 864573: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 864579: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86457a: fstp dword ptr [ebp + 0x20c] */
  WF32((uint32_t)(ebp + 0x20cu), ST0); FPOP();
/* 864580: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 864586: fld dword ptr [ebp - 0x278] */
  { double v = F32((uint32_t)(ebp + 0xfffffd88u)); FPUSH(v); }
/* 86458c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86458d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86458f: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 864595: mov dword ptr [ebp - 0x188], 4 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x4u);
/* 86459f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8645a2: fld dword ptr [ebp - 0x27c] */
  { double v = F32((uint32_t)(ebp + 0xfffffd84u)); FPUSH(v); }
/* 8645a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8645aa: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8645b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8645b2: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x8645b8u); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 8645b8: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 8645be: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8645c4: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8645c7: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 8645cd: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8645d3: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8645d6: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 8645dc: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8645e2: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8645e5: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8645eb: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8645f1: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 8645f7: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8645fa: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 864600: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 864606: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 864609: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 86460f: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 864615: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 864618: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 86461e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 864620: fadd dword ptr [ebp + 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20cu)));
/* 864626: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 864629: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 86462c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86462f: fld dword ptr [ebp - 0xbc] */
  { double v = F32((uint32_t)(ebp + 0xffffff44u)); FPUSH(v); }
/* 864635: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 86463b: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 864641: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 864644: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 864647: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86464a: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86464d: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 864653: fadd dword ptr [ebp - 0x11c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee4u)));
/* 864659: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 86465c: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 86465f: mov dword ptr [ebp - 0x258], ecx */
  W32((uint32_t)(ebp + 0xfffffda8u), ecx);
/* 864665: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 864668: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 86466b: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 86466e: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 864671: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 864674: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 864676: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 86467c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86467f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 864681: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 864684: mov dword ptr [ebp - 0x250], eax */
  W32((uint32_t)(ebp + 0xfffffdb0u), eax);
/* 86468a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 86468d: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 864693: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 864696: mov dword ptr [ebp - 0xec], edx */
  W32((uint32_t)(ebp + 0xffffff14u), edx);
/* 86469c: fld dword ptr [ebp + 0x20c] */
  { double v = F32((uint32_t)(ebp + 0x20cu)); FPUSH(v); }
/* 8646a2: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8646a4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8646a7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8646aa: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8646ac: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8646af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8646b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8646b3: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8646b9: fsub dword ptr [ebp - 0xec] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff14u)));
/* 8646bf: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8646c5: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8646c8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8646cb: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8646ce: fld dword ptr [ebp - 0x140] */
  { double v = F32((uint32_t)(ebp + 0xfffffec0u)); FPUSH(v); }
/* 8646d4: fadd dword ptr [ebp - 0x104] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffefcu)));
/* 8646da: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8646dd: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8646e0: mov dword ptr [ebp - 0x24c], eax */
  W32((uint32_t)(ebp + 0xfffffdb4u), eax);
/* 8646e6: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8646e9: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8646ec: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8646ef: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8646f2: mov dword ptr [ebp - 0x248], ecx */
  W32((uint32_t)(ebp + 0xfffffdb8u), ecx);
/* 8646f8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8646fb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8646fd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8646ff: mov dword ptr [ebp - 0x134], ecx */
  W32((uint32_t)(ebp + 0xfffffeccu), ecx);
/* 864705: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 864708: mov dword ptr [ebp - 0xe0], eax */
  W32((uint32_t)(ebp + 0xffffff20u), eax);
/* 86470e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 864711: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 864714: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 864717: mov dword ptr [ebp - 0x244], edx */
  W32((uint32_t)(ebp + 0xfffffdbcu), edx);
/* 86471d: fld dword ptr [ebp + 0x20c] */
  { double v = F32((uint32_t)(ebp + 0x20cu)); FPUSH(v); }
/* 864723: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 864725: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 864728: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86472b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 86472d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 864730: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 864732: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 864734: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 86473a: fsub dword ptr [ebp - 0x134] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeccu)));
/* 864740: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 864746: fsubr dword ptr [ebp - 0x18] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe8u))) - ST0;
/* 864749: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86474c: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86474f: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 864755: fsub dword ptr [ebp - 0xe0] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff20u)));
/* 86475b: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 86475e: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 864761: mov dword ptr [ebp - 0x240], edx */
  W32((uint32_t)(ebp + 0xfffffdc0u), edx);
/* 864767: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 86476a: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 86476d: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 864770: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 864773: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 864776: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 864778: mov dword ptr [ebp - 0x23c], eax */
  W32((uint32_t)(ebp + 0xfffffdc4u), eax);
/* 86477e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 864781: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 864784: mov dword ptr [ebp - 0xf8], eax */
  W32((uint32_t)(ebp + 0xffffff08u), eax);
/* 86478a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86478d: mov dword ptr [ebp - 0x128], edx */
  W32((uint32_t)(ebp + 0xfffffed8u), edx);
/* 864793: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 864796: mov dword ptr [ebp - 0x238], ecx */
  W32((uint32_t)(ebp + 0xfffffdc8u), ecx);
/* 86479c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 86479f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8647a1: fadd dword ptr [ebp + 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20cu)));
/* 8647a7: fstp dword ptr [ebp + 0x20c] */
  WF32((uint32_t)(ebp + 0x20cu), ST0); FPOP();
/* 8647ad: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8647b0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8647b3: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 8647b9: fadd dword ptr [ebp - 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff78u)));
/* 8647bf: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8647c5: fld dword ptr [ebp + 0x20c] */
  { double v = F32((uint32_t)(ebp + 0x20cu)); FPUSH(v); }
/* 8647cb: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8647ce: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8647d1: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8647d4: fld dword ptr [ebp - 0x110] */
  { double v = F32((uint32_t)(ebp + 0xfffffef0u)); FPUSH(v); }
/* 8647da: fsub dword ptr [ebp - 0x128] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffed8u)));
/* 8647e0: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8647e3: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8647e6: mov dword ptr [ebp - 0x234], ecx */
  W32((uint32_t)(ebp + 0xfffffdccu), ecx);
/* 8647ec: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8647ef: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8647f2: mov dword ptr [ebp - 0x230], edx */
  W32((uint32_t)(ebp + 0xfffffdd0u), edx);
/* 8647f8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8647fb: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8647fe: mov dword ptr [ebp - 0x22c], eax */
  W32((uint32_t)(ebp + 0xfffffdd4u), eax);
/* 864804: xor esi, esi */
  esi = 0;
L_864806: /* 864806: cmp esi, dword ptr [ebp + 0x208] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x208u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86480c: jge 0x86488a */
  if ((sf == of)) goto L_86488a;
L_86480e: /* 86480e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 864810: je 0x864884 */
  if (zf) goto L_864884;
L_864812: /* 864812: mov eax, esi */
  eax = esi;
/* 864814: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864817: lea ecx, [ebp + eax + 8] */
  ecx = (uint32_t)(ebp + eax + 0x8u);
/* 86481b: mov eax, dword ptr [ebp + eax + 0x14] */
  eax = R32((uint32_t)(ebp + eax + 0x14u));
/* 86481f: mov edx, ecx */
  edx = ecx;
/* 864821: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 864823: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 864826: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 864829: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 86482c: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86482f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 864832: fchs  */
  ST0 = -ST0;
/* 864834: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 864837: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 86483a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86483b: fchs  */
  ST0 = -ST0;
/* 86483d: lea edx, [ebp - 0x298] */
  edx = (uint32_t)(ebp + 0xfffffd68u);
/* 864843: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 864846: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864847: fchs  */
  ST0 = -ST0;
/* 864849: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 86484f: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 864855: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 86485b: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x864861u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 864861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864864: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 86486a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86486b: lea ecx, [ebp - 0x288] */
  ecx = (uint32_t)(ebp + 0xfffffd78u);
/* 864871: call 0x6cb096 */
  esp -= 4; W32(esp, 0x864876u); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 864876: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864878: jne 0x864884 */
  if (!zf) goto L_864884;
L_86487a: /* 86487a: xor edi, edi */
  edi = 0;
/* 86487c: mov dword ptr [ebp - 0x188], edi */
  W32((uint32_t)(ebp + 0xfffffe78u), edi);
/* 864882: jmp 0x864890 */
  goto L_864890;
L_864884: /* 864884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 864885: jmp 0x864806 */
  goto L_864806;
L_86488a: /* 86488a: mov edi, dword ptr [ebp - 0x188] */
  edi = R32((uint32_t)(ebp + 0xfffffe78u));
L_864890: /* 864890: xor ecx, ecx */
  ecx = 0;
L_864892: /* 864892: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 864894: jge 0x8648f2 */
  if ((sf == of)) goto L_8648f2;
L_864896: /* 864896: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 864899: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86489a: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 86489d: mov eax, esi */
  eax = esi;
/* 86489f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8648a0: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x8648a0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8648a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8648a5: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8648a8: lea edx, [ebp + eax*4 - 0x258] */
  edx = (uint32_t)(ebp + eax*4 + 0xfffffda8u);
/* 8648af: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8648b1: mov eax, esp */
  eax = esp;
/* 8648b3: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8648b5: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8648b8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8648bb: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8648be: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8648c1: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8648c4: lea ecx, [ebp + eax*4 - 0x258] */
  ecx = (uint32_t)(ebp + eax*4 + 0xfffffda8u);
/* 8648cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8648cd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8648d0: mov edx, esp */
  edx = esp;
/* 8648d2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8648d4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8648d7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8648da: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8648dd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8648e0: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8648e3: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8648e8u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8648e8: mov edi, dword ptr [ebp - 0x188] */
  edi = R32((uint32_t)(ebp + 0xfffffe78u));
/* 8648ee: mov ecx, esi */
  ecx = esi;
/* 8648f0: jmp 0x864892 */
  goto L_864892;
L_8648f2: /* 8648f2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8648f3: mov dword ptr [ebp + 0x20c], ebx */
  W32((uint32_t)(ebp + 0x20cu), ebx);
/* 8648f9: jmp 0x8644d0 */
  goto L_8644d0;
L_864931: /* 864931: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 864934: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864935: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864936: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86493d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86493e: mov esp, ebp */
  esp = ebp;
/* 864940: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864941: ret 0x208 */
  esp += 524; SPILL(); return;
}

void f_8648fe(void) {
  LOAD_REGS();
L_8648fe: /* 8648fe: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 864904: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 864909: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 86490c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86490d: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 864910: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864915u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_864915(); return;
}

void f_864915(void) {
  LOAD_REGS();
L_864915: /* 864915: push 0xa17e58 */
  { uint32_t v = 0xa17e58u; esp -= 4; W32(esp, v); }
/* 86491a: push 0xae52b8 */
  { uint32_t v = 0xae52b8u; esp -= 4; W32(esp, v); }
/* 86491f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x864925u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 864925: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86492a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86492c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864931u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 864931: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 864934: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864935: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864936: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86493d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86493e: mov esp, ebp */
  esp = ebp;
/* 864940: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864941: ret 0x208 */
  esp += 524; SPILL(); return;
}

void f_864a90(void) {
  LOAD_REGS();
L_864a90: /* 864a90: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 864a93: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 864a96: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 864a9a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864a9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864a9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864aa0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x864aa5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 864aa5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864aa8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_864ac0(void) {
  LOAD_REGS();
L_864ac0: /* 864ac0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 864ac4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 864ac7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 864acb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864ace: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 864ad0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 864ad2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_864af0(void) {
  LOAD_REGS();
L_864af0: /* 864af0: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 864af6: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* 864afc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 864b00: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 864b03: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864b07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864b08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864b09: call 0x6ca83f */
  esp -= 4; W32(esp, 0x864b0eu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 864b0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864b11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_864b30(void) {
  LOAD_REGS();
L_864b30: /* 864b30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 864b34: mov ecx, dword ptr [ecx + 0x94] */
  ecx = R32((uint32_t)(ecx + 0x94u));
/* 864b3a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 864b3d: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 864b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 864b44: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 864b46: ret 8 */
  esp += 12; SPILL(); return;
}

void f_864b60(void) {
  LOAD_REGS();
L_864b60: /* 864b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864b61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864b62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864b63: mov esi, ecx */
  esi = ecx;
/* 864b65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864b66: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 864b69: mov dword ptr [esi], 0x9f7c44 */
  W32((uint32_t)(esi), 0x9f7c44u);
/* 864b6f: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x864b75u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 864b75: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 864b7b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 864b7e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 864b81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864b83: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 864b88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864b89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864b8a: call 0x99c910 */
  esp -= 4; W32(esp, 0x864b8fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 864b8f: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 864b94: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 864b97: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 864b9a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 864b9d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 864ba3: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 864ba6: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 864ba9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864baa: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 864bad: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 864bb0: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 864bb7: mov eax, esi */
  eax = esi;
/* 864bb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864bba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864bbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864bbc: ret  */
  esp += 4; SPILL(); return;
}

void f_864be0(void) {
  LOAD_REGS();
L_864be0: /* 864be0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864be1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 864be5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 864be8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864be9: mov esi, ecx */
  esi = ecx;
/* 864beb: je 0x864c1d */
  if (zf) goto L_864c1d;
L_864bed: /* 864bed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 864bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864bf1: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 864bf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 864bf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864bfa: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 864bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864bfd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x864c02u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 864c02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 864c05: je 0x864c15 */
  if (zf) goto L_864c15;
L_864c07: /* 864c07: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 864c0d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 864c0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 864c11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864c12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x864c15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_864c15: /* 864c15: mov eax, edi */
  eax = edi;
/* 864c17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864c18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864c19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864c1a: ret 4 */
  esp += 8; SPILL(); return;
L_864c1d: /* 864c1d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 864c20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864c22: je 0x864c32 */
  if (zf) goto L_864c32;
L_864c24: /* 864c24: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 864c2a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 864c2c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 864c2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864c2f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x864c32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_864c32: /* 864c32: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 864c35: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 864c3c: je 0x864c4b */
  if (zf) goto L_864c4b;
L_864c3e: /* 864c3e: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 864c43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 864c45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 864c47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864c48: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x864c4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_864c4b: /* 864c4b: mov eax, esi */
  eax = esi;
/* 864c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864c4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864c4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_864c80(void) {
  LOAD_REGS();
L_864c80: /* 864c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864c81: mov ebp, esp */
  ebp = esp;
/* 864c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 864c85: push 0x9d4350 */
  { uint32_t v = 0x9d4350u; esp -= 4; W32(esp, v); }
/* 864c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 864c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 864c98: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864c9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864c9e: xor eax, eax */
  eax = 0;
/* 864ca0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 864ca3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 864ca5: mov edi, ecx */
  edi = ecx;
/* 864ca7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 864caa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 864cad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 864cb0: call 0x905360 */
  esp -= 4; W32(esp, 0x864cb5u); SPILL(); f_905360(); if (g_unwind) return; RELOAD();
/* 864cb5: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 864cb8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864cbb: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 864cbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864cc0: mov ecx, esi */
  ecx = esi;
/* 864cc2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x864cc8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 864cc8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 864ccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864ccc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 864ccf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864cd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864cd2: call 0x9053a0 */
  esp -= 4; W32(esp, 0x864cd7u); SPILL(); f_9053a0(); if (g_unwind) return; RELOAD();
/* 864cd7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864cda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864cdc: mov ecx, esi */
  ecx = esi;
/* 864cde: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x864ce4u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 864ce4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 864ce7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 864cea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864ceb: mov ecx, esi */
  ecx = esi;
/* 864ced: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x864cf3u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 864cf3: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 864cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864cf8: mov ecx, esi */
  ecx = esi;
/* 864cfa: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x864d00u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 864d00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 864d03: lea edx, [ebx + ebx] */
  edx = (uint32_t)(ebx + ebx);
/* 864d06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864d07: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 864d0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864d0c: call 0x6ca83f */
  esp -= 4; W32(esp, 0x864d11u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 864d11: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 864d14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864d17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864d19: je 0x864d3d */
  if (zf) goto L_864d3d;
L_864d1b: /* 864d1b: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 864d1e: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
/* 864d21: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 864d26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864d27: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 864d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864d2a: call 0x99ca3d */
  esp -= 4; W32(esp, 0x864d2fu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 864d2f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 864d35: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 864d37: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 864d39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864d3a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x864d3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_864d3d: /* 864d3d: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 864d40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 864d43: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 864d44: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 864d47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864d48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864d49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 864d50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864d51: mov esp, ebp */
  esp = ebp;
/* 864d53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864d54: ret  */
  esp += 4; SPILL(); return;
}

void f_864d55(void) {
  LOAD_REGS();
L_864d55: /* 864d55: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 864d58: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 864d5d: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 864d60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864d61: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 864d64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864d69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_864d69(); return;
}

void f_864d69(void) {
  LOAD_REGS();
L_864d69: /* 864d69: push 0xa17ea4 */
  { uint32_t v = 0xa17ea4u; esp -= 4; W32(esp, v); }
/* 864d6e: push 0xae52f8 */
  { uint32_t v = 0xae52f8u; esp -= 4; W32(esp, v); }
/* 864d73: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x864d79u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 864d79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864d7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864d80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864d85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_864d85: guest_badaddr(0x864d85); return;
}

void f_864de0(void) {
  LOAD_REGS();
L_864de0: /* 864de0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 864de3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 864de6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 864dea: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864dee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864def: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864df0: call 0x6ca83f */
  esp -= 4; W32(esp, 0x864df5u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 864df5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864df8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_864e10(void) {
  LOAD_REGS();
L_864e10: /* 864e10: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 864e13: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 864e16: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 864e1a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 864e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864e1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 864e1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864e20: call 0x6ca83f */
  esp -= 4; W32(esp, 0x864e25u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 864e25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864e28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_864e40(void) {
  LOAD_REGS();
L_864e40: /* 864e40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 864e43: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 864e47: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 864e4a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 864e4e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 864e50: ret 8 */
  esp += 12; SPILL(); return;
}

void f_864e70(void) {
  LOAD_REGS();
L_864e70: /* 864e70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 864e74: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 864e78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864e79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864e7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864e7b: mov esi, ecx */
  esi = ecx;
/* 864e7d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 864e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864e82: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 864e85: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 864e88: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 864e8b: mov dword ptr [esi], 0xa17ef0 */
  W32((uint32_t)(esi), 0xa17ef0u);
/* 864e91: mov dword ptr [esi + 0xc], 1 */
  W32((uint32_t)(esi + 0xcu), 0x1u);
/* 864e98: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 864e9e: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 864ea1: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 864ea4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864ea6: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 864eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864eac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864ead: call 0x99c910 */
  esp -= 4; W32(esp, 0x864eb2u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 864eb2: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 864eb7: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 864eba: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 864ebd: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 864ec0: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 864ec6: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 864ec9: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 864ecc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864ecd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 864ed0: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 864ed3: mov eax, esi */
  eax = esi;
/* 864ed5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864ed6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864ed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864ed8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_864f00(void) {
  LOAD_REGS();
L_864f00: /* 864f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864f01: mov ebp, esp */
  ebp = esp;
/* 864f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 864f05: push 0x9d4360 */
  { uint32_t v = 0x9d4360u; esp -= 4; W32(esp, v); }
/* 864f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 864f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 864f18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864f1c: mov eax, ecx */
  eax = ecx;
/* 864f1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864f1f: mov dword ptr [eax], 0xa17ef0 */
  W32((uint32_t)(eax), 0xa17ef0u);
/* 864f25: mov ecx, dword ptr [0xce9ec0] */
  ecx = R32((uint32_t)(0xce9ec0u));
/* 864f2b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864f2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864f2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 864f31: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 864f38: je 0x864f5b */
  if (zf) goto L_864f5b;
L_864f3a: /* 864f3a: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 864f3d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864f3f: je 0x864f5b */
  if (zf) goto L_864f5b;
L_864f41: /* 864f41: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 864f44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 864f46: je 0x864f5b */
  if (zf) goto L_864f5b;
L_864f48: /* 864f48: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 864f4b: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 864f4e: mov eax, edx */
  eax = edx;
/* 864f50: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 864f52: je 0x864f5b */
  if (zf) goto L_864f5b;
L_864f54: /* 864f54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 864f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864f57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864f58: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x864f5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_864f5b: /* 864f5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 864f5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 864f5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 864f60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 864f67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 864f68: mov esp, ebp */
  esp = ebp;
/* 864f6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 864f6b: ret  */
  esp += 4; SPILL(); return;
}

void f_864f6c(void) {
  LOAD_REGS();
L_864f6c: /* 864f6c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 864f6f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 864f74: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 864f77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 864f78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 864f7b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864f80u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_864f80(); return;
}

void f_864f80(void) {
  LOAD_REGS();
L_864f80: /* 864f80: push 0xa17f38 */
  { uint32_t v = 0xa17f38u; esp -= 4; W32(esp, v); }
/* 864f85: push 0xae535c */
  { uint32_t v = 0xae535cu; esp -= 4; W32(esp, v); }
/* 864f8a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x864f90u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 864f90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 864f93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864f95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 864f97: call 0x99caf8 */
  esp -= 4; W32(esp, 0x864f9cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_864f9c: guest_badaddr(0x864f9c); return;
}

void f_864fd0(void) {
  LOAD_REGS();
L_864fd0: /* 864fd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 864fd1: mov ebp, esp */
  ebp = esp;
/* 864fd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 864fd5: push 0x9d4370 */
  { uint32_t v = 0x9d4370u; esp -= 4; W32(esp, v); }
/* 864fda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 864fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 864fe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 864fe8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 864feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864fec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 864fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 864ff0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 864ff3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 864ff4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 864ff7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 864ff9: xor edi, edi */
  edi = 0;
/* 864ffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 864ffc: mov ecx, esi */
  ecx = esi;
/* 864ffe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 865001: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x865007u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 865007: mov ecx, ebx */
  ecx = ebx;
/* 865009: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x86500fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 86500f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 865011: je 0x865061 */
  if (zf) goto L_865061;
L_865013: /* 865013: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 865016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865017: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865018: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x86501eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 86501e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 865021: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865024: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865025: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865027: mov ecx, esi */
  ecx = esi;
/* 865029: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x86502fu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 86502f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 865032: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
L_865038: /* 865038: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86503b: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86503e: jge 0x865088 */
  if ((sf == of)) goto L_865088;
L_865040: /* 865040: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865042: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 865044: mov ecx, esi */
  ecx = esi;
/* 865046: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86504cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86504c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86504e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 865051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865052: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865053: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865055: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 865058: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86505b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86505c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86505f: jmp 0x865038 */
  goto L_865038;
L_865061: /* 865061: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 865064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865065: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865066: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x86506cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 86506c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86506f: nop  */
L_865070: /* 865070: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865073: jge 0x865088 */
  if ((sf == of)) goto L_865088;
L_865075: /* 865075: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 865077: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 86507a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86507b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86507c: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x865082u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 865082: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865085: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 865086: jmp 0x865070 */
  goto L_865070;
L_865088: /* 865088: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86508b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86508c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86508d: mov eax, ebx */
  eax = ebx;
/* 86508f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865096: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865097: mov esp, ebp */
  esp = ebp;
/* 865099: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86509a: ret  */
  esp += 4; SPILL(); return;
}

void f_86509b(void) {
  LOAD_REGS();
L_86509b: /* 86509b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86509e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8650a3: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8650a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8650a7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8650aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8650afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8650af(); return;
}

void f_8650af(void) {
  LOAD_REGS();
L_8650af: /* 8650af: push 0xa17f90 */
  { uint32_t v = 0xa17f90u; esp -= 4; W32(esp, v); }
/* 8650b4: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8650b9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8650bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8650bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8650c2: xor edi, edi */
  edi = 0;
/* 8650c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8650c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8650c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8650cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8650cb: guest_badaddr(0x8650cb); return;
}

void f_865110(void) {
  LOAD_REGS();
L_865110: /* 865110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865111: mov ebp, esp */
  ebp = esp;
/* 865113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 865115: push 0x9d4380 */
  { uint32_t v = 0x9d4380u; esp -= 4; W32(esp, v); }
/* 86511a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 865120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 865128: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86512b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86512c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86512d: mov esi, ecx */
  esi = ecx;
/* 86512f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 865132: xor ebx, ebx */
  ebx = 0;
/* 865134: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865137: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86513a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 86513d: jle 0x865235 */
  if ((zf || sf != of)) goto L_865235;
L_865143: /* 865143: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 865146: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 865148: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86514au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86514a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 86514d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86514f: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 865152: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 865155: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 865158: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 86515c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86515f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865161: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865162: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865163: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x865166u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865166: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86516b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 86516e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865171: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865172: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x865175u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865175: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 86517a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 86517d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86517f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865180: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 865182: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x865185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865185: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 865188: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86518a: lea eax, [esi + 0x54] */
  eax = (uint32_t)(esi + 0x54u);
/* 86518d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86518e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 865190: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x865193u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865193: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 865196: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865199: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86519a: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x86519du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86519d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8651a0: mov ecx, esp */
  ecx = esp;
/* 8651a2: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 8651a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651a6: mov edi, eax */
  edi = eax;
/* 8651a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8651ab: mov edx, ebx */
  edx = ebx;
/* 8651ad: mov eax, esp */
  eax = esp;
/* 8651af: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8651b1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8651b4: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8651b7: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8651ba: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8651bd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8651c0: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8651c6u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8651c6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8651c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8651cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8651d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651d1: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8651d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8651d4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8651d7: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8651da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8651dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8651e0: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8651e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8651e3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8651e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8651e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8651ea: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8651edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8651ed: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8651f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8651f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8651f4: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x8651f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8651f7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8651fa: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 865200: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865202: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 865203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865204: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 865207: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865209: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 86520c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86520d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86520e: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x865211u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865211: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 865214: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865216: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x865219u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865219: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 86521f: xor eax, eax */
  eax = 0;
L_865221: /* 865221: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865224: jge 0x865229 */
  if ((sf == of)) goto L_865229;
L_865226: /* 865226: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 865227: jmp 0x865221 */
  goto L_865221;
L_865229: /* 865229: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86522a: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86522c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x865232u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 865232: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
L_865235: /* 865235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 865238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 865239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86523a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865242: mov esp, ebp */
  esp = ebp;
/* 865244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 865245: ret  */
  esp += 4; SPILL(); return;
}

void f_865246(void) {
  LOAD_REGS();
L_865246: /* 865246: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 865249: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86524e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 865251: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865252: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 865255: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86525au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86525a(); return;
}

void f_86525a(void) {
  LOAD_REGS();
L_86525a: /* 86525a: push 0xa17fa8 */
  { uint32_t v = 0xa17fa8u; esp -= 4; W32(esp, v); }
/* 86525f: push 0xae52c0 */
  { uint32_t v = 0xae52c0u; esp -= 4; W32(esp, v); }
/* 865264: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86526au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86526a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86526d: xor ebx, ebx */
  ebx = 0;
/* 86526f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865271: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865276u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_865276: guest_badaddr(0x865276); return;
}

void f_8652e0(void) {
  LOAD_REGS();
L_8652e0: /* 8652e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8652e1: mov ebp, esp */
  ebp = esp;
/* 8652e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8652e5: push 0x9d4390 */
  { uint32_t v = 0x9d4390u; esp -= 4; W32(esp, v); }
/* 8652ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8652f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8652f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8652f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8652fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8652fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8652fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8652fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 865301: mov esi, ecx */
  esi = ecx;
/* 865303: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 865306: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 865309: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 865310: jne 0x86531a */
  if (!zf) goto L_86531a;
L_865312: /* 865312: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 865315: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 865318: je 0x86532a */
  if (zf) goto L_86532a;
L_86531a: /* 86531a: mov ecx, esi */
  ecx = esi;
/* 86531c: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x865321u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 865321: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 865324: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 865327: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_86532a: /* 86532a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86532d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86532e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86532f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865336: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865337: mov esp, ebp */
  esp = ebp;
/* 865339: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86533a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_86533d(void) {
  LOAD_REGS();
L_86533d: /* 86533d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 865340: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 865345: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 865348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865349: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86534c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865351u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_865351(); return;
}

void f_865351(void) {
  LOAD_REGS();
L_865351: /* 865351: push 0xa17fd8 */
  { uint32_t v = 0xa17fd8u; esp -= 4; W32(esp, v); }
/* 865356: push 0xae52c8 */
  { uint32_t v = 0xae52c8u; esp -= 4; W32(esp, v); }
/* 86535b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x865361u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 865361: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865364: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865366: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865368: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86536du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86536d: guest_badaddr(0x86536d); return;
}

void f_8653a0(void) {
  LOAD_REGS();
L_8653a0: /* 8653a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8653a1: mov ebp, esp */
  ebp = esp;
/* 8653a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8653a5: push 0x9d43a0 */
  { uint32_t v = 0x9d43a0u; esp -= 4; W32(esp, v); }
/* 8653aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8653b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8653b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8653b8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8653bb: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 8653c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8653c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8653c2: mov ebx, ecx */
  ebx = ecx;
/* 8653c4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8653c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8653c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8653cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8653d2: je 0x8653ee */
  if (zf) goto L_8653ee;
L_8653d4: /* 8653d4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8653d7: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 8653da: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8653dd: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8653e0: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 8653e3: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 8653e6: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 8653e9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8653ec: jmp 0x8653f1 */
  goto L_8653f1;
L_8653ee: /* 8653ee: mov edi, dword ptr [ebp + 0x30] */
  edi = R32((uint32_t)(ebp + 0x30u));
L_8653f1: /* 8653f1: mov esi, dword ptr [ebp + 0x2c] */
  esi = R32((uint32_t)(ebp + 0x2cu));
/* 8653f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8653f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8653f7: mov ecx, ebx */
  ecx = ebx;
/* 8653f9: call 0x6c4d1d */
  esp -= 4; W32(esp, 0x8653feu); SPILL(); f_6c4d1d(); if (g_unwind) return; RELOAD();
/* 8653fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865400: je 0x865640 */
  if (zf) goto L_865640;
L_865406: /* 865406: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 865408: mov ecx, esi */
  ecx = esi;
/* 86540a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x86540du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86540d: mov dword ptr [ebp + 0x30], eax */
  W32((uint32_t)(ebp + 0x30u), eax);
/* 865410: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 865412: mov ecx, esi */
  ecx = esi;
/* 865414: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x865417u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_865417: /* 865417: fild dword ptr [ebp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 86541a: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* 86541d: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86541f: lea esi, [ebx + 0x94] */
  esi = (uint32_t)(ebx + 0x94u);
/* 865425: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 86542b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86542d: mov ecx, esi */
  ecx = esi;
/* 86542f: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 865432: fild dword ptr [ebp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 865435: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 86543b: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 86543e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x865444u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 865444: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 865446: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 865449: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 86544c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86544e: je 0x86548a */
  if (zf) goto L_86548a;
L_865450: /* 865450: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 865453: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 865456: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 865459: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86545c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 86545f: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 865462: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 865465: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 865468: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 86546b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 86546e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 865471: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 865474: mov edx, eax */
  edx = eax;
/* 865476: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 865478: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86547b: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 86547e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 865481: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 865484: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 865487: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_86548a: /* 86548a: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86548c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86548e: mov ecx, esi */
  ecx = esi;
/* 865490: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x865496u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 865496: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 865499: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86549b: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 86549e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8654a0: je 0x8654dc */
  if (zf) goto L_8654dc;
L_8654a2: /* 8654a2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8654a5: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8654a8: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8654ab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8654ae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8654b1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8654b4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8654b7: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 8654ba: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8654bd: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8654c0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8654c3: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8654c6: mov edx, eax */
  edx = eax;
/* 8654c8: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8654ca: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8654cd: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 8654d0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8654d3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8654d6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8654d9: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_8654dc: /* 8654dc: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8654de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8654e0: mov ecx, esi */
  ecx = esi;
/* 8654e2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8654e8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8654e8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8654eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8654ed: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8654f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8654f2: je 0x86552e */
  if (zf) goto L_86552e;
L_8654f4: /* 8654f4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8654f7: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8654fa: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8654fd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 865500: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 865503: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 865506: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 865509: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 86550c: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 86550f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 865512: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 865515: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 865518: mov edx, eax */
  edx = eax;
/* 86551a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 86551c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86551f: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 865522: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 865525: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 865528: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86552b: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_86552e: /* 86552e: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 865530: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 865532: mov ecx, esi */
  ecx = esi;
/* 865534: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86553au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86553a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86553d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86553f: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 865542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865544: je 0x865580 */
  if (zf) goto L_865580;
L_865546: /* 865546: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 865549: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 86554c: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 86554f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 865552: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 865555: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 865558: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86555b: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 86555e: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 865561: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 865564: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 865567: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 86556a: mov edx, eax */
  edx = eax;
/* 86556c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 86556e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 865571: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 865574: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 865577: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86557a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86557d: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_865580: /* 865580: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 865582: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 865584: mov ecx, esi */
  ecx = esi;
/* 865586: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86558cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86558c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86558f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 865591: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 865594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865596: je 0x8655d2 */
  if (zf) goto L_8655d2;
L_865598: /* 865598: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86559b: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 86559e: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 8655a1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8655a4: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8655a7: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8655aa: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8655ad: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 8655b0: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8655b3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8655b6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8655b9: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 8655bc: mov edx, eax */
  edx = eax;
/* 8655be: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8655c0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8655c3: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 8655c6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8655c9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8655cc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8655cf: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_8655d2: /* 8655d2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8655d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8655d6: mov ecx, esi */
  ecx = esi;
/* 8655d8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8655deu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8655de: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8655e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8655e3: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8655e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8655e8: je 0x865624 */
  if (zf) goto L_865624;
L_8655ea: /* 8655ea: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8655ed: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8655f0: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 8655f3: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8655f6: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8655f9: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8655fc: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8655ff: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 865602: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 865605: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 865608: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86560b: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 86560e: mov edx, eax */
  edx = eax;
/* 865610: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 865612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 865615: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 865618: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 86561b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86561e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 865621: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
L_865624: /* 865624: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 865627: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86562a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86562b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86562e: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 865631: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 865632: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865639: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86563a: mov esp, ebp */
  esp = ebp;
/* 86563c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86563d: ret 0x2c */
  esp += 48; SPILL(); return;
L_865640: /* 865640: mov eax, 1 */
  eax = 0x1u;
/* 865645: mov dword ptr [ebp + 0x30], eax */
  W32((uint32_t)(ebp + 0x30u), eax);
/* 865648: jmp 0x865417 */
  goto L_865417;
}

void f_86564d(void) {
  LOAD_REGS();
L_86564d: /* 86564d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 865650: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 865655: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 865658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865659: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86565c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865661u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_865661(); return;
}

void f_865661(void) {
  LOAD_REGS();
L_865661: /* 865661: push 0xa1801c */
  { uint32_t v = 0xa1801cu; esp -= 4; W32(esp, v); }
/* 865666: push 0xae52e0 */
  { uint32_t v = 0xae52e0u; esp -= 4; W32(esp, v); }
/* 86566b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x865671u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 865671: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865678: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86567du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86567d: guest_badaddr(0x86567d); return;
}

void f_865740(void) {
  LOAD_REGS();
L_865740: /* 865740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865741: mov ebp, esp */
  ebp = esp;
/* 865743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 865745: push 0x9d43b0 */
  { uint32_t v = 0x9d43b0u; esp -= 4; W32(esp, v); }
/* 86574a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 865750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 865758: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86575b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86575c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86575d: xor eax, eax */
  eax = 0;
/* 86575f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865760: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 865763: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865764: mov edi, ecx */
  edi = ecx;
/* 865766: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 865769: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86576c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86576f: call 0x905360 */
  esp -= 4; W32(esp, 0x865774u); SPILL(); f_905360(); if (g_unwind) return; RELOAD();
/* 865774: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 865777: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86577a: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 86577d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86577f: mov ecx, esi */
  ecx = esi;
/* 865781: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x865787u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 865787: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 86578a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86578b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 86578e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86578f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865791: call 0x9053a0 */
  esp -= 4; W32(esp, 0x865796u); SPILL(); f_9053a0(); if (g_unwind) return; RELOAD();
/* 865796: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86579b: mov ecx, esi */
  ecx = esi;
/* 86579d: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8657a3u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8657a3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8657a6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8657a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8657aa: mov ecx, esi */
  ecx = esi;
/* 8657ac: call dword ptr [0xcfa64c] */
  esp -= 4; W32(esp, 0x8657b2u); SPILL(); f_4e437c(); if (g_unwind) return; /* Core!?Add@?$TArray@G@@QAEHH@Z */ RELOAD();
/* 8657b2: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 8657b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8657b7: mov ecx, esi */
  ecx = esi;
/* 8657b9: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8657bfu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8657bf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8657c2: lea edx, [ebx + ebx] */
  edx = (uint32_t)(ebx + ebx);
/* 8657c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8657c6: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8657c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8657ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8657cb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8657d0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8657d0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8657d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8657d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8657d8: je 0x8657fc */
  if (zf) goto L_8657fc;
L_8657da: /* 8657da: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 8657dd: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
/* 8657e0: push 0x6c6b5e */
  { uint32_t v = 0x6c6b5eu; esp -= 4; W32(esp, v); }
/* 8657e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8657e6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8657e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8657e9: call 0x99ca3d */
  esp -= 4; W32(esp, 0x8657eeu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 8657ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8657f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8657f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8657f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8657f9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8657fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8657fc: /* 8657fc: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 8657ff: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 865802: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 865805: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 865806: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 865809: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86580a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86580b: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86580e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865816: mov esp, ebp */
  esp = ebp;
/* 865818: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 865819: ret  */
  esp += 4; SPILL(); return;
}

void f_86581a(void) {
  LOAD_REGS();
L_86581a: /* 86581a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86581d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 865822: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 865825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865826: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 865829: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86582eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86582e(); return;
}

void f_86582e(void) {
  LOAD_REGS();
L_86582e: /* 86582e: push 0xa18050 */
  { uint32_t v = 0xa18050u; esp -= 4; W32(esp, v); }
/* 865833: push 0xae52f0 */
  { uint32_t v = 0xae52f0u; esp -= 4; W32(esp, v); }
/* 865838: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86583eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86583e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865843: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865845: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86584au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86584a: guest_badaddr(0x86584a); return;
}

void f_8658a0(void) {
  LOAD_REGS();
L_8658a0: /* 8658a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8658a4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8658a8: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 8658ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8658ac: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8658af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8658b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8658b1: call 0x6c67cb */
  esp -= 4; W32(esp, 0x8658b6u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 8658b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8658b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8658ba: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8658c0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8658c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8658c3: ret  */
  esp += 4; SPILL(); return;
}

void f_8658e0(void) {
  LOAD_REGS();
L_8658e0: /* 8658e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8658e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8658e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8658e3: mov esi, ecx */
  esi = ecx;
/* 8658e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8658e6: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8658e9: mov dword ptr [esi], 0x9f7fc8 */
  W32((uint32_t)(esi), 0x9f7fc8u);
/* 8658ef: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8658f5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8658f5: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8658fb: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8658fe: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 865901: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865903: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 865908: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86590a: call 0x99c910 */
  esp -= 4; W32(esp, 0x86590fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 86590f: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 865914: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 865917: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 86591a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 86591d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 865923: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 865926: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 865929: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86592a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 86592d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 865930: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 865937: mov eax, esi */
  eax = esi;
/* 865939: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86593a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86593b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86593c: ret  */
  esp += 4; SPILL(); return;
}

void f_865960(void) {
  LOAD_REGS();
L_865960: /* 865960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 865964: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 865968: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 86596b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86596c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86596f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865971: call 0x6c90b1 */
  esp -= 4; W32(esp, 0x865976u); SPILL(); f_6c90b1(); if (g_unwind) return; RELOAD();
/* 865976: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86597a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x865980u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 865980: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865983: ret  */
  esp += 4; SPILL(); return;
}

void f_8659a0(void) {
  LOAD_REGS();
L_8659a0: /* 8659a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8659a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8659a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8659a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8659a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8659a8: mov esi, ecx */
  esi = ecx;
/* 8659aa: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8659ad: mov dword ptr [esi], 0x9f7fe0 */
  W32((uint32_t)(esi), 0x9f7fe0u);
/* 8659b3: mov dword ptr [esi + 8], 1 */
  W32((uint32_t)(esi + 0x8u), 0x1u);
/* 8659ba: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8659c0: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8659c3: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8659c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8659c8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8659cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8659ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8659cf: call 0x99c910 */
  esp -= 4; W32(esp, 0x8659d4u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8659d4: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8659d9: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8659dc: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8659df: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8659e2: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8659e8: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8659eb: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8659ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8659ef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8659f2: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 8659f5: mov eax, esi */
  eax = esi;
/* 8659f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8659f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8659f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8659fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_865a20(void) {
  LOAD_REGS();
L_865a20: /* 865a20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865a21: mov ebp, esp */
  ebp = esp;
/* 865a23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 865a25: push 0x9d43c0 */
  { uint32_t v = 0x9d43c0u; esp -= 4; W32(esp, v); }
/* 865a2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 865a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865a31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 865a38: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 865a3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865a3c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 865a3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865a40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 865a43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865a44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 865a47: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865a49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865a4a: mov ecx, ebx */
  ecx = ebx;
/* 865a4c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 865a53: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x865a59u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 865a59: mov ecx, esi */
  ecx = esi;
/* 865a5b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x865a61u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 865a61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865a63: je 0x865aee */
  if (zf) goto L_865aee;
L_865a69: /* 865a69: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 865a6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865a6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865a6e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x865a74u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 865a74: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 865a77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865a7a: xor eax, eax */
  eax = 0;
/* 865a7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_865a80: /* 865a80: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865a83: jge 0x865a88 */
  if ((sf == of)) goto L_865a88;
L_865a85: /* 865a85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 865a86: jmp 0x865a80 */
  goto L_865a80;
L_865a88: /* 865a88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865a89: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865a8b: mov ecx, ebx */
  ecx = ebx;
/* 865a8d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x865a93u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 865a93: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 865a99: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_865aa0: /* 865aa0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 865aa3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865aa6: jge 0x865b42 */
  if ((sf == of)) goto L_865b42;
L_865aac: /* 865aac: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865aae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 865ab0: mov ecx, ebx */
  ecx = ebx;
/* 865ab2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x865ab8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 865ab8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 865aba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 865abd: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 865ac0: lea eax, [esi + 2] */
  eax = (uint32_t)(esi + 0x2u);
/* 865ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865ac5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865ac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865ac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865aca: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 865acd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865ace: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865acf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865ad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865ad1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865ad6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865ad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865ad8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865adb: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 865ade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865ae0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865ae2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865ae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 865ae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865ae8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 865ae9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 865aec: jmp 0x865aa0 */
  goto L_865aa0;
L_865aee: /* 865aee: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 865af1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865af2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865af3: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x865af9u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 865af9: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 865aff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b02: xor eax, eax */
  eax = 0;
/* 865b04: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_865b07: /* 865b07: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865b0a: jge 0x865b42 */
  if ((sf == of)) goto L_865b42;
L_865b0c: /* 865b0c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 865b0e: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 865b11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 865b14: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 865b17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865b19: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865b1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865b1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b1e: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 865b21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865b23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865b25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865b2a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865b2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865b2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b2f: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 865b32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865b34: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x865b36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865b36: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 865b39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b3c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 865b3d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 865b40: jmp 0x865b07 */
  goto L_865b07;
L_865b42: /* 865b42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 865b45: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 865b48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 865b49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 865b4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865b51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865b52: mov esp, ebp */
  esp = ebp;
/* 865b54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 865b55: ret  */
  esp += 4; SPILL(); return;
}

void f_865b56(void) {
  LOAD_REGS();
L_865b56: /* 865b56: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 865b59: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 865b5e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 865b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865b62: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 865b65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865b6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_865b6a(); return;
}

void f_865b6a(void) {
  LOAD_REGS();
L_865b6a: /* 865b6a: push 0xa18090 */
  { uint32_t v = 0xa18090u; esp -= 4; W32(esp, v); }
/* 865b6f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 865b74: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x865b7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 865b7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865b7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865b81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865b86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_865b86: guest_badaddr(0x865b86); return;
}

void f_865bf0(void) {
  LOAD_REGS();
L_865bf0: /* 865bf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865bf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865bf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865bf3: mov esi, ecx */
  esi = ecx;
/* 865bf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865bf6: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 865bf9: mov dword ptr [esi], 0x9f8ac4 */
  W32((uint32_t)(esi), 0x9f8ac4u);
/* 865bff: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x865c05u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 865c05: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 865c09: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 865c0d: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 865c10: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 865c13: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 865c19: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 865c1c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 865c1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865c21: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 865c26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865c27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865c28: call 0x99c910 */
  esp -= 4; W32(esp, 0x865c2du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 865c2d: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 865c32: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 865c35: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 865c38: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 865c3b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 865c41: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 865c44: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 865c47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 865c48: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 865c4b: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 865c4e: mov eax, esi */
  eax = esi;
/* 865c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 865c51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 865c52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865c53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_865c80(void) {
  LOAD_REGS();
L_865c80: /* 865c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865c81: mov ebp, esp */
  ebp = esp;
/* 865c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 865c85: push 0x9d43d0 */
  { uint32_t v = 0x9d43d0u; esp -= 4; W32(esp, v); }
/* 865c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 865c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 865c98: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 865c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865c9d: mov esi, ecx */
  esi = ecx;
/* 865c9f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 865ca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865ca4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865ca5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 865ca8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 865caf: je 0x865ed2 */
  if (zf) goto L_865ed2;
L_865cb5: /* 865cb5: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 865cb8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 865cba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865cbd: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0x865cc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865cc0: mov edi, eax */
  edi = eax;
/* 865cc2: mov al, byte ptr [0xcd8a80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcd8a80u))) & 0xffu);
/* 865cc7: mov ebx, 1 */
  ebx = 0x1u;
/* 865ccc: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 865cce: jne 0x865cfa */
  if (!zf) goto L_865cfa;
L_865cd0: /* 865cd0: mov ecx, dword ptr [0xcd8a80] */
  ecx = R32((uint32_t)(0xcd8a80u));
/* 865cd6: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 865cd8: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 865cda: mov dword ptr [0xcd8a80], ecx */
  W32((uint32_t)(0xcd8a80u), ecx);
/* 865ce0: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 865ce3: mov byte ptr [ebp - 0x13], al */
  W8((uint32_t)(ebp + 0xffffffedu), (eax & 0xffu));
/* 865ce6: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 865ce9: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 865cec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 865cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865cf0: mov ecx, 0xcd8a68 */
  ecx = 0xcd8a68u;
/* 865cf5: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x865cfau); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
L_865cfa: /* 865cfa: mov eax, dword ptr [0xcd8a64] */
  eax = R32((uint32_t)(0xcd8a64u));
/* 865cff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865d01: jne 0x865d8b */
  if (!zf) goto L_865d8b;
L_865d07: /* 865d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865d09: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 865d0c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x865d12u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 865d12: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 865d17: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 865d1c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x865d22u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 865d22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865d24: jne 0x865d3e */
  if (!zf) goto L_865d3e;
L_865d26: /* 865d26: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 865d2b: push 0xae5368 */
  { uint32_t v = 0xae5368u; esp -= 4; W32(esp, v); }
/* 865d30: push 0xae53ac */
  { uint32_t v = 0xae53acu; esp -= 4; W32(esp, v); }
/* 865d35: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x865d3bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 865d3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_865d3e: /* 865d3e: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x865d44u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 865d44: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 865d4a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 865d4c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 865d4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865d52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865d54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865d56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865d57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865d58: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 865d5d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x865d63u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 865d63: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 865d69: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865d6c: push 0xcd8a64 */
  { uint32_t v = 0xcd8a64u; esp -= 4; W32(esp, v); }
/* 865d71: mov dword ptr [0xcd8a64], eax */
  W32((uint32_t)(0xcd8a64u), eax);
/* 865d76: call 0x6c1203 */
  esp -= 4; W32(esp, 0x865d7bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 865d7b: mov ecx, dword ptr [0xcd8a64] */
  ecx = R32((uint32_t)(0xcd8a64u));
/* 865d81: push 0xcd8a68 */
  { uint32_t v = 0xcd8a68u; esp -= 4; W32(esp, v); }
/* 865d86: call 0x6cccfc */
  esp -= 4; W32(esp, 0x865d8bu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_865d8b: /* 865d8b: mov eax, dword ptr [0xcd8a60] */
  eax = R32((uint32_t)(0xcd8a60u));
/* 865d90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865d92: jne 0x865e1e */
  if (!zf) goto L_865e1e;
L_865d98: /* 865d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865d99: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 865d9c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x865da2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 865da2: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 865da7: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 865dac: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x865db2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 865db2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 865db4: jne 0x865dce */
  if (!zf) goto L_865dce;
L_865db6: /* 865db6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 865dbb: push 0xae53d0 */
  { uint32_t v = 0xae53d0u; esp -= 4; W32(esp, v); }
/* 865dc0: push 0xae5414 */
  { uint32_t v = 0xae5414u; esp -= 4; W32(esp, v); }
/* 865dc5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x865dcbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 865dcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_865dce: /* 865dce: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x865dd4u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 865dd4: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 865dda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865ddc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 865ddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865de1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865de4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865de7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865de8: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 865ded: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x865df3u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 865df3: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 865df9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865dfc: push 0xcd8a60 */
  { uint32_t v = 0xcd8a60u; esp -= 4; W32(esp, v); }
/* 865e01: mov dword ptr [0xcd8a60], eax */
  W32((uint32_t)(0xcd8a60u), eax);
/* 865e06: call 0x6c1203 */
  esp -= 4; W32(esp, 0x865e0bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 865e0b: mov eax, dword ptr [0xcd8a60] */
  eax = R32((uint32_t)(0xcd8a60u));
/* 865e10: mov edx, dword ptr [0xcd8a64] */
  edx = R32((uint32_t)(0xcd8a64u));
/* 865e16: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 865e19: mov eax, dword ptr [0xcd8a60] */
  eax = R32((uint32_t)(0xcd8a60u));
L_865e1e: /* 865e1e: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 865e21: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 865e24: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 865e26: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 865e28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 865e2b: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 865e2e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 865e30: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* 865e33: mov ecx, esp */
  ecx = esp;
/* 865e35: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 865e38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e3a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 865e3d: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 865e44: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 865e47: mov edx, esp */
  edx = esp;
/* 865e49: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 865e4b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 865e52: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 865e55: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 865e58: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 865e5f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 865e62: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 865e65: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x865e6bu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 865e6b: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 865e6e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 865e70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865e77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e79: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x865e7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865e7c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 865e7f: mov edx, dword ptr [0xcd8a60] */
  edx = R32((uint32_t)(0xcd8a60u));
/* 865e85: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 865e87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865e8e: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x865e91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865e91: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 865e94: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 865e96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865e9a: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x865e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865e9d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 865ea0: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 865ea3: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 865ea5: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 865ea8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 865ea9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 865eaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865eac: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 865eae: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 865eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865eb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865eb2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 865eb4: call dword ptr [ebx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x5cu)); esp -= 4; W32(esp, 0x865eb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 865eb7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 865eba: xor eax, eax */
  eax = 0;
/* 865ebc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_865ec0: /* 865ec0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 865ec3: jge 0x865ec8 */
  if ((sf == of)) goto L_865ec8;
L_865ec5: /* 865ec5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 865ec6: jmp 0x865ec0 */
  goto L_865ec0;
L_865ec8: /* 865ec8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865eca: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 865ecc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x865ed2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_865ed2: /* 865ed2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 865ed5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 865ed6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 865ed7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 865ede: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 865edf: mov esp, ebp */
  esp = ebp;
/* 865ee1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 865ee2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_865ee5(void) {
  LOAD_REGS();
L_865ee5: /* 865ee5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 865ee8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 865eed: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 865ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 865ef1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 865ef4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865ef9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_865ef9(); return;
}

void f_865ef9(void) {
  LOAD_REGS();
L_865ef9: /* 865ef9: push 0xa180a8 */
  { uint32_t v = 0xa180a8u; esp -= 4; W32(esp, v); }
/* 865efe: push 0xae5280 */
  { uint32_t v = 0xae5280u; esp -= 4; W32(esp, v); }
/* 865f03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x865f09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 865f09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 865f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865f0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 865f10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x865f15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_865f15: guest_badaddr(0x865f15); return;
}

void f_865fd0(void) {
  LOAD_REGS();
L_865fd0: /* 865fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 865fd2: push 0x9d4450 */
  { uint32_t v = 0x9d4450u; esp -= 4; W32(esp, v); }
/* 865fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 865fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 865fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 865fe5: sub esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 865feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 865fec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 865fed: mov ebp, ecx */
  ebp = ecx;
/* 865fef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 865ff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 865ff1: mov dword ptr [esp + 0x98], ebp */
  W32((uint32_t)(esp + 0x98u), ebp);
/* 865ff8: mov dword ptr [ebp], 0x9f8af0 */
  W32((uint32_t)(ebp), 0x9f8af0u);
/* 865fff: lea ecx, [ebp + 0x94] */
  ecx = (uint32_t)(ebp + 0x94u);
/* 866005: mov dword ptr [esp + 0x124], 1 */
  W32((uint32_t)(esp + 0x124u), 0x1u);
/* 866010: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x866016u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 866016: mov eax, dword ptr [esp + 0x130] */
  eax = R32((uint32_t)(esp + 0x130u));
/* 86601d: mov esi, dword ptr [esp + 0x12c] */
  esi = R32((uint32_t)(esp + 0x12cu));
/* 866024: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 866027: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 866029: mov ecx, esi */
  ecx = esi;
/* 86602b: mov byte ptr [esp + 0x124], 2 */
  W8((uint32_t)(esp + 0x124u), 0x2u);
/* 866033: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x866036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 866036: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 86603a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 86603e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866040: mov ecx, esi */
  ecx = esi;
/* 866042: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 866046: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x866049u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 866049: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 86604f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 866053: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 866057: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 866059: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86605b: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* 866063: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 866067: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 86606f: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
/* 866075: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 86607d: fdiv dword ptr [esp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x14u)));
/* 866081: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 866089: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 866091: mov dword ptr [esp + 0x40], 0x3f800000 */
  W32((uint32_t)(esp + 0x40u), 0x3f800000u);
/* 866099: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8660a1: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8660a9: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8660b1: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8660b9: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8660c1: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8660c9: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8660d1: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8660d9: fld dword ptr [0xa0c9b4] */
  { double v = F32((uint32_t)(0xa0c9b4u)); FPUSH(v); }
/* 8660df: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 8660e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8660e5: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8660e9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8660ed: je 0x866213 */
  if (zf) goto L_866213;
L_8660f3: /* 8660f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8660f8: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* 8660fc: lea edi, [esp + 0x9c] */
  edi = (uint32_t)(esp + 0x9cu);
/* 866103: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 866105: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 86610d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 866111: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 866119: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 86611f: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 866127: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 86612b: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 866133: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 866139: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 866141: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 866143: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 86614b: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 866152: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 86615a: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 866162: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 866169: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 866171: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 866179: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 866184: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 86618f: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 86619a: mov dword ptr [esp + 0x94], 0x3f800000 */
  W32((uint32_t)(esp + 0x94u), 0x3f800000u);
/* 8661a5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8661a8: mov edi, esp */
  edi = esp;
/* 8661aa: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8661af: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* 8661b3: lea edx, [esp + 0x11c] */
  edx = (uint32_t)(esp + 0x11cu);
/* 8661ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8661bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8661bd: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 8661c4: mov byte ptr [esp + 0x168], 5 */
  W8((uint32_t)(esp + 0x168u), 0x5u);
/* 8661cc: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8661d2u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8661d2: lea ebx, [ebp + 0x54] */
  ebx = (uint32_t)(ebp + 0x54u);
/* 8661d5: mov esi, eax */
  esi = eax;
/* 8661d7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8661dc: mov edi, ebx */
  edi = ebx;
/* 8661de: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8661e0: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* 8661e7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8661edu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8661ed: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 8661f1: mov byte ptr [esp + 0x124], 4 */
  W8((uint32_t)(esp + 0x124u), 0x4u);
/* 8661f9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8661ffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8661ff: mov byte ptr [esp + 0x124], 3 */
  W8((uint32_t)(esp + 0x124u), 0x3u);
/* 866207: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 86620e: jmp 0x86633a */
  goto L_86633a;
L_866213: /* 866213: mov ecx, 0x10 */
  ecx = 0x10u;
/* 866218: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* 86621c: lea edi, [esp + 0xdc] */
  edi = (uint32_t)(esp + 0xdcu);
/* 866223: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 866225: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 86622d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 866231: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 866239: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 86623f: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 866247: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 86624f: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 866257: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
/* 86625d: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 866265: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 866269: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 866271: fmul dword ptr [0xa07ebc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07ebcu)));
/* 866277: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 86627f: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 866287: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 86628f: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
/* 866295: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 8662a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8662a2: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 8662ad: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 8662b4: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 8662bf: mov dword ptr [esp + 0x94], 0x3f800000 */
  W32((uint32_t)(esp + 0x94u), 0x3f800000u);
/* 8662ca: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 8662d1: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8662d4: mov edi, esp */
  edi = esp;
/* 8662d6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8662db: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* 8662df: lea eax, [esp + 0xdc] */
  eax = (uint32_t)(esp + 0xdcu);
/* 8662e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8662e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8662e9: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 8662f0: mov byte ptr [esp + 0x168], 8 */
  W8((uint32_t)(esp + 0x168u), 0x8u);
/* 8662f8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8662feu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8662fe: lea ebx, [ebp + 0x54] */
  ebx = (uint32_t)(ebp + 0x54u);
/* 866301: mov esi, eax */
  esi = eax;
/* 866303: mov ecx, 0x10 */
  ecx = 0x10u;
/* 866308: mov edi, ebx */
  edi = ebx;
/* 86630a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86630c: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 866313: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x866319u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 866319: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 86631d: mov byte ptr [esp + 0x124], 7 */
  W8((uint32_t)(esp + 0x124u), 0x7u);
/* 866325: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86632bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86632b: mov byte ptr [esp + 0x124], 6 */
  W8((uint32_t)(esp + 0x124u), 0x6u);
/* 866333: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
L_86633a: /* 86633a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x866340u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 866340: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 866344: mov byte ptr [esp + 0x124], 2 */
  W8((uint32_t)(esp + 0x124u), 0x2u);
/* 86634c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x866352u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 866352: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 866359: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86635a: mov ecx, ebx */
  ecx = ebx;
/* 86635c: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x866362u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 866362: mov esi, eax */
  esi = eax;
/* 866364: lea edi, [ebp + 0x14] */
  edi = (uint32_t)(ebp + 0x14u);
/* 866367: mov ecx, 0x10 */
  ecx = 0x10u;
/* 86636c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86636e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 866375: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86637bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86637b: mov ebx, dword ptr [0xcfa1b0] */
  ebx = R32((uint32_t)(0xcfa1b0u));
/* 866381: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 866384: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 866386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 866388: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 86638d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86638e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86638f: call 0x99c910 */
  esp -= 4; W32(esp, 0x866394u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 866394: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 866399: mov ecx, 0 */
  ecx = 0x0u;
/* 86639e: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8663a0: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 8663a3: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 8663a5: mov esi, dword ptr [0xcfa1b0] */
  esi = R32((uint32_t)(0xcfa1b0u));
/* 8663ab: adc edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 8663ad: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8663b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8663b1: mov dword ptr [ebp + 0xa0], eax */
  W32((uint32_t)(ebp + 0xa0u), eax);
/* 8663b7: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8663ba: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8663bd: mov ecx, dword ptr [esp + 0x118] */
  ecx = R32((uint32_t)(esp + 0x118u));
/* 8663c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8663c5: mov dword ptr [ebp + 0xa4], edx */
  W32((uint32_t)(ebp + 0xa4u), edx);
/* 8663cb: mov dword ptr [ebp + 4], 4 */
  W32((uint32_t)(ebp + 0x4u), 0x4u);
/* 8663d2: mov eax, ebp */
  eax = ebp;
/* 8663d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8663d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8663dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8663dd: add esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8663e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_866500(void) {
  LOAD_REGS();
L_866500: /* 866500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 866502: push 0x9d44a6 */
  { uint32_t v = 0x9d44a6u; esp -= 4; W32(esp, v); }
/* 866507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86650d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86650e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 866515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 866517: mov esi, ecx */
  esi = ecx;
/* 866519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 86651d: mov dword ptr [esi], 0x9f8af0 */
  W32((uint32_t)(esi), 0x9f8af0u);
/* 866523: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 86652b: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x866530u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 866530: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 866536: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 86653b: call 0x6c164a */
  esp -= 4; W32(esp, 0x866540u); SPILL(); f_6c164a(); if (g_unwind) return; RELOAD();
/* 866540: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 866543: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 866548: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86654eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86654e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 866551: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 866559: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x86655fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 86655f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 866563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 866564: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86656b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86656e: ret  */
  esp += 4; SPILL(); return;
}

void f_866590(void) {
  LOAD_REGS();
L_866590: /* 866590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 866591: mov ebp, esp */
  ebp = esp;
/* 866593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 866595: push 0x9d44c0 */
  { uint32_t v = 0x9d44c0u; esp -= 4; W32(esp, v); }
/* 86659a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8665a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8665a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8665a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8665ab: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 8665b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8665b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8665b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8665b3: mov ebx, ecx */
  ebx = ecx;
/* 8665b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8665b7: xor edi, edi */
  edi = 0;
/* 8665b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8665bb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8665be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8665c1: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8665c4: je 0x8665d9 */
  if (zf) goto L_8665d9;
L_8665c6: /* 8665c6: mov eax, ecx */
  eax = ecx;
/* 8665c8: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8665cb: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8665ce: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 8665d1: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 8665d4: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 8665d7: jmp 0x8665dc */
  goto L_8665dc;
L_8665d9: /* 8665d9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_8665dc: /* 8665dc: test byte ptr [0xcd8aa4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd8aa4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8665e3: jne 0x866610 */
  if (!zf) goto L_866610;
L_8665e5: /* 8665e5: mov ecx, dword ptr [0xcd8aa4] */
  ecx = R32((uint32_t)(0xcd8aa4u));
/* 8665eb: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8665ed: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8665f0: mov byte ptr [ebp + 0x18], al */
  W8((uint32_t)(ebp + 0x18u), (eax & 0xffu));
/* 8665f3: mov byte ptr [ebp + 0x19], al */
  W8((uint32_t)(ebp + 0x19u), (eax & 0xffu));
/* 8665f6: mov byte ptr [ebp + 0x1a], al */
  W8((uint32_t)(ebp + 0x1au), (eax & 0xffu));
/* 8665f9: mov byte ptr [ebp + 0x1b], al */
  W8((uint32_t)(ebp + 0x1bu), (eax & 0xffu));
/* 8665fc: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8665ff: mov dword ptr [0xcd8aa4], ecx */
  W32((uint32_t)(0xcd8aa4u), ecx);
/* 866605: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 866606: mov ecx, 0xcd8a8c */
  ecx = 0xcd8a8cu;
/* 86660b: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x866610u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
L_866610: /* 866610: cmp dword ptr [0xcd8a88], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8a88u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866616: jne 0x86669c */
  if (!zf) goto L_86669c;
L_86661c: /* 86661c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86661d: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 866620: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x866626u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 866626: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86662b: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 866630: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x866636u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 866636: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866638: jne 0x866652 */
  if (!zf) goto L_866652;
L_86663a: /* 86663a: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86663f: push 0xae5368 */
  { uint32_t v = 0xae5368u; esp -= 4; W32(esp, v); }
/* 866644: push 0xae53ac */
  { uint32_t v = 0xae53acu; esp -= 4; W32(esp, v); }
/* 866649: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86664fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86664f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_866652: /* 866652: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x866658u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 866658: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 86665e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 866660: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 866665: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866667: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 866669: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86666e: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x866674u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 866674: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 86667a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86667d: push 0xcd8a88 */
  { uint32_t v = 0xcd8a88u; esp -= 4; W32(esp, v); }
/* 866682: mov dword ptr [0xcd8a88], eax */
  W32((uint32_t)(0xcd8a88u), eax);
/* 866687: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86668cu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86668c: mov ecx, dword ptr [0xcd8a88] */
  ecx = R32((uint32_t)(0xcd8a88u));
/* 866692: push 0xcd8a8c */
  { uint32_t v = 0xcd8a8cu; esp -= 4; W32(esp, v); }
/* 866697: call 0x6cccfc */
  esp -= 4; W32(esp, 0x86669cu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_86669c: /* 86669c: cmp dword ptr [0xcd8a84], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8a84u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8666a2: jne 0x866722 */
  if (!zf) goto L_866722;
L_8666a4: /* 8666a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8666a5: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8666a8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8666aeu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8666ae: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8666b3: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 8666b8: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8666beu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8666be: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8666c0: jne 0x8666da */
  if (!zf) goto L_8666da;
L_8666c2: /* 8666c2: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8666c7: push 0xae53d0 */
  { uint32_t v = 0xae53d0u; esp -= 4; W32(esp, v); }
/* 8666cc: push 0xae5414 */
  { uint32_t v = 0xae5414u; esp -= 4; W32(esp, v); }
/* 8666d1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8666d7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8666d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8666da: /* 8666da: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8666e0u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8666e0: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8666e6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8666e8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8666eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8666ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8666ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8666ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8666ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8666f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8666f1: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8666f6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8666fcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8666fc: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 866702: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 866705: push 0xcd8a84 */
  { uint32_t v = 0xcd8a84u; esp -= 4; W32(esp, v); }
/* 86670a: mov dword ptr [0xcd8a84], eax */
  W32((uint32_t)(0xcd8a84u), eax);
/* 86670f: call 0x6c1203 */
  esp -= 4; W32(esp, 0x866714u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 866714: mov eax, dword ptr [0xcd8a88] */
  eax = R32((uint32_t)(0xcd8a88u));
/* 866719: mov ecx, dword ptr [0xcd8a84] */
  ecx = R32((uint32_t)(0xcd8a84u));
/* 86671f: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
L_866722: /* 866722: mov edx, dword ptr [0xcd8a84] */
  edx = R32((uint32_t)(0xcd8a84u));
/* 866728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 866729: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86672b: mov ecx, ebx */
  ecx = ebx;
/* 86672d: call 0x6c4d1d */
  esp -= 4; W32(esp, 0x866732u); SPILL(); f_6c4d1d(); if (g_unwind) return; RELOAD();
/* 866732: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866734: lea esi, [ebx + 0x94] */
  esi = (uint32_t)(ebx + 0x94u);
/* 86673a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86673c: mov ecx, esi */
  ecx = esi;
/* 86673e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866744u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866744: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 866746: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 866749: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 86674c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86674e: je 0x866782 */
  if (zf) goto L_866782;
L_866750: /* 866750: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 866753: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 866756: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866759: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86675c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86675f: mov edx, eax */
  edx = eax;
/* 866761: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866763: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866766: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866769: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 866770: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 866773: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866776: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 866779: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86677c: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 86677f: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866782: /* 866782: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866784: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866786: mov ecx, esi */
  ecx = esi;
/* 866788: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86678eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86678e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 866790: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 866793: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 866796: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866798: je 0x8667cc */
  if (zf) goto L_8667cc;
L_86679a: /* 86679a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86679d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8667a0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8667a3: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8667a6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8667a9: mov edx, eax */
  edx = eax;
/* 8667ab: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8667ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8667b0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8667b3: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8667ba: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8667bd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8667c0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8667c3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8667c6: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 8667c9: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_8667cc: /* 8667cc: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8667cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8667d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8667d3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8667d4: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8667d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8667d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8667df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8667e0: mov esp, ebp */
  esp = ebp;
/* 8667e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8667e3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8667e6(void) {
  LOAD_REGS();
L_8667e6: /* 8667e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8667e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8667ee: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8667f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8667f2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8667f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8667fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8667fa(); return;
}

void f_8667fa(void) {
  LOAD_REGS();
L_8667fa: /* 8667fa: push 0xa180d8 */
  { uint32_t v = 0xa180d8u; esp -= 4; W32(esp, v); }
/* 8667ff: push 0xae52d0 */
  { uint32_t v = 0xae52d0u; esp -= 4; W32(esp, v); }
/* 866804: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86680au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86680a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86680d: xor edi, edi */
  edi = 0;
/* 86680f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866811: call 0x99caf8 */
  esp -= 4; W32(esp, 0x866816u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_866816: guest_badaddr(0x866816); return;
}

void f_8668d0(void) {
  LOAD_REGS();
L_8668d0: /* 8668d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8668d1: mov ebp, esp */
  ebp = esp;
/* 8668d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8668d5: push 0x9d44d0 */
  { uint32_t v = 0x9d44d0u; esp -= 4; W32(esp, v); }
/* 8668da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8668e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8668e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8668e8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8668eb: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 8668f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8668f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8668f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8668f3: mov esi, ecx */
  esi = ecx;
/* 8668f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8668f7: xor edi, edi */
  edi = 0;
/* 8668f9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8668fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8668fe: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 866901: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 866904: je 0x866920 */
  if (zf) goto L_866920;
L_866906: /* 866906: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 866909: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86690c: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 86690f: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 866912: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 866915: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 866918: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 86691b: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86691e: jmp 0x866923 */
  goto L_866923;
L_866920: /* 866920: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
L_866923: /* 866923: test byte ptr [0xcd8ac8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd8ac8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86692a: jne 0x866957 */
  if (!zf) goto L_866957;
L_86692c: /* 86692c: mov ecx, dword ptr [0xcd8ac8] */
  ecx = R32((uint32_t)(0xcd8ac8u));
/* 866932: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 866934: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 866937: mov dword ptr [0xcd8ac8], ecx */
  W32((uint32_t)(0xcd8ac8u), ecx);
/* 86693d: mov byte ptr [ebp + 0x1c], al */
  W8((uint32_t)(ebp + 0x1cu), (eax & 0xffu));
/* 866940: mov byte ptr [ebp + 0x1d], al */
  W8((uint32_t)(ebp + 0x1du), (eax & 0xffu));
/* 866943: mov byte ptr [ebp + 0x1e], al */
  W8((uint32_t)(ebp + 0x1eu), (eax & 0xffu));
/* 866946: mov byte ptr [ebp + 0x1f], al */
  W8((uint32_t)(ebp + 0x1fu), (eax & 0xffu));
/* 866949: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86694c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86694d: mov ecx, 0xcd8ab0 */
  ecx = 0xcd8ab0u;
/* 866952: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x866957u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
L_866957: /* 866957: cmp dword ptr [0xcd8aac], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8aacu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86695d: jne 0x8669e3 */
  if (!zf) goto L_8669e3;
L_866963: /* 866963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866964: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 866967: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x86696du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 86696d: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 866972: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 866977: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x86697du); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 86697d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86697f: jne 0x866999 */
  if (!zf) goto L_866999;
L_866981: /* 866981: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 866986: push 0xae5368 */
  { uint32_t v = 0xae5368u; esp -= 4; W32(esp, v); }
/* 86698b: push 0xae53ac */
  { uint32_t v = 0xae53acu; esp -= 4; W32(esp, v); }
/* 866990: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x866996u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 866996: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_866999: /* 866999: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x86699fu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 86699f: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8669a5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8669a7: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8669aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8669ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8669ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8669ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8669ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8669af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8669b0: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 8669b5: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8669bbu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8669bb: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8669c1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8669c4: push 0xcd8aac */
  { uint32_t v = 0xcd8aacu; esp -= 4; W32(esp, v); }
/* 8669c9: mov dword ptr [0xcd8aac], eax */
  W32((uint32_t)(0xcd8aacu), eax);
/* 8669ce: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8669d3u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8669d3: mov ecx, dword ptr [0xcd8aac] */
  ecx = R32((uint32_t)(0xcd8aacu));
/* 8669d9: push 0xcd8ab0 */
  { uint32_t v = 0xcd8ab0u; esp -= 4; W32(esp, v); }
/* 8669de: call 0x6cccfc */
  esp -= 4; W32(esp, 0x8669e3u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_8669e3: /* 8669e3: cmp dword ptr [0xcd8aa8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8aa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8669e9: jne 0x866a69 */
  if (!zf) goto L_866a69;
L_8669eb: /* 8669eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8669ec: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8669ef: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8669f5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8669f5: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8669fa: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 8669ff: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x866a05u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 866a05: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866a07: jne 0x866a21 */
  if (!zf) goto L_866a21;
L_866a09: /* 866a09: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 866a0e: push 0xae53d0 */
  { uint32_t v = 0xae53d0u; esp -= 4; W32(esp, v); }
/* 866a13: push 0xae5414 */
  { uint32_t v = 0xae5414u; esp -= 4; W32(esp, v); }
/* 866a18: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x866a1eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 866a1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_866a21: /* 866a21: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x866a27u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 866a27: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 866a2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 866a2f: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 866a32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866a33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 866a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866a35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866a37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 866a38: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 866a3d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x866a43u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 866a43: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 866a49: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 866a4c: push 0xcd8aa8 */
  { uint32_t v = 0xcd8aa8u; esp -= 4; W32(esp, v); }
/* 866a51: mov dword ptr [0xcd8aa8], eax */
  W32((uint32_t)(0xcd8aa8u), eax);
/* 866a56: call 0x6c1203 */
  esp -= 4; W32(esp, 0x866a5bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 866a5b: mov edx, dword ptr [0xcd8aac] */
  edx = R32((uint32_t)(0xcd8aacu));
/* 866a61: mov eax, dword ptr [0xcd8aa8] */
  eax = R32((uint32_t)(0xcd8aa8u));
/* 866a66: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
L_866a69: /* 866a69: mov ecx, dword ptr [0xcd8aa8] */
  ecx = R32((uint32_t)(0xcd8aa8u));
/* 866a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866a70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 866a72: mov ecx, esi */
  ecx = esi;
/* 866a74: call 0x6c4d1d */
  esp -= 4; W32(esp, 0x866a79u); SPILL(); f_6c4d1d(); if (g_unwind) return; RELOAD();
/* 866a79: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866a7b: add esi, 0x94 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 866a81: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866a83: mov ecx, esi */
  ecx = esi;
/* 866a85: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866a8bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866a8b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866a8e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866a90: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866a93: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866a95: je 0x866ac5 */
  if (zf) goto L_866ac5;
L_866a97: /* 866a97: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 866a9a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866a9d: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866aa0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866aa3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866aa6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866aa9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866aac: mov edx, eax */
  edx = eax;
/* 866aae: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866ab0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866ab3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866ab6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866ab9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866abc: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866abf: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866ac2: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866ac5: /* 866ac5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866ac7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866ac9: mov ecx, esi */
  ecx = esi;
/* 866acb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866ad1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866ad1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866ad4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866ad6: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866ad9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866adb: je 0x866b0b */
  if (zf) goto L_866b0b;
L_866add: /* 866add: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 866ae0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866ae3: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866ae6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866ae9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866aec: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866aef: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866af2: mov edx, eax */
  edx = eax;
/* 866af4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866af6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866af9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866afc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866aff: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866b02: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866b05: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866b08: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866b0b: /* 866b0b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866b0d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866b0f: mov ecx, esi */
  ecx = esi;
/* 866b11: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866b17u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866b17: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866b1a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866b1c: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866b1f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866b21: je 0x866b51 */
  if (zf) goto L_866b51;
L_866b23: /* 866b23: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 866b26: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866b29: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866b2c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866b2f: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866b32: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866b35: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866b38: mov edx, eax */
  edx = eax;
/* 866b3a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866b3c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866b3f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866b42: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866b45: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866b48: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866b4b: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866b4e: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866b51: /* 866b51: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866b53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866b55: mov ecx, esi */
  ecx = esi;
/* 866b57: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866b5du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866b5d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866b60: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866b62: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866b65: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866b67: je 0x866b97 */
  if (zf) goto L_866b97;
L_866b69: /* 866b69: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 866b6c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 866b6f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866b72: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866b75: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866b78: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866b7b: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866b7e: mov edx, eax */
  edx = eax;
/* 866b80: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866b82: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866b85: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866b88: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866b8b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866b8e: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866b91: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866b94: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866b97: /* 866b97: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866b99: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866b9b: mov ecx, esi */
  ecx = esi;
/* 866b9d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866ba3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866ba3: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866ba6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866ba8: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866bab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866bad: je 0x866bdd */
  if (zf) goto L_866bdd;
L_866baf: /* 866baf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 866bb2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 866bb5: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866bb8: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866bbb: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866bbe: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866bc1: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866bc4: mov edx, eax */
  edx = eax;
/* 866bc6: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866bc8: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866bcb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866bce: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866bd1: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866bd4: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866bd7: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866bda: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866bdd: /* 866bdd: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866bdf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866be1: mov ecx, esi */
  ecx = esi;
/* 866be3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866be9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866be9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866bec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866bee: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866bf1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866bf3: je 0x866c23 */
  if (zf) goto L_866c23;
L_866bf5: /* 866bf5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 866bf8: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 866bfb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866bfe: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866c01: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866c04: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866c07: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866c0a: mov edx, eax */
  edx = eax;
/* 866c0c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866c0e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866c11: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866c14: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866c17: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866c1a: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866c1d: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866c20: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866c23: /* 866c23: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866c25: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866c27: mov ecx, esi */
  ecx = esi;
/* 866c29: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866c2fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866c2f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866c32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866c34: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866c37: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866c39: je 0x866c69 */
  if (zf) goto L_866c69;
L_866c3b: /* 866c3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 866c3e: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 866c41: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866c44: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866c47: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866c4a: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866c4d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866c50: mov edx, eax */
  edx = eax;
/* 866c52: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866c54: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866c57: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866c5a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866c5d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866c60: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866c63: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866c66: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866c69: /* 866c69: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 866c6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 866c6d: mov ecx, esi */
  ecx = esi;
/* 866c6f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x866c75u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 866c75: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 866c78: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 866c7a: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 866c7d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866c7f: je 0x866caf */
  if (zf) goto L_866caf;
L_866c81: /* 866c81: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 866c84: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866c87: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 866c8a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866c8d: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 866c90: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 866c93: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866c96: mov edx, eax */
  edx = eax;
/* 866c98: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 866c9a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 866c9d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 866ca0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 866ca3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 866ca6: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 866ca9: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 866cac: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_866caf: /* 866caf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 866cb2: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 866cb5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 866cb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 866cb9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 866cbc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 866cbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 866cc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 866cc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 866cc8: mov esp, ebp */
  esp = ebp;
/* 866cca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 866ccb: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_866cce(void) {
  LOAD_REGS();
L_866cce: /* 866cce: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 866cd1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 866cd6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 866cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 866cda: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 866cdd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x866ce2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_866ce2(); return;
}

void f_866ce2(void) {
  LOAD_REGS();
L_866ce2: /* 866ce2: push 0xa1810c */
  { uint32_t v = 0xa1810cu; esp -= 4; W32(esp, v); }
/* 866ce7: push 0xae52d8 */
  { uint32_t v = 0xae52d8u; esp -= 4; W32(esp, v); }
/* 866cec: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x866cf2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 866cf2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 866cf5: xor edi, edi */
  edi = 0;
/* 866cf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866cf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866cf9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x866cfeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_866cfe: guest_badaddr(0x866cfe); return;
}

void f_866e10(void) {
  LOAD_REGS();
L_866e10: /* 866e10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 866e11: mov ebp, esp */
  ebp = esp;
/* 866e13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 866e15: push 0x9d44e0 */
  { uint32_t v = 0x9d44e0u; esp -= 4; W32(esp, v); }
/* 866e1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 866e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 866e21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 866e28: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 866e2b: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 866e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 866e31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 866e32: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 866e35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 866e37: xor esi, esi */
  esi = 0;
/* 866e39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 866e3a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866e3c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866e3f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 866e42: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 866e45: je 0x866e5a */
  if (zf) goto L_866e5a;
L_866e47: /* 866e47: mov eax, ecx */
  eax = ecx;
/* 866e49: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 866e4c: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 866e4f: mov byte ptr [ebp - 0x13], ch */
  W8((uint32_t)(ebp + 0xffffffedu), ((ecx >> 8) & 0xffu));
/* 866e52: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 866e55: mov byte ptr [ebp - 0x11], ah */
  W8((uint32_t)(ebp + 0xffffffefu), ((eax >> 8) & 0xffu));
/* 866e58: jmp 0x866e5d */
  goto L_866e5d;
L_866e5a: /* 866e5a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_866e5d: /* 866e5d: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 866e60: xor ebx, ebx */
  ebx = 0;
/* 866e62: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 866e65: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 866e68: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 866e6b: mov dword ptr [ebp + 0x18], esi */
  W32((uint32_t)(ebp + 0x18u), esi);
/* 866e6e: mov edi, edi */
  edi = edi;
L_866e70: /* 866e70: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 866e73: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 866e76: xor ecx, ecx */
  ecx = 0;
/* 866e78: mov cx, word ptr [edx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 866e7c: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866e7f: je 0x867088 */
  if (zf) goto L_867088;
L_866e85: /* 866e85: cmp dword ptr [edi + 0x54], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x54u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866e88: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 866e8b: je 0x866ec7 */
  if (zf) goto L_866ec7;
L_866e8d: /* 866e8d: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 866e90: movzx esi, cx */
  esi = (uint32_t)((ecx & 0xffffu));
/* 866e93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 866e94: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 866e96: mov esi, dword ptr [edi + 0x4c] */
  esi = R32((uint32_t)(edi + 0x4cu));
/* 866e99: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 866e9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_866ea0: /* 866ea0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866ea3: je 0x866ec2 */
  if (zf) goto L_866ec2;
L_866ea5: /* 866ea5: mov esi, dword ptr [edi + 0x40] */
  esi = R32((uint32_t)(edi + 0x40u));
/* 866ea8: cmp word ptr [esi + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866ead: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* 866eb0: jne 0x866ebe */
  if (!zf) goto L_866ebe;
L_866eb2: /* 866eb2: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866eb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866eb7: je 0x866ec2 */
  if (zf) goto L_866ec2;
L_866eb9: /* 866eb9: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866ebc: jmp 0x866ec7 */
  goto L_866ec7;
L_866ebe: /* 866ebe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 866ec0: jmp 0x866ea0 */
  goto L_866ea0;
L_866ec2: /* 866ec2: mov ecx, 0x20 */
  ecx = 0x20u;
L_866ec7: /* 866ec7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866ec9: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 866ecc: je 0x866f1a */
  if (zf) goto L_866f1a;
L_866ece: /* 866ece: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 866ed1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866ed3: mov ecx, 0x5f */
  ecx = 0x5fu;
/* 866ed8: jne 0x866ede */
  if (!zf) goto L_866ede;
L_866eda: /* 866eda: mov eax, ecx */
  eax = ecx;
/* 866edc: jmp 0x866f17 */
  goto L_866f17;
L_866ede: /* 866ede: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 866ee1: mov esi, dword ptr [edi + 0x4c] */
  esi = R32((uint32_t)(edi + 0x4cu));
/* 866ee4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 866ee5: and eax, 0x5f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 866ee8: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 866eeb: jmp 0x866ef0 */
  goto L_866ef0;
L_866ef0: /* 866ef0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866ef3: je 0x866f12 */
  if (zf) goto L_866f12;
L_866ef5: /* 866ef5: mov esi, dword ptr [edi + 0x40] */
  esi = R32((uint32_t)(edi + 0x40u));
/* 866ef8: cmp word ptr [esi + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866efd: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* 866f00: jne 0x866f0e */
  if (!zf) goto L_866f0e;
L_866f02: /* 866f02: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866f05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f07: je 0x866f12 */
  if (zf) goto L_866f12;
L_866f09: /* 866f09: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866f0c: jmp 0x866f17 */
  goto L_866f17;
L_866f0e: /* 866f0e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 866f10: jmp 0x866ef0 */
  goto L_866ef0;
L_866f12: /* 866f12: mov eax, 0x20 */
  eax = 0x20u;
L_866f17: /* 866f17: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_866f1a: /* 866f1a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866f1d: cmp word ptr [edx + ecx*2], 0x26 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + ecx*2))); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866f22: jne 0x866f68 */
  if (!zf) goto L_866f68;
L_866f24: /* 866f24: movzx ecx, word ptr [edx + ecx*2 + 2] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*2 + 0x2u)));
/* 866f29: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 866f2c: je 0x867088 */
  if (zf) goto L_867088;
L_866f32: /* 866f32: cmp cx, 0x26 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866f36: je 0x866f68 */
  if (zf) goto L_866f68;
L_866f38: /* 866f38: mov eax, ecx */
  eax = ecx;
/* 866f3a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 866f3d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f3f: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 866f46: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 866f49: je 0x866f65 */
  if (zf) goto L_866f65;
L_866f4b: /* 866f4b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 866f4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866f4f: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 866f52: call 0x6cae89 */
  esp -= 4; W32(esp, 0x866f57u); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 866f57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f59: je 0x866f60 */
  if (zf) goto L_866f60;
L_866f5b: /* 866f5b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866f5e: jmp 0x866f65 */
  goto L_866f65;
L_866f60: /* 866f60: mov eax, 0x20 */
  eax = 0x20u;
L_866f65: /* 866f65: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_866f68: /* 866f68: cmp eax, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866f6b: jge 0x86704e */
  if ((sf == of)) goto L_86704e;
L_866f71: /* 866f71: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 866f74: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 866f77: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 866f7a: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 866f7d: movzx eax, byte ptr [esi + 0x10] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x10u)));
/* 866f81: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866f83: jge 0x86704e */
  if ((sf == of)) goto L_86704e;
L_866f89: /* 866f89: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 866f8c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 866f8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f91: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 866f94: je 0x86704e */
  if (zf) goto L_86704e;
L_866f9a: /* 866f9a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f9c: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 866f9f: je 0x866faa */
  if (zf) goto L_866faa;
L_866fa1: /* 866fa1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 866fa4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866fa6: jg 0x866faa */
  if ((!zf && sf == of)) goto L_866faa;
L_866fa8: /* 866fa8: mov edi, eax */
  edi = eax;
L_866faa: /* 866faa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 866fad: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 866fb0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 866fb3: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 866fb6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 866fb9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 866fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 866fbc: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866fbf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 866fc2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 866fc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 866fc6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 866fc9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 866fcb: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 866fce: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 866fd1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 866fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 866fd6: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 866fd9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 866fdb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 866fdf: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 866fe2: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 866fe5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866fe8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866fea: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 866fed: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 866ff1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 866ff3: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 866ff6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 866ffa: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 866ffd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 867000: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 867004: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 867007: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 86700a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86700d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 867011: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 867014: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 867018: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86701b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86701f: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 867022: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 867025: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86702au); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86702a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86702d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86702f: je 0x867034 */
  if (zf) goto L_867034;
L_867031: /* 867031: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_867034: /* 867034: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 867037: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867039: jne 0x867040 */
  if (!zf) goto L_867040;
L_86703b: /* 86703b: add dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 86703e: jmp 0x867046 */
  goto L_867046;
L_867040: /* 867040: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 867043: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_867046: /* 867046: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 867049: mov ebx, eax */
  ebx = eax;
/* 86704b: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_86704e: /* 86704e: inc dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x18u), r);
  }
/* 867051: xor esi, esi */
  esi = 0;
/* 867053: jmp 0x866e70 */
  goto L_866e70;
L_867088: /* 867088: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86708b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86708e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86708f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 867097: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867098: mov esp, ebp */
  esp = ebp;
/* 86709a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86709b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_866eed(void) {
  LOAD_REGS();
  goto L_866eed;
L_866e70: /* 866e70: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 866e73: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 866e76: xor ecx, ecx */
  ecx = 0;
/* 866e78: mov cx, word ptr [edx + eax*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 866e7c: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866e7f: je 0x867088 */
  if (zf) goto L_867088;
L_866e85: /* 866e85: cmp dword ptr [edi + 0x54], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x54u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866e88: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 866e8b: je 0x866ec7 */
  if (zf) goto L_866ec7;
L_866e8d: /* 866e8d: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 866e90: movzx esi, cx */
  esi = (uint32_t)((ecx & 0xffffu));
/* 866e93: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 866e94: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 866e96: mov esi, dword ptr [edi + 0x4c] */
  esi = R32((uint32_t)(edi + 0x4cu));
/* 866e99: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 866e9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_866ea0: /* 866ea0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866ea3: je 0x866ec2 */
  if (zf) goto L_866ec2;
L_866ea5: /* 866ea5: mov esi, dword ptr [edi + 0x40] */
  esi = R32((uint32_t)(edi + 0x40u));
/* 866ea8: cmp word ptr [esi + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866ead: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* 866eb0: jne 0x866ebe */
  if (!zf) goto L_866ebe;
L_866eb2: /* 866eb2: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866eb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866eb7: je 0x866ec2 */
  if (zf) goto L_866ec2;
L_866eb9: /* 866eb9: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866ebc: jmp 0x866ec7 */
  goto L_866ec7;
L_866ebe: /* 866ebe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 866ec0: jmp 0x866ea0 */
  goto L_866ea0;
L_866ec2: /* 866ec2: mov ecx, 0x20 */
  ecx = 0x20u;
L_866ec7: /* 866ec7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866ec9: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 866ecc: je 0x866f1a */
  if (zf) goto L_866f1a;
L_866ece: /* 866ece: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 866ed1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866ed3: mov ecx, 0x5f */
  ecx = 0x5fu;
/* 866ed8: jne 0x866ede */
  if (!zf) goto L_866ede;
L_866eda: /* 866eda: mov eax, ecx */
  eax = ecx;
/* 866edc: jmp 0x866f17 */
  goto L_866f17;
L_866ede: /* 866ede: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 866ee1: mov esi, dword ptr [edi + 0x4c] */
  esi = R32((uint32_t)(edi + 0x4cu));
/* 866ee4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 866ee5: and eax, 0x5f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 866ee8: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 866eeb: jmp 0x866ef0 */
  goto L_866ef0;
L_866eed: /* 866eed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_866ef0: /* 866ef0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 866ef3: je 0x866f12 */
  if (zf) goto L_866f12;
L_866ef5: /* 866ef5: mov esi, dword ptr [edi + 0x40] */
  esi = R32((uint32_t)(edi + 0x40u));
/* 866ef8: cmp word ptr [esi + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866efd: lea eax, [esi + eax*8] */
  eax = (uint32_t)(esi + eax*8);
/* 866f00: jne 0x866f0e */
  if (!zf) goto L_866f0e;
L_866f02: /* 866f02: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866f05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f07: je 0x866f12 */
  if (zf) goto L_866f12;
L_866f09: /* 866f09: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866f0c: jmp 0x866f17 */
  goto L_866f17;
L_866f0e: /* 866f0e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 866f10: jmp 0x866ef0 */
  goto L_866ef0;
L_866f12: /* 866f12: mov eax, 0x20 */
  eax = 0x20u;
L_866f17: /* 866f17: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_866f1a: /* 866f1a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 866f1d: cmp word ptr [edx + ecx*2], 0x26 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + ecx*2))); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866f22: jne 0x866f68 */
  if (!zf) goto L_866f68;
L_866f24: /* 866f24: movzx ecx, word ptr [edx + ecx*2 + 2] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*2 + 0x2u)));
/* 866f29: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 866f2c: je 0x867088 */
  if (zf) goto L_867088;
L_866f32: /* 866f32: cmp cx, 0x26 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 866f36: je 0x866f68 */
  if (zf) goto L_866f68;
L_866f38: /* 866f38: mov eax, ecx */
  eax = ecx;
/* 866f3a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 866f3d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f3f: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 866f46: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 866f49: je 0x866f65 */
  if (zf) goto L_866f65;
L_866f4b: /* 866f4b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 866f4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 866f4f: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 866f52: call 0x6cae89 */
  esp -= 4; W32(esp, 0x866f57u); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 866f57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f59: je 0x866f60 */
  if (zf) goto L_866f60;
L_866f5b: /* 866f5b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 866f5e: jmp 0x866f65 */
  goto L_866f65;
L_866f60: /* 866f60: mov eax, 0x20 */
  eax = 0x20u;
L_866f65: /* 866f65: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_866f68: /* 866f68: cmp eax, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866f6b: jge 0x86704e */
  if ((sf == of)) goto L_86704e;
L_866f71: /* 866f71: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 866f74: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 866f77: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 866f7a: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 866f7d: movzx eax, byte ptr [esi + 0x10] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x10u)));
/* 866f81: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866f83: jge 0x86704e */
  if ((sf == of)) goto L_86704e;
L_866f89: /* 866f89: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 866f8c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 866f8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f91: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 866f94: je 0x86704e */
  if (zf) goto L_86704e;
L_866f9a: /* 866f9a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 866f9c: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 866f9f: je 0x866faa */
  if (zf) goto L_866faa;
L_866fa1: /* 866fa1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 866fa4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 866fa6: jg 0x866faa */
  if ((!zf && sf == of)) goto L_866faa;
L_866fa8: /* 866fa8: mov edi, eax */
  edi = eax;
L_866faa: /* 866faa: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 866fad: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 866fb0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 866fb3: lea ecx, [eax + edx] */
  ecx = (uint32_t)(eax + edx);
/* 866fb6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 866fb9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 866fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 866fbc: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 866fbf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 866fc2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 866fc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 866fc6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 866fc9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 866fcb: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 866fce: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 866fd1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 866fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 866fd6: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 866fd9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 866fdb: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 866fdf: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 866fe2: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 866fe5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 866fe8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 866fea: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 866fed: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 866ff1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 866ff3: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 866ff6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 866ffa: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 866ffd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 867000: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 867004: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 867007: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 86700a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86700d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 867011: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 867014: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 867018: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 86701b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 86701f: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 867022: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 867025: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x86702au); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 86702a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86702d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86702f: je 0x867034 */
  if (zf) goto L_867034;
L_867031: /* 867031: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_867034: /* 867034: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 867037: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867039: jne 0x867040 */
  if (!zf) goto L_867040;
L_86703b: /* 86703b: add dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 86703e: jmp 0x867046 */
  goto L_867046;
L_867040: /* 867040: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 867043: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_867046: /* 867046: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 867049: mov ebx, eax */
  ebx = eax;
/* 86704b: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_86704e: /* 86704e: inc dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x18u), r);
  }
/* 867051: xor esi, esi */
  esi = 0;
/* 867053: jmp 0x866e70 */
  goto L_866e70;
L_867088: /* 867088: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86708b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86708e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86708f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 867097: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867098: mov esp, ebp */
  esp = ebp;
/* 86709a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86709b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_867058(void) {
  LOAD_REGS();
L_867058: /* 867058: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86705b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 867060: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 867063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867064: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 867067: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86706cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86706c(); return;
}

void f_86706c(void) {
  LOAD_REGS();
L_86706c: /* 86706c: push 0xa18144 */
  { uint32_t v = 0xa18144u; esp -= 4; W32(esp, v); }
/* 867071: push 0xae52e8 */
  { uint32_t v = 0xae52e8u; esp -= 4; W32(esp, v); }
/* 867076: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86707cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86707c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86707f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867083: call 0x99caf8 */
  esp -= 4; W32(esp, 0x867088u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 867088: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86708b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86708e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86708f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 867097: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867098: mov esp, ebp */
  esp = ebp;
/* 86709a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86709b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_867150(void) {
  LOAD_REGS();
L_867150: /* 867150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867151: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 867152: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867153: mov esi, ecx */
  esi = ecx;
/* 867155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867156: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 867159: mov dword ptr [esi], 0x9f8b1c */
  W32((uint32_t)(esi), 0x9f8b1cu);
/* 86715f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x867165u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 867165: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 86716b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 86716e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 867171: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867173: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 867178: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86717a: call 0x99c910 */
  esp -= 4; W32(esp, 0x86717fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 86717f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 867184: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 867187: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 86718a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 86718d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 867193: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 867196: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 867199: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86719a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 86719d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8671a0: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 8671a7: mov eax, esi */
  eax = esi;
/* 8671a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8671aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8671ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8671ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8671d0(void) {
  LOAD_REGS();
L_8671d0: /* 8671d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8671d4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8671d8: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 8671db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8671dc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8671df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8671e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8671e1: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8671e6u); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8671e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8671e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8671ea: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8671f0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8671f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8671f3: ret  */
  esp += 4; SPILL(); return;
}

void f_867210(void) {
  LOAD_REGS();
L_867210: /* 867210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 867212: push 0x9d44fb */
  { uint32_t v = 0x9d44fbu; esp -= 4; W32(esp, v); }
/* 867217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86721d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86721e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 867225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867227: mov esi, ecx */
  esi = ecx;
/* 867229: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 86722d: mov dword ptr [esi], 0x9f8ac4 */
  W32((uint32_t)(esi), 0x9f8ac4u);
/* 867233: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867235: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 86723d: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x867242u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 867242: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 867245: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 86724d: call 0x6cc982 */
  esp -= 4; W32(esp, 0x867252u); SPILL(); f_6cc982(); if (g_unwind) return; RELOAD();
/* 867252: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867257: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86725e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867261: ret  */
  esp += 4; SPILL(); return;
}

void f_867290(void) {
  LOAD_REGS();
L_867290: /* 867290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 867292: push 0x9d4520 */
  { uint32_t v = 0x9d4520u; esp -= 4; W32(esp, v); }
/* 867297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86729d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86729e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8672a5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8672a8: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8672ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8672ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8672ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8672af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8672b0: mov ebx, ecx */
  ebx = ecx;
/* 8672b2: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 8672b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8672b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8672b8: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8672bc: call 0x6c460b */
  esp -= 4; W32(esp, 0x8672c1u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8672c1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8672c4: xor ebp, ebp */
  ebp = 0;
/* 8672c6: xor esi, esi */
  esi = 0;
/* 8672c8: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8672ca: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 8672ce: jle 0x867320 */
  if ((zf || sf != of)) goto L_867320;
L_8672d0: /* 8672d0: xor edi, edi */
  edi = 0;
L_8672d2: /* 8672d2: mov edx, dword ptr [ebx + 0x18] */
  edx = R32((uint32_t)(ebx + 0x18u));
/* 8672d5: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8672d8: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8672db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8672dc: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8672de: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8672e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8672e3: mov edx, esp */
  edx = esp;
/* 8672e5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8672e7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8672ea: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8672ed: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8672f0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8672f3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8672f5: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8672f7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8672f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8672fc: mov eax, esp */
  eax = esp;
/* 8672fe: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 867300: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 867303: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 867306: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 867309: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 86730d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 867310: call 0x6cc74d */
  esp -= 4; W32(esp, 0x867315u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 867315: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 867318: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 867319: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86731c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86731e: jl 0x8672d2 */
  if ((sf != of)) goto L_8672d2;
L_867320: /* 867320: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 867323: xor esi, esi */
  esi = 0;
/* 867325: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 867327: jle 0x86737f */
  if ((zf || sf != of)) goto L_86737f;
L_867329: /* 867329: xor edi, edi */
  edi = 0;
/* 86732b: jmp 0x867330 */
  goto L_867330;
L_867330: /* 867330: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 867333: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 867336: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 867339: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86733a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86733c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86733e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867341: mov eax, esp */
  eax = esp;
/* 867343: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 867345: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 867348: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 86734b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86734e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 867351: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 867354: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 867356: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 867358: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86735b: mov ecx, esp */
  ecx = esp;
/* 86735d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86735f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 867362: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 867365: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 867368: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 86736b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 86736f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x867374u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 867374: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 867377: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 867378: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86737b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86737d: jl 0x867330 */
  if ((sf != of)) goto L_867330;
L_86737f: /* 86737f: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* 867382: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 867384: jle 0x8673c8 */
  if ((zf || sf != of)) goto L_8673c8;
L_867386: /* 867386: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 86738a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_867390: /* 867390: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 867393: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 867396: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 867399: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 86739d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86739e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8673a1: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8673a3: mov edi, esp */
  edi = esp;
/* 8673a5: mov ecx, 7 */
  ecx = 0x7u;
/* 8673aa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8673ac: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8673b0: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x8673b5u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 8673b5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8673b9: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* 8673bc: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8673bd: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8673c0: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8673c2: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 8673c6: jl 0x867390 */
  if ((sf != of)) goto L_867390;
L_8673c8: /* 8673c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673ca: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8673ce: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x8673d3u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 8673d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8673d7: mov ecx, ebx */
  ecx = ebx;
/* 8673d9: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673dfu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673e1: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8673e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8673e6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673ecu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673ee: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 8673f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8673f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673fb: lea ecx, [ebx + 0x48] */
  ecx = (uint32_t)(ebx + 0x48u);
/* 8673fe: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 867400: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x867406u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 867406: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867408: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 86740b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86740d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x867413u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 867413: mov dword ptr [esp + 0x10], 0x9f8ac4 */
  W32((uint32_t)(esp + 0x10u), 0x9f8ac4u);
/* 86741b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86741d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 867421: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 867429: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x86742eu); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 86742e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 867432: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 86743a: call 0x6cc982 */
  esp -= 4; W32(esp, 0x86743fu); SPILL(); f_6cc982(); if (g_unwind) return; RELOAD();
/* 86743f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 867443: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867444: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867445: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 867446: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86744d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86744e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867451: ret 8 */
  esp += 12; SPILL(); return;
}

void f_86732d(void) {
  LOAD_REGS();
L_86732d: /* 86732d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_867330: /* 867330: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 867333: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 867336: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 867339: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86733a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86733c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86733e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867341: mov eax, esp */
  eax = esp;
/* 867343: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 867345: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 867348: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 86734b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86734e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 867351: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 867354: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 867356: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 867358: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86735b: mov ecx, esp */
  ecx = esp;
/* 86735d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86735f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 867362: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 867365: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 867368: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 86736b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 86736f: call 0x6cc74d */
  esp -= 4; W32(esp, 0x867374u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 867374: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 867377: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 867378: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86737b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86737d: jl 0x867330 */
  if ((sf != of)) goto L_867330;
L_86737f: /* 86737f: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* 867382: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 867384: jle 0x8673c8 */
  if ((zf || sf != of)) goto L_8673c8;
L_867386: /* 867386: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 86738a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_867390: /* 867390: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 867393: mov edx, dword ptr [ecx + ebp*4] */
  edx = R32((uint32_t)(ecx + ebp*4));
/* 867396: mov esi, dword ptr [ebx + 0x48] */
  esi = R32((uint32_t)(ebx + 0x48u));
/* 867399: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 86739d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86739e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8673a1: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8673a3: mov edi, esp */
  edi = esp;
/* 8673a5: mov ecx, 7 */
  ecx = 0x7u;
/* 8673aa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8673ac: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8673b0: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x8673b5u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 8673b5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8673b9: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* 8673bc: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8673bd: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8673c0: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8673c2: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 8673c6: jl 0x867390 */
  if ((sf != of)) goto L_867390;
L_8673c8: /* 8673c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673ca: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8673ce: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x8673d3u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 8673d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673d5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8673d7: mov ecx, ebx */
  ecx = ebx;
/* 8673d9: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673dfu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673e1: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8673e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8673e6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673ecu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673ee: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 8673f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8673f3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8673f9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8673f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8673fb: lea ecx, [ebx + 0x48] */
  ecx = (uint32_t)(ebx + 0x48u);
/* 8673fe: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 867400: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x867406u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 867406: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867408: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 86740b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86740d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x867413u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 867413: mov dword ptr [esp + 0x10], 0x9f8ac4 */
  W32((uint32_t)(esp + 0x10u), 0x9f8ac4u);
/* 86741b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86741d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 867421: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 867429: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x86742eu); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 86742e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 867432: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 86743a: call 0x6cc982 */
  esp -= 4; W32(esp, 0x86743fu); SPILL(); f_6cc982(); if (g_unwind) return; RELOAD();
/* 86743f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 867443: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867444: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867445: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 867446: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86744d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86744e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867451: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8674e0(void) {
  LOAD_REGS();
L_8674e0: /* 8674e0: mov eax, ecx */
  eax = ecx;
/* 8674e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8674e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8674e8: xor ecx, ecx */
  ecx = 0;
/* 8674ea: mov dword ptr [eax + 4], 0xffffffff */
  W32((uint32_t)(eax + 0x4u), 0xffffffffu);
/* 8674f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8674f4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8674f7: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8674fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_867510(void) {
  LOAD_REGS();
L_867510: /* 867510: mov eax, ecx */
  eax = ecx;
/* 867512: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 867516: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 867518: xor ecx, ecx */
  ecx = 0;
/* 86751a: mov dword ptr [eax + 4], 0xffffffff */
  W32((uint32_t)(eax + 0x4u), 0xffffffffu);
/* 867521: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 867524: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 867527: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 86752a: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 86752d: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 867530: ret 4 */
  esp += 8; SPILL(); return;
}

void f_867550(void) {
  LOAD_REGS();
L_867550: /* 867550: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867553: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867554: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867555: mov esi, eax */
  esi = eax;
/* 867557: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86755d: mov ecx, 7 */
  ecx = 0x7u;
/* 867562: lea edi, [esp + 0xc] */
  edi = (uint32_t)(esp + 0xcu);
/* 867566: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 867568: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 867570: xor esi, esi */
  esi = 0;
L_867572: /* 867572: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867573: mov ecx, ebx */
  ecx = ebx;
/* 867575: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x86757bu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 86757b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86757c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 867580: mov edi, eax */
  edi = eax;
/* 867582: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x867588u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 867588: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 86758a: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 86758c: mov ecx, ebx */
  ecx = ebx;
/* 86758e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86758f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 867591: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 867594: jp 0x8675a2 */
  if (pf) goto L_8675a2;
L_867596: /* 867596: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x86759cu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 86759c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 8675a0: jmp 0x8675cd */
  goto L_8675cd;
L_8675a2: /* 8675a2: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x8675a8u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 8675a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8675a9: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8675ad: mov edi, eax */
  edi = eax;
/* 8675af: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x8675b5u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 8675b5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8675b7: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 8675b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8675bb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8675be: jne 0x8675e8 */
  if (!zf) goto L_8675e8;
L_8675c0: /* 8675c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8675c1: mov ecx, ebx */
  ecx = ebx;
/* 8675c3: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x8675c9u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 8675c9: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
L_8675cd: /* 8675cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8675ce: mov edi, eax */
  edi = eax;
/* 8675d0: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x8675d6u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 8675d6: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8675d8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8675da: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8675dc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8675de: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 8675e2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8675e6: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8675e8: /* 8675e8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8675e9: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8675ec: jl 0x867572 */
  if ((sf != of)) goto L_867572;
L_8675ee: /* 8675ee: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8675f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8675f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8675f4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8675f7: ret  */
  esp += 4; SPILL(); return;
}

void f_867630(void) {
  LOAD_REGS();
L_867630: /* 867630: mov eax, ecx */
  eax = ecx;
/* 867632: mov dword ptr [eax], 0xa18180 */
  W32((uint32_t)(eax), 0xa18180u);
/* 867638: ret  */
  esp += 4; SPILL(); return;
}

void f_867650(void) {
  LOAD_REGS();
L_867650: /* 867650: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 867653: sub eax, dword ptr [ecx + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 867656: ret  */
  esp += 4; SPILL(); return;
}

void f_867670(void) {
  LOAD_REGS();
L_867670: /* 867670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 867671: mov ebp, esp */
  ebp = esp;
/* 867673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 867675: push 0x9d4530 */
  { uint32_t v = 0x9d4530u; esp -= 4; W32(esp, v); }
/* 86767a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 867680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 867688: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867689: mov eax, 0x2008 */
  eax = 0x2008u;
/* 86768e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x867693u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 867693: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867696: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 867699: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 86769c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86769d: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 8676a3: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 8676a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8676a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8676b0: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x8676b6u); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 8676b6: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8676b9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8676bc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8676bf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8676c1: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8676c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8676c7: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 8676cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8676ce: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 8676d1: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8676d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8676d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8676d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8676d8: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x8676deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8676de: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8676e1: fsub dword ptr [0xa0a848] */
  ST0 = ST0 - (F32((uint32_t)(0xa0a848u)));
/* 8676e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8676ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8676ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8676ee: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8676f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8676f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8676f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8676fa: mov esp, ebp */
  esp = ebp;
/* 8676fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8676fd: ret  */
  esp += 4; SPILL(); return;
}

void f_8676fe(void) {
  LOAD_REGS();
L_8676fe: /* 8676fe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 867701: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 867706: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 867709: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86770a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86770d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x867712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_867712(); return;
}

void f_867712(void) {
  LOAD_REGS();
L_867712: /* 867712: push 0xa18190 */
  { uint32_t v = 0xa18190u; esp -= 4; W32(esp, v); }
/* 867717: push 0xae5490 */
  { uint32_t v = 0xae5490u; esp -= 4; W32(esp, v); }
/* 86771c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x867722u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 867722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867727: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 867729: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86772eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_86772e: guest_badaddr(0x86772e); return;
}

void f_867760(void) {
  LOAD_REGS();
L_867760: /* 867760: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867764: mov eax, ecx */
  eax = ecx;
/* 867766: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 86776a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86776c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86776f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_867790(void) {
  LOAD_REGS();
L_867790: /* 867790: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867794: mov eax, ecx */
  eax = ecx;
/* 867796: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 86779a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86779c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86779f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8677c0(void) {
  LOAD_REGS();
L_8677c0: /* 8677c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8677c4: mov eax, ecx */
  eax = ecx;
/* 8677c6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8677ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8677cc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8677cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8677f0(void) {
  LOAD_REGS();
L_8677f0: /* 8677f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8677f1: mov eax, ecx */
  eax = ecx;
/* 8677f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8677f4: mov ecx, 7 */
  ecx = 0x7u;
/* 8677f9: lea esi, [esp + 0xc] */
  esi = (uint32_t)(esp + 0xcu);
/* 8677fd: mov edi, eax */
  edi = eax;
/* 8677ff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 867801: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 867805: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867806: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 867809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86780a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_867820(void) {
  LOAD_REGS();
L_867820: /* 867820: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867824: mov eax, ecx */
  eax = ecx;
/* 867826: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 86782a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86782c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86782f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_867850(void) {
  LOAD_REGS();
L_867850: /* 867850: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867854: mov eax, ecx */
  eax = ecx;
/* 867856: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 86785a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86785c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86785f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_867880(void) {
  LOAD_REGS();
L_867880: /* 867880: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867884: mov eax, ecx */
  eax = ecx;
/* 867886: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 86788a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86788c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86788f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8678b0(void) {
  LOAD_REGS();
L_8678b0: /* 8678b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8678b1: mov esi, ecx */
  esi = ecx;
/* 8678b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8678b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8678b9: mov eax, esi */
  eax = esi;
/* 8678bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8678bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8678d0(void) {
  LOAD_REGS();
L_8678d0: /* 8678d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8678d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8678d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8678d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8678f0(void) {
  LOAD_REGS();
L_8678f0: /* 8678f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8678f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8678f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8678f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8678fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8678fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_867910(void) {
  LOAD_REGS();
L_867910: /* 867910: mov eax, 1 */
  eax = 0x1u;
/* 867915: ret  */
  esp += 4; SPILL(); return;
}

void f_867930(void) {
  LOAD_REGS();
L_867930: /* 867930: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 867934: fmul qword ptr [esp + 4] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x4u)));
/* 867938: ret  */
  esp += 4; SPILL(); return;
}

void f_867950(void) {
  LOAD_REGS();
L_867950: /* 867950: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 867954: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867958: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86795f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 867963: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867964: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 867965: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86796bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86796b: ret  */
  esp += 4; SPILL(); return;
}

void f_867980(void) {
  LOAD_REGS();
L_867980: /* 867980: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 867984: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867988: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 86798f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 867993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867994: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 867995: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86799bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86799b: ret  */
  esp += 4; SPILL(); return;
}

void f_8679b0(void) {
  LOAD_REGS();
L_8679b0: /* 8679b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8679b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8679b8: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8679bf: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8679c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8679c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8679c5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8679cbu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8679cb: ret  */
  esp += 4; SPILL(); return;
}

void f_8679e0(void) {
  LOAD_REGS();
L_8679e0: /* 8679e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8679e1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8679e5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8679e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8679ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8679eb: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8679ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8679f0: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8679f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8679f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8679f5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8679fbu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8679fb: mov edx, eax */
  edx = eax;
/* 8679fd: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 867a01: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 867a05: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 867a09: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 867a0d: xor eax, eax */
  eax = 0;
/* 867a0f: mov ebx, ecx */
  ebx = ecx;
/* 867a11: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 867a14: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 867a17: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 867a19: mov ecx, ebx */
  ecx = ebx;
/* 867a1b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 867a1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867a1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867a1f: mov eax, edx */
  eax = edx;
/* 867a21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867a22: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 867a23: ret  */
  esp += 4; SPILL(); return;
}
