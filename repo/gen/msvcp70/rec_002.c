#include "recomp.h"
#include "rec_mod.h"

void f_468c6a(void) {
  LOAD_REGS();
L_468c6a: /* 468c6a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468c6b: mov ebp, esp */
  ebp = esp;
/* 468c6d: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 468c70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468c72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468c74: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 468c77: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468c7a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468c7d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468c80: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468c83: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468c86: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x468c89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468c89: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468c8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468c8d: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_468c90(void) {
  LOAD_REGS();
L_468c90: /* 468c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468c91: mov ebp, esp */
  ebp = esp;
/* 468c93: fld qword ptr [ebp + 0x1c] */
  { double v = F64((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 468c96: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468c99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468c9a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 468c9d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468ca0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468ca3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468ca6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468ca9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468cac: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x468cafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468caf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468cb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468cb3: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_468cb6(void) {
  LOAD_REGS();
L_468cb6: /* 468cb6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 468cba: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 468cbe: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468cc1: mov byte ptr [eax], 0x25 */
  W8((uint32_t)(eax), 0x25u);
/* 468cc4: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 468cc7: je 0x468ccd */
  if (zf) goto L_468ccd;
L_468cc9: /* 468cc9: mov byte ptr [ecx], 0x2b */
  W8((uint32_t)(ecx), 0x2bu);
/* 468ccc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_468ccd: /* 468ccd: test dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468cd0: je 0x468cd6 */
  if (zf) goto L_468cd6;
L_468cd2: /* 468cd2: mov byte ptr [ecx], 0x23 */
  W8((uint32_t)(ecx), 0x23u);
/* 468cd5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_468cd6: /* 468cd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468cd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468cd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 468cd9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 468cdd: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 468cdf: cmp bl, 0x4c */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 468ce2: je 0x468ce8 */
  if (zf) goto L_468ce8;
L_468ce4: /* 468ce4: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 468ce6: jmp 0x468cf3 */
  goto L_468cf3;
L_468ce8: /* 468ce8: mov byte ptr [ecx], 0x49 */
  W8((uint32_t)(ecx), 0x49u);
/* 468ceb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 468cec: mov byte ptr [ecx], 0x36 */
  W8((uint32_t)(ecx), 0x36u);
/* 468cef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 468cf0: mov byte ptr [ecx], 0x34 */
  W8((uint32_t)(ecx), 0x34u);
L_468cf3: /* 468cf3: mov esi, edx */
  esi = edx;
/* 468cf5: and esi, 0xe00 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 468cfb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 468cfc: cmp esi, 0x400 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468d02: jne 0x468d08 */
  if (!zf) goto L_468d08;
L_468d04: /* 468d04: mov dl, 0x6f */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x6fu) & 0xffu);
/* 468d06: jmp 0x468d20 */
  goto L_468d20;
L_468d08: /* 468d08: cmp esi, 0x800 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468d0e: je 0x468d15 */
  if (zf) goto L_468d15;
L_468d10: /* 468d10: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 468d13: jmp 0x468d20 */
  goto L_468d20;
L_468d15: /* 468d15: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 468d18: not dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(~(edx & 0xffu)) & 0xffu);
/* 468d1a: and dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 468d1d: or dl, 0x58 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_468d20: /* 468d20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 468d21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468d22: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 468d24: and byte ptr [ecx + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x1u), r);
  }
/* 468d28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 468d29: ret  */
  esp += 4; SPILL(); return;
}

void f_468d2a(void) {
  LOAD_REGS();
L_468d2a: /* 468d2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 468d2c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468d30: call 0x461453 */
  esp -= 4; W32(esp, 0x468d35u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 468d35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468d38(void) {
  LOAD_REGS();
L_468d38: /* 468d38: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 468d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468d3d: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 468d40: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 468d43: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 468d45: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 468d47: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 468d4a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 468d4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 468d4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468d50: call 0x461bc5 */
  esp -= 4; W32(esp, 0x468d55u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 468d55: mov eax, esi */
  eax = esi;
/* 468d57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468d58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468d5b(void) {
  LOAD_REGS();
L_468d5b: /* 468d5b: mov al, byte ptr [ecx + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x30u))) & 0xffu);
/* 468d5e: ret  */
  esp += 4; SPILL(); return;
}

void f_468d5f(void) {
  LOAD_REGS();
L_468d5f: /* 468d5f: mov dl, byte ptr [esp + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 468d63: mov al, byte ptr [ecx + 0x30] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x30u))) & 0xffu);
/* 468d66: mov byte ptr [ecx + 0x30], dl */
  W8((uint32_t)(ecx + 0x30u), (edx & 0xffu));
/* 468d69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468d6c(void) {
  LOAD_REGS();
L_468d6c: /* 468d6c: mov ax, word ptr [ecx + 0x30] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x30u))) & 0xffffu);
/* 468d70: ret  */
  esp += 4; SPILL(); return;
}

void f_468d71(void) {
  LOAD_REGS();
L_468d71: /* 468d71: mov eax, ecx */
  eax = ecx;
/* 468d73: and dword ptr [eax + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x24u), r);
  }
/* 468d77: mov dword ptr [eax], 0x4c75d8 */
  W32((uint32_t)(eax), 0x4c75d8u);
/* 468d7d: ret  */
  esp += 4; SPILL(); return;
}

void f_468d7e(void) {
  LOAD_REGS();
L_468d7e: /* 468d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 468d80: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468d84: call 0x464bb2 */
  esp -= 4; W32(esp, 0x468d89u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 468d89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468d8c(void) {
  LOAD_REGS();
L_468d8c: /* 468d8c: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 468d91: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468d96u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468d96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468d97: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 468d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468d9c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468d9f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 468da2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468da3: mov esi, ecx */
  esi = ecx;
/* 468da5: call 0x48925d */
  esp -= 4; W32(esp, 0x468daau); SPILL(); f_48925d(); if (g_unwind) return; RELOAD();
/* 468daa: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 468dad: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468db1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 468db3: je 0x468dc9 */
  if (zf) goto L_468dc9;
L_468db5: /* 468db5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468db8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 468dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468dbc: call 0x46844b */
  esp -= 4; W32(esp, 0x468dc1u); SPILL(); f_46844b(); if (g_unwind) return; RELOAD();
/* 468dc1: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 468dc4: call 0x461389 */
  esp -= 4; W32(esp, 0x468dc9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
L_468dc9: /* 468dc9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 468dcc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 468dcf: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 468dd1: call 0x461292 */
  esp -= 4; W32(esp, 0x468dd6u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 468dd6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 468dd9: call 0x461389 */
  esp -= 4; W32(esp, 0x468ddeu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 468dde: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468de1: mov eax, esi */
  eax = esi;
/* 468de3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468de4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468deb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468dec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468def(void) {
  LOAD_REGS();
L_468def: /* 468def: mov dx, word ptr [esp + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 468df4: mov ax, word ptr [ecx + 0x30] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x30u))) & 0xffffu);
/* 468df8: mov word ptr [ecx + 0x30], dx */
  W16((uint32_t)(ecx + 0x30u), (edx & 0xffffu));
/* 468dfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468dff(void) {
  LOAD_REGS();
L_468dff: /* 468dff: mov eax, ecx */
  eax = ecx;
/* 468e01: and dword ptr [eax + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x24u), r);
  }
/* 468e05: mov dword ptr [eax], 0x4c762c */
  W32((uint32_t)(eax), 0x4c762cu);
/* 468e0b: ret  */
  esp += 4; SPILL(); return;
}

void f_468e0c(void) {
  LOAD_REGS();
L_468e0c: /* 468e0c: mov eax, 0x48c142 */
  eax = 0x48c142u;
/* 468e11: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468e16u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468e16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468e17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468e18: xor eax, eax */
  eax = 0;
/* 468e1a: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468e1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468e1e: mov esi, ecx */
  esi = ecx;
/* 468e20: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 468e23: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 468e26: je 0x468e42 */
  if (zf) goto L_468e42;
L_468e28: /* 468e28: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 468e2e: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 468e31: mov dword ptr [esi + 4], 0x4c6d18 */
  W32((uint32_t)(esi + 0x4u), 0x4c6d18u);
/* 468e38: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 468e3b: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_468e42: /* 468e42: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468e44: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468e47: mov dword ptr [esi + eax], 0x4c6cc0 */
  W32((uint32_t)(esi + eax), 0x4c6cc0u);
/* 468e4e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468e50: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 468e53: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 468e55: call 0x489208 */
  esp -= 4; W32(esp, 0x468e5au); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 468e5a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468e5d: mov eax, esi */
  eax = esi;
/* 468e5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468e60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468e67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468e68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468e6b(void) {
  LOAD_REGS();
L_468e6b: /* 468e6b: mov eax, 0x48c162 */
  eax = 0x48c162u;
/* 468e70: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468e75u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468e77: xor eax, eax */
  eax = 0;
/* 468e79: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468e7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468e7d: mov esi, ecx */
  esi = ecx;
/* 468e7f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 468e82: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 468e85: je 0x468ea1 */
  if (zf) goto L_468ea1;
L_468e87: /* 468e87: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 468e8d: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 468e90: mov dword ptr [esi + 4], 0x4c75d8 */
  W32((uint32_t)(esi + 0x4u), 0x4c75d8u);
/* 468e97: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 468e9a: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_468ea1: /* 468ea1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468ea3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468ea6: mov dword ptr [esi + eax], 0x4c7680 */
  W32((uint32_t)(esi + eax), 0x4c7680u);
/* 468ead: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468eaf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 468eb2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 468eb4: call 0x489208 */
  esp -= 4; W32(esp, 0x468eb9u); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 468eb9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468ebc: mov eax, esi */
  eax = esi;
/* 468ebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468ebf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468ec6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468ec7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468eca(void) {
  LOAD_REGS();
L_468eca: /* 468eca: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* 468ecd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468ed0: mov dword ptr [eax + ecx - 4], 0x4c7680 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c7680u);
/* 468ed8: ret  */
  esp += 4; SPILL(); return;
}

void f_468ed9(void) {
  LOAD_REGS();
L_468ed9: /* 468ed9: mov eax, 0x48c182 */
  eax = 0x48c182u;
/* 468ede: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468ee3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468ee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468ee5: xor eax, eax */
  eax = 0;
/* 468ee7: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468eea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468eeb: mov esi, ecx */
  esi = ecx;
/* 468eed: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 468ef0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 468ef3: je 0x468f0f */
  if (zf) goto L_468f0f;
L_468ef5: /* 468ef5: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 468efb: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 468efe: mov dword ptr [esi + 4], 0x4c762c */
  W32((uint32_t)(esi + 0x4u), 0x4c762cu);
/* 468f05: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 468f08: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_468f0f: /* 468f0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468f11: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468f14: mov dword ptr [esi + eax], 0x4c76d8 */
  W32((uint32_t)(esi + eax), 0x4c76d8u);
/* 468f1b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468f1d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 468f20: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 468f22: call 0x489208 */
  esp -= 4; W32(esp, 0x468f27u); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 468f27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468f2a: mov eax, esi */
  eax = esi;
/* 468f2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468f2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468f34: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468f35: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468f38(void) {
  LOAD_REGS();
L_468f38: /* 468f38: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* 468f3b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468f3e: mov dword ptr [eax + ecx - 4], 0x4c76d8 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c76d8u);
/* 468f46: ret  */
  esp += 4; SPILL(); return;
}

void f_468f47(void) {
  LOAD_REGS();
L_468f47: /* 468f47: mov eax, 0x48c1a2 */
  eax = 0x48c1a2u;
/* 468f4c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468f51u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468f53: xor eax, eax */
  eax = 0;
/* 468f55: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468f59: mov esi, ecx */
  esi = ecx;
/* 468f5b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 468f5e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 468f61: je 0x468f7d */
  if (zf) goto L_468f7d;
L_468f63: /* 468f63: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 468f69: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 468f6c: mov dword ptr [esi + 8], 0x4c6d18 */
  W32((uint32_t)(esi + 0x8u), 0x4c6d18u);
/* 468f73: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 468f76: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_468f7d: /* 468f7d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468f7f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468f82: mov dword ptr [esi + eax], 0x4c702c */
  W32((uint32_t)(esi + eax), 0x4c702cu);
/* 468f89: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468f8b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 468f8e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 468f90: call 0x489208 */
  esp -= 4; W32(esp, 0x468f95u); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 468f95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468f98: mov eax, esi */
  eax = esi;
/* 468f9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468f9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468fa2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468fa3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468fa6(void) {
  LOAD_REGS();
L_468fa6: /* 468fa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468fa7: mov esi, ecx */
  esi = ecx;
/* 468fa9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 468fab: jne 0x468fb1 */
  if (!zf) goto L_468fb1;
L_468fad: /* 468fad: xor eax, eax */
  eax = 0;
/* 468faf: jmp 0x468fb8 */
  goto L_468fb8;
L_468fb1: /* 468fb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468fb3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468fb6: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_468fb8: /* 468fb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468fb9: call dword ptr [esp + 0xc] */
  { uint32_t t = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, 0x468fbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468fbd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468fbe: mov eax, esi */
  eax = esi;
/* 468fc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468fc1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468fc4(void) {
  LOAD_REGS();
L_468fc4: /* 468fc4: mov eax, 0x48c1c2 */
  eax = 0x48c1c2u;
/* 468fc9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468fceu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468fce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468fcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468fd0: xor eax, eax */
  eax = 0;
/* 468fd2: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468fd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468fd6: mov esi, ecx */
  esi = ecx;
/* 468fd8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 468fdb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 468fde: je 0x468ffa */
  if (zf) goto L_468ffa;
L_468fe0: /* 468fe0: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 468fe6: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 468fe9: mov dword ptr [esi + 8], 0x4c75d8 */
  W32((uint32_t)(esi + 0x8u), 0x4c75d8u);
/* 468ff0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 468ff3: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_468ffa: /* 468ffa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468ffc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 468fff: mov dword ptr [esi + eax], 0x4c7730 */
  W32((uint32_t)(esi + eax), 0x4c7730u);
/* 469006: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 469008: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46900b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46900d: call 0x489208 */
  esp -= 4; W32(esp, 0x469012u); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 469012: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 469015: mov eax, esi */
  eax = esi;
/* 469017: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469018: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46901f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469020: ret 8 */
  esp += 12; SPILL(); return;
}

void f_469023(void) {
  LOAD_REGS();
L_469023: /* 469023: mov eax, dword ptr [ecx - 8] */
  eax = R32((uint32_t)(ecx + 0xfffffff8u));
/* 469026: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469029: mov dword ptr [eax + ecx - 8], 0x4c7730 */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c7730u);
/* 469031: ret  */
  esp += 4; SPILL(); return;
}

void f_469032(void) {
  LOAD_REGS();
L_469032: /* 469032: mov eax, 0x48c1e2 */
  eax = 0x48c1e2u;
/* 469037: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46903cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46903c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46903d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46903e: xor eax, eax */
  eax = 0;
/* 469040: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469043: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469044: mov esi, ecx */
  esi = ecx;
/* 469046: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 469049: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 46904c: je 0x469068 */
  if (zf) goto L_469068;
L_46904e: /* 46904e: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 469054: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 469057: mov dword ptr [esi + 8], 0x4c762c */
  W32((uint32_t)(esi + 0x8u), 0x4c762cu);
/* 46905e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 469061: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_469068: /* 469068: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46906a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46906d: mov dword ptr [esi + eax], 0x4c7788 */
  W32((uint32_t)(esi + eax), 0x4c7788u);
/* 469074: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 469076: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 469079: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46907b: call 0x489208 */
  esp -= 4; W32(esp, 0x469080u); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 469080: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 469083: mov eax, esi */
  eax = esi;
/* 469085: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469086: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46908d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46908e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_469091(void) {
  LOAD_REGS();
L_469091: /* 469091: mov eax, dword ptr [ecx - 8] */
  eax = R32((uint32_t)(ecx + 0xfffffff8u));
/* 469094: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469097: mov dword ptr [eax + ecx - 8], 0x4c7788 */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c7788u);
/* 46909f: ret  */
  esp += 4; SPILL(); return;
}

void f_4690a0(void) {
  LOAD_REGS();
L_4690a0: /* 4690a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4690a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4690a4(void) {
  LOAD_REGS();
L_4690a4: /* 4690a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4690a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4690a6: mov esi, ecx */
  esi = ecx;
/* 4690a8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4690aa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4690ad: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4690b1: xor ebx, ebx */
  ebx = 0;
/* 4690b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4690b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4690b6: jne 0x4690bd */
  if (!zf) goto L_4690bd;
L_4690b8: /* 4690b8: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4690bb: jmp 0x4690d0 */
  goto L_4690d0;
L_4690bd: /* 4690bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4690bf: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x4690c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4690c2: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4690c5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4690c7: jne 0x4690ce */
  if (!zf) goto L_4690ce;
L_4690c9: /* 4690c9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4690cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4690cc: jmp 0x4690d0 */
  goto L_4690d0;
L_4690ce: /* 4690ce: xor edi, edi */
  edi = 0;
L_4690d0: /* 4690d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4690d2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4690d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4690d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4690d8: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4690da: call 0x461453 */
  esp -= 4; W32(esp, 0x4690dfu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4690df: mov eax, edi */
  eax = edi;
/* 4690e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4690e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4690e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4690e4: ret  */
  esp += 4; SPILL(); return;
}

void f_4690e5(void) {
  LOAD_REGS();
L_4690e5: /* 4690e5: mov eax, dword ptr [ecx - 0xc] */
  eax = R32((uint32_t)(ecx + 0xfffffff4u));
/* 4690e8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4690eb: mov dword ptr [eax + ecx - 0xc], 0x4c684c */
  W32((uint32_t)(eax + ecx + 0xfffffff4u), 0x4c684cu);
/* 4690f3: lea eax, [ecx - 0xc] */
  eax = (uint32_t)(ecx + 0xfffffff4u);
/* 4690f6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4690f8: lea edx, [ecx - 4] */
  edx = (uint32_t)(ecx + 0xfffffffcu);
/* 4690fb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4690fd: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4690ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469101: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 469104: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 469107: mov dword ptr [eax + ecx - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c6cc0u);
/* 46910f: mov eax, dword ptr [edx - 8] */
  eax = R32((uint32_t)(edx + 0xfffffff8u));
/* 469112: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469115: mov dword ptr [eax + edx - 8], 0x4c702c */
  W32((uint32_t)(eax + edx + 0xfffffff8u), 0x4c702cu);
/* 46911d: ret  */
  esp += 4; SPILL(); return;
}

void f_46911e(void) {
  LOAD_REGS();
L_46911e: /* 46911e: mov eax, 0x48c20d */
  eax = 0x48c20du;
/* 469123: call 0x4616c0 */
  esp -= 4; W32(esp, 0x469128u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 469128: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469129: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46912a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46912b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46912c: xor ebx, ebx */
  ebx = 0;
/* 46912e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46912f: xor edi, edi */
  edi = 0;
/* 469131: mov esi, ecx */
  esi = ecx;
/* 469133: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 469134: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469137: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46913a: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 46913d: je 0x46915c */
  if (zf) goto L_46915c;
L_46913f: /* 46913f: mov dword ptr [esi], 0x48e23c */
  W32((uint32_t)(esi), 0x48e23cu);
/* 469145: mov dword ptr [esi + 8], 0x48e22c */
  W32((uint32_t)(esi + 0x8u), 0x48e22cu);
/* 46914c: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 46914f: mov dword ptr [esi + 0xc], 0x4c75d8 */
  W32((uint32_t)(esi + 0xcu), 0x4c75d8u);
/* 469156: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 469159: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_46915c: /* 46915c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46915d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46915e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46915f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469162: mov ecx, esi */
  ecx = esi;
/* 469164: call 0x462b0d */
  esp -= 4; W32(esp, 0x469169u); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 469169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46916a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46916b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46916e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 469171: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 469174: call 0x462a4e */
  esp -= 4; W32(esp, 0x469179u); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 469179: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46917b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46917e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 469181: mov dword ptr [esi + eax], 0x4c68b8 */
  W32((uint32_t)(esi + eax), 0x4c68b8u);
/* 469188: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 469189: mov eax, esi */
  eax = esi;
/* 46918b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46918c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46918d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 469194: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469195: ret 8 */
  esp += 12; SPILL(); return;
}

void f_469198(void) {
  LOAD_REGS();
L_469198: /* 469198: mov eax, dword ptr [ecx - 0xc] */
  eax = R32((uint32_t)(ecx + 0xfffffff4u));
/* 46919b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46919e: mov dword ptr [eax + ecx - 0xc], 0x4c68b8 */
  W32((uint32_t)(eax + ecx + 0xfffffff4u), 0x4c68b8u);
/* 4691a6: lea eax, [ecx - 0xc] */
  eax = (uint32_t)(ecx + 0xfffffff4u);
/* 4691a9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4691ab: lea edx, [ecx - 4] */
  edx = (uint32_t)(ecx + 0xfffffffcu);
/* 4691ae: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4691b0: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4691b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4691b4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4691b7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4691ba: mov dword ptr [eax + ecx - 4], 0x4c7680 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c7680u);
/* 4691c2: mov eax, dword ptr [edx - 8] */
  eax = R32((uint32_t)(edx + 0xfffffff8u));
/* 4691c5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4691c8: mov dword ptr [eax + edx - 8], 0x4c7730 */
  W32((uint32_t)(eax + edx + 0xfffffff8u), 0x4c7730u);
/* 4691d0: ret  */
  esp += 4; SPILL(); return;
}

void f_4691d1(void) {
  LOAD_REGS();
L_4691d1: /* 4691d1: mov eax, 0x48c238 */
  eax = 0x48c238u;
/* 4691d6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4691dbu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4691db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4691dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4691dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4691de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4691df: xor ebx, ebx */
  ebx = 0;
/* 4691e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4691e2: xor edi, edi */
  edi = 0;
/* 4691e4: mov esi, ecx */
  esi = ecx;
/* 4691e6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4691e7: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4691ea: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4691ed: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 4691f0: je 0x46920f */
  if (zf) goto L_46920f;
L_4691f2: /* 4691f2: mov dword ptr [esi], 0x48e23c */
  W32((uint32_t)(esi), 0x48e23cu);
/* 4691f8: mov dword ptr [esi + 8], 0x48e22c */
  W32((uint32_t)(esi + 0x8u), 0x48e22cu);
/* 4691ff: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 469202: mov dword ptr [esi + 0xc], 0x4c762c */
  W32((uint32_t)(esi + 0xcu), 0x4c762cu);
/* 469209: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46920c: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_46920f: /* 46920f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 469210: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 469211: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 469212: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469215: mov ecx, esi */
  ecx = esi;
/* 469217: call 0x462974 */
  esp -= 4; W32(esp, 0x46921cu); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 46921c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46921d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46921e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469221: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 469224: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 469227: call 0x461ae0 */
  esp -= 4; W32(esp, 0x46922cu); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 46922c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46922e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469231: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 469234: mov dword ptr [esi + eax], 0x4c6924 */
  W32((uint32_t)(esi + eax), 0x4c6924u);
/* 46923b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46923c: mov eax, esi */
  eax = esi;
/* 46923e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46923f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 469240: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 469247: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469248: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46924b(void) {
  LOAD_REGS();
L_46924b: /* 46924b: mov eax, dword ptr [ecx - 0xc] */
  eax = R32((uint32_t)(ecx + 0xfffffff4u));
/* 46924e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469251: mov dword ptr [eax + ecx - 0xc], 0x4c6924 */
  W32((uint32_t)(eax + ecx + 0xfffffff4u), 0x4c6924u);
/* 469259: lea eax, [ecx - 0xc] */
  eax = (uint32_t)(ecx + 0xfffffff4u);
/* 46925c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 46925e: lea edx, [ecx - 4] */
  edx = (uint32_t)(ecx + 0xfffffffcu);
/* 469261: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 469263: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 469265: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469267: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46926a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46926d: mov dword ptr [eax + ecx - 4], 0x4c76d8 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c76d8u);
/* 469275: mov eax, dword ptr [edx - 8] */
  eax = R32((uint32_t)(edx + 0xfffffff8u));
/* 469278: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46927b: mov dword ptr [eax + edx - 8], 0x4c7788 */
  W32((uint32_t)(eax + edx + 0xfffffff8u), 0x4c7788u);
/* 469283: ret  */
  esp += 4; SPILL(); return;
}

void f_469284(void) {
  LOAD_REGS();
L_469284: /* 469284: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 469287: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 469289: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46928b: je 0x4692c6 */
  if (zf) goto L_4692c6;
L_46928d: /* 46928d: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 469290: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 469292: jbe 0x4692c6 */
  if ((cf | zf)) goto L_4692c6;
L_469294: /* 469294: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 469298: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46929b: je 0x4692a8 */
  if (zf) goto L_4692a8;
L_46929d: /* 46929d: cmp dl, byte ptr [eax - 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4692a0: je 0x4692a8 */
  if (zf) goto L_4692a8;
L_4692a2: /* 4692a2: test byte ptr [ecx + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4692a6: jne 0x4692c6 */
  if (!zf) goto L_4692c6;
L_4692a8: /* 4692a8: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 4692ab: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 4692ad: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4692b0: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 4692b2: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4692b5: je 0x4692c2 */
  if (zf) goto L_4692c2;
L_4692b7: /* 4692b7: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4692ba: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4692bc: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 4692be: mov eax, edx */
  eax = edx;
/* 4692c0: jmp 0x4692c9 */
  goto L_4692c9;
L_4692c2: /* 4692c2: xor eax, eax */
  eax = 0;
/* 4692c4: jmp 0x4692c9 */
  goto L_4692c9;
L_4692c6: /* 4692c6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4692c9: /* 4692c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4692cc(void) {
  LOAD_REGS();
L_4692cc: /* 4692cc: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 4692cf: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 4692d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4692d3: jne 0x4692d9 */
  if (!zf) goto L_4692d9;
L_4692d5: /* 4692d5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4692d8: ret  */
  esp += 4; SPILL(); return;
L_4692d9: /* 4692d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4692da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4692db: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 4692de: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 4692e0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4692e2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4692e4: jae 0x4692eb */
  if (!cf) goto L_4692eb;
L_4692e6: /* 4692e6: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 4692e9: jmp 0x46931e */
  goto L_46931e;
L_4692eb: /* 4692eb: test byte ptr [ecx + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4692ef: jne 0x46931b */
  if (!zf) goto L_46931b;
L_4692f1: /* 4692f1: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 4692f4: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 4692f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4692f8: je 0x46931b */
  if (zf) goto L_46931b;
L_4692fa: /* 4692fa: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4692fc: ja 0x469303 */
  if ((!cf && !zf)) goto L_469303;
L_4692fe: /* 4692fe: cmp dword ptr [ecx + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 469301: jbe 0x46931b */
  if ((cf | zf)) goto L_46931b;
L_469303: /* 469303: cmp dword ptr [ecx + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 469306: jae 0x46930b */
  if (!cf) goto L_46930b;
L_469308: /* 469308: mov dword ptr [ecx + 0x3c], esi */
  W32((uint32_t)(ecx + 0x3cu), esi);
L_46930b: /* 46930b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46930d: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 469310: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 469312: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 469314: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 469317: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 469319: jmp 0x4692e6 */
  goto L_4692e6;
L_46931b: /* 46931b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46931e: /* 46931e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46931f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469320: ret  */
  esp += 4; SPILL(); return;
}

void f_469321(void) {
  LOAD_REGS();
L_469321: /* 469321: xor eax, eax */
  eax = 0;
/* 469323: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469328: jne 0x46932d */
  if (!zf) goto L_46932d;
L_46932a: /* 46932a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46932c: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_46932d: /* 46932d: test byte ptr [esp + 4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469332: jne 0x469337 */
  if (!zf) goto L_469337;
L_469334: /* 469334: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_469337: /* 469337: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46933a(void) {
  LOAD_REGS();
L_46933a: /* 46933a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46933d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46933f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 469341: je 0x469381 */
  if (zf) goto L_469381;
L_469343: /* 469343: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 469346: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 469348: jbe 0x469381 */
  if ((cf | zf)) goto L_469381;
L_46934a: /* 46934a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 46934e: cmp dx, -1 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 469352: je 0x469360 */
  if (zf) goto L_469360;
L_469354: /* 469354: cmp dx, word ptr [eax - 2] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0xfffffffeu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 469358: je 0x469360 */
  if (zf) goto L_469360;
L_46935a: /* 46935a: test byte ptr [ecx + 0x40], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x40u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46935e: jne 0x469381 */
  if (!zf) goto L_469381;
L_469360: /* 469360: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 469363: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 469365: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 469368: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 46936b: cmp dx, -1 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46936f: je 0x46937d */
  if (zf) goto L_46937d;
L_469371: /* 469371: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 469374: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 469376: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 469379: mov eax, edx */
  eax = edx;
/* 46937b: jmp 0x469385 */
  goto L_469385;
L_46937d: /* 46937d: xor eax, eax */
  eax = 0;
/* 46937f: jmp 0x469385 */
  goto L_469385;
L_469381: /* 469381: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_469385: /* 469385: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469388(void) {
  LOAD_REGS();
L_469388: /* 469388: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46938b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 46938d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46938f: jne 0x469396 */
  if (!zf) goto L_469396;
L_469391: /* 469391: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 469395: ret  */
  esp += 4; SPILL(); return;
L_469396: /* 469396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469397: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 469398: mov edi, dword ptr [ecx + 0x30] */
  edi = R32((uint32_t)(ecx + 0x30u));
/* 46939b: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 46939d: lea esi, [eax + esi*2] */
  esi = (uint32_t)(eax + esi*2);
/* 4693a0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4693a2: jae 0x4693a9 */
  if (!cf) goto L_4693a9;
L_4693a4: /* 4693a4: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4693a7: jmp 0x4693df */
  goto L_4693df;
L_4693a9: /* 4693a9: test byte ptr [ecx + 0x40], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x40u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4693ad: jne 0x4693db */
  if (!zf) goto L_4693db;
L_4693af: /* 4693af: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 4693b2: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 4693b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4693b6: je 0x4693db */
  if (zf) goto L_4693db;
L_4693b8: /* 4693b8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4693ba: ja 0x4693c1 */
  if ((!cf && !zf)) goto L_4693c1;
L_4693bc: /* 4693bc: cmp dword ptr [ecx + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4693bf: jbe 0x4693db */
  if ((cf | zf)) goto L_4693db;
L_4693c1: /* 4693c1: cmp dword ptr [ecx + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4693c4: jae 0x4693c9 */
  if (!cf) goto L_4693c9;
L_4693c6: /* 4693c6: mov dword ptr [ecx + 0x3c], esi */
  W32((uint32_t)(ecx + 0x3cu), esi);
L_4693c9: /* 4693c9: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 4693cb: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 4693ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4693d0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4693d2: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4693d4: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4693d7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4693d9: jmp 0x4693a4 */
  goto L_4693a4;
L_4693db: /* 4693db: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_4693df: /* 4693df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4693e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4693e1: ret  */
  esp += 4; SPILL(); return;
}

void f_4693e2(void) {
  LOAD_REGS();
L_4693e2: /* 4693e2: mov eax, ecx */
  eax = ecx;
/* 4693e4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4693e8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4693ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4693ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4693f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4693f2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4693f5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4693f8(void) {
  LOAD_REGS();
L_4693f8: /* 4693f8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4693fc: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4693fe: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
/* 469400: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469403(void) {
  LOAD_REGS();
L_469403: /* 469403: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469407: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469409: fst dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0);
/* 46940c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46940f(void) {
  LOAD_REGS();
L_46940f: /* 46940f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 469411: ret  */
  esp += 4; SPILL(); return;
}

void f_469412(void) {
  LOAD_REGS();
L_469412: /* 469412: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 469415: ret  */
  esp += 4; SPILL(); return;
}

void f_469416(void) {
  LOAD_REGS();
L_469416: /* 469416: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46941a: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46941c: fst qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0);
/* 46941f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469422(void) {
  LOAD_REGS();
L_469422: /* 469422: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 469424: ret  */
  esp += 4; SPILL(); return;
}

void f_469425(void) {
  LOAD_REGS();
L_469425: /* 469425: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469429: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46942b: fst qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0);
/* 46942d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469430(void) {
  LOAD_REGS();
L_469430: /* 469430: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 469433: ret  */
  esp += 4; SPILL(); return;
}

void f_469434(void) {
  LOAD_REGS();
L_469434: /* 469434: xor eax, eax */
  eax = 0;
/* 469436: cmp dword ptr [ecx + 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469439: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 46943c: ret  */
  esp += 4; SPILL(); return;
}

void f_46943d(void) {
  LOAD_REGS();
L_46943d: /* 46943d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46943e: mov esi, ecx */
  esi = ecx;
/* 469440: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 469443: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 469445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 469447: je 0x46945a */
  if (zf) goto L_46945a;
L_469449: /* 469449: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 46944c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 46944e: lea ecx, [eax + ecx*2] */
  ecx = (uint32_t)(eax + ecx*2);
/* 469451: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 469453: jae 0x46945a */
  if (!cf) goto L_46945a;
L_469455: /* 469455: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 469458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469459: ret  */
  esp += 4; SPILL(); return;
L_46945a: /* 46945a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46945c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46945d: mov ecx, esi */
  ecx = esi;
/* 46945f: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x469462u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469462: mov edi, eax */
  edi = eax;
/* 469464: mov eax, 0xffff */
  eax = 0xffffu;
/* 469469: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46946c: je 0x469479 */
  if (zf) goto L_469479;
L_46946e: /* 46946e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 469470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 469471: mov ecx, esi */
  ecx = esi;
/* 469473: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x469476u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469476: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
L_469479: /* 469479: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46947a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46947b: ret  */
  esp += 4; SPILL(); return;
}

void f_46947c(void) {
  LOAD_REGS();
L_46947c: /* 46947c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46947d: mov esi, ecx */
  esi = ecx;
/* 46947f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 469482: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 469484: je 0x4694b6 */
  if (zf) goto L_4694b6;
L_469486: /* 469486: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46948b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 46948f: jne 0x46949a */
  if (!zf) goto L_46949a;
L_469491: /* 469491: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 469493: jne 0x46949a */
  if (!zf) goto L_46949a;
L_469495: /* 469495: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 469497: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 469498: jmp 0x46949c */
  goto L_46949c;
L_46949a: /* 46949a: xor edx, edx */
  edx = 0;
L_46949c: /* 46949c: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46949e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46949f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4694a0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4694a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4694a5: call dword ptr [0x48e044] */
  esp -= 4; W32(esp, 0x4694abu); SPILL(); f_413a02(); if (g_unwind) return; /* MSVCR70!setvbuf */ RELOAD();
/* 4694ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4694ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4694b0: jne 0x4694b6 */
  if (!zf) goto L_4694b6;
L_4694b2: /* 4694b2: mov eax, esi */
  eax = esi;
/* 4694b4: jmp 0x4694b8 */
  goto L_4694b8;
L_4694b6: /* 4694b6: xor eax, eax */
  eax = 0;
L_4694b8: /* 4694b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4694b9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4694bc(void) {
  LOAD_REGS();
L_4694bc: /* 4694bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4694bd: mov ebp, esp */
  ebp = esp;
/* 4694bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4694c0: mov esi, ecx */
  esi = ecx;
/* 4694c2: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4694c5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4694c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4694c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4694ca: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4694cd: je 0x4694fb */
  if (zf) goto L_4694fb;
L_4694cf: /* 4694cf: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4694d2: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4694d4: jae 0x4694fb */
  if (!cf) goto L_4694fb;
L_4694d6: /* 4694d6: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4694da: je 0x4694e2 */
  if (zf) goto L_4694e2;
L_4694dc: /* 4694dc: cmp word ptr [eax - 2], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0xfffffffeu))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4694e0: jne 0x4694fb */
  if (!zf) goto L_4694fb;
L_4694e2: /* 4694e2: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 4694e5: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 4694e7: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 4694ea: add dword ptr [esi], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 4694ed: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4694f0: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4694f2: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4694f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4694f7: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4694f9: jmp 0x46954a */
  goto L_46954a;
L_4694fb: /* 4694fb: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 4694fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 469500: je 0x469546 */
  if (zf) goto L_469546;
L_469502: /* 469502: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 469506: je 0x469546 */
  if (zf) goto L_469546;
L_469508: /* 469508: cmp dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46950c: jne 0x469526 */
  if (!zf) goto L_469526;
L_46950e: /* 46950e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46950f: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 469512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 469513: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 469516: call 0x4681a4 */
  esp -= 4; W32(esp, 0x46951bu); SPILL(); f_4681a4(); if (g_unwind) return; RELOAD();
/* 46951b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46951d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46951e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46951f: je 0x469526 */
  if (zf) goto L_469526;
L_469521: /* 469521: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 469524: jmp 0x46954a */
  goto L_46954a;
L_469526: /* 469526: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 469529: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 46952c: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 46952f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 469531: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 469534: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 469536: mov ecx, esi */
  ecx = esi;
/* 469538: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 46953a: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 46953d: add ecx, 0x46 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 469540: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 469542: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 469544: jmp 0x469521 */
  goto L_469521;
L_469546: /* 469546: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_46954a: /* 46954a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46954b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46954c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46954d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469550(void) {
  LOAD_REGS();
L_469550: /* 469550: xor eax, eax */
  eax = 0;
/* 469552: cmp dword ptr [ecx + 0x64], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x64u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469555: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 469558: ret  */
  esp += 4; SPILL(); return;
}

void f_469559(void) {
  LOAD_REGS();
L_469559: /* 469559: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 46955c: ret  */
  esp += 4; SPILL(); return;
}

void f_46955d(void) {
  LOAD_REGS();
L_46955d: /* 46955d: xor eax, eax */
  eax = 0;
/* 46955f: cmp dword ptr [ecx + 0x60], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x60u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469562: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 469565: ret  */
  esp += 4; SPILL(); return;
}

void f_469566(void) {
  LOAD_REGS();
L_469566: /* 469566: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 469569: ret  */
  esp += 4; SPILL(); return;
}

void f_46956a(void) {
  LOAD_REGS();
L_46956a: /* 46956a: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 46956d: ret  */
  esp += 4; SPILL(); return;
}

void f_46956e(void) {
  LOAD_REGS();
L_46956e: /* 46956e: xor eax, eax */
  eax = 0;
/* 469570: cmp dword ptr [ecx + 0x68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469573: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 469576: ret  */
  esp += 4; SPILL(); return;
}

void f_469577(void) {
  LOAD_REGS();
L_469577: /* 469577: xor eax, eax */
  eax = 0;
/* 469579: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46957c(void) {
  LOAD_REGS();
L_46957c: /* 46957c: mov al, byte ptr [ecx + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcu))) & 0xffu);
/* 46957f: ret  */
  esp += 4; SPILL(); return;
}

void f_469580(void) {
  LOAD_REGS();
L_469580: /* 469580: mov al, byte ptr [ecx + 0xd] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* 469583: ret  */
  esp += 4; SPILL(); return;
}

void f_469584(void) {
  LOAD_REGS();
L_469584: /* 469584: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 469587: ret  */
  esp += 4; SPILL(); return;
}

void f_469588(void) {
  LOAD_REGS();
L_469588: /* 469588: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 46958b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46958f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 469591: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469594(void) {
  LOAD_REGS();
L_469594: /* 469594: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 469597: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46959b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46959d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4695a0(void) {
  LOAD_REGS();
L_4695a0: /* 4695a0: cmp byte ptr [ecx + 0x28], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x28u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4695a4: jne 0x4695e7 */
  if (!zf) goto L_4695e7;
L_4695a6: /* 4695a6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4695aa: test eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4695af: jne 0x4695e7 */
  if (!zf) goto L_4695e7;
L_4695b1: /* 4695b1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 4695b5: test ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4695bb: jne 0x4695e7 */
  if (!zf) goto L_4695e7;
L_4695bd: /* 4695bd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 4695c1: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4695c4: ja 0x4695e7 */
  if ((!cf && !zf)) goto L_4695e7;
L_4695c6: /* 4695c6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4695c7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4695c9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4695cb: and eax, 0xffffffd8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4695ce: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4695d1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4695d2: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 4695d4: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 4695d6: and ecx, 0xffffffec */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffecu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4695d9: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4695dc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4695de: lea eax, [eax + edx*4 + 0x4c8e08] */
  eax = (uint32_t)(eax + edx*4 + 0x4c8e08u);
/* 4695e5: jmp 0x4695ec */
  goto L_4695ec;
L_4695e7: /* 4695e7: mov eax, 0x4c8e00 */
  eax = 0x4c8e00u;
L_4695ec: /* 4695ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4695ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4695ef: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4695f3: call 0x4617bb */
  esp -= 4; W32(esp, 0x4695f8u); SPILL(); hle_memcpy(); RELOAD();
/* 4695f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4695fb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4695fe(void) {
  LOAD_REGS();
L_4695fe: /* 4695fe: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 469602: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 469604: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x469607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469607: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46960b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46960e(void) {
  LOAD_REGS();
L_46960e: /* 46960e: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 469612: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 469614: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x469617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469617: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46961b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46961e(void) {
  LOAD_REGS();
L_46961e: /* 46961e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46961f: mov esi, ecx */
  esi = ecx;
/* 469621: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 469624: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469629u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469629: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 46962c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469631u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469631: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 469634: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469639u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469639: push dword ptr [esi + 0x18] */
  { uint32_t v = R32((uint32_t)(esi + 0x18u)); esp -= 4; W32(esp, v); }
/* 46963c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469641u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469641: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 469644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469645: ret  */
  esp += 4; SPILL(); return;
}

void f_469646(void) {
  LOAD_REGS();
L_469646: /* 469646: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469647: mov ebp, esp */
  ebp = esp;
/* 469649: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 46964c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46964e: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 469651: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 469654: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 469657: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46965a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46965d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 469660: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 469663: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469666: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x469669u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469669: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46966c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46966d: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_469670(void) {
  LOAD_REGS();
L_469670: /* 469670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469671: mov ebp, esp */
  ebp = esp;
/* 469673: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 469676: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 469678: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 46967b: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 46967e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 469681: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 469684: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 469687: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46968a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46968d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469690: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x469693u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469693: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469696: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 469697: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_46969a(void) {
  LOAD_REGS();
L_46969a: /* 46969a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46969b: mov ebp, esp */
  ebp = esp;
/* 46969d: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4696a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4696a2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4696a5: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4696a8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4696ab: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4696ae: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4696b1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4696b4: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4696b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4696b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4696ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4696bb: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_4696be(void) {
  LOAD_REGS();
L_4696be: /* 4696be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4696bf: mov ebp, esp */
  ebp = esp;
/* 4696c1: fld qword ptr [ebp + 0x20] */
  { double v = F64((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 4696c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4696c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4696c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4696c8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4696cb: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4696ce: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4696d1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4696d4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4696d7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4696da: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4696dd: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x4696e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4696e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4696e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4696e4: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4696e7(void) {
  LOAD_REGS();
L_4696e7: /* 4696e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4696e8: mov ebp, esp */
  ebp = esp;
/* 4696ea: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4696ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4696ef: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4696f2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4696f5: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4696f8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4696fb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4696fe: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 469701: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469704: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x469707u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 469707: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46970a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46970b: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46970e(void) {
  LOAD_REGS();
L_46970e: /* 46970e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46970f: mov esi, ecx */
  esi = ecx;
/* 469711: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 469714: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469719u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469719: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 46971c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x469721u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 469721: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469722: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469723: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469724: ret  */
  esp += 4; SPILL(); return;
}

void f_469725(void) {
  LOAD_REGS();
L_469725: /* 469725: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469726: mov esi, ecx */
  esi = ecx;
/* 469728: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 46972b: mov dword ptr [esi], 0x4c77e0 */
  W32((uint32_t)(esi), 0x4c77e0u);
/* 469731: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x469737u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 469737: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469738: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46973e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46973f: ret  */
  esp += 4; SPILL(); return;
}

void f_469740(void) {
  LOAD_REGS();
L_469740: /* 469740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469741: mov ebp, esp */
  ebp = esp;
/* 469743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469744: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 469747: mov esi, ecx */
  esi = ecx;
/* 469749: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46974c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46974d: call 0x463fd2 */
  esp -= 4; W32(esp, 0x469752u); SPILL(); f_463fd2(); if (g_unwind) return; RELOAD();
/* 469752: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469754: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 469757: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 46975a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46975d: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x469763u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 469763: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 469766: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469769(void) {
  LOAD_REGS();
L_469769: /* 469769: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46976a: mov esi, ecx */
  esi = ecx;
/* 46976c: call 0x4885f7 */
  esp -= 4; W32(esp, 0x469771u); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 469771: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 469774: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 469777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469778: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46977b(void) {
  LOAD_REGS();
L_46977b: /* 46977b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46977e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46977f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 469783: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 469787: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46978b: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46978f: call 0x4884e3 */
  esp -= 4; W32(esp, 0x469794u); SPILL(); f_4884e3(); if (g_unwind) return; RELOAD();
/* 469794: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 469797: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46979a(void) {
  LOAD_REGS();
L_46979a: /* 46979a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46979e: xor eax, eax */
  eax = 0;
/* 4697a0: jmp 0x4697b2 */
  goto L_4697b2;
L_4697a2: /* 4697a2: mov edx, eax */
  edx = eax;
/* 4697a4: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4697a7: shr edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4697aa: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4697ac: movsx eax, byte ptr [ecx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx)));
/* 4697af: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4697b1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_4697b2: /* 4697b2: cmp ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4697b6: jne 0x4697a2 */
  if (!zf) goto L_4697a2;
L_4697b8: /* 4697b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4697bb(void) {
  LOAD_REGS();
L_4697bb: /* 4697bb: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4697be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4697bf: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4697c3: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4697c7: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4697cb: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4697cf: call 0x48a513 */
  esp -= 4; W32(esp, 0x4697d4u); SPILL(); f_48a513(); if (g_unwind) return; RELOAD();
/* 4697d4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4697d7: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4697da(void) {
  LOAD_REGS();
L_4697da: /* 4697da: mov dword ptr [ecx], 0x4c6a70 */
  W32((uint32_t)(ecx), 0x4c6a70u);
/* 4697e0: ret  */
  esp += 4; SPILL(); return;
}

void f_4697e1(void) {
  LOAD_REGS();
L_4697e1: /* 4697e1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4697e5: xor eax, eax */
  eax = 0;
/* 4697e7: jmp 0x4697fa */
  goto L_4697fa;
L_4697e9: /* 4697e9: mov edx, eax */
  edx = eax;
/* 4697eb: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4697ee: shr edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4697f1: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4697f3: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 4697f6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4697f8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4697f9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_4697fa: /* 4697fa: cmp ecx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4697fe: jne 0x4697e9 */
  if (!zf) goto L_4697e9;
L_469800: /* 469800: ret 8 */
  esp += 12; SPILL(); return;
}

void f_469803(void) {
  LOAD_REGS();
L_469803: /* 469803: mov eax, ecx */
  eax = ecx;
/* 469805: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 469809: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46980b: mov ecx, dword ptr [0x4d0eb0] */
  ecx = R32((uint32_t)(0x4d0eb0u));
/* 469811: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 469814: mov ecx, dword ptr [0x4d0eb4] */
  ecx = R32((uint32_t)(0x4d0eb4u));
/* 46981a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 46981d: mov ecx, dword ptr [0x4d1094] */
  ecx = R32((uint32_t)(0x4d1094u));
/* 469823: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 469826: ret 4 */
  esp += 8; SPILL(); return;
}

void f_469829(void) {
  LOAD_REGS();
L_469829: /* 469829: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46982a: mov ebp, esp */
  ebp = esp;
/* 46982c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46982f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469831: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469834: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 469837: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 469839: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 46983b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 46983e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 469841: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 469843: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469845: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 469848: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 46984b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 46984d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 46984f: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 469852: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 469854: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 469857: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46985a(void) {
  LOAD_REGS();
L_46985a: /* 46985a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46985b: mov ebp, esp */
  ebp = esp;
/* 46985d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46985e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469861: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469865: mov esi, ecx */
  esi = ecx;
/* 469867: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469869: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46986c: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 46986f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469872: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469873: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469876: call 0x467fc9 */
  esp -= 4; W32(esp, 0x46987bu); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 46987b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46987d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46987e: jne 0x469930 */
  if (!zf) goto L_469930;
L_469884: /* 469884: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469887: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469888: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46988b: call 0x467fc9 */
  esp -= 4; W32(esp, 0x469890u); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 469890: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469892: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469893: jne 0x469930 */
  if (!zf) goto L_469930;
L_469899: /* 469899: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 46989c: fld dword ptr [0x48e244] */
  { double v = F32((uint32_t)(0x48e244u)); FPUSH(v); }
/* 4698a2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4698a4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4698a6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4698a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4698aa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4698ad: jp 0x4698b1 */
  if (pf) goto L_4698b1;
L_4698af: /* 4698af: fchs  */
  ST0 = -ST0;
L_4698b1: /* 4698b1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4698b4: fcom st(2) */
  fpu_com(ST0, STI(2));
/* 4698b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4698b8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4698bb: jp 0x4698bf */
  if (pf) goto L_4698bf;
L_4698bd: /* 4698bd: fchs  */
  ST0 = -ST0;
L_4698bf: /* 4698bf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4698c1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 4698c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4698c5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4698c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4698ca: jp 0x469923 */
  if (pf) goto L_469923;
L_4698cc: /* 4698cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4698ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4698cf: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4698d2: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 4698d4: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 4698d7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 4698d9: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 4698dc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 4698df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4698e1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4698e4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 4698e7: call 0x467fc9 */
  esp -= 4; W32(esp, 0x4698ecu); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 4698ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4698ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4698ef: jne 0x469930 */
  if (!zf) goto L_469930;
L_4698f1: /* 4698f1: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4698f4: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 4698fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4698fc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4698ff: jnp 0x469930 */
  if (!pf) goto L_469930;
L_469901: /* 469901: fld1  */
  FPUSH(1.0);
/* 469903: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 469906: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469909: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 46990c: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 46990e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469910: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469913: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 469915: fsubr dword ptr [esi + 4] */
  ST0 = (F32((uint32_t)(esi + 0x4u))) - ST0;
L_469918: /* 469918: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 46991a: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 46991d: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 46991f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469921: jmp 0x46993a */
  goto L_46993a;
L_469923: /* 469923: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469925: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469929: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46992c: jp 0x46993f */
  if (pf) goto L_46993f;
L_46992e: /* 46992e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_469930: /* 469930: mov eax, dword ptr [0x48e3e0] */
  eax = R32((uint32_t)(0x48e3e0u));
/* 469935: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 469937: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_46993a: /* 46993a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46993b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46993c: ret 4 */
  esp += 8; SPILL(); return;
L_46993f: /* 46993f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469942: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469943: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 469945: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 469948: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 46994b: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46994d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 469950: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469952: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469955: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469958: call 0x467fc9 */
  esp -= 4; W32(esp, 0x46995du); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 46995d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46995f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469960: jne 0x469930 */
  if (!zf) goto L_469930;
L_469962: /* 469962: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469965: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 46996b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46996d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469970: jnp 0x469930 */
  if (!pf) goto L_469930;
L_469972: /* 469972: fld1  */
  FPUSH(1.0);
/* 469974: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 469977: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 46997a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 46997c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 46997f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469981: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469984: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 469987: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 469989: jmp 0x469918 */
  goto L_469918;
}

void f_46998b(void) {
  LOAD_REGS();
L_46998b: /* 46998b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46998c: mov ebp, esp */
  ebp = esp;
/* 46998e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46998f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469990: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469993: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 469995: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 469998: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46999b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46999d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 46999f: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4699a2: fmul qword ptr [ecx + 8] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x8u)));
/* 4699a5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 4699a7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4699a9: fmul qword ptr [ecx + 8] */
  ST0 = ST0 * (F64((uint32_t)(ecx + 0x8u)));
/* 4699ac: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4699af: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 4699b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4699b3: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 4699b6: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 4699b8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4699ba: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4699bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4699be(void) {
  LOAD_REGS();
L_4699be: /* 4699be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4699bf: mov ebp, esp */
  ebp = esp;
/* 4699c1: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4699c4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4699c7: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 4699c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4699ca: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4699cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4699ce: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 4699d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4699d2: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 4699d5: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4699d8: mov esi, ecx */
  esi = ecx;
/* 4699da: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4699dd: call 0x467f12 */
  esp -= 4; W32(esp, 0x4699e2u); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 4699e2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4699e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4699e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4699e6: jne 0x469a9c */
  if (!zf) goto L_469a9c;
L_4699ec: /* 4699ec: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 4699ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4699f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4699f1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4699f4: call 0x467f12 */
  esp -= 4; W32(esp, 0x4699f9u); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 4699f9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4699fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4699fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4699fd: jne 0x469a9c */
  if (!zf) goto L_469a9c;
L_469a03: /* 469a03: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469a06: fld qword ptr [0x4c8e60] */
  { double v = F64((uint32_t)(0x4c8e60u)); FPUSH(v); }
/* 469a0c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469a0e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 469a10: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469a12: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469a14: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469a17: jp 0x469a1b */
  if (pf) goto L_469a1b;
L_469a19: /* 469a19: fchs  */
  ST0 = -ST0;
L_469a1b: /* 469a1b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469a1e: fcom st(2) */
  fpu_com(ST0, STI(2));
/* 469a20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469a22: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469a25: jp 0x469a29 */
  if (pf) goto L_469a29;
L_469a27: /* 469a27: fchs  */
  ST0 = -ST0;
L_469a29: /* 469a29: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469a2b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469a2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469a2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469a31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469a34: jp 0x469a8f */
  if (pf) goto L_469a8f;
L_469a36: /* 469a36: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469a38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469a39: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469a3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469a3d: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 469a3f: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 469a42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469a44: fadd qword ptr [ebp - 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469a47: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469a4a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469a4c: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469a4f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469a52: call 0x467f12 */
  esp -= 4; W32(esp, 0x469a57u); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 469a57: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469a59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469a5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469a5b: jne 0x469a9c */
  if (!zf) goto L_469a9c;
L_469a5d: /* 469a5d: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469a60: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 469a66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469a68: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469a6b: jnp 0x469a9c */
  if (!pf) goto L_469a9c;
L_469a6d: /* 469a6d: fld1  */
  FPUSH(1.0);
/* 469a6f: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469a72: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469a75: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 469a78: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 469a7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469a7c: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469a7f: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 469a81: fsubr qword ptr [esi + 8] */
  ST0 = (F64((uint32_t)(esi + 0x8u))) - ST0;
L_469a84: /* 469a84: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 469a86: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 469a89: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 469a8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469a8d: jmp 0x469aa9 */
  goto L_469aa9;
L_469a8f: /* 469a8f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469a91: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469a93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469a95: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469a98: jp 0x469aae */
  if (pf) goto L_469aae;
L_469a9a: /* 469a9a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_469a9c: /* 469a9c: fld qword ptr [0x48e370] */
  { double v = F64((uint32_t)(0x48e370u)); FPUSH(v); }
/* 469aa2: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 469aa4: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 469aa6: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
L_469aa9: /* 469aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469aaa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469aab: ret 4 */
  esp += 8; SPILL(); return;
L_469aae: /* 469aae: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469ab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469ab2: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 469ab4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469ab5: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 469ab8: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469abb: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 469abd: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 469ac0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469ac2: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469ac5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469ac8: call 0x467f12 */
  esp -= 4; W32(esp, 0x469acdu); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 469acd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469acf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469ad0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469ad1: jne 0x469a9c */
  if (!zf) goto L_469a9c;
L_469ad3: /* 469ad3: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469ad6: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 469adc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469ade: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ae1: jnp 0x469a9c */
  if (!pf) goto L_469a9c;
L_469ae3: /* 469ae3: fld1  */
  FPUSH(1.0);
/* 469ae5: fdiv qword ptr [ebp - 0x10] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 469ae8: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469aeb: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 469aed: fadd qword ptr [esi + 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x8u)));
/* 469af0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469af2: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469af5: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 469af8: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* 469afa: jmp 0x469a84 */
  goto L_469a84;
}

void f_469afc(void) {
  LOAD_REGS();
L_469afc: /* 469afc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469afd: mov ebp, esp */
  ebp = esp;
/* 469aff: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 469b02: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469b05: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 469b07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469b08: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469b0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b0c: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 469b0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b10: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 469b13: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469b16: mov esi, ecx */
  esi = ecx;
/* 469b18: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469b1b: call 0x467dfa */
  esp -= 4; W32(esp, 0x469b20u); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 469b20: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469b22: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b23: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b24: jne 0x469bda */
  if (!zf) goto L_469bda;
L_469b2a: /* 469b2a: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469b2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b2f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469b32: call 0x467dfa */
  esp -= 4; W32(esp, 0x469b37u); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 469b37: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469b39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b3a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b3b: jne 0x469bda */
  if (!zf) goto L_469bda;
L_469b41: /* 469b41: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469b44: fld qword ptr [0x4c8e60] */
  { double v = F64((uint32_t)(0x4c8e60u)); FPUSH(v); }
/* 469b4a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469b4c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 469b4e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469b50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469b52: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469b55: jp 0x469b59 */
  if (pf) goto L_469b59;
L_469b57: /* 469b57: fchs  */
  ST0 = -ST0;
L_469b59: /* 469b59: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469b5c: fcom st(2) */
  fpu_com(ST0, STI(2));
/* 469b5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469b60: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469b63: jp 0x469b67 */
  if (pf) goto L_469b67;
L_469b65: /* 469b65: fchs  */
  ST0 = -ST0;
L_469b67: /* 469b67: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469b69: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469b6b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469b6d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469b6f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469b72: jp 0x469bcd */
  if (pf) goto L_469bcd;
L_469b74: /* 469b74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469b76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b77: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469b7b: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 469b7d: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 469b80: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469b82: fadd qword ptr [ebp - 8] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469b85: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469b88: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469b8a: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469b8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469b90: call 0x467dfa */
  esp -= 4; W32(esp, 0x469b95u); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 469b95: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469b97: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469b99: jne 0x469bda */
  if (!zf) goto L_469bda;
L_469b9b: /* 469b9b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469b9e: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 469ba4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469ba6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ba9: jnp 0x469bda */
  if (!pf) goto L_469bda;
L_469bab: /* 469bab: fld1  */
  FPUSH(1.0);
/* 469bad: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469bb0: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469bb3: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 469bb6: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 469bb8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469bba: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469bbd: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 469bbf: fsubr qword ptr [esi + 8] */
  ST0 = (F64((uint32_t)(esi + 0x8u))) - ST0;
L_469bc2: /* 469bc2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 469bc4: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 469bc7: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 469bc9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469bcb: jmp 0x469be7 */
  goto L_469be7;
L_469bcd: /* 469bcd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 469bcf: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469bd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469bd3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469bd6: jp 0x469bec */
  if (pf) goto L_469bec;
L_469bd8: /* 469bd8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_469bda: /* 469bda: fld qword ptr [0x48e2f0] */
  { double v = F64((uint32_t)(0x48e2f0u)); FPUSH(v); }
/* 469be0: fstp qword ptr [esi] */
  WF64((uint32_t)(esi), ST0); FPOP();
/* 469be2: fld qword ptr [esi] */
  { double v = F64((uint32_t)(esi)); FPUSH(v); }
/* 469be4: fstp qword ptr [esi + 8] */
  WF64((uint32_t)(esi + 0x8u), ST0); FPOP();
L_469be7: /* 469be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469be8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469be9: ret 4 */
  esp += 8; SPILL(); return;
L_469bec: /* 469bec: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469bef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469bf0: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 469bf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469bf3: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 469bf6: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 469bf9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 469bfb: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 469bfe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469c00: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469c03: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469c06: call 0x467dfa */
  esp -= 4; W32(esp, 0x469c0bu); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 469c0b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469c0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469c0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469c0f: jne 0x469bda */
  if (!zf) goto L_469bda;
L_469c11: /* 469c11: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469c14: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 469c1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469c1c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469c1f: jnp 0x469bda */
  if (!pf) goto L_469bda;
L_469c21: /* 469c21: fld1  */
  FPUSH(1.0);
/* 469c23: fdiv qword ptr [ebp - 0x10] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 469c26: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469c29: fmul qword ptr [esi] */
  ST0 = ST0 * (F64((uint32_t)(esi)));
/* 469c2b: fadd qword ptr [esi + 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x8u)));
/* 469c2e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469c30: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 469c33: fmul qword ptr [esi + 8] */
  ST0 = ST0 * (F64((uint32_t)(esi + 0x8u)));
/* 469c36: fsub qword ptr [esi] */
  ST0 = ST0 - (F64((uint32_t)(esi)));
/* 469c38: jmp 0x469bc2 */
  goto L_469bc2;
}

void f_469c3a(void) {
  LOAD_REGS();
L_469c3a: /* 469c3a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469c3e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469c41: ret  */
  esp += 4; SPILL(); return;
}

void f_469c42(void) {
  LOAD_REGS();
L_469c42: /* 469c42: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469c46: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469c48: ret  */
  esp += 4; SPILL(); return;
}

void f_469c49(void) {
  LOAD_REGS();
L_469c49: /* 469c49: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469c4a: mov ebp, esp */
  ebp = esp;
/* 469c4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469c4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469c4e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469c51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469c52: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 469c55: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 469c58: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469c5b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469c5d: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 469c60: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 469c63: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469c67: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469c6a: call 0x467fb5 */
  esp -= 4; W32(esp, 0x469c6fu); SPILL(); f_467fb5(); if (g_unwind) return; RELOAD();
/* 469c6f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469c71: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469c72: jne 0x469de4 */
  if (!zf) goto L_469de4;
L_469c78: /* 469c78: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469c7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469c7c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469c7f: call 0x467fb5 */
  esp -= 4; W32(esp, 0x469c84u); SPILL(); f_467fb5(); if (g_unwind) return; RELOAD();
/* 469c84: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469c86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469c87: jne 0x469de4 */
  if (!zf) goto L_469de4;
L_469c8d: /* 469c8d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469c90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469c91: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469c94: call 0x467fc9 */
  esp -= 4; W32(esp, 0x469c99u); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 469c99: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469c9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469c9c: je 0x469ca6 */
  if (zf) goto L_469ca6;
L_469c9e: /* 469c9e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469ca1: jmp 0x469dea */
  goto L_469dea;
L_469ca6: /* 469ca6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469ca9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469caa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469cad: call 0x467fc9 */
  esp -= 4; W32(esp, 0x469cb2u); SPILL(); f_467fc9(); if (g_unwind) return; RELOAD();
/* 469cb2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 469cb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469cb5: je 0x469cbf */
  if (zf) goto L_469cbf;
L_469cb7: /* 469cb7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469cba: jmp 0x469dea */
  goto L_469dea;
L_469cbf: /* 469cbf: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 469cc2: fcom dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
/* 469cc8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469cca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ccd: jp 0x469cd5 */
  if (pf) goto L_469cd5;
L_469ccf: /* 469ccf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 469cd1: fchs  */
  ST0 = -ST0;
/* 469cd3: fstp st(1) */
  STI(1) = ST0; FPOP();
L_469cd5: /* 469cd5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469cd8: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 469cde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469ce0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ce3: jp 0x469ced */
  if (pf) goto L_469ced;
L_469ce5: /* 469ce5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469ce8: fchs  */
  ST0 = -ST0;
/* 469cea: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
L_469ced: /* 469ced: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 469cf0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469cf2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469cf5: jp 0x469d03 */
  if (pf) goto L_469d03;
L_469cf7: /* 469cf7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 469cfa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469cfd: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469d00: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_469d03: /* 469d03: fcom dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
/* 469d09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469d0b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469d0e: jnp 0x469dea */
  if (!pf) goto L_469dea;
L_469d14: /* 469d14: fld1  */
  FPUSH(1.0);
/* 469d16: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 469d18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469d1a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469d1d: jp 0x469d39 */
  if (pf) goto L_469d39;
L_469d1f: /* 469d1f: fmul dword ptr [0x4c8e74] */
  ST0 = ST0 * (F32((uint32_t)(0x4c8e74u)));
/* 469d25: mov dword ptr [esi], 2 */
  W32((uint32_t)(esi), 0x2u);
/* 469d2b: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 469d2e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469d31: fmul dword ptr [0x4c8e74] */
  ST0 = ST0 * (F32((uint32_t)(0x4c8e74u)));
/* 469d37: jmp 0x469d51 */
  goto L_469d51;
L_469d39: /* 469d39: fmul dword ptr [0x4c8e70] */
  ST0 = ST0 * (F32((uint32_t)(0x4c8e70u)));
/* 469d3f: mov dword ptr [esi], 0xfffffffe */
  W32((uint32_t)(esi), 0xfffffffeu);
/* 469d45: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 469d48: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469d4b: fmul dword ptr [0x4c8e70] */
  ST0 = ST0 * (F32((uint32_t)(0x4c8e70u)));
L_469d51: /* 469d51: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 469d54: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469d57: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 469d59: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 469d5c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 469d5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469d60: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469d63: jnp 0x469dea */
  if (!pf) goto L_469dea;
L_469d69: /* 469d69: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 469d6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469d6d: fcomp dword ptr [ebp - 4] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffffcu)));
  FPOP();
/* 469d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469d71: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469d73: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469d76: jp 0x469d9f */
  if (pf) goto L_469d9f;
L_469d78: /* 469d78: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 469d7b: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 469d7e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 469d80: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469d82: fadd dword ptr [0x4c8e6c] */
  ST0 = ST0 + (F32((uint32_t)(0x4c8e6cu)));
/* 469d88: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469d8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469d8d: call 0x48bf0e */
  esp -= 4; W32(esp, 0x469d92u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 469d92: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
L_469d95: /* 469d95: fdivr dword ptr [ebp + 0xc] */
  ST0 = (F32((uint32_t)(ebp + 0xcu))) / ST0;
/* 469d98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469d99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469d9a: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 469d9d: jmp 0x469dea */
  goto L_469dea;
L_469d9f: /* 469d9f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469da1: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469da4: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 469da7: fst dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0);
/* 469daa: fld dword ptr [0x4c8e68] */
  { double v = F32((uint32_t)(0x4c8e68u)); FPUSH(v); }
/* 469db0: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 469db2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469db4: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 469db7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469db9: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469dbc: fadd dword ptr [0x4c8e68] */
  ST0 = ST0 + (F32((uint32_t)(0x4c8e68u)));
/* 469dc2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469dc5: call 0x48bf0e */
  esp -= 4; W32(esp, 0x469dcau); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 469dca: fadd dword ptr [0x48e250] */
  ST0 = ST0 + (F32((uint32_t)(0x48e250u)));
/* 469dd0: fdivr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) / ST0;
/* 469dd3: fadd dword ptr [0x48e24c] */
  ST0 = ST0 + (F32((uint32_t)(0x48e24cu)));
/* 469dd9: fadd dword ptr [0x48e248] */
  ST0 = ST0 + (F32((uint32_t)(0x48e248u)));
/* 469ddf: fadd dword ptr [ebp - 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffff8u)));
/* 469de2: jmp 0x469d95 */
  goto L_469d95;
L_469de4: /* 469de4: fld dword ptr [0x48e3d0] */
  { double v = F32((uint32_t)(0x48e3d0u)); FPUSH(v); }
L_469dea: /* 469dea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 469deb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469dec: ret  */
  esp += 4; SPILL(); return;
}

void f_469ded(void) {
  LOAD_REGS();
L_469ded: /* 469ded: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469dee: mov ebp, esp */
  ebp = esp;
/* 469df0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469df1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469df2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 469df5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469df7: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 469dfa: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469dfd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 469e00: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 469e03: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 469e05: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469e08: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 469e0b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469e0e: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 469e11: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 469e13: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469e14: ret  */
  esp += 4; SPILL(); return;
}

void f_469e15(void) {
  LOAD_REGS();
L_469e15: /* 469e15: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469e16: mov ebp, esp */
  ebp = esp;
/* 469e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 469e1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469e1f: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 469e22: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469e25: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 469e28: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 469e2b: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 469e2d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469e30: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 469e33: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469e36: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 469e39: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 469e3b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469e3c: ret  */
  esp += 4; SPILL(); return;
}

void f_469e3d(void) {
  LOAD_REGS();
L_469e3d: /* 469e3d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469e3e: mov ebp, esp */
  ebp = esp;
/* 469e40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e42: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 469e45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469e47: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469e4a: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 469e4d: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469e50: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 469e53: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 469e56: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 469e58: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469e5b: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 469e5e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 469e61: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 469e63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469e66: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 469e68: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 469e6b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 469e6e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 469e71: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469e72: ret  */
  esp += 4; SPILL(); return;
}

void f_469e73(void) {
  LOAD_REGS();
L_469e73: /* 469e73: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469e74: mov ebp, esp */
  ebp = esp;
/* 469e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469e78: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 469e7b: fld1  */
  FPUSH(1.0);
/* 469e7d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 469e7f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 469e82: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 469e85: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 469e88: fdiv dword ptr [eax] */
  ST0 = ST0 / (F32((uint32_t)(eax)));
/* 469e8a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469e8d: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 469e90: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 469e93: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469e95: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469e98: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 469e9b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 469e9d: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* 469ea0: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 469ea3: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 469ea6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 469ea9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469eaa: ret  */
  esp += 4; SPILL(); return;
}

void f_469eab(void) {
  LOAD_REGS();
L_469eab: /* 469eab: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 469eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 469eb1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469eb5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 469eb7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 469eba: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 469ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_469ebe(void) {
  LOAD_REGS();
L_469ebe: /* 469ebe: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 469ec2: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 469ec4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 469ec8: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 469eca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469ecc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ecf: jp 0x469ee4 */
  if (pf) goto L_469ee4;
L_469ed1: /* 469ed1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 469ed4: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 469ed7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469ed9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469edb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ede: jp 0x469ee4 */
  if (pf) goto L_469ee4;
L_469ee0: /* 469ee0: xor eax, eax */
  eax = 0;
/* 469ee2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469ee3: ret  */
  esp += 4; SPILL(); return;
L_469ee4: /* 469ee4: xor eax, eax */
  eax = 0;
/* 469ee6: ret  */
  esp += 4; SPILL(); return;
}

void f_469ee7(void) {
  LOAD_REGS();
L_469ee7: /* 469ee7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 469eeb: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 469eef: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 469ef1: fcomp dword ptr [eax] */
  fpu_com(ST0, F32((uint32_t)(eax)));
  FPOP();
/* 469ef3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469ef5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469ef8: jp 0x469f0e */
  if (pf) goto L_469f0e;
L_469efa: /* 469efa: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 469efd: fcomp dword ptr [0x48e244] */
  fpu_com(ST0, F32((uint32_t)(0x48e244u)));
  FPOP();
/* 469f03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469f05: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469f08: jp 0x469f0e */
  if (pf) goto L_469f0e;
L_469f0a: /* 469f0a: xor eax, eax */
  eax = 0;
/* 469f0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469f0d: ret  */
  esp += 4; SPILL(); return;
L_469f0e: /* 469f0e: xor eax, eax */
  eax = 0;
/* 469f10: ret  */
  esp += 4; SPILL(); return;
}

void f_469f11(void) {
  LOAD_REGS();
L_469f11: /* 469f11: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469f15: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469f17: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 469f1b: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 469f1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469f1f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469f22: jp 0x469f36 */
  if (pf) goto L_469f36;
L_469f24: /* 469f24: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 469f27: fldz  */
  FPUSH(0.0);
/* 469f29: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 469f2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 469f2d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 469f30: jp 0x469f36 */
  if (pf) goto L_469f36;
L_469f32: /* 469f32: xor eax, eax */
  eax = 0;
/* 469f34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469f35: ret  */
  esp += 4; SPILL(); return;
L_469f36: /* 469f36: xor eax, eax */
  eax = 0;
/* 469f38: ret  */
  esp += 4; SPILL(); return;
}

void f_469f39(void) {
  LOAD_REGS();
L_469f39: /* 469f39: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f3d: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f41: call 0x469ebe */
  esp -= 4; W32(esp, 0x469f46u); SPILL(); f_469ebe(); if (g_unwind) return; RELOAD();
/* 469f46: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 469f48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f49: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f4a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 469f4c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469f4d: ret  */
  esp += 4; SPILL(); return;
}

void f_469f4e(void) {
  LOAD_REGS();
L_469f4e: /* 469f4e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f52: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f56: call 0x469ee7 */
  esp -= 4; W32(esp, 0x469f5bu); SPILL(); f_469ee7(); if (g_unwind) return; RELOAD();
/* 469f5b: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 469f5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f5f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 469f61: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469f62: ret  */
  esp += 4; SPILL(); return;
}

void f_469f63(void) {
  LOAD_REGS();
L_469f63: /* 469f63: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f67: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f6b: call 0x469f11 */
  esp -= 4; W32(esp, 0x469f70u); SPILL(); f_469f11(); if (g_unwind) return; RELOAD();
/* 469f70: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 469f72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f74: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 469f76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 469f77: ret  */
  esp += 4; SPILL(); return;
}

void f_469f78(void) {
  LOAD_REGS();
L_469f78: /* 469f78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469f79: mov ebp, esp */
  ebp = esp;
/* 469f7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469f7c: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 469f7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 469f80: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 469f83: call 0x469c49 */
  esp -= 4; W32(esp, 0x469f88u); SPILL(); f_469c49(); if (g_unwind) return; RELOAD();
/* 469f88: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 469f8c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f8e: je 0x469f9e */
  if (zf) goto L_469f9e;
L_469f90: /* 469f90: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 469f93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469f94: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469f97: call 0x467cd5 */
  esp -= 4; W32(esp, 0x469f9cu); SPILL(); f_467cd5(); if (g_unwind) return; RELOAD();
/* 469f9c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469f9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_469f9e: /* 469f9e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 469f9f: ret  */
  esp += 4; SPILL(); return;
}

void f_469fa0(void) {
  LOAD_REGS();
L_469fa0: /* 469fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469fa4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469fa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469fa8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 469fac: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469faf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 469fb2: call 0x467ff8 */
  esp -= 4; W32(esp, 0x469fb7u); SPILL(); f_467ff8(); if (g_unwind) return; RELOAD();
/* 469fb7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469fb8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 469fb9: ret  */
  esp += 4; SPILL(); return;
}

void f_469fba(void) {
  LOAD_REGS();
L_469fba: /* 469fba: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469fbe: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 469fc1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 469fc3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 469fc5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 469fc7: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 469fc9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 469fcb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 469fcd: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 469fcf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 469fd1: ret  */
  esp += 4; SPILL(); return;
}

void f_469fd2(void) {
  LOAD_REGS();
L_469fd2: /* 469fd2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 469fd6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 469fd8: ret  */
  esp += 4; SPILL(); return;
}

void f_469fd9(void) {
  LOAD_REGS();
L_469fd9: /* 469fd9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 469fda: mov ebp, esp */
  ebp = esp;
/* 469fdc: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 469fdf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 469fe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 469fe3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 469fe6: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 469fe9: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 469feb: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 469fee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469fef: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 469ff2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 469ff3: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 469ff6: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 469ff9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 469ffc: call 0x467efe */
  esp -= 4; W32(esp, 0x46a001u); SPILL(); f_467efe(); if (g_unwind) return; RELOAD();
/* 46a001: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a003: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a004: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a005: jne 0x46a17d */
  if (!zf) goto L_46a17d;
L_46a00b: /* 46a00b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a00e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a00f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a010: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a013: call 0x467efe */
  esp -= 4; W32(esp, 0x46a018u); SPILL(); f_467efe(); if (g_unwind) return; RELOAD();
/* 46a018: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a01a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a01b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a01c: jne 0x46a17d */
  if (!zf) goto L_46a17d;
L_46a022: /* 46a022: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a027: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a02a: call 0x467f12 */
  esp -= 4; W32(esp, 0x46a02fu); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 46a02f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a032: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a033: je 0x46a03d */
  if (zf) goto L_46a03d;
L_46a035: /* 46a035: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a038: jmp 0x46a183 */
  goto L_46a183;
L_46a03d: /* 46a03d: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a040: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a041: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a042: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a045: call 0x467f12 */
  esp -= 4; W32(esp, 0x46a04au); SPILL(); f_467f12(); if (g_unwind) return; RELOAD();
/* 46a04a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a04c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a04d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a04e: je 0x46a058 */
  if (zf) goto L_46a058;
L_46a050: /* 46a050: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a053: jmp 0x46a183 */
  goto L_46a183;
L_46a058: /* 46a058: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a05b: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 46a061: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a063: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a066: jp 0x46a06e */
  if (pf) goto L_46a06e;
L_46a068: /* 46a068: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46a06a: fchs  */
  ST0 = -ST0;
/* 46a06c: fstp st(1) */
  STI(1) = ST0; FPOP();
L_46a06e: /* 46a06e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a071: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46a077: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a079: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a07c: jp 0x46a086 */
  if (pf) goto L_46a086;
L_46a07e: /* 46a07e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a081: fchs  */
  ST0 = -ST0;
/* 46a083: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46a086: /* 46a086: fcom qword ptr [ebp - 8] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a08b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a08e: jp 0x46a09c */
  if (pf) goto L_46a09c;
L_46a090: /* 46a090: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46a093: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a096: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a099: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46a09c: /* 46a09c: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 46a0a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a0a4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a0a7: jnp 0x46a183 */
  if (!pf) goto L_46a183;
L_46a0ad: /* 46a0ad: fld1  */
  FPUSH(1.0);
/* 46a0af: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 46a0b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a0b3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a0b6: jp 0x46a0d2 */
  if (pf) goto L_46a0d2;
L_46a0b8: /* 46a0b8: fmul qword ptr [0x4c8e90] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e90u)));
/* 46a0be: mov dword ptr [esi], 2 */
  W32((uint32_t)(esi), 0x2u);
/* 46a0c4: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46a0c7: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a0ca: fmul qword ptr [0x4c8e90] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e90u)));
/* 46a0d0: jmp 0x46a0ea */
  goto L_46a0ea;
L_46a0d2: /* 46a0d2: fmul qword ptr [0x4c8e88] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e88u)));
/* 46a0d8: mov dword ptr [esi], 0xfffffffe */
  W32((uint32_t)(esi), 0xfffffffeu);
/* 46a0de: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46a0e1: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a0e4: fmul qword ptr [0x4c8e88] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e88u)));
L_46a0ea: /* 46a0ea: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46a0ed: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a0f0: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 46a0f2: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46a0f5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 46a0f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a0f9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a0fc: jnp 0x46a183 */
  if (!pf) goto L_46a183;
L_46a102: /* 46a102: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a106: fcomp qword ptr [ebp - 0x18] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 46a109: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a10a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a10c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a10f: jp 0x46a138 */
  if (pf) goto L_46a138;
L_46a111: /* 46a111: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a114: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46a117: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46a119: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a11b: fadd qword ptr [0x4c8e80] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e80u)));
/* 46a121: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a124: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a126: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46a12bu); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46a12b: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
L_46a12e: /* 46a12e: fdivr qword ptr [ebp - 8] */
  ST0 = (F64((uint32_t)(ebp + 0xfffffff8u))) / ST0;
/* 46a131: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a132: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a133: fadd qword ptr [ebp - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 46a136: jmp 0x46a183 */
  goto L_46a183;
L_46a138: /* 46a138: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a13a: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a13d: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a140: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 46a143: fld qword ptr [0x4c8e78] */
  { double v = F64((uint32_t)(0x4c8e78u)); FPUSH(v); }
/* 46a149: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46a14b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a14d: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46a150: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a152: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a155: fadd qword ptr [0x4c8e78] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e78u)));
/* 46a15b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a15e: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46a163u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46a163: fadd qword ptr [0x48e268] */
  ST0 = ST0 + (F64((uint32_t)(0x48e268u)));
/* 46a169: fdivr qword ptr [ebp - 0x18] */
  ST0 = (F64((uint32_t)(ebp + 0xffffffe8u))) / ST0;
/* 46a16c: fadd qword ptr [0x48e260] */
  ST0 = ST0 + (F64((uint32_t)(0x48e260u)));
/* 46a172: fadd qword ptr [0x48e258] */
  ST0 = ST0 + (F64((uint32_t)(0x48e258u)));
/* 46a178: fadd qword ptr [ebp - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe0u)));
/* 46a17b: jmp 0x46a12e */
  goto L_46a12e;
L_46a17d: /* 46a17d: fld qword ptr [0x48e360] */
  { double v = F64((uint32_t)(0x48e360u)); FPUSH(v); }
L_46a183: /* 46a183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a184: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a185: ret  */
  esp += 4; SPILL(); return;
}

void f_46a186(void) {
  LOAD_REGS();
L_46a186: /* 46a186: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a187: mov ebp, esp */
  ebp = esp;
/* 46a189: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a18c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a18d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46a190: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46a193: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a194: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a197: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a198: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a199: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a19a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a19b: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a19e: fsub qword ptr [eax] */
  ST0 = ST0 - (F64((uint32_t)(eax)));
/* 46a1a0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a1a3: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a1a6: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46a1a9: mov edi, eax */
  edi = eax;
/* 46a1ab: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1ac: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1ad: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1ae: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a1b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a1b1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a1b2: ret  */
  esp += 4; SPILL(); return;
}

void f_46a1b3(void) {
  LOAD_REGS();
L_46a1b3: /* 46a1b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a1b4: mov ebp, esp */
  ebp = esp;
/* 46a1b6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a1b9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46a1bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a1bd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46a1c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a1c1: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a1c4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1c5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1c6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1c7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1c8: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a1cb: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 46a1cd: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a1d0: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46a1d3: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a1d6: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 46a1d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a1db: mov edi, eax */
  edi = eax;
/* 46a1dd: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46a1e0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1e1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1e2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1e3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a1e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a1e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a1e6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a1e7: ret  */
  esp += 4; SPILL(); return;
}

void f_46a1e8(void) {
  LOAD_REGS();
L_46a1e8: /* 46a1e8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a1ec: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46a1f0: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a1f2: fcomp qword ptr [eax] */
  fpu_com(ST0, F64((uint32_t)(eax)));
  FPOP();
/* 46a1f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a1f6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a1f9: jp 0x46a20f */
  if (pf) goto L_46a20f;
L_46a1fb: /* 46a1fb: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a1fe: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46a204: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a206: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a209: jp 0x46a20f */
  if (pf) goto L_46a20f;
L_46a20b: /* 46a20b: xor eax, eax */
  eax = 0;
/* 46a20d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a20e: ret  */
  esp += 4; SPILL(); return;
L_46a20f: /* 46a20f: xor eax, eax */
  eax = 0;
/* 46a211: ret  */
  esp += 4; SPILL(); return;
}

void f_46a212(void) {
  LOAD_REGS();
L_46a212: /* 46a212: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a216: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a218: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46a21c: fcomp qword ptr [ecx] */
  fpu_com(ST0, F64((uint32_t)(ecx)));
  FPOP();
/* 46a21e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a220: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a223: jp 0x46a237 */
  if (pf) goto L_46a237;
L_46a225: /* 46a225: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a228: fldz  */
  FPUSH(0.0);
/* 46a22a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 46a22c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a22e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a231: jp 0x46a237 */
  if (pf) goto L_46a237;
L_46a233: /* 46a233: xor eax, eax */
  eax = 0;
/* 46a235: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a236: ret  */
  esp += 4; SPILL(); return;
L_46a237: /* 46a237: xor eax, eax */
  eax = 0;
/* 46a239: ret  */
  esp += 4; SPILL(); return;
}

void f_46a23a(void) {
  LOAD_REGS();
L_46a23a: /* 46a23a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a23e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a242: call 0x46a4eb */
  esp -= 4; W32(esp, 0x46a247u); SPILL(); f_46a4eb(); if (g_unwind) return; RELOAD();
/* 46a247: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46a249: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a24a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a24b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46a24d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a24e: ret  */
  esp += 4; SPILL(); return;
}

void f_46a24f(void) {
  LOAD_REGS();
L_46a24f: /* 46a24f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a253: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a257: call 0x46a1e8 */
  esp -= 4; W32(esp, 0x46a25cu); SPILL(); f_46a1e8(); if (g_unwind) return; RELOAD();
/* 46a25c: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46a25e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a25f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a260: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46a262: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a263: ret  */
  esp += 4; SPILL(); return;
}

void f_46a264(void) {
  LOAD_REGS();
L_46a264: /* 46a264: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a268: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a26c: call 0x46a212 */
  esp -= 4; W32(esp, 0x46a271u); SPILL(); f_46a212(); if (g_unwind) return; RELOAD();
/* 46a271: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46a273: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a274: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a275: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46a277: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a278: ret  */
  esp += 4; SPILL(); return;
}

void f_46a279(void) {
  LOAD_REGS();
L_46a279: /* 46a279: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a27a: mov ebp, esp */
  ebp = esp;
/* 46a27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a27d: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46a280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46a281: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a284: call 0x469fd9 */
  esp -= 4; W32(esp, 0x46a289u); SPILL(); f_469fd9(); if (g_unwind) return; RELOAD();
/* 46a289: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a28d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a28e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a28f: je 0x46a2a1 */
  if (zf) goto L_46a2a1;
L_46a291: /* 46a291: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 46a294: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a296: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a299: call 0x467f4a */
  esp -= 4; W32(esp, 0x46a29eu); SPILL(); f_467f4a(); if (g_unwind) return; RELOAD();
/* 46a29e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46a2a1: /* 46a2a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a2a2: ret  */
  esp += 4; SPILL(); return;
}

void f_46a2a3(void) {
  LOAD_REGS();
L_46a2a3: /* 46a2a3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a2a7: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a2a9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a2ac: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46a2b0: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46a2b3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a2b6: call 0x467c9f */
  esp -= 4; W32(esp, 0x46a2bbu); SPILL(); f_467c9f(); if (g_unwind) return; RELOAD();
/* 46a2bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46a2be: ret  */
  esp += 4; SPILL(); return;
}

void f_46a2bf(void) {
  LOAD_REGS();
L_46a2bf: /* 46a2bf: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a2c3: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46a2c6: ret  */
  esp += 4; SPILL(); return;
}

void f_46a2c7(void) {
  LOAD_REGS();
L_46a2c7: /* 46a2c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a2c8: mov ebp, esp */
  ebp = esp;
/* 46a2ca: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a2cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a2d1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46a2d4: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 46a2d7: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a2d9: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46a2dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a2dd: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46a2e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a2e1: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46a2e4: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a2e7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a2ea: call 0x467de6 */
  esp -= 4; W32(esp, 0x46a2efu); SPILL(); f_467de6(); if (g_unwind) return; RELOAD();
/* 46a2ef: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a2f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a2f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a2f3: jne 0x46a46b */
  if (!zf) goto L_46a46b;
L_46a2f9: /* 46a2f9: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a2fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a2fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a2fe: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a301: call 0x467de6 */
  esp -= 4; W32(esp, 0x46a306u); SPILL(); f_467de6(); if (g_unwind) return; RELOAD();
/* 46a306: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a308: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a309: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a30a: jne 0x46a46b */
  if (!zf) goto L_46a46b;
L_46a310: /* 46a310: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a314: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a315: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a318: call 0x467dfa */
  esp -= 4; W32(esp, 0x46a31du); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 46a31d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a31f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a320: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a321: je 0x46a32b */
  if (zf) goto L_46a32b;
L_46a323: /* 46a323: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a326: jmp 0x46a471 */
  goto L_46a471;
L_46a32b: /* 46a32b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a32e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a32f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a330: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a333: call 0x467dfa */
  esp -= 4; W32(esp, 0x46a338u); SPILL(); f_467dfa(); if (g_unwind) return; RELOAD();
/* 46a338: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a33a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a33b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a33c: je 0x46a346 */
  if (zf) goto L_46a346;
L_46a33e: /* 46a33e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a341: jmp 0x46a471 */
  goto L_46a471;
L_46a346: /* 46a346: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a349: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 46a34f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a351: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a354: jp 0x46a35c */
  if (pf) goto L_46a35c;
L_46a356: /* 46a356: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46a358: fchs  */
  ST0 = -ST0;
/* 46a35a: fstp st(1) */
  STI(1) = ST0; FPOP();
L_46a35c: /* 46a35c: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a35f: fcomp qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
  FPOP();
/* 46a365: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a367: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a36a: jp 0x46a374 */
  if (pf) goto L_46a374;
L_46a36c: /* 46a36c: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a36f: fchs  */
  ST0 = -ST0;
/* 46a371: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46a374: /* 46a374: fcom qword ptr [ebp - 8] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a377: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a379: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a37c: jp 0x46a38a */
  if (pf) goto L_46a38a;
L_46a37e: /* 46a37e: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46a381: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a384: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a387: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
L_46a38a: /* 46a38a: fcom qword ptr [0x4c8e60] */
  fpu_com(ST0, F64((uint32_t)(0x4c8e60u)));
/* 46a390: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a392: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a395: jnp 0x46a471 */
  if (!pf) goto L_46a471;
L_46a39b: /* 46a39b: fld1  */
  FPUSH(1.0);
/* 46a39d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 46a39f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a3a1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a3a4: jp 0x46a3c0 */
  if (pf) goto L_46a3c0;
L_46a3a6: /* 46a3a6: fmul qword ptr [0x4c8e90] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e90u)));
/* 46a3ac: mov dword ptr [esi], 2 */
  W32((uint32_t)(esi), 0x2u);
/* 46a3b2: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46a3b5: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a3b8: fmul qword ptr [0x4c8e90] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e90u)));
/* 46a3be: jmp 0x46a3d8 */
  goto L_46a3d8;
L_46a3c0: /* 46a3c0: fmul qword ptr [0x4c8e88] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e88u)));
/* 46a3c6: mov dword ptr [esi], 0xfffffffe */
  W32((uint32_t)(esi), 0xfffffffeu);
/* 46a3cc: fst qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0);
/* 46a3cf: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a3d2: fmul qword ptr [0x4c8e88] */
  ST0 = ST0 * (F64((uint32_t)(0x4c8e88u)));
L_46a3d8: /* 46a3d8: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46a3db: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a3de: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 46a3e0: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46a3e3: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 46a3e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a3e7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a3ea: jnp 0x46a471 */
  if (!pf) goto L_46a471;
L_46a3f0: /* 46a3f0: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 46a3f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a3f4: fcomp qword ptr [ebp - 0x18] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 46a3f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a3f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a3fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a3fd: jp 0x46a426 */
  if (pf) goto L_46a426;
L_46a3ff: /* 46a3ff: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a402: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 46a405: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46a407: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a409: fadd qword ptr [0x4c8e80] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e80u)));
/* 46a40f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a412: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a414: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46a419u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46a419: fadd qword ptr [ebp - 0x18] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe8u)));
L_46a41c: /* 46a41c: fdivr qword ptr [ebp - 8] */
  ST0 = (F64((uint32_t)(ebp + 0xfffffff8u))) / ST0;
/* 46a41f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a420: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a421: fadd qword ptr [ebp - 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 46a424: jmp 0x46a471 */
  goto L_46a471;
L_46a426: /* 46a426: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a428: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a42b: fdiv qword ptr [ebp - 8] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a42e: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 46a431: fld qword ptr [0x4c8e78] */
  { double v = F64((uint32_t)(0x4c8e78u)); FPUSH(v); }
/* 46a437: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 46a439: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a43b: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 46a43e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a440: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 46a443: fadd qword ptr [0x4c8e78] */
  ST0 = ST0 + (F64((uint32_t)(0x4c8e78u)));
/* 46a449: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a44c: call 0x48bf0e */
  esp -= 4; W32(esp, 0x46a451u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 46a451: fadd qword ptr [0x48e268] */
  ST0 = ST0 + (F64((uint32_t)(0x48e268u)));
/* 46a457: fdivr qword ptr [ebp - 0x18] */
  ST0 = (F64((uint32_t)(ebp + 0xffffffe8u))) / ST0;
/* 46a45a: fadd qword ptr [0x48e260] */
  ST0 = ST0 + (F64((uint32_t)(0x48e260u)));
/* 46a460: fadd qword ptr [0x48e258] */
  ST0 = ST0 + (F64((uint32_t)(0x48e258u)));
/* 46a466: fadd qword ptr [ebp - 0x20] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0xffffffe0u)));
/* 46a469: jmp 0x46a41c */
  goto L_46a41c;
L_46a46b: /* 46a46b: fld qword ptr [0x48e2e0] */
  { double v = F64((uint32_t)(0x48e2e0u)); FPUSH(v); }
L_46a471: /* 46a471: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a472: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a473: ret  */
  esp += 4; SPILL(); return;
}

void f_46a474(void) {
  LOAD_REGS();
L_46a474: /* 46a474: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a475: mov ebp, esp */
  ebp = esp;
/* 46a477: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a47a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a47b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46a47e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46a481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a482: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a485: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a486: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a487: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a488: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a489: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a48c: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 46a48e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a491: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a494: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46a497: mov edi, eax */
  edi = eax;
/* 46a499: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a49a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a49b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a49c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a49d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a49e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a49f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a4a0: ret  */
  esp += 4; SPILL(); return;
}

void f_46a4a1(void) {
  LOAD_REGS();
L_46a4a1: /* 46a4a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a4a2: mov ebp, esp */
  ebp = esp;
/* 46a4a4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a4a7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46a4aa: fld1  */
  FPUSH(1.0);
/* 46a4ac: fdiv qword ptr [eax] */
  ST0 = ST0 / (F64((uint32_t)(eax)));
/* 46a4ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a4af: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 46a4b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a4b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a4b6: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a4b9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4ba: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4bb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4bc: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4bd: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 46a4c0: mov edi, eax */
  edi = eax;
/* 46a4c2: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 46a4c5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a4c7: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 46a4ca: fmul qword ptr [ebp - 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xfffffff8u)));
/* 46a4cd: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 46a4d0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4d1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4d2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4d3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a4d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a4d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a4d7: ret  */
  esp += 4; SPILL(); return;
}

void f_46a4d8(void) {
  LOAD_REGS();
L_46a4d8: /* 46a4d8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a4dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a4dd: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 46a4e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a4e2: mov edi, eax */
  edi = eax;
/* 46a4e4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4e5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4e6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4e7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46a4e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a4e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a4ea: ret  */
  esp += 4; SPILL(); return;
}

void f_46a4eb(void) {
  LOAD_REGS();
L_46a4eb: /* 46a4eb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a4ef: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a4f1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 46a4f5: fcomp qword ptr [edx] */
  fpu_com(ST0, F64((uint32_t)(edx)));
  FPOP();
/* 46a4f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a4f9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a4fc: jp 0x46a511 */
  if (pf) goto L_46a511;
L_46a4fe: /* 46a4fe: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a501: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 46a504: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 46a506: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 46a508: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 46a50b: jp 0x46a511 */
  if (pf) goto L_46a511;
L_46a50d: /* 46a50d: xor eax, eax */
  eax = 0;
/* 46a50f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a510: ret  */
  esp += 4; SPILL(); return;
L_46a511: /* 46a511: xor eax, eax */
  eax = 0;
/* 46a513: ret  */
  esp += 4; SPILL(); return;
}

void f_46a514(void) {
  LOAD_REGS();
L_46a514: /* 46a514: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a515: mov ebp, esp */
  ebp = esp;
/* 46a517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a518: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46a51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46a51c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a51f: call 0x46a2c7 */
  esp -= 4; W32(esp, 0x46a524u); SPILL(); f_46a2c7(); if (g_unwind) return; RELOAD();
/* 46a524: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a528: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a529: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a52a: je 0x46a53c */
  if (zf) goto L_46a53c;
L_46a52c: /* 46a52c: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 46a52f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46a531: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a534: call 0x467e6f */
  esp -= 4; W32(esp, 0x46a539u); SPILL(); f_467e6f(); if (g_unwind) return; RELOAD();
/* 46a539: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46a53c: /* 46a53c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a53d: ret  */
  esp += 4; SPILL(); return;
}

void f_46a53e(void) {
  LOAD_REGS();
L_46a53e: /* 46a53e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a542: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a544: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a547: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 46a54b: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46a54e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46a551: call 0x467e32 */
  esp -= 4; W32(esp, 0x46a556u); SPILL(); f_467e32(); if (g_unwind) return; RELOAD();
/* 46a556: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46a559: ret  */
  esp += 4; SPILL(); return;
}

void f_46a55a(void) {
  LOAD_REGS();
L_46a55a: /* 46a55a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46a55e: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46a561: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a563: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46a565: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 46a567: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 46a569: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 46a56b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 46a56d: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 46a56f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 46a571: ret  */
  esp += 4; SPILL(); return;
}

void f_46a572(void) {
  LOAD_REGS();
L_46a572: /* 46a572: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a573: mov ebp, esp */
  ebp = esp;
/* 46a575: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 46a578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a579: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 46a57c: jmp 0x46a594 */
  goto L_46a594;
L_46a57e: /* 46a57e: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a581: je 0x46a5a8 */
  if (zf) goto L_46a5a8;
L_46a583: /* 46a583: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 46a586: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46a589: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46a58c: ja 0x46a59e */
  if ((!cf && !zf)) goto L_46a59e;
L_46a58e: /* 46a58e: jb 0x46a5a3 */
  if (cf) goto L_46a5a3;
L_46a590: /* 46a590: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 46a591: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 46a592: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46a593: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_46a594: /* 46a594: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a597: jne 0x46a57e */
  if (!zf) goto L_46a57e;
L_46a599: /* 46a599: cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a59c: je 0x46a5a8 */
  if (zf) goto L_46a5a8;
L_46a59e: /* 46a59e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46a5a1: jmp 0x46a5b0 */
  goto L_46a5b0;
L_46a5a3: /* 46a5a3: xor eax, eax */
  eax = 0;
/* 46a5a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46a5a6: jmp 0x46a5b0 */
  goto L_46a5b0;
L_46a5a8: /* 46a5a8: xor eax, eax */
  eax = 0;
/* 46a5aa: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a5ad: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
L_46a5b0: /* 46a5b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a5b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46a5b2: ret  */
  esp += 4; SPILL(); return;
}

void f_46a5b3(void) {
  LOAD_REGS();
L_46a5b3: /* 46a5b3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46a5b4: mov ebp, esp */
  ebp = esp;
/* 46a5b6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46a5b9: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46a5bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a5bd: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 46a5c0: sub esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 46a5c3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46a5c5: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 46a5c7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46a5c9: ja 0x46a5dd */
  if ((!cf && !zf)) goto L_46a5dd;
L_46a5cb: /* 46a5cb: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 46a5ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46a5cf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46a5d2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a5d5: call 0x4617bb */
  esp -= 4; W32(esp, 0x46a5dau); SPILL(); hle_memcpy(); RELOAD();
/* 46a5da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_46a5dd: /* 46a5dd: mov eax, esi */
  eax = esi;
/* 46a5df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a5e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46a5e1: ret  */
  esp += 4; SPILL(); return;
}

void f_46a5e2(void) {
  LOAD_REGS();
L_46a5e2: /* 46a5e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46a5e3: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46a5e7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a5eb: mov esi, ecx */
  esi = ecx;
/* 46a5ed: je 0x46a613 */
  if (zf) goto L_46a613;
L_46a5ef: /* 46a5ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a5f0: push 0x4697da */
  { uint32_t v = 0x4697dau; esp -= 4; W32(esp, v); }
/* 46a5f5: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46a5f8: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46a5fa: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 46a5fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a5fd: call 0x48be30 */
  esp -= 4; W32(esp, 0x46a602u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46a602: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a605: je 0x46a60e */
  if (zf) goto L_46a60e;
L_46a607: /* 46a607: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a608: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46a60du); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46a60d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a60e: /* 46a60e: mov eax, edi */
  eax = edi;
/* 46a610: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a611: jmp 0x46a628 */
  goto L_46a628;
L_46a613: /* 46a613: mov ecx, esi */
  ecx = esi;
/* 46a615: call 0x4697da */
  esp -= 4; W32(esp, 0x46a61au); SPILL(); f_4697da(); if (g_unwind) return; RELOAD();
/* 46a61a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a61d: je 0x46a626 */
  if (zf) goto L_46a626;
L_46a61f: /* 46a61f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a620: call 0x461c65 */
  esp -= 4; W32(esp, 0x46a625u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46a625: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a626: /* 46a626: mov eax, esi */
  eax = esi;
L_46a628: /* 46a628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a629: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46a62a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a62d(void) {
  LOAD_REGS();
L_46a62d: /* 46a62d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a62f: call 0x468774 */
  esp -= 4; W32(esp, 0x46a634u); SPILL(); f_468774(); if (g_unwind) return; RELOAD();
/* 46a634: ret  */
  esp += 4; SPILL(); return;
}

void f_46a635(void) {
  LOAD_REGS();
L_46a635: /* 46a635: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a637: call 0x4687d5 */
  esp -= 4; W32(esp, 0x46a63cu); SPILL(); f_4687d5(); if (g_unwind) return; RELOAD();
/* 46a63c: ret  */
  esp += 4; SPILL(); return;
}

void f_46a63d(void) {
  LOAD_REGS();
L_46a63d: /* 46a63d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a63f: call 0x468920 */
  esp -= 4; W32(esp, 0x46a644u); SPILL(); f_468920(); if (g_unwind) return; RELOAD();
/* 46a644: ret  */
  esp += 4; SPILL(); return;
}

void f_46a645(void) {
  LOAD_REGS();
L_46a645: /* 46a645: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a647: call 0x468a1d */
  esp -= 4; W32(esp, 0x46a64cu); SPILL(); f_468a1d(); if (g_unwind) return; RELOAD();
/* 46a64c: ret  */
  esp += 4; SPILL(); return;
}

void f_46a64d(void) {
  LOAD_REGS();
L_46a64d: /* 46a64d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a64f: call 0x468b1e */
  esp -= 4; W32(esp, 0x46a654u); SPILL(); f_468b1e(); if (g_unwind) return; RELOAD();
/* 46a654: ret  */
  esp += 4; SPILL(); return;
}

void f_46a655(void) {
  LOAD_REGS();
L_46a655: /* 46a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a657: call 0x468b82 */
  esp -= 4; W32(esp, 0x46a65cu); SPILL(); f_468b82(); if (g_unwind) return; RELOAD();
/* 46a65c: ret  */
  esp += 4; SPILL(); return;
}

void f_46a65d(void) {
  LOAD_REGS();
L_46a65d: /* 46a65d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46a65e: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46a662: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a666: mov esi, ecx */
  esi = ecx;
/* 46a668: je 0x46a68e */
  if (zf) goto L_46a68e;
L_46a66a: /* 46a66a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a66b: push 0x462e5d */
  { uint32_t v = 0x462e5du; esp -= 4; W32(esp, v); }
/* 46a670: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46a673: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46a675: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 46a677: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a678: call 0x48be30 */
  esp -= 4; W32(esp, 0x46a67du); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46a67d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a680: je 0x46a689 */
  if (zf) goto L_46a689;
L_46a682: /* 46a682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a683: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46a688u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46a688: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a689: /* 46a689: mov eax, edi */
  eax = edi;
/* 46a68b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a68c: jmp 0x46a6a3 */
  goto L_46a6a3;
L_46a68e: /* 46a68e: mov ecx, esi */
  ecx = esi;
/* 46a690: call 0x462e5d */
  esp -= 4; W32(esp, 0x46a695u); SPILL(); f_462e5d(); if (g_unwind) return; RELOAD();
/* 46a695: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a698: je 0x46a6a1 */
  if (zf) goto L_46a6a1;
L_46a69a: /* 46a69a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a69b: call 0x461c65 */
  esp -= 4; W32(esp, 0x46a6a0u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46a6a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a6a1: /* 46a6a1: mov eax, esi */
  eax = esi;
L_46a6a3: /* 46a6a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a6a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46a6a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a6a8(void) {
  LOAD_REGS();
L_46a6a8: /* 46a6a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46a6a9: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46a6ad: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a6b1: mov esi, ecx */
  esi = ecx;
/* 46a6b3: je 0x46a6d9 */
  if (zf) goto L_46a6d9;
L_46a6b5: /* 46a6b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a6b6: push 0x461c2d */
  { uint32_t v = 0x461c2du; esp -= 4; W32(esp, v); }
/* 46a6bb: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46a6be: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46a6c0: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 46a6c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a6c3: call 0x48be30 */
  esp -= 4; W32(esp, 0x46a6c8u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46a6c8: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a6cb: je 0x46a6d4 */
  if (zf) goto L_46a6d4;
L_46a6cd: /* 46a6cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a6ce: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46a6d3u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46a6d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a6d4: /* 46a6d4: mov eax, edi */
  eax = edi;
/* 46a6d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a6d7: jmp 0x46a6ee */
  goto L_46a6ee;
L_46a6d9: /* 46a6d9: mov ecx, esi */
  ecx = esi;
/* 46a6db: call 0x461c2d */
  esp -= 4; W32(esp, 0x46a6e0u); SPILL(); f_461c2d(); if (g_unwind) return; RELOAD();
/* 46a6e0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a6e3: je 0x46a6ec */
  if (zf) goto L_46a6ec;
L_46a6e5: /* 46a6e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a6e6: call 0x461c65 */
  esp -= 4; W32(esp, 0x46a6ebu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46a6eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a6ec: /* 46a6ec: mov eax, esi */
  eax = esi;
L_46a6ee: /* 46a6ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a6ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46a6f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a6f3(void) {
  LOAD_REGS();
L_46a6f3: /* 46a6f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46a6f4: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46a6f8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a6fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a6fc: mov esi, ecx */
  esi = ecx;
/* 46a6fe: je 0x46a724 */
  if (zf) goto L_46a724;
L_46a700: /* 46a700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a701: push 0x462de1 */
  { uint32_t v = 0x462de1u; esp -= 4; W32(esp, v); }
/* 46a706: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46a709: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46a70b: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 46a70d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a70e: call 0x48be30 */
  esp -= 4; W32(esp, 0x46a713u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46a713: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a716: je 0x46a71f */
  if (zf) goto L_46a71f;
L_46a718: /* 46a718: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a719: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46a71eu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46a71e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a71f: /* 46a71f: mov eax, edi */
  eax = edi;
/* 46a721: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a722: jmp 0x46a739 */
  goto L_46a739;
L_46a724: /* 46a724: mov ecx, esi */
  ecx = esi;
/* 46a726: call 0x462de1 */
  esp -= 4; W32(esp, 0x46a72bu); SPILL(); f_462de1(); if (g_unwind) return; RELOAD();
/* 46a72b: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a72e: je 0x46a737 */
  if (zf) goto L_46a737;
L_46a730: /* 46a730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a731: call 0x461c65 */
  esp -= 4; W32(esp, 0x46a736u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46a736: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a737: /* 46a737: mov eax, esi */
  eax = esi;
L_46a739: /* 46a739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a73a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46a73b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a73e(void) {
  LOAD_REGS();
L_46a73e: /* 46a73e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46a740: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46a743: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46a746: mov dword ptr [eax + ecx - 4], 0x4c7680 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c7680u);
/* 46a74e: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_46a753(void) {
  LOAD_REGS();
L_46a753: /* 46a753: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46a755: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46a758: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46a75b: mov dword ptr [eax + ecx - 4], 0x4c76d8 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c76d8u);
/* 46a763: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_46a768(void) {
  LOAD_REGS();
L_46a768: /* 46a768: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46a76a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46a76d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46a770: mov dword ptr [eax + ecx - 8], 0x4c7730 */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c7730u);
/* 46a778: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_46a77d(void) {
  LOAD_REGS();
L_46a77d: /* 46a77d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46a77f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46a782: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46a785: mov dword ptr [eax + ecx - 8], 0x4c7788 */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c7788u);
/* 46a78d: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_46a792(void) {
  LOAD_REGS();
L_46a792: /* 46a792: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a793: lea esi, [ecx + 0xc] */
  esi = (uint32_t)(ecx + 0xcu);
/* 46a796: mov ecx, esi */
  ecx = esi;
/* 46a798: call 0x4690e5 */
  esp -= 4; W32(esp, 0x46a79du); SPILL(); f_4690e5(); if (g_unwind) return; RELOAD();
/* 46a79d: mov ecx, esi */
  ecx = esi;
/* 46a79f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a7a0: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_46a7a5(void) {
  LOAD_REGS();
L_46a7a5: /* 46a7a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a7a6: lea esi, [ecx + 0xc] */
  esi = (uint32_t)(ecx + 0xcu);
/* 46a7a9: mov ecx, esi */
  ecx = esi;
/* 46a7ab: call 0x469198 */
  esp -= 4; W32(esp, 0x46a7b0u); SPILL(); f_469198(); if (g_unwind) return; RELOAD();
/* 46a7b0: mov ecx, esi */
  ecx = esi;
/* 46a7b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a7b3: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_46a7b8(void) {
  LOAD_REGS();
L_46a7b8: /* 46a7b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a7b9: lea esi, [ecx + 0xc] */
  esi = (uint32_t)(ecx + 0xcu);
/* 46a7bc: mov ecx, esi */
  ecx = esi;
/* 46a7be: call 0x46924b */
  esp -= 4; W32(esp, 0x46a7c3u); SPILL(); f_46924b(); if (g_unwind) return; RELOAD();
/* 46a7c3: mov ecx, esi */
  ecx = esi;
/* 46a7c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a7c6: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_46a7cb(void) {
  LOAD_REGS();
L_46a7cb: /* 46a7cb: mov eax, ecx */
  eax = ecx;
/* 46a7cd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a7d1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 46a7d3: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 46a7d5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46a7d7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 46a7da: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 46a7dd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46a7e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a7e3(void) {
  LOAD_REGS();
L_46a7e3: /* 46a7e3: mov eax, ecx */
  eax = ecx;
/* 46a7e5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 46a7e7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a7eb: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 46a7ed: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46a7ef: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 46a7f2: fsubr dword ptr [eax + 4] */
  ST0 = (F32((uint32_t)(eax + 0x4u))) - ST0;
/* 46a7f5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46a7f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a7fb(void) {
  LOAD_REGS();
L_46a7fb: /* 46a7fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a7fc: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a800: mov esi, ecx */
  esi = ecx;
/* 46a802: call 0x469829 */
  esp -= 4; W32(esp, 0x46a807u); SPILL(); f_469829(); if (g_unwind) return; RELOAD();
/* 46a807: mov eax, esi */
  eax = esi;
/* 46a809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a80a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a80d(void) {
  LOAD_REGS();
L_46a80d: /* 46a80d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a80e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a812: mov esi, ecx */
  esi = ecx;
/* 46a814: call 0x46985a */
  esp -= 4; W32(esp, 0x46a819u); SPILL(); f_46985a(); if (g_unwind) return; RELOAD();
/* 46a819: mov eax, esi */
  eax = esi;
/* 46a81b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a81c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a81f(void) {
  LOAD_REGS();
L_46a81f: /* 46a81f: fldz  */
  FPUSH(0.0);
/* 46a821: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 46a823: fldz  */
  FPUSH(0.0);
/* 46a825: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 46a828: ret  */
  esp += 4; SPILL(); return;
}

void f_46a829(void) {
  LOAD_REGS();
L_46a829: /* 46a829: mov eax, ecx */
  eax = ecx;
/* 46a82b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a82f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a831: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 46a833: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46a835: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a838: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 46a83b: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46a83e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a841(void) {
  LOAD_REGS();
L_46a841: /* 46a841: mov eax, ecx */
  eax = ecx;
/* 46a843: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46a845: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a849: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 46a84b: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46a84d: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a850: fsubr qword ptr [eax + 8] */
  ST0 = (F64((uint32_t)(eax + 0x8u))) - ST0;
/* 46a853: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46a856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a859(void) {
  LOAD_REGS();
L_46a859: /* 46a859: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a85a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a85e: mov esi, ecx */
  esi = ecx;
/* 46a860: call 0x4699be */
  esp -= 4; W32(esp, 0x46a865u); SPILL(); f_4699be(); if (g_unwind) return; RELOAD();
/* 46a865: mov eax, esi */
  eax = esi;
/* 46a867: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a868: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a86b(void) {
  LOAD_REGS();
L_46a86b: /* 46a86b: mov eax, ecx */
  eax = ecx;
/* 46a86d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a871: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a873: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46a877: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46a879: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a87b: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46a87e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46a881(void) {
  LOAD_REGS();
L_46a881: /* 46a881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a882: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a886: mov esi, ecx */
  esi = ecx;
/* 46a888: call 0x46998b */
  esp -= 4; W32(esp, 0x46a88du); SPILL(); f_46998b(); if (g_unwind) return; RELOAD();
/* 46a88d: mov eax, esi */
  eax = esi;
/* 46a88f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a890: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a893(void) {
  LOAD_REGS();
L_46a893: /* 46a893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a894: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a898: mov esi, ecx */
  esi = ecx;
/* 46a89a: call 0x469afc */
  esp -= 4; W32(esp, 0x46a89fu); SPILL(); f_469afc(); if (g_unwind) return; RELOAD();
/* 46a89f: mov eax, esi */
  eax = esi;
/* 46a8a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a8a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a8a5(void) {
  LOAD_REGS();
L_46a8a5: /* 46a8a5: fldz  */
  FPUSH(0.0);
/* 46a8a7: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 46a8a9: fldz  */
  FPUSH(0.0);
/* 46a8ab: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 46a8ae: ret  */
  esp += 4; SPILL(); return;
}

void f_46a8af(void) {
  LOAD_REGS();
L_46a8af: /* 46a8af: mov eax, ecx */
  eax = ecx;
/* 46a8b1: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a8b5: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a8b8: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a8ba: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 46a8bc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 46a8bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a8c2(void) {
  LOAD_REGS();
L_46a8c2: /* 46a8c2: mov eax, ecx */
  eax = ecx;
/* 46a8c4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a8c8: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 46a8cb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 46a8cd: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46a8cf: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46a8d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a8d5(void) {
  LOAD_REGS();
L_46a8d5: /* 46a8d5: mov eax, ecx */
  eax = ecx;
/* 46a8d7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46a8db: fld qword ptr [ecx + 8] */
  { double v = F64((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 46a8de: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46a8e0: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46a8e2: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 46a8e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a8e8(void) {
  LOAD_REGS();
L_46a8e8: /* 46a8e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46a8e9: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46a8ed: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a8f1: mov esi, ecx */
  esi = ecx;
/* 46a8f3: je 0x46a919 */
  if (zf) goto L_46a919;
L_46a8f5: /* 46a8f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a8f6: push 0x4697da */
  { uint32_t v = 0x4697dau; esp -= 4; W32(esp, v); }
/* 46a8fb: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46a8fe: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46a900: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46a902: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a903: call 0x48be30 */
  esp -= 4; W32(esp, 0x46a908u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46a908: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a90b: je 0x46a914 */
  if (zf) goto L_46a914;
L_46a90d: /* 46a90d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46a90e: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46a913u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46a913: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a914: /* 46a914: mov eax, edi */
  eax = edi;
/* 46a916: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46a917: jmp 0x46a92e */
  goto L_46a92e;
L_46a919: /* 46a919: mov ecx, esi */
  ecx = esi;
/* 46a91b: call 0x4697da */
  esp -= 4; W32(esp, 0x46a920u); SPILL(); f_4697da(); if (g_unwind) return; RELOAD();
/* 46a920: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46a923: je 0x46a92c */
  if (zf) goto L_46a92c;
L_46a925: /* 46a925: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a926: call 0x461c65 */
  esp -= 4; W32(esp, 0x46a92bu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46a92b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46a92c: /* 46a92c: mov eax, esi */
  eax = esi;
L_46a92e: /* 46a92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46a930: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a933(void) {
  LOAD_REGS();
L_46a933: /* 46a933: mov eax, 0x48c255 */
  eax = 0x48c255u;
/* 46a938: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46a93du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46a93d: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46a940: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46a943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a944: mov esi, ecx */
  esi = ecx;
/* 46a946: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46a949: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46a94c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46a950: mov dword ptr [esi], 0x4c7174 */
  W32((uint32_t)(esi), 0x4c7174u);
/* 46a956: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46a95a: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46a95f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46a965: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46a969: call 0x488f1b */
  esp -= 4; W32(esp, 0x46a96eu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46a96e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46a96f: mov ecx, esi */
  ecx = esi;
/* 46a971: call 0x46835c */
  esp -= 4; W32(esp, 0x46a976u); SPILL(); f_46835c(); if (g_unwind) return; RELOAD();
/* 46a976: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46a97c: call 0x488e1d */
  esp -= 4; W32(esp, 0x46a981u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46a981: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46a984: mov eax, esi */
  eax = esi;
/* 46a986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a987: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46a98e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a98f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46a992(void) {
  LOAD_REGS();
L_46a992: /* 46a992: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46a996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a997: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46a99b: mov esi, ecx */
  esi = ecx;
/* 46a99d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46a9a0: mov dword ptr [esi], 0x4c7174 */
  W32((uint32_t)(esi), 0x4c7174u);
/* 46a9a6: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46a9aa: call 0x46835c */
  esp -= 4; W32(esp, 0x46a9afu); SPILL(); f_46835c(); if (g_unwind) return; RELOAD();
/* 46a9af: mov eax, esi */
  eax = esi;
/* 46a9b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a9b2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46a9b5(void) {
  LOAD_REGS();
L_46a9b5: /* 46a9b5: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46a9ba: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46a9bfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46a9bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46a9c0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46a9c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46a9c5: je 0x46a9ee */
  if (zf) goto L_46a9ee;
L_46a9c7: /* 46a9c7: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46a9ca: jne 0x46a9ee */
  if (!zf) goto L_46a9ee;
L_46a9cc: /* 46a9cc: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 46a9ce: call 0x4620da */
  esp -= 4; W32(esp, 0x46a9d3u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46a9d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46a9d4: mov ecx, eax */
  ecx = eax;
/* 46a9d6: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46a9d9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46a9dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46a9df: je 0x46a9ea */
  if (zf) goto L_46a9ea;
L_46a9e1: /* 46a9e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46a9e3: call 0x46a933 */
  esp -= 4; W32(esp, 0x46a9e8u); SPILL(); f_46a933(); if (g_unwind) return; RELOAD();
/* 46a9e8: jmp 0x46a9ec */
  goto L_46a9ec;
L_46a9ea: /* 46a9ea: xor eax, eax */
  eax = 0;
L_46a9ec: /* 46a9ec: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46a9ee: /* 46a9ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46a9f1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 46a9f3: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46a9f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46a9f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46a9fc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46a9fd: ret  */
  esp += 4; SPILL(); return;
}

void f_46a9fe(void) {
  LOAD_REGS();
L_46a9fe: /* 46a9fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46aa00: call 0x46a933 */
  esp -= 4; W32(esp, 0x46aa05u); SPILL(); f_46a933(); if (g_unwind) return; RELOAD();
/* 46aa05: ret  */
  esp += 4; SPILL(); return;
}

void f_46aa06(void) {
  LOAD_REGS();
L_46aa06: /* 46aa06: mov eax, 0x48c255 */
  eax = 0x48c255u;
/* 46aa0b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46aa10u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46aa10: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46aa13: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46aa16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aa17: mov esi, ecx */
  esi = ecx;
/* 46aa19: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46aa1c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46aa1f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46aa23: mov dword ptr [esi], 0x4c71c8 */
  W32((uint32_t)(esi), 0x4c71c8u);
/* 46aa29: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46aa2d: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46aa32: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46aa38: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46aa3c: call 0x488f1b */
  esp -= 4; W32(esp, 0x46aa41u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46aa41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46aa42: mov ecx, esi */
  ecx = esi;
/* 46aa44: call 0x46835c */
  esp -= 4; W32(esp, 0x46aa49u); SPILL(); f_46835c(); if (g_unwind) return; RELOAD();
/* 46aa49: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46aa4f: call 0x488e1d */
  esp -= 4; W32(esp, 0x46aa54u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46aa54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46aa57: mov eax, esi */
  eax = esi;
/* 46aa59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46aa5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46aa61: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46aa62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46aa65(void) {
  LOAD_REGS();
L_46aa65: /* 46aa65: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46aa69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aa6a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46aa6e: mov esi, ecx */
  esi = ecx;
/* 46aa70: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46aa73: mov dword ptr [esi], 0x4c71c8 */
  W32((uint32_t)(esi), 0x4c71c8u);
/* 46aa79: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46aa7d: call 0x46835c */
  esp -= 4; W32(esp, 0x46aa82u); SPILL(); f_46835c(); if (g_unwind) return; RELOAD();
/* 46aa82: mov eax, esi */
  eax = esi;
/* 46aa84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46aa85: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46aa88(void) {
  LOAD_REGS();
L_46aa88: /* 46aa88: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46aa8d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46aa92u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46aa92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aa93: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46aa96: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46aa98: je 0x46aac1 */
  if (zf) goto L_46aac1;
L_46aa9a: /* 46aa9a: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46aa9d: jne 0x46aac1 */
  if (!zf) goto L_46aac1;
L_46aa9f: /* 46aa9f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 46aaa1: call 0x4620da */
  esp -= 4; W32(esp, 0x46aaa6u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46aaa6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46aaa7: mov ecx, eax */
  ecx = eax;
/* 46aaa9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46aaac: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46aab0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46aab2: je 0x46aabd */
  if (zf) goto L_46aabd;
L_46aab4: /* 46aab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46aab6: call 0x46aa06 */
  esp -= 4; W32(esp, 0x46aabbu); SPILL(); f_46aa06(); if (g_unwind) return; RELOAD();
/* 46aabb: jmp 0x46aabf */
  goto L_46aabf;
L_46aabd: /* 46aabd: xor eax, eax */
  eax = 0;
L_46aabf: /* 46aabf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46aac1: /* 46aac1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46aac4: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 46aac6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46aac7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46aac8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46aacf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46aad0: ret  */
  esp += 4; SPILL(); return;
}

void f_46aad1(void) {
  LOAD_REGS();
L_46aad1: /* 46aad1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46aad3: call 0x46aa06 */
  esp -= 4; W32(esp, 0x46aad8u); SPILL(); f_46aa06(); if (g_unwind) return; RELOAD();
/* 46aad8: ret  */
  esp += 4; SPILL(); return;
}

void f_46aad9(void) {
  LOAD_REGS();
L_46aad9: /* 46aad9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46aada: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46aade: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46aae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aae2: mov esi, ecx */
  esi = ecx;
/* 46aae4: je 0x46ab0a */
  if (zf) goto L_46ab0a;
L_46aae6: /* 46aae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46aae7: push 0x469725 */
  { uint32_t v = 0x469725u; esp -= 4; W32(esp, v); }
/* 46aaec: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46aaef: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46aaf1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 46aaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aaf4: call 0x48be30 */
  esp -= 4; W32(esp, 0x46aaf9u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46aaf9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46aafc: je 0x46ab05 */
  if (zf) goto L_46ab05;
L_46aafe: /* 46aafe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46aaff: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46ab04u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46ab04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ab05: /* 46ab05: mov eax, edi */
  eax = edi;
/* 46ab07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ab08: jmp 0x46ab1f */
  goto L_46ab1f;
L_46ab0a: /* 46ab0a: mov ecx, esi */
  ecx = esi;
/* 46ab0c: call 0x469725 */
  esp -= 4; W32(esp, 0x46ab11u); SPILL(); f_469725(); if (g_unwind) return; RELOAD();
/* 46ab11: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ab14: je 0x46ab1d */
  if (zf) goto L_46ab1d;
L_46ab16: /* 46ab16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ab17: call 0x461c65 */
  esp -= 4; W32(esp, 0x46ab1cu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46ab1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46ab1d: /* 46ab1d: mov eax, esi */
  eax = esi;
L_46ab1f: /* 46ab1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ab20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ab21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ab24(void) {
  LOAD_REGS();
L_46ab24: /* 46ab24: mov eax, 0x7ffffffe */
  eax = 0x7ffffffeu;
/* 46ab29: ret  */
  esp += 4; SPILL(); return;
}

void f_46ab2a(void) {
  LOAD_REGS();
L_46ab2a: /* 46ab2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ab2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ab2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ab2d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 46ab31: mov esi, ecx */
  esi = ecx;
/* 46ab33: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ab36: jae 0x46ab3d */
  if (!cf) goto L_46ab3d;
L_46ab38: /* 46ab38: call 0x487763 */
  esp -= 4; W32(esp, 0x46ab3du); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46ab3d: /* 46ab3d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 46ab40: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 46ab44: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ab46: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ab48: jae 0x46ab4c */
  if (!cf) goto L_46ab4c;
L_46ab4a: /* 46ab4a: mov ebx, eax */
  ebx = eax;
L_46ab4c: /* 46ab4c: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ab50: jb 0x46ab57 */
  if (cf) goto L_46ab57;
L_46ab52: /* 46ab52: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 46ab55: jmp 0x46ab5a */
  goto L_46ab5a;
L_46ab57: /* 46ab57: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_46ab5a: /* 46ab5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ab5b: lea eax, [esi + edi*2] */
  eax = (uint32_t)(esi + edi*2);
/* 46ab5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ab5f: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46ab63: call 0x462cb0 */
  esp -= 4; W32(esp, 0x46ab68u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 46ab68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46ab6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ab6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ab6d: mov eax, ebx */
  eax = ebx;
/* 46ab6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ab70: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46ab73(void) {
  LOAD_REGS();
L_46ab73: /* 46ab73: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ab74: mov ebp, esp */
  ebp = esp;
/* 46ab76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ab77: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ab7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46ab7e: jne 0x46ab85 */
  if (!zf) goto L_46ab85;
L_46ab80: /* 46ab80: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46ab83: jbe 0x46abf4 */
  if ((cf | zf)) goto L_46abf4;
L_46ab85: /* 46ab85: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 46ab88: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ab8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ab8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ab8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ab8d: jae 0x46abee */
  if (!cf) goto L_46abee;
L_46ab8f: /* 46ab8f: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 46ab91: mov ebx, edx */
  ebx = edx;
/* 46ab93: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46ab96: ja 0x46abee */
  if ((!cf && !zf)) goto L_46abee;
L_46ab98: /* 46ab98: xor edx, edx */
  edx = 0;
/* 46ab9a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 46ab9b: sub edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 46ab9e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46aba1: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46aba3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 46aba6: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46aba9: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 46abac: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 46abaf: jb 0x46abb3 */
  if (cf) goto L_46abb3;
L_46abb1: /* 46abb1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_46abb3: /* 46abb3: lea edi, [ecx + eax*2] */
  edi = (uint32_t)(ecx + eax*2);
/* 46abb6: jmp 0x46abdb */
  goto L_46abdb;
L_46abb8: /* 46abb8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46abbb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46abbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46abbf: call 0x463db1 */
  esp -= 4; W32(esp, 0x46abc4u); SPILL(); f_463db1(); if (g_unwind) return; RELOAD();
/* 46abc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46abc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46abc9: je 0x46abf8 */
  if (zf) goto L_46abf8;
L_46abcb: /* 46abcb: mov eax, esi */
  eax = esi;
/* 46abcd: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46abcf: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46abd1: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 46abd4: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 46abd6: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46abd8: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
L_46abdb: /* 46abdb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46abde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46abdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46abe0: call 0x463e54 */
  esp -= 4; W32(esp, 0x46abe5u); SPILL(); f_463e54(); if (g_unwind) return; RELOAD();
/* 46abe5: mov esi, eax */
  esi = eax;
/* 46abe7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46abea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46abec: jne 0x46abb8 */
  if (!zf) goto L_46abb8;
L_46abee: /* 46abee: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46abf1: /* 46abf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46abf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46abf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46abf4: /* 46abf4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46abf5: ret 0xc */
  esp += 16; SPILL(); return;
L_46abf8: /* 46abf8: cmp dword ptr [ebp - 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46abfc: jb 0x46ac05 */
  if (cf) goto L_46ac05;
L_46abfe: /* 46abfe: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46ac01: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46ac03: jmp 0x46ac08 */
  goto L_46ac08;
L_46ac05: /* 46ac05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_46ac08: /* 46ac08: mov eax, esi */
  eax = esi;
/* 46ac0a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ac0c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ac0e: jmp 0x46abf1 */
  goto L_46abf1;
}

void f_46ac10(void) {
  LOAD_REGS();
L_46ac10: /* 46ac10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ac11: mov ebp, esp */
  ebp = esp;
/* 46ac13: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ac17: jne 0x46ac27 */
  if (!zf) goto L_46ac27;
L_46ac19: /* 46ac19: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 46ac1c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46ac1f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ac21: jb 0x46ac9d */
  if (cf) goto L_46ac9d;
L_46ac23: /* 46ac23: mov eax, ecx */
  eax = ecx;
/* 46ac25: jmp 0x46ac9d */
  goto L_46ac9d;
L_46ac27: /* 46ac27: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 46ac2a: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46ac2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ac2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ac2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ac30: ja 0x46ac97 */
  if ((!cf && !zf)) goto L_46ac97;
L_46ac32: /* 46ac32: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ac35: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 46ac38: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ac3a: jb 0x46ac3e */
  if (cf) goto L_46ac3e;
L_46ac3c: /* 46ac3c: mov edx, eax */
  edx = eax;
L_46ac3e: /* 46ac3e: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 46ac41: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ac44: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 46ac47: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 46ac4a: jb 0x46ac50 */
  if (cf) goto L_46ac50;
L_46ac4c: /* 46ac4c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ac4e: jmp 0x46ac52 */
  goto L_46ac52;
L_46ac50: /* 46ac50: mov eax, esi */
  eax = esi;
L_46ac52: /* 46ac52: lea edi, [eax + edx*2] */
  edi = (uint32_t)(eax + edx*2);
/* 46ac55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46ac58: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
L_46ac5b: /* 46ac5b: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46ac5e: jne 0x46ac73 */
  if (!zf) goto L_46ac73;
L_46ac60: /* 46ac60: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ac63: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46ac66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ac67: call 0x463db1 */
  esp -= 4; W32(esp, 0x46ac6cu); SPILL(); f_463db1(); if (g_unwind) return; RELOAD();
/* 46ac6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46ac6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46ac71: je 0x46ac87 */
  if (zf) goto L_46ac87;
L_46ac73: /* 46ac73: cmp dword ptr [ebp + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ac77: jb 0x46ac7d */
  if (cf) goto L_46ac7d;
L_46ac79: /* 46ac79: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ac7b: jmp 0x46ac7f */
  goto L_46ac7f;
L_46ac7d: /* 46ac7d: mov eax, esi */
  eax = esi;
L_46ac7f: /* 46ac7f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ac81: je 0x46ac97 */
  if (zf) goto L_46ac97;
L_46ac83: /* 46ac83: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46ac84: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46ac85: jmp 0x46ac5b */
  goto L_46ac5b;
L_46ac87: /* 46ac87: cmp dword ptr [ebp + 0xc], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ac8b: jb 0x46ac8f */
  if (cf) goto L_46ac8f;
L_46ac8d: /* 46ac8d: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46ac8f: /* 46ac8f: mov eax, edi */
  eax = edi;
/* 46ac91: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ac93: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ac95: jmp 0x46ac9a */
  goto L_46ac9a;
L_46ac97: /* 46ac97: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46ac9a: /* 46ac9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ac9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ac9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46ac9d: /* 46ac9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46ac9e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46aca1(void) {
  LOAD_REGS();
L_46aca1: /* 46aca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46aca2: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46aca6: mov esi, ecx */
  esi = ecx;
/* 46aca8: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46acaeu); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46acae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46acaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46acb0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46acb4: mov ecx, esi */
  ecx = esi;
/* 46acb6: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46acba: call 0x46ae88 */
  esp -= 4; W32(esp, 0x46acbfu); SPILL(); f_46ae88(); if (g_unwind) return; RELOAD();
/* 46acbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46acc0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46acc3(void) {
  LOAD_REGS();
L_46acc3: /* 46acc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46acc5: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46acc9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 46accd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46acce: call 0x46ab73 */
  esp -= 4; W32(esp, 0x46acd3u); SPILL(); f_46ab73(); if (g_unwind) return; RELOAD();
/* 46acd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46acd6(void) {
  LOAD_REGS();
L_46acd6: /* 46acd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46acd7: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46acdb: mov esi, ecx */
  esi = ecx;
/* 46acdd: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46ace3u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46ace3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ace4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ace5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ace9: mov ecx, esi */
  ecx = esi;
/* 46aceb: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46acef: call 0x46aefa */
  esp -= 4; W32(esp, 0x46acf4u); SPILL(); f_46aefa(); if (g_unwind) return; RELOAD();
/* 46acf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46acf5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46acf8(void) {
  LOAD_REGS();
L_46acf8: /* 46acf8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46acfa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46acfe: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 46ad02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ad03: call 0x46ac10 */
  esp -= 4; W32(esp, 0x46ad08u); SPILL(); f_46ac10(); if (g_unwind) return; RELOAD();
/* 46ad08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ad0b(void) {
  LOAD_REGS();
L_46ad0b: /* 46ad0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ad0c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46ad10: mov esi, ecx */
  esi = ecx;
/* 46ad12: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46ad18u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46ad18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ad19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ad1a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ad1e: mov ecx, esi */
  ecx = esi;
/* 46ad20: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ad24: call 0x46af6a */
  esp -= 4; W32(esp, 0x46ad29u); SPILL(); f_46af6a(); if (g_unwind) return; RELOAD();
/* 46ad29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ad2a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ad2d(void) {
  LOAD_REGS();
L_46ad2d: /* 46ad2d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46ad2f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46ad33: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 46ad37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ad38: call 0x46af6a */
  esp -= 4; W32(esp, 0x46ad3du); SPILL(); f_46af6a(); if (g_unwind) return; RELOAD();
/* 46ad3d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ad40(void) {
  LOAD_REGS();
L_46ad40: /* 46ad40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ad41: mov ebp, esp */
  ebp = esp;
/* 46ad43: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 46ad46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46ad48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ad49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ad4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ad4b: jbe 0x46ada0 */
  if ((cf | zf)) goto L_46ada0;
L_46ad4d: /* 46ad4d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 46ad50: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ad52: jb 0x46ad57 */
  if (cf) goto L_46ad57;
L_46ad54: /* 46ad54: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_46ad57: /* 46ad57: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 46ad5a: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ad5d: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 46ad60: jb 0x46ad66 */
  if (cf) goto L_46ad66;
L_46ad62: /* 46ad62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ad64: jmp 0x46ad68 */
  goto L_46ad68;
L_46ad66: /* 46ad66: mov eax, esi */
  eax = esi;
L_46ad68: /* 46ad68: lea edi, [eax + edx*2] */
  edi = (uint32_t)(eax + edx*2);
/* 46ad6b: jmp 0x46ad7e */
  goto L_46ad7e;
L_46ad6d: /* 46ad6d: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ad70: jb 0x46ad76 */
  if (cf) goto L_46ad76;
L_46ad72: /* 46ad72: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ad74: jmp 0x46ad78 */
  goto L_46ad78;
L_46ad76: /* 46ad76: mov eax, esi */
  eax = esi;
L_46ad78: /* 46ad78: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ad7a: je 0x46ada0 */
  if (zf) goto L_46ada0;
L_46ad7c: /* 46ad7c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46ad7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_46ad7e: /* 46ad7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ad7f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ad82: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46ad85: call 0x463e54 */
  esp -= 4; W32(esp, 0x46ad8au); SPILL(); f_463e54(); if (g_unwind) return; RELOAD();
/* 46ad8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46ad8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46ad8f: jne 0x46ad6d */
  if (!zf) goto L_46ad6d;
L_46ad91: /* 46ad91: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ad94: jb 0x46ad98 */
  if (cf) goto L_46ad98;
L_46ad96: /* 46ad96: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46ad98: /* 46ad98: mov eax, edi */
  eax = edi;
/* 46ad9a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ad9c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ad9e: jmp 0x46ada3 */
  goto L_46ada3;
L_46ada0: /* 46ada0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46ada3: /* 46ada3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ada4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ada5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ada6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46ada7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46adaa(void) {
  LOAD_REGS();
L_46adaa: /* 46adaa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46adac: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46adb0: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 46adb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46adb5: call 0x46ad40 */
  esp -= 4; W32(esp, 0x46adbau); SPILL(); f_46ad40(); if (g_unwind) return; RELOAD();
/* 46adba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46adbd(void) {
  LOAD_REGS();
L_46adbd: /* 46adbd: mov eax, ecx */
  eax = ecx;
/* 46adbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46adc2(void) {
  LOAD_REGS();
L_46adc2: /* 46adc2: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46adc6: jb 0x46adcd */
  if (cf) goto L_46adcd;
L_46adc8: /* 46adc8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46adcb: jmp 0x46add0 */
  goto L_46add0;
L_46adcd: /* 46adcd: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
L_46add0: /* 46add0: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 46add3: lea ecx, [eax + ecx*2] */
  ecx = (uint32_t)(eax + ecx*2);
/* 46add6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46adda: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46addc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46addf(void) {
  LOAD_REGS();
L_46addf: /* 46addf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ade0: mov ebp, esp */
  ebp = esp;
/* 46ade2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ade3: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46ade6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ade7: call 0x46adc2 */
  esp -= 4; W32(esp, 0x46adecu); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 46adec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46adee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46adf1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46adf3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46adf4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46adf7(void) {
  LOAD_REGS();
L_46adf7: /* 46adf7: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46adfb: jb 0x46ae02 */
  if (cf) goto L_46ae02;
L_46adfd: /* 46adfd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46ae00: jmp 0x46ae05 */
  goto L_46ae05;
L_46ae02: /* 46ae02: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_46ae05: /* 46ae05: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46ae09: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46ae0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ae0e(void) {
  LOAD_REGS();
L_46ae0e: /* 46ae0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ae0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ae10: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 46ae14: mov esi, ecx */
  esi = ecx;
/* 46ae16: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46ae19: ja 0x46ae20 */
  if ((!cf && !zf)) goto L_46ae20;
L_46ae1b: /* 46ae1b: call 0x487763 */
  esp -= 4; W32(esp, 0x46ae20u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46ae20: /* 46ae20: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ae24: jb 0x46ae2b */
  if (cf) goto L_46ae2b;
L_46ae26: /* 46ae26: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 46ae29: jmp 0x46ae2e */
  goto L_46ae2e;
L_46ae2b: /* 46ae2b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_46ae2e: /* 46ae2e: lea eax, [esi + edi*2] */
  eax = (uint32_t)(esi + edi*2);
/* 46ae31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ae32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ae33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46ae36(void) {
  LOAD_REGS();
L_46ae36: /* 46ae36: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ae3a: jb 0x46ae40 */
  if (cf) goto L_46ae40;
L_46ae3c: /* 46ae3c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46ae3f: ret  */
  esp += 4; SPILL(); return;
L_46ae40: /* 46ae40: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 46ae43: ret  */
  esp += 4; SPILL(); return;
}

void f_46ae44(void) {
  LOAD_REGS();
L_46ae44: /* 46ae44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ae45: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46ae49: mov esi, ecx */
  esi = ecx;
/* 46ae4b: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46ae51u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46ae51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ae52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ae53: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ae57: mov ecx, esi */
  ecx = esi;
/* 46ae59: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ae5d: call 0x46ab73 */
  esp -= 4; W32(esp, 0x46ae62u); SPILL(); f_46ab73(); if (g_unwind) return; RELOAD();
/* 46ae62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ae63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ae66(void) {
  LOAD_REGS();
L_46ae66: /* 46ae66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ae67: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46ae6b: mov esi, ecx */
  esi = ecx;
/* 46ae6d: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46ae73u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46ae73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ae74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46ae75: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ae79: mov ecx, esi */
  ecx = esi;
/* 46ae7b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46ae7f: call 0x46ac10 */
  esp -= 4; W32(esp, 0x46ae84u); SPILL(); f_46ac10(); if (g_unwind) return; RELOAD();
/* 46ae84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ae85: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46ae88(void) {
  LOAD_REGS();
L_46ae88: /* 46ae88: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46ae89: mov ebp, esp */
  ebp = esp;
/* 46ae8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46ae8c: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46ae90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ae91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ae92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ae93: jbe 0x46aee0 */
  if ((cf | zf)) goto L_46aee0;
L_46ae95: /* 46ae95: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 46ae98: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46ae9b: jae 0x46aee0 */
  if (!cf) goto L_46aee0;
L_46ae9d: /* 46ae9d: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 46aea0: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46aea3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46aea6: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 46aea9: jb 0x46aeaf */
  if (cf) goto L_46aeaf;
L_46aeab: /* 46aeab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46aead: jmp 0x46aeb1 */
  goto L_46aeb1;
L_46aeaf: /* 46aeaf: mov eax, esi */
  eax = esi;
L_46aeb1: /* 46aeb1: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46aeb4: lea ebx, [eax + edx*2] */
  ebx = (uint32_t)(eax + edx*2);
/* 46aeb7: jb 0x46aebd */
  if (cf) goto L_46aebd;
L_46aeb9: /* 46aeb9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46aebb: jmp 0x46aebf */
  goto L_46aebf;
L_46aebd: /* 46aebd: mov eax, esi */
  eax = esi;
L_46aebf: /* 46aebf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46aec2: lea edi, [eax + ecx*2] */
  edi = (uint32_t)(eax + ecx*2);
/* 46aec5: jmp 0x46aedc */
  goto L_46aedc;
L_46aec7: /* 46aec7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46aec8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46aecb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46aece: call 0x463e54 */
  esp -= 4; W32(esp, 0x46aed3u); SPILL(); f_463e54(); if (g_unwind) return; RELOAD();
/* 46aed3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46aed6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46aed8: jne 0x46aeea */
  if (!zf) goto L_46aeea;
L_46aeda: /* 46aeda: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 46aedb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_46aedc: /* 46aedc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46aede: jb 0x46aec7 */
  if (cf) goto L_46aec7;
L_46aee0: /* 46aee0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46aee3: /* 46aee3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46aee4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46aee5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46aee6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46aee7: ret 0xc */
  esp += 16; SPILL(); return;
L_46aeea: /* 46aeea: cmp dword ptr [ebp - 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46aeee: jb 0x46aef2 */
  if (cf) goto L_46aef2;
L_46aef0: /* 46aef0: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46aef2: /* 46aef2: mov eax, edi */
  eax = edi;
/* 46aef4: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46aef6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46aef8: jmp 0x46aee3 */
  goto L_46aee3;
}

void f_46aefa(void) {
  LOAD_REGS();
L_46aefa: /* 46aefa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46aefb: mov ebp, esp */
  ebp = esp;
/* 46aefd: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46af01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46af02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46af03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46af04: jbe 0x46af60 */
  if ((cf | zf)) goto L_46af60;
L_46af06: /* 46af06: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 46af09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46af0b: jbe 0x46af60 */
  if ((cf | zf)) goto L_46af60;
L_46af0d: /* 46af0d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 46af10: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af12: jb 0x46af17 */
  if (cf) goto L_46af17;
L_46af14: /* 46af14: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_46af17: /* 46af17: mov ebx, dword ptr [ecx + 0x18] */
  ebx = R32((uint32_t)(ecx + 0x18u));
/* 46af1a: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af1d: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 46af20: jb 0x46af26 */
  if (cf) goto L_46af26;
L_46af22: /* 46af22: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46af24: jmp 0x46af28 */
  goto L_46af28;
L_46af26: /* 46af26: mov eax, esi */
  eax = esi;
L_46af28: /* 46af28: lea edi, [eax + edx*2] */
  edi = (uint32_t)(eax + edx*2);
/* 46af2b: jmp 0x46af3e */
  goto L_46af3e;
L_46af2d: /* 46af2d: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af30: jb 0x46af36 */
  if (cf) goto L_46af36;
L_46af32: /* 46af32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46af34: jmp 0x46af38 */
  goto L_46af38;
L_46af36: /* 46af36: mov eax, esi */
  eax = esi;
L_46af38: /* 46af38: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46af3a: je 0x46af60 */
  if (zf) goto L_46af60;
L_46af3c: /* 46af3c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46af3d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_46af3e: /* 46af3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46af3f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46af42: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46af45: call 0x463e54 */
  esp -= 4; W32(esp, 0x46af4au); SPILL(); f_463e54(); if (g_unwind) return; RELOAD();
/* 46af4a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46af4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46af4f: je 0x46af2d */
  if (zf) goto L_46af2d;
L_46af51: /* 46af51: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af54: jb 0x46af58 */
  if (cf) goto L_46af58;
L_46af56: /* 46af56: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46af58: /* 46af58: mov eax, edi */
  eax = edi;
/* 46af5a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46af5c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46af5e: jmp 0x46af63 */
  goto L_46af63;
L_46af60: /* 46af60: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46af63: /* 46af63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46af64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46af65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46af66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46af67: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46af6a(void) {
  LOAD_REGS();
L_46af6a: /* 46af6a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46af6b: mov ebp, esp */
  ebp = esp;
/* 46af6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46af6e: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 46af71: cmp dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46af75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46af76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46af77: jae 0x46afbc */
  if (!cf) goto L_46afbc;
L_46af79: /* 46af79: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 46af7c: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af7f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46af82: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 46af85: jb 0x46af8b */
  if (cf) goto L_46af8b;
L_46af87: /* 46af87: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46af89: jmp 0x46af8d */
  goto L_46af8d;
L_46af8b: /* 46af8b: mov eax, esi */
  eax = esi;
L_46af8d: /* 46af8d: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46af90: lea ebx, [eax + edx*2] */
  ebx = (uint32_t)(eax + edx*2);
/* 46af93: jb 0x46af99 */
  if (cf) goto L_46af99;
L_46af95: /* 46af95: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46af97: jmp 0x46af9b */
  goto L_46af9b;
L_46af99: /* 46af99: mov eax, esi */
  eax = esi;
L_46af9b: /* 46af9b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46af9e: lea edi, [eax + ecx*2] */
  edi = (uint32_t)(eax + ecx*2);
/* 46afa1: jmp 0x46afb8 */
  goto L_46afb8;
L_46afa3: /* 46afa3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46afa4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46afa7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46afaa: call 0x463e54 */
  esp -= 4; W32(esp, 0x46afafu); SPILL(); f_463e54(); if (g_unwind) return; RELOAD();
/* 46afaf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46afb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46afb4: je 0x46afc6 */
  if (zf) goto L_46afc6;
L_46afb6: /* 46afb6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 46afb7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_46afb8: /* 46afb8: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46afba: jb 0x46afa3 */
  if (cf) goto L_46afa3;
L_46afbc: /* 46afbc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46afbf: /* 46afbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46afc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46afc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46afc2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46afc3: ret 0xc */
  esp += 16; SPILL(); return;
L_46afc6: /* 46afc6: cmp dword ptr [ebp - 4], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46afca: jb 0x46afce */
  if (cf) goto L_46afce;
L_46afcc: /* 46afcc: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46afce: /* 46afce: mov eax, edi */
  eax = edi;
/* 46afd0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46afd2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46afd4: jmp 0x46afbf */
  goto L_46afbf;
}

void f_46afd6(void) {
  LOAD_REGS();
L_46afd6: /* 46afd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46afd7: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46afdb: mov esi, ecx */
  esi = ecx;
/* 46afdd: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46afe3u); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46afe3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46afe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46afe5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46afe9: mov ecx, esi */
  ecx = esi;
/* 46afeb: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46afef: call 0x46ad40 */
  esp -= 4; W32(esp, 0x46aff4u); SPILL(); f_46ad40(); if (g_unwind) return; RELOAD();
/* 46aff4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46aff5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46aff8(void) {
  LOAD_REGS();
L_46aff8: /* 46aff8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46aff9: mov ebp, esp */
  ebp = esp;
/* 46affb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46affc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46affd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46affe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 46b001: mov esi, ecx */
  esi = ecx;
/* 46b003: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b006: jae 0x46b00d */
  if (!cf) goto L_46b00d;
L_46b008: /* 46b008: call 0x487763 */
  esp -= 4; W32(esp, 0x46b00du); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46b00d: /* 46b00d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 46b010: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 46b013: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b015: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b017: jae 0x46b01b */
  if (!cf) goto L_46b01b;
L_46b019: /* 46b019: mov ebx, eax */
  ebx = eax;
L_46b01b: /* 46b01b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b01d: je 0x46b04a */
  if (zf) goto L_46b04a;
L_46b01f: /* 46b01f: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 46b022: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b024: jae 0x46b028 */
  if (!cf) goto L_46b028;
L_46b026: /* 46b026: mov ecx, ebx */
  ecx = ebx;
L_46b028: /* 46b028: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b02c: jb 0x46b033 */
  if (cf) goto L_46b033;
L_46b02e: /* 46b02e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46b031: jmp 0x46b036 */
  goto L_46b036;
L_46b033: /* 46b033: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46b036: /* 46b036: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b037: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46b03a: lea eax, [eax + edi*2] */
  eax = (uint32_t)(eax + edi*2);
/* 46b03d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b03e: call 0x463db1 */
  esp -= 4; W32(esp, 0x46b043u); SPILL(); f_463db1(); if (g_unwind) return; RELOAD();
/* 46b043: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46b046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b048: jne 0x46b05c */
  if (!zf) goto L_46b05c;
L_46b04a: /* 46b04a: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b04d: jae 0x46b054 */
  if (!cf) goto L_46b054;
L_46b04f: /* 46b04f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46b052: jmp 0x46b05c */
  goto L_46b05c;
L_46b054: /* 46b054: xor eax, eax */
  eax = 0;
/* 46b056: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b059: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
L_46b05c: /* 46b05c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b05d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b05e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46b05f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46b060: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46b063(void) {
  LOAD_REGS();
L_46b063: /* 46b063: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b067: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b06a(void) {
  LOAD_REGS();
L_46b06a: /* 46b06a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b06e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b070: jne 0x46b073 */
  if (!zf) goto L_46b073;
L_46b072: /* 46b072: ret  */
  esp += 4; SPILL(); return;
L_46b073: /* 46b073: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b077: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46b079: ret  */
  esp += 4; SPILL(); return;
}

void f_46b07a(void) {
  LOAD_REGS();
L_46b07a: /* 46b07a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46b07e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b07f: mov esi, ecx */
  esi = ecx;
/* 46b081: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46b084: mov dword ptr [esi], 0x4c6fbc */
  W32((uint32_t)(esi), 0x4c6fbcu);
/* 46b08a: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46b08fu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46b08f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46b092: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46b095: mov eax, esi */
  eax = esi;
/* 46b097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b098: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46b09b(void) {
  LOAD_REGS();
L_46b09b: /* 46b09b: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b09e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b0a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b0a2: je 0x46b0b5 */
  if (zf) goto L_46b0b5;
L_46b0a4: /* 46b0a4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 46b0a7: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46b0a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b0aa: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 46b0ad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b0af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b0b0: jae 0x46b0b5 */
  if (!cf) goto L_46b0b5;
L_46b0b2: /* 46b0b2: mov eax, edx */
  eax = edx;
/* 46b0b4: ret  */
  esp += 4; SPILL(); return;
L_46b0b5: /* 46b0b5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b0b7: jmp dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_46b0ba(void) {
  LOAD_REGS();
L_46b0ba: /* 46b0ba: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b0bd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b0bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b0c1: mov dl, byte ptr [esp + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 46b0c5: je 0x46b0e9 */
  if (zf) goto L_46b0e9;
L_46b0c7: /* 46b0c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b0c8: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 46b0cb: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b0cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b0ce: jae 0x46b0e9 */
  if (!cf) goto L_46b0e9;
L_46b0d0: /* 46b0d0: cmp dl, byte ptr [eax - 1] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46b0d3: jne 0x46b0e9 */
  if (!zf) goto L_46b0e9;
L_46b0d5: /* 46b0d5: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b0d8: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 46b0da: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b0dd: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 46b0df: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b0e2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b0e4: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 46b0e7: jmp 0x46b0f2 */
  goto L_46b0f2;
L_46b0e9: /* 46b0e9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b0eb: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 46b0ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46b0ef: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x46b0f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_46b0f2: /* 46b0f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b0f5(void) {
  LOAD_REGS();
L_46b0f5: /* 46b0f5: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b0f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b0f9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 46b0fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b0fd: je 0x46b117 */
  if (zf) goto L_46b117;
L_46b0ff: /* 46b0ff: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b102: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46b104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b105: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* 46b108: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b10a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b10b: jae 0x46b117 */
  if (!cf) goto L_46b117;
L_46b10d: /* 46b10d: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 46b10e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46b110: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 46b113: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 46b115: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b116: ret  */
  esp += 4; SPILL(); return;
L_46b117: /* 46b117: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b119: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b11a: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_46b11d(void) {
  LOAD_REGS();
L_46b11d: /* 46b11d: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b120: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b122: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b124: je 0x46b140 */
  if (zf) goto L_46b140;
L_46b126: /* 46b126: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 46b129: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b12b: jae 0x46b140 */
  if (!cf) goto L_46b140;
L_46b12d: /* 46b12d: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b130: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 46b132: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b135: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 46b137: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b13a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b13c: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 46b13f: ret  */
  esp += 4; SPILL(); return;
L_46b140: /* 46b140: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b142: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 46b144: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x46b147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b147: ret  */
  esp += 4; SPILL(); return;
}

void f_46b148(void) {
  LOAD_REGS();
L_46b148: /* 46b148: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b14b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b14d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b14f: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 46b153: je 0x46b179 */
  if (zf) goto L_46b179;
L_46b155: /* 46b155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b156: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 46b159: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b15b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b15c: jae 0x46b179 */
  if (!cf) goto L_46b179;
L_46b15e: /* 46b15e: cmp dx, word ptr [eax - 2] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(eax + 0xfffffffeu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46b162: jne 0x46b179 */
  if (!zf) goto L_46b179;
L_46b164: /* 46b164: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b167: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 46b169: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b16c: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 46b16f: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b172: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b174: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 46b177: jmp 0x46b17f */
  goto L_46b17f;
L_46b179: /* 46b179: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b17b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46b17c: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x46b17fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_46b17f: /* 46b17f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b182(void) {
  LOAD_REGS();
L_46b182: /* 46b182: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b185: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b186: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 46b188: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b18a: je 0x46b1a5 */
  if (zf) goto L_46b1a5;
L_46b18c: /* 46b18c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b18f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46b191: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b192: lea edi, [esi + edx*2] */
  edi = (uint32_t)(esi + edx*2);
/* 46b195: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b197: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b198: jae 0x46b1a5 */
  if (!cf) goto L_46b1a5;
L_46b19a: /* 46b19a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 46b19b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46b19d: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 46b1a0: add dword ptr [ecx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 46b1a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b1a4: ret  */
  esp += 4; SPILL(); return;
L_46b1a5: /* 46b1a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b1a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b1a8: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_46b1ab(void) {
  LOAD_REGS();
L_46b1ab: /* 46b1ab: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 46b1b1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46b1b5: call 0x469803 */
  esp -= 4; W32(esp, 0x46b1bau); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46b1ba: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b1be: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46b1c1(void) {
  LOAD_REGS();
L_46b1c1: /* 46b1c1: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b1c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46b1c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b1c8: je 0x46b1dd */
  if (zf) goto L_46b1dd;
L_46b1ca: /* 46b1ca: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b1cd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b1cf: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 46b1d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b1d2: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 46b1d5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b1d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b1d8: jae 0x46b1dd */
  if (!cf) goto L_46b1dd;
L_46b1da: /* 46b1da: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46b1dc: ret  */
  esp += 4; SPILL(); return;
L_46b1dd: /* 46b1dd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b1df: jmp dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_46b1e2(void) {
  LOAD_REGS();
L_46b1e2: /* 46b1e2: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b1e5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b1e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b1e9: je 0x46b206 */
  if (zf) goto L_46b206;
L_46b1eb: /* 46b1eb: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 46b1ee: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b1f0: jae 0x46b206 */
  if (!cf) goto L_46b206;
L_46b1f2: /* 46b1f2: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 46b1f5: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 46b1f7: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b1fa: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 46b1fd: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b200: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b202: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 46b205: ret  */
  esp += 4; SPILL(); return;
L_46b206: /* 46b206: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b208: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 46b20d: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x46b210u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b210: ret  */
  esp += 4; SPILL(); return;
}

void f_46b211(void) {
  LOAD_REGS();
L_46b211: /* 46b211: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 46b217: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46b21b: call 0x469803 */
  esp -= 4; W32(esp, 0x46b220u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46b220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b224: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46b227(void) {
  LOAD_REGS();
L_46b227: /* 46b227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b228: mov esi, ecx */
  esi = ecx;
/* 46b22a: mov dword ptr [esi], 0x4c7834 */
  W32((uint32_t)(esi), 0x4c7834u);
/* 46b230: call 0x468754 */
  esp -= 4; W32(esp, 0x46b235u); SPILL(); f_468754(); if (g_unwind) return; RELOAD();
/* 46b235: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46b23b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b23c: ret  */
  esp += 4; SPILL(); return;
}

void f_46b23d(void) {
  LOAD_REGS();
L_46b23d: /* 46b23d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b23e: mov esi, ecx */
  esi = ecx;
/* 46b240: mov dword ptr [esi], 0x4c7898 */
  W32((uint32_t)(esi), 0x4c7898u);
/* 46b246: call 0x468754 */
  esp -= 4; W32(esp, 0x46b24bu); SPILL(); f_468754(); if (g_unwind) return; RELOAD();
/* 46b24b: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46b251: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b252: ret  */
  esp += 4; SPILL(); return;
}

void f_46b253(void) {
  LOAD_REGS();
L_46b253: /* 46b253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b254: mov esi, ecx */
  esi = ecx;
/* 46b256: mov dword ptr [esi], 0x4c78fc */
  W32((uint32_t)(esi), 0x4c78fcu);
/* 46b25c: call 0x468754 */
  esp -= 4; W32(esp, 0x46b261u); SPILL(); f_468754(); if (g_unwind) return; RELOAD();
/* 46b261: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46b267: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b268: ret  */
  esp += 4; SPILL(); return;
}

void f_46b269(void) {
  LOAD_REGS();
L_46b269: /* 46b269: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b26e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b273u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b273: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b274: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b277: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b279: je 0x46b2a2 */
  if (zf) goto L_46b2a2;
L_46b27b: /* 46b27b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b27e: jne 0x46b2a2 */
  if (!zf) goto L_46b2a2;
L_46b280: /* 46b280: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b282: call 0x4620da */
  esp -= 4; W32(esp, 0x46b287u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b287: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b288: mov ecx, eax */
  ecx = eax;
/* 46b28a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b28d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b291: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b293: je 0x46b29e */
  if (zf) goto L_46b29e;
L_46b295: /* 46b295: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b297: call 0x468774 */
  esp -= 4; W32(esp, 0x46b29cu); SPILL(); f_468774(); if (g_unwind) return; RELOAD();
/* 46b29c: jmp 0x46b2a0 */
  goto L_46b2a0;
L_46b29e: /* 46b29e: xor eax, eax */
  eax = 0;
L_46b2a0: /* 46b2a0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b2a2: /* 46b2a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b2a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b2a7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b2a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b2a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b2b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b2b1: ret  */
  esp += 4; SPILL(); return;
}

void f_46b2b2(void) {
  LOAD_REGS();
L_46b2b2: /* 46b2b2: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b2b7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b2bcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b2bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b2bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b2c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b2c2: je 0x46b2eb */
  if (zf) goto L_46b2eb;
L_46b2c4: /* 46b2c4: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b2c7: jne 0x46b2eb */
  if (!zf) goto L_46b2eb;
L_46b2c9: /* 46b2c9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b2cb: call 0x4620da */
  esp -= 4; W32(esp, 0x46b2d0u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b2d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b2d1: mov ecx, eax */
  ecx = eax;
/* 46b2d3: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b2d6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b2da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b2dc: je 0x46b2e7 */
  if (zf) goto L_46b2e7;
L_46b2de: /* 46b2de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b2e0: call 0x4687d5 */
  esp -= 4; W32(esp, 0x46b2e5u); SPILL(); f_4687d5(); if (g_unwind) return; RELOAD();
/* 46b2e5: jmp 0x46b2e9 */
  goto L_46b2e9;
L_46b2e7: /* 46b2e7: xor eax, eax */
  eax = 0;
L_46b2e9: /* 46b2e9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b2eb: /* 46b2eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b2ee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b2f0: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b2f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b2f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b2f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b2fa: ret  */
  esp += 4; SPILL(); return;
}

void f_46b2fb(void) {
  LOAD_REGS();
L_46b2fb: /* 46b2fb: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b300: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b305u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b305: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b306: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b309: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b30b: je 0x46b334 */
  if (zf) goto L_46b334;
L_46b30d: /* 46b30d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b310: jne 0x46b334 */
  if (!zf) goto L_46b334;
L_46b312: /* 46b312: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b314: call 0x4620da */
  esp -= 4; W32(esp, 0x46b319u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b319: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b31a: mov ecx, eax */
  ecx = eax;
/* 46b31c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b31f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b323: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b325: je 0x46b330 */
  if (zf) goto L_46b330;
L_46b327: /* 46b327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b329: call 0x468920 */
  esp -= 4; W32(esp, 0x46b32eu); SPILL(); f_468920(); if (g_unwind) return; RELOAD();
/* 46b32e: jmp 0x46b332 */
  goto L_46b332;
L_46b330: /* 46b330: xor eax, eax */
  eax = 0;
L_46b332: /* 46b332: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b334: /* 46b334: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b337: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b339: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b33a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b33b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b342: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b343: ret  */
  esp += 4; SPILL(); return;
}

void f_46b344(void) {
  LOAD_REGS();
L_46b344: /* 46b344: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b349: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b34eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b34e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b34f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b352: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b354: je 0x46b37d */
  if (zf) goto L_46b37d;
L_46b356: /* 46b356: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b359: jne 0x46b37d */
  if (!zf) goto L_46b37d;
L_46b35b: /* 46b35b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b35d: call 0x4620da */
  esp -= 4; W32(esp, 0x46b362u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b362: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b363: mov ecx, eax */
  ecx = eax;
/* 46b365: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b368: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b36c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b36e: je 0x46b379 */
  if (zf) goto L_46b379;
L_46b370: /* 46b370: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b372: call 0x468a1d */
  esp -= 4; W32(esp, 0x46b377u); SPILL(); f_468a1d(); if (g_unwind) return; RELOAD();
/* 46b377: jmp 0x46b37b */
  goto L_46b37b;
L_46b379: /* 46b379: xor eax, eax */
  eax = 0;
L_46b37b: /* 46b37b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b37d: /* 46b37d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b380: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b382: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b383: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b384: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b38b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b38c: ret  */
  esp += 4; SPILL(); return;
}

void f_46b38d(void) {
  LOAD_REGS();
L_46b38d: /* 46b38d: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b392: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b397u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b398: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b39b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b39d: je 0x46b3c6 */
  if (zf) goto L_46b3c6;
L_46b39f: /* 46b39f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b3a2: jne 0x46b3c6 */
  if (!zf) goto L_46b3c6;
L_46b3a4: /* 46b3a4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b3a6: call 0x4620da */
  esp -= 4; W32(esp, 0x46b3abu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b3ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b3ac: mov ecx, eax */
  ecx = eax;
/* 46b3ae: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b3b1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b3b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b3b7: je 0x46b3c2 */
  if (zf) goto L_46b3c2;
L_46b3b9: /* 46b3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b3bb: call 0x468b1e */
  esp -= 4; W32(esp, 0x46b3c0u); SPILL(); f_468b1e(); if (g_unwind) return; RELOAD();
/* 46b3c0: jmp 0x46b3c4 */
  goto L_46b3c4;
L_46b3c2: /* 46b3c2: xor eax, eax */
  eax = 0;
L_46b3c4: /* 46b3c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b3c6: /* 46b3c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b3c9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b3cb: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b3cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b3cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b3d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b3d5: ret  */
  esp += 4; SPILL(); return;
}

void f_46b3d6(void) {
  LOAD_REGS();
L_46b3d6: /* 46b3d6: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46b3db: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b3e0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b3e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b3e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46b3e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b3e6: je 0x46b40f */
  if (zf) goto L_46b40f;
L_46b3e8: /* 46b3e8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b3eb: jne 0x46b40f */
  if (!zf) goto L_46b40f;
L_46b3ed: /* 46b3ed: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46b3ef: call 0x4620da */
  esp -= 4; W32(esp, 0x46b3f4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46b3f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b3f5: mov ecx, eax */
  ecx = eax;
/* 46b3f7: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46b3fa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46b3fe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b400: je 0x46b40b */
  if (zf) goto L_46b40b;
L_46b402: /* 46b402: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b404: call 0x468b82 */
  esp -= 4; W32(esp, 0x46b409u); SPILL(); f_468b82(); if (g_unwind) return; RELOAD();
/* 46b409: jmp 0x46b40d */
  goto L_46b40d;
L_46b40b: /* 46b40b: xor eax, eax */
  eax = 0;
L_46b40d: /* 46b40d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46b40f: /* 46b40f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b412: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46b414: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46b415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b416: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b41d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b41e: ret  */
  esp += 4; SPILL(); return;
}

void f_46b41f(void) {
  LOAD_REGS();
L_46b41f: /* 46b41f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b420: mov esi, ecx */
  esi = ecx;
/* 46b422: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 46b425: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b427: je 0x46b438 */
  if (zf) goto L_46b438;
L_46b429: /* 46b429: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b42d: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46b432u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46b432: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46b436: jne 0x46b43b */
  if (!zf) goto L_46b43b;
L_46b438: /* 46b438: mov byte ptr [esi], 1 */
  W8((uint32_t)(esi), 0x1u);
L_46b43b: /* 46b43b: mov eax, esi */
  eax = esi;
/* 46b43d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b43e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b441(void) {
  LOAD_REGS();
L_46b441: /* 46b441: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b446: mov esi, ecx */
  esi = ecx;
/* 46b448: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 46b44b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 46b44e: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46b451: mov byte ptr [esi + 0x30], cl */
  W8((uint32_t)(esi + 0x30u), (ecx & 0xffu));
/* 46b454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b455: mov ecx, esi */
  ecx = esi;
/* 46b457: call 0x4893bc */
  esp -= 4; W32(esp, 0x46b45cu); SPILL(); f_4893bc(); if (g_unwind) return; RELOAD();
/* 46b45c: mov eax, esi */
  eax = esi;
/* 46b45e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b45f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b462(void) {
  LOAD_REGS();
L_46b462: /* 46b462: mov eax, 0x48c27c */
  eax = 0x48c27cu;
/* 46b467: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b46cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b46c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b46d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b46e: mov esi, ecx */
  esi = ecx;
/* 46b470: xor eax, eax */
  eax = 0;
/* 46b472: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46b475: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 46b478: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b479: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b47c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46b47f: mov dword ptr [esi], 0x4c75d8 */
  W32((uint32_t)(esi), 0x4c75d8u);
/* 46b485: call 0x461b45 */
  esp -= 4; W32(esp, 0x46b48au); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
/* 46b48a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b48d: mov eax, esi */
  eax = esi;
/* 46b48f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b490: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b497: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b498: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b49b(void) {
  LOAD_REGS();
L_46b49b: /* 46b49b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b49f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b4a0: mov esi, ecx */
  esi = ecx;
/* 46b4a2: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 46b4a5: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 46b4a8: mov cx, word ptr [eax + 0x30] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 46b4ac: mov word ptr [esi + 0x30], cx */
  W16((uint32_t)(esi + 0x30u), (ecx & 0xffffu));
/* 46b4b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b4b1: mov ecx, esi */
  ecx = esi;
/* 46b4b3: call 0x4893bc */
  esp -= 4; W32(esp, 0x46b4b8u); SPILL(); f_4893bc(); if (g_unwind) return; RELOAD();
/* 46b4b8: mov eax, esi */
  eax = esi;
/* 46b4ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b4bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b4be(void) {
  LOAD_REGS();
L_46b4be: /* 46b4be: mov eax, 0x48c27c */
  eax = 0x48c27cu;
/* 46b4c3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b4c8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b4c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b4c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b4ca: mov esi, ecx */
  esi = ecx;
/* 46b4cc: xor eax, eax */
  eax = 0;
/* 46b4ce: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46b4d1: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 46b4d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b4d5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b4d8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46b4db: mov dword ptr [esi], 0x4c762c */
  W32((uint32_t)(esi), 0x4c762cu);
/* 46b4e1: call 0x461b45 */
  esp -= 4; W32(esp, 0x46b4e6u); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
/* 46b4e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b4e9: mov eax, esi */
  eax = esi;
/* 46b4eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b4ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b4f3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b4f4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b4f7(void) {
  LOAD_REGS();
L_46b4f7: /* 46b4f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b4f8: mov esi, ecx */
  esi = ecx;
/* 46b4fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b4fc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46b4ff: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b501: cmp dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b505: jne 0x46b515 */
  if (!zf) goto L_46b515;
L_46b507: /* 46b507: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 46b50a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b50c: je 0x46b515 */
  if (zf) goto L_46b515;
L_46b50e: /* 46b50e: mov ecx, eax */
  ecx = eax;
/* 46b510: call 0x461419 */
  esp -= 4; W32(esp, 0x46b515u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_46b515: /* 46b515: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b517: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46b51a: xor ecx, ecx */
  ecx = 0;
/* 46b51c: cmp dword ptr [eax + esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b521: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 46b524: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 46b526: ret  */
  esp += 4; SPILL(); return;
}

void f_46b527(void) {
  LOAD_REGS();
L_46b527: /* 46b527: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b528: mov ebp, esp */
  ebp = esp;
/* 46b52a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b52b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b52c: mov ebx, ecx */
  ebx = ecx;
/* 46b52e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 46b530: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 46b533: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b534: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 46b536: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b537: test byte ptr [edx + ebx + 4], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebx + 0x4u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b53b: jne 0x46b57c */
  if (!zf) goto L_46b57c;
L_46b53d: /* 46b53d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 46b53f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46b542: mov edi, esp */
  edi = esp;
/* 46b544: lea esi, [ebp + 8] */
  esi = (uint32_t)(ebp + 0x8u);
/* 46b547: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 46b549: mov eax, edx */
  eax = edx;
/* 46b54b: mov eax, dword ptr [eax + ebx + 0x28] */
  eax = R32((uint32_t)(eax + ebx + 0x28u));
/* 46b54f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 46b552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b553: mov ecx, eax */
  ecx = eax;
/* 46b555: call 0x468665 */
  esp -= 4; W32(esp, 0x46b55au); SPILL(); f_468665(); if (g_unwind) return; RELOAD();
/* 46b55a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 46b55d: add ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b55f: cmp ecx, dword ptr [0x48e2bc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x48e2bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b565: jne 0x46b57c */
  if (!zf) goto L_46b57c;
L_46b567: /* 46b567: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 46b569: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b56c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b56e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46b571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b573: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46b576: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b577: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46b57cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_46b57c: /* 46b57c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b57d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b57e: mov eax, ebx */
  eax = ebx;
/* 46b580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46b581: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46b582: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_46b585(void) {
  LOAD_REGS();
L_46b585: /* 46b585: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b587: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46b58a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b58c: test byte ptr [eax + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b590: jne 0x46b5a6 */
  if (!zf) goto L_46b5a6;
L_46b592: /* 46b592: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46b595: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b597: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 46b599: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46b59b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b59d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46b5a1: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x46b5a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b5a4: jmp 0x46b5b5 */
  goto L_46b5b5;
L_46b5a6: /* 46b5a6: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 46b5ac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46b5b0: call 0x469803 */
  esp -= 4; W32(esp, 0x46b5b5u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
L_46b5b5: /* 46b5b5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b5b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b5bc(void) {
  LOAD_REGS();
L_46b5bc: /* 46b5bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b5bd: mov ebp, esp */
  ebp = esp;
/* 46b5bf: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46b5c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b5c3: mov esi, ecx */
  esi = ecx;
/* 46b5c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b5c7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b5ca: test byte ptr [ecx + esi + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b5cf: jne 0x46b60d */
  if (!zf) goto L_46b60d;
L_46b5d1: /* 46b5d1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 46b5d3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46b5d6: mov eax, ecx */
  eax = ecx;
/* 46b5d8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b5db: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46b5df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b5e1: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 46b5e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46b5e5: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x46b5e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b5e8: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 46b5eb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 46b5ee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b5f0: cmp ecx, dword ptr [0x48e2bc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x48e2bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b5f6: jne 0x46b60d */
  if (!zf) goto L_46b60d;
L_46b5f8: /* 46b5f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b5fa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b5fd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b5ff: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46b602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b604: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46b607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b608: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46b60du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_46b60d: /* 46b60d: mov eax, esi */
  eax = esi;
/* 46b60f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b610: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b611: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46b614(void) {
  LOAD_REGS();
L_46b614: /* 46b614: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b615: mov ebp, esp */
  ebp = esp;
/* 46b617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b619: mov ebx, ecx */
  ebx = ecx;
/* 46b61b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 46b61d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 46b620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b621: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 46b623: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46b624: test byte ptr [edx + ebx + 4], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ebx + 0x4u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b628: jne 0x46b669 */
  if (!zf) goto L_46b669;
L_46b62a: /* 46b62a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46b62c: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46b62f: mov edi, esp */
  edi = esp;
/* 46b631: lea esi, [ebp + 8] */
  esi = (uint32_t)(ebp + 0x8u);
/* 46b634: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 46b636: mov eax, edx */
  eax = edx;
/* 46b638: mov eax, dword ptr [eax + ebx + 0x28] */
  eax = R32((uint32_t)(eax + ebx + 0x28u));
/* 46b63c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 46b63f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b640: mov ecx, eax */
  ecx = eax;
/* 46b642: call 0x468665 */
  esp -= 4; W32(esp, 0x46b647u); SPILL(); f_468665(); if (g_unwind) return; RELOAD();
/* 46b647: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 46b64a: add ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b64c: cmp ecx, dword ptr [0x48e2bc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x48e2bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b652: jne 0x46b669 */
  if (!zf) goto L_46b669;
L_46b654: /* 46b654: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 46b656: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b659: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b65b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46b65e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b660: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46b663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b664: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46b669u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_46b669: /* 46b669: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b66a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b66b: mov eax, ebx */
  eax = ebx;
/* 46b66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46b66e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46b66f: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_46b672(void) {
  LOAD_REGS();
L_46b672: /* 46b672: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b673: mov ebp, esp */
  ebp = esp;
/* 46b675: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46b678: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b679: mov esi, ecx */
  esi = ecx;
/* 46b67b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b67d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b680: test byte ptr [ecx + esi + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + esi + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b685: jne 0x46b6c3 */
  if (!zf) goto L_46b6c3;
L_46b687: /* 46b687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46b689: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46b68c: mov eax, ecx */
  eax = ecx;
/* 46b68e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b691: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46b695: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b697: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 46b69a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46b69b: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x46b69eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b69e: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 46b6a1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 46b6a4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b6a6: cmp ecx, dword ptr [0x48e2bc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x48e2bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b6ac: jne 0x46b6c3 */
  if (!zf) goto L_46b6c3;
L_46b6ae: /* 46b6ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b6b0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46b6b3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46b6b5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46b6b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b6ba: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46b6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46b6be: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46b6c3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_46b6c3: /* 46b6c3: mov eax, esi */
  eax = esi;
/* 46b6c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b6c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b6c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46b6ca(void) {
  LOAD_REGS();
L_46b6ca: /* 46b6ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b6cc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46b6cf: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b6d1: test byte ptr [eax + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b6d5: jne 0x46b6eb */
  if (!zf) goto L_46b6eb;
L_46b6d7: /* 46b6d7: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 46b6da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46b6dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46b6de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46b6e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46b6e2: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46b6e6: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x46b6e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46b6e9: jmp 0x46b6fa */
  goto L_46b6fa;
L_46b6eb: /* 46b6eb: push dword ptr [0x48e2bc] */
  { uint32_t v = R32((uint32_t)(0x48e2bcu)); esp -= 4; W32(esp, v); }
/* 46b6f1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46b6f5: call 0x469803 */
  esp -= 4; W32(esp, 0x46b6fau); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
L_46b6fa: /* 46b6fa: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46b6fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46b701(void) {
  LOAD_REGS();
L_46b701: /* 46b701: mov eax, 0x48c2a7 */
  eax = 0x48c2a7u;
/* 46b706: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46b70bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46b70b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b70c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46b70d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b70e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b70f: xor ebx, ebx */
  ebx = 0;
/* 46b711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b712: xor edi, edi */
  edi = 0;
/* 46b714: mov esi, ecx */
  esi = ecx;
/* 46b716: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 46b717: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b71a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46b71d: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 46b720: je 0x46b73f */
  if (zf) goto L_46b73f;
L_46b722: /* 46b722: mov dword ptr [esi], 0x48e23c */
  W32((uint32_t)(esi), 0x48e23cu);
/* 46b728: mov dword ptr [esi + 8], 0x48e22c */
  W32((uint32_t)(esi + 0x8u), 0x48e22cu);
/* 46b72f: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 46b732: mov dword ptr [esi + 0xc], 0x4c6d18 */
  W32((uint32_t)(esi + 0xcu), 0x4c6d18u);
/* 46b739: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46b73c: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
L_46b73f: /* 46b73f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b742: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b745: mov ecx, esi */
  ecx = esi;
/* 46b747: call 0x4627bb */
  esp -= 4; W32(esp, 0x46b74cu); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 46b74c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b74d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b74e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46b751: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 46b754: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46b757: call 0x46236d */
  esp -= 4; W32(esp, 0x46b75cu); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 46b75c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46b75e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46b761: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46b764: mov dword ptr [esi + eax], 0x4c684c */
  W32((uint32_t)(esi + eax), 0x4c684cu);
/* 46b76b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b76c: mov eax, esi */
  eax = esi;
/* 46b76e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b76f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46b770: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46b777: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46b778: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46b77b(void) {
  LOAD_REGS();
L_46b77b: /* 46b77b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b77c: mov ebp, esp */
  ebp = esp;
/* 46b77e: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46b781: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 46b783: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b786: xor edi, edi */
  edi = 0;
/* 46b788: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b78a: je 0x46b794 */
  if (zf) goto L_46b794;
L_46b78c: /* 46b78c: cmp dword ptr [ecx + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b78f: jae 0x46b794 */
  if (!cf) goto L_46b794;
L_46b791: /* 46b791: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_46b794: /* 46b794: test byte ptr [ebp + 0x14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b798: je 0x46b833 */
  if (zf) goto L_46b833;
L_46b79e: /* 46b79e: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b7a1: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 46b7a3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b7a5: je 0x46b833 */
  if (zf) goto L_46b833;
L_46b7ab: /* 46b7ab: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b7af: mov edx, dword ptr [0x48e2bc] */
  edx = R32((uint32_t)(0x48e2bcu));
/* 46b7b5: jne 0x46b7c4 */
  if (!zf) goto L_46b7c4;
L_46b7b7: /* 46b7b7: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
L_46b7ba: /* 46b7ba: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b7bd: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46b7bf: add dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 46b7c2: jmp 0x46b7dc */
  goto L_46b7dc;
L_46b7c4: /* 46b7c4: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b7c8: jne 0x46b7d4 */
  if (!zf) goto L_46b7d4;
L_46b7ca: /* 46b7ca: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b7ce: jne 0x46b7d9 */
  if (!zf) goto L_46b7d9;
L_46b7d0: /* 46b7d0: mov ebx, esi */
  ebx = esi;
/* 46b7d2: jmp 0x46b7ba */
  goto L_46b7ba;
L_46b7d4: /* 46b7d4: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b7d7: je 0x46b7dc */
  if (zf) goto L_46b7dc;
L_46b7d9: /* 46b7d9: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_46b7dc: /* 46b7dc: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b7df: jl 0x46b82f */
  if ((sf != of)) goto L_46b82f;
L_46b7e1: /* 46b7e1: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b7e4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b7e6: mov edi, dword ptr [ecx + 0x3c] */
  edi = R32((uint32_t)(ecx + 0x3cu));
/* 46b7e9: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46b7eb: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b7ee: jg 0x46b82f */
  if ((!zf && sf == of)) goto L_46b82f;
L_46b7f0: /* 46b7f0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 46b7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 46b7f6: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b7f8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b7fa: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46b7fc: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46b7ff: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 46b801: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b805: je 0x46b8a9 */
  if (zf) goto L_46b8a9;
L_46b80b: /* 46b80b: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46b80e: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 46b810: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b812: je 0x46b8a9 */
  if (zf) goto L_46b8a9;
L_46b818: /* 46b818: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b81b: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 46b81d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 46b820: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b822: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b824: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 46b826: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 46b829: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b82b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46b82d: jmp 0x46b8a9 */
  goto L_46b8a9;
L_46b82f: /* 46b82f: mov ebx, edx */
  ebx = edx;
/* 46b831: jmp 0x46b8a9 */
  goto L_46b8a9;
L_46b833: /* 46b833: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b837: je 0x46b8a3 */
  if (zf) goto L_46b8a3;
L_46b839: /* 46b839: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46b83b: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b83d: je 0x46b8a3 */
  if (zf) goto L_46b8a3;
L_46b83f: /* 46b83f: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b843: mov esi, dword ptr [0x48e2bc] */
  esi = R32((uint32_t)(0x48e2bcu));
/* 46b849: jne 0x46b85f */
  if (!zf) goto L_46b85f;
L_46b84b: /* 46b84b: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b84e: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46b851: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46b853: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 46b856: mov eax, ebx */
  eax = ebx;
L_46b858: /* 46b858: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 46b85b: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46b85d: jmp 0x46b87d */
  goto L_46b87d;
L_46b85f: /* 46b85f: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b863: jne 0x46b873 */
  if (!zf) goto L_46b873;
L_46b865: /* 46b865: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b868: mov ebx, edx */
  ebx = edx;
/* 46b86a: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46b86c: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 46b86f: mov eax, ebx */
  eax = ebx;
/* 46b871: jmp 0x46b858 */
  goto L_46b858;
L_46b873: /* 46b873: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b876: mov ebx, esi */
  ebx = esi;
/* 46b878: jne 0x46b87d */
  if (!zf) goto L_46b87d;
L_46b87a: /* 46b87a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_46b87d: /* 46b87d: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b87f: jl 0x46b89f */
  if ((sf != of)) goto L_46b89f;
L_46b881: /* 46b881: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b884: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b886: mov edi, dword ptr [ecx + 0x3c] */
  edi = R32((uint32_t)(ecx + 0x3cu));
/* 46b889: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46b88b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b88d: jg 0x46b89f */
  if ((!zf && sf == of)) goto L_46b89f;
L_46b88f: /* 46b88f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b891: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 46b894: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b896: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46b898: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 46b89b: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 46b89d: jmp 0x46b8a9 */
  goto L_46b8a9;
L_46b89f: /* 46b89f: mov ebx, esi */
  ebx = esi;
/* 46b8a1: jmp 0x46b8a9 */
  goto L_46b8a9;
L_46b8a3: /* 46b8a3: mov ebx, dword ptr [0x48e2bc] */
  ebx = R32((uint32_t)(0x48e2bcu));
L_46b8a9: /* 46b8a9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46b8ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b8ad: call 0x469803 */
  esp -= 4; W32(esp, 0x46b8b2u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46b8b2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46b8b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b8b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b8b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46b8b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46b8b9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46b8bc(void) {
  LOAD_REGS();
L_46b8bc: /* 46b8bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b8bd: mov ebp, esp */
  ebp = esp;
/* 46b8bf: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46b8c2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 46b8c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b8c6: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 46b8c9: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 46b8cc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46b8ce: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b8d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b8d1: je 0x46b8db */
  if (zf) goto L_46b8db;
L_46b8d3: /* 46b8d3: cmp dword ptr [ecx + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b8d6: jae 0x46b8db */
  if (!cf) goto L_46b8db;
L_46b8d8: /* 46b8d8: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
L_46b8db: /* 46b8db: mov edi, dword ptr [0x48e2bc] */
  edi = R32((uint32_t)(0x48e2bcu));
/* 46b8e1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b8e3: je 0x46b970 */
  if (zf) goto L_46b970;
L_46b8e9: /* 46b8e9: test byte ptr [ebp + 0x24], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b8ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b8ee: je 0x46b93f */
  if (zf) goto L_46b93f;
L_46b8f0: /* 46b8f0: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46b8f3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46b8f5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b8f7: je 0x46b93f */
  if (zf) goto L_46b93f;
L_46b8f9: /* 46b8f9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46b8fb: jl 0x46b96d */
  if ((sf != of)) goto L_46b96d;
L_46b8fd: /* 46b8fd: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b900: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b902: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46b905: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46b907: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b909: jg 0x46b96d */
  if ((!zf && sf == of)) goto L_46b96d;
L_46b90b: /* 46b90b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b90d: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 46b910: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b912: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46b914: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46b917: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 46b919: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b91d: je 0x46b96f */
  if (zf) goto L_46b96f;
L_46b91f: /* 46b91f: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46b922: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 46b924: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b926: je 0x46b96f */
  if (zf) goto L_46b96f;
L_46b928: /* 46b928: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b92b: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 46b92d: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 46b930: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b932: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b934: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 46b936: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 46b939: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b93b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46b93d: jmp 0x46b96f */
  goto L_46b96f;
L_46b93f: /* 46b93f: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b943: je 0x46b96d */
  if (zf) goto L_46b96d;
L_46b945: /* 46b945: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46b947: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b949: je 0x46b96d */
  if (zf) goto L_46b96d;
L_46b94b: /* 46b94b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46b94d: jl 0x46b96d */
  if ((sf != of)) goto L_46b96d;
L_46b94f: /* 46b94f: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b952: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b954: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46b957: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46b959: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b95b: jg 0x46b96d */
  if ((!zf && sf == of)) goto L_46b96d;
L_46b95d: /* 46b95d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46b95f: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 46b962: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46b964: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46b966: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 46b969: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 46b96b: jmp 0x46b96f */
  goto L_46b96f;
L_46b96d: /* 46b96d: mov esi, edi */
  esi = edi;
L_46b96f: /* 46b96f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46b970: /* 46b970: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46b973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b974: call 0x469803 */
  esp -= 4; W32(esp, 0x46b979u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46b979: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46b97c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46b97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46b97e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46b97f: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46b982(void) {
  LOAD_REGS();
L_46b982: /* 46b982: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46b983: mov ebp, esp */
  ebp = esp;
/* 46b985: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46b988: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 46b98a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b98c: je 0x46b996 */
  if (zf) goto L_46b996;
L_46b98e: /* 46b98e: cmp dword ptr [ecx + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46b991: jae 0x46b996 */
  if (!cf) goto L_46b996;
L_46b993: /* 46b993: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
L_46b996: /* 46b996: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46b997: mov bl, byte ptr [ebp + 0x14] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x14u))) & 0xffu);
/* 46b99a: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b99d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46b99e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46b99f: je 0x46ba45 */
  if (zf) goto L_46ba45;
L_46b9a5: /* 46b9a5: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46b9a8: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 46b9aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46b9ac: je 0x46ba45 */
  if (zf) goto L_46ba45;
L_46b9b2: /* 46b9b2: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b9b6: mov edx, dword ptr [0x48e2bc] */
  edx = R32((uint32_t)(0x48e2bcu));
/* 46b9bc: jne 0x46b9cd */
  if (!zf) goto L_46b9cd;
L_46b9be: /* 46b9be: mov edi, dword ptr [ecx + 0x3c] */
  edi = R32((uint32_t)(ecx + 0x3cu));
L_46b9c1: /* 46b9c1: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b9c4: sub edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46b9c6: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 46b9c8: add dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 46b9cb: jmp 0x46b9e5 */
  goto L_46b9e5;
L_46b9cd: /* 46b9cd: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b9d1: jne 0x46b9dc */
  if (!zf) goto L_46b9dc;
L_46b9d3: /* 46b9d3: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46b9d6: jne 0x46b9e2 */
  if (!zf) goto L_46b9e2;
L_46b9d8: /* 46b9d8: mov edi, esi */
  edi = esi;
/* 46b9da: jmp 0x46b9c1 */
  goto L_46b9c1;
L_46b9dc: /* 46b9dc: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46b9e0: je 0x46b9e5 */
  if (zf) goto L_46b9e5;
L_46b9e2: /* 46b9e2: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_46b9e5: /* 46b9e5: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b9e9: jl 0x46ba41 */
  if ((sf != of)) goto L_46ba41;
L_46b9eb: /* 46b9eb: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46b9ee: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46b9f0: mov edi, dword ptr [ecx + 0x3c] */
  edi = R32((uint32_t)(ecx + 0x3cu));
/* 46b9f3: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46b9f5: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 46b9f7: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46b9fa: jg 0x46ba41 */
  if ((!zf && sf == of)) goto L_46ba41;
L_46b9fc: /* 46b9fc: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 46b9ff: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 46ba02: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ba04: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ba06: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46ba08: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46ba0a: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46ba0d: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46ba0f: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 46ba11: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ba14: je 0x46bab4 */
  if (zf) goto L_46bab4;
L_46ba1a: /* 46ba1a: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46ba1d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 46ba1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46ba21: je 0x46bab4 */
  if (zf) goto L_46bab4;
L_46ba27: /* 46ba27: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 46ba2a: mov esi, dword ptr [ecx + 0x20] */
  esi = R32((uint32_t)(ecx + 0x20u));
/* 46ba2d: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 46ba2f: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 46ba31: lea eax, [eax + ebx*2] */
  eax = (uint32_t)(eax + ebx*2);
/* 46ba34: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 46ba36: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 46ba39: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ba3b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ba3d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46ba3f: jmp 0x46bab4 */
  goto L_46bab4;
L_46ba41: /* 46ba41: mov edi, edx */
  edi = edx;
/* 46ba43: jmp 0x46bab4 */
  goto L_46bab4;
L_46ba45: /* 46ba45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46ba48: je 0x46baae */
  if (zf) goto L_46baae;
L_46ba4a: /* 46ba4a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46ba4c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46ba4e: je 0x46baae */
  if (zf) goto L_46baae;
L_46ba50: /* 46ba50: cmp dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ba54: mov esi, dword ptr [0x48e2bc] */
  esi = R32((uint32_t)(0x48e2bcu));
/* 46ba5a: jne 0x46ba6d */
  if (!zf) goto L_46ba6d;
L_46ba5c: /* 46ba5c: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
L_46ba5f: /* 46ba5f: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46ba62: sub ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46ba64: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 46ba67: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 46ba69: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 46ba6b: jmp 0x46ba82 */
  goto L_46ba82;
L_46ba6d: /* 46ba6d: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ba71: jne 0x46ba77 */
  if (!zf) goto L_46ba77;
L_46ba73: /* 46ba73: mov ebx, edx */
  ebx = edx;
/* 46ba75: jmp 0x46ba5f */
  goto L_46ba5f;
L_46ba77: /* 46ba77: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ba7b: mov edi, esi */
  edi = esi;
/* 46ba7d: jne 0x46ba82 */
  if (!zf) goto L_46ba82;
L_46ba7f: /* 46ba7f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_46ba82: /* 46ba82: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46ba84: jl 0x46baaa */
  if ((sf != of)) goto L_46baaa;
L_46ba86: /* 46ba86: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46ba89: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46ba8b: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46ba8e: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46ba90: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 46ba92: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46ba94: jg 0x46baaa */
  if ((!zf && sf == of)) goto L_46baaa;
L_46ba96: /* 46ba96: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ba98: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 46ba9b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46ba9d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46ba9f: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46baa1: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 46baa4: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46baa6: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 46baa8: jmp 0x46bab4 */
  goto L_46bab4;
L_46baaa: /* 46baaa: mov edi, esi */
  edi = esi;
/* 46baac: jmp 0x46bab4 */
  goto L_46bab4;
L_46baae: /* 46baae: mov edi, dword ptr [0x48e2bc] */
  edi = R32((uint32_t)(0x48e2bcu));
L_46bab4: /* 46bab4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46bab7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46bab8: call 0x469803 */
  esp -= 4; W32(esp, 0x46babdu); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46babd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bac0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46bac1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bac2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46bac3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46bac4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46bac7(void) {
  LOAD_REGS();
L_46bac7: /* 46bac7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46bac8: mov ebp, esp */
  ebp = esp;
/* 46baca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46bacd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 46bad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bad1: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 46bad4: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 46bad7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46bad9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46badb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46badc: je 0x46bae6 */
  if (zf) goto L_46bae6;
L_46bade: /* 46bade: cmp dword ptr [ecx + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46bae1: jae 0x46bae6 */
  if (!cf) goto L_46bae6;
L_46bae3: /* 46bae3: mov dword ptr [ecx + 0x3c], edx */
  W32((uint32_t)(ecx + 0x3cu), edx);
L_46bae6: /* 46bae6: mov edi, dword ptr [0x48e2bc] */
  edi = R32((uint32_t)(0x48e2bcu));
/* 46baec: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46baee: je 0x46bb8a */
  if (zf) goto L_46bb8a;
L_46baf4: /* 46baf4: test byte ptr [ebp + 0x24], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46baf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46baf9: je 0x46bb53 */
  if (zf) goto L_46bb53;
L_46bafb: /* 46bafb: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46bafe: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46bb00: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bb02: je 0x46bb53 */
  if (zf) goto L_46bb53;
L_46bb04: /* 46bb04: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46bb06: jl 0x46bb87 */
  if ((sf != of)) goto L_46bb87;
L_46bb08: /* 46bb08: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46bb0b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46bb0d: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46bb10: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46bb12: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 46bb14: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46bb16: jg 0x46bb87 */
  if ((!zf && sf == of)) goto L_46bb87;
L_46bb18: /* 46bb18: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46bb1a: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 46bb1d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46bb1f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46bb21: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46bb23: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 46bb26: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46bb28: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 46bb2a: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46bb2e: je 0x46bb89 */
  if (zf) goto L_46bb89;
L_46bb30: /* 46bb30: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 46bb33: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 46bb35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bb37: je 0x46bb89 */
  if (zf) goto L_46bb89;
L_46bb39: /* 46bb39: mov ebx, dword ptr [ecx + 0x34] */
  ebx = R32((uint32_t)(ecx + 0x34u));
/* 46bb3c: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 46bb3f: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 46bb41: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 46bb43: lea eax, [eax + ebx*2] */
  eax = (uint32_t)(eax + ebx*2);
/* 46bb46: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 46bb48: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 46bb4b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46bb4d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46bb4f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bb51: jmp 0x46bb89 */
  goto L_46bb89;
L_46bb53: /* 46bb53: test byte ptr [ebp + 0x24], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x24u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46bb57: je 0x46bb87 */
  if (zf) goto L_46bb87;
L_46bb59: /* 46bb59: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46bb5b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bb5d: je 0x46bb87 */
  if (zf) goto L_46bb87;
L_46bb5f: /* 46bb5f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46bb61: jl 0x46bb87 */
  if ((sf != of)) goto L_46bb87;
L_46bb63: /* 46bb63: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 46bb66: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46bb68: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 46bb6b: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 46bb6d: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 46bb6f: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46bb71: jg 0x46bb87 */
  if ((!zf && sf == of)) goto L_46bb87;
L_46bb73: /* 46bb73: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46bb75: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 46bb78: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 46bb7a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46bb7c: sub dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(edx), r);
  }
/* 46bb7e: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 46bb81: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46bb83: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 46bb85: jmp 0x46bb89 */
  goto L_46bb89;
L_46bb87: /* 46bb87: mov esi, edi */
  esi = edi;
L_46bb89: /* 46bb89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46bb8a: /* 46bb8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46bb8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bb8e: call 0x469803 */
  esp -= 4; W32(esp, 0x46bb93u); SPILL(); f_469803(); if (g_unwind) return; RELOAD();
/* 46bb93: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bb96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46bb97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bb98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46bb99: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46bb9c(void) {
  LOAD_REGS();
L_46bb9c: /* 46bb9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bb9d: mov esi, ecx */
  esi = ecx;
/* 46bb9f: test byte ptr [esi + 0x40], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x40u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46bba3: je 0x46bbb0 */
  if (zf) goto L_46bbb0;
L_46bba5: /* 46bba5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 46bba8: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 46bbaa: call 0x461c65 */
  esp -= 4; W32(esp, 0x46bbafu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46bbaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46bbb0: /* 46bbb0: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 46bbb3: xor eax, eax */
  eax = 0;
/* 46bbb5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbb7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 46bbba: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbbc: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 46bbbf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbc1: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 46bbc4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbc6: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 46bbc9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbcb: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 46bbce: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 46bbd0: and dword ptr [esi + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x40u), r);
  }
/* 46bbd4: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 46bbd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bbd8: ret  */
  esp += 4; SPILL(); return;
}

void f_46bbd9(void) {
  LOAD_REGS();
L_46bbd9: /* 46bbd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bbda: mov esi, ecx */
  esi = ecx;
/* 46bbdc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 46bbdf: mov dword ptr [esi], 0x4c6ec0 */
  W32((uint32_t)(esi), 0x4c6ec0u);
/* 46bbe5: call 0x461a9e */
  esp -= 4; W32(esp, 0x46bbeau); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 46bbea: mov dword ptr [esi], 0x4c6f3c */
  W32((uint32_t)(esi), 0x4c6f3cu);
/* 46bbf0: mov eax, esi */
  eax = esi;
/* 46bbf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bbf3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bbf6(void) {
  LOAD_REGS();
L_46bbf6: /* 46bbf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bbf7: mov esi, ecx */
  esi = ecx;
/* 46bbf9: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 46bbfc: mov dword ptr [esi], 0x4c721c */
  W32((uint32_t)(esi), 0x4c721cu);
/* 46bc02: call 0x461a9e */
  esp -= 4; W32(esp, 0x46bc07u); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 46bc07: mov dword ptr [esi], 0x4c7960 */
  W32((uint32_t)(esi), 0x4c7960u);
/* 46bc0d: mov eax, esi */
  eax = esi;
/* 46bc0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bc10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bc13(void) {
  LOAD_REGS();
L_46bc13: /* 46bc13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bc14: mov esi, ecx */
  esi = ecx;
/* 46bc16: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 46bc19: mov dword ptr [esi], 0x4c7298 */
  W32((uint32_t)(esi), 0x4c7298u);
/* 46bc1f: call 0x461a9e */
  esp -= 4; W32(esp, 0x46bc24u); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 46bc24: mov dword ptr [esi], 0x4c79e0 */
  W32((uint32_t)(esi), 0x4c79e0u);
/* 46bc2a: mov eax, esi */
  eax = esi;
/* 46bc2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bc2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bc30(void) {
  LOAD_REGS();
L_46bc30: /* 46bc30: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46bc35: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bc3au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bc3a: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46bc3d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bc41: mov esi, ecx */
  esi = ecx;
/* 46bc43: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46bc46: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46bc49: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bc4d: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46bc52: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bc58: mov dword ptr [esi], 0x4c7a60 */
  W32((uint32_t)(esi), 0x4c7a60u);
/* 46bc5e: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bc63u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bc63: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bc69: call 0x488e1d */
  esp -= 4; W32(esp, 0x46bc6eu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46bc6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bc71: mov eax, esi */
  eax = esi;
/* 46bc73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bc74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bc7b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bc7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bc7f(void) {
  LOAD_REGS();
L_46bc7f: /* 46bc7f: mov eax, ecx */
  eax = ecx;
/* 46bc81: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46bc85: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46bc88: mov dword ptr [eax], 0x4c7a60 */
  W32((uint32_t)(eax), 0x4c7a60u);
/* 46bc8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46bc91(void) {
  LOAD_REGS();
L_46bc91: /* 46bc91: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46bc96: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bc9bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bc9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bc9c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46bc9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bca1: je 0x46bcca */
  if (zf) goto L_46bcca;
L_46bca3: /* 46bca3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46bca6: jne 0x46bcca */
  if (!zf) goto L_46bcca;
L_46bca8: /* 46bca8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46bcaa: call 0x4620da */
  esp -= 4; W32(esp, 0x46bcafu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46bcaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46bcb0: mov ecx, eax */
  ecx = eax;
/* 46bcb2: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46bcb5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bcb9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bcbb: je 0x46bcc6 */
  if (zf) goto L_46bcc6;
L_46bcbd: /* 46bcbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46bcbf: call 0x46bc30 */
  esp -= 4; W32(esp, 0x46bcc4u); SPILL(); f_46bc30(); if (g_unwind) return; RELOAD();
/* 46bcc4: jmp 0x46bcc8 */
  goto L_46bcc8;
L_46bcc6: /* 46bcc6: xor eax, eax */
  eax = 0;
L_46bcc8: /* 46bcc8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46bcca: /* 46bcca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bccd: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 46bccf: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46bcd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bcd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bcd8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bcd9: ret  */
  esp += 4; SPILL(); return;
}

void f_46bcda(void) {
  LOAD_REGS();
L_46bcda: /* 46bcda: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46bcdf: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bce4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bce4: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46bce7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bcea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bceb: mov esi, ecx */
  esi = ecx;
/* 46bced: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46bcf0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46bcf3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bcf7: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46bcfc: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bd02: mov dword ptr [esi], 0x4c7ac0 */
  W32((uint32_t)(esi), 0x4c7ac0u);
/* 46bd08: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bd0du); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bd0d: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bd13: call 0x488e1d */
  esp -= 4; W32(esp, 0x46bd18u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46bd18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bd1b: mov eax, esi */
  eax = esi;
/* 46bd1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bd1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bd25: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bd26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bd29(void) {
  LOAD_REGS();
L_46bd29: /* 46bd29: mov eax, ecx */
  eax = ecx;
/* 46bd2b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46bd2f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46bd32: mov dword ptr [eax], 0x4c7ac0 */
  W32((uint32_t)(eax), 0x4c7ac0u);
/* 46bd38: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46bd3b(void) {
  LOAD_REGS();
L_46bd3b: /* 46bd3b: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46bd40: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bd45u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bd45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bd46: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46bd49: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bd4b: je 0x46bd74 */
  if (zf) goto L_46bd74;
L_46bd4d: /* 46bd4d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46bd50: jne 0x46bd74 */
  if (!zf) goto L_46bd74;
L_46bd52: /* 46bd52: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46bd54: call 0x4620da */
  esp -= 4; W32(esp, 0x46bd59u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46bd59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46bd5a: mov ecx, eax */
  ecx = eax;
/* 46bd5c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46bd5f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bd63: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bd65: je 0x46bd70 */
  if (zf) goto L_46bd70;
L_46bd67: /* 46bd67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46bd69: call 0x46bcda */
  esp -= 4; W32(esp, 0x46bd6eu); SPILL(); f_46bcda(); if (g_unwind) return; RELOAD();
/* 46bd6e: jmp 0x46bd72 */
  goto L_46bd72;
L_46bd70: /* 46bd70: xor eax, eax */
  eax = 0;
L_46bd72: /* 46bd72: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46bd74: /* 46bd74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bd77: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 46bd79: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46bd7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bd7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bd82: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bd83: ret  */
  esp += 4; SPILL(); return;
}

void f_46bd84(void) {
  LOAD_REGS();
L_46bd84: /* 46bd84: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46bd89: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bd8eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bd8e: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46bd91: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bd94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bd95: mov esi, ecx */
  esi = ecx;
/* 46bd97: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46bd9a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46bd9d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bda1: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46bda6: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bdac: mov dword ptr [esi], 0x4c7b20 */
  W32((uint32_t)(esi), 0x4c7b20u);
/* 46bdb2: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bdb7u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bdb7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bdbd: call 0x488e1d */
  esp -= 4; W32(esp, 0x46bdc2u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46bdc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bdc5: mov eax, esi */
  eax = esi;
/* 46bdc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bdc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bdcf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bdd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bdd3(void) {
  LOAD_REGS();
L_46bdd3: /* 46bdd3: mov eax, ecx */
  eax = ecx;
/* 46bdd5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46bdd9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46bddc: mov dword ptr [eax], 0x4c7b20 */
  W32((uint32_t)(eax), 0x4c7b20u);
/* 46bde2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46bde5(void) {
  LOAD_REGS();
L_46bde5: /* 46bde5: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46bdea: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bdefu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bdef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bdf0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46bdf3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bdf5: je 0x46be1e */
  if (zf) goto L_46be1e;
L_46bdf7: /* 46bdf7: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46bdfa: jne 0x46be1e */
  if (!zf) goto L_46be1e;
L_46bdfc: /* 46bdfc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46bdfe: call 0x4620da */
  esp -= 4; W32(esp, 0x46be03u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46be03: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46be04: mov ecx, eax */
  ecx = eax;
/* 46be06: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46be09: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46be0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46be0f: je 0x46be1a */
  if (zf) goto L_46be1a;
L_46be11: /* 46be11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46be13: call 0x46bd84 */
  esp -= 4; W32(esp, 0x46be18u); SPILL(); f_46bd84(); if (g_unwind) return; RELOAD();
/* 46be18: jmp 0x46be1c */
  goto L_46be1c;
L_46be1a: /* 46be1a: xor eax, eax */
  eax = 0;
L_46be1c: /* 46be1c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46be1e: /* 46be1e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46be21: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 46be23: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46be24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46be25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46be2c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46be2d: ret  */
  esp += 4; SPILL(); return;
}

void f_46be2e(void) {
  LOAD_REGS();
L_46be2e: /* 46be2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46be2f: mov esi, ecx */
  esi = ecx;
/* 46be31: mov dword ptr [esi], 0x4c7b80 */
  W32((uint32_t)(esi), 0x4c7b80u);
/* 46be37: call 0x46961e */
  esp -= 4; W32(esp, 0x46be3cu); SPILL(); f_46961e(); if (g_unwind) return; RELOAD();
/* 46be3c: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46be42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46be43: ret  */
  esp += 4; SPILL(); return;
}

void f_46be44(void) {
  LOAD_REGS();
L_46be44: /* 46be44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46be45: mov esi, ecx */
  esi = ecx;
/* 46be47: mov dword ptr [esi], 0x4c7bf8 */
  W32((uint32_t)(esi), 0x4c7bf8u);
/* 46be4d: call 0x46961e */
  esp -= 4; W32(esp, 0x46be52u); SPILL(); f_46961e(); if (g_unwind) return; RELOAD();
/* 46be52: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46be58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46be59: ret  */
  esp += 4; SPILL(); return;
}

void f_46be5a(void) {
  LOAD_REGS();
L_46be5a: /* 46be5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46be5b: mov esi, ecx */
  esi = ecx;
/* 46be5d: mov dword ptr [esi], 0x4c7c70 */
  W32((uint32_t)(esi), 0x4c7c70u);
/* 46be63: call 0x46961e */
  esp -= 4; W32(esp, 0x46be68u); SPILL(); f_46961e(); if (g_unwind) return; RELOAD();
/* 46be68: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46be6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46be6f: ret  */
  esp += 4; SPILL(); return;
}

void f_46be70(void) {
  LOAD_REGS();
L_46be70: /* 46be70: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46be75: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46be7au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46be7a: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46be7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46be80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46be81: mov esi, ecx */
  esi = ecx;
/* 46be83: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46be86: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46be89: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46be8d: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46be92: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46be98: mov dword ptr [esi], 0x4c7ce8 */
  W32((uint32_t)(esi), 0x4c7ce8u);
/* 46be9e: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bea3u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bea3: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bea9: call 0x488e1d */
  esp -= 4; W32(esp, 0x46beaeu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46beae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46beb1: mov eax, esi */
  eax = esi;
/* 46beb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46beb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bebb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bebc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bebf(void) {
  LOAD_REGS();
L_46bebf: /* 46bebf: mov eax, ecx */
  eax = ecx;
/* 46bec1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46bec5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46bec8: mov dword ptr [eax], 0x4c7ce8 */
  W32((uint32_t)(eax), 0x4c7ce8u);
/* 46bece: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46bed1(void) {
  LOAD_REGS();
L_46bed1: /* 46bed1: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46bed6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bedbu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bedb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bedc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46bedf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bee1: je 0x46bf0a */
  if (zf) goto L_46bf0a;
L_46bee3: /* 46bee3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46bee6: jne 0x46bf0a */
  if (!zf) goto L_46bf0a;
L_46bee8: /* 46bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46beea: call 0x4620da */
  esp -= 4; W32(esp, 0x46beefu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46beef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46bef0: mov ecx, eax */
  ecx = eax;
/* 46bef2: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46bef5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bef9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46befb: je 0x46bf06 */
  if (zf) goto L_46bf06;
L_46befd: /* 46befd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46beff: call 0x46be70 */
  esp -= 4; W32(esp, 0x46bf04u); SPILL(); f_46be70(); if (g_unwind) return; RELOAD();
/* 46bf04: jmp 0x46bf08 */
  goto L_46bf08;
L_46bf06: /* 46bf06: xor eax, eax */
  eax = 0;
L_46bf08: /* 46bf08: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46bf0a: /* 46bf0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bf0d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46bf0f: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46bf10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bf11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bf18: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bf19: ret  */
  esp += 4; SPILL(); return;
}

void f_46bf1a(void) {
  LOAD_REGS();
L_46bf1a: /* 46bf1a: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46bf1f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bf24u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bf24: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46bf27: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bf2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bf2b: mov esi, ecx */
  esi = ecx;
/* 46bf2d: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46bf30: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46bf33: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bf37: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46bf3c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bf42: mov dword ptr [esi], 0x4c7d40 */
  W32((uint32_t)(esi), 0x4c7d40u);
/* 46bf48: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bf4du); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bf4d: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bf53: call 0x488e1d */
  esp -= 4; W32(esp, 0x46bf58u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46bf58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bf5b: mov eax, esi */
  eax = esi;
/* 46bf5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bf5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bf65: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bf66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46bf69(void) {
  LOAD_REGS();
L_46bf69: /* 46bf69: mov eax, ecx */
  eax = ecx;
/* 46bf6b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46bf6f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46bf72: mov dword ptr [eax], 0x4c7d40 */
  W32((uint32_t)(eax), 0x4c7d40u);
/* 46bf78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46bf7b(void) {
  LOAD_REGS();
L_46bf7b: /* 46bf7b: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46bf80: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bf85u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bf85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bf86: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46bf89: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bf8b: je 0x46bfb4 */
  if (zf) goto L_46bfb4;
L_46bf8d: /* 46bf8d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46bf90: jne 0x46bfb4 */
  if (!zf) goto L_46bfb4;
L_46bf92: /* 46bf92: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46bf94: call 0x4620da */
  esp -= 4; W32(esp, 0x46bf99u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46bf99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46bf9a: mov ecx, eax */
  ecx = eax;
/* 46bf9c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46bf9f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bfa3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46bfa5: je 0x46bfb0 */
  if (zf) goto L_46bfb0;
L_46bfa7: /* 46bfa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46bfa9: call 0x46bf1a */
  esp -= 4; W32(esp, 0x46bfaeu); SPILL(); f_46bf1a(); if (g_unwind) return; RELOAD();
/* 46bfae: jmp 0x46bfb2 */
  goto L_46bfb2;
L_46bfb0: /* 46bfb0: xor eax, eax */
  eax = 0;
L_46bfb2: /* 46bfb2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46bfb4: /* 46bfb4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46bfb7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46bfb9: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46bfba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46bfbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46bfc2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46bfc3: ret  */
  esp += 4; SPILL(); return;
}

void f_46bfc4(void) {
  LOAD_REGS();
L_46bfc4: /* 46bfc4: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46bfc9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46bfceu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46bfce: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46bfd1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46bfd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46bfd5: mov esi, ecx */
  esi = ecx;
/* 46bfd7: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46bfda: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46bfdd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46bfe1: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46bfe6: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bfec: mov dword ptr [esi], 0x4c7d98 */
  W32((uint32_t)(esi), 0x4c7d98u);
/* 46bff2: call 0x488f1b */
  esp -= 4; W32(esp, 0x46bff7u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46bff7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46bffd: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c002u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c002: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c005: mov eax, esi */
  eax = esi;
/* 46c007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c008: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c00f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c010: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c013(void) {
  LOAD_REGS();
L_46c013: /* 46c013: mov eax, ecx */
  eax = ecx;
/* 46c015: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46c019: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46c01c: mov dword ptr [eax], 0x4c7d98 */
  W32((uint32_t)(eax), 0x4c7d98u);
/* 46c022: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c025(void) {
  LOAD_REGS();
L_46c025: /* 46c025: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c02a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c02fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c02f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c030: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c033: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c035: je 0x46c05e */
  if (zf) goto L_46c05e;
L_46c037: /* 46c037: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c03a: jne 0x46c05e */
  if (!zf) goto L_46c05e;
L_46c03c: /* 46c03c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46c03e: call 0x4620da */
  esp -= 4; W32(esp, 0x46c043u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c043: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c044: mov ecx, eax */
  ecx = eax;
/* 46c046: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c049: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c04d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c04f: je 0x46c05a */
  if (zf) goto L_46c05a;
L_46c051: /* 46c051: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c053: call 0x46bfc4 */
  esp -= 4; W32(esp, 0x46c058u); SPILL(); f_46bfc4(); if (g_unwind) return; RELOAD();
/* 46c058: jmp 0x46c05c */
  goto L_46c05c;
L_46c05a: /* 46c05a: xor eax, eax */
  eax = 0;
L_46c05c: /* 46c05c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c05e: /* 46c05e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c061: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46c063: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46c064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c06c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c06d: ret  */
  esp += 4; SPILL(); return;
}

void f_46c06e(void) {
  LOAD_REGS();
L_46c06e: /* 46c06e: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c073: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c078u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c078: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c07b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c07e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c07f: mov esi, ecx */
  esi = ecx;
/* 46c081: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c084: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c087: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c08b: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c090: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c096: mov dword ptr [esi], 0x4c7df0 */
  W32((uint32_t)(esi), 0x4c7df0u);
/* 46c09c: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c0a1u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c0a1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c0a7: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c0acu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c0ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c0af: mov eax, esi */
  eax = esi;
/* 46c0b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c0b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c0b9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c0ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c0bd(void) {
  LOAD_REGS();
L_46c0bd: /* 46c0bd: mov eax, ecx */
  eax = ecx;
/* 46c0bf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46c0c3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46c0c6: mov dword ptr [eax], 0x4c7df0 */
  W32((uint32_t)(eax), 0x4c7df0u);
/* 46c0cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c0cf(void) {
  LOAD_REGS();
L_46c0cf: /* 46c0cf: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c0d4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c0d9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c0d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c0da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c0dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c0df: je 0x46c108 */
  if (zf) goto L_46c108;
L_46c0e1: /* 46c0e1: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c0e4: jne 0x46c108 */
  if (!zf) goto L_46c108;
L_46c0e6: /* 46c0e6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46c0e8: call 0x4620da */
  esp -= 4; W32(esp, 0x46c0edu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c0ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c0ee: mov ecx, eax */
  ecx = eax;
/* 46c0f0: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c0f3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c0f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c0f9: je 0x46c104 */
  if (zf) goto L_46c104;
L_46c0fb: /* 46c0fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c0fd: call 0x46c06e */
  esp -= 4; W32(esp, 0x46c102u); SPILL(); f_46c06e(); if (g_unwind) return; RELOAD();
/* 46c102: jmp 0x46c106 */
  goto L_46c106;
L_46c104: /* 46c104: xor eax, eax */
  eax = 0;
L_46c106: /* 46c106: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c108: /* 46c108: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c10b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46c10d: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46c10e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c10f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c116: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c117: ret  */
  esp += 4; SPILL(); return;
}

void f_46c118(void) {
  LOAD_REGS();
L_46c118: /* 46c118: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c11d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c122u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c122: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c125: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c129: mov esi, ecx */
  esi = ecx;
/* 46c12b: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c12e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c131: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c135: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c13a: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c140: mov dword ptr [esi], 0x4c7e48 */
  W32((uint32_t)(esi), 0x4c7e48u);
/* 46c146: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c14bu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c14b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c151: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c156u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c156: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c159: mov eax, esi */
  eax = esi;
/* 46c15b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c15c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c163: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c164: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c167(void) {
  LOAD_REGS();
L_46c167: /* 46c167: mov eax, ecx */
  eax = ecx;
/* 46c169: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46c16d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46c170: mov dword ptr [eax], 0x4c7e48 */
  W32((uint32_t)(eax), 0x4c7e48u);
/* 46c176: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c179(void) {
  LOAD_REGS();
L_46c179: /* 46c179: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c17e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c183u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c184: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c187: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c189: je 0x46c1b2 */
  if (zf) goto L_46c1b2;
L_46c18b: /* 46c18b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c18e: jne 0x46c1b2 */
  if (!zf) goto L_46c1b2;
L_46c190: /* 46c190: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46c192: call 0x4620da */
  esp -= 4; W32(esp, 0x46c197u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c197: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c198: mov ecx, eax */
  ecx = eax;
/* 46c19a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c19d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c1a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c1a3: je 0x46c1ae */
  if (zf) goto L_46c1ae;
L_46c1a5: /* 46c1a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c1a7: call 0x46c118 */
  esp -= 4; W32(esp, 0x46c1acu); SPILL(); f_46c118(); if (g_unwind) return; RELOAD();
/* 46c1ac: jmp 0x46c1b0 */
  goto L_46c1b0;
L_46c1ae: /* 46c1ae: xor eax, eax */
  eax = 0;
L_46c1b0: /* 46c1b0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c1b2: /* 46c1b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c1b5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46c1b7: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46c1b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c1b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c1c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c1c1: ret  */
  esp += 4; SPILL(); return;
}

void f_46c1c2(void) {
  LOAD_REGS();
L_46c1c2: /* 46c1c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46c1c3: mov ebp, esp */
  ebp = esp;
/* 46c1c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c1c6: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 46c1c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46c1cb: jbe 0x46c1db */
  if ((cf | zf)) goto L_46c1db;
L_46c1cd: /* 46c1cd: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46c1d0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 46c1d3: call 0x46b41f */
  esp -= 4; W32(esp, 0x46c1d8u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 46c1d8: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 46c1d9: jne 0x46c1cd */
  if (!zf) goto L_46c1cd;
L_46c1db: /* 46c1db: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46c1de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c1e1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46c1e3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 46c1e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46c1e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c1ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46c1eb: ret  */
  esp += 4; SPILL(); return;
}

void f_46c1ec(void) {
  LOAD_REGS();
L_46c1ec: /* 46c1ec: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c1f1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c1f6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c1f6: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c1f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c1fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c1fd: mov esi, ecx */
  esi = ecx;
/* 46c1ff: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c202: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c205: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c209: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c20e: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c214: mov dword ptr [esi], 0x4c7ea0 */
  W32((uint32_t)(esi), 0x4c7ea0u);
/* 46c21a: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c21fu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c21f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c225: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c22au); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c22a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c22d: mov eax, esi */
  eax = esi;
/* 46c22f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c230: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c237: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c238: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c23b(void) {
  LOAD_REGS();
L_46c23b: /* 46c23b: mov eax, ecx */
  eax = ecx;
/* 46c23d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46c241: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46c244: mov dword ptr [eax], 0x4c7ea0 */
  W32((uint32_t)(eax), 0x4c7ea0u);
/* 46c24a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c24d(void) {
  LOAD_REGS();
L_46c24d: /* 46c24d: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c252: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c257u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c258: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c25b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c25d: je 0x46c286 */
  if (zf) goto L_46c286;
L_46c25f: /* 46c25f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c262: jne 0x46c286 */
  if (!zf) goto L_46c286;
L_46c264: /* 46c264: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46c266: call 0x4620da */
  esp -= 4; W32(esp, 0x46c26bu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c26b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c26c: mov ecx, eax */
  ecx = eax;
/* 46c26e: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c271: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c275: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c277: je 0x46c282 */
  if (zf) goto L_46c282;
L_46c279: /* 46c279: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c27b: call 0x46c1ec */
  esp -= 4; W32(esp, 0x46c280u); SPILL(); f_46c1ec(); if (g_unwind) return; RELOAD();
/* 46c280: jmp 0x46c284 */
  goto L_46c284;
L_46c282: /* 46c282: xor eax, eax */
  eax = 0;
L_46c284: /* 46c284: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c286: /* 46c286: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c289: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 46c28b: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46c28c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c28d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c294: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c295: ret  */
  esp += 4; SPILL(); return;
}

void f_46c296(void) {
  LOAD_REGS();
L_46c296: /* 46c296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c297: mov esi, ecx */
  esi = ecx;
/* 46c299: mov dword ptr [esi], 0x4c7ef8 */
  W32((uint32_t)(esi), 0x4c7ef8u);
/* 46c29f: call 0x46970e */
  esp -= 4; W32(esp, 0x46c2a4u); SPILL(); f_46970e(); if (g_unwind) return; RELOAD();
/* 46c2a4: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46c2aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c2ab: ret  */
  esp += 4; SPILL(); return;
}

void f_46c2ac(void) {
  LOAD_REGS();
L_46c2ac: /* 46c2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c2ad: mov esi, ecx */
  esi = ecx;
/* 46c2af: mov dword ptr [esi], 0x4c7f64 */
  W32((uint32_t)(esi), 0x4c7f64u);
/* 46c2b5: call 0x46970e */
  esp -= 4; W32(esp, 0x46c2bau); SPILL(); f_46970e(); if (g_unwind) return; RELOAD();
/* 46c2ba: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46c2c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c2c1: ret  */
  esp += 4; SPILL(); return;
}

void f_46c2c2(void) {
  LOAD_REGS();
L_46c2c2: /* 46c2c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c2c3: mov esi, ecx */
  esi = ecx;
/* 46c2c5: mov dword ptr [esi], 0x4c7fd0 */
  W32((uint32_t)(esi), 0x4c7fd0u);
/* 46c2cb: call 0x46970e */
  esp -= 4; W32(esp, 0x46c2d0u); SPILL(); f_46970e(); if (g_unwind) return; RELOAD();
/* 46c2d0: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46c2d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c2d7: ret  */
  esp += 4; SPILL(); return;
}

void f_46c2d8(void) {
  LOAD_REGS();
L_46c2d8: /* 46c2d8: mov eax, 0x48c255 */
  eax = 0x48c255u;
/* 46c2dd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c2e2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c2e2: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c2e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c2e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c2e9: mov esi, ecx */
  esi = ecx;
/* 46c2eb: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c2ee: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c2f1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c2f5: mov dword ptr [esi], 0x4c77e0 */
  W32((uint32_t)(esi), 0x4c77e0u);
/* 46c2fb: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46c2ff: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c304: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c30a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46c30e: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c313u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46c314: mov ecx, esi */
  ecx = esi;
/* 46c316: call 0x469740 */
  esp -= 4; W32(esp, 0x46c31bu); SPILL(); f_469740(); if (g_unwind) return; RELOAD();
/* 46c31b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c321: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c326u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c326: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c329: mov eax, esi */
  eax = esi;
/* 46c32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c32c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c333: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c334: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c337(void) {
  LOAD_REGS();
L_46c337: /* 46c337: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46c33b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c33c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46c340: mov esi, ecx */
  esi = ecx;
/* 46c342: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c345: mov dword ptr [esi], 0x4c77e0 */
  W32((uint32_t)(esi), 0x4c77e0u);
/* 46c34b: and dword ptr [esi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 46c34f: call 0x469740 */
  esp -= 4; W32(esp, 0x46c354u); SPILL(); f_469740(); if (g_unwind) return; RELOAD();
/* 46c354: mov eax, esi */
  eax = esi;
/* 46c356: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c357: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c35a(void) {
  LOAD_REGS();
L_46c35a: /* 46c35a: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c35f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c364u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c365: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c368: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c36a: je 0x46c393 */
  if (zf) goto L_46c393;
L_46c36c: /* 46c36c: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c36f: jne 0x46c393 */
  if (!zf) goto L_46c393;
L_46c371: /* 46c371: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 46c373: call 0x4620da */
  esp -= 4; W32(esp, 0x46c378u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c378: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c379: mov ecx, eax */
  ecx = eax;
/* 46c37b: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c37e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c382: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c384: je 0x46c38f */
  if (zf) goto L_46c38f;
L_46c386: /* 46c386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c388: call 0x46c2d8 */
  esp -= 4; W32(esp, 0x46c38du); SPILL(); f_46c2d8(); if (g_unwind) return; RELOAD();
/* 46c38d: jmp 0x46c391 */
  goto L_46c391;
L_46c38f: /* 46c38f: xor eax, eax */
  eax = 0;
L_46c391: /* 46c391: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c393: /* 46c393: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c396: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 46c398: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46c399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c39a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c3a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c3a2: ret  */
  esp += 4; SPILL(); return;
}

void f_46c3a3(void) {
  LOAD_REGS();
L_46c3a3: /* 46c3a3: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c3a8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c3adu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c3ad: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c3b0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c3b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c3b4: mov esi, ecx */
  esi = ecx;
/* 46c3b6: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c3b9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c3bc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c3c0: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c3c5: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c3cb: mov dword ptr [esi], 0x4c803c */
  W32((uint32_t)(esi), 0x4c803cu);
/* 46c3d1: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c3d6u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c3d6: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c3dbu); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c3db: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c3e1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c3e4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c3e7: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c3ecu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c3ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c3ef: mov eax, esi */
  eax = esi;
/* 46c3f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c3f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c3f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c3fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c3fd(void) {
  LOAD_REGS();
L_46c3fd: /* 46c3fd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46c401: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c402: mov esi, ecx */
  esi = ecx;
/* 46c404: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c407: mov dword ptr [esi], 0x4c803c */
  W32((uint32_t)(esi), 0x4c803cu);
/* 46c40d: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c412u); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c412: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c415: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c418: mov eax, esi */
  eax = esi;
/* 46c41a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c41b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c41e(void) {
  LOAD_REGS();
L_46c41e: /* 46c41e: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c423: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c428u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c429: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c42c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c42e: je 0x46c457 */
  if (zf) goto L_46c457;
L_46c430: /* 46c430: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c433: jne 0x46c457 */
  if (!zf) goto L_46c457;
L_46c435: /* 46c435: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 46c437: call 0x4620da */
  esp -= 4; W32(esp, 0x46c43cu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c43c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c43d: mov ecx, eax */
  ecx = eax;
/* 46c43f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c442: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c446: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c448: je 0x46c453 */
  if (zf) goto L_46c453;
L_46c44a: /* 46c44a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c44c: call 0x46c3a3 */
  esp -= 4; W32(esp, 0x46c451u); SPILL(); f_46c3a3(); if (g_unwind) return; RELOAD();
/* 46c451: jmp 0x46c455 */
  goto L_46c455;
L_46c453: /* 46c453: xor eax, eax */
  eax = 0;
L_46c455: /* 46c455: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c457: /* 46c457: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c45a: xor eax, eax */
  eax = 0;
/* 46c45c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46c45d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c45e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c465: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c466: ret  */
  esp += 4; SPILL(); return;
}

void f_46c467(void) {
  LOAD_REGS();
L_46c467: /* 46c467: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c46c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c471u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c471: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c474: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c478: mov esi, ecx */
  esi = ecx;
/* 46c47a: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c47d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c480: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c484: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c489: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c48f: mov dword ptr [esi], 0x4c8098 */
  W32((uint32_t)(esi), 0x4c8098u);
/* 46c495: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c49au); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c49a: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c49fu); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c49f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c4a5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c4a8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c4ab: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c4b0u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c4b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c4b3: mov eax, esi */
  eax = esi;
/* 46c4b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c4b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c4bd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c4be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c4c1(void) {
  LOAD_REGS();
L_46c4c1: /* 46c4c1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46c4c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c4c6: mov esi, ecx */
  esi = ecx;
/* 46c4c8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c4cb: mov dword ptr [esi], 0x4c8098 */
  W32((uint32_t)(esi), 0x4c8098u);
/* 46c4d1: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c4d6u); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c4d6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c4d9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c4dc: mov eax, esi */
  eax = esi;
/* 46c4de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c4df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c4e2(void) {
  LOAD_REGS();
L_46c4e2: /* 46c4e2: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c4e7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c4ecu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c4ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c4ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c4f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c4f2: je 0x46c51b */
  if (zf) goto L_46c51b;
L_46c4f4: /* 46c4f4: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c4f7: jne 0x46c51b */
  if (!zf) goto L_46c51b;
L_46c4f9: /* 46c4f9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 46c4fb: call 0x4620da */
  esp -= 4; W32(esp, 0x46c500u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c500: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c501: mov ecx, eax */
  ecx = eax;
/* 46c503: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c506: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c50a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c50c: je 0x46c517 */
  if (zf) goto L_46c517;
L_46c50e: /* 46c50e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c510: call 0x46c467 */
  esp -= 4; W32(esp, 0x46c515u); SPILL(); f_46c467(); if (g_unwind) return; RELOAD();
/* 46c515: jmp 0x46c519 */
  goto L_46c519;
L_46c517: /* 46c517: xor eax, eax */
  eax = 0;
L_46c519: /* 46c519: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c51b: /* 46c51b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c51e: xor eax, eax */
  eax = 0;
/* 46c520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46c521: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c522: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c529: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c52a: ret  */
  esp += 4; SPILL(); return;
}

void f_46c52b(void) {
  LOAD_REGS();
L_46c52b: /* 46c52b: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 46c530: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c535u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c535: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c538: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c53b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c53c: mov esi, ecx */
  esi = ecx;
/* 46c53e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46c541: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c544: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c548: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 46c54d: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c553: mov dword ptr [esi], 0x4c80f4 */
  W32((uint32_t)(esi), 0x4c80f4u);
/* 46c559: call 0x488f1b */
  esp -= 4; W32(esp, 0x46c55eu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 46c55e: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c563u); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c563: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46c569: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c56c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c56f: call 0x488e1d */
  esp -= 4; W32(esp, 0x46c574u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46c574: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c577: mov eax, esi */
  eax = esi;
/* 46c579: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c57a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c581: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c582: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c585(void) {
  LOAD_REGS();
L_46c585: /* 46c585: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46c589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c58a: mov esi, ecx */
  esi = ecx;
/* 46c58c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46c58f: mov dword ptr [esi], 0x4c80f4 */
  W32((uint32_t)(esi), 0x4c80f4u);
/* 46c595: call 0x4885f7 */
  esp -= 4; W32(esp, 0x46c59au); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 46c59a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 46c59d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 46c5a0: mov eax, esi */
  eax = esi;
/* 46c5a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c5a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46c5a6(void) {
  LOAD_REGS();
L_46c5a6: /* 46c5a6: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 46c5ab: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c5b0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c5b1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c5b4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c5b6: je 0x46c5df */
  if (zf) goto L_46c5df;
L_46c5b8: /* 46c5b8: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c5bb: jne 0x46c5df */
  if (!zf) goto L_46c5df;
L_46c5bd: /* 46c5bd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 46c5bf: call 0x4620da */
  esp -= 4; W32(esp, 0x46c5c4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46c5c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c5c5: mov ecx, eax */
  ecx = eax;
/* 46c5c7: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 46c5ca: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c5ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c5d0: je 0x46c5db */
  if (zf) goto L_46c5db;
L_46c5d2: /* 46c5d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c5d4: call 0x46c52b */
  esp -= 4; W32(esp, 0x46c5d9u); SPILL(); f_46c52b(); if (g_unwind) return; RELOAD();
/* 46c5d9: jmp 0x46c5dd */
  goto L_46c5dd;
L_46c5db: /* 46c5db: xor eax, eax */
  eax = 0;
L_46c5dd: /* 46c5dd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46c5df: /* 46c5df: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c5e2: xor eax, eax */
  eax = 0;
/* 46c5e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46c5e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c5e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c5ed: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c5ee: ret  */
  esp += 4; SPILL(); return;
}

void f_46c5ef(void) {
  LOAD_REGS();
L_46c5ef: /* 46c5ef: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c5f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46c5f3: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46c5f7: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46c5fb: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46c5ff: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46c603: call 0x46a572 */
  esp -= 4; W32(esp, 0x46c608u); SPILL(); f_46a572(); if (g_unwind) return; RELOAD();
/* 46c608: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46c60b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46c60e(void) {
  LOAD_REGS();
L_46c60e: /* 46c60e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c60f: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46c613: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c617: mov esi, ecx */
  esi = ecx;
/* 46c619: je 0x46c63f */
  if (zf) goto L_46c63f;
L_46c61b: /* 46c61b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c61c: push 0x46be2e */
  { uint32_t v = 0x46be2eu; esp -= 4; W32(esp, v); }
/* 46c621: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46c624: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46c626: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46c628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c629: call 0x48be30 */
  esp -= 4; W32(esp, 0x46c62eu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46c62e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c631: je 0x46c63a */
  if (zf) goto L_46c63a;
L_46c633: /* 46c633: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c634: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46c639u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46c639: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c63a: /* 46c63a: mov eax, edi */
  eax = edi;
/* 46c63c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46c63d: jmp 0x46c654 */
  goto L_46c654;
L_46c63f: /* 46c63f: mov ecx, esi */
  ecx = esi;
/* 46c641: call 0x46be2e */
  esp -= 4; W32(esp, 0x46c646u); SPILL(); f_46be2e(); if (g_unwind) return; RELOAD();
/* 46c646: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c649: je 0x46c652 */
  if (zf) goto L_46c652;
L_46c64b: /* 46c64b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c64c: call 0x461c65 */
  esp -= 4; W32(esp, 0x46c651u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46c651: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c652: /* 46c652: mov eax, esi */
  eax = esi;
L_46c654: /* 46c654: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c655: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46c656: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c659(void) {
  LOAD_REGS();
L_46c659: /* 46c659: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c65a: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46c65e: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c662: mov esi, ecx */
  esi = ecx;
/* 46c664: je 0x46c68a */
  if (zf) goto L_46c68a;
L_46c666: /* 46c666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c667: push 0x46be44 */
  { uint32_t v = 0x46be44u; esp -= 4; W32(esp, v); }
/* 46c66c: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46c66f: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46c671: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46c673: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c674: call 0x48be30 */
  esp -= 4; W32(esp, 0x46c679u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46c679: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c67c: je 0x46c685 */
  if (zf) goto L_46c685;
L_46c67e: /* 46c67e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c67f: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46c684u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46c684: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c685: /* 46c685: mov eax, edi */
  eax = edi;
/* 46c687: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46c688: jmp 0x46c69f */
  goto L_46c69f;
L_46c68a: /* 46c68a: mov ecx, esi */
  ecx = esi;
/* 46c68c: call 0x46be44 */
  esp -= 4; W32(esp, 0x46c691u); SPILL(); f_46be44(); if (g_unwind) return; RELOAD();
/* 46c691: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c694: je 0x46c69d */
  if (zf) goto L_46c69d;
L_46c696: /* 46c696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c697: call 0x461c65 */
  esp -= 4; W32(esp, 0x46c69cu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46c69c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c69d: /* 46c69d: mov eax, esi */
  eax = esi;
L_46c69f: /* 46c69f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c6a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46c6a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c6a4(void) {
  LOAD_REGS();
L_46c6a4: /* 46c6a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c6a5: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 46c6a9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c6ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c6ad: mov esi, ecx */
  esi = ecx;
/* 46c6af: je 0x46c6d5 */
  if (zf) goto L_46c6d5;
L_46c6b1: /* 46c6b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c6b2: push 0x46be5a */
  { uint32_t v = 0x46be5au; esp -= 4; W32(esp, v); }
/* 46c6b7: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46c6ba: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46c6bc: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 46c6be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c6bf: call 0x48be30 */
  esp -= 4; W32(esp, 0x46c6c4u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46c6c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c6c7: je 0x46c6d0 */
  if (zf) goto L_46c6d0;
L_46c6c9: /* 46c6c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c6ca: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46c6cfu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46c6cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c6d0: /* 46c6d0: mov eax, edi */
  eax = edi;
/* 46c6d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46c6d3: jmp 0x46c6ea */
  goto L_46c6ea;
L_46c6d5: /* 46c6d5: mov ecx, esi */
  ecx = esi;
/* 46c6d7: call 0x46be5a */
  esp -= 4; W32(esp, 0x46c6dcu); SPILL(); f_46be5a(); if (g_unwind) return; RELOAD();
/* 46c6dc: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46c6df: je 0x46c6e8 */
  if (zf) goto L_46c6e8;
L_46c6e1: /* 46c6e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c6e2: call 0x461c65 */
  esp -= 4; W32(esp, 0x46c6e7u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46c6e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46c6e8: /* 46c6e8: mov eax, esi */
  eax = esi;
L_46c6ea: /* 46c6ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c6eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46c6ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c6ef(void) {
  LOAD_REGS();
L_46c6ef: /* 46c6ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c6f0: mov esi, ecx */
  esi = ecx;
/* 46c6f2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 46c6f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c6f7: je 0x46c707 */
  if (zf) goto L_46c707;
L_46c6f9: /* 46c6f9: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46c6fd: call 0x46186f */
  esp -= 4; W32(esp, 0x46c702u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c702: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c705: jne 0x46c70a */
  if (!zf) goto L_46c70a;
L_46c707: /* 46c707: mov byte ptr [esi], 1 */
  W8((uint32_t)(esi), 0x1u);
L_46c70a: /* 46c70a: mov eax, esi */
  eax = esi;
/* 46c70c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c70d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46c710(void) {
  LOAD_REGS();
L_46c710: /* 46c710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c711: mov esi, ecx */
  esi = ecx;
/* 46c713: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 46c715: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c717: je 0x46c729 */
  if (zf) goto L_46c729;
L_46c719: /* 46c719: call 0x46581a */
  esp -= 4; W32(esp, 0x46c71eu); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 46c71e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c721: je 0x46c729 */
  if (zf) goto L_46c729;
L_46c723: /* 46c723: and byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 46c727: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c728: ret  */
  esp += 4; SPILL(); return;
L_46c729: /* 46c729: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 46c72c: mov byte ptr [esi + 4], 1 */
  W8((uint32_t)(esi + 0x4u), 0x1u);
/* 46c730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c731: ret  */
  esp += 4; SPILL(); return;
}

void f_46c732(void) {
  LOAD_REGS();
L_46c732: /* 46c732: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c733: mov esi, ecx */
  esi = ecx;
/* 46c735: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 46c737: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c739: je 0x46c74a */
  if (zf) goto L_46c74a;
L_46c73b: /* 46c73b: call 0x46567c */
  esp -= 4; W32(esp, 0x46c740u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
/* 46c740: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c743: je 0x46c74a */
  if (zf) goto L_46c74a;
L_46c745: /* 46c745: mov byte ptr [esi + 5], al */
  W8((uint32_t)(esi + 0x5u), (eax & 0xffu));
/* 46c748: jmp 0x46c74d */
  goto L_46c74d;
L_46c74a: /* 46c74a: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_46c74d: /* 46c74d: mov al, byte ptr [esi + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x5u))) & 0xffu);
/* 46c750: mov byte ptr [esi + 4], 1 */
  W8((uint32_t)(esi + 0x4u), 0x1u);
/* 46c754: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c755: ret  */
  esp += 4; SPILL(); return;
}

void f_46c756(void) {
  LOAD_REGS();
L_46c756: /* 46c756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c757: mov esi, ecx */
  esi = ecx;
/* 46c759: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 46c75b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c75d: je 0x46c770 */
  if (zf) goto L_46c770;
L_46c75f: /* 46c75f: call 0x46584a */
  esp -= 4; W32(esp, 0x46c764u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 46c764: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46c768: je 0x46c770 */
  if (zf) goto L_46c770;
L_46c76a: /* 46c76a: and byte ptr [esi + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4u), r);
  }
/* 46c76e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c76f: ret  */
  esp += 4; SPILL(); return;
L_46c770: /* 46c770: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 46c773: mov byte ptr [esi + 4], 1 */
  W8((uint32_t)(esi + 0x4u), 0x1u);
/* 46c777: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c778: ret  */
  esp += 4; SPILL(); return;
}

void f_46c779(void) {
  LOAD_REGS();
L_46c779: /* 46c779: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c77a: mov esi, ecx */
  esi = ecx;
/* 46c77c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 46c77e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46c780: je 0x46c793 */
  if (zf) goto L_46c793;
L_46c782: /* 46c782: call 0x4657fc */
  esp -= 4; W32(esp, 0x46c787u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
/* 46c787: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46c78b: je 0x46c793 */
  if (zf) goto L_46c793;
L_46c78d: /* 46c78d: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 46c791: jmp 0x46c796 */
  goto L_46c796;
L_46c793: /* 46c793: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
L_46c796: /* 46c796: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 46c79a: mov byte ptr [esi + 4], 1 */
  W8((uint32_t)(esi + 0x4u), 0x1u);
/* 46c79e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c79f: ret  */
  esp += 4; SPILL(); return;
}

void f_46c7a0(void) {
  LOAD_REGS();
L_46c7a0: /* 46c7a0: mov eax, 0x48c2b9 */
  eax = 0x48c2b9u;
/* 46c7a5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c7aau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c7aa: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c7ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c7ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c7af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c7b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46c7b3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46c7b6: xor ebx, ebx */
  ebx = 0;
/* 46c7b8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 46c7bb: call 0x461028 */
  esp -= 4; W32(esp, 0x46c7c0u); SPILL(); hle_strlen(); RELOAD();
/* 46c7c0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c7c3: mov edi, eax */
  edi = eax;
/* 46c7c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c7c7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c7ca: mov eax, dword ptr [eax + esi + 0x14] */
  eax = R32((uint32_t)(eax + esi + 0x14u));
/* 46c7ce: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46c7d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46c7d1: jle 0x46c7db */
  if ((zf || sf != of)) goto L_46c7db;
L_46c7d3: /* 46c7d3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46c7d5: jle 0x46c7db */
  if ((zf || sf != of)) goto L_46c7db;
L_46c7d7: /* 46c7d7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46c7d9: mov ebx, eax */
  ebx = eax;
L_46c7db: /* 46c7db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c7dc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46c7df: call 0x462178 */
  esp -= 4; W32(esp, 0x46c7e4u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46c7e4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c7e8: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46c7ec: jne 0x46c7fa */
  if (!zf) goto L_46c7fa;
L_46c7ee: /* 46c7ee: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 46c7f5: jmp 0x46c8b8 */
  goto L_46c8b8;
L_46c7fa: /* 46c7fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c7fc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c7ff: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 46c803: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46c808: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c80b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46c80f: je 0x46c83e */
  if (zf) goto L_46c83e;
L_46c811: /* 46c811: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46c813: jle 0x46c838 */
  if ((zf || sf != of)) goto L_46c838;
L_46c815: /* 46c815: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c817: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c81a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c81c: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46c81f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46c822: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 46c825: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46c828: mov ecx, eax */
  ecx = eax;
/* 46c82a: call 0x46186f */
  esp -= 4; W32(esp, 0x46c82fu); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c82f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c832: jne 0x46c868 */
  if (!zf) goto L_46c868;
L_46c834: /* 46c834: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_46c838: /* 46c838: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c83c: jne 0x46c85b */
  if (!zf) goto L_46c85b;
L_46c83e: /* 46c83e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c840: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c843: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46c847: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46c849: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c84a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46c84d: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x46c850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46c850: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c852: je 0x46c86b */
  if (zf) goto L_46c86b;
L_46c854: /* 46c854: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46c85b: /* 46c85b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c85d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c860: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c862: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 46c866: jmp 0x46c8b8 */
  goto L_46c8b8;
L_46c868: /* 46c868: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 46c869: jmp 0x46c811 */
  goto L_46c811;
L_46c86b: /* 46c86b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46c86d: jle 0x46c85b */
  if ((zf || sf != of)) goto L_46c85b;
L_46c86f: /* 46c86f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c871: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c874: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c876: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46c879: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46c87c: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 46c87f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46c882: mov ecx, eax */
  ecx = eax;
/* 46c884: call 0x46186f */
  esp -= 4; W32(esp, 0x46c889u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c889: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c88c: jne 0x46c894 */
  if (!zf) goto L_46c894;
L_46c88e: /* 46c88e: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 46c892: jmp 0x46c85b */
  goto L_46c85b;
L_46c894: /* 46c894: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 46c895: jmp 0x46c86b */
  goto L_46c86b;
L_46c8b8: /* 46c8b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c8ba: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46c8bd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c8c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c8c3: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46c8c6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c8c8: call 0x461453 */
  esp -= 4; W32(esp, 0x46c8cdu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46c8cd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c8d1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46c8d4: call 0x462246 */
  esp -= 4; W32(esp, 0x46c8d9u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46c8d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c8dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46c8dd: mov eax, esi */
  eax = esi;
/* 46c8df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c8e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c8e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46c8e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c8e9: ret  */
  esp += 4; SPILL(); return;
}

void f_46c897(void) {
  LOAD_REGS();
L_46c897: /* 46c897: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c89a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46c89c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46c89f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c8a1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46c8a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46c8a6: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46c8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46c8aa: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46c8afu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46c8af: mov eax, 0x46c8b5 */
  eax = 0x46c8b5u;
/* 46c8b4: ret  */
  esp += 4; SPILL(); return;
}

void f_46c8b5(void) {
  LOAD_REGS();
L_46c8b5: /* 46c8b5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c8b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c8ba: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46c8bd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c8c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46c8c3: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46c8c6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c8c8: call 0x461453 */
  esp -= 4; W32(esp, 0x46c8cdu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46c8b5u: guest_unwind_done(); RELOAD(); goto L_46c8b5; } return; } RELOAD();
/* 46c8cd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46c8d1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46c8d4: call 0x462246 */
  esp -= 4; W32(esp, 0x46c8d9u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46c8b5u: guest_unwind_done(); RELOAD(); goto L_46c8b5; } return; } RELOAD();
/* 46c8d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46c8dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46c8dd: mov eax, esi */
  eax = esi;
/* 46c8df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46c8e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46c8e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46c8e8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46c8e9: ret  */
  esp += 4; SPILL(); return;
}

void f_46c8ea(void) {
  LOAD_REGS();
L_46c8ea: /* 46c8ea: mov eax, 0x48c2cb */
  eax = 0x48c2cbu;
/* 46c8ef: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46c8f4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46c8f4: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46c8f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c8f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c8fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46c8fd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46c900: xor ebx, ebx */
  ebx = 0;
/* 46c902: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46c903: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46c906: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 46c909: call 0x462178 */
  esp -= 4; W32(esp, 0x46c90eu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46c90e: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46c911: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46c914: je 0x46c9e9 */
  if (zf) goto L_46c9e9;
L_46c91a: /* 46c91a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c91c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c91f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c921: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 46c924: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46c927: jg 0x46c92d */
  if ((!zf && sf == of)) goto L_46c92d;
L_46c929: /* 46c929: xor edi, edi */
  edi = 0;
/* 46c92b: jmp 0x46c930 */
  goto L_46c930;
L_46c92d: /* 46c92d: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
L_46c930: /* 46c930: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 46c933: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46c938: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c93b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46c93f: je 0x46c977 */
  if (zf) goto L_46c977;
L_46c941: /* 46c941: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c944: jne 0x46c9e9 */
  if (!zf) goto L_46c9e9;
L_46c94a: /* 46c94a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46c94c: jle 0x46c977 */
  if ((zf || sf != of)) goto L_46c977;
L_46c94e: /* 46c94e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c950: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c953: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c955: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46c958: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46c95b: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 46c95e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46c961: mov ecx, eax */
  ecx = eax;
/* 46c963: call 0x46186f */
  esp -= 4; W32(esp, 0x46c968u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c968: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c96b: jne 0x46c974 */
  if (!zf) goto L_46c974;
L_46c96d: /* 46c96d: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46c974: /* 46c974: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46c975: jmp 0x46c941 */
  goto L_46c941;
L_46c977: /* 46c977: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c979: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c97c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46c97f: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46c983: call 0x46186f */
  esp -= 4; W32(esp, 0x46c988u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c988: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c98b: jne 0x46c994 */
  if (!zf) goto L_46c994;
L_46c98d: /* 46c98d: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46c994: /* 46c994: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c997: jne 0x46c9e9 */
  if (!zf) goto L_46c9e9;
L_46c999: /* 46c999: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46c99b: jle 0x46c9e9 */
  if ((zf || sf != of)) goto L_46c9e9;
L_46c99d: /* 46c99d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c99f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c9a2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c9a4: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 46c9a7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46c9aa: mov byte ptr [ebp - 0x18], cl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ecx & 0xffu));
/* 46c9ad: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 46c9b0: mov ecx, eax */
  ecx = eax;
/* 46c9b2: call 0x46186f */
  esp -= 4; W32(esp, 0x46c9b7u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 46c9b7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46c9ba: jne 0x46c9c3 */
  if (!zf) goto L_46c9c3;
L_46c9bc: /* 46c9bc: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46c9c3: /* 46c9c3: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46c9c4: jmp 0x46c994 */
  goto L_46c994;
L_46c9e9: /* 46c9e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c9eb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c9ee: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c9f0: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46c9f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c9f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46c9f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c9f9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46c9fc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c9fe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ca01: call 0x461453 */
  esp -= 4; W32(esp, 0x46ca06u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46ca06: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46ca0a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46ca0d: call 0x462246 */
  esp -= 4; W32(esp, 0x46ca12u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46ca12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46ca15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ca16: mov eax, esi */
  eax = esi;
/* 46ca18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ca19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ca20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ca21: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ca22: ret  */
  esp += 4; SPILL(); return;
}

void f_46c9c6(void) {
  LOAD_REGS();
L_46c9c6: /* 46c9c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46c9c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46c9cb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46c9ce: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c9d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46c9d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46c9d5: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46c9d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46c9d9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46c9deu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46c9de: mov eax, 0x46c9e4 */
  eax = 0x46c9e4u;
/* 46c9e3: ret  */
  esp += 4; SPILL(); return;
}

void f_46c9e4(void) {
  LOAD_REGS();
L_46c9e4: /* 46c9e4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46c9e7: xor ebx, ebx */
  ebx = 0;
/* 46c9e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c9eb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46c9ee: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46c9f0: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 46c9f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46c9f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46c9f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46c9f9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46c9fc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46c9fe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46ca01: call 0x461453 */
  esp -= 4; W32(esp, 0x46ca06u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46c9e4u: guest_unwind_done(); RELOAD(); goto L_46c9e4; } return; } RELOAD();
/* 46ca06: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46ca0a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46ca0d: call 0x462246 */
  esp -= 4; W32(esp, 0x46ca12u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46c9e4u: guest_unwind_done(); RELOAD(); goto L_46c9e4; } return; } RELOAD();
/* 46ca12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46ca15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46ca16: mov eax, esi */
  eax = esi;
/* 46ca18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46ca19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46ca20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46ca21: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46ca22: ret  */
  esp += 4; SPILL(); return;
}

void f_46ca23(void) {
  LOAD_REGS();
L_46ca23: /* 46ca23: jmp 0x46c7a0 */
  SPILL(); f_46c7a0(); return;
}

void f_46ca28(void) {
  LOAD_REGS();
L_46ca28: /* 46ca28: jmp 0x46c8ea */
  SPILL(); f_46c8ea(); return;
}

void f_46ca2d(void) {
  LOAD_REGS();
L_46ca2d: /* 46ca2d: mov eax, 0x48c2dd */
  eax = 0x48c2ddu;
/* 46ca32: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46ca37u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46ca37: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46ca3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46ca3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ca3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46ca3d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46ca40: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46ca43: xor ebx, ebx */
  ebx = 0;
/* 46ca45: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 46ca48: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x46ca4eu); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 46ca4e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46ca51: mov edi, eax */
  edi = eax;
/* 46ca53: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ca55: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ca58: mov eax, dword ptr [eax + esi + 0x14] */
  eax = R32((uint32_t)(eax + esi + 0x14u));
/* 46ca5c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46ca5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46ca5f: jle 0x46ca69 */
  if ((zf || sf != of)) goto L_46ca69;
L_46ca61: /* 46ca61: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46ca63: jle 0x46ca69 */
  if ((zf || sf != of)) goto L_46ca69;
L_46ca65: /* 46ca65: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46ca67: mov ebx, eax */
  ebx = eax;
L_46ca69: /* 46ca69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46ca6a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46ca6d: call 0x462178 */
  esp -= 4; W32(esp, 0x46ca72u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46ca72: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46ca76: cmp byte ptr [ebp - 0x18], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46ca7a: jne 0x46ca88 */
  if (!zf) goto L_46ca88;
L_46ca7c: /* 46ca7c: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 46ca83: jmp 0x46cb44 */
  goto L_46cb44;
L_46ca88: /* 46ca88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46ca8a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46ca8d: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 46ca91: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46ca96: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46ca99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46ca9d: je 0x46cacb */
  if (zf) goto L_46cacb;
L_46ca9f: /* 46ca9f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46caa1: jle 0x46cac5 */
  if ((zf || sf != of)) goto L_46cac5;
L_46caa3: /* 46caa3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46caa5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46caa8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46caaa: xor edx, edx */
  edx = 0;
/* 46caac: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 46cab0: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46cab3: mov ecx, eax */
  ecx = eax;
/* 46cab5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46cab6: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46cabbu); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46cabb: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46cabf: jne 0x46caf5 */
  if (!zf) goto L_46caf5;
L_46cac1: /* 46cac1: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_46cac5: /* 46cac5: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46cac9: jne 0x46cae8 */
  if (!zf) goto L_46cae8;
L_46cacb: /* 46cacb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cacd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cad0: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46cad4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46cad6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46cad7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46cada: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x46caddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46cadd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46cadf: je 0x46caf8 */
  if (zf) goto L_46caf8;
L_46cae1: /* 46cae1: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
L_46cae8: /* 46cae8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46caea: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46caed: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46caef: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 46caf3: jmp 0x46cb44 */
  goto L_46cb44;
L_46caf5: /* 46caf5: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 46caf6: jmp 0x46ca9f */
  goto L_46ca9f;
L_46caf8: /* 46caf8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46cafa: jle 0x46cae8 */
  if ((zf || sf != of)) goto L_46cae8;
L_46cafc: /* 46cafc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cafe: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46cb01: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46cb03: xor edx, edx */
  edx = 0;
/* 46cb05: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 46cb09: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46cb0c: mov ecx, eax */
  ecx = eax;
/* 46cb0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46cb0f: call 0x4619f2 */
  esp -= 4; W32(esp, 0x46cb14u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 46cb14: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46cb18: jne 0x46cb20 */
  if (!zf) goto L_46cb20;
L_46cb1a: /* 46cb1a: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 46cb1e: jmp 0x46cae8 */
  goto L_46cae8;
L_46cb20: /* 46cb20: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 46cb21: jmp 0x46caf8 */
  goto L_46caf8;
L_46cb44: /* 46cb44: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46cb46: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46cb49: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cb4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46cb4f: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46cb52: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46cb54: call 0x461453 */
  esp -= 4; W32(esp, 0x46cb59u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46cb59: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46cb5d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 46cb60: call 0x462246 */
  esp -= 4; W32(esp, 0x46cb65u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46cb65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46cb68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46cb69: mov eax, esi */
  eax = esi;
/* 46cb6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46cb6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46cb73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46cb74: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46cb75: ret  */
  esp += 4; SPILL(); return;
}
