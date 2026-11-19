#include "recomp.h"
#include "rec_mod.h"

void f_52e697(void) {
  LOAD_REGS();
L_52e697: /* 52e697: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52e69a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e69f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52e6a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e6a3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52e6a6: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e6abu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e6ab(); return;
}

void f_52e6ab(void) {
  LOAD_REGS();
L_52e6ab: /* 52e6ab: push 0x56d124 */
  { uint32_t v = 0x56d124u; esp -= 4; W32(esp, v); }
/* 52e6b0: push 0x5a78c4 */
  { uint32_t v = 0x5a78c4u; esp -= 4; W32(esp, v); }
/* 52e6b5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e6bau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e6ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e6bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e6bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e6c1: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e6c6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e6c6: guest_badaddr(0x52e6c6); return;
}

void f_52e700(void) {
  LOAD_REGS();
L_52e700: /* 52e700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e701: mov ebp, esp */
  ebp = esp;
/* 52e703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e705: push 0x5583f0 */
  { uint32_t v = 0x5583f0u; esp -= 4; W32(esp, v); }
/* 52e70a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e718: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e71b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52e71e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e71f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e721: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52e724: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e727: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e728: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e729: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e730: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52e735u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52e735: mov esi, eax */
  esi = eax;
/* 52e737: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e73a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e73c: jne 0x52e74f */
  if (!zf) goto L_52e74f;
L_52e73e: /* 52e73e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e741: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e748: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e74a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e74b: mov esp, ebp */
  esp = ebp;
/* 52e74d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e74e: ret  */
  esp += 4; SPILL(); return;
L_52e74f: /* 52e74f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e750: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52e755u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52e755: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e758: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 52e75a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52e75d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52e75e: lea edx, [esi + eax*2] */
  edx = (uint32_t)(esi + eax*2);
/* 52e761: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52e762: call 0x4e34a9 */
  esp -= 4; W32(esp, 0x52e767u); SPILL(); f_4e34a9(); if (g_unwind) return; RELOAD();
/* 52e767: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52e76a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e76d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52e76f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e772: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e773: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e774: mov eax, 1 */
  eax = 0x1u;
/* 52e779: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e780: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e781: mov esp, ebp */
  esp = ebp;
/* 52e783: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e784: ret  */
  esp += 4; SPILL(); return;
}

void f_52e785(void) {
  LOAD_REGS();
L_52e785: /* 52e785: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52e788: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e78d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52e790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e791: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52e794: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e799u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e799(); return;
}

void f_52e799(void) {
  LOAD_REGS();
L_52e799: /* 52e799: push 0x56d140 */
  { uint32_t v = 0x56d140u; esp -= 4; W32(esp, v); }
/* 52e79e: push 0x5a78cc */
  { uint32_t v = 0x5a78ccu; esp -= 4; W32(esp, v); }
/* 52e7a3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e7a8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e7a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e7ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e7ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e7af: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e7b4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e7b4: guest_badaddr(0x52e7b4); return;
}

void f_52e7f0(void) {
  LOAD_REGS();
L_52e7f0: /* 52e7f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e7f1: mov ebp, esp */
  ebp = esp;
/* 52e7f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e7f5: push 0x558400 */
  { uint32_t v = 0x558400u; esp -= 4; W32(esp, v); }
/* 52e7fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e808: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e80b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52e80e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e80f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e811: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52e814: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e819: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e820: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52e825u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52e825: mov esi, eax */
  esi = eax;
/* 52e827: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e82a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e82c: je 0x52e85b */
  if (zf) goto L_52e85b;
L_52e82e: /* 52e82e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e82f: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52e834u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52e834: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 52e837: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e83a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e83b: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x52e840u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 52e840: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52e843: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e846: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52e848: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 52e84a: jne 0x52e86e */
  if (!zf) goto L_52e86e;
L_52e84c: /* 52e84c: mov si, word ptr [esi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52e84f: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52e853: jb 0x52e85b */
  if (cf) goto L_52e85b;
L_52e855: /* 52e855: cmp si, 0x39 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52e859: jbe 0x52e86e */
  if ((cf | zf)) goto L_52e86e;
L_52e85b: /* 52e85b: xor eax, eax */
  eax = 0;
/* 52e85d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e860: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e867: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e868: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e869: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e86a: mov esp, ebp */
  esp = ebp;
/* 52e86c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e86d: ret  */
  esp += 4; SPILL(); return;
L_52e86e: /* 52e86e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e873: mov eax, 1 */
  eax = 0x1u;
/* 52e878: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e87f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e880: mov esp, ebp */
  esp = ebp;
/* 52e882: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e883: ret  */
  esp += 4; SPILL(); return;
}

void f_52e884(void) {
  LOAD_REGS();
L_52e884: /* 52e884: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52e887: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e88c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52e88f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e890: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52e893: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e898u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e898(); return;
}

void f_52e898(void) {
  LOAD_REGS();
L_52e898: /* 52e898: push 0x56d15c */
  { uint32_t v = 0x56d15cu; esp -= 4; W32(esp, v); }
/* 52e89d: push 0x5a78d4 */
  { uint32_t v = 0x5a78d4u; esp -= 4; W32(esp, v); }
/* 52e8a2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e8a7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e8a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e8aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e8ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e8ae: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e8b3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e8b3: guest_badaddr(0x52e8b3); return;
}

void f_52e900(void) {
  LOAD_REGS();
L_52e900: /* 52e900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52e901: mov ebp, esp */
  ebp = esp;
/* 52e903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52e905: push 0x558410 */
  { uint32_t v = 0x558410u; esp -= 4; W32(esp, v); }
/* 52e90a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52e910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52e918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52e91b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52e91e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52e91f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e921: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52e924: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52e927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e929: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52e930: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52e935u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52e935: mov esi, eax */
  esi = eax;
/* 52e937: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e93a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52e93c: je 0x52e96b */
  if (zf) goto L_52e96b;
L_52e93e: /* 52e93e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52e93f: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52e944u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52e944: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 52e947: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e94a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52e94b: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x52e950u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 52e950: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52e953: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e956: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52e958: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 52e95a: jne 0x52e97e */
  if (!zf) goto L_52e97e;
L_52e95c: /* 52e95c: mov si, word ptr [esi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52e95f: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52e963: jb 0x52e96b */
  if (cf) goto L_52e96b;
L_52e965: /* 52e965: cmp si, 0x39 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52e969: jbe 0x52e97e */
  if ((cf | zf)) goto L_52e97e;
L_52e96b: /* 52e96b: xor eax, eax */
  eax = 0;
/* 52e96d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e970: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e977: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e978: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e979: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e97a: mov esp, ebp */
  esp = ebp;
/* 52e97c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e97d: ret  */
  esp += 4; SPILL(); return;
L_52e97e: /* 52e97e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52e981: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52e982: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52e983: mov eax, 1 */
  eax = 0x1u;
/* 52e988: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52e98f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52e990: mov esp, ebp */
  esp = ebp;
/* 52e992: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52e993: ret  */
  esp += 4; SPILL(); return;
}

void f_52e994(void) {
  LOAD_REGS();
L_52e994: /* 52e994: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52e997: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52e99c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52e99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52e9a0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52e9a3: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e9a8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52e9a8(); return;
}

void f_52e9a8(void) {
  LOAD_REGS();
L_52e9a8: /* 52e9a8: push 0x56d174 */
  { uint32_t v = 0x56d174u; esp -= 4; W32(esp, v); }
/* 52e9ad: push 0x5a78dc */
  { uint32_t v = 0x5a78dcu; esp -= 4; W32(esp, v); }
/* 52e9b2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52e9b7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52e9b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52e9ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e9bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52e9be: call 0x554df6 */
  esp -= 4; W32(esp, 0x52e9c3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52e9c3: guest_badaddr(0x52e9c3); return;
}

void f_52ea10(void) {
  LOAD_REGS();
L_52ea10: /* 52ea10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ea11: mov ebp, esp */
  ebp = esp;
/* 52ea13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ea15: push 0x558420 */
  { uint32_t v = 0x558420u; esp -= 4; W32(esp, v); }
/* 52ea1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ea20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ea21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ea28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ea2b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52ea2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ea2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ea30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ea31: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52ea34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ea37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ea39: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52ea40: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52ea45u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52ea45: mov esi, eax */
  esi = eax;
/* 52ea47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ea4a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ea4c: je 0x52ea7d */
  if (zf) goto L_52ea7d;
L_52ea4e: /* 52ea4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ea4f: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52ea54u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52ea54: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 52ea57: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ea5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ea5b: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x52ea60u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 52ea60: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52ea63: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ea66: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52ea69: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 52ea6c: jne 0x52ea90 */
  if (!zf) goto L_52ea90;
L_52ea6e: /* 52ea6e: mov si, word ptr [esi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52ea71: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52ea75: jb 0x52ea7d */
  if (cf) goto L_52ea7d;
L_52ea77: /* 52ea77: cmp si, 0x39 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52ea7b: jbe 0x52ea90 */
  if ((cf | zf)) goto L_52ea90;
L_52ea7d: /* 52ea7d: xor eax, eax */
  eax = 0;
/* 52ea7f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ea82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ea89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ea8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ea8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ea8c: mov esp, ebp */
  esp = ebp;
/* 52ea8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ea8f: ret  */
  esp += 4; SPILL(); return;
L_52ea90: /* 52ea90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ea93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ea94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ea95: mov eax, 1 */
  eax = 0x1u;
/* 52ea9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52eaa1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52eaa2: mov esp, ebp */
  esp = ebp;
/* 52eaa4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52eaa5: ret  */
  esp += 4; SPILL(); return;
}

void f_52eaa6(void) {
  LOAD_REGS();
L_52eaa6: /* 52eaa6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52eaa9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52eaae: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52eab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52eab2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52eab5: call 0x554df6 */
  esp -= 4; W32(esp, 0x52eabau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52eaba(); return;
}

void f_52eaba(void) {
  LOAD_REGS();
L_52eaba: /* 52eaba: push 0x56d18c */
  { uint32_t v = 0x56d18cu; esp -= 4; W32(esp, v); }
/* 52eabf: push 0x5a78e4 */
  { uint32_t v = 0x5a78e4u; esp -= 4; W32(esp, v); }
/* 52eac4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52eac9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52eac9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eacc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52eace: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ead0: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ead5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52ead5: guest_badaddr(0x52ead5); return;
}

void f_52eb20(void) {
  LOAD_REGS();
L_52eb20: /* 52eb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52eb21: mov ebp, esp */
  ebp = esp;
/* 52eb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52eb25: push 0x558430 */
  { uint32_t v = 0x558430u; esp -= 4; W32(esp, v); }
/* 52eb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52eb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52eb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52eb38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52eb3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52eb3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52eb3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52eb40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52eb41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52eb44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52eb47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52eb48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52eb49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52eb50: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52eb55u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52eb55: mov esi, eax */
  esi = eax;
/* 52eb57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eb5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52eb5c: je 0x52eb8d */
  if (zf) goto L_52eb8d;
L_52eb5e: /* 52eb5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52eb5f: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52eb64u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52eb64: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 52eb67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eb6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52eb6b: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x52eb70u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 52eb70: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52eb73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eb76: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52eb79: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 52eb7c: jne 0x52eba0 */
  if (!zf) goto L_52eba0;
L_52eb7e: /* 52eb7e: mov si, word ptr [esi] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52eb81: cmp si, 0x30 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52eb85: jb 0x52eb8d */
  if (cf) goto L_52eb8d;
L_52eb87: /* 52eb87: cmp si, 0x39 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52eb8b: jbe 0x52eba0 */
  if ((cf | zf)) goto L_52eba0;
L_52eb8d: /* 52eb8d: xor eax, eax */
  eax = 0;
/* 52eb8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52eb92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52eb99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52eb9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52eb9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52eb9c: mov esp, ebp */
  esp = ebp;
/* 52eb9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52eb9f: ret  */
  esp += 4; SPILL(); return;
L_52eba0: /* 52eba0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52eba3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52eba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52eba5: mov eax, 1 */
  eax = 0x1u;
/* 52ebaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ebb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ebb2: mov esp, ebp */
  esp = ebp;
/* 52ebb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ebb5: ret  */
  esp += 4; SPILL(); return;
}

void f_52ebb6(void) {
  LOAD_REGS();
L_52ebb6: /* 52ebb6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52ebb9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52ebbe: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52ebc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ebc2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52ebc5: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ebcau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52ebca(); return;
}

void f_52ebca(void) {
  LOAD_REGS();
L_52ebca: /* 52ebca: push 0x56d1a4 */
  { uint32_t v = 0x56d1a4u; esp -= 4; W32(esp, v); }
/* 52ebcf: push 0x5a78ec */
  { uint32_t v = 0x5a78ecu; esp -= 4; W32(esp, v); }
/* 52ebd4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52ebd9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52ebd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ebdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ebde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ebe0: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ebe5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52ebe5: guest_badaddr(0x52ebe5); return;
}

void f_52ec30(void) {
  LOAD_REGS();
L_52ec30: /* 52ec30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ec31: mov ebp, esp */
  ebp = esp;
/* 52ec33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ec35: push 0x558440 */
  { uint32_t v = 0x558440u; esp -= 4; W32(esp, v); }
/* 52ec3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ec40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ec41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ec48: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ec4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52ec4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ec4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ec50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ec51: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52ec54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ec57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ec58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ec59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52ec60: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52ec65u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52ec65: mov esi, eax */
  esi = eax;
/* 52ec67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ec6a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ec6c: jne 0x52ec7f */
  if (!zf) goto L_52ec7f;
L_52ec6e: /* 52ec6e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ec71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ec78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ec79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ec7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ec7b: mov esp, ebp */
  esp = ebp;
/* 52ec7d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ec7e: ret  */
  esp += 4; SPILL(); return;
L_52ec7f: /* 52ec7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ec80: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52ec85u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52ec85: lea ecx, [esi + eax*2] */
  ecx = (uint32_t)(esi + eax*2);
/* 52ec88: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ec8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ec8c: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x52ec91u); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 52ec91: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 52ec94: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 52ec97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ec9a: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 52ec9c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ec9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52eca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52eca1: mov eax, 1 */
  eax = 0x1u;
/* 52eca6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ecad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ecae: mov esp, ebp */
  esp = ebp;
/* 52ecb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ecb1: ret  */
  esp += 4; SPILL(); return;
}

void f_52ecb2(void) {
  LOAD_REGS();
L_52ecb2: /* 52ecb2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52ecb5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52ecba: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52ecbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ecbe: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52ecc1: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ecc6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52ecc6(); return;
}

void f_52ecc6(void) {
  LOAD_REGS();
L_52ecc6: /* 52ecc6: push 0x56d1c0 */
  { uint32_t v = 0x56d1c0u; esp -= 4; W32(esp, v); }
/* 52eccb: push 0x5a78f4 */
  { uint32_t v = 0x5a78f4u; esp -= 4; W32(esp, v); }
/* 52ecd0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52ecd5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52ecd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ecd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ecda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ecdc: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ece1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52ece1: guest_badaddr(0x52ece1); return;
}

void f_52ed20(void) {
  LOAD_REGS();
L_52ed20: /* 52ed20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ed21: mov ebp, esp */
  ebp = esp;
/* 52ed23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ed25: push 0x558450 */
  { uint32_t v = 0x558450u; esp -= 4; W32(esp, v); }
/* 52ed2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ed30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ed31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ed38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ed3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52ed3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ed3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ed40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ed41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52ed44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ed47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ed48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ed49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52ed50: call 0x4e2b76 */
  esp -= 4; W32(esp, 0x52ed55u); SPILL(); f_4e2b76(); if (g_unwind) return; RELOAD();
/* 52ed55: mov esi, eax */
  esi = eax;
/* 52ed57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ed5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ed5c: jne 0x52ed6f */
  if (!zf) goto L_52ed6f;
L_52ed5e: /* 52ed5e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ed61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ed68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ed69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ed6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ed6b: mov esp, ebp */
  esp = ebp;
/* 52ed6d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ed6e: ret  */
  esp += 4; SPILL(); return;
L_52ed6f: /* 52ed6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ed70: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52ed75u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52ed75: lea ecx, [esi + eax*2] */
  ecx = (uint32_t)(esi + eax*2);
/* 52ed78: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ed7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ed7c: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x52ed81u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 52ed81: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 52ed84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ed87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ed8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ed8b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 52ed8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ed8e: mov eax, 1 */
  eax = 0x1u;
/* 52ed93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ed9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ed9b: mov esp, ebp */
  esp = ebp;
/* 52ed9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ed9e: ret  */
  esp += 4; SPILL(); return;
}

void f_52ed9f(void) {
  LOAD_REGS();
L_52ed9f: /* 52ed9f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52eda2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52eda7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52edaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52edab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52edae: call 0x554df6 */
  esp -= 4; W32(esp, 0x52edb3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52edb3(); return;
}

void f_52edb3(void) {
  LOAD_REGS();
L_52edb3: /* 52edb3: push 0x56d1dc */
  { uint32_t v = 0x56d1dcu; esp -= 4; W32(esp, v); }
/* 52edb8: push 0x5a78fc */
  { uint32_t v = 0x5a78fcu; esp -= 4; W32(esp, v); }
/* 52edbd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52edc2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52edc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52edc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52edc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52edc9: call 0x554df6 */
  esp -= 4; W32(esp, 0x52edceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52edce: guest_badaddr(0x52edce); return;
}

void f_52ee00(void) {
  LOAD_REGS();
L_52ee00: /* 52ee00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ee01: mov ebp, esp */
  ebp = esp;
/* 52ee03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ee05: push 0x558460 */
  { uint32_t v = 0x558460u; esp -= 4; W32(esp, v); }
/* 52ee0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ee10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ee11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ee18: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ee1b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52ee1e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52ee21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ee22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ee23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ee24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ee27: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52ee29: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 52ee2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ee2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ee2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52ee2f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52ee36: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x52ee3bu); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 52ee3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ee3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ee40: je 0x52eeba */
  if (zf) goto L_52eeba;
L_52ee42: /* 52ee42: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 52ee45: push 0x5a7904 */
  { uint32_t v = 0x5a7904u; esp -= 4; W32(esp, v); }
/* 52ee4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ee4b: call 0x4e26df */
  esp -= 4; W32(esp, 0x52ee50u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52ee50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ee53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ee55: je 0x52ee9a */
  if (zf) goto L_52ee9a;
L_52ee57: /* 52ee57: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 52ee5a: push 0x5a790c */
  { uint32_t v = 0x5a790cu; esp -= 4; W32(esp, v); }
/* 52ee5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ee60: call 0x4e26df */
  esp -= 4; W32(esp, 0x52ee65u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52ee65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ee68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ee6a: je 0x52ee9a */
  if (zf) goto L_52ee9a;
L_52ee6c: /* 52ee6c: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 52ee6f: push 0x5a0da8 */
  { uint32_t v = 0x5a0da8u; esp -= 4; W32(esp, v); }
/* 52ee74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52ee75: call 0x4e26df */
  esp -= 4; W32(esp, 0x52ee7au); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52ee7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ee7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ee7f: je 0x52ee9a */
  if (zf) goto L_52ee9a;
L_52ee81: /* 52ee81: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 52ee84: push 0x5a7918 */
  { uint32_t v = 0x5a7918u; esp -= 4; W32(esp, v); }
/* 52ee89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ee8a: call 0x4e26df */
  esp -= 4; W32(esp, 0x52ee8fu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52ee8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ee92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ee94: je 0x52ee9a */
  if (zf) goto L_52ee9a;
L_52ee96: /* 52ee96: xor eax, eax */
  eax = 0;
/* 52ee98: jmp 0x52ee9f */
  goto L_52ee9f;
L_52ee9a: /* 52ee9a: mov eax, 1 */
  eax = 0x1u;
L_52ee9f: /* 52ee9f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52eea2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52eea4: mov eax, 1 */
  eax = 0x1u;
/* 52eea9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52eeac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52eeb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52eeb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52eeb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52eeb6: mov esp, ebp */
  esp = ebp;
/* 52eeb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52eeb9: ret  */
  esp += 4; SPILL(); return;
L_52eeba: /* 52eeba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52eebd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52eebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52eebf: xor eax, eax */
  eax = 0;
/* 52eec1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52eec8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52eec9: mov esp, ebp */
  esp = ebp;
/* 52eecb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52eecc: ret  */
  esp += 4; SPILL(); return;
}

void f_52eecd(void) {
  LOAD_REGS();
L_52eecd: /* 52eecd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52eed0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52eed5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52eed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52eed9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52eedc: call 0x554df6 */
  esp -= 4; W32(esp, 0x52eee1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52eee1(); return;
}

void f_52eee1(void) {
  LOAD_REGS();
L_52eee1: /* 52eee1: push 0x56d1f4 */
  { uint32_t v = 0x56d1f4u; esp -= 4; W32(esp, v); }
/* 52eee6: push 0x5a791c */
  { uint32_t v = 0x5a791cu; esp -= 4; W32(esp, v); }
/* 52eeeb: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52eef0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52eef0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eef3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52eef5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52eef7: call 0x554df6 */
  esp -= 4; W32(esp, 0x52eefcu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52eefc: guest_badaddr(0x52eefc); return;
}

void f_52ef40(void) {
  LOAD_REGS();
L_52ef40: /* 52ef40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ef41: mov ebp, esp */
  ebp = esp;
/* 52ef43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ef45: push 0x558470 */
  { uint32_t v = 0x558470u; esp -= 4; W32(esp, v); }
/* 52ef4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ef50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ef51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ef58: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ef5e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 52ef61: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52ef64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ef65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ef66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ef67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ef6a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 52ef6f: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* 52ef75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ef76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ef77: xor edi, edi */
  edi = 0;
/* 52ef79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52ef7a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 52ef7d: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x52ef82u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 52ef82: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ef85: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52ef87: jne 0x52ef9c */
  if (!zf) goto L_52ef9c;
L_52ef89: /* 52ef89: xor eax, eax */
  eax = 0;
/* 52ef8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ef8e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ef95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ef96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ef97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ef98: mov esp, ebp */
  esp = ebp;
/* 52ef9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ef9b: ret  */
  esp += 4; SPILL(); return;
L_52ef9c: /* 52ef9c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 52ef9f: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* 52efa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52efa6: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 52efa9: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 52efac: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 52efaf: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 52efb1: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52efb6u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52efb6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52efb9: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52efbc: jne 0x52f032 */
  if (!zf) goto L_52f032;
L_52efbe: /* 52efbe: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52efc0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52efc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52efc4: lea edx, [ebp - 0x1ec] */
  edx = (uint32_t)(ebp + 0xfffffe14u);
/* 52efca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52efcb: call 0x4e34a9 */
  esp -= 4; W32(esp, 0x52efd0u); SPILL(); f_4e34a9(); if (g_unwind) return; RELOAD();
/* 52efd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52efd3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 52efd6: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52efd8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52efdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52efdc: lea ecx, [ebp - 0x1fc] */
  ecx = (uint32_t)(ebp + 0xfffffe04u);
/* 52efe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52efe3: mov word ptr [ebp - 0x1ec], di */
  W16((uint32_t)(ebp + 0xfffffe14u), (edi & 0xffffu));
/* 52efea: call 0x4e34a9 */
  esp -= 4; W32(esp, 0x52efefu); SPILL(); f_4e34a9(); if (g_unwind) return; RELOAD();
/* 52efef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52eff2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52eff4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52eff7: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52effa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52effb: lea eax, [ebp - 0x20c] */
  eax = (uint32_t)(ebp + 0xfffffdf4u);
/* 52f001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f002: mov word ptr [ebp - 0x1fc], di */
  W16((uint32_t)(ebp + 0xfffffe04u), (edi & 0xffffu));
/* 52f009: call 0x4e34a9 */
  esp -= 4; W32(esp, 0x52f00eu); SPILL(); f_4e34a9(); if (g_unwind) return; RELOAD();
/* 52f00e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f011: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52f013: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52f016: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f017: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 52f01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f01e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52f021: mov word ptr [ebp - 0x20c], di */
  W16((uint32_t)(ebp + 0xfffffdf4u), (edi & 0xffffu));
/* 52f028: call 0x4e34a9 */
  esp -= 4; W32(esp, 0x52f02du); SPILL(); f_4e34a9(); if (g_unwind) return; RELOAD();
/* 52f02d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f030: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_52f032: /* 52f032: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f035: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f036: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f037: mov eax, 1 */
  eax = 0x1u;
/* 52f03c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f043: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f044: mov esp, ebp */
  esp = ebp;
/* 52f046: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f047: ret  */
  esp += 4; SPILL(); return;
}

void f_52f048(void) {
  LOAD_REGS();
L_52f048: /* 52f048: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52f04b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52f050: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52f053: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f054: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52f057: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f05cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52f05c(); return;
}

void f_52f05c(void) {
  LOAD_REGS();
L_52f05c: /* 52f05c: push 0x56d210 */
  { uint32_t v = 0x56d210u; esp -= 4; W32(esp, v); }
/* 52f061: push 0x5a7924 */
  { uint32_t v = 0x5a7924u; esp -= 4; W32(esp, v); }
/* 52f066: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52f06bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52f06b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f06e: xor edi, edi */
  edi = 0;
/* 52f070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f072: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f077u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52f077: guest_badaddr(0x52f077); return;
}

void f_52f0d0(void) {
  LOAD_REGS();
L_52f0d0: /* 52f0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52f0d1: mov ebp, esp */
  ebp = esp;
/* 52f0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52f0d5: push 0x558480 */
  { uint32_t v = 0x558480u; esp -= 4; W32(esp, v); }
/* 52f0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52f0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52f0e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52f0eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f0ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52f0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f0f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52f0f4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52f0fb: jmp 0x52f100 */
  goto L_52f100;
L_52f100: /* 52f100: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f102: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f105: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f109: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f10f: /* 52f10f: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f113: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f119: /* 52f119: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52f11c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f11d: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f122u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f122: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f126: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52f128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f12a: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x52f12fu); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 52f12f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f134: jne 0x52f1b6 */
  if (!zf) goto L_52f1b6;
L_52f13a: /* 52f13a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f13b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f140u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f140: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52f142: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 52f145: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f147: mov eax, edx */
  eax = edx;
/* 52f149: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 52f14b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 52f14e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f151: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f155: jb 0x52f15d */
  if (cf) goto L_52f15d;
L_52f157: /* 52f157: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f15b: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f15d: /* 52f15d: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f161: jb 0x52f169 */
  if (cf) goto L_52f169;
L_52f163: /* 52f163: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f167: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f169: /* 52f169: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f16d: jb 0x52f175 */
  if (cf) goto L_52f175;
L_52f16f: /* 52f16f: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f173: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f175: /* 52f175: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f177: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f17a: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f17e: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f180: /* 52f180: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f184: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f186: /* 52f186: mov eax, 1 */
  eax = 0x1u;
/* 52f18b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f18e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f195: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f196: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f197: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f198: mov esp, ebp */
  esp = ebp;
/* 52f19a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f19b: ret  */
  esp += 4; SPILL(); return;
L_52f19c: /* 52f19c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f19f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1a1: jmp 0x52f175 */
  goto L_52f175;
L_52f1a3: /* 52f1a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f1a4: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f1a9u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f1a9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f1ab: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 52f1ad: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52f1af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f1b2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1b4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_52f1b6: /* 52f1b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f1b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f1bb: xor eax, eax */
  eax = 0;
/* 52f1bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f1c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f1c5: mov esp, ebp */
  esp = ebp;
/* 52f1c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f1c8: ret  */
  esp += 4; SPILL(); return;
L_52f1f8: /* 52f1f8: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1fd: jmp 0x52f100 */
  goto L_52f100;
}

void f_52f0fd(void) {
  LOAD_REGS();
L_52f0fd: /* 52f0fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_52f100: /* 52f100: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f102: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f105: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f109: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f10f: /* 52f10f: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f113: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f119: /* 52f119: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52f11c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f11d: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f122u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f122: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f126: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52f128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f12a: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x52f12fu); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 52f12f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f134: jne 0x52f1b6 */
  if (!zf) goto L_52f1b6;
L_52f13a: /* 52f13a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f13b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f140u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f140: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52f142: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 52f145: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f147: mov eax, edx */
  eax = edx;
/* 52f149: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 52f14b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 52f14e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f151: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f155: jb 0x52f15d */
  if (cf) goto L_52f15d;
L_52f157: /* 52f157: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f15b: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f15d: /* 52f15d: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f161: jb 0x52f169 */
  if (cf) goto L_52f169;
L_52f163: /* 52f163: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f167: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f169: /* 52f169: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f16d: jb 0x52f175 */
  if (cf) goto L_52f175;
L_52f16f: /* 52f16f: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f173: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f175: /* 52f175: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f177: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f17a: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f17e: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f180: /* 52f180: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f184: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f186: /* 52f186: mov eax, 1 */
  eax = 0x1u;
/* 52f18b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f18e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f195: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f196: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f197: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f198: mov esp, ebp */
  esp = ebp;
/* 52f19a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f19b: ret  */
  esp += 4; SPILL(); return;
L_52f19c: /* 52f19c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f19f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1a1: jmp 0x52f175 */
  goto L_52f175;
L_52f1a3: /* 52f1a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f1a4: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f1a9u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f1a9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f1ab: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 52f1ad: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52f1af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f1b2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1b4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_52f1b6: /* 52f1b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f1b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f1bb: xor eax, eax */
  eax = 0;
/* 52f1bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f1c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f1c5: mov esp, ebp */
  esp = ebp;
/* 52f1c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f1c8: ret  */
  esp += 4; SPILL(); return;
L_52f1f8: /* 52f1f8: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1fd: jmp 0x52f100 */
  goto L_52f100;
}

void f_52f1c9(void) {
  LOAD_REGS();
L_52f1c9: /* 52f1c9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52f1cc: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52f1d1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 52f1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f1d5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 52f1d8: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f1ddu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52f1dd(); return;
}

void f_52f1dd(void) {
  LOAD_REGS();
  goto L_52f1dd;
L_52f100: /* 52f100: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f102: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f105: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f109: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f10f: /* 52f10f: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f113: je 0x52f1f8 */
  if (zf) goto L_52f1f8;
L_52f119: /* 52f119: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52f11c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f11d: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f122u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f122: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f126: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52f128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f12a: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x52f12fu); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 52f12f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f134: jne 0x52f1b6 */
  if (!zf) goto L_52f1b6;
L_52f13a: /* 52f13a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f13b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f140u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f140: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52f142: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 52f145: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f147: mov eax, edx */
  eax = edx;
/* 52f149: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 52f14b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 52f14e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f151: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f155: jb 0x52f15d */
  if (cf) goto L_52f15d;
L_52f157: /* 52f157: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f15b: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f15d: /* 52f15d: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f161: jb 0x52f169 */
  if (cf) goto L_52f169;
L_52f163: /* 52f163: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f167: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f169: /* 52f169: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52f16d: jb 0x52f175 */
  if (cf) goto L_52f175;
L_52f16f: /* 52f16f: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 52f173: jbe 0x52f1a3 */
  if ((cf | zf)) goto L_52f1a3;
L_52f175: /* 52f175: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f177: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f17a: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f17e: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f180: /* 52f180: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f184: je 0x52f19c */
  if (zf) goto L_52f19c;
L_52f186: /* 52f186: mov eax, 1 */
  eax = 0x1u;
/* 52f18b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f18e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f195: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f196: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f197: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f198: mov esp, ebp */
  esp = ebp;
/* 52f19a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f19b: ret  */
  esp += 4; SPILL(); return;
L_52f19c: /* 52f19c: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f19f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1a1: jmp 0x52f175 */
  goto L_52f175;
L_52f1a3: /* 52f1a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f1a4: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f1a9u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f1a9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 52f1ab: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 52f1ad: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 52f1af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f1b2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1b4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_52f1b6: /* 52f1b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f1b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f1bb: xor eax, eax */
  eax = 0;
/* 52f1bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f1c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f1c5: mov esp, ebp */
  esp = ebp;
/* 52f1c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f1c8: ret  */
  esp += 4; SPILL(); return;
L_52f1dd: /* 52f1dd: push 0x56d228 */
  { uint32_t v = 0x56d228u; esp -= 4; W32(esp, v); }
/* 52f1e2: push 0x5a792c */
  { uint32_t v = 0x5a792cu; esp -= 4; W32(esp, v); }
/* 52f1e7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52f1ecu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52f1ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f1ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f1f3: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f1f8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52f1f8: /* 52f1f8: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f1fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 52f1fd: jmp 0x52f100 */
  goto L_52f100;
}

void f_52f260(void) {
  LOAD_REGS();
L_52f260: /* 52f260: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
L_52f264: /* 52f264: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52f266: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 52f269: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f26d: je 0x52f281 */
  if (zf) goto L_52f281;
L_52f26f: /* 52f26f: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f273: je 0x52f281 */
  if (zf) goto L_52f281;
L_52f275: /* 52f275: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f279: je 0x52f281 */
  if (zf) goto L_52f281;
L_52f27b: /* 52f27b: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f27f: jne 0x52f288 */
  if (!zf) goto L_52f288;
L_52f281: /* 52f281: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f284: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52f286: jmp 0x52f264 */
  goto L_52f264;
L_52f288: /* 52f288: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f28a: cmp word ptr [eax], 0x3b */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x3bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f28e: jne 0x52f2b0 */
  if (!zf) goto L_52f2b0;
L_52f290: /* 52f290: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f292: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 52f295: cmp dx, 0xa */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f299: je 0x52f264 */
  if (zf) goto L_52f264;
L_52f29b: /* 52f29b: cmp dx, 0xd */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f29f: je 0x52f264 */
  if (zf) goto L_52f264;
L_52f2a1: /* 52f2a1: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52f2a4: mov edx, eax */
  edx = eax;
/* 52f2a6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52f2a8: cmp word ptr [edx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f2ac: jne 0x52f290 */
  if (!zf) goto L_52f290;
L_52f2ae: /* 52f2ae: jmp 0x52f264 */
  goto L_52f264;
L_52f2b0: /* 52f2b0: ret  */
  esp += 4; SPILL(); return;
}

void f_52f2e0(void) {
  LOAD_REGS();
L_52f2e0: /* 52f2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 52f2e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f2e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f2e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f2e7: xor edi, edi */
  edi = 0;
/* 52f2e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_52f2f0: /* 52f2f0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 52f2f2: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 52f2f5: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f2f9: je 0x52f301 */
  if (zf) goto L_52f301;
L_52f2fb: /* 52f2fb: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f2ff: jne 0x52f308 */
  if (!zf) goto L_52f308;
L_52f301: /* 52f301: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f304: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 52f306: jmp 0x52f2f0 */
  goto L_52f2f0;
L_52f308: /* 52f308: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52f30a: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f30d: cmp dx, 0x22 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f311: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 52f315: jne 0x52f388 */
  if (!zf) goto L_52f388;
L_52f317: /* 52f317: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f31a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52f31c: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f320: je 0x52f36a */
  if (zf) goto L_52f36a;
L_52f322: /* 52f322: mov esi, 1 */
  esi = 0x1u;
/* 52f327: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_52f328: /* 52f328: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 52f32a: xor ecx, ecx */
  ecx = 0;
/* 52f32c: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 52f32f: cmp cx, 0x22 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f333: je 0x52f369 */
  if (zf) goto L_52f369;
L_52f335: /* 52f335: cmp esi, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52f339: jge 0x52f369 */
  if ((sf == of)) goto L_52f369;
L_52f33b: /* 52f33b: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f33e: cmp cx, 0x5c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f342: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 52f344: jne 0x52f35b */
  if (!zf) goto L_52f35b;
L_52f346: /* 52f346: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 52f34a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f34c: je 0x52f35b */
  if (zf) goto L_52f35b;
L_52f34e: /* 52f34e: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 52f351: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f354: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52f357: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 52f359: je 0x52f369 */
  if (zf) goto L_52f369;
L_52f35b: /* 52f35b: mov word ptr [ebx + edi*2], cx */
  W16((uint32_t)(ebx + edi*2), (ecx & 0xffffu));
/* 52f35f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52f361: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52f362: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 52f363: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f367: jne 0x52f328 */
  if (!zf) goto L_52f328;
L_52f369: /* 52f369: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_52f36a: /* 52f36a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52f36c: cmp word ptr [ecx], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f370: jne 0x52f3be */
  if (!zf) goto L_52f3be;
L_52f372: /* 52f372: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f375: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52f377: xor eax, eax */
  eax = 0;
/* 52f379: mov word ptr [ebx + edi*2], 0 */
  W16((uint32_t)(ebx + edi*2), 0x0u);
/* 52f37f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f381: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f382: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f383: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 52f386: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f387: ret  */
  esp += 4; SPILL(); return;
L_52f388: /* 52f388: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52f38b: je 0x52f3be */
  if (zf) goto L_52f3be;
L_52f38d: /* 52f38d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 52f391: mov edx, 1 */
  edx = 0x1u;
L_52f396: /* 52f396: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52f398: mov cx, word ptr [ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 52f39b: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f39f: je 0x52f3be */
  if (zf) goto L_52f3be;
L_52f3a1: /* 52f3a1: cmp cx, 9 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f3a5: je 0x52f3be */
  if (zf) goto L_52f3be;
L_52f3a7: /* 52f3a7: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52f3a9: jge 0x52f3b1 */
  if ((sf == of)) goto L_52f3b1;
L_52f3ab: /* 52f3ab: mov word ptr [ebx + edi*2], cx */
  W16((uint32_t)(ebx + edi*2), (ecx & 0xffffu));
/* 52f3af: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 52f3b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_52f3b1: /* 52f3b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 52f3b3: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 52f3b6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 52f3b8: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f3bc: jne 0x52f396 */
  if (!zf) goto L_52f396;
L_52f3be: /* 52f3be: xor eax, eax */
  eax = 0;
/* 52f3c0: mov word ptr [ebx + edi*2], 0 */
  W16((uint32_t)(ebx + edi*2), 0x0u);
/* 52f3c6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f3c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f3c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f3ca: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 52f3cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f3ce: ret  */
  esp += 4; SPILL(); return;
}

void f_52f410(void) {
  LOAD_REGS();
L_52f410: /* 52f410: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52f414: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52f418: sub esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52f41e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f41f: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 52f424: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 52f428: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f42a: call 0x4e3256 */
  esp -= 4; W32(esp, 0x52f42fu); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 52f42f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f434: je 0x52f453 */
  if (zf) goto L_52f453;
L_52f436: /* 52f436: mov ecx, dword ptr [esp + 0x808] */
  ecx = R32((uint32_t)(esp + 0x808u));
/* 52f43d: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 52f441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f442: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x52f447u); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 52f447: mov eax, 1 */
  eax = 0x1u;
/* 52f44c: add esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f452: ret  */
  esp += 4; SPILL(); return;
L_52f453: /* 52f453: xor eax, eax */
  eax = 0;
/* 52f455: add esp, 0x800 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f45b: ret  */
  esp += 4; SPILL(); return;
}

void f_52f480(void) {
  LOAD_REGS();
L_52f480: /* 52f480: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f481: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52f485: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f486: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 52f48a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52f48b: xor ebp, ebp */
  ebp = 0;
/* 52f48d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f48e: mov word ptr [ebx], bp */
  W16((uint32_t)(ebx), (ebp & 0xffffu));
/* 52f491: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f493: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f494: xor edi, edi */
  edi = 0;
/* 52f496: cmp word ptr [eax], bp */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebp & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f499: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 52f49d: je 0x52f514 */
  if (zf) goto L_52f514;
L_52f49f: /* 52f49f: nop  */
L_52f4a0: /* 52f4a0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 52f4a2: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 52f4a5: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4a9: je 0x52f514 */
  if (zf) goto L_52f514;
L_52f4ab: /* 52f4ab: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4af: je 0x52f514 */
  if (zf) goto L_52f514;
L_52f4b1: /* 52f4b1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 52f4b5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 52f4b6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52f4b8: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 52f4bc: jle 0x52f514 */
  if ((zf || sf != of)) goto L_52f514;
L_52f4be: /* 52f4be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f4c0: jne 0x52f4e1 */
  if (!zf) goto L_52f4e1;
L_52f4c2: /* 52f4c2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 52f4c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f4c8: jne 0x52f4e1 */
  if (!zf) goto L_52f4e1;
L_52f4ca: /* 52f4ca: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4ce: jne 0x52f4db */
  if (!zf) goto L_52f4db;
L_52f4d0: /* 52f4d0: cmp word ptr [esi + 2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4d4: jne 0x52f4db */
  if (!zf) goto L_52f4db;
L_52f4d6: /* 52f4d6: mov ebp, 1 */
  ebp = 0x1u;
L_52f4db: /* 52f4db: cmp ax, 0x7c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4df: je 0x52f553 */
  if (zf) goto L_52f553;
L_52f4e1: /* 52f4e1: xor edx, edx */
  edx = 0;
/* 52f4e3: cmp ax, 0x22 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f4e7: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 52f4ea: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 52f4f2: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 52f4f4: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f4f6: jne 0x52f507 */
  if (!zf) goto L_52f507;
L_52f4f8: /* 52f4f8: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 52f4fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f4fd: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 52f500: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52f503: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 52f505: jmp 0x52f50c */
  goto L_52f50c;
L_52f507: /* 52f507: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 52f50a: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_52f50c: /* 52f50c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f50e: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f512: jne 0x52f4a0 */
  if (!zf) goto L_52f4a0;
L_52f514: /* 52f514: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 52f518: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f51a: je 0x52f553 */
  if (zf) goto L_52f553;
L_52f51c: /* 52f51c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f51e: cmp word ptr [eax], 0xd */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f522: jne 0x52f529 */
  if (!zf) goto L_52f529;
L_52f524: /* 52f524: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52f527: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_52f529: /* 52f529: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f52b: cmp word ptr [eax], 0xa */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f52f: jne 0x52f536 */
  if (!zf) goto L_52f536;
L_52f531: /* 52f531: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52f534: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_52f536: /* 52f536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f537: mov word ptr [ebx], 0 */
  W16((uint32_t)(ebx), 0x0u);
/* 52f53c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 52f53e: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f542: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f543: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f545: jne 0x52f571 */
  if (!zf) goto L_52f571;
L_52f547: /* 52f547: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 52f54b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f54d: jne 0x52f571 */
  if (!zf) goto L_52f571;
L_52f54f: /* 52f54f: xor eax, eax */
  eax = 0;
/* 52f551: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52f552: ret  */
  esp += 4; SPILL(); return;
L_52f553: /* 52f553: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52f555: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 52f558: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f55c: je 0x52f56a */
  if (zf) goto L_52f56a;
L_52f55e: /* 52f55e: cmp ax, 0xd */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f562: je 0x52f56a */
  if (zf) goto L_52f56a;
L_52f564: /* 52f564: cmp ax, 0x7c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f568: jne 0x52f536 */
  if (!zf) goto L_52f536;
L_52f56a: /* 52f56a: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 52f56d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 52f56f: jmp 0x52f553 */
  goto L_52f553;
L_52f571: /* 52f571: mov eax, 1 */
  eax = 0x1u;
/* 52f576: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 52f577: ret  */
  esp += 4; SPILL(); return;
}

void f_52f5c0(void) {
  LOAD_REGS();
L_52f5c0: /* 52f5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52f5c1: mov ebp, esp */
  ebp = esp;
/* 52f5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52f5c5: push 0x558490 */
  { uint32_t v = 0x558490u; esp -= 4; W32(esp, v); }
/* 52f5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52f5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52f5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f5d9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 52f5de: call 0x554f80 */
  esp -= 4; W32(esp, 0x52f5e3u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 52f5e3: mov ax, word ptr [0x5f7cf8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x5f7cf8u))) & 0xffffu);
/* 52f5e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f5ec: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 52f5f3: xor eax, eax */
  eax = 0;
/* 52f5f5: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 52f5fa: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 52f600: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 52f602: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52f605: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52f608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f609: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 52f60e: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 52f614: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 52f616: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52f619: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f61a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f61b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52f622: call 0x4e3a4e */
  esp -= 4; W32(esp, 0x52f627u); SPILL(); f_4e3a4e(); if (g_unwind) return; RELOAD();
/* 52f627: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 52f62a: mov edi, eax */
  edi = eax;
/* 52f62c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 52f62e: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 52f634: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f637: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52f639: je 0x52f684 */
  if (zf) goto L_52f684;
L_52f63b: /* 52f63b: cmp word ptr [ebp - 0x2018], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffdfe8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 52f643: je 0x52f657 */
  if (zf) goto L_52f657;
L_52f645: /* 52f645: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 52f64b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f64c: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x52f651u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 52f651: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f654: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52f655: jmp 0x52f659 */
  goto L_52f659;
L_52f657: /* 52f657: xor eax, eax */
  eax = 0;
L_52f659: /* 52f659: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52f65b: mov ecx, esi */
  ecx = esi;
/* 52f65d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52f660: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 52f663: call 0x4e4502 */
  esp -= 4; W32(esp, 0x52f668u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 52f668: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52f66b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f66d: je 0x52f684 */
  if (zf) goto L_52f684;
L_52f66f: /* 52f66f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52f671: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 52f673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f674: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 52f67a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f67b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f67c: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x52f681u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 52f681: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52f684: /* 52f684: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f687: mov eax, edi */
  eax = edi;
/* 52f689: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f68a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f693: mov esp, ebp */
  esp = ebp;
/* 52f695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f696: ret  */
  esp += 4; SPILL(); return;
}

void f_52f697(void) {
  LOAD_REGS();
L_52f697: /* 52f697: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52f69a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52f69f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52f6a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f6a3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52f6a6: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f6abu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52f6ab(); return;
}

void f_52f6ab(void) {
  LOAD_REGS();
L_52f6ab: /* 52f6ab: push 0x56d248 */
  { uint32_t v = 0x56d248u; esp -= 4; W32(esp, v); }
/* 52f6b0: push 0x5a794c */
  { uint32_t v = 0x5a794cu; esp -= 4; W32(esp, v); }
/* 52f6b5: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52f6bau); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52f6ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f6bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f6bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f6c1: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f6c6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52f6c6: guest_badaddr(0x52f6c6); return;
}

void f_52f720(void) {
  LOAD_REGS();
L_52f720: /* 52f720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52f721: mov ebp, esp */
  ebp = esp;
/* 52f723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52f725: push 0x5584a0 */
  { uint32_t v = 0x5584a0u; esp -= 4; W32(esp, v); }
/* 52f72a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52f730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52f738: sub esp, 0x210 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52f73e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f73f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f741: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52f744: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52f74b: call 0x4e292d */
  esp -= 4; W32(esp, 0x52f750u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 52f750: mov esi, eax */
  esi = eax;
/* 52f752: mov eax, dword ptr [0x5b2134] */
  eax = R32((uint32_t)(0x5b2134u));
/* 52f757: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f759: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 52f75c: je 0x52f829 */
  if (zf) goto L_52f829;
L_52f762: /* 52f762: mov eax, dword ptr [0x5afeec] */
  eax = R32((uint32_t)(0x5afeecu));
/* 52f767: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f769: je 0x52f829 */
  if (zf) goto L_52f829;
L_52f76f: /* 52f76f: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 52f772: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f774: jne 0x52f77d */
  if (!zf) goto L_52f77d;
L_52f776: /* 52f776: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x52f77bu); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 52f77b: mov esi, eax */
  esi = eax;
L_52f77d: /* 52f77d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 52f780: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_52f783: /* 52f783: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 52f786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f788: lea ecx, [ebp - 0x21c] */
  ecx = (uint32_t)(ebp + 0xfffffde4u);
/* 52f78e: push 0x5a796c */
  { uint32_t v = 0x5a796cu; esp -= 4; W32(esp, v); }
/* 52f793: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f794: call 0x4e4183 */
  esp -= 4; W32(esp, 0x52f799u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 52f799: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 52f79f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52f7a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f7a4: lea eax, [ebp - 0x21c] */
  eax = (uint32_t)(ebp + 0xfffffde4u);
/* 52f7aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f7ab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 52f7ae: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 52f7b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f7b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f7b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f7b6: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x52f7b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52f7b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f7bb: jne 0x52f815 */
  if (!zf) goto L_52f815;
L_52f7bd: /* 52f7bd: push 0x5a7978 */
  { uint32_t v = 0x5a7978u; esp -= 4; W32(esp, v); }
/* 52f7c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f7c3: call 0x4e26df */
  esp -= 4; W32(esp, 0x52f7c8u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 52f7c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f7cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f7cd: je 0x52f7d6 */
  if (zf) goto L_52f7d6;
L_52f7cf: /* 52f7cf: mov esi, 0x5a7980 */
  esi = 0x5a7980u;
/* 52f7d4: jmp 0x52f783 */
  goto L_52f783;
L_52f7d6: /* 52f7d6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 52f7d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f7db: jne 0x52f815 */
  if (!zf) goto L_52f815;
L_52f7dd: /* 52f7dd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52f7e0: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 52f7e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f7e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f7e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f7e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f7ea: push 0x5a7988 */
  { uint32_t v = 0x5a7988u; esp -= 4; W32(esp, v); }
/* 52f7ef: push 0x311 */
  { uint32_t v = 0x311u; esp -= 4; W32(esp, v); }
/* 52f7f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f7f5: call 0x4e30df */
  esp -= 4; W32(esp, 0x52f7fau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 52f7fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 52f7fd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 52f800: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f804: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f807: push 0x5a79c8 */
  { uint32_t v = 0x5a79c8u; esp -= 4; W32(esp, v); }
/* 52f80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f80d: call 0x4e4183 */
  esp -= 4; W32(esp, 0x52f812u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 52f812: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52f815: /* 52f815: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 52f818: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f81b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f822: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f823: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f824: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f825: mov esp, ebp */
  esp = ebp;
/* 52f827: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f828: ret  */
  esp += 4; SPILL(); return;
L_52f829: /* 52f829: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 52f82c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f82d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f82e: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x52f833u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 52f833: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f836: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f839: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f83a: mov eax, esi */
  eax = esi;
/* 52f83c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f83d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f845: mov esp, ebp */
  esp = ebp;
/* 52f847: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52f848: ret  */
  esp += 4; SPILL(); return;
}

void f_52f849(void) {
  LOAD_REGS();
L_52f849: /* 52f849: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 52f84c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52f851: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 52f854: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f855: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 52f858: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f85du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52f85d(); return;
}

void f_52f85d(void) {
  LOAD_REGS();
L_52f85d: /* 52f85d: push 0x56d260 */
  { uint32_t v = 0x56d260u; esp -= 4; W32(esp, v); }
/* 52f862: push 0x5a79e8 */
  { uint32_t v = 0x5a79e8u; esp -= 4; W32(esp, v); }
/* 52f867: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52f86cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52f86c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f86f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f873: call 0x554df6 */
  esp -= 4; W32(esp, 0x52f878u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52f878: guest_badaddr(0x52f878); return;
}

void f_52f8e0(void) {
  LOAD_REGS();
L_52f8e0: /* 52f8e0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52f8e4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52f8e8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52f8ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f8ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f8ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f8f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f8f1: push 0x5a79f0 */
  { uint32_t v = 0x5a79f0u; esp -= 4; W32(esp, v); }
/* 52f8f6: call 0x4e43db */
  esp -= 4; W32(esp, 0x52f8fbu); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 52f8fb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f8fe: ret  */
  esp += 4; SPILL(); return;
}

void f_52f910(void) {
  LOAD_REGS();
L_52f910: /* 52f910: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52f914: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52f918: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52f91c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f91e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f91f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f920: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f921: push 0x5a7a00 */
  { uint32_t v = 0x5a7a00u; esp -= 4; W32(esp, v); }
/* 52f926: call 0x4e43db */
  esp -= 4; W32(esp, 0x52f92bu); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 52f92b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f92e: ret  */
  esp += 4; SPILL(); return;
}

void f_52f940(void) {
  LOAD_REGS();
L_52f940: /* 52f940: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52f944: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52f948: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52f94c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f94e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f94f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f950: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f951: push 0x5a7a14 */
  { uint32_t v = 0x5a7a14u; esp -= 4; W32(esp, v); }
/* 52f956: call 0x4e43db */
  esp -= 4; W32(esp, 0x52f95bu); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 52f95b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f95e: ret  */
  esp += 4; SPILL(); return;
}

void f_52f970(void) {
  LOAD_REGS();
L_52f970: /* 52f970: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 52f974: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 52f978: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 52f97c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52f97e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f97f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52f980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f981: push 0x5a7a20 */
  { uint32_t v = 0x5a7a20u; esp -= 4; W32(esp, v); }
/* 52f986: call 0x4e43db */
  esp -= 4; W32(esp, 0x52f98bu); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 52f98b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52f98e: ret  */
  esp += 4; SPILL(); return;
}

void f_52f9a0(void) {
  LOAD_REGS();
L_52f9a0: /* 52f9a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52f9a1: mov ebp, esp */
  ebp = esp;
/* 52f9a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52f9a5: push 0x5584b0 */
  { uint32_t v = 0x5584b0u; esp -= 4; W32(esp, v); }
/* 52f9aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52f9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52f9b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52f9b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52f9bb: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 52f9c1: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 52f9c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52f9c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52f9ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52f9cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52f9cc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52f9cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f9d0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 52f9d3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 52f9d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52f9d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52f9dd: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x52f9e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52f9e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52f9e2: je 0x52fa02 */
  if (zf) goto L_52fa02;
L_52f9e4: /* 52f9e4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 52f9e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52f9e8: mov ecx, eax */
  ecx = eax;
/* 52f9ea: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52f9ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52f9ec: mov eax, 1 */
  eax = 0x1u;
/* 52f9f1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52f9f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52f9fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52f9fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52f9fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52f9fe: mov esp, ebp */
  esp = ebp;
/* 52fa00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fa01: ret  */
  esp += 4; SPILL(); return;
L_52fa02: /* 52fa02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fa05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52fa06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fa07: xor eax, eax */
  eax = 0;
/* 52fa09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fa10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fa11: mov esp, ebp */
  esp = ebp;
/* 52fa13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fa14: ret  */
  esp += 4; SPILL(); return;
}

void f_52fa15(void) {
  LOAD_REGS();
L_52fa15: /* 52fa15: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52fa18: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fa1d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52fa20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52fa21: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52fa24: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fa29u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fa29(); return;
}

void f_52fa29(void) {
  LOAD_REGS();
L_52fa29: /* 52fa29: push 0x56d278 */
  { uint32_t v = 0x56d278u; esp -= 4; W32(esp, v); }
/* 52fa2e: push 0x5a7a30 */
  { uint32_t v = 0x5a7a30u; esp -= 4; W32(esp, v); }
/* 52fa33: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fa38u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fa38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fa3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fa3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fa3f: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fa44u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52fa44: guest_badaddr(0x52fa44); return;
}

void f_52fa80(void) {
  LOAD_REGS();
L_52fa80: /* 52fa80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52fa81: mov ebp, esp */
  ebp = esp;
/* 52fa83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52fa85: push 0x5584c0 */
  { uint32_t v = 0x5584c0u; esp -= 4; W32(esp, v); }
/* 52fa8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52fa90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fa91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52fa98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52fa9b: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 52faa1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 52faa4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52faa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52faa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52faa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52faa9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52faac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52faad: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 52fab0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fab2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52fab3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52faba: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x52fabdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52fabd: mov esi, eax */
  esi = eax;
/* 52fabf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fac1: jne 0x52fad4 */
  if (!zf) goto L_52fad4;
L_52fac3: /* 52fac3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fac6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52facd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52face: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52facf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fad0: mov esp, ebp */
  esp = ebp;
/* 52fad2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fad3: ret  */
  esp += 4; SPILL(); return;
L_52fad4: /* 52fad4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 52fad7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 52fada: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 52fadc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52fade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52fadf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fae0: mov ecx, esi */
  ecx = esi;
/* 52fae2: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x52fae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52fae5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 52fae7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52fae9: mov ecx, esi */
  ecx = esi;
/* 52faeb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x52faedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52faed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52faf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52faf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52faf2: mov eax, 1 */
  eax = 0x1u;
/* 52faf7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fafe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52faff: mov esp, ebp */
  esp = ebp;
/* 52fb01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fb02: ret  */
  esp += 4; SPILL(); return;
}

void f_52fb03(void) {
  LOAD_REGS();
L_52fb03: /* 52fb03: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52fb06: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fb0b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52fb0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52fb0f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52fb12: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fb17u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fb17(); return;
}

void f_52fb17(void) {
  LOAD_REGS();
L_52fb17: /* 52fb17: push 0x56d2ac */
  { uint32_t v = 0x56d2acu; esp -= 4; W32(esp, v); }
/* 52fb1c: push 0x5a7a48 */
  { uint32_t v = 0x5a7a48u; esp -= 4; W32(esp, v); }
/* 52fb21: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fb26u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fb26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fb29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fb2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fb2d: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fb32u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52fb32: guest_badaddr(0x52fb32); return;
}

void f_52fb70(void) {
  LOAD_REGS();
L_52fb70: /* 52fb70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52fb71: mov ebp, esp */
  ebp = esp;
/* 52fb73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52fb75: push 0x5584d0 */
  { uint32_t v = 0x5584d0u; esp -= 4; W32(esp, v); }
/* 52fb7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52fb80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fb81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52fb88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52fb8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52fb8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fb8d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 52fb90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52fb91: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 52fb94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52fb97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52fb9e: mov edi, edi */
  edi = edi;
L_52fba0: /* 52fba0: mov eax, dword ptr [0x696740] */
  eax = R32((uint32_t)(0x696740u));
/* 52fba5: mov ecx, eax */
  ecx = eax;
/* 52fba7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52fba8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52fba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52fbaa: push 0x5a7b4c */
  { uint32_t v = 0x5a7b4cu; esp -= 4; W32(esp, v); }
/* 52fbaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fbb0: mov dword ptr [0x696740], eax */
  W32((uint32_t)(0x696740u), eax);
/* 52fbb5: call 0x4e4183 */
  esp -= 4; W32(esp, 0x52fbbau); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 52fbba: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 52fbc0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52fbc2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fbc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fbc6: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52fbc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52fbc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 52fbcb: jg 0x52fba0 */
  if ((!zf && sf == of)) goto L_52fba0;
L_52fbcd: /* 52fbcd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fbd0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52fbd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fbd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fbd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fbda: mov esp, ebp */
  esp = ebp;
/* 52fbdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fbdd: ret  */
  esp += 4; SPILL(); return;
}

void f_52fbde(void) {
  LOAD_REGS();
L_52fbde: /* 52fbde: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52fbe1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fbe6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52fbe9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52fbea: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52fbed: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fbf2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fbf2(); return;
}

void f_52fbf2(void) {
  LOAD_REGS();
L_52fbf2: /* 52fbf2: push 0x56d2dc */
  { uint32_t v = 0x56d2dcu; esp -= 4; W32(esp, v); }
/* 52fbf7: push 0x5a7b64 */
  { uint32_t v = 0x5a7b64u; esp -= 4; W32(esp, v); }
/* 52fbfc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fc01u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fc01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fc04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fc06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fc08: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fc0du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52fc0d: guest_badaddr(0x52fc0d); return;
}

void f_52fc40(void) {
  LOAD_REGS();
L_52fc40: /* 52fc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52fc41: mov ebp, esp */
  ebp = esp;
/* 52fc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52fc45: push 0x5584e0 */
  { uint32_t v = 0x5584e0u; esp -= 4; W32(esp, v); }
/* 52fc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52fc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52fc58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52fc5b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 52fc60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52fc61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fc62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52fc63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52fc66: push 0x5a7e38 */
  { uint32_t v = 0x5a7e38u; esp -= 4; W32(esp, v); }
/* 52fc6b: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 52fc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fc71: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52fc78: call 0x4e30df */
  esp -= 4; W32(esp, 0x52fc7du); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 52fc7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fc80: call 0x4e2f81 */
  esp -= 4; W32(esp, 0x52fc85u); SPILL(); f_4e2f81(); if (g_unwind) return; RELOAD();
/* 52fc85: mov ecx, 0x5afed8 */
  ecx = 0x5afed8u;
/* 52fc8a: call 0x4e237e */
  esp -= 4; W32(esp, 0x52fc8fu); SPILL(); f_4e237e(); if (g_unwind) return; RELOAD();
/* 52fc8f: call 0x4e3161 */
  esp -= 4; W32(esp, 0x52fc94u); SPILL(); f_4e3161(); if (g_unwind) return; RELOAD();
/* 52fc94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fc97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52fc98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fc99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fca0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fca1: mov esp, ebp */
  esp = ebp;
/* 52fca3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fca4: ret  */
  esp += 4; SPILL(); return;
}

void f_52fca5(void) {
  LOAD_REGS();
L_52fca5: /* 52fca5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52fca8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fcad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52fcb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52fcb1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52fcb4: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fcb9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fcb9(); return;
}

void f_52fcb9(void) {
  LOAD_REGS();
L_52fcb9: /* 52fcb9: push 0x56d310 */
  { uint32_t v = 0x56d310u; esp -= 4; W32(esp, v); }
/* 52fcbe: push 0x5a7e60 */
  { uint32_t v = 0x5a7e60u; esp -= 4; W32(esp, v); }
/* 52fcc3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fcc8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fcc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fccd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fccf: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fcd4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52fcd4: guest_badaddr(0x52fcd4); return;
}

void f_52fd10(void) {
  LOAD_REGS();
L_52fd10: /* 52fd10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52fd11: mov ebp, esp */
  ebp = esp;
/* 52fd13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52fd15: push 0x5584f0 */
  { uint32_t v = 0x5584f0u; esp -= 4; W32(esp, v); }
/* 52fd1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52fd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fd21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52fd28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52fd2b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 52fd30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52fd31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fd32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52fd33: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52fd36: push 0x5a7e68 */
  { uint32_t v = 0x5a7e68u; esp -= 4; W32(esp, v); }
/* 52fd3b: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 52fd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fd41: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52fd48: call 0x4e30df */
  esp -= 4; W32(esp, 0x52fd4du); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 52fd4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fd50: call 0x4e3611 */
  esp -= 4; W32(esp, 0x52fd55u); SPILL(); f_4e3611(); if (g_unwind) return; RELOAD();
/* 52fd55: call 0x4e36c0 */
  esp -= 4; W32(esp, 0x52fd5au); SPILL(); f_4e36c0(); if (g_unwind) return; RELOAD();
/* 52fd5a: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 52fd60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fd62: je 0x52fd84 */
  if (zf) goto L_52fd84;
L_52fd64: /* 52fd64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52fd66: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x52fd69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 52fd69: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 52fd6f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fd71: je 0x52fd7a */
  if (zf) goto L_52fd7a;
L_52fd73: /* 52fd73: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52fd75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 52fd77: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x52fd7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52fd7a: /* 52fd7a: mov dword ptr [0x5afeec], 0 */
  W32((uint32_t)(0x5afeecu), 0x0u);
L_52fd84: /* 52fd84: call 0x4e2784 */
  esp -= 4; W32(esp, 0x52fd89u); SPILL(); f_4e2784(); if (g_unwind) return; RELOAD();
/* 52fd89: mov eax, dword ptr [0x5b2130] */
  eax = R32((uint32_t)(0x5b2130u));
/* 52fd8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fd90: jne 0x52fd9d */
  if (!zf) goto L_52fd9d;
L_52fd92: /* 52fd92: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52fd98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 52fd9a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x52fd9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52fd9d: /* 52fd9d: mov ecx, dword ptr [0x5f7ce8] */
  ecx = R32((uint32_t)(0x5f7ce8u));
/* 52fda3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fda5: mov esi, ecx */
  esi = ecx;
/* 52fda7: je 0x52fdba */
  if (zf) goto L_52fdba;
L_52fda9: /* 52fda9: call 0x4e2efa */
  esp -= 4; W32(esp, 0x52fdaeu); SPILL(); f_4e2efa(); if (g_unwind) return; RELOAD();
/* 52fdae: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 52fdb4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 52fdb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fdb7: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x52fdbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_52fdba: /* 52fdba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fdbd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52fdbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fdbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fdc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fdc7: mov esp, ebp */
  esp = ebp;
/* 52fdc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fdca: ret  */
  esp += 4; SPILL(); return;
}

void f_52fdcb(void) {
  LOAD_REGS();
L_52fdcb: /* 52fdcb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52fdce: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fdd3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 52fdd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 52fdd7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 52fdda: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fddfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fddf(); return;
}

void f_52fddf(void) {
  LOAD_REGS();
L_52fddf: /* 52fddf: push 0x56d32c */
  { uint32_t v = 0x56d32cu; esp -= 4; W32(esp, v); }
/* 52fde4: push 0x5a7e7c */
  { uint32_t v = 0x5a7e7cu; esp -= 4; W32(esp, v); }
/* 52fde9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fdeeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fdee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fdf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fdf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fdf5: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fdfau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_52fdfa: guest_badaddr(0x52fdfa); return;
}

void f_52fe40(void) {
  LOAD_REGS();
L_52fe40: /* 52fe40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52fe41: mov ebp, esp */
  ebp = esp;
/* 52fe43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52fe45: push 0x558500 */
  { uint32_t v = 0x558500u; esp -= 4; W32(esp, v); }
/* 52fe4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52fe50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52fe51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52fe58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52fe5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52fe5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52fe5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52fe60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fe62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52fe63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52fe66: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52fe6d: jne 0x52fe82 */
  if (!zf) goto L_52fe82;
L_52fe6f: /* 52fe6f: xor eax, eax */
  eax = 0;
/* 52fe71: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52fe74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fe7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52fe7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fe7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fe7e: mov esp, ebp */
  esp = ebp;
/* 52fe80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52fe81: ret  */
  esp += 4; SPILL(); return;
L_52fe82: /* 52fe82: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52fe85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fe87: mov edi, eax */
  edi = eax;
/* 52fe89: jne 0x52fe90 */
  if (!zf) goto L_52fe90;
L_52fe8b: /* 52fe8b: call 0x4e292d */
  esp -= 4; W32(esp, 0x52fe90u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
L_52fe90: /* 52fe90: xor edx, edx */
  edx = 0;
L_52fe92: /* 52fe92: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52fe94: jne 0x52fe9e */
  if (!zf) goto L_52fe9e;
L_52fe96: /* 52fe96: cmp edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52fe9c: jge 0x52feeb */
  if ((sf == of)) goto L_52feeb;
L_52fe9e: /* 52fe9e: mov cx, word ptr [esi + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + edx*2))) & 0xffffu);
/* 52fea2: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 52fea5: je 0x52feeb */
  if (zf) goto L_52feeb;
L_52fea7: /* 52fea7: cmp cx, 0x100 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 52feac: movzx ecx, cx */
  ecx = (uint32_t)((ecx & 0xffffu));
/* 52feaf: jb 0x52feb6 */
  if (cf) goto L_52feb6;
L_52feb1: /* 52feb1: mov ecx, 0x7f */
  ecx = 0x7fu;
L_52feb6: /* 52feb6: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* 52feb9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 52feba: jmp 0x52fe92 */
  goto L_52fe92;
L_52feeb: /* 52feeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52feee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52feef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fef0: mov byte ptr [edx + eax], 0 */
  W8((uint32_t)(edx + eax), 0x0u);
/* 52fef4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fefb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fefc: mov esp, ebp */
  esp = ebp;
/* 52fefe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52feff: ret  */
  esp += 4; SPILL(); return;
}

void f_52febc(void) {
  LOAD_REGS();
L_52febc: /* 52febc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52febf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52fec4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52fec7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52fec8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52fecb: call 0x554df6 */
  esp -= 4; W32(esp, 0x52fed0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52fed0(); return;
}

void f_52fed0(void) {
  LOAD_REGS();
L_52fed0: /* 52fed0: push 0x56d340 */
  { uint32_t v = 0x56d340u; esp -= 4; W32(esp, v); }
/* 52fed5: push 0x5a7e84 */
  { uint32_t v = 0x5a7e84u; esp -= 4; W32(esp, v); }
/* 52feda: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52fedfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52fedf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52fee2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52fee6: call 0x554df6 */
  esp -= 4; W32(esp, 0x52feebu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52feeb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52feee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52feef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52fef0: mov byte ptr [edx + eax], 0 */
  W8((uint32_t)(edx + eax), 0x0u);
/* 52fef4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52fefb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52fefc: mov esp, ebp */
  esp = ebp;
/* 52fefe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52feff: ret  */
  esp += 4; SPILL(); return;
}

void f_52ff30(void) {
  LOAD_REGS();
L_52ff30: /* 52ff30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 52ff31: mov ebp, esp */
  ebp = esp;
/* 52ff33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 52ff35: push 0x558510 */
  { uint32_t v = 0x558510u; esp -= 4; W32(esp, v); }
/* 52ff3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 52ff40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 52ff41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 52ff48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 52ff4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52ff4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52ff4d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 52ff50: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ff52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 52ff53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 52ff56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 52ff5d: jne 0x52ff72 */
  if (!zf) goto L_52ff72;
L_52ff5f: /* 52ff5f: xor eax, eax */
  eax = 0;
/* 52ff61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ff64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ff6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ff6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ff6d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ff6e: mov esp, ebp */
  esp = ebp;
/* 52ff70: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ff71: ret  */
  esp += 4; SPILL(); return;
L_52ff72: /* 52ff72: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 52ff75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ff77: mov edi, eax */
  edi = eax;
/* 52ff79: jne 0x52ff80 */
  if (!zf) goto L_52ff80;
L_52ff7b: /* 52ff7b: call 0x4e292d */
  esp -= 4; W32(esp, 0x52ff80u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
L_52ff80: /* 52ff80: xor ecx, ecx */
  ecx = 0;
L_52ff82: /* 52ff82: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 52ff84: jne 0x52ff8e */
  if (!zf) goto L_52ff8e;
L_52ff86: /* 52ff86: cmp ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 52ff8c: jge 0x52ffcf */
  if ((sf == of)) goto L_52ffcf;
L_52ff8e: /* 52ff8e: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 52ff91: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 52ff93: je 0x52ffcf */
  if (zf) goto L_52ffcf;
L_52ff95: /* 52ff95: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* 52ff99: mov word ptr [eax + ecx*2], dx */
  W16((uint32_t)(eax + ecx*2), (edx & 0xffffu));
/* 52ff9d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 52ff9e: jmp 0x52ff82 */
  goto L_52ff82;
L_52ffcf: /* 52ffcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ffd0: mov word ptr [eax + ecx*2], 0 */
  W16((uint32_t)(eax + ecx*2), 0x0u);
/* 52ffd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ffd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ffda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ffe1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ffe2: mov esp, ebp */
  esp = ebp;
/* 52ffe4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ffe5: ret  */
  esp += 4; SPILL(); return;
}

void f_52ffa0(void) {
  LOAD_REGS();
L_52ffa0: /* 52ffa0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 52ffa3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 52ffa8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 52ffab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52ffac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 52ffaf: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ffb4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_52ffb4(); return;
}

void f_52ffb4(void) {
  LOAD_REGS();
L_52ffb4: /* 52ffb4: push 0x56d358 */
  { uint32_t v = 0x56d358u; esp -= 4; W32(esp, v); }
/* 52ffb9: push 0x5a7e8c */
  { uint32_t v = 0x5a7e8cu; esp -= 4; W32(esp, v); }
/* 52ffbe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x52ffc3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 52ffc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52ffc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ffc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 52ffca: call 0x554df6 */
  esp -= 4; W32(esp, 0x52ffcfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 52ffcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 52ffd0: mov word ptr [eax + ecx*2], 0 */
  W16((uint32_t)(eax + ecx*2), 0x0u);
/* 52ffd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 52ffd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 52ffda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 52ffe1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 52ffe2: mov esp, ebp */
  esp = ebp;
/* 52ffe4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 52ffe5: ret  */
  esp += 4; SPILL(); return;
}

void f_530020(void) {
  LOAD_REGS();
L_530020: /* 530020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 530024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530025: mov esi, ecx */
  esi = ecx;
/* 530027: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530029: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 53002f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 530032: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 530035: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53003au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53003a: mov eax, esi */
  eax = esi;
/* 53003c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53003d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53003a(void) {
  LOAD_REGS();
L_53003a: /* 53003a: mov eax, esi */
  eax = esi;
/* 53003c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53003d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_530050(void) {
  LOAD_REGS();
  {
      uint32_t expr_ptr = R32(esp + 4);
      uint32_t file_ptr = R32(esp + 8);
      uint32_t line = R32(esp + 0xc);
      host_log(">>> CRITICAL UE2 appFailAssert: '%s' at %s:%u <<<\n",
               GSTR(expr_ptr), GSTR(file_ptr), line);
  }
L_530050: /* 530050: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 530054: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 530058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53005b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53005c: call 0x4e161d */
  esp -= 4; W32(esp, 0x530061u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530061: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 530065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53006b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53006c: call 0x4e161d */
  esp -= 4; W32(esp, 0x530071u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530071: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530075: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53007a: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53007f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530080: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530085u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530085: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530088: ret  */
  esp += 4; SPILL(); return;
}

void f_530065(void) {
  LOAD_REGS();
L_530065: /* 530065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53006b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53006c: call 0x4e161d */
  esp -= 4; W32(esp, 0x530071u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530071: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530075: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53007a: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53007f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530080: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530085u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530085: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530088: ret  */
  esp += 4; SPILL(); return;
}

void f_53006c(void) {
  LOAD_REGS();
L_53006c: /* 53006c: call 0x4e161d */
  esp -= 4; W32(esp, 0x530071u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530071: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530075: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53007a: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53007f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530080: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530085u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530085: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530088: ret  */
  esp += 4; SPILL(); return;
}

void f_530074(void) {
  LOAD_REGS();
L_530074: /* 530074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530075: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53007a: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53007f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530080: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530085u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530085: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530088: ret  */
  esp += 4; SPILL(); return;
}

void f_5300a0(void) {
  LOAD_REGS();
L_5300a0: /* 5300a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5300a1: mov ebp, esp */
  ebp = esp;
/* 5300a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5300a5: push 0x558520 */
  { uint32_t v = 0x558520u; esp -= 4; W32(esp, v); }
/* 5300aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5300b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5300b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5300b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5300b9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 5300be: call 0x554f80 */
  esp -= 4; W32(esp, 0x5300c3u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5300c3: mov ax, word ptr [0x5f7cec] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x5f7cecu))) & 0xffffu);
/* 5300c9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5300cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5300cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5300ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5300cf: mov word ptr [ebp - 0x2018], ax */
  W16((uint32_t)(ebp + 0xffffdfe8u), (eax & 0xffffu));
/* 5300d6: xor eax, eax */
  eax = 0;
/* 5300d8: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* 5300dd: lea edi, [ebp - 0x2016] */
  edi = (uint32_t)(ebp + 0xffffdfeau);
/* 5300e3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5300e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5300e8: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 5300ed: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 5300f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5300f4: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 5300f6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5300f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5300fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5300fb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 530102: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x530107u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 530107: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53010a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53010c: je 0x530133 */
  if (zf) goto L_530133;
L_53010e: /* 53010e: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 530114: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530115: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 530118: call 0x4e3e5e */
  esp -= 4; W32(esp, 0x53011du); SPILL(); f_4e3e5e(); if (g_unwind) return; RELOAD();
/* 53011d: mov eax, 1 */
  eax = 0x1u;
/* 530122: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530125: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53012c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53012d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53012e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53012f: mov esp, ebp */
  esp = ebp;
/* 530131: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530132: ret  */
  esp += 4; SPILL(); return;
L_530133: /* 530133: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530136: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530137: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530138: xor eax, eax */
  eax = 0;
/* 53013a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530141: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530142: mov esp, ebp */
  esp = ebp;
/* 530144: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530145: ret  */
  esp += 4; SPILL(); return;
}

void f_530146(void) {
  LOAD_REGS();
L_530146: /* 530146: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 530149: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53014e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 530151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530152: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 530155: call 0x554df6 */
  esp -= 4; W32(esp, 0x53015au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53015a(); return;
}

void f_53015a(void) {
  LOAD_REGS();
L_53015a: /* 53015a: push 0x56d374 */
  { uint32_t v = 0x56d374u; esp -= 4; W32(esp, v); }
/* 53015f: push 0x5a7898 */
  { uint32_t v = 0x5a7898u; esp -= 4; W32(esp, v); }
/* 530164: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x530169u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 530169: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53016c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53016e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530170: call 0x554df6 */
  esp -= 4; W32(esp, 0x530175u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_530175: guest_badaddr(0x530175); return;
}

void f_5301c0(void) {
  LOAD_REGS();
L_5301c0: /* 5301c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5301c1: mov ebp, esp */
  ebp = esp;
/* 5301c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5301c5: push 0x558530 */
  { uint32_t v = 0x558530u; esp -= 4; W32(esp, v); }
/* 5301ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5301d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5301d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5301d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5301db: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5301de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5301e1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5301e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5301e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5301e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5301e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5301ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5301eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5301ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5301ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5301f4: call 0x4e3c60 */
  esp -= 4; W32(esp, 0x5301f9u); SPILL(); f_4e3c60(); if (g_unwind) return; RELOAD();
/* 5301f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5301fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5301ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530200: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530201: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530208: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530209: mov esp, ebp */
  esp = ebp;
/* 53020b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53020c: ret  */
  esp += 4; SPILL(); return;
}

void f_53020d(void) {
  LOAD_REGS();
L_53020d: /* 53020d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 530210: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 530215: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 530218: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530219: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53021c: call 0x554df6 */
  esp -= 4; W32(esp, 0x530221u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_530221(); return;
}

void f_530221(void) {
  LOAD_REGS();
L_530221: /* 530221: push 0x56d398 */
  { uint32_t v = 0x56d398u; esp -= 4; W32(esp, v); }
/* 530226: push 0x5a78a0 */
  { uint32_t v = 0x5a78a0u; esp -= 4; W32(esp, v); }
/* 53022b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x530230u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 530230: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530233: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530235: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530237: call 0x554df6 */
  esp -= 4; W32(esp, 0x53023cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53023c: guest_badaddr(0x53023c); return;
}

void f_530260(void) {
  LOAD_REGS();
L_530260: /* 530260: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 530264: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 530268: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 53026c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53026d: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 530271: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530272: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530273: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530276: call 0x4e161d */
  esp -= 4; W32(esp, 0x53027bu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53027b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 53027f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530282: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530283: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530286: call 0x4e161d */
  esp -= 4; W32(esp, 0x53028bu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53028b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53028e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53028f: call 0x4e43db */
  esp -= 4; W32(esp, 0x530294u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 530294: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530297: ret  */
  esp += 4; SPILL(); return;
}

void f_5302b0(void) {
  LOAD_REGS();
L_5302b0: /* 5302b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5302b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5302b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5302b7: call 0x4e161d */
  esp -= 4; W32(esp, 0x5302bcu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 5302bc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5302c0: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 5302c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5302c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5302c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5302c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5302c9: push 0x5a79f0 */
  { uint32_t v = 0x5a79f0u; esp -= 4; W32(esp, v); }
/* 5302ce: call 0x4e43db */
  esp -= 4; W32(esp, 0x5302d3u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 5302d3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5302d6: ret  */
  esp += 4; SPILL(); return;
}

void f_5302f0(void) {
  LOAD_REGS();
L_5302f0: /* 5302f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5302f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5302f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5302f7: call 0x4e161d */
  esp -= 4; W32(esp, 0x5302fcu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 5302fc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 530300: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 530304: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530306: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530307: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530308: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530309: push 0x5a7a00 */
  { uint32_t v = 0x5a7a00u; esp -= 4; W32(esp, v); }
/* 53030e: call 0x4e43db */
  esp -= 4; W32(esp, 0x530313u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 530313: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530316: ret  */
  esp += 4; SPILL(); return;
}

void f_530330(void) {
  LOAD_REGS();
L_530330: /* 530330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 530334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530337: call 0x4e161d */
  esp -= 4; W32(esp, 0x53033cu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53033c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 530340: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 530344: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530347: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530349: push 0x5a7a14 */
  { uint32_t v = 0x5a7a14u; esp -= 4; W32(esp, v); }
/* 53034e: call 0x4e43db */
  esp -= 4; W32(esp, 0x530353u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 530353: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530356: ret  */
  esp += 4; SPILL(); return;
}

void f_530370(void) {
  LOAD_REGS();
L_530370: /* 530370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 530374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530377: call 0x4e161d */
  esp -= 4; W32(esp, 0x53037cu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53037c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 530380: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 530384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530387: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530388: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530389: push 0x5a7a20 */
  { uint32_t v = 0x5a7a20u; esp -= 4; W32(esp, v); }
/* 53038e: call 0x4e43db */
  esp -= 4; W32(esp, 0x530393u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 530393: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530396: ret  */
  esp += 4; SPILL(); return;
}

void f_5303b0(void) {
  LOAD_REGS();
L_5303b0: /* 5303b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5303b1: mov ebp, esp */
  ebp = esp;
/* 5303b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5303b5: push 0x558540 */
  { uint32_t v = 0x558540u; esp -= 4; W32(esp, v); }
/* 5303ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5303c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5303c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5303c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5303cb: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 5303d1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5303d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5303d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5303d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5303d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5303d9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5303dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5303dd: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5303e0: xor ebx, ebx */
  ebx = 0;
/* 5303e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5303e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5303e4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 5303e7: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x5303eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5303ea: mov edi, eax */
  edi = eax;
/* 5303ec: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5303ee: jne 0x530403 */
  if (!zf) goto L_530403;
L_5303f0: /* 5303f0: xor eax, eax */
  eax = 0;
/* 5303f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5303f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5303fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5303fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5303fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5303ff: mov esp, ebp */
  esp = ebp;
/* 530401: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530402: ret  */
  esp += 4; SPILL(); return;
L_530403: /* 530403: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 530406: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530408: mov ecx, esi */
  ecx = esi;
/* 53040a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 53040d: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 530410: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530415u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530415: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 530417: mov ecx, edi */
  ecx = edi;
/* 530419: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x53041cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53041c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 53041f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 530421: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530424: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 530427: jle 0x530445 */
  if ((zf || sf != of)) goto L_530445;
L_530429: /* 530429: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53042c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53042d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 530430: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 530432: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 530435: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 530439: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 53043c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53043e: mov ecx, esi */
  ecx = esi;
/* 530440: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530445u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_530445: /* 530445: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 530448: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53044a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53044b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53044d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53044e: mov ecx, edi */
  ecx = edi;
/* 530450: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530453: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 530455: mov ecx, edi */
  ecx = edi;
/* 530457: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x53045au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53045a: mov esi, eax */
  esi = eax;
/* 53045c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 53045e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530460: mov ecx, edi */
  ecx = edi;
/* 530462: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x530464u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530464: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530467: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530468: mov eax, esi */
  eax = esi;
/* 53046a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53046b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530473: mov esp, ebp */
  esp = ebp;
/* 530475: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530476: ret  */
  esp += 4; SPILL(); return;
}

void f_530477(void) {
  LOAD_REGS();
L_530477: /* 530477: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53047a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53047f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 530482: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530483: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 530486: call 0x554df6 */
  esp -= 4; W32(esp, 0x53048bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53048b(); return;
}

void f_53048b(void) {
  LOAD_REGS();
L_53048b: /* 53048b: push 0x56d3b4 */
  { uint32_t v = 0x56d3b4u; esp -= 4; W32(esp, v); }
/* 530490: push 0x5a7a38 */
  { uint32_t v = 0x5a7a38u; esp -= 4; W32(esp, v); }
/* 530495: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53049au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53049a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53049d: xor ebx, ebx */
  ebx = 0;
/* 53049f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5304a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5304a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5304a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5304a6: guest_badaddr(0x5304a6); return;
}

void f_5304f0(void) {
  LOAD_REGS();
L_5304f0: /* 5304f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5304f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5304f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5304f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5304f7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5304f9: mov esi, ecx */
  esi = ecx;
/* 5304fb: jge 0x530535 */
  if ((sf == of)) goto L_530535;
L_5304fd: /* 5304fd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 530502: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530504: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 530509: call 0x4e161d */
  esp -= 4; W32(esp, 0x53050eu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53050e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530512: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530514: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 530519: call 0x4e161d */
  esp -= 4; W32(esp, 0x53051eu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53051e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530522: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 530527: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53052c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53052d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530532u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530532: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_530535: /* 530535: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530538: jle 0x530573 */
  if ((zf || sf != of)) goto L_530573;
L_53053a: /* 53053a: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53053f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530541: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 530546: call 0x4e161d */
  esp -= 4; W32(esp, 0x53054bu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53054b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53054e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53054f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530551: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 530556: call 0x4e161d */
  esp -= 4; W32(esp, 0x53055bu); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53055b: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 530561: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530565: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 53056a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53056b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530570u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530570: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_530573: /* 530573: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 530577: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53057a: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 53057d: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53057f: jle 0x5305b9 */
  if ((zf || sf != of)) goto L_5305b9;
L_530581: /* 530581: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 530586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530588: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53058d: call 0x4e161d */
  esp -= 4; W32(esp, 0x530592u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530592: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530596: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 530598: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53059d: call 0x4e161d */
  esp -= 4; W32(esp, 0x5305a2u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 5305a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5305a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5305a6: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 5305ab: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 5305b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5305b1: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5305b6u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5305b6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5305b9: /* 5305b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5305bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5305bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5305bd: mov ecx, esi */
  ecx = esi;
/* 5305bf: call 0x4e438b */
  esp -= 4; W32(esp, 0x5305c4u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5305c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5305c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5305c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5305c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_530610(void) {
  LOAD_REGS();
L_530610: /* 530610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 530611: mov ebp, esp */
  ebp = esp;
/* 530613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 530615: push 0x558550 */
  { uint32_t v = 0x558550u; esp -= 4; W32(esp, v); }
/* 53061a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 530620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 530628: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53062b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53062c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53062f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 530631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530632: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 530635: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 530638: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 53063b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53063c: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 53063e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 530641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530642: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 530644: xor edi, edi */
  edi = 0;
/* 530646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530647: mov ecx, ebx */
  ecx = ebx;
/* 530649: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53064c: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x53064fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53064f: cmp dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530652: je 0x530658 */
  if (zf) goto L_530658;
L_530654: /* 530654: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530656: jmp 0x530660 */
  goto L_530660;
L_530658: /* 530658: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
/* 53065d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_530660: /* 530660: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 530663: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 530666: je 0x530673 */
  if (zf) goto L_530673;
L_530668: /* 530668: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 53066c: ja 0x530678 */
  if ((!cf && !zf)) goto L_530678;
L_53066e: /* 53066e: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 530671: jmp 0x530660 */
  goto L_530660;
L_530673: /* 530673: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 530676: jmp 0x53067d */
  goto L_53067d;
L_530678: /* 530678: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53067b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_53067d: /* 53067d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 530680: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 530683: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530684: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530685: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x53068au); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 53068a: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 53068d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530690: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530692: je 0x530756 */
  if (zf) goto L_530756;
L_530698: /* 530698: mov edx, dword ptr [ebx + 0x38] */
  edx = R32((uint32_t)(ebx + 0x38u));
/* 53069b: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53069d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5306a0: je 0x5306cc */
  if (zf) goto L_5306cc;
L_5306a2: /* 5306a2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306a4: mov ecx, eax */
  ecx = eax;
/* 5306a6: jge 0x5306aa */
  if ((sf == of)) goto L_5306aa;
L_5306a8: /* 5306a8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_5306aa: /* 5306aa: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306ac: jle 0x5306cc */
  if ((zf || sf != of)) goto L_5306cc;
L_5306ae: /* 5306ae: mov eax, 1 */
  eax = 0x1u;
/* 5306b3: mov dword ptr [ebx + 0x2c], eax */
  W32((uint32_t)(ebx + 0x2cu), eax);
/* 5306b6: mov dword ptr [ebx + 0x30], eax */
  W32((uint32_t)(ebx + 0x30u), eax);
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_5306cc: /* 5306cc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306ce: jge 0x5306d2 */
  if ((sf == of)) goto L_5306d2;
L_5306d0: /* 5306d0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_5306d2: /* 5306d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5306d4: mov ecx, esi */
  ecx = esi;
/* 5306d6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5306d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5306dc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5306e1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5306e1: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306e4: jl 0x530706 */
  if ((sf != of)) goto L_530706;
L_5306e6: /* 5306e6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306e9: jge 0x530725 */
  if ((sf == of)) goto L_530725;
L_5306eb: /* 5306eb: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 5306ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5306ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5306f0: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x5306f5u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 5306f5: movzx dx, byte ptr [ebp + 0xb] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xbu)))) & 0xffffu);
/* 5306fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5306fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5306ff: mov word ptr [eax + edi*2], dx */
  W16((uint32_t)(eax + edi*2), (edx & 0xffffu));
/* 530703: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530704: jmp 0x5306e6 */
  goto L_5306e6;
L_530706: /* 530706: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530709: jge 0x530725 */
  if ((sf == of)) goto L_530725;
L_53070b: /* 53070b: lea ecx, [ebp + 0xa] */
  ecx = (uint32_t)(ebp + 0xau);
/* 53070e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53070f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530710: call 0x4e4147 */
  esp -= 4; W32(esp, 0x530715u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 530715: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530717: mov ax, word ptr [ebp + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 53071b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53071e: mov word ptr [edx + edi*2], ax */
  W16((uint32_t)(edx + edi*2), (eax & 0xffffu));
/* 530722: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530723: jmp 0x530706 */
  goto L_530706;
L_530725: /* 530725: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 530728: xor eax, eax */
  eax = 0;
/* 53072a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53072c: je 0x5306b9 */
  if (zf) goto L_5306b9;
L_53072e: /* 53072e: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530732: jne 0x5306b9 */
  if (!zf) goto L_5306b9;
L_530734: /* 530734: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530736: mov ecx, esi */
  ecx = esi;
/* 530738: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 53073b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53073e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530743u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530743: mov eax, ebx */
  eax = ebx;
/* 530745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53074f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530752: mov esp, ebp */
  esp = ebp;
/* 530754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530755: ret  */
  esp += 4; SPILL(); return;
L_530756: /* 530756: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530759: jl 0x530790 */
  if ((sf != of)) goto L_530790;
L_53075b: /* 53075b: mov bl, 0x7f */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* 53075d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_530760: /* 530760: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530763: jge 0x5307b4 */
  if ((sf == of)) goto L_5307b4;
L_530765: /* 530765: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530767: mov ax, word ptr [ecx + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edi*2))) & 0xffffu);
/* 53076b: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 53076f: mov byte ptr [ebp + 0xf], al */
  W8((uint32_t)(ebp + 0xfu), (eax & 0xffu));
/* 530772: jb 0x530777 */
  if (cf) goto L_530777;
L_530774: /* 530774: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
L_530777: /* 530777: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53077a: lea edx, [ebp + 0xf] */
  edx = (uint32_t)(ebp + 0xfu);
/* 53077d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53077e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53077f: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x530784u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 530784: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530787: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530788: jmp 0x530760 */
  goto L_530760;
L_530790: /* 530790: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530793: jge 0x5306b9 */
  if ((sf == of)) goto L_5306b9;
L_530799: /* 530799: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 53079b: xor edx, edx */
  edx = 0;
/* 53079d: mov dx, word ptr [ecx + edi*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edi*2))) & 0xffffu);
/* 5307a1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 5307a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5307a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5307a6: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 5307a9: call 0x4e4147 */
  esp -= 4; W32(esp, 0x5307aeu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 5307ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5307b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5307b2: jmp 0x530790 */
  goto L_530790;
L_5307b4: /* 5307b4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5307b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5307ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5307bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5307bc: mov eax, ebx */
  eax = ebx;
/* 5307be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5307c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5307c6: mov esp, ebp */
  esp = ebp;
/* 5307c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5307c9: ret  */
  esp += 4; SPILL(); return;
}

void f_5306cc(void) {
  LOAD_REGS();
  goto L_5306cc;
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_5306cc: /* 5306cc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306ce: jge 0x5306d2 */
  if ((sf == of)) goto L_5306d2;
L_5306d0: /* 5306d0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_5306d2: /* 5306d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5306d4: mov ecx, esi */
  ecx = esi;
/* 5306d6: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 5306d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5306dc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5306e1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5306e1: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306e4: jl 0x530706 */
  if ((sf != of)) goto L_530706;
L_5306e6: /* 5306e6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5306e9: jge 0x530725 */
  if ((sf == of)) goto L_530725;
L_5306eb: /* 5306eb: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 5306ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5306ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5306f0: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x5306f5u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 5306f5: movzx dx, byte ptr [ebp + 0xb] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xbu)))) & 0xffffu);
/* 5306fa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5306fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5306ff: mov word ptr [eax + edi*2], dx */
  W16((uint32_t)(eax + edi*2), (edx & 0xffffu));
/* 530703: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530704: jmp 0x5306e6 */
  goto L_5306e6;
L_530706: /* 530706: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530709: jge 0x530725 */
  if ((sf == of)) goto L_530725;
L_53070b: /* 53070b: lea ecx, [ebp + 0xa] */
  ecx = (uint32_t)(ebp + 0xau);
/* 53070e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53070f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530710: call 0x4e4147 */
  esp -= 4; W32(esp, 0x530715u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 530715: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530717: mov ax, word ptr [ebp + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 53071b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53071e: mov word ptr [edx + edi*2], ax */
  W16((uint32_t)(edx + edi*2), (eax & 0xffffu));
/* 530722: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530723: jmp 0x530706 */
  goto L_530706;
L_530725: /* 530725: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 530728: xor eax, eax */
  eax = 0;
/* 53072a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53072c: je 0x5306b9 */
  if (zf) goto L_5306b9;
L_53072e: /* 53072e: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530732: jne 0x5306b9 */
  if (!zf) goto L_5306b9;
L_530734: /* 530734: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530736: mov ecx, esi */
  ecx = esi;
/* 530738: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 53073b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53073e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530743u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530743: mov eax, ebx */
  eax = ebx;
/* 530745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53074f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530752: mov esp, ebp */
  esp = ebp;
/* 530754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530755: ret  */
  esp += 4; SPILL(); return;
}

void f_530706(void) {
  LOAD_REGS();
  goto L_530706;
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_530706: /* 530706: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530709: jge 0x530725 */
  if ((sf == of)) goto L_530725;
L_53070b: /* 53070b: lea ecx, [ebp + 0xa] */
  ecx = (uint32_t)(ebp + 0xau);
/* 53070e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53070f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530710: call 0x4e4147 */
  esp -= 4; W32(esp, 0x530715u); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 530715: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530717: mov ax, word ptr [ebp + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xau))) & 0xffffu);
/* 53071b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53071e: mov word ptr [edx + edi*2], ax */
  W16((uint32_t)(edx + edi*2), (eax & 0xffffu));
/* 530722: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530723: jmp 0x530706 */
  goto L_530706;
L_530725: /* 530725: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 530728: xor eax, eax */
  eax = 0;
/* 53072a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53072c: je 0x5306b9 */
  if (zf) goto L_5306b9;
L_53072e: /* 53072e: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530732: jne 0x5306b9 */
  if (!zf) goto L_5306b9;
L_530734: /* 530734: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530736: mov ecx, esi */
  ecx = esi;
/* 530738: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 53073b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53073e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530743u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530743: mov eax, ebx */
  eax = ebx;
/* 530745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53074f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530752: mov esp, ebp */
  esp = ebp;
/* 530754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530755: ret  */
  esp += 4; SPILL(); return;
}

void f_530725(void) {
  LOAD_REGS();
  goto L_530725;
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_530725: /* 530725: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 530728: xor eax, eax */
  eax = 0;
/* 53072a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53072c: je 0x5306b9 */
  if (zf) goto L_5306b9;
L_53072e: /* 53072e: cmp dword ptr [esi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530732: jne 0x5306b9 */
  if (!zf) goto L_5306b9;
L_530734: /* 530734: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530736: mov ecx, esi */
  ecx = esi;
/* 530738: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 53073b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53073e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530743u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530743: mov eax, ebx */
  eax = ebx;
/* 530745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53074f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530752: mov esp, ebp */
  esp = ebp;
/* 530754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530755: ret  */
  esp += 4; SPILL(); return;
}

void f_530756(void) {
  LOAD_REGS();
  goto L_530756;
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_530756: /* 530756: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530759: jl 0x530790 */
  if ((sf != of)) goto L_530790;
L_53075b: /* 53075b: mov bl, 0x7f */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* 53075d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_530760: /* 530760: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530763: jge 0x5307b4 */
  if ((sf == of)) goto L_5307b4;
L_530765: /* 530765: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530767: mov ax, word ptr [ecx + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edi*2))) & 0xffffu);
/* 53076b: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 53076f: mov byte ptr [ebp + 0xf], al */
  W8((uint32_t)(ebp + 0xfu), (eax & 0xffu));
/* 530772: jb 0x530777 */
  if (cf) goto L_530777;
L_530774: /* 530774: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
L_530777: /* 530777: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53077a: lea edx, [ebp + 0xf] */
  edx = (uint32_t)(ebp + 0xfu);
/* 53077d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53077e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53077f: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x530784u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 530784: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530787: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530788: jmp 0x530760 */
  goto L_530760;
L_530790: /* 530790: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530793: jge 0x5306b9 */
  if ((sf == of)) goto L_5306b9;
L_530799: /* 530799: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 53079b: xor edx, edx */
  edx = 0;
/* 53079d: mov dx, word ptr [ecx + edi*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edi*2))) & 0xffffu);
/* 5307a1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 5307a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5307a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5307a6: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 5307a9: call 0x4e4147 */
  esp -= 4; W32(esp, 0x5307aeu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 5307ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5307b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5307b2: jmp 0x530790 */
  goto L_530790;
L_5307b4: /* 5307b4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5307b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5307ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5307bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5307bc: mov eax, ebx */
  eax = ebx;
/* 5307be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5307c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5307c6: mov esp, ebp */
  esp = ebp;
/* 5307c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5307c9: ret  */
  esp += 4; SPILL(); return;
}

void f_53078a(void) {
  LOAD_REGS();
  goto L_53078a;
L_5306b9: /* 5306b9: mov eax, ebx */
  eax = ebx;
/* 5306bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5306be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5306c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5306c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5306c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5306c8: mov esp, ebp */
  esp = ebp;
/* 5306ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5306cb: ret  */
  esp += 4; SPILL(); return;
L_53078a: /* 53078a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_530790: /* 530790: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530793: jge 0x5306b9 */
  if ((sf == of)) goto L_5306b9;
L_530799: /* 530799: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 53079b: xor edx, edx */
  edx = 0;
/* 53079d: mov dx, word ptr [ecx + edi*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edi*2))) & 0xffffu);
/* 5307a1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 5307a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5307a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5307a6: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 5307a9: call 0x4e4147 */
  esp -= 4; W32(esp, 0x5307aeu); SPILL(); f_4e4147(); if (g_unwind) return; RELOAD();
/* 5307ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5307b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5307b2: jmp 0x530790 */
  goto L_530790;
}

void f_5307ca(void) {
  LOAD_REGS();
L_5307ca: /* 5307ca: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5307cd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5307d2: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5307d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5307d6: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5307d9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5307deu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5307de(); return;
}

void f_5307de(void) {
  LOAD_REGS();
L_5307de: /* 5307de: push 0x56d3e4 */
  { uint32_t v = 0x56d3e4u; esp -= 4; W32(esp, v); }
/* 5307e3: push 0x5a778c */
  { uint32_t v = 0x5a778cu; esp -= 4; W32(esp, v); }
/* 5307e8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5307edu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5307ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5307f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5307f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5307f4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5307f9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5307f9: guest_badaddr(0x5307f9); return;
}

void f_530880(void) {
  LOAD_REGS();
L_530880: /* 530880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 530882: push 0x558568 */
  { uint32_t v = 0x558568u; esp -= 4; W32(esp, v); }
/* 530887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53088d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53088e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 530895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530897: mov esi, ecx */
  esi = ecx;
/* 530899: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 53089d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5308a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5308a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5308a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 5308ab: call 0x4e3922 */
  esp -= 4; W32(esp, 0x5308b0u); SPILL(); f_4e3922(); if (g_unwind) return; RELOAD();
/* 5308b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5308b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5308b4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5308bc: je 0x5308ca */
  if (zf) goto L_5308ca;
L_5308be: /* 5308be: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5308c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5308c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5308c7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5308cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5308ca: /* 5308ca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5308ce: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5308d4: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 5308db: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5308e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5308e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5308ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5308ed: ret  */
  esp += 4; SPILL(); return;
}

void f_530910(void) {
  LOAD_REGS();
L_530910: /* 530910: mov eax, ecx */
  eax = ecx;
/* 530912: xor ecx, ecx */
  ecx = 0;
/* 530914: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 530916: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 530919: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53091c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_530930(void) {
  LOAD_REGS();
L_530930: /* 530930: mov eax, ecx */
  eax = ecx;
/* 530932: xor ecx, ecx */
  ecx = 0;
/* 530934: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 530936: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 530939: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53093c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_530950(void) {
  LOAD_REGS();
L_530950: /* 530950: mov eax, ecx */
  eax = ecx;
/* 530952: xor ecx, ecx */
  ecx = 0;
/* 530954: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 530956: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 530959: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53095c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_530970(void) {
  LOAD_REGS();
L_530970: /* 530970: mov eax, ecx */
  eax = ecx;
/* 530972: xor ecx, ecx */
  ecx = 0;
/* 530974: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 530976: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 530979: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53097c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_530990(void) {
  LOAD_REGS();
L_530990: /* 530990: mov eax, ecx */
  eax = ecx;
/* 530992: xor ecx, ecx */
  ecx = 0;
/* 530994: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 530996: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 530999: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53099c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5309b0(void) {
  LOAD_REGS();
L_5309b0: /* 5309b0: mov eax, ecx */
  eax = ecx;
/* 5309b2: xor ecx, ecx */
  ecx = 0;
/* 5309b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5309b6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5309b9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5309bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5309d0(void) {
  LOAD_REGS();
L_5309d0: /* 5309d0: mov eax, ecx */
  eax = ecx;
/* 5309d2: xor ecx, ecx */
  ecx = 0;
/* 5309d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5309d6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5309d9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5309dc: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_5309f0(void) {
  LOAD_REGS();
L_5309f0: /* 5309f0: mov eax, ecx */
  eax = ecx;
/* 5309f2: xor ecx, ecx */
  ecx = 0;
/* 5309f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5309f6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5309f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5309fc: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_530a10(void) {
  LOAD_REGS();
L_530a10: /* 530a10: sub esp, 0x804 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x804u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 530a16: mov eax, dword ptr [esp + 0x810] */
  eax = R32((uint32_t)(esp + 0x810u));
/* 530a1d: mov edx, dword ptr [esp + 0x80c] */
  edx = R32((uint32_t)(esp + 0x80cu));
/* 530a24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530a25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530a26: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 530a2b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 530a2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530a30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530a31: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 530a39: call 0x4e3256 */
  esp -= 4; W32(esp, 0x530a3eu); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 530a3e: mov esi, dword ptr [esp + 0x81c] */
  esi = R32((uint32_t)(esp + 0x81cu));
/* 530a45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530a48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 530a4a: mov ecx, esi */
  ecx = esi;
/* 530a4c: je 0x530a62 */
  if (zf) goto L_530a62;
L_530a4e: /* 530a4e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 530a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530a53: call 0x4e13de */
  esp -= 4; W32(esp, 0x530a58u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 530a58: mov eax, esi */
  eax = esi;
/* 530a5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530a5b: add esp, 0x804 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x804u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530a61: ret  */
  esp += 4; SPILL(); return;
L_530a62: /* 530a62: push 0x5f7cf4 */
  { uint32_t v = 0x5f7cf4u; esp -= 4; W32(esp, v); }
/* 530a67: call 0x4e13de */
  esp -= 4; W32(esp, 0x530a6cu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 530a6c: mov eax, esi */
  eax = esi;
/* 530a6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530a6f: add esp, 0x804 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x804u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530a75: ret  */
  esp += 4; SPILL(); return;
}

void f_530aa0(void) {
  LOAD_REGS();
L_530aa0: /* 530aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 530aa1: mov ebp, esp */
  ebp = esp;
/* 530aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 530aa5: push 0x558588 */
  { uint32_t v = 0x558588u; esp -= 4; W32(esp, v); }
/* 530aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 530ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 530ab8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 530abb: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 530ac1: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 530ac4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 530ac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530ac7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530ac8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530ac9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 530acc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530acd: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 530ad0: xor ebx, ebx */
  ebx = 0;
/* 530ad2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530ad3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530ad4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 530ad7: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x530adau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530ada: mov esi, eax */
  esi = eax;
/* 530adc: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530ade: jne 0x530af3 */
  if (!zf) goto L_530af3;
L_530ae0: /* 530ae0: xor eax, eax */
  eax = 0;
/* 530ae2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530ae5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530aec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530aed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530aee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530aef: mov esp, ebp */
  esp = ebp;
/* 530af1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530af2: ret  */
  esp += 4; SPILL(); return;
L_530af3: /* 530af3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 530af5: mov ecx, esi */
  ecx = esi;
/* 530af7: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x530afau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530afa: mov edi, eax */
  edi = eax;
/* 530afc: lea eax, [edi + 2] */
  eax = (uint32_t)(edi + 0x2u);
/* 530aff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530b01: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 530b04: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 530b07: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 530b0a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 530b0d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530b12u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530b12: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530b15: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530b17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530b19: mov ecx, esi */
  ecx = esi;
/* 530b1b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 530b1f: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530b22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530b22: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530b24: mov ecx, esi */
  ecx = esi;
/* 530b26: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x530b29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530b29: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 530b2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 530b2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530b30: mov ecx, esi */
  ecx = esi;
/* 530b32: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x530b34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530b34: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530b37: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 530b3a: mov byte ptr [ecx + edi], bl */
  W8((uint32_t)(ecx + edi), (ebx & 0xffu));
/* 530b3d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530b40: mov byte ptr [edx + edi + 1], bl */
  W8((uint32_t)(edx + edi + 0x1u), (ebx & 0xffu));
/* 530b44: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530b46: mov ecx, esi */
  ecx = esi;
/* 530b48: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 530b4b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 530b4e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530b53u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530b53: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530b56: jl 0x530bec */
  if ((sf != of)) goto L_530bec;
L_530b5c: /* 530b5c: mov eax, edi */
  eax = edi;
/* 530b5e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 530b61: jne 0x530ba9 */
  if (!zf) goto L_530ba9;
L_530b63: /* 530b63: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530b66: cmp byte ptr [ecx], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 530b69: jne 0x530ba9 */
  if (!zf) goto L_530ba9;
L_530b6b: /* 530b6b: cmp byte ptr [ecx + 1], 0xfe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 530b6f: jne 0x530ba9 */
  if (!zf) goto L_530ba9;
L_530b71: /* 530b71: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 530b73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530b74: mov ecx, esi */
  ecx = esi;
/* 530b76: call 0x4e437c */
  esp -= 4; W32(esp, 0x530b7bu); SPILL(); f_4e437c(); if (g_unwind) return; RELOAD();
/* 530b7b: xor eax, eax */
  eax = 0;
/* 530b7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_530b80: /* 530b80: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 530b83: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 530b84: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530b86: jge 0x530c39 */
  if ((sf == of)) goto L_530c39;
L_530b8c: /* 530b8c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530b8f: movzx dx, byte ptr [ecx + eax*2 + 3] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x3u)))) & 0xffffu);
/* 530b95: movzx cx, byte ptr [ecx + eax*2 + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x2u)))) & 0xffffu);
/* 530b9b: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 530b9e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 530ba0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530ba2: mov word ptr [ecx + eax*2], dx */
  W16((uint32_t)(ecx + eax*2), (edx & 0xffffu));
/* 530ba6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 530ba7: jmp 0x530b80 */
  goto L_530b80;
L_530ba9: /* 530ba9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530bab: jne 0x530bec */
  if (!zf) goto L_530bec;
L_530bad: /* 530bad: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530bb0: cmp byte ptr [eax], 0xfe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xfeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 530bb3: jne 0x530bec */
  if (!zf) goto L_530bec;
L_530bb5: /* 530bb5: cmp byte ptr [eax + 1], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 530bb9: jne 0x530bec */
  if (!zf) goto L_530bec;
L_530bbb: /* 530bbb: shr edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 530bbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530bbe: mov ecx, esi */
  ecx = esi;
/* 530bc0: call 0x4e437c */
  esp -= 4; W32(esp, 0x530bc5u); SPILL(); f_4e437c(); if (g_unwind) return; RELOAD();
/* 530bc5: xor eax, eax */
  eax = 0;
L_530bc7: /* 530bc7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 530bca: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 530bcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530bcd: jge 0x530c39 */
  if ((sf == of)) goto L_530c39;
L_530bcf: /* 530bcf: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530bd2: movzx dx, byte ptr [ecx + eax*2 + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x2u)))) & 0xffffu);
/* 530bd8: movzx cx, byte ptr [ecx + eax*2 + 3] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax*2 + 0x3u)))) & 0xffffu);
/* 530bde: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 530be1: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 530be3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530be5: mov word ptr [ecx + eax*2], dx */
  W16((uint32_t)(ecx + eax*2), (edx & 0xffffu));
/* 530be9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 530bea: jmp 0x530bc7 */
  goto L_530bc7;
L_530bec: /* 530bec: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 530bef: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 530bf2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 530bf3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 530bf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530bf7: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 530bfa: jle 0x530c18 */
  if ((zf || sf != of)) goto L_530c18;
L_530bfc: /* 530bfc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 530bff: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 530c00: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 530c03: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 530c05: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 530c08: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 530c0c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530c0e: mov ecx, esi */
  ecx = esi;
/* 530c10: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 530c13: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530c18u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_530c18: /* 530c18: xor eax, eax */
  eax = 0;
/* 530c1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_530c20: /* 530c20: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 530c23: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 530c24: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530c26: jge 0x530c39 */
  if ((sf == of)) goto L_530c39;
L_530c28: /* 530c28: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 530c2b: movzx dx, byte ptr [eax + ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + ecx)))) & 0xffffu);
/* 530c30: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530c32: mov word ptr [ecx + eax*2], dx */
  W16((uint32_t)(ecx + eax*2), (edx & 0xffffu));
/* 530c36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 530c37: jmp 0x530c20 */
  goto L_530c20;
L_530c39: /* 530c39: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530c3c: jg 0x530c77 */
  if ((!zf && sf == of)) goto L_530c77;
L_530c3e: /* 530c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530c3f: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 530c44: call 0x4e161d */
  esp -= 4; W32(esp, 0x530c49u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530c49: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530c4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530c4d: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 530c52: mov edi, eax */
  edi = eax;
/* 530c54: call 0x4e161d */
  esp -= 4; W32(esp, 0x530c59u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 530c59: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 530c5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530c62: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 530c67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530c69: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 530c6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530c6f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x530c74u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 530c74: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_530c77: /* 530c77: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 530c79: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 530c7c: mov word ptr [ecx + eax*2 - 2], bx */
  W16((uint32_t)(ecx + eax*2 + 0xfffffffeu), (ebx & 0xffffu));
/* 530c81: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 530c84: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 530c87: call 0x4e430e */
  esp -= 4; W32(esp, 0x530c8cu); SPILL(); f_4e430e(); if (g_unwind) return; RELOAD();
/* 530c8c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530c8f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 530c92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530c93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530c94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530c9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530c9c: mov esp, ebp */
  esp = ebp;
/* 530c9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530c9f: ret  */
  esp += 4; SPILL(); return;
}

void f_530ca0(void) {
  LOAD_REGS();
L_530ca0: /* 530ca0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 530ca3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 530ca8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 530cab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530cac: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 530caf: call 0x554df6 */
  esp -= 4; W32(esp, 0x530cb4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_530cb4(); return;
}

void f_530cb4(void) {
  LOAD_REGS();
L_530cb4: /* 530cb4: push 0x56d3fc */
  { uint32_t v = 0x56d3fcu; esp -= 4; W32(esp, v); }
/* 530cb9: push 0x5a7a40 */
  { uint32_t v = 0x5a7a40u; esp -= 4; W32(esp, v); }
/* 530cbe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x530cc3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 530cc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530cc6: xor ebx, ebx */
  ebx = 0;
/* 530cc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530cc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530cca: call 0x554df6 */
  esp -= 4; W32(esp, 0x530ccfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_530ccf: guest_badaddr(0x530ccf); return;
}

void f_530d60(void) {
  LOAD_REGS();
L_530d60: /* 530d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 530d61: mov ebp, esp */
  ebp = esp;
/* 530d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 530d65: push 0x5585a8 */
  { uint32_t v = 0x5585a8u; esp -= 4; W32(esp, v); }
/* 530d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 530d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 530d78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 530d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530d7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 530d7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 530d7e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 530d81: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530d84: xor ebx, ebx */
  ebx = 0;
/* 530d86: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530d88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 530d8b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 530d8e: je 0x530d95 */
  if (zf) goto L_530d95;
L_530d90: /* 530d90: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 530d91: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530d93: jne 0x530da8 */
  if (!zf) goto L_530da8;
L_530d95: /* 530d95: xor eax, eax */
  eax = 0;
/* 530d97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530d9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530da1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530da2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530da3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530da4: mov esp, ebp */
  esp = ebp;
/* 530da6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530da7: ret  */
  esp += 4; SPILL(); return;
L_530da8: /* 530da8: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 530dae: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 530db1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 530db3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530db4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 530db7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530db9: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x530dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530dbc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530dbe: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 530dc1: je 0x530d95 */
  if (zf) goto L_530d95;
L_530dc3: /* 530dc3: xor esi, esi */
  esi = 0;
/* 530dc5: xor edx, edx */
  edx = 0;
L_530dc7: /* 530dc7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530dca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530dcc: je 0x530dd3 */
  if (zf) goto L_530dd3;
L_530dce: /* 530dce: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 530dd1: jmp 0x530dd5 */
  goto L_530dd5;
L_530dd3: /* 530dd3: xor ecx, ecx */
  ecx = 0;
L_530dd5: /* 530dd5: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530dd7: jge 0x530e2e */
  if ((sf == of)) goto L_530e2e;
L_530dd9: /* 530dd9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530ddb: je 0x530de1 */
  if (zf) goto L_530de1;
L_530ddd: /* 530ddd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 530ddf: jmp 0x530de6 */
  goto L_530de6;
L_530de1: /* 530de1: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_530de6: /* 530de6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530de8: je 0x530dee */
  if (zf) goto L_530dee;
L_530dea: /* 530dea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 530dec: jmp 0x530df3 */
  goto L_530df3;
L_530dee: /* 530dee: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_530df3: /* 530df3: mov ax, word ptr [eax + edx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*2))) & 0xffffu);
/* 530df7: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 530dfb: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 530dfe: jb 0x530e05 */
  if (cf) goto L_530e05;
L_530e00: /* 530e00: mov eax, 0x7f */
  eax = 0x7fu;
L_530e05: /* 530e05: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 530e09: cmp word ptr [ecx + edx*2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + edx*2))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 530e0d: je 0x530e2b */
  if (zf) goto L_530e2b;
L_530e0f: /* 530e0f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 530e12: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530e14: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 530e16: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 530e19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530e1a: mov ecx, esi */
  ecx = esi;
/* 530e1c: mov dword ptr [ebp - 0x14], 0xfeff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xfeffu);
/* 530e23: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530e26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530e26: jmp 0x530ec6 */
  goto L_530ec6;
L_530e2b: /* 530e2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 530e2c: jmp 0x530dc7 */
  goto L_530dc7;
L_530e2e: /* 530e2e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e30: jne 0x530ec3 */
  if (!zf) goto L_530ec3;
L_530e36: /* 530e36: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e3b: je 0x530e40 */
  if (zf) goto L_530e40;
L_530e3d: /* 530e3d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 530e3e: jmp 0x530e42 */
  goto L_530e42;
L_530e40: /* 530e40: xor eax, eax */
  eax = 0;
L_530e42: /* 530e42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530e44: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 530e47: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 530e4a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 530e4d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 530e50: call 0x4e4502 */
  esp -= 4; W32(esp, 0x530e55u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 530e55: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 530e59: xor edx, edx */
  edx = 0;
/* 530e5b: jmp 0x530e60 */
  goto L_530e60;
L_530e60: /* 530e60: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530e63: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e65: je 0x530e6c */
  if (zf) goto L_530e6c;
L_530e67: /* 530e67: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 530e6a: jmp 0x530e6e */
  goto L_530e6e;
L_530e6c: /* 530e6c: xor ecx, ecx */
  ecx = 0;
L_530e6e: /* 530e6e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530e70: jge 0x530e9a */
  if ((sf == of)) goto L_530e9a;
L_530e72: /* 530e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e74: je 0x530e7a */
  if (zf) goto L_530e7a;
L_530e76: /* 530e76: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 530e78: jmp 0x530e7f */
  goto L_530e7f;
L_530e7a: /* 530e7a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_530e7f: /* 530e7f: mov ax, word ptr [eax + edx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*2))) & 0xffffu);
/* 530e83: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 530e87: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 530e8a: jb 0x530e91 */
  if (cf) goto L_530e91;
L_530e8c: /* 530e8c: mov eax, 0x7f */
  eax = 0x7fu;
L_530e91: /* 530e91: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 530e94: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* 530e97: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 530e98: jmp 0x530e60 */
  goto L_530e60;
L_530e9a: /* 530e9a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530e9d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e9f: je 0x530ea4 */
  if (zf) goto L_530ea4;
L_530ea1: /* 530ea1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 530ea2: jmp 0x530ea6 */
  goto L_530ea6;
L_530ea4: /* 530ea4: xor eax, eax */
  eax = 0;
L_530ea6: /* 530ea6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 530ea9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 530eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530eac: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 530eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530eb0: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530eb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530eb3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 530eb6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 530eb9: call 0x4e430e */
  esp -= 4; W32(esp, 0x530ebeu); SPILL(); f_4e430e(); if (g_unwind) return; RELOAD();
/* 530ebe: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 530ec1: jmp 0x530eec */
  goto L_530eec;
L_530ec3: /* 530ec3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_530ec6: /* 530ec6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530ec9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530ecb: je 0x530ed2 */
  if (zf) goto L_530ed2;
L_530ecd: /* 530ecd: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 530ed0: jmp 0x530ed4 */
  goto L_530ed4;
L_530ed2: /* 530ed2: xor ecx, ecx */
  ecx = 0;
L_530ed4: /* 530ed4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530ed6: je 0x530edc */
  if (zf) goto L_530edc;
L_530ed8: /* 530ed8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 530eda: jmp 0x530ee1 */
  goto L_530ee1;
L_530edc: /* 530edc: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_530ee1: /* 530ee1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530ee3: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 530ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530ee6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530ee7: mov ecx, esi */
  ecx = esi;
/* 530ee9: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530eecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_530eec: /* 530eec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530eee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530ef0: mov ecx, esi */
  ecx = esi;
/* 530ef2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x530ef4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530ef4: mov esi, 1 */
  esi = 0x1u;
/* 530ef9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530efb: jne 0x530f0e */
  if (!zf) goto L_530f0e;
L_530efd: /* 530efd: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 530f03: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 530f06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 530f08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530f0b: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x530f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_530f0e: /* 530f0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530f11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530f12: mov eax, esi */
  eax = esi;
/* 530f14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530f15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530f1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530f1d: mov esp, ebp */
  esp = ebp;
/* 530f1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530f20: ret  */
  esp += 4; SPILL(); return;
}

void f_530e5d(void) {
  LOAD_REGS();
L_530e5d: /* 530e5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_530e60: /* 530e60: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530e63: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e65: je 0x530e6c */
  if (zf) goto L_530e6c;
L_530e67: /* 530e67: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 530e6a: jmp 0x530e6e */
  goto L_530e6e;
L_530e6c: /* 530e6c: xor ecx, ecx */
  ecx = 0;
L_530e6e: /* 530e6e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 530e70: jge 0x530e9a */
  if ((sf == of)) goto L_530e9a;
L_530e72: /* 530e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e74: je 0x530e7a */
  if (zf) goto L_530e7a;
L_530e76: /* 530e76: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 530e78: jmp 0x530e7f */
  goto L_530e7f;
L_530e7a: /* 530e7a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_530e7f: /* 530e7f: mov ax, word ptr [eax + edx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*2))) & 0xffffu);
/* 530e83: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 530e87: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 530e8a: jb 0x530e91 */
  if (cf) goto L_530e91;
L_530e8c: /* 530e8c: mov eax, 0x7f */
  eax = 0x7fu;
L_530e91: /* 530e91: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 530e94: mov byte ptr [edx + ecx], al */
  W8((uint32_t)(edx + ecx), (eax & 0xffu));
/* 530e97: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 530e98: jmp 0x530e60 */
  goto L_530e60;
L_530e9a: /* 530e9a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 530e9d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530e9f: je 0x530ea4 */
  if (zf) goto L_530ea4;
L_530ea1: /* 530ea1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 530ea2: jmp 0x530ea6 */
  goto L_530ea6;
L_530ea4: /* 530ea4: xor eax, eax */
  eax = 0;
L_530ea6: /* 530ea6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 530ea9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 530eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530eac: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 530eaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530eb0: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x530eb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530eb3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 530eb6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 530eb9: call 0x4e430e */
  esp -= 4; W32(esp, 0x530ebeu); SPILL(); f_4e430e(); if (g_unwind) return; RELOAD();
/* 530ebe: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 530ec1: jmp 0x530eec */
  goto L_530eec;
L_530eec: /* 530eec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 530eee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 530ef0: mov ecx, esi */
  ecx = esi;
/* 530ef2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x530ef4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 530ef4: mov esi, 1 */
  esi = 0x1u;
/* 530ef9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 530efb: jne 0x530f0e */
  if (!zf) goto L_530f0e;
L_530efd: /* 530efd: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 530f03: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 530f06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 530f08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 530f0b: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x530f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_530f0e: /* 530f0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 530f11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 530f12: mov eax, esi */
  eax = esi;
/* 530f14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 530f15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 530f1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 530f1d: mov esp, ebp */
  esp = ebp;
/* 530f1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 530f20: ret  */
  esp += 4; SPILL(); return;
}

void f_530f21(void) {
  LOAD_REGS();
L_530f21: /* 530f21: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 530f24: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 530f29: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 530f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 530f2d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 530f30: call 0x554df6 */
  esp -= 4; W32(esp, 0x530f35u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_530f35(); return;
}

void f_530f35(void) {
  LOAD_REGS();
L_530f35: /* 530f35: push 0x56d42c */
  { uint32_t v = 0x56d42cu; esp -= 4; W32(esp, v); }
/* 530f3a: push 0x5a7a50 */
  { uint32_t v = 0x5a7a50u; esp -= 4; W32(esp, v); }
/* 530f3f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x530f44u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 530f44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 530f47: xor ebx, ebx */
  ebx = 0;
/* 530f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 530f4b: call 0x554df6 */
  esp -= 4; W32(esp, 0x530f50u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_530f50: guest_badaddr(0x530f50); return;
}

void f_530fe0(void) {
  LOAD_REGS();
L_530fe0: /* 530fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 530fe1: mov ebp, esp */
  ebp = esp;
/* 530fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 530fe5: push 0x5585fb */
  { uint32_t v = 0x5585fbu; esp -= 4; W32(esp, v); }
/* 530fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 530ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 530ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 530ff8: sub esp, 0x218 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x218u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 530ffe: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 531001: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531003: xor ebx, ebx */
  ebx = 0;
/* 531005: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 531006: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 531009: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53100c: mov dword ptr [0x5a0ca4], eax */
  W32((uint32_t)(0x5a0ca4u), eax);
/* 531011: xor ecx, ecx */
  ecx = 0;
L_531013: /* 531013: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 531019: jae 0x53104d */
  if (!cf) goto L_53104d;
L_53101b: /* 53101b: mov eax, ecx */
  eax = ecx;
/* 53101d: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 531020: mov edx, 8 */
  edx = 0x8u;
L_531025: /* 531025: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531027: je 0x53104a */
  if (zf) goto L_53104a;
L_531029: /* 531029: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 53102b: jns 0x53103e */
  if (!sf) goto L_53103e;
L_53102d: /* 53102d: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53102f: xor eax, 0x4c11db7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4c11db7u);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 531034: mov dword ptr [ecx*4 + 0x5f78e8], eax */
  W32((uint32_t)(ecx*4 + 0x5f78e8u), eax);
/* 53103b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 53103c: jmp 0x531025 */
  goto L_531025;
L_53103e: /* 53103e: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 531040: mov dword ptr [ecx*4 + 0x5f78e8], eax */
  W32((uint32_t)(ecx*4 + 0x5f78e8u), eax);
/* 531047: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 531048: jmp 0x531025 */
  goto L_531025;
L_53104a: /* 53104a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53104b: jmp 0x531013 */
  goto L_531013;
L_53104d: /* 53104d: xor eax, eax */
  eax = 0;
/* 53104f: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 531052: xor esi, esi */
  esi = 0;
L_531054: /* 531054: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531059: jg 0x53107b */
  if ((!zf && sf == of)) goto L_53107b;
L_53105b: /* 53105b: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 53105d: inc dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 53105f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531061: mov byte ptr [eax + 0x5f77e0], dl */
  W8((uint32_t)(eax + 0x5f77e0u), (edx & 0xffu));
/* 531067: je 0x531075 */
  if (zf) goto L_531075;
L_531069: /* 531069: mov edx, 1 */
  edx = 0x1u;
/* 53106e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 531070: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 531071: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531073: jl 0x531078 */
  if ((sf != of)) goto L_531078;
L_531075: /* 531075: xor esi, esi */
  esi = 0;
/* 531077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_531078: /* 531078: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 531079: jmp 0x531054 */
  goto L_531054;
L_53107b: /* 53107b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53107e: cmp word ptr [eax], 0x22 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 531082: jne 0x5310a0 */
  if (!zf) goto L_5310a0;
L_531084: /* 531084: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 531088: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53108b: cmp cx, bx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 53108e: je 0x5310b6 */
  if (zf) goto L_5310b6;
L_531090: /* 531090: cmp cx, 0x22 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x22u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 531094: jne 0x531084 */
  if (!zf) goto L_531084;
L_531096: /* 531096: cmp cx, bx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 531099: je 0x5310a0 */
  if (zf) goto L_5310a0;
L_53109b: /* 53109b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53109e: mov edi, edi */
  edi = edi;
L_5310a0: /* 5310a0: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 5310a3: cmp cx, bx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5310a6: je 0x5310b6 */
  if (zf) goto L_5310b6;
L_5310a8: /* 5310a8: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5310ac: jne 0x53109b */
  if (!zf) goto L_53109b;
L_5310ae: /* 5310ae: cmp cx, bx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5310b1: je 0x5310b6 */
  if (zf) goto L_5310b6;
L_5310b3: /* 5310b3: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_5310b6: /* 5310b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5310b7: push 0x5f7d20 */
  { uint32_t v = 0x5f7d20u; esp -= 4; W32(esp, v); }
/* 5310bc: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5310c1u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5310c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5310c4: push 0x5a7bd0 */
  { uint32_t v = 0x5a7bd0u; esp -= 4; W32(esp, v); }
/* 5310c9: push 0x5aff08 */
  { uint32_t v = 0x5aff08u; esp -= 4; W32(esp, v); }
/* 5310ce: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5310d3u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5310d3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 5310d6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5310d9: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5310dc: mov dword ptr [0x5a0c94], ecx */
  W32((uint32_t)(0x5a0c94u), ecx);
/* 5310e2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5310e5: mov dword ptr [0x5a0c90], eax */
  W32((uint32_t)(0x5a0c90u), eax);
/* 5310ea: mov dword ptr [0x5afee8], edx */
  W32((uint32_t)(0x5afee8u), edx);
/* 5310f0: mov dword ptr [0x5a0ca0], ecx */
  W32((uint32_t)(0x5a0ca0u), ecx);
/* 5310f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5310f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5310fb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5310feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5310fe: call 0x4e3dbe */
  esp -= 4; W32(esp, 0x531103u); SPILL(); f_4e3dbe(); if (g_unwind) return; RELOAD();
/* 531103: call 0x4e2f7c */
  esp -= 4; W32(esp, 0x531108u); SPILL(); f_4e2f7c(); if (g_unwind) return; RELOAD();
/* 531108: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 53110e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 531110: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 531112: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x531114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531114: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x531119u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 531119: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 53111f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 531121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531122: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x531125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531125: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53112a: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* 53112f: push 0x5a7c20 */
  { uint32_t v = 0x5a7c20u; esp -= 4; W32(esp, v); }
/* 531134: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 531139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53113a: call 0x4e30df */
  esp -= 4; W32(esp, 0x53113fu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53113f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531143: push 0x5a7c38 */
  { uint32_t v = 0x5a7c38u; esp -= 4; W32(esp, v); }
/* 531148: call 0x4e161d */
  esp -= 4; W32(esp, 0x53114du); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53114d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531151: push 0x5a7c44 */
  { uint32_t v = 0x5a7c44u; esp -= 4; W32(esp, v); }
/* 531156: mov esi, eax */
  esi = eax;
/* 531158: call 0x4e161d */
  esp -= 4; W32(esp, 0x53115du); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 53115d: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 531163: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531168: push 0x5a7c50 */
  { uint32_t v = 0x5a7c50u; esp -= 4; W32(esp, v); }
/* 53116d: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 531172: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531173: call 0x4e30df */
  esp -= 4; W32(esp, 0x531178u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 531178: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53117e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531181: push 0x5f7d20 */
  { uint32_t v = 0x5f7d20u; esp -= 4; W32(esp, v); }
/* 531186: push 0x5a7c70 */
  { uint32_t v = 0x5a7c70u; esp -= 4; W32(esp, v); }
/* 53118b: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 531190: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531191: call 0x4e30df */
  esp -= 4; W32(esp, 0x531196u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 531196: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531199: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x53119eu); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 53119e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53119f: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5311a4: push 0x5a7c94 */
  { uint32_t v = 0x5a7c94u; esp -= 4; W32(esp, v); }
/* 5311a9: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5311ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5311af: call 0x4e30df */
  esp -= 4; W32(esp, 0x5311b4u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5311b4: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5311ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5311bd: push 0x5a7cc8 */
  { uint32_t v = 0x5a7cc8u; esp -= 4; W32(esp, v); }
/* 5311c2: push 0x5a7cd8 */
  { uint32_t v = 0x5a7cd8u; esp -= 4; W32(esp, v); }
/* 5311c7: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5311cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5311cd: call 0x4e30df */
  esp -= 4; W32(esp, 0x5311d2u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5311d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5311d5: push 0x5a7cfc */
  { uint32_t v = 0x5a7cfcu; esp -= 4; W32(esp, v); }
/* 5311da: push 0x5f7d20 */
  { uint32_t v = 0x5f7d20u; esp -= 4; W32(esp, v); }
/* 5311df: call 0x4e3387 */
  esp -= 4; W32(esp, 0x5311e4u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 5311e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5311e7: mov dword ptr [0x5b214c], eax */
  W32((uint32_t)(0x5b214cu), eax);
/* 5311ec: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 5311f1: push 0x5b2170 */
  { uint32_t v = 0x5b2170u; esp -= 4; W32(esp, v); }
/* 5311f6: push 0x5a7d0c */
  { uint32_t v = 0x5a7d0cu; esp -= 4; W32(esp, v); }
/* 5311fb: push 0x5f7d20 */
  { uint32_t v = 0x5f7d20u; esp -= 4; W32(esp, v); }
/* 531200: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x531205u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 531205: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531208: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53120a: jne 0x531222 */
  if (!zf) goto L_531222;
L_53120c: /* 53120c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 53120f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531210: push 0x5a7d18 */
  { uint32_t v = 0x5a7d18u; esp -= 4; W32(esp, v); }
/* 531215: push 0x5b2170 */
  { uint32_t v = 0x5b2170u; esp -= 4; W32(esp, v); }
/* 53121a: call 0x4e4183 */
  esp -= 4; W32(esp, 0x53121fu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 53121f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_531222: /* 531222: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 531228: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53122a: push 0x5b2170 */
  { uint32_t v = 0x5b2170u; esp -= 4; W32(esp, v); }
/* 53122f: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x531232u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531232: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531234: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 531237: jge 0x5312ee */
  if ((sf == of)) goto L_5312ee;
L_53123d: /* 53123d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53123f: je 0x5312ee */
  if (zf) goto L_5312ee;
L_531245: /* 531245: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 531248: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 53124b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 53124e: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 531254: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531255: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 531258: push 0x5a7d28 */
  { uint32_t v = 0x5a7d28u; esp -= 4; W32(esp, v); }
/* 53125d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53125e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 531262: call 0x4e3c24 */
  esp -= 4; W32(esp, 0x531267u); SPILL(); f_4e3c24(); if (g_unwind) return; RELOAD();
/* 531267: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53126a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53126c: jne 0x53129b */
  if (!zf) goto L_53129b;
L_53126e: /* 53126e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53126f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531270: push 0x5a7d4c */
  { uint32_t v = 0x5a7d4cu; esp -= 4; W32(esp, v); }
/* 531275: push 0x5a7d58 */
  { uint32_t v = 0x5a7d58u; esp -= 4; W32(esp, v); }
/* 53127a: push 0x5a79f0 */
  { uint32_t v = 0x5a79f0u; esp -= 4; W32(esp, v); }
/* 53127f: call 0x4e43db */
  esp -= 4; W32(esp, 0x531284u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 531284: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531287: push 0x5a7d40 */
  { uint32_t v = 0x5a7d40u; esp -= 4; W32(esp, v); }
/* 53128c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53128d: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 531292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531293: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x531298u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 531298: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53129b: /* 53129b: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5312a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5312a2: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5312a5: push 0x5b2170 */
  { uint32_t v = 0x5b2170u; esp -= 4; W32(esp, v); }
/* 5312aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5312ab: call 0x4e1d39 */
  esp -= 4; W32(esp, 0x5312b0u); SPILL(); f_4e1d39(); if (g_unwind) return; RELOAD();
/* 5312b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5312b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5312b5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5312b8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5312bc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5312bf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5312c2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5312c7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5312c7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5312ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5312cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5312cc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5312cf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5312d3: call 0x4e2748 */
  esp -= 4; W32(esp, 0x5312d8u); SPILL(); f_4e2748(); if (g_unwind) return; RELOAD();
/* 5312d8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5312db: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5312dd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5312e0: je 0x5312ee */
  if (zf) goto L_5312ee;
L_5312e2: /* 5312e2: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5312e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5312ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5312eb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5312eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5312ee: /* 5312ee: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 5312f3: push 0x5b2970 */
  { uint32_t v = 0x5b2970u; esp -= 4; W32(esp, v); }
/* 5312f8: push 0x5a7d6c */
  { uint32_t v = 0x5a7d6cu; esp -= 4; W32(esp, v); }
/* 5312fd: push 0x5f7d20 */
  { uint32_t v = 0x5f7d20u; esp -= 4; W32(esp, v); }
/* 531302: call 0x4e2e73 */
  esp -= 4; W32(esp, 0x531307u); SPILL(); f_4e2e73(); if (g_unwind) return; RELOAD();
/* 531307: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53130a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53130c: jne 0x531320 */
  if (!zf) goto L_531320;
L_53130e: /* 53130e: push 0x5a7d80 */
  { uint32_t v = 0x5a7d80u; esp -= 4; W32(esp, v); }
/* 531313: push 0x5b2970 */
  { uint32_t v = 0x5b2970u; esp -= 4; W32(esp, v); }
/* 531318: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53131du); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53131d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_531320: /* 531320: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 531326: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 531328: push 0x5b2970 */
  { uint32_t v = 0x5b2970u; esp -= 4; W32(esp, v); }
/* 53132d: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x531330u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531330: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531332: jge 0x5313e9 */
  if ((sf == of)) goto L_5313e9;
L_531338: /* 531338: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53133a: je 0x5313e9 */
  if (zf) goto L_5313e9;
L_531340: /* 531340: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 531343: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 531346: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 531349: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 53134f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531350: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 531353: push 0x5a7d94 */
  { uint32_t v = 0x5a7d94u; esp -= 4; W32(esp, v); }
/* 531358: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531359: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 53135d: call 0x4e3c24 */
  esp -= 4; W32(esp, 0x531362u); SPILL(); f_4e3c24(); if (g_unwind) return; RELOAD();
/* 531362: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531365: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531367: jne 0x531396 */
  if (!zf) goto L_531396;
L_531369: /* 531369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53136a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53136b: push 0x5a7db8 */
  { uint32_t v = 0x5a7db8u; esp -= 4; W32(esp, v); }
/* 531370: push 0x5a7dc4 */
  { uint32_t v = 0x5a7dc4u; esp -= 4; W32(esp, v); }
/* 531375: push 0x5a79f0 */
  { uint32_t v = 0x5a79f0u; esp -= 4; W32(esp, v); }
/* 53137a: call 0x4e43db */
  esp -= 4; W32(esp, 0x53137fu); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 53137f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531382: push 0x5a7dac */
  { uint32_t v = 0x5a7dacu; esp -= 4; W32(esp, v); }
/* 531387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531388: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53138d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53138e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x531393u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 531393: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_531396: /* 531396: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 53139c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53139d: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5313a0: push 0x5b2970 */
  { uint32_t v = 0x5b2970u; esp -= 4; W32(esp, v); }
/* 5313a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5313a6: call 0x4e1d39 */
  esp -= 4; W32(esp, 0x5313abu); SPILL(); f_4e1d39(); if (g_unwind) return; RELOAD();
/* 5313ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5313ae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5313b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5313b3: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 5313b7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5313ba: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5313bd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5313c2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5313c2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5313c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5313c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5313c7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5313ca: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5313ce: call 0x4e2748 */
  esp -= 4; W32(esp, 0x5313d3u); SPILL(); f_4e2748(); if (g_unwind) return; RELOAD();
/* 5313d3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5313d6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5313d8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5313db: je 0x5313e9 */
  if (zf) goto L_5313e9;
L_5313dd: /* 5313dd: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5313e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5313e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5313e6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5313e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5313e9: /* 5313e9: call dword ptr [ebp + 0x24] */
  { uint32_t t = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, 0x5313ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5313ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5313ed: mov ecx, eax */
  ecx = eax;
/* 5313ef: push 0x5b2970 */
  { uint32_t v = 0x5b2970u; esp -= 4; W32(esp, v); }
/* 5313f4: mov dword ptr [0x5afeec], ecx */
  W32((uint32_t)(0x5afeecu), ecx);
/* 5313fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5313fc: push 0x5b2170 */
  { uint32_t v = 0x5b2170u; esp -= 4; W32(esp, v); }
/* 531401: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x531404u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531404: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 53140a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53140c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53140d: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 531412: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 531418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531419: push 0x5a7dd8 */
  { uint32_t v = 0x5a7dd8u; esp -= 4; W32(esp, v); }
/* 53141e: push 0x5a7dec */
  { uint32_t v = 0x5a7decu; esp -= 4; W32(esp, v); }
/* 531423: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x531426u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531426: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531428: je 0x531439 */
  if (zf) goto L_531439;
L_53142a: /* 53142a: lea ecx, [ebp - 0x224] */
  ecx = (uint32_t)(ebp + 0xfffffddcu);
/* 531430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531431: call 0x4e31f2 */
  esp -= 4; W32(esp, 0x531436u); SPILL(); f_4e31f2(); if (g_unwind) return; RELOAD();
/* 531436: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_531439: /* 531439: call 0x4e4075 */
  esp -= 4; W32(esp, 0x53143eu); SPILL(); f_4e4075(); if (g_unwind) return; RELOAD();
/* 53143e: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 531443: mov ecx, 0x5afed8 */
  ecx = 0x5afed8u;
/* 531448: call 0x4e3ee0 */
  esp -= 4; W32(esp, 0x53144du); SPILL(); f_4e3ee0(); if (g_unwind) return; RELOAD();
/* 53144d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 53144f: call 0x4e21a3 */
  esp -= 4; W32(esp, 0x531454u); SPILL(); f_4e21a3(); if (g_unwind) return; RELOAD();
/* 531454: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531457: mov dword ptr [0x5b2158], eax */
  W32((uint32_t)(0x5b2158u), eax);
/* 53145c: call 0x4e3639 */
  esp -= 4; W32(esp, 0x531461u); SPILL(); f_4e3639(); if (g_unwind) return; RELOAD();
/* 531461: cmp dword ptr [0x5f7ce8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f7ce8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531467: je 0x5314a2 */
  if (zf) goto L_5314a2;
L_531469: /* 531469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53146a: push 0x5a7e08 */
  { uint32_t v = 0x5a7e08u; esp -= 4; W32(esp, v); }
/* 53146f: call 0x4e161d */
  esp -= 4; W32(esp, 0x531474u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 531474: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531478: push 0x5a7e14 */
  { uint32_t v = 0x5a7e14u; esp -= 4; W32(esp, v); }
/* 53147d: mov esi, eax */
  esi = eax;
/* 53147f: call 0x4e161d */
  esp -= 4; W32(esp, 0x531484u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 531484: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53148a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53148d: push 0x7f3 */
  { uint32_t v = 0x7f3u; esp -= 4; W32(esp, v); }
/* 531492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531494: push 0x5a7798 */
  { uint32_t v = 0x5a7798u; esp -= 4; W32(esp, v); }
/* 531499: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53149a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53149fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53149f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5314a2: /* 5314a2: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5314a8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5314aa: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 5314af: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5314b1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x5314b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5314b3: mov ecx, eax */
  ecx = eax;
/* 5314b5: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 5314b8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5314ba: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 5314be: je 0x5314c7 */
  if (zf) goto L_5314c7;
L_5314c0: /* 5314c0: call 0x4e2a59 */
  esp -= 4; W32(esp, 0x5314c5u); SPILL(); f_4e2a59(); if (g_unwind) return; RELOAD();
/* 5314c5: jmp 0x5314c9 */
  goto L_5314c9;
L_5314c7: /* 5314c7: xor eax, eax */
  eax = 0;
L_5314c9: /* 5314c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5314cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5314cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5314ce: mov dword ptr [0x5f7ce8], eax */
  W32((uint32_t)(0x5f7ce8u), eax);
/* 5314d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5314da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5314db: mov esp, ebp */
  esp = ebp;
/* 5314dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5314de: ret  */
  esp += 4; SPILL(); return;
}

void f_5314df(void) {
  LOAD_REGS();
L_5314df: /* 5314df: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5314e2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5314e7: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 5314ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5314eb: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 5314ee: call 0x554df6 */
  esp -= 4; W32(esp, 0x5314f3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5314f3(); return;
}

void f_5314f3(void) {
  LOAD_REGS();
L_5314f3: /* 5314f3: push 0x56d45c */
  { uint32_t v = 0x56d45cu; esp -= 4; W32(esp, v); }
/* 5314f8: push 0x5a7e30 */
  { uint32_t v = 0x5a7e30u; esp -= 4; W32(esp, v); }
/* 5314fd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x531502u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 531502: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531505: xor ebx, ebx */
  ebx = 0;
/* 531507: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531509: call 0x554df6 */
  esp -= 4; W32(esp, 0x53150eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53150e: guest_badaddr(0x53150e); return;
}

void f_531660(void) {
  LOAD_REGS();
L_531660: /* 531660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531661: mov cx, word ptr [esp + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xcu))) & 0xffffu);
/* 531666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531667: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 53166b: xor eax, eax */
  eax = 0;
/* 53166d: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 531671: mov word ptr [esp + 0x10], cx */
  W16((uint32_t)(esp + 0x10u), (ecx & 0xffffu));
/* 531676: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531677: mov ecx, esi */
  ecx = esi;
/* 531679: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 53167d: mov word ptr [esp + 0x16], ax */
  W16((uint32_t)(esp + 0x16u), (eax & 0xffffu));
/* 531682: call 0x4e13de */
  esp -= 4; W32(esp, 0x531687u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 531687: mov eax, esi */
  eax = esi;
/* 531689: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53168a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 53168b: ret  */
  esp += 4; SPILL(); return;
}

void f_5316a0(void) {
  LOAD_REGS();
L_5316a0: /* 5316a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5316a1: mov ebp, esp */
  ebp = esp;
/* 5316a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5316a5: push 0x558630 */
  { uint32_t v = 0x558630u; esp -= 4; W32(esp, v); }
/* 5316aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5316b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5316b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5316b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5316bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5316bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5316bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5316be: mov edi, ecx */
  edi = ecx;
/* 5316c0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5316c3: xor ebx, ebx */
  ebx = 0;
/* 5316c5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5316c7: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 5316ca: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5316cd: je 0x5316d2 */
  if (zf) goto L_5316d2;
L_5316cf: /* 5316cf: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 5316d0: jmp 0x5316d4 */
  goto L_5316d4;
L_5316d2: /* 5316d2: xor eax, eax */
  eax = 0;
L_5316d4: /* 5316d4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5316d7: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 5316d9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5316db: jle 0x531762 */
  if ((zf || sf != of)) goto L_531762;
L_5316e1: /* 5316e1: lea eax, [esi + esi + 2] */
  eax = (uint32_t)(esi + esi + 0x2u);
/* 5316e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5316e7: jne 0x5316ed */
  if (!zf) goto L_5316ed;
L_5316e9: /* 5316e9: xor edx, edx */
  edx = 0;
/* 5316eb: jmp 0x531701 */
  goto L_531701;
L_5316ed: /* 5316ed: lea eax, [esi + esi + 9] */
  eax = (uint32_t)(esi + esi + 0x9u);
/* 5316f1: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5316f4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5316f7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5316fa: call 0x554f80 */
  esp -= 4; W32(esp, 0x5316ffu); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 5316ff: mov edx, esp */
  edx = esp;
L_531701: /* 531701: xor eax, eax */
  eax = 0;
/* 531703: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531705: jle 0x53171e */
  if ((zf || sf != of)) goto L_53171e;
L_531707: /* 531707: mov ecx, esi */
  ecx = esi;
/* 531709: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 53170b: mov eax, 0x200020 */
  eax = 0x200020u;
/* 531710: mov edi, edx */
  edi = edx;
/* 531712: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 531714: adc ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 531716: rep stosw word ptr es:[edi], ax */
  if (!DF) { guest_stos16(edi, (uint16_t)eax, ecx); edi += ecx * 2; ecx = 0; } else { while (ecx) { W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2); ecx--; } }
/* 531719: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 53171c: mov eax, esi */
  eax = esi;
L_53171e: /* 53171e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53171f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 531722: mov word ptr [edx + eax*2], bx */
  W16((uint32_t)(edx + eax*2), (ebx & 0xffffu));
/* 531726: call 0x4e13de */
  esp -= 4; W32(esp, 0x53172bu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53172b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53172e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53172f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531730: mov ecx, eax */
  ecx = eax;
/* 531732: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 531735: call 0x4e4282 */
  esp -= 4; W32(esp, 0x53173au); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 53173a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53173c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53173f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 531746: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 531749: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 53174c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531751u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531751: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 531754: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 53175b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531760u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531760: jmp 0x53176d */
  goto L_53176d;
L_531762: /* 531762: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 531765: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 531766: mov ecx, esi */
  ecx = esi;
/* 531768: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x53176du); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_53176d: /* 53176d: mov eax, esi */
  eax = esi;
/* 53176f: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 531772: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 531775: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53177c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53177d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53177e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53177f: mov esp, ebp */
  esp = ebp;
/* 531781: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 531782: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5317d0(void) {
  LOAD_REGS();
L_5317d0: /* 5317d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5317d1: mov ebp, esp */
  ebp = esp;
/* 5317d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5317d5: push 0x558650 */
  { uint32_t v = 0x558650u; esp -= 4; W32(esp, v); }
/* 5317da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5317e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5317e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5317e8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5317eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5317ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5317ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5317ee: mov edi, ecx */
  edi = ecx;
/* 5317f0: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 5317f3: xor ebx, ebx */
  ebx = 0;
/* 5317f5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5317f7: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 5317fa: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5317fd: je 0x531802 */
  if (zf) goto L_531802;
L_5317ff: /* 5317ff: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 531800: jmp 0x531804 */
  goto L_531804;
L_531802: /* 531802: xor eax, eax */
  eax = 0;
L_531804: /* 531804: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 531807: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 531809: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53180b: jle 0x531892 */
  if ((zf || sf != of)) goto L_531892;
L_531811: /* 531811: lea eax, [esi + esi + 2] */
  eax = (uint32_t)(esi + esi + 0x2u);
/* 531815: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 531817: jne 0x53181d */
  if (!zf) goto L_53181d;
L_531819: /* 531819: xor edx, edx */
  edx = 0;
/* 53181b: jmp 0x531831 */
  goto L_531831;
L_53181d: /* 53181d: lea eax, [esi + esi + 9] */
  eax = (uint32_t)(esi + esi + 0x9u);
/* 531821: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 531824: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 531827: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53182a: call 0x554f80 */
  esp -= 4; W32(esp, 0x53182fu); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53182f: mov edx, esp */
  edx = esp;
L_531831: /* 531831: xor eax, eax */
  eax = 0;
/* 531833: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531835: jle 0x53184e */
  if ((zf || sf != of)) goto L_53184e;
L_531837: /* 531837: mov ecx, esi */
  ecx = esi;
/* 531839: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 53183b: mov eax, 0x200020 */
  eax = 0x200020u;
/* 531840: mov edi, edx */
  edi = edx;
/* 531842: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 531844: adc ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 531846: rep stosw word ptr es:[edi], ax */
  if (!DF) { guest_stos16(edi, (uint16_t)eax, ecx); edi += ecx * 2; ecx = 0; } else { while (ecx) { W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2); ecx--; } }
/* 531849: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 53184c: mov eax, esi */
  eax = esi;
L_53184e: /* 53184e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53184f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 531852: mov word ptr [edx + eax*2], bx */
  W16((uint32_t)(edx + eax*2), (ebx & 0xffffu));
/* 531856: call 0x4e13de */
  esp -= 4; W32(esp, 0x53185bu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53185b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53185e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53185f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531860: mov ecx, edi */
  ecx = edi;
/* 531862: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 531865: call 0x4e4282 */
  esp -= 4; W32(esp, 0x53186au); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 53186a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53186c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53186f: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 531876: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 531879: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 53187c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531881u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531881: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 531884: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 53188b: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531890u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531890: jmp 0x53189d */
  goto L_53189d;
L_531892: /* 531892: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 531895: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 531896: mov ecx, esi */
  ecx = esi;
/* 531898: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x53189du); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_53189d: /* 53189d: mov eax, esi */
  eax = esi;
/* 53189f: lea esp, [ebp - 0x2c] */
  esp = (uint32_t)(ebp + 0xffffffd4u);
/* 5318a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5318a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5318ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5318ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5318ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5318af: mov esp, ebp */
  esp = ebp;
/* 5318b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5318b2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_531900(void) {
  LOAD_REGS();
L_531900: /* 531900: mov eax, 0x2004 */
  eax = 0x2004u;
/* 531905: call 0x554f80 */
  esp -= 4; W32(esp, 0x53190au); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53190a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53190b: lea eax, [esp + 0x2010] */
  eax = (uint32_t)(esp + 0x2010u);
/* 531912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531913: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 531917: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 53191c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53191d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 531925: call 0x4e3693 */
  esp -= 4; W32(esp, 0x53192au); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 53192a: mov esi, dword ptr [esp + 0x2018] */
  esi = R32((uint32_t)(esp + 0x2018u));
/* 531931: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531934: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 531938: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531939: mov ecx, esi */
  ecx = esi;
/* 53193b: call 0x4e13de */
  esp -= 4; W32(esp, 0x531940u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 531940: mov eax, esi */
  eax = esi;
/* 531942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 531943: add esp, 0x2004 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2004u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531949: ret  */
  esp += 4; SPILL(); return;
}

void f_531970(void) {
  LOAD_REGS();
L_531970: /* 531970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 531971: mov ebp, esp */
  ebp = esp;
/* 531973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 531975: push 0x558743 */
  { uint32_t v = 0x558743u; esp -= 4; W32(esp, v); }
/* 53197a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 531980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 531988: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53198e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53198f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 531991: xor ebx, ebx */
  ebx = 0;
/* 531993: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 531996: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 531999: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5319a0: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5319a3: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5319a6: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5319a9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5319ad: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_5319b0: /* 5319b0: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5319b3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5319b6: jne 0x5319bd */
  if (!zf) goto L_5319bd;
L_5319b8: /* 5319b8: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5319bd: /* 5319bd: push 0x5a7954 */
  { uint32_t v = 0x5a7954u; esp -= 4; W32(esp, v); }
/* 5319c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5319c3: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5319c8u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5319c8: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 5319cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5319ce: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5319d0: je 0x5319ec */
  if (zf) goto L_5319ec;
L_5319d2: /* 5319d2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5319d4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5319d7: jne 0x5319de */
  if (!zf) goto L_5319de;
L_5319d9: /* 5319d9: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_5319de: /* 5319de: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5319e0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5319e2: mov edi, eax */
  edi = eax;
/* 5319e4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5319e6: jl 0x5319ef */
  if ((sf != of)) goto L_5319ef;
L_5319e8: /* 5319e8: mov esi, edi */
  esi = edi;
/* 5319ea: jmp 0x5319fa */
  goto L_5319fa;
L_5319ec: /* 5319ec: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_5319ef: /* 5319ef: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5319f1: je 0x5319f8 */
  if (zf) goto L_5319f8;
L_5319f3: /* 5319f3: lea esi, [edx - 1] */
  esi = (uint32_t)(edx + 0xffffffffu);
/* 5319f6: jmp 0x5319fa */
  goto L_5319fa;
L_5319f8: /* 5319f8: xor esi, esi */
  esi = 0;
L_5319fa: /* 5319fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5319fb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 5319fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5319ff: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531a02: call 0x4e42f0 */
  esp -= 4; W32(esp, 0x531a07u); SPILL(); f_4e42f0(); if (g_unwind) return; RELOAD();
/* 531a07: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a0a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 531a0e: je 0x531bfc */
  if (zf) goto L_531bfc;
L_531a14: /* 531a14: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531a17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531a18: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 531a1b: call 0x4e407a */
  esp -= 4; W32(esp, 0x531a20u); SPILL(); f_4e407a(); if (g_unwind) return; RELOAD();
/* 531a20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a22: je 0x531a34 */
  if (zf) goto L_531a34;
L_531a24: /* 531a24: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a27: je 0x531c04 */
  if (zf) goto L_531c04;
L_531a2d: /* 531a2d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 531a2f: jmp 0x531c09 */
  goto L_531c09;
L_531a34: /* 531a34: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 531a37: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a39: je 0x531a3e */
  if (zf) goto L_531a3e;
L_531a3b: /* 531a3b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 531a3c: jmp 0x531a40 */
  goto L_531a40;
L_531a3e: /* 531a3e: xor eax, eax */
  eax = 0;
L_531a40: /* 531a40: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a42: je 0x531b30 */
  if (zf) goto L_531b30;
L_531a48: /* 531a48: push 0x5f7cfc */
  { uint32_t v = 0x5f7cfcu; esp -= 4; W32(esp, v); }
/* 531a4d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 531a50: call 0x4e13de */
  esp -= 4; W32(esp, 0x531a55u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 531a55: push 0x5a7958 */
  { uint32_t v = 0x5a7958u; esp -= 4; W32(esp, v); }
/* 531a5a: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 531a5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531a5e: mov ecx, eax */
  ecx = eax;
/* 531a60: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 531a64: call 0x4e2149 */
  esp -= 4; W32(esp, 0x531a69u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 531a69: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531a6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531a6d: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 531a70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531a71: mov ecx, eax */
  ecx = eax;
/* 531a73: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 531a77: call 0x4e4282 */
  esp -= 4; W32(esp, 0x531a7cu); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 531a7c: push 0x5a795c */
  { uint32_t v = 0x5a795cu; esp -= 4; W32(esp, v); }
/* 531a81: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 531a84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531a85: mov ecx, eax */
  ecx = eax;
/* 531a87: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 531a8b: call 0x4e2149 */
  esp -= 4; W32(esp, 0x531a90u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 531a90: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531a93: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 531a97: je 0x531a9d */
  if (zf) goto L_531a9d;
L_531a99: /* 531a99: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 531a9b: jmp 0x531aa2 */
  goto L_531aa2;
L_531a9d: /* 531a9d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_531aa2: /* 531aa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531aa3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 531aa6: call 0x4e180c */
  esp -= 4; W32(esp, 0x531aabu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 531aab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531aad: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 531ab0: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 531ab4: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 531ab7: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 531aba: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531abfu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531abf: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 531ac2: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 531ac6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531acbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531acb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531acd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 531ad0: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 531ad4: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 531ad7: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 531ada: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531adfu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531adf: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 531ae2: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 531ae6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531aebu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531aeb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531aed: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 531af0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 531af4: mov dword ptr [ebp - 0x78], ebx */
  W32((uint32_t)(ebp + 0xffffff88u), ebx);
/* 531af7: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 531afa: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531affu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531aff: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 531b02: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 531b06: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531b0bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531b0b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531b0d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 531b10: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 531b14: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 531b17: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 531b1a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531b1fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531b1f: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 531b22: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 531b26: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531b2bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531b2b: jmp 0x531c12 */
  goto L_531c12;
L_531b30: /* 531b30: push 0x5f7d00 */
  { uint32_t v = 0x5f7d00u; esp -= 4; W32(esp, v); }
/* 531b35: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 531b3b: call 0x4e13de */
  esp -= 4; W32(esp, 0x531b40u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 531b40: push 0x5a7960 */
  { uint32_t v = 0x5a7960u; esp -= 4; W32(esp, v); }
/* 531b45: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 531b4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531b4c: mov ecx, eax */
  ecx = eax;
/* 531b4e: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 531b52: call 0x4e2149 */
  esp -= 4; W32(esp, 0x531b57u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 531b57: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531b5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531b5b: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 531b5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531b5f: mov ecx, eax */
  ecx = eax;
/* 531b61: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 531b65: call 0x4e4282 */
  esp -= 4; W32(esp, 0x531b6au); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 531b6a: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531b6d: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 531b71: je 0x531b77 */
  if (zf) goto L_531b77;
L_531b73: /* 531b73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 531b75: jmp 0x531b7c */
  goto L_531b7c;
L_531b77: /* 531b77: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_531b7c: /* 531b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531b7d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 531b80: call 0x4e180c */
  esp -= 4; W32(esp, 0x531b85u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 531b85: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531b87: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 531b8a: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 531b8e: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 531b91: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 531b94: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531b99u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531b99: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 531b9c: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 531ba0: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531ba5u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531ba5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531ba7: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 531bad: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 531bb1: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 531bb7: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 531bba: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531bbfu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531bbf: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 531bc5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 531bc9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531bceu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531bce: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531bd0: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 531bd6: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 531bda: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 531be0: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 531be6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531bebu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531beb: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 531bf1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 531bf5: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531bfau); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531bfa: jmp 0x531c12 */
  goto L_531c12;
L_531bfc: /* 531bfc: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531bff: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 531c02: jne 0x531c09 */
  if (!zf) goto L_531c09;
L_531c04: /* 531c04: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_531c09: /* 531c09: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 531c0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531c0d: call 0x4e180c */
  esp -= 4; W32(esp, 0x531c12u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
L_531c12: /* 531c12: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 531c17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 531c18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531c19: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 531c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531c1d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531c20: call 0x4e2577 */
  esp -= 4; W32(esp, 0x531c25u); SPILL(); f_4e2577(); if (g_unwind) return; RELOAD();
/* 531c25: mov esi, eax */
  esi = eax;
/* 531c27: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531c2a: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531c2c: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 531c30: je 0x531c6b */
  if (zf) goto L_531c6b;
L_531c32: /* 531c32: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 531c35: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531c37: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531c3a: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 531c3d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 531c40: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531c45u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531c45: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 531c48: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531c4a: je 0x531c6b */
  if (zf) goto L_531c6b;
L_531c4c: /* 531c4c: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531c4f: je 0x531c55 */
  if (zf) goto L_531c55;
L_531c51: /* 531c51: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 531c53: jmp 0x531c5a */
  goto L_531c5a;
L_531c55: /* 531c55: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_531c5a: /* 531c5a: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 531c5d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 531c60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531c61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531c63: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x531c68u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 531c68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_531c6b: /* 531c6b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531c6d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 531c70: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 531c74: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 531c77: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 531c7a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531c7fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531c7f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 531c82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531c83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531c84: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 531c87: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 531c8b: call 0x4e2748 */
  esp -= 4; W32(esp, 0x531c90u); SPILL(); f_4e2748(); if (g_unwind) return; RELOAD();
/* 531c90: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 531c93: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 531c95: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 531c99: je 0x531ca7 */
  if (zf) goto L_531ca7;
L_531c9b: /* 531c9b: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 531ca1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 531ca3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531ca4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x531ca7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_531ca7: /* 531ca7: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531ca9: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 531cac: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 531caf: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 531cb2: jge 0x531d3f */
  if ((sf == of)) goto L_531d3f;
L_531cb8: /* 531cb8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531cba: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531cbd: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 531cc1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 531cc4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 531cc7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531cccu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531ccc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531ccf: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 531cd3: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531cd8u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531cd8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 531cdb: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 531cde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531cdf: mov ecx, esi */
  ecx = esi;
/* 531ce1: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x531ce6u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 531ce6: or dword ptr [ebp - 0x3c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 531cea: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531cec: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 531cef: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 531cf3: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 531cf6: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 531cf9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531cfeu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531cfe: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 531d01: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 531d05: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531d0au); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531d0a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531d0c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531d0f: mov dword ptr [ebp - 4], 0x19 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 531d16: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 531d19: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* 531d1c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531d21u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531d21: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 531d24: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 531d27: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531d2cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531d2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 531d2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 531d30: mov eax, esi */
  eax = esi;
/* 531d32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 531d33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 531d3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 531d3b: mov esp, ebp */
  esp = ebp;
/* 531d3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 531d3e: ret  */
  esp += 4; SPILL(); return;
L_531d3f: /* 531d3f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 531d41: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531d44: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 531d48: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 531d4b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 531d4e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x531d53u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 531d53: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 531d56: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 531d5a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x531d5fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 531d5f: xor dword ptr [ebp - 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 531d63: jmp 0x5319b0 */
  goto L_5319b0;
}

void f_531d68(void) {
  LOAD_REGS();
L_531d68: /* 531d68: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 531d6e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 531d73: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 531d76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531d77: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 531d7a: call 0x554df6 */
  esp -= 4; W32(esp, 0x531d7fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_531d7f(); return;
}

void f_531d7f(void) {
  LOAD_REGS();
L_531d7f: /* 531d7f: push 0x56d470 */
  { uint32_t v = 0x56d470u; esp -= 4; W32(esp, v); }
/* 531d84: push 0x5a7964 */
  { uint32_t v = 0x5a7964u; esp -= 4; W32(esp, v); }
/* 531d89: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x531d8eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 531d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531d91: xor ebx, ebx */
  ebx = 0;
/* 531d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531d94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531d95: call 0x554df6 */
  esp -= 4; W32(esp, 0x531d9au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_531d9a: guest_badaddr(0x531d9a); return;
}

void f_531eb0(void) {
  LOAD_REGS();
L_531eb0: /* 531eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 531eb1: mov ebp, esp */
  ebp = esp;
/* 531eb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 531eb5: push 0x5587b8 */
  { uint32_t v = 0x5587b8u; esp -= 4; W32(esp, v); }
/* 531eba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 531ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531ec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 531ec8: sub esp, 0x7c4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7c4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 531ece: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 531ed1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531ed2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 531ed3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 531ed4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 531ed7: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 531edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531edd: lea ecx, [ebp - 0x3d0] */
  ecx = (uint32_t)(ebp + 0xfffffc30u);
/* 531ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531ee4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 531eeb: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x531ef0u); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 531ef0: lea edx, [ebp - 0x3d0] */
  edx = (uint32_t)(ebp + 0xfffffc30u);
/* 531ef6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531ef9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 531efa: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x531effu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 531eff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f02: push 0x5a7a8c */
  { uint32_t v = 0x5a7a8cu; esp -= 4; W32(esp, v); }
/* 531f07: mov esi, eax */
  esi = eax;
/* 531f09: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x531f0eu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 531f0e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f11: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531f13: jle 0x531f61 */
  if ((zf || sf != of)) goto L_531f61;
L_531f15: /* 531f15: lea eax, [ebp - 0x3d0] */
  eax = (uint32_t)(ebp + 0xfffffc30u);
/* 531f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531f1c: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x531f21u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 531f21: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f24: push 0x5a7aa4 */
  { uint32_t v = 0x5a7aa4u; esp -= 4; W32(esp, v); }
/* 531f29: mov esi, eax */
  esi = eax;
/* 531f2b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x531f30u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 531f30: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f33: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 531f35: lea ecx, [ebp + esi*2 - 0x3d0] */
  ecx = (uint32_t)(ebp + esi*2 + 0xfffffc30u);
/* 531f3c: push 0x5a7a98 */
  { uint32_t v = 0x5a7a98u; esp -= 4; W32(esp, v); }
/* 531f41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 531f42: call 0x4e26df */
  esp -= 4; W32(esp, 0x531f47u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 531f47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 531f4c: jne 0x531f61 */
  if (!zf) goto L_531f61;
L_531f4e: /* 531f4e: xor eax, eax */
  eax = 0;
/* 531f50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 531f53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 531f5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 531f5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 531f5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 531f5d: mov esp, ebp */
  esp = ebp;
/* 531f5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 531f60: ret  */
  esp += 4; SPILL(); return;
L_531f61: /* 531f61: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x531f66u); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 531f66: push 0x5a7ab0 */
  { uint32_t v = 0x5a7ab0u; esp -= 4; W32(esp, v); }
/* 531f6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531f6c: call 0x4e26df */
  esp -= 4; W32(esp, 0x531f71u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 531f71: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 531f74: xor edx, edx */
  edx = 0;
/* 531f76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 531f7b: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 531f7e: lea eax, [ebp - 0x3d0] */
  eax = (uint32_t)(ebp + 0xfffffc30u);
/* 531f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 531f85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531f86: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 531f89: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x531f8eu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 531f8e: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 531f94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 531f96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 531f99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 531f9a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x531f9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 531f9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 531f9f: jge 0x5321d1 */
  if ((sf == of)) goto L_5321d1;
L_531fa5: /* 531fa5: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 531faa: xor esi, esi */
  esi = 0;
L_531fac: /* 531fac: xor ecx, ecx */
  ecx = 0;
/* 531fae: cmp word ptr [0x5b1f08], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x5b1f08u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 531fb5: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 531fb8: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 531fbb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 531fbc: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531fbe: jge 0x53220a */
  if ((sf == of)) goto L_53220a;
L_531fc4: /* 531fc4: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 531fc7: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 531fca: xor edx, edx */
  edx = 0;
/* 531fcc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 531fce: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 531fd1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 531fd4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 531fd6: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531fd8: jge 0x532201 */
  if ((sf == of)) goto L_532201;
L_531fde: /* 531fde: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_531fe5: /* 531fe5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 531fe8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 531feb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 531fec: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 531fee: jge 0x5321fb */
  if ((sf == of)) goto L_5321fb;
L_531ff4: /* 531ff4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 531ff7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 531ff9: mov word ptr [ebp - 0x240], 0 */
  W16((uint32_t)(ebp + 0xfffffdc0u), 0x0u);
/* 532002: je 0x532045 */
  if (zf) goto L_532045;
L_532004: /* 532004: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 53200a: push 0x5b1f08 */
  { uint32_t v = 0x5b1f08u; esp -= 4; W32(esp, v); }
/* 53200f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532010: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532015u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532015: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532018: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 53201e: push 0x5a7ab8 */
  { uint32_t v = 0x5a7ab8u; esp -= 4; W32(esp, v); }
/* 532023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532024: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532029u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532029: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53202c: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 532032: push 0x5a7ac8 */
  { uint32_t v = 0x5a7ac8u; esp -= 4; W32(esp, v); }
/* 532037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532038: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53203du); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53203d: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 532042: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532045: /* 532045: cmp esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532048: jge 0x5320b2 */
  if ((sf == of)) goto L_5320b2;
L_53204a: /* 53204a: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 53204d: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 532050: mov ecx, dword ptr [eax + edx*4 + 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 532054: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532056: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 532059: je 0x53205f */
  if (zf) goto L_53205f;
L_53205b: /* 53205b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53205d: jmp 0x532064 */
  goto L_532064;
L_53205f: /* 53205f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_532064: /* 532064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532065: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 53206b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53206c: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532071u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532071: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532074: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 53207a: push 0x5a7acc */
  { uint32_t v = 0x5a7accu; esp -= 4; W32(esp, v); }
/* 53207f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532080: call 0x4e2220 */
  esp -= 4; W32(esp, 0x532085u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 532085: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532088: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53208a: je 0x532094 */
  if (zf) goto L_532094;
L_53208c: /* 53208c: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 532091: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_532094: /* 532094: mov edi, eax */
  edi = eax;
/* 532096: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 53209c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53209d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53209e: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5320a3u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5320a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5320a6: lea ecx, [ebp - 0x3d0] */
  ecx = (uint32_t)(ebp + 0xfffffc30u);
/* 5320ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5320ad: jmp 0x532135 */
  goto L_532135;
L_5320b2: /* 5320b2: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 5320b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5320b7: je 0x5320be */
  if (zf) goto L_5320be;
L_5320b9: /* 5320b9: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 5320bc: jmp 0x5320c3 */
  goto L_5320c3;
L_5320be: /* 5320be: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5320c3: /* 5320c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5320c4: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5320ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5320cb: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5320d0u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5320d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5320d3: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 5320d9: push 0x5a7ad0 */
  { uint32_t v = 0x5a7ad0u; esp -= 4; W32(esp, v); }
/* 5320de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5320df: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5320e4u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5320e4: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 5320e9: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 5320ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5320ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5320f1: je 0x5320f8 */
  if (zf) goto L_5320f8;
L_5320f3: /* 5320f3: mov edi, dword ptr [eax + 0x48] */
  edi = R32((uint32_t)(eax + 0x48u));
/* 5320f6: jmp 0x5320fd */
  goto L_5320fd;
L_5320f8: /* 5320f8: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_5320fd: /* 5320fd: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 532103: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532104: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532105: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53210au); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53210a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53210d: call 0x4e292d */
  esp -= 4; W32(esp, 0x532112u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 532112: mov esi, eax */
  esi = eax;
/* 532114: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 532117: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 53211a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 53211d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53211e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 532121: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 532123: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532124: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532126: push 0x5a3734 */
  { uint32_t v = 0x5a3734u; esp -= 4; W32(esp, v); }
/* 53212b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53212c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x532131u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 532131: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_532135: /* 532135: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532136: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53213bu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53213b: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 532141: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 532143: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532147: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53214au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53214a: xor ecx, ecx */
  ecx = 0;
/* 53214c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53214e: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 532151: mov eax, ecx */
  eax = ecx;
/* 532153: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532155: jne 0x5321ba */
  if (!zf) goto L_5321ba;
L_532157: /* 532157: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532159: je 0x5321e7 */
  if (zf) goto L_5321e7;
L_53215f: /* 53215f: push 0x5a7ad4 */
  { uint32_t v = 0x5a7ad4u; esp -= 4; W32(esp, v); }
/* 532164: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532165: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53216au); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53216a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53216d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 532170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532173: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 532175: je 0x532194 */
  if (zf) goto L_532194;
L_532177: /* 532177: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x53217cu); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 53217c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53217d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53217e: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532183u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532183: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532186: push 0x5a7ad8 */
  { uint32_t v = 0x5a7ad8u; esp -= 4; W32(esp, v); }
/* 53218b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53218c: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532191u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532191: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532194: /* 532194: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 532197: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532199: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53219eu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53219e: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5321a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5321a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5321a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5321aa: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x5321adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5321ad: xor ecx, ecx */
  ecx = 0;
/* 5321af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5321b1: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 5321b4: mov eax, ecx */
  eax = ecx;
/* 5321b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5321b8: je 0x5321e7 */
  if (zf) goto L_5321e7;
L_5321ba: /* 5321ba: mov edx, dword ptr [0x5afefc] */
  edx = R32((uint32_t)(0x5afefcu));
/* 5321c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5321c3: cmp eax, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5321c6: jne 0x5321d1 */
  if (!zf) goto L_5321d1;
L_5321c8: /* 5321c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5321c9: call 0x4e4322 */
  esp -= 4; W32(esp, 0x5321ceu); SPILL(); f_4e4322(); if (g_unwind) return; RELOAD();
/* 5321ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5321d1: /* 5321d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5321d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5321d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5321d6: mov eax, 1 */
  eax = 0x1u;
/* 5321db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5321e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5321e3: mov esp, ebp */
  esp = ebp;
/* 5321e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5321e6: ret  */
  esp += 4; SPILL(); return;
L_5321e7: /* 5321e7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5321ea: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5321ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5321ee: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 5321f1: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 5321f6: jmp 0x531fe5 */
  goto L_531fe5;
L_5321fb: /* 5321fb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5321fc: jmp 0x531fc4 */
  goto L_531fc4;
L_532201: /* 532201: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 532204: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 532205: jmp 0x531fac */
  goto L_531fac;
L_53220a: /* 53220a: xor edi, edi */
  edi = 0;
L_53220c: /* 53220c: xor ecx, ecx */
  ecx = 0;
/* 53220e: cmp word ptr [0x5b1f08], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x5b1f08u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 532215: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 532218: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 53221b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53221c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53221e: jge 0x531f4e */
  if ((sf == of)) goto L_531f4e;
L_532224: /* 532224: xor esi, esi */
  esi = 0;
/* 532226: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 532229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_532230: /* 532230: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 532233: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 532236: xor edx, edx */
  edx = 0;
/* 532238: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53223a: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 53223d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53223f: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532241: jge 0x5325cf */
  if ((sf == of)) goto L_5325cf;
L_532247: /* 532247: xor ebx, ebx */
  ebx = 0;
/* 532249: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53224b: mov word ptr [ebp - 0x240], bx */
  W16((uint32_t)(ebp + 0xfffffdc0u), (ebx & 0xffffu));
/* 532252: je 0x532295 */
  if (zf) goto L_532295;
L_532254: /* 532254: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 53225a: push 0x5b1f08 */
  { uint32_t v = 0x5b1f08u; esp -= 4; W32(esp, v); }
/* 53225f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532260: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532265u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532265: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532268: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 53226e: push 0x5a7adc */
  { uint32_t v = 0x5a7adcu; esp -= 4; W32(esp, v); }
/* 532273: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532274: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532279u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532279: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53227c: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 532282: push 0x5a7aec */
  { uint32_t v = 0x5a7aecu; esp -= 4; W32(esp, v); }
/* 532287: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532288: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53228du); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53228d: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 532292: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532295: /* 532295: cmp esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532298: jge 0x532301 */
  if ((sf == of)) goto L_532301;
L_53229a: /* 53229a: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 53229d: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 5322a0: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 5322a3: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5322a6: je 0x5322ac */
  if (zf) goto L_5322ac;
L_5322a8: /* 5322a8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5322aa: jmp 0x5322b1 */
  goto L_5322b1;
L_5322ac: /* 5322ac: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5322b1: /* 5322b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5322b2: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 5322b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5322b9: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5322beu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5322be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5322c1: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5322c7: push 0x5a7af0 */
  { uint32_t v = 0x5a7af0u; esp -= 4; W32(esp, v); }
/* 5322cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5322cd: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5322d2u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5322d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5322d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5322d7: je 0x5322df */
  if (zf) goto L_5322df;
L_5322d9: /* 5322d9: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 5322dc: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_5322df: /* 5322df: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 5322e2: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5322e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5322e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5322ea: mov edi, eax */
  edi = eax;
/* 5322ec: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5322f1u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5322f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5322f4: lea eax, [ebp - 0x3d0] */
  eax = (uint32_t)(ebp + 0xfffffc30u);
/* 5322fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5322fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5322fc: jmp 0x532389 */
  goto L_532389;
L_532301: /* 532301: cmp dword ptr [eax + 0x40], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 532304: je 0x53230b */
  if (zf) goto L_53230b;
L_532306: /* 532306: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 532309: jmp 0x532310 */
  goto L_532310;
L_53230b: /* 53230b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_532310: /* 532310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532311: lea ecx, [ebp - 0x240] */
  ecx = (uint32_t)(ebp + 0xfffffdc0u);
/* 532317: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532318: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53231du); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53231d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532320: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 532326: push 0x5a7af4 */
  { uint32_t v = 0x5a7af4u; esp -= 4; W32(esp, v); }
/* 53232b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53232c: call 0x4e35ad */
  esp -= 4; W32(esp, 0x532331u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 532331: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 532336: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 532339: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53233c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53233e: je 0x532345 */
  if (zf) goto L_532345;
L_532340: /* 532340: mov edi, dword ptr [eax + 0x48] */
  edi = R32((uint32_t)(eax + 0x48u));
/* 532343: jmp 0x53234a */
  goto L_53234a;
L_532345: /* 532345: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_53234a: /* 53234a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 53234d: lea eax, [ebp - 0x240] */
  eax = (uint32_t)(ebp + 0xfffffdc0u);
/* 532353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532354: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532355: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53235au); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53235a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53235d: call 0x4e292d */
  esp -= 4; W32(esp, 0x532362u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 532362: mov esi, eax */
  esi = eax;
/* 532364: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 532367: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 53236a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 53236d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53236e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 532371: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 532373: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532374: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532376: push 0x5a3734 */
  { uint32_t v = 0x5a3734u; esp -= 4; W32(esp, v); }
/* 53237b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53237c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x532381u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 532381: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 532384: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532387: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532388: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_532389: /* 532389: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53238eu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53238e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532391: mov word ptr [ebp - 0x5d0], bx */
  W16((uint32_t)(ebp + 0xfffffa30u), (ebx & 0xffffu));
/* 532398: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 53239b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 53239e: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5323a1: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5323a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5323a8: lea eax, [ebp - 0x5d0] */
  eax = (uint32_t)(ebp + 0xfffffa30u);
/* 5323ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5323af: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5323b3: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5323b8u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5323b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5323bb: lea ecx, [ebp - 0x5d0] */
  ecx = (uint32_t)(ebp + 0xfffffa30u);
/* 5323c1: push 0x5a7af8 */
  { uint32_t v = 0x5a7af8u; esp -= 4; W32(esp, v); }
/* 5323c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5323c7: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5323ccu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5323cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5323cf: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5323d1: je 0x5323e3 */
  if (zf) goto L_5323e3;
L_5323d3: /* 5323d3: lea edx, [ebp - 0x5d0] */
  edx = (uint32_t)(ebp + 0xfffffa30u);
/* 5323d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5323da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5323db: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5323e0u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5323e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5323e3: /* 5323e3: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 5323e9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5323eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5323ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5323ee: lea edx, [ebp - 0x5d0] */
  edx = (uint32_t)(ebp + 0xfffffa30u);
/* 5323f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5323f5: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 5323f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5323f9: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x5323fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5323fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5323fd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 532400: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 532404: call 0x4e1672 */
  esp -= 4; W32(esp, 0x532409u); SPILL(); f_4e1672(); if (g_unwind) return; RELOAD();
/* 532409: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 53240c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53240d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53240e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 532411: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 532415: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x53241au); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 53241a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53241d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53241f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 532423: je 0x532431 */
  if (zf) goto L_532431;
L_532425: /* 532425: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53242b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53242d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53242e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x532431u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_532431: /* 532431: xor esi, esi */
  esi = 0;
/* 532433: xor ebx, ebx */
  ebx = 0;
/* 532435: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 532437: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 53243a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 53243d: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 532440: mov word ptr [ebp - 0x7d0], si */
  W16((uint32_t)(ebp + 0xfffff830u), (esi & 0xffffu));
/* 532447: je 0x53246f */
  if (zf) goto L_53246f;
L_532449: /* 532449: lea eax, [ebp - 0x3d0] */
  eax = (uint32_t)(ebp + 0xfffffc30u);
/* 53244f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532450: lea ecx, [ebp - 0x7d0] */
  ecx = (uint32_t)(ebp + 0xfffff830u);
/* 532456: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532457: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53245cu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53245c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53245f: lea edx, [ebp - 0x7d0] */
  edx = (uint32_t)(ebp + 0xfffff830u);
/* 532465: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532467: call 0x4e35ad */
  esp -= 4; W32(esp, 0x53246cu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 53246c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53246f: /* 53246f: xor edi, edi */
  edi = 0;
L_532471: /* 532471: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532473: jl 0x53251b */
  if ((sf != of)) goto L_53251b;
L_532479: /* 532479: cmp edi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53247c: jge 0x53251b */
  if ((sf == of)) goto L_53251b;
L_532482: /* 532482: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 532485: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 532488: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 53248b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53248e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532490: je 0x532496 */
  if (zf) goto L_532496;
L_532492: /* 532492: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 532494: jmp 0x53249b */
  goto L_53249b;
L_532496: /* 532496: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53249b: /* 53249b: lea edx, [ebp - 0x3d0] */
  edx = (uint32_t)(ebp + 0xfffffc30u);
/* 5324a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5324a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5324a3: call 0x4e26df */
  esp -= 4; W32(esp, 0x5324a8u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5324a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5324ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5324ad: je 0x5324d3 */
  if (zf) goto L_5324d3;
L_5324af: /* 5324af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5324b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5324b4: je 0x5324ba */
  if (zf) goto L_5324ba;
L_5324b6: /* 5324b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5324b8: jmp 0x5324bf */
  goto L_5324bf;
L_5324ba: /* 5324ba: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5324bf: /* 5324bf: lea ecx, [ebp - 0x7d0] */
  ecx = (uint32_t)(ebp + 0xfffff830u);
/* 5324c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5324c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5324c7: call 0x4e26df */
  esp -= 4; W32(esp, 0x5324ccu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5324cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5324cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5324d1: jne 0x532513 */
  if (!zf) goto L_532513;
L_5324d3: /* 5324d3: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 5324d6: lea edx, [ebp - 0x240] */
  edx = (uint32_t)(ebp + 0xfffffdc0u);
/* 5324dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5324dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5324de: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5324e3u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5324e3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5324e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5324e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5324eb: je 0x5324f1 */
  if (zf) goto L_5324f1;
L_5324ed: /* 5324ed: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 5324ef: jmp 0x5324f6 */
  goto L_5324f6;
L_5324f1: /* 5324f1: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_5324f6: /* 5324f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5324f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5324f8: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5324fdu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5324fd: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 532503: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 532505: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532508: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532509: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53250cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53250c: xor ebx, ebx */
  ebx = 0;
/* 53250e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 532510: setge bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
L_532513: /* 532513: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 532514: xor esi, esi */
  esi = 0;
/* 532516: jmp 0x532471 */
  goto L_532471;
L_53251b: /* 53251b: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53251d: je 0x532587 */
  if (zf) goto L_532587;
L_53251f: /* 53251f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 532522: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 532528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532529: lea ecx, [ebp - 0x3d0] */
  ecx = (uint32_t)(ebp + 0xfffffc30u);
/* 53252f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532530: push 0x5a7b00 */
  { uint32_t v = 0x5a7b00u; esp -= 4; W32(esp, v); }
/* 532535: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532536: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53253bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53253b: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 532540: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 532543: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 532546: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532549: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53254b: jne 0x532556 */
  if (!zf) goto L_532556;
L_53254d: /* 53254d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53254e: call 0x4e4322 */
  esp -= 4; W32(esp, 0x532553u); SPILL(); f_4e4322(); if (g_unwind) return; RELOAD();
/* 532553: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532556: /* 532556: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 532559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53255a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53255b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 53255e: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 532562: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x532567u); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 532567: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53256a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53256c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 532570: je 0x5321d1 */
  if (zf) goto L_5321d1;
L_532576: /* 532576: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53257c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53257e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53257f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x532582u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 532582: jmp 0x5321d1 */
  goto L_5321d1;
L_532587: /* 532587: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53258a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53258b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53258c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 53258f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 532593: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x532598u); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 532598: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53259b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53259d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5325a1: je 0x5325af */
  if (zf) goto L_5325af;
L_5325a3: /* 5325a3: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5325a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5325ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5325ac: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5325afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5325af: /* 5325af: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5325b2: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5325b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5325b6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5325b9: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 5325be: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 5325c1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 5325c4: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 5325c7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5325ca: jmp 0x532230 */
  goto L_532230;
L_5325cf: /* 5325cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5325d0: jmp 0x53220c */
  goto L_53220c;
}

void f_5325d5(void) {
  LOAD_REGS();
L_5325d5: /* 5325d5: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 5325d8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5325dd: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5325e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5325e1: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 5325e4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5325e9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5325e9(); return;
}

void f_5325e9(void) {
  LOAD_REGS();
L_5325e9: /* 5325e9: push 0x56d488 */
  { uint32_t v = 0x56d488u; esp -= 4; W32(esp, v); }
/* 5325ee: push 0x5a7b44 */
  { uint32_t v = 0x5a7b44u; esp -= 4; W32(esp, v); }
/* 5325f3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5325f8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5325f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5325fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5325fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5325ff: call 0x554df6 */
  esp -= 4; W32(esp, 0x532604u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_532604: guest_badaddr(0x532604); return;
}

void f_5327f0(void) {
  LOAD_REGS();
L_5327f0: /* 5327f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5327f1: mov ebp, esp */
  ebp = esp;
/* 5327f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5327f5: push 0x5587d0 */
  { uint32_t v = 0x5587d0u; esp -= 4; W32(esp, v); }
/* 5327fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 532800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 532808: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53280b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53280c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53280d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53280e: xor esi, esi */
  esi = 0;
/* 532810: xor edx, edx */
  edx = 0;
/* 532812: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 532815: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53281c: xor ecx, ecx */
  ecx = 0;
/* 53281e: mov edi, edi */
  edi = edi;
L_532820: /* 532820: cmp ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 532826: jae 0x532841 */
  if (!cf) goto L_532841;
L_532828: /* 532828: mov eax, dword ptr [ecx*4 + 0x696748] */
  eax = R32((uint32_t)(ecx*4 + 0x696748u));
/* 53282f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532831: je 0x53283e */
  if (zf) goto L_53283e;
L_532833: /* 532833: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_532834: /* 532834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532836: je 0x53283e */
  if (zf) goto L_53283e;
L_532838: /* 532838: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 53283b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53283c: jmp 0x532834 */
  goto L_532834;
L_53283e: /* 53283e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53283f: jmp 0x532820 */
  goto L_532820;
L_532841: /* 532841: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 532844: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 532849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53284a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53284b: push 0x5a9938 */
  { uint32_t v = 0x5a9938u; esp -= 4; W32(esp, v); }
/* 532850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532851: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x532856u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 532856: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 532859: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53285c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53285d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53285e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 532865: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 532866: mov esp, ebp */
  esp = ebp;
/* 532868: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 532869: ret  */
  esp += 4; SPILL(); return;
}

void f_53286a(void) {
  LOAD_REGS();
L_53286a: /* 53286a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53286d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 532872: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 532875: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532876: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 532879: call 0x554df6 */
  esp -= 4; W32(esp, 0x53287eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53287e(); return;
}

void f_53287e(void) {
  LOAD_REGS();
L_53287e: /* 53287e: push 0x56d4b8 */
  { uint32_t v = 0x56d4b8u; esp -= 4; W32(esp, v); }
/* 532883: push 0x5a9978 */
  { uint32_t v = 0x5a9978u; esp -= 4; W32(esp, v); }
/* 532888: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53288du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53288d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532890: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532892: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532894: call 0x554df6 */
  esp -= 4; W32(esp, 0x532899u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_532899: guest_badaddr(0x532899); return;
}

void f_5328d0(void) {
  LOAD_REGS();
L_5328d0: /* 5328d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5328d1: mov ebp, esp */
  ebp = esp;
/* 5328d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5328d5: push 0x5587e0 */
  { uint32_t v = 0x5587e0u; esp -= 4; W32(esp, v); }
/* 5328da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5328e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5328e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5328e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5328eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5328ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5328ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5328ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5328f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5328f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5328f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5328fc: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x532901u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 532901: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 532907: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 532909: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53290c: push 0x5a9a18 */
  { uint32_t v = 0x5a9a18u; esp -= 4; W32(esp, v); }
/* 532911: lea eax, [eax + eax + 0xe] */
  eax = (uint32_t)(eax + eax + 0xeu);
/* 532915: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532916: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x532918u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 532918: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 53291b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 53291e: mov esi, eax */
  esi = eax;
/* 532920: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 532923: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 532925: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 532928: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53292a: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 53292d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 532930: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x532935u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 532935: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 532938: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53293b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53293c: mov eax, esi */
  eax = esi;
/* 53293e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53293f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 532946: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 532947: mov esp, ebp */
  esp = ebp;
/* 532949: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53294a: ret  */
  esp += 4; SPILL(); return;
}

void f_53294b(void) {
  LOAD_REGS();
L_53294b: /* 53294b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53294e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 532953: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 532956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532957: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53295a: call 0x554df6 */
  esp -= 4; W32(esp, 0x53295fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53295f(); return;
}

void f_53295f(void) {
  LOAD_REGS();
L_53295f: /* 53295f: push 0x56d4e8 */
  { uint32_t v = 0x56d4e8u; esp -= 4; W32(esp, v); }
/* 532964: push 0x5a9a2c */
  { uint32_t v = 0x5a9a2cu; esp -= 4; W32(esp, v); }
/* 532969: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53296eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53296e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532973: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532975: call 0x554df6 */
  esp -= 4; W32(esp, 0x53297au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53297a: guest_badaddr(0x53297a); return;
}

void f_5329b0(void) {
  LOAD_REGS();
L_5329b0: /* 5329b0: mov eax, ecx */
  eax = ecx;
/* 5329b2: xor ecx, ecx */
  ecx = 0;
/* 5329b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5329b6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5329b9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5329bc: ret  */
  esp += 4; SPILL(); return;
}

void f_5329d0(void) {
  LOAD_REGS();
L_5329d0: /* 5329d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5329d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5329d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5329d6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 5329d9: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 5329dc: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5329df: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 5329e2: jle 0x5329fe */
  if ((zf || sf != of)) goto L_5329fe;
L_5329e4: /* 5329e4: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 5329e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5329e8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5329eb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5329ed: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5329f0: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 5329f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5329f6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 5329f9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5329feu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5329fe: /* 5329fe: mov eax, edi */
  eax = edi;
/* 532a00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 532a01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 532a02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_532a20(void) {
  LOAD_REGS();
L_532a20: /* 532a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532a21: mov esi, ecx */
  esi = ecx;
/* 532a23: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 532a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532a27: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 532a2a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 532a2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532a2f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 532a32: jle 0x532a50 */
  if ((zf || sf != of)) goto L_532a50;
L_532a34: /* 532a34: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 532a37: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 532a38: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 532a3b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 532a3d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 532a40: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 532a44: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 532a46: mov ecx, esi */
  ecx = esi;
/* 532a48: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 532a4b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x532a50u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_532a50: /* 532a50: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 532a54: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 532a56: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 532a58: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 532a5b: mov eax, edi */
  eax = edi;
/* 532a5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 532a5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 532a5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_532a90(void) {
  LOAD_REGS();
L_532a90: /* 532a90: xor eax, eax */
  eax = 0;
/* 532a92: ret  */
  esp += 4; SPILL(); return;
}

void f_532ab0(void) {
  LOAD_REGS();
L_532ab0: /* 532ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532ab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532ab2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532ab3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 532ab7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 532ab9: mov esi, ecx */
  esi = ecx;
/* 532abb: jge 0x532ad4 */
  if ((sf == of)) goto L_532ad4;
L_532abd: /* 532abd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 532ac2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 532ac7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 532acc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x532ad1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 532ad1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532ad4: /* 532ad4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532ad7: jle 0x532af0 */
  if ((zf || sf != of)) goto L_532af0;
L_532ad9: /* 532ad9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 532ade: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 532ae3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 532ae8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x532aedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 532aed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532af0: /* 532af0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 532af4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 532af7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 532afa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532afc: jle 0x532b15 */
  if ((zf || sf != of)) goto L_532b15;
L_532afe: /* 532afe: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 532b03: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 532b08: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 532b0d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x532b12u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 532b12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532b15: /* 532b15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 532b17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532b18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532b19: mov ecx, esi */
  ecx = esi;
/* 532b1b: call 0x4e438b */
  esp -= 4; W32(esp, 0x532b20u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 532b20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 532b21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 532b22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 532b23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_532b50(void) {
  LOAD_REGS();
L_532b50: /* 532b50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 532b51: mov ebp, esp */
  ebp = esp;
/* 532b53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 532b55: push 0x5587f0 */
  { uint32_t v = 0x5587f0u; esp -= 4; W32(esp, v); }
/* 532b5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 532b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532b61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 532b68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 532b6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532b6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532b6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 532b70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532b71: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 532b74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 532b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532b78: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 532b7f: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x532b84u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 532b84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532b87: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 532b8c: mov ecx, dword ptr [eax*4 + 0x696748] */
  ecx = R32((uint32_t)(eax*4 + 0x696748u));
/* 532b93: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 532b96: mov ecx, dword ptr [0x69a75c] */
  ecx = R32((uint32_t)(0x69a75cu));
/* 532b9c: mov dword ptr [eax*4 + 0x696748], esi */
  W32((uint32_t)(eax*4 + 0x696748u), esi);
/* 532ba3: mov edi, ecx */
  edi = ecx;
L_532ba5: /* 532ba5: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532ba7: jg 0x532bf2 */
  if ((!zf && sf == of)) goto L_532bf2;
L_532ba9: /* 532ba9: mov eax, dword ptr [0x69a760] */
  eax = R32((uint32_t)(0x69a760u));
/* 532bae: mov ebx, ecx */
  ebx = ecx;
/* 532bb0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 532bb1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532bb3: mov dword ptr [0x69a75c], ecx */
  W32((uint32_t)(0x69a75cu), ecx);
/* 532bb9: jle 0x532bdd */
  if ((zf || sf != of)) goto L_532bdd;
L_532bbb: /* 532bbb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 532bbe: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 532bbf: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 532bc2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 532bc4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 532bc7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 532bcb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 532bcd: mov ecx, 0x69a758 */
  ecx = 0x69a758u;
/* 532bd2: mov dword ptr [0x69a760], edx */
  W32((uint32_t)(0x69a760u), edx);
/* 532bd8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x532bddu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_532bdd: /* 532bdd: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 532be2: mov dword ptr [eax + ebx*4], 0 */
  W32((uint32_t)(eax + ebx*4), 0x0u);
/* 532be9: mov ecx, dword ptr [0x69a75c] */
  ecx = R32((uint32_t)(0x69a75cu));
/* 532bef: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 532bf0: jmp 0x532ba5 */
  goto L_532ba5;
L_532bf2: /* 532bf2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 532bf4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 532bfa: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 532bfe: je 0x532c15 */
  if (zf) goto L_532c15;
L_532c00: /* 532c00: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 532c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532c07: push 0x5a8018 */
  { uint32_t v = 0x5a8018u; esp -= 4; W32(esp, v); }
/* 532c0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 532c0d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x532c12u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 532c12: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532c15: /* 532c15: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 532c17: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 532c1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 532c1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 532c20: mov dword ptr [eax + edx*4], esi */
  W32((uint32_t)(eax + edx*4), esi);
/* 532c23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 532c24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 532c2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 532c2c: mov esp, ebp */
  esp = ebp;
/* 532c2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 532c2f: ret  */
  esp += 4; SPILL(); return;
}

void f_532c30(void) {
  LOAD_REGS();
L_532c30: /* 532c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 532c33: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 532c38: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 532c3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532c3c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 532c3f: call 0x554df6 */
  esp -= 4; W32(esp, 0x532c44u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_532c44(); return;
}

void f_532c44(void) {
  LOAD_REGS();
L_532c44: /* 532c44: push 0x56d514 */
  { uint32_t v = 0x56d514u; esp -= 4; W32(esp, v); }
/* 532c49: push 0x5a805c */
  { uint32_t v = 0x5a805cu; esp -= 4; W32(esp, v); }
/* 532c4e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x532c53u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 532c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532c56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532c5a: call 0x554df6 */
  esp -= 4; W32(esp, 0x532c5fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_532c5f: guest_badaddr(0x532c5f); return;
}

void f_532cb0(void) {
  LOAD_REGS();
L_532cb0: /* 532cb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 532cb1: mov ebp, esp */
  ebp = esp;
/* 532cb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 532cb5: push 0x558800 */
  { uint32_t v = 0x558800u; esp -= 4; W32(esp, v); }
/* 532cba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 532cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532cc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 532cc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 532ccb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532ccc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 532ccf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532cd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532cd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 532cd6: mov edi, ecx */
  edi = ecx;
/* 532cd8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 532cdf: jne 0x532cf5 */
  if (!zf) goto L_532cf5;
L_532ce1: /* 532ce1: push 0x53 */
  { uint32_t v = 0x53u; esp -= 4; W32(esp, v); }
/* 532ce3: push 0x5a8064 */
  { uint32_t v = 0x5a8064u; esp -= 4; W32(esp, v); }
/* 532ce8: push 0x5a8070 */
  { uint32_t v = 0x5a8070u; esp -= 4; W32(esp, v); }
/* 532ced: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x532cf2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 532cf2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532cf5: /* 532cf5: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 532cfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532cfc: jne 0x532d11 */
  if (!zf) goto L_532d11;
L_532cfe: /* 532cfe: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 532d03: push 0x5a8078 */
  { uint32_t v = 0x5a8078u; esp -= 4; W32(esp, v); }
/* 532d08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532d09: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x532d0eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 532d0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532d11: /* 532d11: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 532d15: jne 0x532d22 */
  if (!zf) goto L_532d22;
L_532d17: /* 532d17: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 532d1d: jmp 0x532e32 */
  goto L_532e32;
L_532d22: /* 532d22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532d23: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x532d28u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 532d28: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532d2b: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 532d30: mov esi, dword ptr [eax*4 + 0x696748] */
  esi = R32((uint32_t)(eax*4 + 0x696748u));
/* 532d37: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 532d3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_532d40: /* 532d40: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532d42: je 0x532d7d */
  if (zf) goto L_532d7d;
L_532d44: /* 532d44: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 532d47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532d49: call 0x4e26df */
  esp -= 4; W32(esp, 0x532d4eu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 532d4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532d53: jne 0x532d78 */
  if (!zf) goto L_532d78;
L_532d55: /* 532d55: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 532d59: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 532d5b: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 532d5d: jne 0x532e32 */
  if (!zf) goto L_532e32;
L_532d63: /* 532d63: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 532d69: mov esi, dword ptr [edx + esi*4] */
  esi = R32((uint32_t)(edx + esi*4));
/* 532d6c: or dword ptr [esi + 4], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 532d73: jmp 0x532e32 */
  goto L_532e32;
L_532d78: /* 532d78: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 532d7b: jmp 0x532d40 */
  goto L_532d40;
L_532d7d: /* 532d7d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 532d80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532d82: je 0x532d17 */
  if (zf) goto L_532d17;
L_532d84: /* 532d84: mov eax, dword ptr [0x69a750] */
  eax = R32((uint32_t)(0x69a750u));
/* 532d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532d8b: je 0x532dae */
  if (zf) goto L_532dae;
L_532d8d: /* 532d8d: mov ecx, dword ptr [0x69a74c] */
  ecx = R32((uint32_t)(0x69a74cu));
/* 532d93: mov edx, dword ptr [ecx + eax*4 - 4] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 532d97: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 532d99: mov eax, dword ptr [0x69a750] */
  eax = R32((uint32_t)(0x69a750u));
/* 532d9e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 532da0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 532da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532da2: mov ecx, 0x69a74c */
  ecx = 0x69a74cu;
/* 532da7: call 0x4e2edc */
  esp -= 4; W32(esp, 0x532dacu); SPILL(); f_4e2edc(); if (g_unwind) return; RELOAD();
/* 532dac: jmp 0x532dea */
  goto L_532dea;
L_532dae: /* 532dae: mov ecx, dword ptr [0x69a75c] */
  ecx = R32((uint32_t)(0x69a75cu));
/* 532db4: mov eax, dword ptr [0x69a760] */
  eax = R32((uint32_t)(0x69a760u));
/* 532db9: mov esi, ecx */
  esi = ecx;
/* 532dbb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 532dbc: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 532dbe: mov dword ptr [0x69a75c], ecx */
  W32((uint32_t)(0x69a75cu), ecx);
/* 532dc4: jle 0x532de8 */
  if ((zf || sf != of)) goto L_532de8;
L_532dc6: /* 532dc6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 532dc9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 532dca: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 532dcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 532dcf: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 532dd2: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 532dd6: mov dword ptr [0x69a760], ecx */
  W32((uint32_t)(0x69a760u), ecx);
/* 532ddc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 532dde: mov ecx, 0x69a758 */
  ecx = 0x69a758u;
/* 532de3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x532de8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_532de8: /* 532de8: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
L_532dea: /* 532dea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 532ded: mov eax, dword ptr [edx*4 + 0x696748] */
  eax = R32((uint32_t)(edx*4 + 0x696748u));
/* 532df4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 532df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532df7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532df9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 532dfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532dfb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532e00u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532e00: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 532e03: mov dword ptr [edx*4 + 0x696748], eax */
  W32((uint32_t)(edx*4 + 0x696748u), eax);
/* 532e0a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 532e0c: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 532e12: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 532e15: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 532e18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532e1b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 532e1e: jne 0x532e32 */
  if (!zf) goto L_532e32;
L_532e20: /* 532e20: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 532e26: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 532e28: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 532e2b: or dword ptr [eax + 4], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_532e32: /* 532e32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 532e35: mov eax, edi */
  eax = edi;
/* 532e37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 532e38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 532e39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 532e40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 532e41: mov esp, ebp */
  esp = ebp;
/* 532e43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 532e44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_532e47(void) {
  LOAD_REGS();
L_532e47: /* 532e47: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 532e4a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 532e4f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 532e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532e53: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 532e56: call 0x554df6 */
  esp -= 4; W32(esp, 0x532e5bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_532e5b(); return;
}

void f_532e5b(void) {
  LOAD_REGS();
L_532e5b: /* 532e5b: push 0x56d53c */
  { uint32_t v = 0x56d53cu; esp -= 4; W32(esp, v); }
/* 532e60: push 0x5a80d0 */
  { uint32_t v = 0x5a80d0u; esp -= 4; W32(esp, v); }
/* 532e65: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x532e6au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 532e6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532e6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532e6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532e71: call 0x554df6 */
  esp -= 4; W32(esp, 0x532e76u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_532e76: guest_badaddr(0x532e76); return;
}

void f_532f00(void) {
  LOAD_REGS();
L_532f00: /* 532f00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 532f01: mov ebp, esp */
  ebp = esp;
/* 532f03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 532f05: push 0x558810 */
  { uint32_t v = 0x558810u; esp -= 4; W32(esp, v); }
/* 532f0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 532f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532f11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 532f18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 532f1b: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 532f20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 532f22: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 532f23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 532f24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 532f25: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 532f28: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 532f2f: je 0x532f48 */
  if (zf) goto L_532f48;
L_532f31: /* 532f31: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 532f36: push 0x5a80d8 */
  { uint32_t v = 0x5a80d8u; esp -= 4; W32(esp, v); }
/* 532f3b: push 0x5a80e4 */
  { uint32_t v = 0x5a80e4u; esp -= 4; W32(esp, v); }
/* 532f40: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x532f45u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 532f45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_532f48: /* 532f48: mov dword ptr [0x69a748], 1 */
  W32((uint32_t)(0x69a748u), 0x1u);
/* 532f52: xor eax, eax */
  eax = 0;
L_532f54: /* 532f54: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 532f59: jae 0x532f69 */
  if (!cf) goto L_532f69;
L_532f5b: /* 532f5b: mov dword ptr [eax*4 + 0x696748], 0 */
  W32((uint32_t)(eax*4 + 0x696748u), 0x0u);
/* 532f66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 532f67: jmp 0x532f54 */
  goto L_532f54;
L_532f69: /* 532f69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532f6b: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 532f70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532f72: push 0x5a8138 */
  { uint32_t v = 0x5a8138u; esp -= 4; W32(esp, v); }
/* 532f77: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532f7cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532f7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532f7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532f80: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x532f85u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 532f85: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532f88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532f8a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 532f8f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 532f91: push 0x5a8144 */
  { uint32_t v = 0x5a8144u; esp -= 4; W32(esp, v); }
/* 532f96: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532f9bu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532f9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532f9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532f9f: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x532fa4u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 532fa4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532fa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532fa9: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 532fae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 532fb0: push 0x5a8160 */
  { uint32_t v = 0x5a8160u; esp -= 4; W32(esp, v); }
/* 532fb5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532fbau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532fba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532fbe: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x532fc3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 532fc3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532fc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532fc8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 532fcd: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 532fcf: push 0x5a8178 */
  { uint32_t v = 0x5a8178u; esp -= 4; W32(esp, v); }
/* 532fd4: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532fd9u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532fd9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532fdd: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x532fe2u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 532fe2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532fe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 532fe7: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 532fec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 532fee: push 0x5a8194 */
  { uint32_t v = 0x5a8194u; esp -= 4; W32(esp, v); }
/* 532ff3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x532ff8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 532ff8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 532ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 532ffc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533001u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533001: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533006: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53300b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 53300d: push 0x5a81b0 */
  { uint32_t v = 0x5a81b0u; esp -= 4; W32(esp, v); }
/* 533012: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533017u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533017: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53301a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53301b: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533020u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533020: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533023: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533025: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53302a: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 53302c: push 0x5a81d0 */
  { uint32_t v = 0x5a81d0u; esp -= 4; W32(esp, v); }
/* 533031: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533036u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533036: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53303a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53303fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53303f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533042: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533044: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533049: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 53304b: push 0x5a81ec */
  { uint32_t v = 0x5a81ecu; esp -= 4; W32(esp, v); }
/* 533050: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533055u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533055: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533059: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53305eu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53305e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533063: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533068: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 53306a: push 0x5a8210 */
  { uint32_t v = 0x5a8210u; esp -= 4; W32(esp, v); }
/* 53306f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533074u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533074: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533078: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53307du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53307d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533080: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533082: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533087: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 533089: push 0x5a822c */
  { uint32_t v = 0x5a822cu; esp -= 4; W32(esp, v); }
/* 53308e: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533093u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533093: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533096: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533097: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53309cu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53309c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53309f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5330a1: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5330a6: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 5330a8: push 0x5a8248 */
  { uint32_t v = 0x5a8248u; esp -= 4; W32(esp, v); }
/* 5330ad: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5330b2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5330b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5330b6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5330bbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5330bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5330c0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5330c5: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 5330c7: push 0x5a8268 */
  { uint32_t v = 0x5a8268u; esp -= 4; W32(esp, v); }
/* 5330cc: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5330d1u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5330d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5330d5: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5330dau); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5330da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5330df: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5330e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5330e6: push 0x5a8288 */
  { uint32_t v = 0x5a8288u; esp -= 4; W32(esp, v); }
/* 5330eb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5330f0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5330f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5330f4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5330f9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5330f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5330fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5330fe: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533103: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 533105: push 0x5a82a8 */
  { uint32_t v = 0x5a82a8u; esp -= 4; W32(esp, v); }
/* 53310a: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53310fu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53310f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533112: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533113: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533118u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533118: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53311b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53311d: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533122: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* 533124: push 0x5a82c0 */
  { uint32_t v = 0x5a82c0u; esp -= 4; W32(esp, v); }
/* 533129: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53312eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53312e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533132: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533137u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533137: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53313a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53313c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533141: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* 533143: push 0x5a82d8 */
  { uint32_t v = 0x5a82d8u; esp -= 4; W32(esp, v); }
/* 533148: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53314du); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53314d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533151: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533156u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533156: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53315b: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533160: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 533162: push 0x5a8300 */
  { uint32_t v = 0x5a8300u; esp -= 4; W32(esp, v); }
/* 533167: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53316cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53316c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53316f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533170: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533175u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533175: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53317a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53317f: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 533181: push 0x5a830c */
  { uint32_t v = 0x5a830cu; esp -= 4; W32(esp, v); }
/* 533186: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53318bu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53318b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53318e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53318f: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533194u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533194: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533197: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533199: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53319e: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 5331a0: push 0x5a831c */
  { uint32_t v = 0x5a831cu; esp -= 4; W32(esp, v); }
/* 5331a5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5331aau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5331aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5331ae: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5331b3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5331b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5331b8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5331bd: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 5331bf: push 0x5a832c */
  { uint32_t v = 0x5a832cu; esp -= 4; W32(esp, v); }
/* 5331c4: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5331c9u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5331c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5331cd: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5331d2u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5331d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5331d7: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5331dc: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 5331de: push 0x5a8340 */
  { uint32_t v = 0x5a8340u; esp -= 4; W32(esp, v); }
/* 5331e3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5331e8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5331e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5331ec: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5331f1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5331f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5331f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5331f6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5331fb: push 0x51 */
  { uint32_t v = 0x51u; esp -= 4; W32(esp, v); }
/* 5331fd: push 0x5a834c */
  { uint32_t v = 0x5a834cu; esp -= 4; W32(esp, v); }
/* 533202: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533207u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533207: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53320a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53320b: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533210u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533210: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533213: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533215: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53321a: push 0x52 */
  { uint32_t v = 0x52u; esp -= 4; W32(esp, v); }
/* 53321c: push 0x5a8354 */
  { uint32_t v = 0x5a8354u; esp -= 4; W32(esp, v); }
/* 533221: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533226u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533226: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53322a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53322fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53322f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533234: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533239: push 0x53 */
  { uint32_t v = 0x53u; esp -= 4; W32(esp, v); }
/* 53323b: push 0x5a8360 */
  { uint32_t v = 0x5a8360u; esp -= 4; W32(esp, v); }
/* 533240: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533245u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533245: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533249: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53324eu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53324e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533253: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533258: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 53325a: push 0x5a836c */
  { uint32_t v = 0x5a836cu; esp -= 4; W32(esp, v); }
/* 53325f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533264u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533264: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533267: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533268: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53326du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53326d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533270: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533272: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533277: push 0x55 */
  { uint32_t v = 0x55u; esp -= 4; W32(esp, v); }
/* 533279: push 0x5a8378 */
  { uint32_t v = 0x5a8378u; esp -= 4; W32(esp, v); }
/* 53327e: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533283u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533283: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533287: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53328cu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53328c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53328f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533291: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533296: push 0x56 */
  { uint32_t v = 0x56u; esp -= 4; W32(esp, v); }
/* 533298: push 0x5a8388 */
  { uint32_t v = 0x5a8388u; esp -= 4; W32(esp, v); }
/* 53329d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5332a2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5332a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5332a6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5332abu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5332ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5332b0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5332b5: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
/* 5332b7: push 0x5a8398 */
  { uint32_t v = 0x5a8398u; esp -= 4; W32(esp, v); }
/* 5332bc: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5332c1u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5332c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5332c5: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5332cau); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5332ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5332cf: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5332d4: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 5332d6: push 0x5a83a8 */
  { uint32_t v = 0x5a83a8u; esp -= 4; W32(esp, v); }
/* 5332db: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5332e0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5332e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5332e4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5332e9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5332e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5332ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5332ee: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5332f3: push 0x5a */
  { uint32_t v = 0x5au; esp -= 4; W32(esp, v); }
/* 5332f5: push 0x5a83b8 */
  { uint32_t v = 0x5a83b8u; esp -= 4; W32(esp, v); }
/* 5332fa: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5332ffu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5332ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533303: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533308u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533308: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53330b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53330d: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533312: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 533314: push 0x5a83c4 */
  { uint32_t v = 0x5a83c4u; esp -= 4; W32(esp, v); }
/* 533319: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53331eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53331e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533322: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533327u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533327: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53332a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53332c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533331: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 533333: push 0x5a83d0 */
  { uint32_t v = 0x5a83d0u; esp -= 4; W32(esp, v); }
/* 533338: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53333du); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53333d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533341: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533346u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533346: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533349: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53334b: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533350: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 533352: push 0x5a83e0 */
  { uint32_t v = 0x5a83e0u; esp -= 4; W32(esp, v); }
/* 533357: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53335cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53335c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53335f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533360: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533365u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533365: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533368: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53336a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53336f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 533371: push 0x5a8408 */
  { uint32_t v = 0x5a8408u; esp -= 4; W32(esp, v); }
/* 533376: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53337bu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53337b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53337e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53337f: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533384u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533384: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533387: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533389: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53338e: push 0x66 */
  { uint32_t v = 0x66u; esp -= 4; W32(esp, v); }
/* 533390: push 0x5a8414 */
  { uint32_t v = 0x5a8414u; esp -= 4; W32(esp, v); }
/* 533395: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53339au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53339a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53339d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53339e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5333a3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5333a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5333a8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5333ad: push 0x67 */
  { uint32_t v = 0x67u; esp -= 4; W32(esp, v); }
/* 5333af: push 0x5a8420 */
  { uint32_t v = 0x5a8420u; esp -= 4; W32(esp, v); }
/* 5333b4: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5333b9u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5333b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5333bd: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5333c2u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5333c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5333c7: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5333cc: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 5333ce: push 0x5a8434 */
  { uint32_t v = 0x5a8434u; esp -= 4; W32(esp, v); }
/* 5333d3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5333d8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5333d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5333dc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5333e1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5333e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5333e6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5333eb: push 0x69 */
  { uint32_t v = 0x69u; esp -= 4; W32(esp, v); }
/* 5333ed: push 0x5a8440 */
  { uint32_t v = 0x5a8440u; esp -= 4; W32(esp, v); }
/* 5333f2: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5333f7u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5333f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5333fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5333fb: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533400u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533400: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533403: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533405: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53340a: push 0x6a */
  { uint32_t v = 0x6au; esp -= 4; W32(esp, v); }
/* 53340c: push 0x5a844c */
  { uint32_t v = 0x5a844cu; esp -= 4; W32(esp, v); }
/* 533411: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533416u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53341a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53341fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53341f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533424: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533429: push 0x6b */
  { uint32_t v = 0x6bu; esp -= 4; W32(esp, v); }
/* 53342b: push 0x5a8458 */
  { uint32_t v = 0x5a8458u; esp -= 4; W32(esp, v); }
/* 533430: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533435u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533435: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533439: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53343eu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53343e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533441: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533443: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533448: push 0x75 */
  { uint32_t v = 0x75u; esp -= 4; W32(esp, v); }
/* 53344a: push 0x5a846c */
  { uint32_t v = 0x5a846cu; esp -= 4; W32(esp, v); }
/* 53344f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533454u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533454: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533458: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53345du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53345d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533460: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533462: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533467: push 0x77 */
  { uint32_t v = 0x77u; esp -= 4; W32(esp, v); }
/* 533469: push 0x5a8478 */
  { uint32_t v = 0x5a8478u; esp -= 4; W32(esp, v); }
/* 53346e: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533473u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533473: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533477: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53347cu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53347c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53347f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533481: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533486: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 533488: push 0x5a8490 */
  { uint32_t v = 0x5a8490u; esp -= 4; W32(esp, v); }
/* 53348d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533492u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533492: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533496: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53349bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53349b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53349e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5334a0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5334a5: push 0x79 */
  { uint32_t v = 0x79u; esp -= 4; W32(esp, v); }
/* 5334a7: push 0x5a84a4 */
  { uint32_t v = 0x5a84a4u; esp -= 4; W32(esp, v); }
/* 5334ac: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5334b1u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5334b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5334b5: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5334bau); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5334ba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5334bf: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5334c4: push 0x7a */
  { uint32_t v = 0x7au; esp -= 4; W32(esp, v); }
/* 5334c6: push 0x5a84bc */
  { uint32_t v = 0x5a84bcu; esp -= 4; W32(esp, v); }
/* 5334cb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5334d0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5334d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5334d4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5334d9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5334d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5334de: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5334e3: push 0x96 */
  { uint32_t v = 0x96u; esp -= 4; W32(esp, v); }
/* 5334e8: push 0x5a84cc */
  { uint32_t v = 0x5a84ccu; esp -= 4; W32(esp, v); }
/* 5334ed: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5334f2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5334f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5334f6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5334fbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5334fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5334fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533500: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533505: push 0x97 */
  { uint32_t v = 0x97u; esp -= 4; W32(esp, v); }
/* 53350a: push 0x5a84d8 */
  { uint32_t v = 0x5a84d8u; esp -= 4; W32(esp, v); }
/* 53350f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533514u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533514: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533517: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533518: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53351du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53351d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533522: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533527: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* 53352c: push 0x5a84e8 */
  { uint32_t v = 0x5a84e8u; esp -= 4; W32(esp, v); }
/* 533531: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533536u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533536: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53353a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53353fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53353f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533542: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533544: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533549: push 0x99 */
  { uint32_t v = 0x99u; esp -= 4; W32(esp, v); }
/* 53354e: push 0x5a8500 */
  { uint32_t v = 0x5a8500u; esp -= 4; W32(esp, v); }
/* 533553: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533558u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533558: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53355b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53355c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533561u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533561: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533564: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533566: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53356b: push 0x9a */
  { uint32_t v = 0x9au; esp -= 4; W32(esp, v); }
/* 533570: push 0x5a8510 */
  { uint32_t v = 0x5a8510u; esp -= 4; W32(esp, v); }
/* 533575: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53357au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53357a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53357d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53357e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533583u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533583: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533588: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53358d: push 0x9b */
  { uint32_t v = 0x9bu; esp -= 4; W32(esp, v); }
/* 533592: push 0x5a8528 */
  { uint32_t v = 0x5a8528u; esp -= 4; W32(esp, v); }
/* 533597: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53359cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53359c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53359f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5335a0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5335a5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5335a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5335a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5335aa: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5335af: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* 5335b4: push 0x5a8540 */
  { uint32_t v = 0x5a8540u; esp -= 4; W32(esp, v); }
/* 5335b9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5335beu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5335be: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5335c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5335c2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5335c7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5335c7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5335ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5335cc: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5335d1: push 0x9d */
  { uint32_t v = 0x9du; esp -= 4; W32(esp, v); }
/* 5335d6: push 0x5a8554 */
  { uint32_t v = 0x5a8554u; esp -= 4; W32(esp, v); }
/* 5335db: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5335e0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5335e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5335e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5335e4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5335e9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5335e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5335ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5335ee: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5335f3: push 0x9e */
  { uint32_t v = 0x9eu; esp -= 4; W32(esp, v); }
/* 5335f8: push 0x5a8564 */
  { uint32_t v = 0x5a8564u; esp -= 4; W32(esp, v); }
/* 5335fd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533602u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533602: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533606: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53360bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53360b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53360e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533610: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533615: push 0x9f */
  { uint32_t v = 0x9fu; esp -= 4; W32(esp, v); }
/* 53361a: push 0x5a8588 */
  { uint32_t v = 0x5a8588u; esp -= 4; W32(esp, v); }
/* 53361f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533624u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533624: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533628: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53362du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53362d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533632: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533637: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* 53363c: push 0x5a859c */
  { uint32_t v = 0x5a859cu; esp -= 4; W32(esp, v); }
/* 533641: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533646u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533646: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53364a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53364fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53364f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533652: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533654: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 533659: push 0xa1 */
  { uint32_t v = 0xa1u; esp -= 4; W32(esp, v); }
/* 53365e: push 0x5a85b0 */
  { uint32_t v = 0x5a85b0u; esp -= 4; W32(esp, v); }
/* 533663: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533668u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533668: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53366b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53366c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533671u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533671: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533674: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533676: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53367b: push 0xa2 */
  { uint32_t v = 0xa2u; esp -= 4; W32(esp, v); }
/* 533680: push 0x5a85c4 */
  { uint32_t v = 0x5a85c4u; esp -= 4; W32(esp, v); }
/* 533685: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53368au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53368a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53368d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53368e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533693u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533693: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533698: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53369d: push 0xa3 */
  { uint32_t v = 0xa3u; esp -= 4; W32(esp, v); }
/* 5336a2: push 0x5a85d4 */
  { uint32_t v = 0x5a85d4u; esp -= 4; W32(esp, v); }
/* 5336a7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5336acu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5336ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5336b0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5336b5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5336b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5336ba: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5336bf: push 0x258 */
  { uint32_t v = 0x258u; esp -= 4; W32(esp, v); }
/* 5336c4: push 0x5a85ec */
  { uint32_t v = 0x5a85ecu; esp -= 4; W32(esp, v); }
/* 5336c9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5336ceu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5336ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5336d2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5336d7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5336d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5336dc: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5336e1: push 0x259 */
  { uint32_t v = 0x259u; esp -= 4; W32(esp, v); }
/* 5336e6: push 0x5a85f8 */
  { uint32_t v = 0x5a85f8u; esp -= 4; W32(esp, v); }
/* 5336eb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5336f0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5336f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5336f4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5336f9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5336f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5336fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5336fe: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533703: push 0x25d */
  { uint32_t v = 0x25du; esp -= 4; W32(esp, v); }
/* 533708: push 0x5a8600 */
  { uint32_t v = 0x5a8600u; esp -= 4; W32(esp, v); }
/* 53370d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533712u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533712: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533716: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53371bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53371b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53371e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533720: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533725: push 0x25e */
  { uint32_t v = 0x25eu; esp -= 4; W32(esp, v); }
/* 53372a: push 0x5a8618 */
  { uint32_t v = 0x5a8618u; esp -= 4; W32(esp, v); }
/* 53372f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533734u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533734: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533738: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53373du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53373d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533740: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533742: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533747: push 0x25f */
  { uint32_t v = 0x25fu; esp -= 4; W32(esp, v); }
/* 53374c: push 0x5a862c */
  { uint32_t v = 0x5a862cu; esp -= 4; W32(esp, v); }
/* 533751: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533756u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533756: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53375a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53375fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53375f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533762: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533764: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533769: push 0x26c */
  { uint32_t v = 0x26cu; esp -= 4; W32(esp, v); }
/* 53376e: push 0x5a8634 */
  { uint32_t v = 0x5a8634u; esp -= 4; W32(esp, v); }
/* 533773: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533778u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533778: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53377b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53377c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533781u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533781: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533786: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53378b: push 0x26d */
  { uint32_t v = 0x26du; esp -= 4; W32(esp, v); }
/* 533790: push 0x5a8640 */
  { uint32_t v = 0x5a8640u; esp -= 4; W32(esp, v); }
/* 533795: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53379au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53379a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53379d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53379e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5337a3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5337a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5337a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5337a8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5337ad: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 5337b2: push 0x5a8648 */
  { uint32_t v = 0x5a8648u; esp -= 4; W32(esp, v); }
/* 5337b7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5337bcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5337bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5337bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5337c0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5337c5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5337c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5337c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5337ca: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5337cf: push 0x26f */
  { uint32_t v = 0x26fu; esp -= 4; W32(esp, v); }
/* 5337d4: push 0x5a8654 */
  { uint32_t v = 0x5a8654u; esp -= 4; W32(esp, v); }
/* 5337d9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5337deu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5337de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5337e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5337e2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5337e7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5337e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5337ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5337ec: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5337f1: push 0x271 */
  { uint32_t v = 0x271u; esp -= 4; W32(esp, v); }
/* 5337f6: push 0x5a8660 */
  { uint32_t v = 0x5a8660u; esp -= 4; W32(esp, v); }
/* 5337fb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533800u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533800: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533804: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533809u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533809: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53380c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53380e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533813: push 0x272 */
  { uint32_t v = 0x272u; esp -= 4; W32(esp, v); }
/* 533818: push 0x5a866c */
  { uint32_t v = 0x5a866cu; esp -= 4; W32(esp, v); }
/* 53381d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533822u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533822: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533826: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53382bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53382b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53382e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533830: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533835: push 0x273 */
  { uint32_t v = 0x273u; esp -= 4; W32(esp, v); }
/* 53383a: push 0x5a8678 */
  { uint32_t v = 0x5a8678u; esp -= 4; W32(esp, v); }
/* 53383f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533844u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533844: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533848: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53384du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53384d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533852: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533857: push 0x274 */
  { uint32_t v = 0x274u; esp -= 4; W32(esp, v); }
/* 53385c: push 0x5a8680 */
  { uint32_t v = 0x5a8680u; esp -= 4; W32(esp, v); }
/* 533861: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533866u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533866: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53386a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53386fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53386f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533872: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533874: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533879: push 0x275 */
  { uint32_t v = 0x275u; esp -= 4; W32(esp, v); }
/* 53387e: push 0x5a868c */
  { uint32_t v = 0x5a868cu; esp -= 4; W32(esp, v); }
/* 533883: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533888u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533888: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53388b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53388c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533891u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533891: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533894: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533896: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53389b: push 0x276 */
  { uint32_t v = 0x276u; esp -= 4; W32(esp, v); }
/* 5338a0: push 0x5a8694 */
  { uint32_t v = 0x5a8694u; esp -= 4; W32(esp, v); }
/* 5338a5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5338aau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5338aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5338ae: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5338b3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5338b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5338b8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5338bd: push 0x277 */
  { uint32_t v = 0x277u; esp -= 4; W32(esp, v); }
/* 5338c2: push 0x5a86a4 */
  { uint32_t v = 0x5a86a4u; esp -= 4; W32(esp, v); }
/* 5338c7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5338ccu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5338cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5338d0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5338d5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5338d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5338da: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5338df: push 0x278 */
  { uint32_t v = 0x278u; esp -= 4; W32(esp, v); }
/* 5338e4: push 0x5a86b4 */
  { uint32_t v = 0x5a86b4u; esp -= 4; W32(esp, v); }
/* 5338e9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5338eeu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5338ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5338f2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5338f7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5338f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5338fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5338fc: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533901: push 0x279 */
  { uint32_t v = 0x279u; esp -= 4; W32(esp, v); }
/* 533906: push 0x5a86c4 */
  { uint32_t v = 0x5a86c4u; esp -= 4; W32(esp, v); }
/* 53390b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533910u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533910: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533913: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533914: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533919u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533919: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53391c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53391e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533923: push 0x27a */
  { uint32_t v = 0x27au; esp -= 4; W32(esp, v); }
/* 533928: push 0x5a86d0 */
  { uint32_t v = 0x5a86d0u; esp -= 4; W32(esp, v); }
/* 53392d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533932u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533932: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533935: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533936: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53393bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53393b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53393e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533940: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533945: push 0x27b */
  { uint32_t v = 0x27bu; esp -= 4; W32(esp, v); }
/* 53394a: push 0x5a86e0 */
  { uint32_t v = 0x5a86e0u; esp -= 4; W32(esp, v); }
/* 53394f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533954u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533954: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533958: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53395du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53395d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533962: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533967: push 0x280 */
  { uint32_t v = 0x280u; esp -= 4; W32(esp, v); }
/* 53396c: push 0x5a86f4 */
  { uint32_t v = 0x5a86f4u; esp -= 4; W32(esp, v); }
/* 533971: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533976u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533976: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53397a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53397fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53397f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533982: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533984: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533989: push 0x281 */
  { uint32_t v = 0x281u; esp -= 4; W32(esp, v); }
/* 53398e: push 0x5a8704 */
  { uint32_t v = 0x5a8704u; esp -= 4; W32(esp, v); }
/* 533993: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533998u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533998: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53399b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53399c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5339a1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5339a1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5339a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5339a6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5339ab: push 0x282 */
  { uint32_t v = 0x282u; esp -= 4; W32(esp, v); }
/* 5339b0: push 0x5a8710 */
  { uint32_t v = 0x5a8710u; esp -= 4; W32(esp, v); }
/* 5339b5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5339bau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5339ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5339bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5339be: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5339c3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5339c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5339c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5339c8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5339cd: push 0x283 */
  { uint32_t v = 0x283u; esp -= 4; W32(esp, v); }
/* 5339d2: push 0x5a8718 */
  { uint32_t v = 0x5a8718u; esp -= 4; W32(esp, v); }
/* 5339d7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5339dcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5339dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5339df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5339e0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5339e5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5339e5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5339e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5339ea: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5339ef: push 0x284 */
  { uint32_t v = 0x284u; esp -= 4; W32(esp, v); }
/* 5339f4: push 0x5a8728 */
  { uint32_t v = 0x5a8728u; esp -= 4; W32(esp, v); }
/* 5339f9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5339feu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5339fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533a02: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533a07u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533a07: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533a0c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533a11: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 533a16: push 0x5a8740 */
  { uint32_t v = 0x5a8740u; esp -= 4; W32(esp, v); }
/* 533a1b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533a20u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533a20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533a24: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533a29u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533a29: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533a2e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533a33: push 0x287 */
  { uint32_t v = 0x287u; esp -= 4; W32(esp, v); }
/* 533a38: push 0x5a874c */
  { uint32_t v = 0x5a874cu; esp -= 4; W32(esp, v); }
/* 533a3d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533a42u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533a42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533a46: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533a4bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533a4b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533a50: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533a55: push 0x288 */
  { uint32_t v = 0x288u; esp -= 4; W32(esp, v); }
/* 533a5a: push 0x5a875c */
  { uint32_t v = 0x5a875cu; esp -= 4; W32(esp, v); }
/* 533a5f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533a64u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533a64: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533a68: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533a6du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533a6d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533a72: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533a77: push 0x289 */
  { uint32_t v = 0x289u; esp -= 4; W32(esp, v); }
/* 533a7c: push 0x5a8770 */
  { uint32_t v = 0x5a8770u; esp -= 4; W32(esp, v); }
/* 533a81: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533a86u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533a86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533a8a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533a8fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533a8f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533a92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533a94: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533a99: push 0x28a */
  { uint32_t v = 0x28au; esp -= 4; W32(esp, v); }
/* 533a9e: push 0x5a877c */
  { uint32_t v = 0x5a877cu; esp -= 4; W32(esp, v); }
/* 533aa3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533aa8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533aa8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533aac: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533ab1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533ab1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533ab6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533abb: push 0x28c */
  { uint32_t v = 0x28cu; esp -= 4; W32(esp, v); }
/* 533ac0: push 0x5a878c */
  { uint32_t v = 0x5a878cu; esp -= 4; W32(esp, v); }
/* 533ac5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533acau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533ace: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533ad3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533ad3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533ad8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533add: push 0x28d */
  { uint32_t v = 0x28du; esp -= 4; W32(esp, v); }
/* 533ae2: push 0x5a879c */
  { uint32_t v = 0x5a879cu; esp -= 4; W32(esp, v); }
/* 533ae7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533aecu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533aec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533aef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533af0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533af5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533af5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533af8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533afa: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533aff: push 0x28e */
  { uint32_t v = 0x28eu; esp -= 4; W32(esp, v); }
/* 533b04: push 0x5a87b0 */
  { uint32_t v = 0x5a87b0u; esp -= 4; W32(esp, v); }
/* 533b09: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533b0eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533b0e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533b12: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533b17u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533b17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533b1c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533b21: push 0x28f */
  { uint32_t v = 0x28fu; esp -= 4; W32(esp, v); }
/* 533b26: push 0x5a87c4 */
  { uint32_t v = 0x5a87c4u; esp -= 4; W32(esp, v); }
/* 533b2b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533b30u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533b30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533b34: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533b39u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533b39: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533b3e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533b43: push 0x290 */
  { uint32_t v = 0x290u; esp -= 4; W32(esp, v); }
/* 533b48: push 0x5a87e0 */
  { uint32_t v = 0x5a87e0u; esp -= 4; W32(esp, v); }
/* 533b4d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533b52u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533b52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533b56: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533b5bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533b5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533b60: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533b65: push 0x291 */
  { uint32_t v = 0x291u; esp -= 4; W32(esp, v); }
/* 533b6a: push 0x5a87f8 */
  { uint32_t v = 0x5a87f8u; esp -= 4; W32(esp, v); }
/* 533b6f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533b74u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533b74: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533b78: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533b7du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533b7d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533b82: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533b87: push 0x292 */
  { uint32_t v = 0x292u; esp -= 4; W32(esp, v); }
/* 533b8c: push 0x5a8800 */
  { uint32_t v = 0x5a8800u; esp -= 4; W32(esp, v); }
/* 533b91: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533b96u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533b96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533b99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533b9a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533b9fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533b9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ba2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533ba4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533ba9: push 0x293 */
  { uint32_t v = 0x293u; esp -= 4; W32(esp, v); }
/* 533bae: push 0x5a8814 */
  { uint32_t v = 0x5a8814u; esp -= 4; W32(esp, v); }
/* 533bb3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533bb8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533bb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533bbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533bbc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533bc1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533bc1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533bc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533bc6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533bcb: push 0x294 */
  { uint32_t v = 0x294u; esp -= 4; W32(esp, v); }
/* 533bd0: push 0x5a8824 */
  { uint32_t v = 0x5a8824u; esp -= 4; W32(esp, v); }
/* 533bd5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533bdau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533bda: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533bde: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533be3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533be3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533be6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533be8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533bed: push 0x295 */
  { uint32_t v = 0x295u; esp -= 4; W32(esp, v); }
/* 533bf2: push 0x5a883c */
  { uint32_t v = 0x5a883cu; esp -= 4; W32(esp, v); }
/* 533bf7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533bfcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533bfc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533bff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533c00: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533c05u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533c05: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533c0a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533c0f: push 0x296 */
  { uint32_t v = 0x296u; esp -= 4; W32(esp, v); }
/* 533c14: push 0x5a8858 */
  { uint32_t v = 0x5a8858u; esp -= 4; W32(esp, v); }
/* 533c19: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533c1eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533c1e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533c22: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533c27u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533c27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533c2c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533c31: push 0x297 */
  { uint32_t v = 0x297u; esp -= 4; W32(esp, v); }
/* 533c36: push 0x5a8870 */
  { uint32_t v = 0x5a8870u; esp -= 4; W32(esp, v); }
/* 533c3b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533c40u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533c40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533c44: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533c49u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533c49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533c4e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533c53: push 0x298 */
  { uint32_t v = 0x298u; esp -= 4; W32(esp, v); }
/* 533c58: push 0x5a8890 */
  { uint32_t v = 0x5a8890u; esp -= 4; W32(esp, v); }
/* 533c5d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533c62u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533c62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533c66: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533c6bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533c6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533c70: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533c75: push 0x299 */
  { uint32_t v = 0x299u; esp -= 4; W32(esp, v); }
/* 533c7a: push 0x5a88b4 */
  { uint32_t v = 0x5a88b4u; esp -= 4; W32(esp, v); }
/* 533c7f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533c84u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533c84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533c88: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533c8du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533c8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533c92: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533c97: push 0x29f */
  { uint32_t v = 0x29fu; esp -= 4; W32(esp, v); }
/* 533c9c: push 0x5a88c8 */
  { uint32_t v = 0x5a88c8u; esp -= 4; W32(esp, v); }
/* 533ca1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ca6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533ca6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533caa: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533cafu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533caf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533cb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533cb4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533cb9: push 0x2a0 */
  { uint32_t v = 0x2a0u; esp -= 4; W32(esp, v); }
/* 533cbe: push 0x5a88dc */
  { uint32_t v = 0x5a88dcu; esp -= 4; W32(esp, v); }
/* 533cc3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533cc8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533cc8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533ccc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533cd1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533cd1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533cd6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533cdb: push 0x2a1 */
  { uint32_t v = 0x2a1u; esp -= 4; W32(esp, v); }
/* 533ce0: push 0x5a88ec */
  { uint32_t v = 0x5a88ecu; esp -= 4; W32(esp, v); }
/* 533ce5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ceau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533cea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533cee: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533cf3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533cf3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533cf8: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533cfd: push 0x2a2 */
  { uint32_t v = 0x2a2u; esp -= 4; W32(esp, v); }
/* 533d02: push 0x5a8900 */
  { uint32_t v = 0x5a8900u; esp -= 4; W32(esp, v); }
/* 533d07: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533d0cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533d0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533d10: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533d15u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533d15: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533d1a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533d1f: push 0x2a3 */
  { uint32_t v = 0x2a3u; esp -= 4; W32(esp, v); }
/* 533d24: push 0x5a8910 */
  { uint32_t v = 0x5a8910u; esp -= 4; W32(esp, v); }
/* 533d29: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533d2eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533d2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533d32: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533d37u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533d37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533d3c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533d41: push 0x2a4 */
  { uint32_t v = 0x2a4u; esp -= 4; W32(esp, v); }
/* 533d46: push 0x5a891c */
  { uint32_t v = 0x5a891cu; esp -= 4; W32(esp, v); }
/* 533d4b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533d50u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533d50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533d54: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533d59u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533d59: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533d5e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533d63: push 0x2a5 */
  { uint32_t v = 0x2a5u; esp -= 4; W32(esp, v); }
/* 533d68: push 0x5a892c */
  { uint32_t v = 0x5a892cu; esp -= 4; W32(esp, v); }
/* 533d6d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533d72u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533d72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533d76: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533d7bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533d7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533d80: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533d85: push 0x2a6 */
  { uint32_t v = 0x2a6u; esp -= 4; W32(esp, v); }
/* 533d8a: push 0x5a8938 */
  { uint32_t v = 0x5a8938u; esp -= 4; W32(esp, v); }
/* 533d8f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533d94u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533d94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533d97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533d98: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533d9du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533d9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533da0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533da2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533da7: push 0x2a7 */
  { uint32_t v = 0x2a7u; esp -= 4; W32(esp, v); }
/* 533dac: push 0x5a8948 */
  { uint32_t v = 0x5a8948u; esp -= 4; W32(esp, v); }
/* 533db1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533db6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533db6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533dba: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533dbfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533dbf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533dc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533dc4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533dc9: push 0x2a8 */
  { uint32_t v = 0x2a8u; esp -= 4; W32(esp, v); }
/* 533dce: push 0x5a895c */
  { uint32_t v = 0x5a895cu; esp -= 4; W32(esp, v); }
/* 533dd3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533dd8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533dd8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533ddc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533de1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533de1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533de4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533de6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533deb: push 0x2a9 */
  { uint32_t v = 0x2a9u; esp -= 4; W32(esp, v); }
/* 533df0: push 0x5a8970 */
  { uint32_t v = 0x5a8970u; esp -= 4; W32(esp, v); }
/* 533df5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533dfau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533dfa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533dfe: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533e03u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533e03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533e08: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533e0d: push 0x2aa */
  { uint32_t v = 0x2aau; esp -= 4; W32(esp, v); }
/* 533e12: push 0x5a8990 */
  { uint32_t v = 0x5a8990u; esp -= 4; W32(esp, v); }
/* 533e17: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533e1cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533e1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533e20: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533e25u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533e25: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533e2a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533e2f: push 0x2ab */
  { uint32_t v = 0x2abu; esp -= 4; W32(esp, v); }
/* 533e34: push 0x5a89b4 */
  { uint32_t v = 0x5a89b4u; esp -= 4; W32(esp, v); }
/* 533e39: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533e3eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533e3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533e42: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533e47u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533e47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533e4c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533e51: push 0x2ac */
  { uint32_t v = 0x2acu; esp -= 4; W32(esp, v); }
/* 533e56: push 0x5a89d0 */
  { uint32_t v = 0x5a89d0u; esp -= 4; W32(esp, v); }
/* 533e5b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533e60u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533e60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533e64: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533e69u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533e69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533e6e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533e73: push 0x2ad */
  { uint32_t v = 0x2adu; esp -= 4; W32(esp, v); }
/* 533e78: push 0x5a89ec */
  { uint32_t v = 0x5a89ecu; esp -= 4; W32(esp, v); }
/* 533e7d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533e82u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533e82: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533e86: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533e8bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533e8b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533e8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533e90: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533e95: push 0x2ae */
  { uint32_t v = 0x2aeu; esp -= 4; W32(esp, v); }
/* 533e9a: push 0x5a8a10 */
  { uint32_t v = 0x5a8a10u; esp -= 4; W32(esp, v); }
/* 533e9f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ea4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533ea4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ea7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533ea8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533eadu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533ead: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533eb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533eb2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533eb7: push 0x2af */
  { uint32_t v = 0x2afu; esp -= 4; W32(esp, v); }
/* 533ebc: push 0x5a8a30 */
  { uint32_t v = 0x5a8a30u; esp -= 4; W32(esp, v); }
/* 533ec1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ec6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533ec6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533eca: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533ecfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533ecf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533ed4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533ed9: push 0x2b0 */
  { uint32_t v = 0x2b0u; esp -= 4; W32(esp, v); }
/* 533ede: push 0x5a8a50 */
  { uint32_t v = 0x5a8a50u; esp -= 4; W32(esp, v); }
/* 533ee3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ee8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533ee8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533eeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533eec: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533ef1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533ef1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ef4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533ef6: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533efb: push 0x2b1 */
  { uint32_t v = 0x2b1u; esp -= 4; W32(esp, v); }
/* 533f00: push 0x5a8a78 */
  { uint32_t v = 0x5a8a78u; esp -= 4; W32(esp, v); }
/* 533f05: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533f0au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533f0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533f0e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533f13u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533f13: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533f18: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533f1d: push 0x2ba */
  { uint32_t v = 0x2bau; esp -= 4; W32(esp, v); }
/* 533f22: push 0x5a8aa8 */
  { uint32_t v = 0x5a8aa8u; esp -= 4; W32(esp, v); }
/* 533f27: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533f2cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533f2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533f30: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533f35u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533f35: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533f3a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533f3f: push 0x2b5 */
  { uint32_t v = 0x2b5u; esp -= 4; W32(esp, v); }
/* 533f44: push 0x5a8abc */
  { uint32_t v = 0x5a8abcu; esp -= 4; W32(esp, v); }
/* 533f49: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533f4eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533f4e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533f52: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533f57u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533f57: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533f5c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533f61: push 0x2bb */
  { uint32_t v = 0x2bbu; esp -= 4; W32(esp, v); }
/* 533f66: push 0x5a8ad8 */
  { uint32_t v = 0x5a8ad8u; esp -= 4; W32(esp, v); }
/* 533f6b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533f70u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533f70: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533f74: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533f79u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533f79: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533f7e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533f83: push 0x29e */
  { uint32_t v = 0x29eu; esp -= 4; W32(esp, v); }
/* 533f88: push 0x5a8af0 */
  { uint32_t v = 0x5a8af0u; esp -= 4; W32(esp, v); }
/* 533f8d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533f92u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533f92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533f96: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533f9bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533f9b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533f9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533fa0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533fa5: push 0x2b2 */
  { uint32_t v = 0x2b2u; esp -= 4; W32(esp, v); }
/* 533faa: push 0x5a8b04 */
  { uint32_t v = 0x5a8b04u; esp -= 4; W32(esp, v); }
/* 533faf: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533fb4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533fb4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533fb8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533fbdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533fbd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533fc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533fc2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533fc7: push 0x2b3 */
  { uint32_t v = 0x2b3u; esp -= 4; W32(esp, v); }
/* 533fcc: push 0x5a8b10 */
  { uint32_t v = 0x5a8b10u; esp -= 4; W32(esp, v); }
/* 533fd1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533fd6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533fd6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533fda: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x533fdfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 533fdf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533fe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 533fe4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 533fe9: push 0x2b4 */
  { uint32_t v = 0x2b4u; esp -= 4; W32(esp, v); }
/* 533fee: push 0x5a8b20 */
  { uint32_t v = 0x5a8b20u; esp -= 4; W32(esp, v); }
/* 533ff3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x533ff8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 533ff8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 533ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 533ffc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534001u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534001: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534004: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534006: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53400b: push 0x2b7 */
  { uint32_t v = 0x2b7u; esp -= 4; W32(esp, v); }
/* 534010: push 0x5a8b34 */
  { uint32_t v = 0x5a8b34u; esp -= 4; W32(esp, v); }
/* 534015: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53401au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53401a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53401d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53401e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534023u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534023: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534026: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534028: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53402d: push 0x2b8 */
  { uint32_t v = 0x2b8u; esp -= 4; W32(esp, v); }
/* 534032: push 0x5a8b44 */
  { uint32_t v = 0x5a8b44u; esp -= 4; W32(esp, v); }
/* 534037: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53403cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53403c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53403f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534040: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534045u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534045: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53404a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53404f: push 0x2b9 */
  { uint32_t v = 0x2b9u; esp -= 4; W32(esp, v); }
/* 534054: push 0x5a8b50 */
  { uint32_t v = 0x5a8b50u; esp -= 4; W32(esp, v); }
/* 534059: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53405eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53405e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534062: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534067u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534067: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53406a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53406c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534071: push 0x2bc */
  { uint32_t v = 0x2bcu; esp -= 4; W32(esp, v); }
/* 534076: push 0x5a8b5c */
  { uint32_t v = 0x5a8b5cu; esp -= 4; W32(esp, v); }
/* 53407b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534080u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534080: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534084: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534089u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534089: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53408c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53408e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534093: push 0x2bd */
  { uint32_t v = 0x2bdu; esp -= 4; W32(esp, v); }
/* 534098: push 0x5a8b70 */
  { uint32_t v = 0x5a8b70u; esp -= 4; W32(esp, v); }
/* 53409d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5340a2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5340a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5340a6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5340abu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5340ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5340b0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5340b5: push 0x2be */
  { uint32_t v = 0x2beu; esp -= 4; W32(esp, v); }
/* 5340ba: push 0x5a8b88 */
  { uint32_t v = 0x5a8b88u; esp -= 4; W32(esp, v); }
/* 5340bf: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5340c4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5340c4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5340c8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5340cdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5340cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5340d2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5340d7: push 0x2bf */
  { uint32_t v = 0x2bfu; esp -= 4; W32(esp, v); }
/* 5340dc: push 0x5a8ba4 */
  { uint32_t v = 0x5a8ba4u; esp -= 4; W32(esp, v); }
/* 5340e1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5340e6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5340e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5340ea: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5340efu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5340ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5340f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5340f4: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5340f9: push 0x2c0 */
  { uint32_t v = 0x2c0u; esp -= 4; W32(esp, v); }
/* 5340fe: push 0x5a8bb0 */
  { uint32_t v = 0x5a8bb0u; esp -= 4; W32(esp, v); }
/* 534103: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534108u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534108: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53410b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53410c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534111u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534111: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534116: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53411b: push 0x2c1 */
  { uint32_t v = 0x2c1u; esp -= 4; W32(esp, v); }
/* 534120: push 0x5a8bc4 */
  { uint32_t v = 0x5a8bc4u; esp -= 4; W32(esp, v); }
/* 534125: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53412au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53412a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53412d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53412e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534133u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534133: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534136: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534138: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53413d: push 0x2c2 */
  { uint32_t v = 0x2c2u; esp -= 4; W32(esp, v); }
/* 534142: push 0x5a8bd4 */
  { uint32_t v = 0x5a8bd4u; esp -= 4; W32(esp, v); }
/* 534147: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53414cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53414c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53414f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534150: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534155u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534155: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53415a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53415f: push 0x2c3 */
  { uint32_t v = 0x2c3u; esp -= 4; W32(esp, v); }
/* 534164: push 0x5a8be4 */
  { uint32_t v = 0x5a8be4u; esp -= 4; W32(esp, v); }
/* 534169: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53416eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53416e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534172: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534177u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534177: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53417a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53417c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534181: push 0x2c4 */
  { uint32_t v = 0x2c4u; esp -= 4; W32(esp, v); }
/* 534186: push 0x5a8bf8 */
  { uint32_t v = 0x5a8bf8u; esp -= 4; W32(esp, v); }
/* 53418b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534190u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534190: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534194: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534199u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534199: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53419c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53419e: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5341a3: push 0x2c5 */
  { uint32_t v = 0x2c5u; esp -= 4; W32(esp, v); }
/* 5341a8: push 0x5a8c0c */
  { uint32_t v = 0x5a8c0cu; esp -= 4; W32(esp, v); }
/* 5341ad: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5341b2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5341b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5341b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5341b6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5341bbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5341bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5341be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5341c0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5341c5: push 0x2c6 */
  { uint32_t v = 0x2c6u; esp -= 4; W32(esp, v); }
/* 5341ca: push 0x5a8c18 */
  { uint32_t v = 0x5a8c18u; esp -= 4; W32(esp, v); }
/* 5341cf: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5341d4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5341d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5341d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5341d8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5341ddu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5341dd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5341e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5341e2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5341e7: push 0x2c7 */
  { uint32_t v = 0x2c7u; esp -= 4; W32(esp, v); }
/* 5341ec: push 0x5a8c24 */
  { uint32_t v = 0x5a8c24u; esp -= 4; W32(esp, v); }
/* 5341f1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5341f6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5341f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5341f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5341fa: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5341ffu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5341ff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534202: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534204: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534209: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 53420e: push 0x5a8c34 */
  { uint32_t v = 0x5a8c34u; esp -= 4; W32(esp, v); }
/* 534213: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534218u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534218: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53421b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53421c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534221u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534221: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534224: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534226: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53422b: push 0x2c9 */
  { uint32_t v = 0x2c9u; esp -= 4; W32(esp, v); }
/* 534230: push 0x5a8c44 */
  { uint32_t v = 0x5a8c44u; esp -= 4; W32(esp, v); }
/* 534235: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53423au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53423a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53423d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53423e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534243u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534243: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534246: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534248: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53424d: push 0x2ca */
  { uint32_t v = 0x2cau; esp -= 4; W32(esp, v); }
/* 534252: push 0x5a8c58 */
  { uint32_t v = 0x5a8c58u; esp -= 4; W32(esp, v); }
/* 534257: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53425cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53425c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53425f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534260: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534265u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534265: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534268: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53426a: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53426f: push 0x2d0 */
  { uint32_t v = 0x2d0u; esp -= 4; W32(esp, v); }
/* 534274: push 0x5a8c6c */
  { uint32_t v = 0x5a8c6cu; esp -= 4; W32(esp, v); }
/* 534279: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53427eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53427e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534282: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534287u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534287: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53428a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53428c: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534291: push 0x2d1 */
  { uint32_t v = 0x2d1u; esp -= 4; W32(esp, v); }
/* 534296: push 0x5a8c74 */
  { uint32_t v = 0x5a8c74u; esp -= 4; W32(esp, v); }
/* 53429b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5342a0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5342a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5342a4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5342a9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5342a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5342ae: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5342b3: push 0x2d2 */
  { uint32_t v = 0x2d2u; esp -= 4; W32(esp, v); }
/* 5342b8: push 0x5a8c80 */
  { uint32_t v = 0x5a8c80u; esp -= 4; W32(esp, v); }
/* 5342bd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5342c2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5342c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5342c6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5342cbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5342cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5342d0: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5342d5: push 0x2d3 */
  { uint32_t v = 0x2d3u; esp -= 4; W32(esp, v); }
/* 5342da: push 0x5a8c90 */
  { uint32_t v = 0x5a8c90u; esp -= 4; W32(esp, v); }
/* 5342df: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5342e4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5342e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5342e8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5342edu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5342ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5342f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5342f2: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 5342f7: push 0x2da */
  { uint32_t v = 0x2dau; esp -= 4; W32(esp, v); }
/* 5342fc: push 0x5a8c9c */
  { uint32_t v = 0x5a8c9cu; esp -= 4; W32(esp, v); }
/* 534301: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534306u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534306: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53430a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53430fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53430f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534312: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534314: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 534319: push 0x2db */
  { uint32_t v = 0x2dbu; esp -= 4; W32(esp, v); }
/* 53431e: push 0x5a8ca8 */
  { uint32_t v = 0x5a8ca8u; esp -= 4; W32(esp, v); }
/* 534323: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534328u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534328: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53432b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53432c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534331u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534331: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534336: push 0x4000400 */
  { uint32_t v = 0x4000400u; esp -= 4; W32(esp, v); }
/* 53433b: push 0x2dc */
  { uint32_t v = 0x2dcu; esp -= 4; W32(esp, v); }
/* 534340: push 0x5a8cb4 */
  { uint32_t v = 0x5a8cb4u; esp -= 4; W32(esp, v); }
/* 534345: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53434au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53434a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53434d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53434e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534353u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534353: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534356: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534358: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53435d: push 0x2e4 */
  { uint32_t v = 0x2e4u; esp -= 4; W32(esp, v); }
/* 534362: push 0x5a8cbc */
  { uint32_t v = 0x5a8cbcu; esp -= 4; W32(esp, v); }
/* 534367: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53436cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53436c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53436f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534370: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534375u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534375: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53437a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53437f: push 0x2e6 */
  { uint32_t v = 0x2e6u; esp -= 4; W32(esp, v); }
/* 534384: push 0x5a8cc4 */
  { uint32_t v = 0x5a8cc4u; esp -= 4; W32(esp, v); }
/* 534389: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53438eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53438e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534391: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534392: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534397u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534397: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53439a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53439c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5343a1: push 0x2e7 */
  { uint32_t v = 0x2e7u; esp -= 4; W32(esp, v); }
/* 5343a6: push 0x5a8cd0 */
  { uint32_t v = 0x5a8cd0u; esp -= 4; W32(esp, v); }
/* 5343ab: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5343b0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5343b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5343b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5343b4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5343b9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5343b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5343bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5343be: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5343c3: push 0x2e8 */
  { uint32_t v = 0x2e8u; esp -= 4; W32(esp, v); }
/* 5343c8: push 0x5a8ce8 */
  { uint32_t v = 0x5a8ce8u; esp -= 4; W32(esp, v); }
/* 5343cd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5343d2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5343d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5343d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5343d6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5343dbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5343db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5343de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5343e0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5343e5: push 0x2e9 */
  { uint32_t v = 0x2e9u; esp -= 4; W32(esp, v); }
/* 5343ea: push 0x5a8cf8 */
  { uint32_t v = 0x5a8cf8u; esp -= 4; W32(esp, v); }
/* 5343ef: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5343f4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5343f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5343f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5343f8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5343fdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5343fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534402: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534407: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53440c: push 0x5a8d04 */
  { uint32_t v = 0x5a8d04u; esp -= 4; W32(esp, v); }
/* 534411: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534416u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53441a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53441fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53441f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534424: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534429: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 53442e: push 0x5a8d0c */
  { uint32_t v = 0x5a8d0cu; esp -= 4; W32(esp, v); }
/* 534433: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534438u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534438: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53443b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53443c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534441u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534441: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534446: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53444b: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 534450: push 0x5a8d20 */
  { uint32_t v = 0x5a8d20u; esp -= 4; W32(esp, v); }
/* 534455: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53445au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53445a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53445d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53445e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534463u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534463: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534466: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534468: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53446d: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 534472: push 0x5a8d2c */
  { uint32_t v = 0x5a8d2cu; esp -= 4; W32(esp, v); }
/* 534477: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53447cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53447c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53447f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534480: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534485u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534485: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53448a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53448f: push 0x2fc */
  { uint32_t v = 0x2fcu; esp -= 4; W32(esp, v); }
/* 534494: push 0x5a8d38 */
  { uint32_t v = 0x5a8d38u; esp -= 4; W32(esp, v); }
/* 534499: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53449eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53449e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5344a2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5344a7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5344a7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5344ac: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5344b1: push 0x2fd */
  { uint32_t v = 0x2fdu; esp -= 4; W32(esp, v); }
/* 5344b6: push 0x5a8d40 */
  { uint32_t v = 0x5a8d40u; esp -= 4; W32(esp, v); }
/* 5344bb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5344c0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5344c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5344c4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5344c9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5344c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5344ce: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5344d3: push 0x2fe */
  { uint32_t v = 0x2feu; esp -= 4; W32(esp, v); }
/* 5344d8: push 0x5a8d4c */
  { uint32_t v = 0x5a8d4cu; esp -= 4; W32(esp, v); }
/* 5344dd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5344e2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5344e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5344e6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5344ebu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5344eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5344ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5344f0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5344f5: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5344fa: push 0x5a8d5c */
  { uint32_t v = 0x5a8d5cu; esp -= 4; W32(esp, v); }
/* 5344ff: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534504u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534504: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534508: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53450du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53450d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534510: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534512: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534517: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 53451c: push 0x5a8d6c */
  { uint32_t v = 0x5a8d6cu; esp -= 4; W32(esp, v); }
/* 534521: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534526u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534526: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53452a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53452fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53452f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534534: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534539: push 0x301 */
  { uint32_t v = 0x301u; esp -= 4; W32(esp, v); }
/* 53453e: push 0x5a8d84 */
  { uint32_t v = 0x5a8d84u; esp -= 4; W32(esp, v); }
/* 534543: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534548u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534548: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53454b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53454c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534551u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534551: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534554: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534556: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53455b: push 0x302 */
  { uint32_t v = 0x302u; esp -= 4; W32(esp, v); }
/* 534560: push 0x5a8da0 */
  { uint32_t v = 0x5a8da0u; esp -= 4; W32(esp, v); }
/* 534565: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53456au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53456a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53456d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53456e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534573u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534573: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534576: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534578: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53457d: push 0x303 */
  { uint32_t v = 0x303u; esp -= 4; W32(esp, v); }
/* 534582: push 0x5a8db4 */
  { uint32_t v = 0x5a8db4u; esp -= 4; W32(esp, v); }
/* 534587: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53458cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53458c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53458f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534590: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534595u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534595: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53459a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53459f: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 5345a4: push 0x5a8dbc */
  { uint32_t v = 0x5a8dbcu; esp -= 4; W32(esp, v); }
/* 5345a9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5345aeu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5345ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5345b2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5345b7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5345b7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5345bc: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5345c1: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 5345c6: push 0x5a8dcc */
  { uint32_t v = 0x5a8dccu; esp -= 4; W32(esp, v); }
/* 5345cb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5345d0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5345d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5345d4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5345d9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5345d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5345de: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5345e3: push 0x306 */
  { uint32_t v = 0x306u; esp -= 4; W32(esp, v); }
/* 5345e8: push 0x5a8ddc */
  { uint32_t v = 0x5a8ddcu; esp -= 4; W32(esp, v); }
/* 5345ed: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5345f2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5345f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5345f6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5345fbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5345fb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5345fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534600: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534605: push 0x307 */
  { uint32_t v = 0x307u; esp -= 4; W32(esp, v); }
/* 53460a: push 0x5a8df8 */
  { uint32_t v = 0x5a8df8u; esp -= 4; W32(esp, v); }
/* 53460f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534614u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534614: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534618: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53461du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53461d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534622: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534627: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* 53462c: push 0x5a8e0c */
  { uint32_t v = 0x5a8e0cu; esp -= 4; W32(esp, v); }
/* 534631: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534636u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534636: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53463a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53463fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53463f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534642: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534644: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534649: push 0x309 */
  { uint32_t v = 0x309u; esp -= 4; W32(esp, v); }
/* 53464e: push 0x5a8e1c */
  { uint32_t v = 0x5a8e1cu; esp -= 4; W32(esp, v); }
/* 534653: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534658u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534658: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53465b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53465c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534661u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534661: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534666: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53466b: push 0x30a */
  { uint32_t v = 0x30au; esp -= 4; W32(esp, v); }
/* 534670: push 0x5a8e2c */
  { uint32_t v = 0x5a8e2cu; esp -= 4; W32(esp, v); }
/* 534675: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53467au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53467a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53467d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53467e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534683u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534683: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534686: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534688: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53468d: push 0x30b */
  { uint32_t v = 0x30bu; esp -= 4; W32(esp, v); }
/* 534692: push 0x5a8e44 */
  { uint32_t v = 0x5a8e44u; esp -= 4; W32(esp, v); }
/* 534697: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53469cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53469c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53469f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5346a0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5346a5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5346a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5346a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5346aa: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5346af: push 0x30c */
  { uint32_t v = 0x30cu; esp -= 4; W32(esp, v); }
/* 5346b4: push 0x5a8e54 */
  { uint32_t v = 0x5a8e54u; esp -= 4; W32(esp, v); }
/* 5346b9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5346beu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5346be: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5346c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5346c2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5346c7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5346c7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5346ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5346cc: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5346d1: push 0x30d */
  { uint32_t v = 0x30du; esp -= 4; W32(esp, v); }
/* 5346d6: push 0x5a8e6c */
  { uint32_t v = 0x5a8e6cu; esp -= 4; W32(esp, v); }
/* 5346db: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5346e0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5346e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5346e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5346e4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5346e9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5346e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5346ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5346ee: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5346f3: push 0x30e */
  { uint32_t v = 0x30eu; esp -= 4; W32(esp, v); }
/* 5346f8: push 0x5a8e80 */
  { uint32_t v = 0x5a8e80u; esp -= 4; W32(esp, v); }
/* 5346fd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534702u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534702: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534706: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53470bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53470b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53470e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534710: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534715: push 0x30f */
  { uint32_t v = 0x30fu; esp -= 4; W32(esp, v); }
/* 53471a: push 0x5a8e94 */
  { uint32_t v = 0x5a8e94u; esp -= 4; W32(esp, v); }
/* 53471f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534724u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534724: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534728: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53472du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53472d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534730: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534732: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534737: push 0x310 */
  { uint32_t v = 0x310u; esp -= 4; W32(esp, v); }
/* 53473c: push 0x5a8eac */
  { uint32_t v = 0x5a8eacu; esp -= 4; W32(esp, v); }
/* 534741: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534746u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534746: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53474a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53474fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53474f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534752: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534754: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534759: push 0x311 */
  { uint32_t v = 0x311u; esp -= 4; W32(esp, v); }
/* 53475e: push 0x5a8ebc */
  { uint32_t v = 0x5a8ebcu; esp -= 4; W32(esp, v); }
/* 534763: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534768u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534768: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53476b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53476c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534771u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534771: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534776: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53477b: push 0x312 */
  { uint32_t v = 0x312u; esp -= 4; W32(esp, v); }
/* 534780: push 0x5a8ed8 */
  { uint32_t v = 0x5a8ed8u; esp -= 4; W32(esp, v); }
/* 534785: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53478au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53478a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53478d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53478e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534793u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534793: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534796: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534798: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53479d: push 0x313 */
  { uint32_t v = 0x313u; esp -= 4; W32(esp, v); }
/* 5347a2: push 0x5a8ef4 */
  { uint32_t v = 0x5a8ef4u; esp -= 4; W32(esp, v); }
/* 5347a7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5347acu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5347ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5347b0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5347b5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5347b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5347ba: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5347bf: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 5347c4: push 0x5a8f08 */
  { uint32_t v = 0x5a8f08u; esp -= 4; W32(esp, v); }
/* 5347c9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5347ceu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5347ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5347d2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5347d7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5347d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5347dc: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5347e1: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 5347e6: push 0x5a8f14 */
  { uint32_t v = 0x5a8f14u; esp -= 4; W32(esp, v); }
/* 5347eb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5347f0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5347f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5347f4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5347f9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5347f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5347fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5347fe: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534803: push 0x316 */
  { uint32_t v = 0x316u; esp -= 4; W32(esp, v); }
/* 534808: push 0x5a8f20 */
  { uint32_t v = 0x5a8f20u; esp -= 4; W32(esp, v); }
/* 53480d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534812u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534812: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534816: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53481bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53481b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53481e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534820: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534825: push 0x317 */
  { uint32_t v = 0x317u; esp -= 4; W32(esp, v); }
/* 53482a: push 0x5a8f30 */
  { uint32_t v = 0x5a8f30u; esp -= 4; W32(esp, v); }
/* 53482f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534834u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534834: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534838: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53483du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53483d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534840: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534842: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534847: push 0x318 */
  { uint32_t v = 0x318u; esp -= 4; W32(esp, v); }
/* 53484c: push 0x5a8f48 */
  { uint32_t v = 0x5a8f48u; esp -= 4; W32(esp, v); }
/* 534851: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534856u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534856: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53485a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53485fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53485f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534864: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534869: push 0x319 */
  { uint32_t v = 0x319u; esp -= 4; W32(esp, v); }
/* 53486e: push 0x5a8f64 */
  { uint32_t v = 0x5a8f64u; esp -= 4; W32(esp, v); }
/* 534873: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534878u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534878: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53487b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53487c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534881u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534881: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534884: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534886: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53488b: push 0x31a */
  { uint32_t v = 0x31au; esp -= 4; W32(esp, v); }
/* 534890: push 0x5a8f78 */
  { uint32_t v = 0x5a8f78u; esp -= 4; W32(esp, v); }
/* 534895: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53489au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53489a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53489d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53489e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5348a3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5348a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5348a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5348a8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5348ad: push 0x320 */
  { uint32_t v = 0x320u; esp -= 4; W32(esp, v); }
/* 5348b2: push 0x5a8f90 */
  { uint32_t v = 0x5a8f90u; esp -= 4; W32(esp, v); }
/* 5348b7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5348bcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5348bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5348bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5348c0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5348c5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5348c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5348c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5348ca: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5348cf: push 0x321 */
  { uint32_t v = 0x321u; esp -= 4; W32(esp, v); }
/* 5348d4: push 0x5a8f9c */
  { uint32_t v = 0x5a8f9cu; esp -= 4; W32(esp, v); }
/* 5348d9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5348deu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5348de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5348e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5348e2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5348e7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5348e7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5348ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5348ec: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5348f1: push 0x322 */
  { uint32_t v = 0x322u; esp -= 4; W32(esp, v); }
/* 5348f6: push 0x5a8fa8 */
  { uint32_t v = 0x5a8fa8u; esp -= 4; W32(esp, v); }
/* 5348fb: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534900u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534900: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534904: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534909u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534909: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53490c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53490e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534913: push 0x323 */
  { uint32_t v = 0x323u; esp -= 4; W32(esp, v); }
/* 534918: push 0x5a8fb0 */
  { uint32_t v = 0x5a8fb0u; esp -= 4; W32(esp, v); }
/* 53491d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534922u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534922: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534926: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53492bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53492b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53492e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534930: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534935: push 0x324 */
  { uint32_t v = 0x324u; esp -= 4; W32(esp, v); }
/* 53493a: push 0x5a8fbc */
  { uint32_t v = 0x5a8fbcu; esp -= 4; W32(esp, v); }
/* 53493f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534944u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534944: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534948: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53494du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53494d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534950: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534952: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534957: push 0x325 */
  { uint32_t v = 0x325u; esp -= 4; W32(esp, v); }
/* 53495c: push 0x5a8fc8 */
  { uint32_t v = 0x5a8fc8u; esp -= 4; W32(esp, v); }
/* 534961: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534966u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534966: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53496a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53496fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53496f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534972: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534974: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534979: push 0x326 */
  { uint32_t v = 0x326u; esp -= 4; W32(esp, v); }
/* 53497e: push 0x5a8fd4 */
  { uint32_t v = 0x5a8fd4u; esp -= 4; W32(esp, v); }
/* 534983: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534988u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534988: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53498b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53498c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534991u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534991: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534994: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534996: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53499b: push 0x327 */
  { uint32_t v = 0x327u; esp -= 4; W32(esp, v); }
/* 5349a0: push 0x5a8fe4 */
  { uint32_t v = 0x5a8fe4u; esp -= 4; W32(esp, v); }
/* 5349a5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5349aau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5349aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5349ae: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5349b3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5349b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5349b8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5349bd: push 0x328 */
  { uint32_t v = 0x328u; esp -= 4; W32(esp, v); }
/* 5349c2: push 0x5a8ff4 */
  { uint32_t v = 0x5a8ff4u; esp -= 4; W32(esp, v); }
/* 5349c7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5349ccu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5349cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5349d0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5349d5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5349d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5349da: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5349df: push 0x334 */
  { uint32_t v = 0x334u; esp -= 4; W32(esp, v); }
/* 5349e4: push 0x5a9010 */
  { uint32_t v = 0x5a9010u; esp -= 4; W32(esp, v); }
/* 5349e9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5349eeu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5349ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5349f2: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5349f7u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5349f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5349fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5349fc: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534a01: push 0x335 */
  { uint32_t v = 0x335u; esp -= 4; W32(esp, v); }
/* 534a06: push 0x5a9020 */
  { uint32_t v = 0x5a9020u; esp -= 4; W32(esp, v); }
/* 534a0b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534a10u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534a10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534a14: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534a19u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534a19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534a1e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534a23: push 0x336 */
  { uint32_t v = 0x336u; esp -= 4; W32(esp, v); }
/* 534a28: push 0x5a9034 */
  { uint32_t v = 0x5a9034u; esp -= 4; W32(esp, v); }
/* 534a2d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534a32u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534a32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534a36: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534a3bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534a3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534a40: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534a45: push 0x337 */
  { uint32_t v = 0x337u; esp -= 4; W32(esp, v); }
/* 534a4a: push 0x5a9040 */
  { uint32_t v = 0x5a9040u; esp -= 4; W32(esp, v); }
/* 534a4f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534a54u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534a54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534a58: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534a5du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534a5d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534a62: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534a67: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* 534a6c: push 0x5a9050 */
  { uint32_t v = 0x5a9050u; esp -= 4; W32(esp, v); }
/* 534a71: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534a76u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534a76: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534a7a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534a7fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534a7f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534a84: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534a89: push 0x339 */
  { uint32_t v = 0x339u; esp -= 4; W32(esp, v); }
/* 534a8e: push 0x5a906c */
  { uint32_t v = 0x5a906cu; esp -= 4; W32(esp, v); }
/* 534a93: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534a98u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534a98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534a9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534a9c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534aa1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534aa1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534aa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534aa6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534aab: push 0x33a */
  { uint32_t v = 0x33au; esp -= 4; W32(esp, v); }
/* 534ab0: push 0x5a907c */
  { uint32_t v = 0x5a907cu; esp -= 4; W32(esp, v); }
/* 534ab5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534abau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534aba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534abe: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ac3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ac3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ac6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ac8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534acd: push 0x33b */
  { uint32_t v = 0x33bu; esp -= 4; W32(esp, v); }
/* 534ad2: push 0x5a9088 */
  { uint32_t v = 0x5a9088u; esp -= 4; W32(esp, v); }
/* 534ad7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534adcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534adc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534ae0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ae5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ae5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534aea: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534aef: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 534af4: push 0x5a90a0 */
  { uint32_t v = 0x5a90a0u; esp -= 4; W32(esp, v); }
/* 534af9: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534afeu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534afe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534b02: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534b07u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534b07: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534b0c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534b11: push 0x33d */
  { uint32_t v = 0x33du; esp -= 4; W32(esp, v); }
/* 534b16: push 0x5a90b8 */
  { uint32_t v = 0x5a90b8u; esp -= 4; W32(esp, v); }
/* 534b1b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534b20u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534b20: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534b24: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534b29u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534b29: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534b2e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534b33: push 0x33e */
  { uint32_t v = 0x33eu; esp -= 4; W32(esp, v); }
/* 534b38: push 0x5a90d4 */
  { uint32_t v = 0x5a90d4u; esp -= 4; W32(esp, v); }
/* 534b3d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534b42u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534b42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534b46: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534b4bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534b4b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534b50: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534b55: push 0x33f */
  { uint32_t v = 0x33fu; esp -= 4; W32(esp, v); }
/* 534b5a: push 0x5a90ec */
  { uint32_t v = 0x5a90ecu; esp -= 4; W32(esp, v); }
/* 534b5f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534b64u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534b64: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534b68: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534b6du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534b6d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534b72: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534b77: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 534b7c: push 0x5a9104 */
  { uint32_t v = 0x5a9104u; esp -= 4; W32(esp, v); }
/* 534b81: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534b86u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534b86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534b8a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534b8fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534b8f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534b92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534b94: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534b99: push 0x341 */
  { uint32_t v = 0x341u; esp -= 4; W32(esp, v); }
/* 534b9e: push 0x5a9110 */
  { uint32_t v = 0x5a9110u; esp -= 4; W32(esp, v); }
/* 534ba3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534ba8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534ba8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534bac: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534bb1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534bb1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534bb6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534bbb: push 0x342 */
  { uint32_t v = 0x342u; esp -= 4; W32(esp, v); }
/* 534bc0: push 0x5a9134 */
  { uint32_t v = 0x5a9134u; esp -= 4; W32(esp, v); }
/* 534bc5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534bcau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534bca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534bce: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534bd3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534bd3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534bd8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534bdd: push 0x343 */
  { uint32_t v = 0x343u; esp -= 4; W32(esp, v); }
/* 534be2: push 0x5a914c */
  { uint32_t v = 0x5a914cu; esp -= 4; W32(esp, v); }
/* 534be7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534becu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534bec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534bf0: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534bf5u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534bf5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534bf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534bfa: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534bff: push 0x344 */
  { uint32_t v = 0x344u; esp -= 4; W32(esp, v); }
/* 534c04: push 0x5a9160 */
  { uint32_t v = 0x5a9160u; esp -= 4; W32(esp, v); }
/* 534c09: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534c0eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534c0e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534c12: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534c17u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534c17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534c1c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534c21: push 0x345 */
  { uint32_t v = 0x345u; esp -= 4; W32(esp, v); }
/* 534c26: push 0x5a9178 */
  { uint32_t v = 0x5a9178u; esp -= 4; W32(esp, v); }
/* 534c2b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534c30u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534c34: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534c39u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534c39: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534c3e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534c43: push 0x346 */
  { uint32_t v = 0x346u; esp -= 4; W32(esp, v); }
/* 534c48: push 0x5a9198 */
  { uint32_t v = 0x5a9198u; esp -= 4; W32(esp, v); }
/* 534c4d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534c52u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534c52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534c56: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534c5bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534c5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534c60: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534c65: push 0x347 */
  { uint32_t v = 0x347u; esp -= 4; W32(esp, v); }
/* 534c6a: push 0x5a91a8 */
  { uint32_t v = 0x5a91a8u; esp -= 4; W32(esp, v); }
/* 534c6f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534c74u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534c74: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534c78: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534c7du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534c7d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534c82: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534c87: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 534c8c: push 0x5a91b8 */
  { uint32_t v = 0x5a91b8u; esp -= 4; W32(esp, v); }
/* 534c91: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534c96u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534c96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534c99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534c9a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534c9fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534c9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ca2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ca4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ca9: push 0x12c */
  { uint32_t v = 0x12cu; esp -= 4; W32(esp, v); }
/* 534cae: push 0x5a91c8 */
  { uint32_t v = 0x5a91c8u; esp -= 4; W32(esp, v); }
/* 534cb3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534cb8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534cb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534cbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534cbc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534cc1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534cc1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534cc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534cc6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ccb: push 0x12d */
  { uint32_t v = 0x12du; esp -= 4; W32(esp, v); }
/* 534cd0: push 0x5a91d8 */
  { uint32_t v = 0x5a91d8u; esp -= 4; W32(esp, v); }
/* 534cd5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534cdau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534cda: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534cde: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ce3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ce3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ce6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ce8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ced: push 0x12e */
  { uint32_t v = 0x12eu; esp -= 4; W32(esp, v); }
/* 534cf2: push 0x5a91ec */
  { uint32_t v = 0x5a91ecu; esp -= 4; W32(esp, v); }
/* 534cf7: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534cfcu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534cfc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534d00: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534d05u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534d05: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534d0a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534d0f: push 0x12f */
  { uint32_t v = 0x12fu; esp -= 4; W32(esp, v); }
/* 534d14: push 0x5a9204 */
  { uint32_t v = 0x5a9204u; esp -= 4; W32(esp, v); }
/* 534d19: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534d1eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534d1e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534d22: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534d27u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534d27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534d2c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534d31: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 534d36: push 0x5a9218 */
  { uint32_t v = 0x5a9218u; esp -= 4; W32(esp, v); }
/* 534d3b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534d40u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534d40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534d44: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534d49u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534d49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534d4e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534d53: push 0x131 */
  { uint32_t v = 0x131u; esp -= 4; W32(esp, v); }
/* 534d58: push 0x5a9228 */
  { uint32_t v = 0x5a9228u; esp -= 4; W32(esp, v); }
/* 534d5d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534d62u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534d62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534d66: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534d6bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534d6b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534d70: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534d75: push 0x132 */
  { uint32_t v = 0x132u; esp -= 4; W32(esp, v); }
/* 534d7a: push 0x5a9238 */
  { uint32_t v = 0x5a9238u; esp -= 4; W32(esp, v); }
/* 534d7f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534d84u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534d84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534d88: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534d8du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534d8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534d90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534d92: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534d97: push 0x133 */
  { uint32_t v = 0x133u; esp -= 4; W32(esp, v); }
/* 534d9c: push 0x5a9248 */
  { uint32_t v = 0x5a9248u; esp -= 4; W32(esp, v); }
/* 534da1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534da6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534da6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534daa: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534dafu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534daf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534db2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534db4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534db9: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 534dbe: push 0x5a925c */
  { uint32_t v = 0x5a925cu; esp -= 4; W32(esp, v); }
/* 534dc3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534dc8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534dc8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534dcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534dcc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534dd1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534dd1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534dd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534dd6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ddb: push 0x135 */
  { uint32_t v = 0x135u; esp -= 4; W32(esp, v); }
/* 534de0: push 0x5a9268 */
  { uint32_t v = 0x5a9268u; esp -= 4; W32(esp, v); }
/* 534de5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534deau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534dea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534dee: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534df3u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534df3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534df8: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534dfd: push 0x136 */
  { uint32_t v = 0x136u; esp -= 4; W32(esp, v); }
/* 534e02: push 0x5a9278 */
  { uint32_t v = 0x5a9278u; esp -= 4; W32(esp, v); }
/* 534e07: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534e0cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534e0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534e10: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534e15u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534e15: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534e1a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534e1f: push 0x137 */
  { uint32_t v = 0x137u; esp -= 4; W32(esp, v); }
/* 534e24: push 0x5a9288 */
  { uint32_t v = 0x5a9288u; esp -= 4; W32(esp, v); }
/* 534e29: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534e2eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534e2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534e32: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534e37u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534e37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534e3c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534e41: push 0x138 */
  { uint32_t v = 0x138u; esp -= 4; W32(esp, v); }
/* 534e46: push 0x5a9298 */
  { uint32_t v = 0x5a9298u; esp -= 4; W32(esp, v); }
/* 534e4b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534e50u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534e50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534e54: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534e59u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534e59: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534e5e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534e63: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 534e68: push 0x5a92c0 */
  { uint32_t v = 0x5a92c0u; esp -= 4; W32(esp, v); }
/* 534e6d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534e72u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534e72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534e76: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534e7bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534e7b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534e80: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534e85: push 0x13a */
  { uint32_t v = 0x13au; esp -= 4; W32(esp, v); }
/* 534e8a: push 0x5a92cc */
  { uint32_t v = 0x5a92ccu; esp -= 4; W32(esp, v); }
/* 534e8f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534e94u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534e94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534e98: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534e9du); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534e9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ea2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ea7: push 0x13b */
  { uint32_t v = 0x13bu; esp -= 4; W32(esp, v); }
/* 534eac: push 0x5a92dc */
  { uint32_t v = 0x5a92dcu; esp -= 4; W32(esp, v); }
/* 534eb1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534eb6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534eb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534eb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534eba: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ebfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ebf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ec4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ec9: push 0x13c */
  { uint32_t v = 0x13cu; esp -= 4; W32(esp, v); }
/* 534ece: push 0x5a92e8 */
  { uint32_t v = 0x5a92e8u; esp -= 4; W32(esp, v); }
/* 534ed3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534ed8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534ed8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534edc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ee1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ee1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ee6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534eeb: push 0x13d */
  { uint32_t v = 0x13du; esp -= 4; W32(esp, v); }
/* 534ef0: push 0x5a9300 */
  { uint32_t v = 0x5a9300u; esp -= 4; W32(esp, v); }
/* 534ef5: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534efau); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534efa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534efe: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534f03u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534f03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534f08: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534f0d: push 0x13e */
  { uint32_t v = 0x13eu; esp -= 4; W32(esp, v); }
/* 534f12: push 0x5a9314 */
  { uint32_t v = 0x5a9314u; esp -= 4; W32(esp, v); }
/* 534f17: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534f1cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534f1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534f20: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534f25u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534f25: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534f2a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534f2f: push 0x13f */
  { uint32_t v = 0x13fu; esp -= 4; W32(esp, v); }
/* 534f34: push 0x5a932c */
  { uint32_t v = 0x5a932cu; esp -= 4; W32(esp, v); }
/* 534f39: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534f3eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534f3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534f42: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534f47u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534f47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534f4c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534f51: push 0x140 */
  { uint32_t v = 0x140u; esp -= 4; W32(esp, v); }
/* 534f56: push 0x5a933c */
  { uint32_t v = 0x5a933cu; esp -= 4; W32(esp, v); }
/* 534f5b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534f60u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534f60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534f64: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534f69u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534f69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534f6e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534f73: push 0x141 */
  { uint32_t v = 0x141u; esp -= 4; W32(esp, v); }
/* 534f78: push 0x5a934c */
  { uint32_t v = 0x5a934cu; esp -= 4; W32(esp, v); }
/* 534f7d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534f82u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534f82: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534f86: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534f8bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534f8b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534f8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534f90: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534f95: push 0x142 */
  { uint32_t v = 0x142u; esp -= 4; W32(esp, v); }
/* 534f9a: push 0x5a9368 */
  { uint32_t v = 0x5a9368u; esp -= 4; W32(esp, v); }
/* 534f9f: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534fa4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534fa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534fa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534fa8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534fadu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534fad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534fb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534fb2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534fb7: push 0x143 */
  { uint32_t v = 0x143u; esp -= 4; W32(esp, v); }
/* 534fbc: push 0x5a9384 */
  { uint32_t v = 0x5a9384u; esp -= 4; W32(esp, v); }
/* 534fc1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534fc6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534fc6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534fca: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534fcfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534fcf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534fd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534fd4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534fd9: push 0x144 */
  { uint32_t v = 0x144u; esp -= 4; W32(esp, v); }
/* 534fde: push 0x5a939c */
  { uint32_t v = 0x5a939cu; esp -= 4; W32(esp, v); }
/* 534fe3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x534fe8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 534fe8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534feb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 534fec: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x534ff1u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 534ff1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 534ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 534ff6: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 534ffb: push 0x145 */
  { uint32_t v = 0x145u; esp -= 4; W32(esp, v); }
/* 535000: push 0x5a93ac */
  { uint32_t v = 0x5a93acu; esp -= 4; W32(esp, v); }
/* 535005: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53500au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53500a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53500d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53500e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535013u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535013: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535016: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535018: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53501d: push 0x146 */
  { uint32_t v = 0x146u; esp -= 4; W32(esp, v); }
/* 535022: push 0x5a93c8 */
  { uint32_t v = 0x5a93c8u; esp -= 4; W32(esp, v); }
/* 535027: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53502cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53502c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53502f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535030: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535035u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535035: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53503a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53503f: push 0x147 */
  { uint32_t v = 0x147u; esp -= 4; W32(esp, v); }
/* 535044: push 0x5a93e8 */
  { uint32_t v = 0x5a93e8u; esp -= 4; W32(esp, v); }
/* 535049: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53504eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53504e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535052: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535057u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535057: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53505a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53505c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535061: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 535066: push 0x5a9404 */
  { uint32_t v = 0x5a9404u; esp -= 4; W32(esp, v); }
/* 53506b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535070u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535070: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535073: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535074: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535079u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535079: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53507c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53507e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535083: push 0x149 */
  { uint32_t v = 0x149u; esp -= 4; W32(esp, v); }
/* 535088: push 0x5a9420 */
  { uint32_t v = 0x5a9420u; esp -= 4; W32(esp, v); }
/* 53508d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535092u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535092: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535096: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53509bu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53509b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53509e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5350a0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5350a5: push 0x14a */
  { uint32_t v = 0x14au; esp -= 4; W32(esp, v); }
/* 5350aa: push 0x5a944c */
  { uint32_t v = 0x5a944cu; esp -= 4; W32(esp, v); }
/* 5350af: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5350b4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5350b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5350b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5350b8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5350bdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5350bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5350c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5350c2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5350c7: push 0x14b */
  { uint32_t v = 0x14bu; esp -= 4; W32(esp, v); }
/* 5350cc: push 0x5a9470 */
  { uint32_t v = 0x5a9470u; esp -= 4; W32(esp, v); }
/* 5350d1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5350d6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5350d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5350d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5350da: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5350dfu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5350df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5350e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5350e4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5350e9: push 0x14c */
  { uint32_t v = 0x14cu; esp -= 4; W32(esp, v); }
/* 5350ee: push 0x5a9484 */
  { uint32_t v = 0x5a9484u; esp -= 4; W32(esp, v); }
/* 5350f3: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5350f8u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5350f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5350fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5350fc: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535101u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535101: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535106: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53510b: push 0x14d */
  { uint32_t v = 0x14du; esp -= 4; W32(esp, v); }
/* 535110: push 0x5a94a8 */
  { uint32_t v = 0x5a94a8u; esp -= 4; W32(esp, v); }
/* 535115: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53511au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53511a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53511d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53511e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535123u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535123: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535128: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53512d: push 0x14e */
  { uint32_t v = 0x14eu; esp -= 4; W32(esp, v); }
/* 535132: push 0x5a94b8 */
  { uint32_t v = 0x5a94b8u; esp -= 4; W32(esp, v); }
/* 535137: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53513cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53513c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53513f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535140: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535145u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535145: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535148: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53514a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53514f: push 0x14f */
  { uint32_t v = 0x14fu; esp -= 4; W32(esp, v); }
/* 535154: push 0x5a94e4 */
  { uint32_t v = 0x5a94e4u; esp -= 4; W32(esp, v); }
/* 535159: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53515eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53515e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535162: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535167u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535167: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53516a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53516c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535171: push 0x167 */
  { uint32_t v = 0x167u; esp -= 4; W32(esp, v); }
/* 535176: push 0x5a9508 */
  { uint32_t v = 0x5a9508u; esp -= 4; W32(esp, v); }
/* 53517b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535180u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535180: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535183: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535184: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535189u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535189: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53518c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53518e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535193: push 0x168 */
  { uint32_t v = 0x168u; esp -= 4; W32(esp, v); }
/* 535198: push 0x5a952c */
  { uint32_t v = 0x5a952cu; esp -= 4; W32(esp, v); }
/* 53519d: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5351a2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5351a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5351a6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5351abu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5351ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5351b0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5351b5: push 0x169 */
  { uint32_t v = 0x169u; esp -= 4; W32(esp, v); }
/* 5351ba: push 0x5a9554 */
  { uint32_t v = 0x5a9554u; esp -= 4; W32(esp, v); }
/* 5351bf: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5351c4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5351c4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5351c8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5351cdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5351cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5351d2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5351d7: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 5351dc: push 0x5a957c */
  { uint32_t v = 0x5a957cu; esp -= 4; W32(esp, v); }
/* 5351e1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5351e6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5351e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5351ea: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5351efu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5351ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5351f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5351f4: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5351f9: push 0x151 */
  { uint32_t v = 0x151u; esp -= 4; W32(esp, v); }
/* 5351fe: push 0x5a9588 */
  { uint32_t v = 0x5a9588u; esp -= 4; W32(esp, v); }
/* 535203: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535208u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535208: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53520b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53520c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535211u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535211: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535214: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535216: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53521b: push 0x152 */
  { uint32_t v = 0x152u; esp -= 4; W32(esp, v); }
/* 535220: push 0x5a95a0 */
  { uint32_t v = 0x5a95a0u; esp -= 4; W32(esp, v); }
/* 535225: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53522au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53522a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53522d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53522e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535233u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535233: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535236: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535238: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53523d: push 0x153 */
  { uint32_t v = 0x153u; esp -= 4; W32(esp, v); }
/* 535242: push 0x5a95c0 */
  { uint32_t v = 0x5a95c0u; esp -= 4; W32(esp, v); }
/* 535247: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53524cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53524c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53524f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535250: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535255u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535255: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53525a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53525f: push 0x154 */
  { uint32_t v = 0x154u; esp -= 4; W32(esp, v); }
/* 535264: push 0x5a95f0 */
  { uint32_t v = 0x5a95f0u; esp -= 4; W32(esp, v); }
/* 535269: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53526eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53526e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535272: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535277u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535277: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53527a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53527c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535281: push 0x155 */
  { uint32_t v = 0x155u; esp -= 4; W32(esp, v); }
/* 535286: push 0x5a9604 */
  { uint32_t v = 0x5a9604u; esp -= 4; W32(esp, v); }
/* 53528b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535290u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535290: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535294: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535299u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535299: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53529c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53529e: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5352a3: push 0x156 */
  { uint32_t v = 0x156u; esp -= 4; W32(esp, v); }
/* 5352a8: push 0x5a9624 */
  { uint32_t v = 0x5a9624u; esp -= 4; W32(esp, v); }
/* 5352ad: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5352b2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5352b2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5352b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5352b6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5352bbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5352bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5352be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5352c0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5352c5: push 0x157 */
  { uint32_t v = 0x157u; esp -= 4; W32(esp, v); }
/* 5352ca: push 0x5a9638 */
  { uint32_t v = 0x5a9638u; esp -= 4; W32(esp, v); }
/* 5352cf: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5352d4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5352d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5352d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5352d8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5352ddu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5352dd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5352e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5352e2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5352e7: push 0x158 */
  { uint32_t v = 0x158u; esp -= 4; W32(esp, v); }
/* 5352ec: push 0x5a9658 */
  { uint32_t v = 0x5a9658u; esp -= 4; W32(esp, v); }
/* 5352f1: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5352f6u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5352f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5352f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5352fa: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5352ffu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5352ff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535302: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535304: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535309: push 0x159 */
  { uint32_t v = 0x159u; esp -= 4; W32(esp, v); }
/* 53530e: push 0x5a9670 */
  { uint32_t v = 0x5a9670u; esp -= 4; W32(esp, v); }
/* 535313: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535318u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535318: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53531b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53531c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535321u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535321: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535326: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53532b: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 535330: push 0x5a9684 */
  { uint32_t v = 0x5a9684u; esp -= 4; W32(esp, v); }
/* 535335: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53533au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53533a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53533d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53533e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535343u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535343: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535346: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535348: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53534d: push 0x15b */
  { uint32_t v = 0x15bu; esp -= 4; W32(esp, v); }
/* 535352: push 0x5a96a4 */
  { uint32_t v = 0x5a96a4u; esp -= 4; W32(esp, v); }
/* 535357: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53535cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53535c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53535f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535360: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535365u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535365: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535368: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53536a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53536f: push 0x15c */
  { uint32_t v = 0x15cu; esp -= 4; W32(esp, v); }
/* 535374: push 0x5a96c8 */
  { uint32_t v = 0x5a96c8u; esp -= 4; W32(esp, v); }
/* 535379: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53537eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53537e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535382: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535387u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535387: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53538a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53538c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535391: push 0x15d */
  { uint32_t v = 0x15du; esp -= 4; W32(esp, v); }
/* 535396: push 0x5a96e0 */
  { uint32_t v = 0x5a96e0u; esp -= 4; W32(esp, v); }
/* 53539b: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5353a0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5353a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5353a4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5353a9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5353a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5353ae: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5353b3: push 0x15e */
  { uint32_t v = 0x15eu; esp -= 4; W32(esp, v); }
/* 5353b8: push 0x5a9714 */
  { uint32_t v = 0x5a9714u; esp -= 4; W32(esp, v); }
/* 5353bd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5353c2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5353c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5353c6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5353cbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5353cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5353d0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5353d5: push 0x15f */
  { uint32_t v = 0x15fu; esp -= 4; W32(esp, v); }
/* 5353da: push 0x5a972c */
  { uint32_t v = 0x5a972cu; esp -= 4; W32(esp, v); }
/* 5353df: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5353e4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5353e4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5353e8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5353edu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5353ed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5353f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5353f2: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5353f7: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 5353fc: push 0x5a975c */
  { uint32_t v = 0x5a975cu; esp -= 4; W32(esp, v); }
/* 535401: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535406u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535406: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53540a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53540fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53540f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535412: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535414: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535419: push 0x161 */
  { uint32_t v = 0x161u; esp -= 4; W32(esp, v); }
/* 53541e: push 0x5a9778 */
  { uint32_t v = 0x5a9778u; esp -= 4; W32(esp, v); }
/* 535423: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535428u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535428: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53542b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53542c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535431u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535431: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535436: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53543b: push 0x162 */
  { uint32_t v = 0x162u; esp -= 4; W32(esp, v); }
/* 535440: push 0x5a9794 */
  { uint32_t v = 0x5a9794u; esp -= 4; W32(esp, v); }
/* 535445: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53544au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53544a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53544d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53544e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535453u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535453: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535458: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53545d: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 535462: push 0x5a97b4 */
  { uint32_t v = 0x5a97b4u; esp -= 4; W32(esp, v); }
/* 535467: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53546cu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53546c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53546f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535470: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535475u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535475: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53547a: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53547f: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 535484: push 0x5a97d0 */
  { uint32_t v = 0x5a97d0u; esp -= 4; W32(esp, v); }
/* 535489: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53548eu); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53548e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535492: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535497u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535497: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53549a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53549c: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5354a1: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 5354a6: push 0x5a97e4 */
  { uint32_t v = 0x5a97e4u; esp -= 4; W32(esp, v); }
/* 5354ab: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5354b0u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5354b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5354b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5354b4: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5354b9u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5354b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5354bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5354be: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5354c3: push 0x166 */
  { uint32_t v = 0x166u; esp -= 4; W32(esp, v); }
/* 5354c8: push 0x5a9800 */
  { uint32_t v = 0x5a9800u; esp -= 4; W32(esp, v); }
/* 5354cd: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5354d2u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5354d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5354d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5354d6: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5354dbu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5354db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5354de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5354e0: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 5354e5: push 0x16a */
  { uint32_t v = 0x16au; esp -= 4; W32(esp, v); }
/* 5354ea: push 0x5a9810 */
  { uint32_t v = 0x5a9810u; esp -= 4; W32(esp, v); }
/* 5354ef: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x5354f4u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 5354f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5354f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5354f8: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x5354fdu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 5354fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535500: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535502: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535507: push 0x16b */
  { uint32_t v = 0x16bu; esp -= 4; W32(esp, v); }
/* 53550c: push 0x5a9830 */
  { uint32_t v = 0x5a9830u; esp -= 4; W32(esp, v); }
/* 535511: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535516u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535516: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53551a: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x53551fu); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 53551f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535522: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535524: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 535529: push 0x16c */
  { uint32_t v = 0x16cu; esp -= 4; W32(esp, v); }
/* 53552e: push 0x5a9838 */
  { uint32_t v = 0x5a9838u; esp -= 4; W32(esp, v); }
/* 535533: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x535538u); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 535538: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53553b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53553c: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535541u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535541: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535544: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535546: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53554b: push 0x16d */
  { uint32_t v = 0x16du; esp -= 4; W32(esp, v); }
/* 535550: push 0x5a9854 */
  { uint32_t v = 0x5a9854u; esp -= 4; W32(esp, v); }
/* 535555: call 0x4e1d7a */
  esp -= 4; W32(esp, 0x53555au); SPILL(); f_4e1d7a(); if (g_unwind) return; RELOAD();
/* 53555a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53555d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53555e: call 0x4e1a46 */
  esp -= 4; W32(esp, 0x535563u); SPILL(); f_4e1a46(); if (g_unwind) return; RELOAD();
/* 535563: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535566: xor eax, eax */
  eax = 0;
L_535568: /* 535568: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 53556d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 535570: jae 0x5355c4 */
  if (!cf) goto L_5355c4;
L_535572: /* 535572: mov ebx, dword ptr [eax*4 + 0x696748] */
  ebx = R32((uint32_t)(eax*4 + 0x696748u));
/* 535579: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_535580: /* 535580: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 535582: je 0x5355be */
  if (zf) goto L_5355be;
L_535584: /* 535584: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_535587: /* 535587: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 535589: je 0x5355b9 */
  if (zf) goto L_5355b9;
L_53558b: /* 53558b: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 53558e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53558f: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 535592: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 535593: call 0x4e26df */
  esp -= 4; W32(esp, 0x535598u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 535598: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53559b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53559d: jne 0x5355b4 */
  if (!zf) goto L_5355b4;
L_53559f: /* 53559f: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5355a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5355a6: push 0x5a986c */
  { uint32_t v = 0x5a986cu; esp -= 4; W32(esp, v); }
/* 5355ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5355ac: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5355b1u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5355b1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5355b4: /* 5355b4: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 5355b7: jmp 0x535587 */
  goto L_535587;
L_5355b9: /* 5355b9: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 5355bc: jmp 0x535580 */
  goto L_535580;
L_5355be: /* 5355be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5355c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5355c2: jmp 0x535568 */
  goto L_535568;
L_5355c4: /* 5355c4: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 5355ca: push 0x5a98a0 */
  { uint32_t v = 0x5a98a0u; esp -= 4; W32(esp, v); }
/* 5355cf: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 5355d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5355d5: call 0x4e30df */
  esp -= 4; W32(esp, 0x5355dau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5355da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5355dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5355e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5355e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5355e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5355e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5355ea: mov esp, ebp */
  esp = ebp;
/* 5355ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5355ed: ret  */
  esp += 4; SPILL(); return;
}
