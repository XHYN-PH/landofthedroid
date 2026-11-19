#include "recomp.h"
#include "rec_mod.h"

void f_4771bc(void) {
  LOAD_REGS();
L_4771bc: /* 4771bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4771bf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4771c1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4771c4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4771c6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4771c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4771cb: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4771ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4771cf: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4771d4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4771d4: mov eax, 0x4771da */
  eax = 0x4771dau;
/* 4771d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4771da(void) {
  LOAD_REGS();
L_4771da: /* 4771da: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4771dd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4771df: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4771e2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4771e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4771e8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4771eb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4771ed: call 0x461453 */
  esp -= 4; W32(esp, 0x4771f2u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4771dau: guest_unwind_done(); RELOAD(); goto L_4771da; } return; } RELOAD();
/* 4771f2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4771f6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4771f9: call 0x46228e */
  esp -= 4; W32(esp, 0x4771feu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4771dau: guest_unwind_done(); RELOAD(); goto L_4771da; } return; } RELOAD();
/* 4771fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477201: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477202: mov eax, esi */
  eax = esi;
/* 477204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477205: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47720c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47720d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47720e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477211(void) {
  LOAD_REGS();
L_477211: /* 477211: mov eax, 0x48cd86 */
  eax = 0x48cd86u;
/* 477216: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47721bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47721b: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47721e: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 477222: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477225: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 477228: mov esi, ecx */
  esi = ecx;
/* 47722a: xor edi, edi */
  edi = 0;
/* 47722c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47722d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47722e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 477231: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 477234: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 477237: call 0x466d91 */
  esp -= 4; W32(esp, 0x47723cu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47723c: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477240: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477243: je 0x47729d */
  if (zf) goto L_47729d;
L_477245: /* 477245: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477248: je 0x47729d */
  if (zf) goto L_47729d;
L_47724a: /* 47724a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47724c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47724f: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 477253: xor ebx, ebx */
  ebx = 0;
/* 477255: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 477256: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 477259: call 0x4657fc */
  esp -= 4; W32(esp, 0x47725eu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_47725e: /* 47725e: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477262: jne 0x477268 */
  if (!zf) goto L_477268;
L_477264: /* 477264: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 477266: jmp 0x47729d */
  goto L_47729d;
L_477268: /* 477268: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47726b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47726c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 477270: call 0x4619f2 */
  esp -= 4; W32(esp, 0x477275u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 477275: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477279: je 0x47729d */
  if (zf) goto L_47729d;
L_47727b: /* 47727b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47727d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477280: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 477284: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477287: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 47728a: call 0x465c69 */
  esp -= 4; W32(esp, 0x47728fu); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 47728f: jmp 0x47725e */
  goto L_47725e;
L_47729d: /* 47729d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4772a1: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4772a5: jne 0x4772aa */
  if (!zf) goto L_4772aa;
L_4772a7: /* 4772a7: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_4772aa: /* 4772aa: mov eax, edi */
  eax = edi;
/* 4772ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4772ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4772af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4772b1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4772b4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4772b6: call 0x461453 */
  esp -= 4; W32(esp, 0x4772bbu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4772bb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4772bf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4772c2: call 0x46228e */
  esp -= 4; W32(esp, 0x4772c7u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4772c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4772ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4772cb: mov eax, esi */
  eax = esi;
/* 4772cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4772ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4772d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4772d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4772d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477291(void) {
  LOAD_REGS();
L_477291: /* 477291: mov eax, 0x477297 */
  eax = 0x477297u;
/* 477296: ret  */
  esp += 4; SPILL(); return;
}

void f_477297(void) {
  LOAD_REGS();
L_477297: /* 477297: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47729a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47729d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4772a1: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4772a5: jne 0x4772aa */
  if (!zf) goto L_4772aa;
L_4772a7: /* 4772a7: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_4772aa: /* 4772aa: mov eax, edi */
  eax = edi;
/* 4772ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4772ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4772af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4772b1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4772b4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4772b6: call 0x461453 */
  esp -= 4; W32(esp, 0x4772bbu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477297u: guest_unwind_done(); RELOAD(); goto L_477297; } return; } RELOAD();
/* 4772bb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4772bf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4772c2: call 0x46228e */
  esp -= 4; W32(esp, 0x4772c7u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477297u: guest_unwind_done(); RELOAD(); goto L_477297; } return; } RELOAD();
/* 4772c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4772ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4772cb: mov eax, esi */
  eax = esi;
/* 4772cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4772ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4772d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4772d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4772d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4772da(void) {
  LOAD_REGS();
L_4772da: /* 4772da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4772dd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4772df: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4772e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4772e4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4772e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4772e9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4772ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4772ed: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4772f2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4772f2: mov eax, 0x477297 */
  eax = 0x477297u;
/* 4772f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4772f8(void) {
  LOAD_REGS();
L_4772f8: /* 4772f8: mov eax, 0x48cd98 */
  eax = 0x48cd98u;
/* 4772fd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477302u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477302: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 477305: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477308: mov esi, ecx */
  esi = ecx;
/* 47730a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47730d: xor ebx, ebx */
  ebx = 0;
/* 47730f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477312: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 477315: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477318: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 47731b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47731e: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 477321: call 0x466d91 */
  esp -= 4; W32(esp, 0x477326u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477326: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477329: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47732c: jne 0x477335 */
  if (!zf) goto L_477335;
L_47732e: /* 47732e: mov edi, 0xffff */
  edi = 0xffffu;
/* 477333: jmp 0x477383 */
  goto L_477383;
L_477335: /* 477335: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477337: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47733a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47733e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 477342: call 0x46584a */
  esp -= 4; W32(esp, 0x477347u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 477347: mov edi, eax */
  edi = eax;
/* 477349: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47734d: jne 0x477358 */
  if (!zf) goto L_477358;
L_47734f: /* 47734f: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 477356: jmp 0x477383 */
  goto L_477383;
L_477358: /* 477358: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 47735b: jmp 0x477383 */
  goto L_477383;
L_477383: /* 477383: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477385: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477388: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477389: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47738c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47738e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477391: call 0x461453 */
  esp -= 4; W32(esp, 0x477396u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477396: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47739a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 47739d: call 0x46228e */
  esp -= 4; W32(esp, 0x4773a2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4773a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4773a5: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4773a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4773a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4773aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4773b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4773b2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4773b3: ret  */
  esp += 4; SPILL(); return;
}

void f_47735d(void) {
  LOAD_REGS();
L_47735d: /* 47735d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 477360: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477362: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 477365: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477367: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47736a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47736c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47736f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477370: call 0x464bb2 */
  esp -= 4; W32(esp, 0x477375u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 477375: mov eax, 0x47737b */
  eax = 0x47737bu;
/* 47737a: ret  */
  esp += 4; SPILL(); return;
}

void f_47737b(void) {
  LOAD_REGS();
L_47737b: /* 47737b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47737e: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 477381: xor ebx, ebx */
  ebx = 0;
/* 477383: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477385: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477388: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477389: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47738c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47738e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477391: call 0x461453 */
  esp -= 4; W32(esp, 0x477396u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47737bu: guest_unwind_done(); RELOAD(); goto L_47737b; } return; } RELOAD();
/* 477396: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47739a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 47739d: call 0x46228e */
  esp -= 4; W32(esp, 0x4773a2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47737bu: guest_unwind_done(); RELOAD(); goto L_47737b; } return; } RELOAD();
/* 4773a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4773a5: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4773a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4773a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4773aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4773b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4773b2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4773b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4773b4(void) {
  LOAD_REGS();
L_4773b4: /* 4773b4: mov eax, 0x48cdaa */
  eax = 0x48cdaau;
/* 4773b9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4773beu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4773be: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4773c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4773c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4773c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4773c4: mov esi, ecx */
  esi = ecx;
/* 4773c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4773c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4773cb: xor ebx, ebx */
  ebx = 0;
/* 4773cd: xor edi, edi */
  edi = 0;
/* 4773cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4773d0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4773d3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4773d6: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 4773d9: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4773dc: call 0x466d91 */
  esp -= 4; W32(esp, 0x4773e1u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4773e1: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4773e4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4773e7: je 0x47745c */
  if (zf) goto L_47745c;
L_4773e9: /* 4773e9: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4773ec: jle 0x47745c */
  if ((zf || sf != of)) goto L_47745c;
L_4773ee: /* 4773ee: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4773f0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4773f3: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4773f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4773fb: call 0x4657fc */
  esp -= 4; W32(esp, 0x477400u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_477400: /* 477400: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 477403: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 477406: jle 0x47745c */
  if ((zf || sf != of)) goto L_47745c;
L_477408: /* 477408: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47740c: jne 0x477413 */
  if (!zf) goto L_477413;
L_47740e: /* 47740e: or edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 477411: jmp 0x47745c */
  goto L_47745c;
L_477413: /* 477413: cmp ax, word ptr [ebp + 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477417: je 0x47745c */
  if (zf) goto L_47745c;
L_477419: /* 477419: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47741c: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 477420: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 477423: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 477426: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477428: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47742b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47742f: call 0x465c69 */
  esp -= 4; W32(esp, 0x477434u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 477434: jmp 0x477400 */
  goto L_477400;
L_47745c: /* 47745c: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47745f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477462: jne 0x477467 */
  if (!zf) goto L_477467;
L_477464: /* 477464: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_477467: /* 477467: mov eax, edi */
  eax = edi;
/* 477469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47746a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47746b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47746d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477470: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477472: call 0x461453 */
  esp -= 4; W32(esp, 0x477477u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477477: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47747a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47747e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477481: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 477484: call 0x46228e */
  esp -= 4; W32(esp, 0x477489u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477489: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47748c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47748d: mov eax, esi */
  eax = esi;
/* 47748f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477490: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477497: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477498: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477499: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_477436(void) {
  LOAD_REGS();
L_477436: /* 477436: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 477439: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47743b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47743e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477440: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 477443: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477445: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477448: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477449: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47744eu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47744e: mov eax, 0x477454 */
  eax = 0x477454u;
/* 477453: ret  */
  esp += 4; SPILL(); return;
}

void f_477454(void) {
  LOAD_REGS();
L_477454: /* 477454: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 477457: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47745a: xor ebx, ebx */
  ebx = 0;
/* 47745c: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47745f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477462: jne 0x477467 */
  if (!zf) goto L_477467;
L_477464: /* 477464: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_477467: /* 477467: mov eax, edi */
  eax = edi;
/* 477469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47746a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47746b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47746d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477470: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477472: call 0x461453 */
  esp -= 4; W32(esp, 0x477477u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477454u: guest_unwind_done(); RELOAD(); goto L_477454; } return; } RELOAD();
/* 477477: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47747a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47747e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477481: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 477484: call 0x46228e */
  esp -= 4; W32(esp, 0x477489u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477454u: guest_unwind_done(); RELOAD(); goto L_477454; } return; } RELOAD();
/* 477489: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47748c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47748d: mov eax, esi */
  eax = esi;
/* 47748f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477490: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477497: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477498: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477499: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47749c(void) {
  LOAD_REGS();
L_47749c: /* 47749c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47749d: mov esi, ecx */
  esi = ecx;
/* 47749f: call 0x4772f8 */
  esp -= 4; W32(esp, 0x4774a4u); SPILL(); f_4772f8(); if (g_unwind) return; RELOAD();
/* 4774a4: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4774a8: je 0x4774b1 */
  if (zf) goto L_4774b1;
L_4774aa: /* 4774aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4774ae: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
L_4774b1: /* 4774b1: mov eax, esi */
  eax = esi;
/* 4774b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4774b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4774b7(void) {
  LOAD_REGS();
L_4774b7: /* 4774b7: mov eax, 0x48cdbc */
  eax = 0x48cdbcu;
/* 4774bc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4774c1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4774c1: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4774c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4774c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4774c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4774c7: mov esi, ecx */
  esi = ecx;
/* 4774c9: xor ebx, ebx */
  ebx = 0;
/* 4774cb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4774ce: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4774cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4774d0: xor edi, edi */
  edi = 0;
/* 4774d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4774d3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4774d6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4774d9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 4774dc: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 4774df: call 0x466d91 */
  esp -= 4; W32(esp, 0x4774e4u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4774e4: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4774e8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4774eb: je 0x477541 */
  if (zf) goto L_477541;
L_4774ed: /* 4774ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4774ef: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4774f2: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4774f6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 4774f9: call 0x4657fc */
  esp -= 4; W32(esp, 0x4774feu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_4774fe: /* 4774fe: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477502: jne 0x477509 */
  if (!zf) goto L_477509;
L_477504: /* 477504: or dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 477507: jmp 0x477541 */
  goto L_477541;
L_477509: /* 477509: cmp ax, word ptr [ebp + 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47750d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 477511: je 0x477541 */
  if (zf) goto L_477541;
L_477513: /* 477513: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 477516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477517: call 0x4619f2 */
  esp -= 4; W32(esp, 0x47751cu); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 47751c: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477520: je 0x477541 */
  if (zf) goto L_477541;
L_477522: /* 477522: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 477525: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477527: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47752a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47752e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477531: call 0x465c69 */
  esp -= 4; W32(esp, 0x477536u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 477536: jmp 0x4774fe */
  goto L_4774fe;
L_477541: /* 477541: xor eax, eax */
  eax = 0;
/* 477543: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477546: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477549: jne 0x47754f */
  if (!zf) goto L_47754f;
L_47754b: /* 47754b: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_47754f: /* 47754f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477550: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477552: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477555: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 477558: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47755a: call 0x461453 */
  esp -= 4; W32(esp, 0x47755fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47755f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477563: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477566: call 0x46228e */
  esp -= 4; W32(esp, 0x47756bu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47756b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47756e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47756f: mov eax, esi */
  eax = esi;
/* 477571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477572: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477579: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47757a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47757b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477538(void) {
  LOAD_REGS();
L_477538: /* 477538: mov eax, 0x47753e */
  eax = 0x47753eu;
/* 47753d: ret  */
  esp += 4; SPILL(); return;
}

void f_47753e(void) {
  LOAD_REGS();
L_47753e: /* 47753e: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 477541: xor eax, eax */
  eax = 0;
/* 477543: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477546: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477549: jne 0x47754f */
  if (!zf) goto L_47754f;
L_47754b: /* 47754b: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_47754f: /* 47754f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477550: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477552: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477555: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 477558: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47755a: call 0x461453 */
  esp -= 4; W32(esp, 0x47755fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47753eu: guest_unwind_done(); RELOAD(); goto L_47753e; } return; } RELOAD();
/* 47755f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477563: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477566: call 0x46228e */
  esp -= 4; W32(esp, 0x47756bu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47753eu: guest_unwind_done(); RELOAD(); goto L_47753e; } return; } RELOAD();
/* 47756b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47756e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47756f: mov eax, esi */
  eax = esi;
/* 477571: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477572: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477579: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47757a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47757b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47757e(void) {
  LOAD_REGS();
L_47757e: /* 47757e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 477581: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477583: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 477586: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477588: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47758b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47758d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477591: call 0x464bb2 */
  esp -= 4; W32(esp, 0x477596u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 477596: mov eax, 0x47753e */
  eax = 0x47753eu;
/* 47759b: ret  */
  esp += 4; SPILL(); return;
}

void f_47759c(void) {
  LOAD_REGS();
L_47759c: /* 47759c: mov eax, 0x48cdce */
  eax = 0x48cdceu;
/* 4775a1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4775a6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4775a6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4775a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4775aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4775ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4775ac: mov esi, ecx */
  esi = ecx;
/* 4775ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4775b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4775b3: xor ebx, ebx */
  ebx = 0;
/* 4775b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4775b6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4775b9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4775bc: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4775bf: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4775c2: call 0x466d91 */
  esp -= 4; W32(esp, 0x4775c7u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4775c7: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4775ca: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4775cd: je 0x477663 */
  if (zf) goto L_477663;
L_4775d3: /* 4775d3: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4775d6: jle 0x477663 */
  if ((zf || sf != of)) goto L_477663;
L_4775dc: /* 4775dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4775de: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4775e1: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4775e5: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4775e8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4775ec: call 0x4657fc */
  esp -= 4; W32(esp, 0x4775f1u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_4775f1: /* 4775f1: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4775f5: jne 0x4775fc */
  if (!zf) goto L_4775fc;
L_4775f7: /* 4775f7: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 4775fa: jmp 0x477663 */
  goto L_477663;
L_4775fc: /* 4775fc: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4775ff: jne 0x477614 */
  if (!zf) goto L_477614;
L_477601: /* 477601: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 477604: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477606: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477609: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47760d: call 0x46584a */
  esp -= 4; W32(esp, 0x477612u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 477612: jmp 0x477663 */
  goto L_477663;
L_477614: /* 477614: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 477617: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47761b: jg 0x477622 */
  if ((!zf && sf == of)) goto L_477622;
L_47761d: /* 47761d: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 477620: jmp 0x477663 */
  goto L_477663;
L_477622: /* 477622: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 477625: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 477628: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 47762c: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 47762f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477631: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477634: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 477638: call 0x465c69 */
  esp -= 4; W32(esp, 0x47763du); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 47763d: jmp 0x4775f1 */
  goto L_4775f1;
L_477663: /* 477663: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477666: xor ecx, ecx */
  ecx = 0;
/* 477668: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 47766b: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47766e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 477671: jne 0x477676 */
  if (!zf) goto L_477676;
L_477673: /* 477673: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_477676: /* 477676: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477677: mov eax, ebx */
  eax = ebx;
/* 477679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47767a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47767c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47767f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477681: call 0x461453 */
  esp -= 4; W32(esp, 0x477686u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477686: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47768a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47768d: call 0x46228e */
  esp -= 4; W32(esp, 0x477692u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477692: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477695: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477696: mov eax, esi */
  eax = esi;
/* 477698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477699: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4776a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4776a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4776a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47763f(void) {
  LOAD_REGS();
L_47763f: /* 47763f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 477642: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477644: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 477647: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477649: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47764c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47764e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477652: call 0x464bb2 */
  esp -= 4; W32(esp, 0x477657u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 477657: mov eax, 0x47765d */
  eax = 0x47765du;
/* 47765c: ret  */
  esp += 4; SPILL(); return;
}

void f_47765d(void) {
  LOAD_REGS();
L_47765d: /* 47765d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 477660: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 477663: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477666: xor ecx, ecx */
  ecx = 0;
/* 477668: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 47766b: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47766e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 477671: jne 0x477676 */
  if (!zf) goto L_477676;
L_477673: /* 477673: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_477676: /* 477676: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477677: mov eax, ebx */
  eax = ebx;
/* 477679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47767a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47767c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47767f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477681: call 0x461453 */
  esp -= 4; W32(esp, 0x477686u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47765du: guest_unwind_done(); RELOAD(); goto L_47765d; } return; } RELOAD();
/* 477686: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47768a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47768d: call 0x46228e */
  esp -= 4; W32(esp, 0x477692u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47765du: guest_unwind_done(); RELOAD(); goto L_47765d; } return; } RELOAD();
/* 477692: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477695: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477696: mov eax, esi */
  eax = esi;
/* 477698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477699: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4776a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4776a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4776a2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4776a5(void) {
  LOAD_REGS();
L_4776a5: /* 4776a5: mov eax, 0x48cde0 */
  eax = 0x48cde0u;
/* 4776aa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4776afu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4776af: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4776b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4776b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4776b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4776b5: mov esi, ecx */
  esi = ecx;
/* 4776b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4776ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4776bc: xor ebx, ebx */
  ebx = 0;
/* 4776be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4776bf: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4776c2: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4776c5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4776c8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4776cb: call 0x466d91 */
  esp -= 4; W32(esp, 0x4776d0u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4776d0: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4776d3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4776d6: je 0x477737 */
  if (zf) goto L_477737;
L_4776d8: /* 4776d8: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4776db: jle 0x477737 */
  if ((zf || sf != of)) goto L_477737;
L_4776dd: /* 4776dd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_4776e1: /* 4776e1: cmp dword ptr [ebp + 8], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4776e8: je 0x4776ef */
  if (zf) goto L_4776ef;
L_4776ea: /* 4776ea: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4776ed: js 0x477737 */
  if (sf) goto L_477737;
L_4776ef: /* 4776ef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4776f1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4776f4: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4776f8: call 0x46584a */
  esp -= 4; W32(esp, 0x4776fdu); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 4776fd: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477701: jne 0x477709 */
  if (!zf) goto L_477709;
L_477703: /* 477703: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 477707: jmp 0x477737 */
  goto L_477737;
L_477709: /* 477709: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 47770c: cmp ax, word ptr [ebp + 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477710: jne 0x4776e1 */
  if (!zf) goto L_4776e1;
L_477712: /* 477712: jmp 0x477737 */
  goto L_477737;
L_477737: /* 477737: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477739: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47773c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47773d: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 477740: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477742: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477745: call 0x461453 */
  esp -= 4; W32(esp, 0x47774au); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47774a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47774e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477751: call 0x46228e */
  esp -= 4; W32(esp, 0x477756u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477756: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47775a: mov eax, esi */
  eax = esi;
/* 47775c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47775d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477765: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477766: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477714(void) {
  LOAD_REGS();
L_477714: /* 477714: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 477717: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477719: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47771c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47771e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 477721: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477723: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477727: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47772cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47772c: mov eax, 0x477732 */
  eax = 0x477732u;
/* 477731: ret  */
  esp += 4; SPILL(); return;
}

void f_477732(void) {
  LOAD_REGS();
L_477732: /* 477732: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 477735: xor ebx, ebx */
  ebx = 0;
/* 477737: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477739: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47773c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47773d: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 477740: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477742: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477745: call 0x461453 */
  esp -= 4; W32(esp, 0x47774au); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477732u: guest_unwind_done(); RELOAD(); goto L_477732; } return; } RELOAD();
/* 47774a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47774e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477751: call 0x46228e */
  esp -= 4; W32(esp, 0x477756u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477732u: guest_unwind_done(); RELOAD(); goto L_477732; } return; } RELOAD();
/* 477756: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47775a: mov eax, esi */
  eax = esi;
/* 47775c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47775d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477765: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477766: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477769(void) {
  LOAD_REGS();
L_477769: /* 477769: mov eax, 0x48cdf2 */
  eax = 0x48cdf2u;
/* 47776e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477773u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477773: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 477776: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477777: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477778: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477779: mov esi, ecx */
  esi = ecx;
/* 47777b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47777e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477780: xor ebx, ebx */
  ebx = 0;
/* 477782: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477783: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477786: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477789: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47778c: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 47778f: call 0x466d91 */
  esp -= 4; W32(esp, 0x477794u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477794: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477797: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47779a: je 0x4777e8 */
  if (zf) goto L_4777e8;
L_47779c: /* 47779c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47779e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4777a1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4777a4: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4777a8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4777ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4777ad: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4777b1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x4777b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4777b4: add dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4777b7: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4777ba: je 0x4777e8 */
  if (zf) goto L_4777e8;
L_4777bc: /* 4777bc: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 4777c3: jmp 0x4777e8 */
  goto L_4777e8;
L_4777e8: /* 4777e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4777ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4777ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4777ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4777f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4777f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4777f6: call 0x461453 */
  esp -= 4; W32(esp, 0x4777fbu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4777fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4777ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477802: call 0x46228e */
  esp -= 4; W32(esp, 0x477807u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477807: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47780a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47780b: mov eax, esi */
  eax = esi;
/* 47780d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47780e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477816: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477817: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4777c5(void) {
  LOAD_REGS();
L_4777c5: /* 4777c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4777c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4777ca: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4777cd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4777cf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4777d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4777d4: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4777d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4777d8: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4777ddu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4777dd: mov eax, 0x4777e3 */
  eax = 0x4777e3u;
/* 4777e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4777e3(void) {
  LOAD_REGS();
L_4777e3: /* 4777e3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4777e6: xor ebx, ebx */
  ebx = 0;
/* 4777e8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4777ea: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4777ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4777ee: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4777f1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4777f3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4777f6: call 0x461453 */
  esp -= 4; W32(esp, 0x4777fbu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4777e3u: guest_unwind_done(); RELOAD(); goto L_4777e3; } return; } RELOAD();
/* 4777fb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4777ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477802: call 0x46228e */
  esp -= 4; W32(esp, 0x477807u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4777e3u: guest_unwind_done(); RELOAD(); goto L_4777e3; } return; } RELOAD();
/* 477807: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47780a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47780b: mov eax, esi */
  eax = esi;
/* 47780d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47780e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477816: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477817: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47781a(void) {
  LOAD_REGS();
L_47781a: /* 47781a: mov eax, 0x48ce04 */
  eax = 0x48ce04u;
/* 47781f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477824u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477827: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477828: mov esi, ecx */
  esi = ecx;
/* 47782a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47782c: xor edi, edi */
  edi = 0;
/* 47782e: and dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 477831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477832: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 477835: call 0x466d91 */
  esp -= 4; W32(esp, 0x47783au); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47783a: and dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47783d: cmp byte ptr [ebp - 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477841: jne 0x477848 */
  if (!zf) goto L_477848;
L_477843: /* 477843: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 477845: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477846: jmp 0x477874 */
  goto L_477874;
L_477848: /* 477848: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47784a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47784d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 477851: call 0x46b1c1 */
  esp -= 4; W32(esp, 0x477856u); SPILL(); f_46b1c1(); if (g_unwind) return; RELOAD();
/* 477856: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 477858: jge 0x47785f */
  if ((sf == of)) goto L_47785f;
L_47785a: /* 47785a: xor edi, edi */
  edi = 0;
/* 47785c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47785d: jmp 0x477874 */
  goto L_477874;
L_47785f: /* 47785f: jle 0x477874 */
  if ((zf || sf != of)) goto L_477874;
L_477861: /* 477861: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 477864: jl 0x477869 */
  if ((sf != of)) goto L_477869;
L_477866: /* 477866: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_477869: /* 477869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47786a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47786d: mov ecx, esi */
  ecx = esi;
/* 47786f: call 0x477769 */
  esp -= 4; W32(esp, 0x477874u); SPILL(); f_477769(); if (g_unwind) return; RELOAD();
L_477874: /* 477874: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477876: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477879: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47787b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47787c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47787e: call 0x461453 */
  esp -= 4; W32(esp, 0x477883u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477883: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 477886: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47788a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 47788d: call 0x46228e */
  esp -= 4; W32(esp, 0x477892u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477892: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477895: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477896: mov eax, esi */
  eax = esi;
/* 477898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477899: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4778a0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4778a1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4778a4(void) {
  LOAD_REGS();
L_4778a4: /* 4778a4: mov eax, 0x48ce16 */
  eax = 0x48ce16u;
/* 4778a9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4778aeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4778ae: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4778b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4778b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4778b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4778b4: mov esi, ecx */
  esi = ecx;
/* 4778b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4778b9: xor ebx, ebx */
  ebx = 0;
/* 4778bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4778bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4778be: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4778c1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4778c4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4778c7: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4778ca: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4778cd: call 0x466d91 */
  esp -= 4; W32(esp, 0x4778d2u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4778d2: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4778d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4778d8: jne 0x4778e1 */
  if (!zf) goto L_4778e1;
L_4778da: /* 4778da: mov edi, 0xffff */
  edi = 0xffffu;
/* 4778df: jmp 0x47792a */
  goto L_47792a;
L_4778e1: /* 4778e1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4778e3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4778e6: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4778ea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4778ee: call 0x4657fc */
  esp -= 4; W32(esp, 0x4778f3u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
/* 4778f3: mov edi, eax */
  edi = eax;
/* 4778f5: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4778f9: jne 0x47792a */
  if (!zf) goto L_47792a;
L_4778fb: /* 4778fb: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 477902: jmp 0x47792a */
  goto L_47792a;
L_47792a: /* 47792a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47792c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47792f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477930: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477933: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477935: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477938: call 0x461453 */
  esp -= 4; W32(esp, 0x47793du); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47793d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477941: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 477944: call 0x46228e */
  esp -= 4; W32(esp, 0x477949u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477949: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47794c: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 47794f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477951: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477958: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477959: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47795a: ret  */
  esp += 4; SPILL(); return;
}

void f_477904(void) {
  LOAD_REGS();
L_477904: /* 477904: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 477907: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477909: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47790c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47790e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 477911: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477913: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477916: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477917: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47791cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47791c: mov eax, 0x477922 */
  eax = 0x477922u;
/* 477921: ret  */
  esp += 4; SPILL(); return;
}

void f_477922(void) {
  LOAD_REGS();
L_477922: /* 477922: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 477925: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 477928: xor ebx, ebx */
  ebx = 0;
/* 47792a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47792c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47792f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477930: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477933: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477935: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477938: call 0x461453 */
  esp -= 4; W32(esp, 0x47793du); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477922u: guest_unwind_done(); RELOAD(); goto L_477922; } return; } RELOAD();
/* 47793d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477941: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 477944: call 0x46228e */
  esp -= 4; W32(esp, 0x477949u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477922u: guest_unwind_done(); RELOAD(); goto L_477922; } return; } RELOAD();
/* 477949: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47794c: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 47794f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477951: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477958: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477959: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47795a: ret  */
  esp += 4; SPILL(); return;
}

void f_47795b(void) {
  LOAD_REGS();
L_47795b: /* 47795b: mov eax, 0x48ce28 */
  eax = 0x48ce28u;
/* 477960: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477965u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477965: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 477968: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477969: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47796a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47796b: mov esi, ecx */
  esi = ecx;
/* 47796d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 477970: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477972: xor ebx, ebx */
  ebx = 0;
/* 477974: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477975: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477978: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47797b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47797e: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 477981: call 0x466d91 */
  esp -= 4; W32(esp, 0x477986u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477986: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477989: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47798c: je 0x4779d5 */
  if (zf) goto L_4779d5;
L_47798e: /* 47798e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477990: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477993: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 477996: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47799a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47799e: call 0x46b148 */
  esp -= 4; W32(esp, 0x4779a3u); SPILL(); f_46b148(); if (g_unwind) return; RELOAD();
/* 4779a3: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4779a7: jne 0x4779d5 */
  if (!zf) goto L_4779d5;
L_4779a9: /* 4779a9: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4779b0: jmp 0x4779d5 */
  goto L_4779d5;
L_4779d5: /* 4779d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4779d7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4779da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4779db: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4779de: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4779e0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4779e3: call 0x461453 */
  esp -= 4; W32(esp, 0x4779e8u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4779e8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4779ec: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4779ef: call 0x46228e */
  esp -= 4; W32(esp, 0x4779f4u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4779f4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4779f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4779f8: mov eax, esi */
  eax = esi;
/* 4779fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4779fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477a02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477a03: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477a04: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4779b2(void) {
  LOAD_REGS();
L_4779b2: /* 4779b2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4779b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4779b7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4779ba: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4779bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4779bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4779c1: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4779c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4779c5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4779cau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4779ca: mov eax, 0x4779d0 */
  eax = 0x4779d0u;
/* 4779cf: ret  */
  esp += 4; SPILL(); return;
}

void f_4779d0(void) {
  LOAD_REGS();
L_4779d0: /* 4779d0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4779d3: xor ebx, ebx */
  ebx = 0;
/* 4779d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4779d7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4779da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4779db: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4779de: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4779e0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4779e3: call 0x461453 */
  esp -= 4; W32(esp, 0x4779e8u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4779d0u: guest_unwind_done(); RELOAD(); goto L_4779d0; } return; } RELOAD();
/* 4779e8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4779ec: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4779ef: call 0x46228e */
  esp -= 4; W32(esp, 0x4779f4u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4779d0u: guest_unwind_done(); RELOAD(); goto L_4779d0; } return; } RELOAD();
/* 4779f4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4779f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4779f8: mov eax, esi */
  eax = esi;
/* 4779fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4779fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477a02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477a03: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477a04: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477a07(void) {
  LOAD_REGS();
L_477a07: /* 477a07: mov eax, 0x48ce3a */
  eax = 0x48ce3au;
/* 477a0c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477a11u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477a11: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 477a14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477a15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477a16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477a17: mov esi, ecx */
  esi = ecx;
/* 477a19: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 477a1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477a1e: xor ebx, ebx */
  ebx = 0;
/* 477a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477a21: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477a24: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477a27: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 477a2a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 477a2d: call 0x466d91 */
  esp -= 4; W32(esp, 0x477a32u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477a32: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477a35: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477a38: je 0x477a7e */
  if (zf) goto L_477a7e;
L_477a3a: /* 477a3a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477a3c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477a3f: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 477a43: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 477a47: call 0x46b1e2 */
  esp -= 4; W32(esp, 0x477a4cu); SPILL(); f_46b1e2(); if (g_unwind) return; RELOAD();
/* 477a4c: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 477a50: jne 0x477a7e */
  if (!zf) goto L_477a7e;
L_477a52: /* 477a52: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 477a59: jmp 0x477a7e */
  goto L_477a7e;
L_477a7e: /* 477a7e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477a80: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477a83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477a84: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477a87: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477a89: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477a8c: call 0x461453 */
  esp -= 4; W32(esp, 0x477a91u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477a91: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477a95: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477a98: call 0x46228e */
  esp -= 4; W32(esp, 0x477a9du); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 477a9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477aa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477aa1: mov eax, esi */
  eax = esi;
/* 477aa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477aa4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477aab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477aac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477aad: ret  */
  esp += 4; SPILL(); return;
}

void f_477a5b(void) {
  LOAD_REGS();
L_477a5b: /* 477a5b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 477a5e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 477a60: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 477a63: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477a65: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 477a68: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477a6a: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477a6e: call 0x464bb2 */
  esp -= 4; W32(esp, 0x477a73u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 477a73: mov eax, 0x477a79 */
  eax = 0x477a79u;
/* 477a78: ret  */
  esp += 4; SPILL(); return;
}

void f_477a79(void) {
  LOAD_REGS();
L_477a79: /* 477a79: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 477a7c: xor ebx, ebx */
  ebx = 0;
/* 477a7e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477a80: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477a83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477a84: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477a87: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477a89: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 477a8c: call 0x461453 */
  esp -= 4; W32(esp, 0x477a91u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477a79u: guest_unwind_done(); RELOAD(); goto L_477a79; } return; } RELOAD();
/* 477a91: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477a95: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 477a98: call 0x46228e */
  esp -= 4; W32(esp, 0x477a9du); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477a79u: guest_unwind_done(); RELOAD(); goto L_477a79; } return; } RELOAD();
/* 477a9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477aa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477aa1: mov eax, esi */
  eax = esi;
/* 477aa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477aa4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477aab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477aac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477aad: ret  */
  esp += 4; SPILL(); return;
}

void f_477aae(void) {
  LOAD_REGS();
L_477aae: /* 477aae: mov eax, 0x48ce4c */
  eax = 0x48ce4cu;
/* 477ab3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477ab8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477ab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477ab9: mov esi, ecx */
  esi = ecx;
/* 477abb: call 0x461eec */
  esp -= 4; W32(esp, 0x477ac0u); SPILL(); f_461eec(); if (g_unwind) return; RELOAD();
/* 477ac0: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 477ac4: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 477ac8: mov ecx, esi */
  ecx = esi;
/* 477aca: mov dword ptr [esi], 0x4c8150 */
  W32((uint32_t)(esi), 0x4c8150u);
/* 477ad0: call 0x469321 */
  esp -= 4; W32(esp, 0x477ad5u); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477ad5: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 477ad9: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 477adc: mov eax, esi */
  eax = esi;
/* 477ade: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477adf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477ae6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477ae7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477aea(void) {
  LOAD_REGS();
L_477aea: /* 477aea: mov eax, 0x48ce5e */
  eax = 0x48ce5eu;
/* 477aef: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477af4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477af4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477af5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477af6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477af7: mov esi, ecx */
  esi = ecx;
/* 477af9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477afa: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 477afd: call 0x461eec */
  esp -= 4; W32(esp, 0x477b02u); SPILL(); f_461eec(); if (g_unwind) return; RELOAD();
/* 477b02: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477b05: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477b09: mov dword ptr [esi], 0x4c8150 */
  W32((uint32_t)(esi), 0x4c8150u);
/* 477b0f: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 477b13: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 477b16: jb 0x477b1d */
  if (cf) goto L_477b1d;
L_477b18: /* 477b18: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 477b1b: jmp 0x477b20 */
  goto L_477b20;
L_477b1d: /* 477b1d: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
L_477b20: /* 477b20: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 477b23: mov ecx, esi */
  ecx = esi;
/* 477b25: call 0x469321 */
  esp -= 4; W32(esp, 0x477b2au); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477b2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477b2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477b2d: mov ecx, esi */
  ecx = esi;
/* 477b2f: call 0x4717d6 */
  esp -= 4; W32(esp, 0x477b34u); SPILL(); f_4717d6(); if (g_unwind) return; RELOAD();
/* 477b34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477b37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477b38: mov eax, esi */
  eax = esi;
/* 477b3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477b3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477b3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477b43: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477b44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477b47(void) {
  LOAD_REGS();
L_477b47: /* 477b47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477b48: mov esi, ecx */
  esi = ecx;
/* 477b4a: call 0x46bb9c */
  esp -= 4; W32(esp, 0x477b4fu); SPILL(); f_46bb9c(); if (g_unwind) return; RELOAD();
/* 477b4f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 477b53: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 477b57: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 477b5a: jb 0x477b61 */
  if (cf) goto L_477b61;
L_477b5c: /* 477b5c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477b5f: jmp 0x477b64 */
  goto L_477b64;
L_477b61: /* 477b61: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_477b64: /* 477b64: push dword ptr [esi + 0x40] */
  { uint32_t v = R32((uint32_t)(esi + 0x40u)); esp -= 4; W32(esp, v); }
/* 477b67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477b69: mov ecx, esi */
  ecx = esi;
/* 477b6b: call 0x4717d6 */
  esp -= 4; W32(esp, 0x477b70u); SPILL(); f_4717d6(); if (g_unwind) return; RELOAD();
/* 477b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477b71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477b74(void) {
  LOAD_REGS();
L_477b74: /* 477b74: mov eax, 0x48ce70 */
  eax = 0x48ce70u;
/* 477b79: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477b7eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477b7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477b7f: mov esi, ecx */
  esi = ecx;
/* 477b81: call 0x462087 */
  esp -= 4; W32(esp, 0x477b86u); SPILL(); f_462087(); if (g_unwind) return; RELOAD();
/* 477b86: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 477b8a: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 477b8e: mov ecx, esi */
  ecx = esi;
/* 477b90: mov dword ptr [esi], 0x4c81d0 */
  W32((uint32_t)(esi), 0x4c81d0u);
/* 477b96: call 0x469321 */
  esp -= 4; W32(esp, 0x477b9bu); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477b9b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 477b9f: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 477ba2: mov eax, esi */
  eax = esi;
/* 477ba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477ba5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477bac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477bad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477bb0(void) {
  LOAD_REGS();
L_477bb0: /* 477bb0: mov eax, 0x48ce82 */
  eax = 0x48ce82u;
/* 477bb5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477bbau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477bba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477bbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477bbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477bbd: mov esi, ecx */
  esi = ecx;
/* 477bbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477bc0: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 477bc3: call 0x462087 */
  esp -= 4; W32(esp, 0x477bc8u); SPILL(); f_462087(); if (g_unwind) return; RELOAD();
/* 477bc8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477bcb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477bcf: mov dword ptr [esi], 0x4c81d0 */
  W32((uint32_t)(esi), 0x4c81d0u);
/* 477bd5: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 477bd9: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 477bdc: jb 0x477be3 */
  if (cf) goto L_477be3;
L_477bde: /* 477bde: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 477be1: jmp 0x477be6 */
  goto L_477be6;
L_477be3: /* 477be3: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
L_477be6: /* 477be6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 477be9: mov ecx, esi */
  ecx = esi;
/* 477beb: call 0x469321 */
  esp -= 4; W32(esp, 0x477bf0u); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477bf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477bf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477bf3: mov ecx, esi */
  ecx = esi;
/* 477bf5: call 0x471873 */
  esp -= 4; W32(esp, 0x477bfau); SPILL(); f_471873(); if (g_unwind) return; RELOAD();
/* 477bfa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477bfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477bfe: mov eax, esi */
  eax = esi;
/* 477c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477c01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477c02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477c09: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477c0a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477c0d(void) {
  LOAD_REGS();
L_477c0d: /* 477c0d: mov eax, 0x48ce94 */
  eax = 0x48ce94u;
/* 477c12: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477c17u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477c17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477c18: mov esi, ecx */
  esi = ecx;
/* 477c1a: call 0x461226 */
  esp -= 4; W32(esp, 0x477c1fu); SPILL(); f_461226(); if (g_unwind) return; RELOAD();
/* 477c1f: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 477c23: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 477c27: mov ecx, esi */
  ecx = esi;
/* 477c29: mov dword ptr [esi], 0x4c8250 */
  W32((uint32_t)(esi), 0x4c8250u);
/* 477c2f: call 0x469321 */
  esp -= 4; W32(esp, 0x477c34u); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477c34: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 477c38: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 477c3b: mov eax, esi */
  eax = esi;
/* 477c3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477c3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477c45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477c46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477c49(void) {
  LOAD_REGS();
L_477c49: /* 477c49: mov eax, 0x48cea6 */
  eax = 0x48cea6u;
/* 477c4e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477c53u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477c54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477c55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477c56: mov esi, ecx */
  esi = ecx;
/* 477c58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477c59: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 477c5c: call 0x461226 */
  esp -= 4; W32(esp, 0x477c61u); SPILL(); f_461226(); if (g_unwind) return; RELOAD();
/* 477c61: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477c64: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477c68: mov dword ptr [esi], 0x4c8250 */
  W32((uint32_t)(esi), 0x4c8250u);
/* 477c6e: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 477c72: mov ebx, dword ptr [eax + 0x14] */
  ebx = R32((uint32_t)(eax + 0x14u));
/* 477c75: jb 0x477c7c */
  if (cf) goto L_477c7c;
L_477c77: /* 477c77: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 477c7a: jmp 0x477c7f */
  goto L_477c7f;
L_477c7c: /* 477c7c: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
L_477c7f: /* 477c7f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 477c82: mov ecx, esi */
  ecx = esi;
/* 477c84: call 0x469321 */
  esp -= 4; W32(esp, 0x477c89u); SPILL(); f_469321(); if (g_unwind) return; RELOAD();
/* 477c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477c8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477c8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477c8c: mov ecx, esi */
  ecx = esi;
/* 477c8e: call 0x471873 */
  esp -= 4; W32(esp, 0x477c93u); SPILL(); f_471873(); if (g_unwind) return; RELOAD();
/* 477c93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477c96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477c97: mov eax, esi */
  eax = esi;
/* 477c99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477c9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477c9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477ca2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477ca3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477ca6(void) {
  LOAD_REGS();
L_477ca6: /* 477ca6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477ca7: mov esi, ecx */
  esi = ecx;
/* 477ca9: call 0x46bb9c */
  esp -= 4; W32(esp, 0x477caeu); SPILL(); f_46bb9c(); if (g_unwind) return; RELOAD();
/* 477cae: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 477cb2: cmp dword ptr [eax + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 477cb6: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 477cb9: jb 0x477cc0 */
  if (cf) goto L_477cc0;
L_477cbb: /* 477cbb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477cbe: jmp 0x477cc3 */
  goto L_477cc3;
L_477cc0: /* 477cc0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_477cc3: /* 477cc3: push dword ptr [esi + 0x40] */
  { uint32_t v = R32((uint32_t)(esi + 0x40u)); esp -= 4; W32(esp, v); }
/* 477cc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477cc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477cc8: mov ecx, esi */
  ecx = esi;
/* 477cca: call 0x471873 */
  esp -= 4; W32(esp, 0x477ccfu); SPILL(); f_471873(); if (g_unwind) return; RELOAD();
/* 477ccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477cd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_477cd3(void) {
  LOAD_REGS();
L_477cd3: /* 477cd3: mov eax, 0x48ced1 */
  eax = 0x48ced1u;
/* 477cd8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477cddu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477cdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477cde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477cdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477ce1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477ce2: xor edi, edi */
  edi = 0;
/* 477ce4: xor eax, eax */
  eax = 0;
/* 477ce6: mov esi, ecx */
  esi = ecx;
/* 477ce8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477ce9: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477cec: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477cef: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477cf2: je 0x477d0a */
  if (zf) goto L_477d0a;
L_477cf4: /* 477cf4: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477cfa: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477cfd: mov dword ptr [esi + 0x50], 0x4c6d18 */
  W32((uint32_t)(esi + 0x50u), 0x4c6d18u);
/* 477d04: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477d07: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477d0a: /* 477d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d0d: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477d10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477d11: mov ecx, esi */
  ecx = esi;
/* 477d13: call 0x4627bb */
  esp -= 4; W32(esp, 0x477d18u); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 477d18: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477d1a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477d1d: mov dword ptr [esi + eax], 0x4c82d0 */
  W32((uint32_t)(esi + eax), 0x4c82d0u);
/* 477d24: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477d27: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d2a: mov ecx, ebx */
  ecx = ebx;
/* 477d2c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477d2f: call 0x477aae */
  esp -= 4; W32(esp, 0x477d34u); SPILL(); f_477aae(); if (g_unwind) return; RELOAD();
/* 477d34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477d37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477d38: mov eax, esi */
  eax = esi;
/* 477d3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477d3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477d3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477d43: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477d44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477d47(void) {
  LOAD_REGS();
L_477d47: /* 477d47: mov eax, 0x48ced1 */
  eax = 0x48ced1u;
/* 477d4c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477d51u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477d52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477d53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477d54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477d55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477d56: xor edi, edi */
  edi = 0;
/* 477d58: xor eax, eax */
  eax = 0;
/* 477d5a: mov esi, ecx */
  esi = ecx;
/* 477d5c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477d5d: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477d60: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477d63: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477d66: je 0x477d7e */
  if (zf) goto L_477d7e;
L_477d68: /* 477d68: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477d6e: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477d71: mov dword ptr [esi + 0x50], 0x4c6d18 */
  W32((uint32_t)(esi + 0x50u), 0x4c6d18u);
/* 477d78: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477d7b: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477d7e: /* 477d7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d81: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477d84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477d85: mov ecx, esi */
  ecx = esi;
/* 477d87: call 0x4627bb */
  esp -= 4; W32(esp, 0x477d8cu); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 477d8c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477d8e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477d91: mov dword ptr [esi + eax], 0x4c82d0 */
  W32((uint32_t)(esi + eax), 0x4c82d0u);
/* 477d98: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 477d9b: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477d9e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 477da1: mov ecx, ebx */
  ecx = ebx;
/* 477da3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477da6: call 0x477aea */
  esp -= 4; W32(esp, 0x477dabu); SPILL(); f_477aea(); if (g_unwind) return; RELOAD();
/* 477dab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477dae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477daf: mov eax, esi */
  eax = esi;
/* 477db1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477db2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477db3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477dba: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477dbb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_477dbe(void) {
  LOAD_REGS();
L_477dbe: /* 477dbe: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477dc1: jmp 0x477b47 */
  SPILL(); f_477b47(); return;
}

void f_477dc6(void) {
  LOAD_REGS();
L_477dc6: /* 477dc6: mov eax, 0x48cefc */
  eax = 0x48cefcu;
/* 477dcb: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477dd0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477dd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477dd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477dd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477dd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477dd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477dd5: xor edi, edi */
  edi = 0;
/* 477dd7: xor eax, eax */
  eax = 0;
/* 477dd9: mov esi, ecx */
  esi = ecx;
/* 477ddb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477ddc: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477ddf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477de2: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477de5: je 0x477dfd */
  if (zf) goto L_477dfd;
L_477de7: /* 477de7: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477ded: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477df0: mov dword ptr [esi + 0x50], 0x4c75d8 */
  W32((uint32_t)(esi + 0x50u), 0x4c75d8u);
/* 477df7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477dfa: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477dfd: /* 477dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e00: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477e03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477e04: mov ecx, esi */
  ecx = esi;
/* 477e06: call 0x462b0d */
  esp -= 4; W32(esp, 0x477e0bu); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 477e0b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477e0d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477e10: mov dword ptr [esi + eax], 0x4c832c */
  W32((uint32_t)(esi + eax), 0x4c832cu);
/* 477e17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477e1a: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477e1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e1d: mov ecx, ebx */
  ecx = ebx;
/* 477e1f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477e22: call 0x477b74 */
  esp -= 4; W32(esp, 0x477e27u); SPILL(); f_477b74(); if (g_unwind) return; RELOAD();
/* 477e27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477e2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477e2b: mov eax, esi */
  eax = esi;
/* 477e2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477e2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477e2f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477e36: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477e37: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477e3a(void) {
  LOAD_REGS();
L_477e3a: /* 477e3a: mov eax, 0x48cefc */
  eax = 0x48cefcu;
/* 477e3f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477e44u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477e44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477e45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477e46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477e47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477e48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477e49: xor edi, edi */
  edi = 0;
/* 477e4b: xor eax, eax */
  eax = 0;
/* 477e4d: mov esi, ecx */
  esi = ecx;
/* 477e4f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477e50: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477e53: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477e56: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477e59: je 0x477e71 */
  if (zf) goto L_477e71;
L_477e5b: /* 477e5b: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477e61: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477e64: mov dword ptr [esi + 0x50], 0x4c75d8 */
  W32((uint32_t)(esi + 0x50u), 0x4c75d8u);
/* 477e6b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477e6e: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477e71: /* 477e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e74: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477e77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477e78: mov ecx, esi */
  ecx = esi;
/* 477e7a: call 0x462b0d */
  esp -= 4; W32(esp, 0x477e7fu); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 477e7f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477e81: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477e84: mov dword ptr [esi + eax], 0x4c832c */
  W32((uint32_t)(esi + eax), 0x4c832cu);
/* 477e8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 477e8e: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477e91: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 477e94: mov ecx, ebx */
  ecx = ebx;
/* 477e96: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477e99: call 0x477bb0 */
  esp -= 4; W32(esp, 0x477e9eu); SPILL(); f_477bb0(); if (g_unwind) return; RELOAD();
/* 477e9e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477ea1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477ea2: mov eax, esi */
  eax = esi;
/* 477ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477ea5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477ea6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477ead: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477eae: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_477eb1(void) {
  LOAD_REGS();
L_477eb1: /* 477eb1: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477eb4: jmp 0x477ca6 */
  SPILL(); f_477ca6(); return;
}

void f_477eb9(void) {
  LOAD_REGS();
L_477eb9: /* 477eb9: mov eax, 0x48cf27 */
  eax = 0x48cf27u;
/* 477ebe: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477ec3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477ec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477ec4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477ec5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477ec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477ec7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477ec8: xor edi, edi */
  edi = 0;
/* 477eca: xor eax, eax */
  eax = 0;
/* 477ecc: mov esi, ecx */
  esi = ecx;
/* 477ece: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477ecf: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477ed2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477ed5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477ed8: je 0x477ef0 */
  if (zf) goto L_477ef0;
L_477eda: /* 477eda: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477ee0: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477ee3: mov dword ptr [esi + 0x50], 0x4c762c */
  W32((uint32_t)(esi + 0x50u), 0x4c762cu);
/* 477eea: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477eed: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477ef0: /* 477ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477ef3: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477ef6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477ef7: mov ecx, esi */
  ecx = esi;
/* 477ef9: call 0x462974 */
  esp -= 4; W32(esp, 0x477efeu); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 477efe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477f00: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477f03: mov dword ptr [esi + eax], 0x4c8388 */
  W32((uint32_t)(esi + eax), 0x4c8388u);
/* 477f0a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477f0d: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477f10: mov ecx, ebx */
  ecx = ebx;
/* 477f12: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477f15: call 0x477c0d */
  esp -= 4; W32(esp, 0x477f1au); SPILL(); f_477c0d(); if (g_unwind) return; RELOAD();
/* 477f1a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477f1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477f1e: mov eax, esi */
  eax = esi;
/* 477f20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477f21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477f22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477f29: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477f2a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_477f2d(void) {
  LOAD_REGS();
L_477f2d: /* 477f2d: mov eax, 0x48cf27 */
  eax = 0x48cf27u;
/* 477f32: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477f37u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477f37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477f38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477f39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477f3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477f3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477f3c: xor edi, edi */
  edi = 0;
/* 477f3e: xor eax, eax */
  eax = 0;
/* 477f40: mov esi, ecx */
  esi = ecx;
/* 477f42: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477f43: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477f46: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477f49: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477f4c: je 0x477f64 */
  if (zf) goto L_477f64;
L_477f4e: /* 477f4e: mov dword ptr [esi], 0x48e288 */
  W32((uint32_t)(esi), 0x48e288u);
/* 477f54: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 477f57: mov dword ptr [esi + 0x50], 0x4c762c */
  W32((uint32_t)(esi + 0x50u), 0x4c762cu);
/* 477f5e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477f61: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477f64: /* 477f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477f66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477f67: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 477f6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477f6b: mov ecx, esi */
  ecx = esi;
/* 477f6d: call 0x462974 */
  esp -= 4; W32(esp, 0x477f72u); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 477f72: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477f74: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477f77: mov dword ptr [esi + eax], 0x4c8388 */
  W32((uint32_t)(esi + eax), 0x4c8388u);
/* 477f7e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 477f81: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477f83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477f84: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 477f87: mov ecx, ebx */
  ecx = ebx;
/* 477f89: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 477f8c: call 0x477c49 */
  esp -= 4; W32(esp, 0x477f91u); SPILL(); f_477c49(); if (g_unwind) return; RELOAD();
/* 477f91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477f94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477f95: mov eax, esi */
  eax = esi;
/* 477f97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477f98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477f99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477fa0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 477fa1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_477fa4(void) {
  LOAD_REGS();
L_477fa4: /* 477fa4: mov eax, 0x48cf52 */
  eax = 0x48cf52u;
/* 477fa9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477faeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477fae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477faf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 477fb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477fb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477fb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 477fb3: xor edi, edi */
  edi = 0;
/* 477fb5: xor eax, eax */
  eax = 0;
/* 477fb7: mov esi, ecx */
  esi = ecx;
/* 477fb9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 477fba: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477fbd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 477fc0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 477fc3: je 0x477fdb */
  if (zf) goto L_477fdb;
L_477fc5: /* 477fc5: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 477fcb: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 477fce: mov dword ptr [esi + 0x4c], 0x4c6d18 */
  W32((uint32_t)(esi + 0x4cu), 0x4c6d18u);
/* 477fd5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 477fd8: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_477fdb: /* 477fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477fdd: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 477fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477fe1: mov ecx, esi */
  ecx = esi;
/* 477fe3: call 0x46236d */
  esp -= 4; W32(esp, 0x477fe8u); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 477fe8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477fea: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477fed: mov dword ptr [esi + eax], 0x4c83e4 */
  W32((uint32_t)(esi + eax), 0x4c83e4u);
/* 477ff4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 477ff7: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 477ffa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477ffb: mov ecx, ebx */
  ecx = ebx;
/* 477ffd: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 478000: call 0x477aae */
  esp -= 4; W32(esp, 0x478005u); SPILL(); f_477aae(); if (g_unwind) return; RELOAD();
/* 478005: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478008: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478009: mov eax, esi */
  eax = esi;
/* 47800b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47800c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47800d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478014: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478015: ret 8 */
  esp += 12; SPILL(); return;
}

void f_478018(void) {
  LOAD_REGS();
L_478018: /* 478018: mov eax, 0x48cf52 */
  eax = 0x48cf52u;
/* 47801d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478022u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478022: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478023: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478024: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478027: xor edi, edi */
  edi = 0;
/* 478029: xor eax, eax */
  eax = 0;
/* 47802b: mov esi, ecx */
  esi = ecx;
/* 47802d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47802e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478031: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 478034: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 478037: je 0x47804f */
  if (zf) goto L_47804f;
L_478039: /* 478039: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 47803f: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 478042: mov dword ptr [esi + 0x4c], 0x4c6d18 */
  W32((uint32_t)(esi + 0x4cu), 0x4c6d18u);
/* 478049: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47804c: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_47804f: /* 47804f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478051: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 478054: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478055: mov ecx, esi */
  ecx = esi;
/* 478057: call 0x46236d */
  esp -= 4; W32(esp, 0x47805cu); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 47805c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47805e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478061: mov dword ptr [esi + eax], 0x4c83e4 */
  W32((uint32_t)(esi + eax), 0x4c83e4u);
/* 478068: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47806b: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47806e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47806f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478072: mov ecx, ebx */
  ecx = ebx;
/* 478074: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 478077: call 0x477aea */
  esp -= 4; W32(esp, 0x47807cu); SPILL(); f_477aea(); if (g_unwind) return; RELOAD();
/* 47807c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47807f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478080: mov eax, esi */
  eax = esi;
/* 478082: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478083: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47808b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47808c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47808f(void) {
  LOAD_REGS();
L_47808f: /* 47808f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478092: jmp 0x477b47 */
  SPILL(); f_477b47(); return;
}

void f_478097(void) {
  LOAD_REGS();
L_478097: /* 478097: mov eax, 0x48cf7d */
  eax = 0x48cf7du;
/* 47809c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4780a1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4780a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4780a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4780a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4780a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4780a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4780a6: xor edi, edi */
  edi = 0;
/* 4780a8: xor eax, eax */
  eax = 0;
/* 4780aa: mov esi, ecx */
  esi = ecx;
/* 4780ac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4780ad: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4780b0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4780b3: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4780b6: je 0x4780ce */
  if (zf) goto L_4780ce;
L_4780b8: /* 4780b8: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 4780be: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 4780c1: mov dword ptr [esi + 0x4c], 0x4c75d8 */
  W32((uint32_t)(esi + 0x4cu), 0x4c75d8u);
/* 4780c8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4780cb: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4780ce: /* 4780ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4780cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4780d0: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4780d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4780d4: mov ecx, esi */
  ecx = esi;
/* 4780d6: call 0x462a4e */
  esp -= 4; W32(esp, 0x4780dbu); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 4780db: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4780dd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4780e0: mov dword ptr [esi + eax], 0x4c8440 */
  W32((uint32_t)(esi + eax), 0x4c8440u);
/* 4780e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4780ea: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4780ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4780ee: mov ecx, ebx */
  ecx = ebx;
/* 4780f0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4780f3: call 0x477b74 */
  esp -= 4; W32(esp, 0x4780f8u); SPILL(); f_477b74(); if (g_unwind) return; RELOAD();
/* 4780f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4780fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4780fc: mov eax, esi */
  eax = esi;
/* 4780fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4780ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478100: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478107: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478108: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47810b(void) {
  LOAD_REGS();
L_47810b: /* 47810b: mov eax, 0x48cf7d */
  eax = 0x48cf7du;
/* 478110: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478115u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478119: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47811a: xor edi, edi */
  edi = 0;
/* 47811c: xor eax, eax */
  eax = 0;
/* 47811e: mov esi, ecx */
  esi = ecx;
/* 478120: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 478121: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478124: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 478127: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47812a: je 0x478142 */
  if (zf) goto L_478142;
L_47812c: /* 47812c: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 478132: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 478135: mov dword ptr [esi + 0x4c], 0x4c75d8 */
  W32((uint32_t)(esi + 0x4cu), 0x4c75d8u);
/* 47813c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47813f: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_478142: /* 478142: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478144: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 478147: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478148: mov ecx, esi */
  ecx = esi;
/* 47814a: call 0x462a4e */
  esp -= 4; W32(esp, 0x47814fu); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 47814f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478151: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478154: mov dword ptr [esi + eax], 0x4c8440 */
  W32((uint32_t)(esi + eax), 0x4c8440u);
/* 47815b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47815e: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 478161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478162: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478165: mov ecx, ebx */
  ecx = ebx;
/* 478167: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47816a: call 0x477bb0 */
  esp -= 4; W32(esp, 0x47816fu); SPILL(); f_477bb0(); if (g_unwind) return; RELOAD();
/* 47816f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478172: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478173: mov eax, esi */
  eax = esi;
/* 478175: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478176: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478177: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47817e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47817f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478182(void) {
  LOAD_REGS();
L_478182: /* 478182: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478185: jmp 0x477ca6 */
  SPILL(); f_477ca6(); return;
}

void f_47818a(void) {
  LOAD_REGS();
L_47818a: /* 47818a: mov eax, 0x48cfa8 */
  eax = 0x48cfa8u;
/* 47818f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478194u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478194: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478196: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478199: xor edi, edi */
  edi = 0;
/* 47819b: xor eax, eax */
  eax = 0;
/* 47819d: mov esi, ecx */
  esi = ecx;
/* 47819f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4781a0: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4781a3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4781a6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4781a9: je 0x4781c1 */
  if (zf) goto L_4781c1;
L_4781ab: /* 4781ab: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 4781b1: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 4781b4: mov dword ptr [esi + 0x4c], 0x4c762c */
  W32((uint32_t)(esi + 0x4cu), 0x4c762cu);
/* 4781bb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4781be: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4781c1: /* 4781c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4781c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4781c3: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4781c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4781c7: mov ecx, esi */
  ecx = esi;
/* 4781c9: call 0x461ae0 */
  esp -= 4; W32(esp, 0x4781ceu); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 4781ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4781d0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4781d3: mov dword ptr [esi + eax], 0x4c849c */
  W32((uint32_t)(esi + eax), 0x4c849cu);
/* 4781da: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4781dd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4781e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4781e1: mov ecx, ebx */
  ecx = ebx;
/* 4781e3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4781e6: call 0x477c0d */
  esp -= 4; W32(esp, 0x4781ebu); SPILL(); f_477c0d(); if (g_unwind) return; RELOAD();
/* 4781eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4781ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4781ef: mov eax, esi */
  eax = esi;
/* 4781f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4781f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4781f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4781fa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4781fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4781fe(void) {
  LOAD_REGS();
L_4781fe: /* 4781fe: mov eax, 0x48cfa8 */
  eax = 0x48cfa8u;
/* 478203: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478208u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478208: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478209: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47820a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47820b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47820c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47820d: xor edi, edi */
  edi = 0;
/* 47820f: xor eax, eax */
  eax = 0;
/* 478211: mov esi, ecx */
  esi = ecx;
/* 478213: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 478214: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478217: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47821a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47821d: je 0x478235 */
  if (zf) goto L_478235;
L_47821f: /* 47821f: mov dword ptr [esi], 0x48e290 */
  W32((uint32_t)(esi), 0x48e290u);
/* 478225: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 478228: mov dword ptr [esi + 0x4c], 0x4c762c */
  W32((uint32_t)(esi + 0x4cu), 0x4c762cu);
/* 47822f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 478232: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_478235: /* 478235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478237: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 47823a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47823b: mov ecx, esi */
  ecx = esi;
/* 47823d: call 0x461ae0 */
  esp -= 4; W32(esp, 0x478242u); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 478242: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478244: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478247: mov dword ptr [esi + eax], 0x4c849c */
  W32((uint32_t)(esi + eax), 0x4c849cu);
/* 47824e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 478251: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 478254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478255: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478258: mov ecx, ebx */
  ecx = ebx;
/* 47825a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47825d: call 0x477c49 */
  esp -= 4; W32(esp, 0x478262u); SPILL(); f_477c49(); if (g_unwind) return; RELOAD();
/* 478262: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478265: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478266: mov eax, esi */
  eax = esi;
/* 478268: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478269: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47826a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478271: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478272: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478275(void) {
  LOAD_REGS();
L_478275: /* 478275: mov eax, 0x48cfd3 */
  eax = 0x48cfd3u;
/* 47827a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47827fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47827f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478280: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478281: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478284: xor edi, edi */
  edi = 0;
/* 478286: xor eax, eax */
  eax = 0;
/* 478288: mov esi, ecx */
  esi = ecx;
/* 47828a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47828b: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47828e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 478291: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 478294: je 0x4782b3 */
  if (zf) goto L_4782b3;
L_478296: /* 478296: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 47829c: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 4782a3: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 4782a6: mov dword ptr [esi + 0x54], 0x4c6d18 */
  W32((uint32_t)(esi + 0x54u), 0x4c6d18u);
/* 4782ad: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4782b0: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4782b3: /* 4782b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4782b4: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 4782b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4782b8: mov ecx, esi */
  ecx = esi;
/* 4782ba: call 0x46b701 */
  esp -= 4; W32(esp, 0x4782bfu); SPILL(); f_46b701(); if (g_unwind) return; RELOAD();
/* 4782bf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4782c1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4782c4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4782c7: mov ecx, ebx */
  ecx = ebx;
/* 4782c9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4782cc: mov dword ptr [esi + eax], 0x4c6990 */
  W32((uint32_t)(esi + eax), 0x4c6990u);
/* 4782d3: call 0x477aae */
  esp -= 4; W32(esp, 0x4782d8u); SPILL(); f_477aae(); if (g_unwind) return; RELOAD();
/* 4782d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4782db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4782dc: mov eax, esi */
  eax = esi;
/* 4782de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4782df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4782e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4782e7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4782e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4782eb(void) {
  LOAD_REGS();
L_4782eb: /* 4782eb: mov eax, 0x48cfd3 */
  eax = 0x48cfd3u;
/* 4782f0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4782f5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4782f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4782f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4782f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4782f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4782f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4782fa: xor edi, edi */
  edi = 0;
/* 4782fc: xor eax, eax */
  eax = 0;
/* 4782fe: mov esi, ecx */
  esi = ecx;
/* 478300: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 478301: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478304: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 478307: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47830a: je 0x478329 */
  if (zf) goto L_478329;
L_47830c: /* 47830c: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 478312: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 478319: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 47831c: mov dword ptr [esi + 0x54], 0x4c6d18 */
  W32((uint32_t)(esi + 0x54u), 0x4c6d18u);
/* 478323: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 478326: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_478329: /* 478329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47832a: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 47832d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47832e: mov ecx, esi */
  ecx = esi;
/* 478330: call 0x46b701 */
  esp -= 4; W32(esp, 0x478335u); SPILL(); f_46b701(); if (g_unwind) return; RELOAD();
/* 478335: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478337: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47833a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47833d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478340: mov ecx, ebx */
  ecx = ebx;
/* 478342: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 478345: mov dword ptr [esi + eax], 0x4c6990 */
  W32((uint32_t)(esi + eax), 0x4c6990u);
/* 47834c: call 0x477aea */
  esp -= 4; W32(esp, 0x478351u); SPILL(); f_477aea(); if (g_unwind) return; RELOAD();
/* 478351: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478354: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478355: mov eax, esi */
  eax = esi;
/* 478357: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478358: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478359: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478360: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478361: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478364(void) {
  LOAD_REGS();
L_478364: /* 478364: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478367: jmp 0x477b47 */
  SPILL(); f_477b47(); return;
}

void f_47836c(void) {
  LOAD_REGS();
L_47836c: /* 47836c: mov eax, 0x48cffe */
  eax = 0x48cffeu;
/* 478371: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478376u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478376: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478377: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478378: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478379: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47837a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47837b: xor edi, edi */
  edi = 0;
/* 47837d: xor eax, eax */
  eax = 0;
/* 47837f: mov esi, ecx */
  esi = ecx;
/* 478381: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 478382: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478385: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 478388: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47838b: je 0x4783aa */
  if (zf) goto L_4783aa;
L_47838d: /* 47838d: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 478393: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 47839a: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 47839d: mov dword ptr [esi + 0x54], 0x4c75d8 */
  W32((uint32_t)(esi + 0x54u), 0x4c75d8u);
/* 4783a4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4783a7: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4783aa: /* 4783aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4783ab: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 4783ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4783af: mov ecx, esi */
  ecx = esi;
/* 4783b1: call 0x46911e */
  esp -= 4; W32(esp, 0x4783b6u); SPILL(); f_46911e(); if (g_unwind) return; RELOAD();
/* 4783b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4783b8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4783bb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4783be: mov ecx, ebx */
  ecx = ebx;
/* 4783c0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4783c3: mov dword ptr [esi + eax], 0x4c6a00 */
  W32((uint32_t)(esi + eax), 0x4c6a00u);
/* 4783ca: call 0x477b74 */
  esp -= 4; W32(esp, 0x4783cfu); SPILL(); f_477b74(); if (g_unwind) return; RELOAD();
/* 4783cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4783d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4783d3: mov eax, esi */
  eax = esi;
/* 4783d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4783d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4783d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4783de: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4783df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4783e2(void) {
  LOAD_REGS();
L_4783e2: /* 4783e2: mov eax, 0x48cffe */
  eax = 0x48cffeu;
/* 4783e7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4783ecu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4783ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4783ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4783ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4783ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4783f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4783f1: xor edi, edi */
  edi = 0;
/* 4783f3: xor eax, eax */
  eax = 0;
/* 4783f5: mov esi, ecx */
  esi = ecx;
/* 4783f7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4783f8: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4783fb: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4783fe: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 478401: je 0x478420 */
  if (zf) goto L_478420;
L_478403: /* 478403: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 478409: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 478410: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 478413: mov dword ptr [esi + 0x54], 0x4c75d8 */
  W32((uint32_t)(esi + 0x54u), 0x4c75d8u);
/* 47841a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47841d: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_478420: /* 478420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478421: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 478424: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478425: mov ecx, esi */
  ecx = esi;
/* 478427: call 0x46911e */
  esp -= 4; W32(esp, 0x47842cu); SPILL(); f_46911e(); if (g_unwind) return; RELOAD();
/* 47842c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47842e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478431: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478434: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478437: mov ecx, ebx */
  ecx = ebx;
/* 478439: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47843c: mov dword ptr [esi + eax], 0x4c6a00 */
  W32((uint32_t)(esi + eax), 0x4c6a00u);
/* 478443: call 0x477bb0 */
  esp -= 4; W32(esp, 0x478448u); SPILL(); f_477bb0(); if (g_unwind) return; RELOAD();
/* 478448: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47844b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47844c: mov eax, esi */
  eax = esi;
/* 47844e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47844f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478450: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478457: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478458: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47845b(void) {
  LOAD_REGS();
L_47845b: /* 47845b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47845e: jmp 0x477ca6 */
  SPILL(); f_477ca6(); return;
}

void f_478463(void) {
  LOAD_REGS();
L_478463: /* 478463: mov eax, 0x48d029 */
  eax = 0x48d029u;
/* 478468: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47846du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47846d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47846e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47846f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478471: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478472: xor edi, edi */
  edi = 0;
/* 478474: xor eax, eax */
  eax = 0;
/* 478476: mov esi, ecx */
  esi = ecx;
/* 478478: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 478479: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47847c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47847f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 478482: je 0x4784a1 */
  if (zf) goto L_4784a1;
L_478484: /* 478484: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 47848a: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 478491: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 478494: mov dword ptr [esi + 0x54], 0x4c762c */
  W32((uint32_t)(esi + 0x54u), 0x4c762cu);
/* 47849b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47849e: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_4784a1: /* 4784a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4784a2: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 4784a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4784a6: mov ecx, esi */
  ecx = esi;
/* 4784a8: call 0x4691d1 */
  esp -= 4; W32(esp, 0x4784adu); SPILL(); f_4691d1(); if (g_unwind) return; RELOAD();
/* 4784ad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4784af: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4784b2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4784b5: mov ecx, ebx */
  ecx = ebx;
/* 4784b7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4784ba: mov dword ptr [esi + eax], 0x4c84f8 */
  W32((uint32_t)(esi + eax), 0x4c84f8u);
/* 4784c1: call 0x477c0d */
  esp -= 4; W32(esp, 0x4784c6u); SPILL(); f_477c0d(); if (g_unwind) return; RELOAD();
/* 4784c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4784c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4784ca: mov eax, esi */
  eax = esi;
/* 4784cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4784cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4784ce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4784d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4784d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4784d9(void) {
  LOAD_REGS();
L_4784d9: /* 4784d9: mov eax, 0x48d029 */
  eax = 0x48d029u;
/* 4784de: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4784e3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4784e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4784e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4784e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4784e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4784e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4784e8: xor edi, edi */
  edi = 0;
/* 4784ea: xor eax, eax */
  eax = 0;
/* 4784ec: mov esi, ecx */
  esi = ecx;
/* 4784ee: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4784ef: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4784f2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4784f5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4784f8: je 0x478517 */
  if (zf) goto L_478517;
L_4784fa: /* 4784fa: mov dword ptr [esi], 0x48e298 */
  W32((uint32_t)(esi), 0x48e298u);
/* 478500: mov dword ptr [esi + 8], 0x48e290 */
  W32((uint32_t)(esi + 0x8u), 0x48e290u);
/* 478507: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 47850a: mov dword ptr [esi + 0x54], 0x4c762c */
  W32((uint32_t)(esi + 0x54u), 0x4c762cu);
/* 478511: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 478514: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
L_478517: /* 478517: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478518: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 47851b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47851c: mov ecx, esi */
  ecx = esi;
/* 47851e: call 0x4691d1 */
  esp -= 4; W32(esp, 0x478523u); SPILL(); f_4691d1(); if (g_unwind) return; RELOAD();
/* 478523: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478525: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478528: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47852b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47852e: mov ecx, ebx */
  ecx = ebx;
/* 478530: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 478533: mov dword ptr [esi + eax], 0x4c84f8 */
  W32((uint32_t)(esi + eax), 0x4c84f8u);
/* 47853a: call 0x477c49 */
  esp -= 4; W32(esp, 0x47853fu); SPILL(); f_477c49(); if (g_unwind) return; RELOAD();
/* 47853f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478542: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478543: mov eax, esi */
  eax = esi;
/* 478545: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478546: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478547: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47854e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47854f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478552(void) {
  LOAD_REGS();
L_478552: /* 478552: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 478553: mov ebp, esp */
  ebp = esp;
/* 478555: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478558: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47855a: mov esi, ecx */
  esi = ecx;
/* 47855c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 47855f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 478561: xor ebx, ebx */
  ebx = 0;
/* 478563: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478565: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478566: je 0x478589 */
  if (zf) goto L_478589;
L_478568: /* 478568: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 47856b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47856d: lea edi, [edx + ecx*2] */
  edi = (uint32_t)(edx + ecx*2);
/* 478570: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478572: jae 0x478589 */
  if (!cf) goto L_478589;
L_478574: /* 478574: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 478575: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 478577: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 47857a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47857c: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 47857f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 478581: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 478584: jmp 0x478677 */
  goto L_478677;
L_478589: /* 478589: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 47858c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47858e: jne 0x478599 */
  if (!zf) goto L_478599;
L_478590: /* 478590: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 478594: jmp 0x478677 */
  goto L_478677;
L_478599: /* 478599: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47859c: jne 0x4785c2 */
  if (!zf) goto L_4785c2;
L_47859e: /* 47859e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47859f: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4785a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4785a3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4785a6: call 0x468186 */
  esp -= 4; W32(esp, 0x4785abu); SPILL(); f_468186(); if (g_unwind) return; RELOAD();
/* 4785ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4785ac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4785ae: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4785b1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4785b2: jne 0x478677 */
  if (!zf) goto L_478677;
L_4785b8: /* 4785b8: mov eax, 0xffff */
  eax = 0xffffu;
/* 4785bd: jmp 0x478677 */
  goto L_478677;
L_4785c2: /* 4785c2: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4785c5: lea edi, [esi + 0x50] */
  edi = (uint32_t)(esi + 0x50u);
/* 4785c8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4785ca: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4785cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4785cd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 4785d0: call 0x466522 */
  esp -= 4; W32(esp, 0x4785d5u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 4785d5: jmp 0x47863f */
  goto L_47863f;
L_4785d7: /* 4785d7: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4785da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4785db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4785dd: call 0x466156 */
  esp -= 4; W32(esp, 0x4785e2u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 4785e2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 4785e5: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4785e8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4785ea: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4785ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4785ee: call 0x465162 */
  esp -= 4; W32(esp, 0x4785f3u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 4785f3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4785f5: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 4785f8: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4785fc: jb 0x478603 */
  if (cf) goto L_478603;
L_4785fe: /* 4785fe: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478601: jmp 0x478606 */
  goto L_478606;
L_478603: /* 478603: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_478606: /* 478606: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 478609: lea ebx, [ebp - 0x10] */
  ebx = (uint32_t)(ebp + 0xfffffff0u);
/* 47860c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47860d: lea ebx, [ebp] */
  ebx = (uint32_t)(ebp);
/* 478610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478611: lea ebx, [ebp - 2] */
  ebx = (uint32_t)(ebp + 0xfffffffeu);
/* 478614: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478615: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 478618: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478619: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 47861c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47861e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47861f: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 478622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478623: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x478626u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478626: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 478629: je 0x478673 */
  if (zf) goto L_478673;
L_47862b: /* 47862b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 47862c: je 0x47863f */
  if (zf) goto L_47863f;
L_47862e: /* 47862e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 47862f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 478630: jne 0x478590 */
  if (!zf) goto L_478590;
L_478636: /* 478636: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 478639: cmp dword ptr [eax + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47863d: jae 0x478653 */
  if (!cf) goto L_478653;
L_47863f: /* 47863f: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 478642: call dword ptr [0x48e050] */
  esp -= 4; W32(esp, 0x478648u); SPILL(); f_42c564(); if (g_unwind) return; /* MSVCR70!fgetc */ RELOAD();
/* 478648: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47864b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47864c: jne 0x4785d7 */
  if (!zf) goto L_4785d7;
L_47864e: /* 47864e: jmp 0x478590 */
  goto L_478590;
L_478653: /* 478653: mov esi, dword ptr [esi + 0x48] */
  esi = R32((uint32_t)(esi + 0x48u));
/* 478656: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47865a: jb 0x478661 */
  if (cf) goto L_478661;
L_47865c: /* 47865c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 47865f: jmp 0x478664 */
  goto L_478664;
L_478661: /* 478661: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_478664: /* 478664: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 478666: lea eax, [ebp - 2] */
  eax = (uint32_t)(ebp + 0xfffffffeu);
/* 478669: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47866a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47866b: call 0x4617bb */
  esp -= 4; W32(esp, 0x478670u); SPILL(); hle_memcpy(); RELOAD();
/* 478670: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_478673: /* 478673: mov ax, word ptr [ebp - 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffeu))) & 0xffffu);
L_478677: /* 478677: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478678: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478679: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47867a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47867b: ret  */
  esp += 4; SPILL(); return;
}

void f_47867c(void) {
  LOAD_REGS();
L_47867c: /* 47867c: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 478681: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478686u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478686: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478689: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47868c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47868d: mov esi, ecx */
  esi = ecx;
/* 47868f: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 478692: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 478695: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 478698: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47869c: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 4786a1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4786a7: mov dword ptr [esi], 0x4c7b80 */
  W32((uint32_t)(esi), 0x4c7b80u);
/* 4786ad: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 4786b0: call 0x488f1b */
  esp -= 4; W32(esp, 0x4786b5u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 4786b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4786b6: mov ecx, esi */
  ecx = esi;
/* 4786b8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4786bc: call 0x471d43 */
  esp -= 4; W32(esp, 0x4786c1u); SPILL(); f_471d43(); if (g_unwind) return; RELOAD();
/* 4786c1: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4786c5: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4786cb: call 0x488e1d */
  esp -= 4; W32(esp, 0x4786d0u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 4786d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4786d3: mov eax, esi */
  eax = esi;
/* 4786d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4786d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4786dd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4786de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4786e1(void) {
  LOAD_REGS();
L_4786e1: /* 4786e1: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 4786e6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4786ebu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4786eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4786ec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4786ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4786f0: mov esi, ecx */
  esi = ecx;
/* 4786f2: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4786f5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4786f8: mov al, byte ptr [ebp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 4786fb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4786fe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478702: mov dword ptr [esi], 0x4c7b80 */
  W32((uint32_t)(esi), 0x4c7b80u);
/* 478708: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 47870b: call 0x471d43 */
  esp -= 4; W32(esp, 0x478710u); SPILL(); f_471d43(); if (g_unwind) return; RELOAD();
/* 478710: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478713: mov eax, esi */
  eax = esi;
/* 478715: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478716: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47871d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47871e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478721(void) {
  LOAD_REGS();
L_478721: /* 478721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478722: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 478724: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478728: mov esi, ecx */
  esi = ecx;
/* 47872a: call 0x47867c */
  esp -= 4; W32(esp, 0x47872fu); SPILL(); f_47867c(); if (g_unwind) return; RELOAD();
/* 47872f: mov dword ptr [esi], 0x4c8568 */
  W32((uint32_t)(esi), 0x4c8568u);
/* 478735: mov eax, esi */
  eax = esi;
/* 478737: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478738: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47873b(void) {
  LOAD_REGS();
L_47873b: /* 47873b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47873c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47873e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 478742: mov esi, ecx */
  esi = ecx;
/* 478744: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 478748: call 0x4786e1 */
  esp -= 4; W32(esp, 0x47874du); SPILL(); f_4786e1(); if (g_unwind) return; RELOAD();
/* 47874d: mov dword ptr [esi], 0x4c8568 */
  W32((uint32_t)(esi), 0x4c8568u);
/* 478753: mov eax, esi */
  eax = esi;
/* 478755: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478756: ret 8 */
  esp += 12; SPILL(); return;
}

void f_478759(void) {
  LOAD_REGS();
L_478759: /* 478759: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 47875e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478763u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478764: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478767: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 478769: je 0x478792 */
  if (zf) goto L_478792;
L_47876b: /* 47876b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47876e: jne 0x478792 */
  if (!zf) goto L_478792;
L_478770: /* 478770: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 478772: call 0x4620da */
  esp -= 4; W32(esp, 0x478777u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 478777: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478778: mov ecx, eax */
  ecx = eax;
/* 47877a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 47877d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478781: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 478783: je 0x47878e */
  if (zf) goto L_47878e;
L_478785: /* 478785: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 478787: call 0x478721 */
  esp -= 4; W32(esp, 0x47878cu); SPILL(); f_478721(); if (g_unwind) return; RELOAD();
/* 47878c: jmp 0x478790 */
  goto L_478790;
L_47878e: /* 47878e: xor eax, eax */
  eax = 0;
L_478790: /* 478790: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_478792: /* 478792: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478795: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 478797: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 478798: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478799: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4787a0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4787a1: ret  */
  esp += 4; SPILL(); return;
}

void f_4787a2(void) {
  LOAD_REGS();
L_4787a2: /* 4787a2: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 4787a7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4787acu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4787ac: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4787af: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4787b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4787b3: mov esi, ecx */
  esi = ecx;
/* 4787b5: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4787b8: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4787bb: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 4787be: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4787c2: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 4787c7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4787cd: mov dword ptr [esi], 0x4c7bf8 */
  W32((uint32_t)(esi), 0x4c7bf8u);
/* 4787d3: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 4787d6: call 0x488f1b */
  esp -= 4; W32(esp, 0x4787dbu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 4787db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4787dc: mov ecx, esi */
  ecx = esi;
/* 4787de: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4787e2: call 0x471eef */
  esp -= 4; W32(esp, 0x4787e7u); SPILL(); f_471eef(); if (g_unwind) return; RELOAD();
/* 4787e7: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4787eb: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4787f1: call 0x488e1d */
  esp -= 4; W32(esp, 0x4787f6u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 4787f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4787f9: mov eax, esi */
  eax = esi;
/* 4787fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4787fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478803: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478804: ret 8 */
  esp += 12; SPILL(); return;
}

void f_478807(void) {
  LOAD_REGS();
L_478807: /* 478807: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 47880c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478811u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478811: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478812: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 478815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478816: mov esi, ecx */
  esi = ecx;
/* 478818: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 47881b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 47881e: mov al, byte ptr [ebp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 478821: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 478824: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478828: mov dword ptr [esi], 0x4c7bf8 */
  W32((uint32_t)(esi), 0x4c7bf8u);
/* 47882e: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 478831: call 0x471eef */
  esp -= 4; W32(esp, 0x478836u); SPILL(); f_471eef(); if (g_unwind) return; RELOAD();
/* 478836: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478839: mov eax, esi */
  eax = esi;
/* 47883b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47883c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478843: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478844: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_478847(void) {
  LOAD_REGS();
L_478847: /* 478847: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47884a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47884e: mov esi, ecx */
  esi = ecx;
/* 478850: call 0x4787a2 */
  esp -= 4; W32(esp, 0x478855u); SPILL(); f_4787a2(); if (g_unwind) return; RELOAD();
/* 478855: mov dword ptr [esi], 0x4c85e4 */
  W32((uint32_t)(esi), 0x4c85e4u);
/* 47885b: mov eax, esi */
  eax = esi;
/* 47885d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47885e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_478861(void) {
  LOAD_REGS();
L_478861: /* 478861: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 478864: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 478868: mov esi, ecx */
  esi = ecx;
/* 47886a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47886e: call 0x478807 */
  esp -= 4; W32(esp, 0x478873u); SPILL(); f_478807(); if (g_unwind) return; RELOAD();
/* 478873: mov dword ptr [esi], 0x4c85e4 */
  W32((uint32_t)(esi), 0x4c85e4u);
/* 478879: mov eax, esi */
  eax = esi;
/* 47887b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47887c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47887f(void) {
  LOAD_REGS();
L_47887f: /* 47887f: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 478884: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478889u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478889: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47888a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47888d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47888f: je 0x4788b8 */
  if (zf) goto L_4788b8;
L_478891: /* 478891: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478894: jne 0x4788b8 */
  if (!zf) goto L_4788b8;
L_478896: /* 478896: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 478898: call 0x4620da */
  esp -= 4; W32(esp, 0x47889du); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 47889d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47889e: mov ecx, eax */
  ecx = eax;
/* 4788a0: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4788a3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4788a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4788a9: je 0x4788b4 */
  if (zf) goto L_4788b4;
L_4788ab: /* 4788ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4788ad: call 0x478847 */
  esp -= 4; W32(esp, 0x4788b2u); SPILL(); f_478847(); if (g_unwind) return; RELOAD();
/* 4788b2: jmp 0x4788b6 */
  goto L_4788b6;
L_4788b4: /* 4788b4: xor eax, eax */
  eax = 0;
L_4788b6: /* 4788b6: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_4788b8: /* 4788b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4788bb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4788bd: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4788be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4788bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4788c6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4788c7: ret  */
  esp += 4; SPILL(); return;
}

void f_4788c8(void) {
  LOAD_REGS();
L_4788c8: /* 4788c8: mov eax, 0x48da61 */
  eax = 0x48da61u;
/* 4788cd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4788d2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4788d2: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4788d5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4788d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4788d9: mov esi, ecx */
  esi = ecx;
/* 4788db: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4788de: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4788e1: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 4788e4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4788e8: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 4788ed: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4788f3: mov dword ptr [esi], 0x4c7c70 */
  W32((uint32_t)(esi), 0x4c7c70u);
/* 4788f9: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 4788fc: call 0x488f1b */
  esp -= 4; W32(esp, 0x478901u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 478901: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478902: mov ecx, esi */
  ecx = esi;
/* 478904: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 478908: call 0x471eef */
  esp -= 4; W32(esp, 0x47890du); SPILL(); f_471eef(); if (g_unwind) return; RELOAD();
/* 47890d: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478911: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 478917: call 0x488e1d */
  esp -= 4; W32(esp, 0x47891cu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 47891c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47891f: mov eax, esi */
  eax = esi;
/* 478921: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478922: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478929: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47892a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47892d(void) {
  LOAD_REGS();
L_47892d: /* 47892d: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 478932: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478937u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478938: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47893b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47893c: mov esi, ecx */
  esi = ecx;
/* 47893e: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 478941: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 478944: mov al, byte ptr [ebp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 478947: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47894a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47894e: mov dword ptr [esi], 0x4c7c70 */
  W32((uint32_t)(esi), 0x4c7c70u);
/* 478954: mov byte ptr [esi + 0x28], al */
  W8((uint32_t)(esi + 0x28u), (eax & 0xffu));
/* 478957: call 0x471eef */
  esp -= 4; W32(esp, 0x47895cu); SPILL(); f_471eef(); if (g_unwind) return; RELOAD();
/* 47895c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47895f: mov eax, esi */
  eax = esi;
/* 478961: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478962: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478969: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47896a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47896d(void) {
  LOAD_REGS();
L_47896d: /* 47896d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47896e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 478970: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478974: mov esi, ecx */
  esi = ecx;
/* 478976: call 0x4788c8 */
  esp -= 4; W32(esp, 0x47897bu); SPILL(); f_4788c8(); if (g_unwind) return; RELOAD();
/* 47897b: mov dword ptr [esi], 0x4c8660 */
  W32((uint32_t)(esi), 0x4c8660u);
/* 478981: mov eax, esi */
  eax = esi;
/* 478983: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478984: ret 4 */
  esp += 8; SPILL(); return;
}

void f_478987(void) {
  LOAD_REGS();
L_478987: /* 478987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47898a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47898e: mov esi, ecx */
  esi = ecx;
/* 478990: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 478994: call 0x47892d */
  esp -= 4; W32(esp, 0x478999u); SPILL(); f_47892d(); if (g_unwind) return; RELOAD();
/* 478999: mov dword ptr [esi], 0x4c8660 */
  W32((uint32_t)(esi), 0x4c8660u);
/* 47899f: mov eax, esi */
  eax = esi;
/* 4789a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4789a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4789a5(void) {
  LOAD_REGS();
L_4789a5: /* 4789a5: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 4789aa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4789afu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4789af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4789b0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4789b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4789b5: je 0x4789de */
  if (zf) goto L_4789de;
L_4789b7: /* 4789b7: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4789ba: jne 0x4789de */
  if (!zf) goto L_4789de;
L_4789bc: /* 4789bc: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 4789be: call 0x4620da */
  esp -= 4; W32(esp, 0x4789c3u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4789c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4789c4: mov ecx, eax */
  ecx = eax;
/* 4789c6: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4789c9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4789cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4789cf: je 0x4789da */
  if (zf) goto L_4789da;
L_4789d1: /* 4789d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4789d3: call 0x47896d */
  esp -= 4; W32(esp, 0x4789d8u); SPILL(); f_47896d(); if (g_unwind) return; RELOAD();
/* 4789d8: jmp 0x4789dc */
  goto L_4789dc;
L_4789da: /* 4789da: xor eax, eax */
  eax = 0;
L_4789dc: /* 4789dc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_4789de: /* 4789de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4789e1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4789e3: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4789e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4789e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4789ec: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4789ed: ret  */
  esp += 4; SPILL(); return;
}

void f_4789ee(void) {
  LOAD_REGS();
L_4789ee: /* 4789ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4789ef: mov ebp, esp */
  ebp = esp;
/* 4789f1: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4789f4: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4789f9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4789fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4789fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4789fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4789ff: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 478a02: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478a05: mov ecx, edi */
  ecx = edi;
/* 478a07: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 478a0a: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* 478a0d: call 0x46e745 */
  esp -= 4; W32(esp, 0x478a12u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 478a12: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478a14: jne 0x478a3e */
  if (!zf) goto L_478a3e;
L_478a16: /* 478a16: mov ecx, edi */
  ecx = edi;
/* 478a18: call 0x47215a */
  esp -= 4; W32(esp, 0x478a1du); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 478a1d: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478a1f: mov ecx, edi */
  ecx = edi;
/* 478a21: jne 0x478a28 */
  if (!zf) goto L_478a28;
L_478a23: /* 478a23: mov byte ptr [ebp - 0x2c], al */
  W8((uint32_t)(ebp + 0xffffffd4u), (eax & 0xffu));
/* 478a26: jmp 0x478a36 */
  goto L_478a36;
L_478a28: /* 478a28: call 0x47215a */
  esp -= 4; W32(esp, 0x478a2du); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 478a2d: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478a2f: jne 0x478a3e */
  if (!zf) goto L_478a3e;
L_478a31: /* 478a31: mov byte ptr [ebp - 0x2c], al */
  W8((uint32_t)(ebp + 0xffffffd4u), (eax & 0xffu));
/* 478a34: mov ecx, edi */
  ecx = edi;
L_478a36: /* 478a36: lea esi, [ebp - 0x2b] */
  esi = (uint32_t)(ebp + 0xffffffd5u);
/* 478a39: call 0x46c710 */
  esp -= 4; W32(esp, 0x478a3eu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_478a3e: /* 478a3e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478a41: mov ecx, edi */
  ecx = edi;
/* 478a43: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 478a45: call 0x46e745 */
  esp -= 4; W32(esp, 0x478a4au); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 478a4a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478a4c: jne 0x478a9c */
  if (!zf) goto L_478a9c;
L_478a4e: /* 478a4e: mov ecx, edi */
  ecx = edi;
/* 478a50: call 0x47215a */
  esp -= 4; W32(esp, 0x478a55u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 478a55: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478a57: jne 0x478a70 */
  if (!zf) goto L_478a70;
L_478a59: /* 478a59: mov ecx, edi */
  ecx = edi;
/* 478a5b: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 478a5d: call 0x46c710 */
  esp -= 4; W32(esp, 0x478a62u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 478a62: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478a65: mov ecx, edi */
  ecx = edi;
/* 478a67: call 0x46e745 */
  esp -= 4; W32(esp, 0x478a6cu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 478a6c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478a6e: je 0x478a4e */
  if (zf) goto L_478a4e;
L_478a70: /* 478a70: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478a72: je 0x478a9c */
  if (zf) goto L_478a9c;
L_478a74: /* 478a74: mov byte ptr [esi], 0x30 */
  W8((uint32_t)(esi), 0x30u);
/* 478a77: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 478a78: jmp 0x478a9c */
  goto L_478a9c;
L_478a7a: /* 478a7a: mov ecx, edi */
  ecx = edi;
/* 478a7c: call 0x47215a */
  esp -= 4; W32(esp, 0x478a81u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 478a81: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 478a83: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 478a85: jl 0x478aaa */
  if ((sf != of)) goto L_478aaa;
L_478a87: /* 478a87: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 478a89: jg 0x478aaa */
  if ((!zf && sf == of)) goto L_478aaa;
L_478a8b: /* 478a8b: lea eax, [ebp - 0xd] */
  eax = (uint32_t)(ebp + 0xfffffff3u);
/* 478a8e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478a90: jae 0x478a93 */
  if (!cf) goto L_478a93;
L_478a92: /* 478a92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_478a93: /* 478a93: mov ecx, edi */
  ecx = edi;
/* 478a95: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 478a97: call 0x46c710 */
  esp -= 4; W32(esp, 0x478a9cu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_478a9c: /* 478a9c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478a9f: mov ecx, edi */
  ecx = edi;
/* 478aa1: call 0x46e745 */
  esp -= 4; W32(esp, 0x478aa6u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 478aa6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478aa8: je 0x478a7a */
  if (zf) goto L_478a7a;
L_478aaa: /* 478aaa: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478aac: jne 0x478ab1 */
  if (!zf) goto L_478ab1;
L_478aae: /* 478aae: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
L_478ab1: /* 478ab1: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 478ab4: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 478aba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x478abcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478abc: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 478abf: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 478ac1: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 478ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478ac5: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 478ac8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478ac9: call dword ptr [0x48e0ac] */
  esp -= 4; W32(esp, 0x478acfu); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 478acf: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 478ad3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 478ad6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478ad9: mov ecx, edi */
  ecx = edi;
/* 478adb: mov ebx, eax */
  ebx = eax;
/* 478add: call 0x46e745 */
  esp -= 4; W32(esp, 0x478ae2u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 478ae2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478ae4: je 0x478aed */
  if (zf) goto L_478aed;
L_478ae6: /* 478ae6: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
L_478aed: /* 478aed: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 478af0: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478af3: je 0x478b0d */
  if (zf) goto L_478b0d;
L_478af5: /* 478af5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x478af7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478af7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478afa: jne 0x478b0d */
  if (!zf) goto L_478b0d;
L_478afc: /* 478afc: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478aff: jl 0x478b0d */
  if ((sf != of)) goto L_478b0d;
L_478b01: /* 478b01: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478b04: jl 0x478b0d */
  if ((sf != of)) goto L_478b0d;
L_478b06: /* 478b06: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 478b09: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 478b0b: jmp 0x478b11 */
  goto L_478b11;
L_478b0d: /* 478b0d: or dword ptr [ebp - 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_478b11: /* 478b11: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 478b14: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 478b17: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 478b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478b1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478b1d: call 0x46190c */
  esp -= 4; W32(esp, 0x478b22u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 478b22: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478b23: ret  */
  esp += 4; SPILL(); return;
}

void f_478b24(void) {
  LOAD_REGS();
L_478b24: /* 478b24: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 478b25: mov ebp, esp */
  ebp = esp;
/* 478b27: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478b2a: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 478b2f: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 478b32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478b33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478b34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478b35: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 478b38: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478b3b: mov ecx, edi */
  ecx = edi;
/* 478b3d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 478b40: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
/* 478b43: call 0x46e77f */
  esp -= 4; W32(esp, 0x478b48u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 478b48: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478b4a: jne 0x478b8c */
  if (!zf) goto L_478b8c;
L_478b4c: /* 478b4c: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 478b4e: call 0x461d6f */
  esp -= 4; W32(esp, 0x478b53u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 478b53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478b54: mov ecx, edi */
  ecx = edi;
/* 478b56: mov ebx, eax */
  ebx = eax;
/* 478b58: call 0x472198 */
  esp -= 4; W32(esp, 0x478b5du); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 478b5d: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 478b60: jne 0x478b68 */
  if (!zf) goto L_478b68;
L_478b62: /* 478b62: mov byte ptr [ebp - 0x30], 0x2b */
  W8((uint32_t)(ebp + 0xffffffd0u), 0x2bu);
/* 478b66: jmp 0x478b82 */
  goto L_478b82;
L_478b68: /* 478b68: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 478b6a: call 0x461d6f */
  esp -= 4; W32(esp, 0x478b6fu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 478b6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478b70: mov ecx, edi */
  ecx = edi;
/* 478b72: mov ebx, eax */
  ebx = eax;
/* 478b74: call 0x472198 */
  esp -= 4; W32(esp, 0x478b79u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 478b79: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 478b7c: jne 0x478b8c */
  if (!zf) goto L_478b8c;
L_478b7e: /* 478b7e: mov byte ptr [ebp - 0x30], 0x2d */
  W8((uint32_t)(ebp + 0xffffffd0u), 0x2du);
L_478b82: /* 478b82: mov ecx, edi */
  ecx = edi;
/* 478b84: lea esi, [ebp - 0x2f] */
  esi = (uint32_t)(ebp + 0xffffffd1u);
/* 478b87: call 0x46c756 */
  esp -= 4; W32(esp, 0x478b8cu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_478b8c: /* 478b8c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478b8f: and byte ptr [ebp - 5], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffbu), r);
  }
/* 478b93: mov ecx, edi */
  ecx = edi;
/* 478b95: call 0x46e77f */
  esp -= 4; W32(esp, 0x478b9au); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 478b9a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478b9c: jne 0x478c04 */
  if (!zf) goto L_478c04;
L_478b9e: /* 478b9e: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 478ba0: call 0x461d6f */
  esp -= 4; W32(esp, 0x478ba5u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 478ba5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478ba6: mov ecx, edi */
  ecx = edi;
/* 478ba8: mov ebx, eax */
  ebx = eax;
/* 478baa: call 0x472198 */
  esp -= 4; W32(esp, 0x478bafu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 478baf: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 478bb2: jne 0x478bcd */
  if (!zf) goto L_478bcd;
L_478bb4: /* 478bb4: mov ecx, edi */
  ecx = edi;
/* 478bb6: mov byte ptr [ebp - 5], 1 */
  W8((uint32_t)(ebp + 0xfffffffbu), 0x1u);
/* 478bba: call 0x46c756 */
  esp -= 4; W32(esp, 0x478bbfu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 478bbf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478bc2: mov ecx, edi */
  ecx = edi;
/* 478bc4: call 0x46e77f */
  esp -= 4; W32(esp, 0x478bc9u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 478bc9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478bcb: je 0x478b9e */
  if (zf) goto L_478b9e;
L_478bcd: /* 478bcd: cmp byte ptr [ebp - 5], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478bd1: je 0x478c04 */
  if (zf) goto L_478c04;
L_478bd3: /* 478bd3: mov byte ptr [esi], 0x30 */
  W8((uint32_t)(esi), 0x30u);
/* 478bd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 478bd7: jmp 0x478c04 */
  goto L_478c04;
L_478bd9: /* 478bd9: mov ecx, edi */
  ecx = edi;
/* 478bdb: call 0x472198 */
  esp -= 4; W32(esp, 0x478be0u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 478be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478be1: call 0x488a88 */
  esp -= 4; W32(esp, 0x478be6u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 478be6: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 478be8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478be9: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 478beb: jl 0x478c12 */
  if ((sf != of)) goto L_478c12;
L_478bed: /* 478bed: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 478bef: jg 0x478c12 */
  if ((!zf && sf == of)) goto L_478c12;
L_478bf1: /* 478bf1: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 478bf4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478bf6: jae 0x478bf9 */
  if (!cf) goto L_478bf9;
L_478bf8: /* 478bf8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_478bf9: /* 478bf9: mov ecx, edi */
  ecx = edi;
/* 478bfb: mov byte ptr [ebp - 5], 1 */
  W8((uint32_t)(ebp + 0xfffffffbu), 0x1u);
/* 478bff: call 0x46c756 */
  esp -= 4; W32(esp, 0x478c04u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_478c04: /* 478c04: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478c07: mov ecx, edi */
  ecx = edi;
/* 478c09: call 0x46e77f */
  esp -= 4; W32(esp, 0x478c0eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 478c0e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478c10: je 0x478bd9 */
  if (zf) goto L_478bd9;
L_478c12: /* 478c12: cmp byte ptr [ebp - 5], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffbu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478c16: jne 0x478c1b */
  if (!zf) goto L_478c1b;
L_478c18: /* 478c18: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
L_478c1b: /* 478c1b: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 478c1e: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 478c24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x478c26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478c26: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 478c29: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 478c2b: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 478c2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478c2f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 478c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478c33: call dword ptr [0x48e0ac] */
  esp -= 4; W32(esp, 0x478c39u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 478c39: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 478c3d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 478c40: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 478c43: mov ecx, edi */
  ecx = edi;
/* 478c45: mov ebx, eax */
  ebx = eax;
/* 478c47: call 0x46e77f */
  esp -= 4; W32(esp, 0x478c4cu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 478c4c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478c4e: je 0x478c57 */
  if (zf) goto L_478c57;
L_478c50: /* 478c50: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
L_478c57: /* 478c57: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 478c5a: cmp dword ptr [ebp - 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478c5d: je 0x478c77 */
  if (zf) goto L_478c77;
L_478c5f: /* 478c5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x478c61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478c61: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478c64: jne 0x478c77 */
  if (!zf) goto L_478c77;
L_478c66: /* 478c66: cmp ebx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478c69: jl 0x478c77 */
  if ((sf != of)) goto L_478c77;
L_478c6b: /* 478c6b: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478c6e: jl 0x478c77 */
  if ((sf != of)) goto L_478c77;
L_478c70: /* 478c70: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 478c73: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 478c75: jmp 0x478c7b */
  goto L_478c7b;
L_478c77: /* 478c77: or dword ptr [ebp - 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_478c7b: /* 478c7b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 478c7e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 478c81: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478c84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478c85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478c86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478c87: call 0x46190c */
  esp -= 4; W32(esp, 0x478c8cu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 478c8c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478c8d: ret  */
  esp += 4; SPILL(); return;
}

void f_478c8e(void) {
  LOAD_REGS();
L_478c8e: /* 478c8e: mov eax, 0x48d04d */
  eax = 0x48d04du;
/* 478c93: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478c98u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478c98: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478c9b: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 478ca0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 478ca3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478ca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478ca5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478ca6: mov esi, 0x4c8ea4 */
  esi = 0x4c8ea4u;
/* 478cab: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
/* 478cae: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 478caf: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* 478cb0: mov ebx, ecx */
  ebx = ecx;
/* 478cb2: xor esi, esi */
  esi = 0;
/* 478cb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478cb5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 478cb8: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 478cbb: mov dword ptr [ebp - 0x1c], 0xf */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfu);
/* 478cc2: call 0x461ed0 */
  esp -= 4; W32(esp, 0x478cc7u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 478cc7: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 478cca: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478ccc: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 478ccf: jne 0x478cd9 */
  if (!zf) goto L_478cd9;
L_478cd1: /* 478cd1: mov al, byte ptr [ebp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x20u))) & 0xffu);
/* 478cd4: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 478cd7: jmp 0x478ce2 */
  goto L_478ce2;
L_478cd9: /* 478cd9: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 478cdc: mov al, byte ptr [ebp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x20u))) & 0xffu);
/* 478cdf: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
L_478ce2: /* 478ce2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 478ce4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_478ce5: /* 478ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478ce6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478ce7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 478cea: call 0x466156 */
  esp -= 4; W32(esp, 0x478cefu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 478cef: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478cf3: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 478cf6: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 478cf9: jae 0x478cfe */
  if (!cf) goto L_478cfe;
L_478cfb: /* 478cfb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
L_478cfe: /* 478cfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478cff: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 478d02: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 478d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478d06: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 478d09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 478d0a: call dword ptr [0x48e0b4] */
  esp -= 4; W32(esp, 0x478d10u); SPILL(); f_41511c(); if (g_unwind) return; /* MSVCR70!_Strftime */ RELOAD();
/* 478d10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 478d13: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 478d15: ja 0x478d1b */
  if ((!cf && !zf)) goto L_478d1b;
L_478d17: /* 478d17: add edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 478d19: jmp 0x478ce5 */
  goto L_478ce5;
L_478d1b: /* 478d1b: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478d1f: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 478d22: jae 0x478d27 */
  if (!cf) goto L_478d27;
L_478d24: /* 478d24: lea esi, [ebp - 0x30] */
  esi = (uint32_t)(ebp + 0xffffffd0u);
L_478d27: /* 478d27: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 478d28: je 0x478d3d */
  if (zf) goto L_478d3d;
L_478d2a: /* 478d2a: mov edi, eax */
  edi = eax;
L_478d2c: /* 478d2c: xor eax, eax */
  eax = 0;
/* 478d2e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 478d2f: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 478d31: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 478d34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478d35: call 0x46c6ef */
  esp -= 4; W32(esp, 0x478d3au); SPILL(); f_46c6ef(); if (g_unwind) return; RELOAD();
/* 478d3a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 478d3b: jne 0x478d2c */
  if (!zf) goto L_478d2c;
L_478d3d: /* 478d3d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 478d40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478d43: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 478d45: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 478d48: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 478d4a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 478d4d: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 478d50: call 0x461ea8 */
  esp -= 4; W32(esp, 0x478d55u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 478d55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478d5f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 478d62: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 478d65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478d66: mov eax, esi */
  eax = esi;
/* 478d68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478d69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478d6a: call 0x46190c */
  esp -= 4; W32(esp, 0x478d6fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 478d6f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478d70: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_478d73(void) {
  LOAD_REGS();
L_478d73: /* 478d73: mov eax, 0x48d067 */
  eax = 0x48d067u;
/* 478d78: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478d7du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478d7d: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478d80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478d81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478d82: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478d85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478d86: xor ebx, ebx */
  ebx = 0;
/* 478d88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 478d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478d8d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 478d90: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 478d93: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 478d96: call 0x466d1b */
  esp -= 4; W32(esp, 0x478d9bu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 478d9b: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478d9e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478da1: je 0x478e62 */
  if (zf) goto L_478e62;
L_478da7: /* 478da7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 478daa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478dab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478dad: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478db0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478db2: call 0x464a5a */
  esp -= 4; W32(esp, 0x478db7u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 478db7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478db8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 478dbc: call 0x46587a */
  esp -= 4; W32(esp, 0x478dc1u); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 478dc1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478dc2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 478dc5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 478dc8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 478dcb: call 0x461389 */
  esp -= 4; W32(esp, 0x478dd0u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 478dd0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 478dd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 478dd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478dd6: call 0x466522 */
  esp -= 4; W32(esp, 0x478ddbu); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 478ddb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478ddd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478de0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478de2: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 478de5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478de7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 478deb: jle 0x478df6 */
  if ((zf || sf != of)) goto L_478df6;
L_478ded: /* 478ded: cmp ecx, -2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478df0: jae 0x478df6 */
  if (!cf) goto L_478df6;
L_478df2: /* 478df2: mov edi, ecx */
  edi = ecx;
/* 478df4: jmp 0x478df9 */
  goto L_478df9;
L_478df6: /* 478df6: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 478df8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_478df9: /* 478df9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 478dfc: call 0x46567c */
  esp -= 4; W32(esp, 0x478e01u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_478e01: /* 478e01: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 478e03: jbe 0x478e62 */
  if ((cf | zf)) goto L_478e62;
L_478e05: /* 478e05: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 478e08: jne 0x478e10 */
  if (!zf) goto L_478e10;
L_478e0a: /* 478e0a: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 478e0e: jmp 0x478e62 */
  goto L_478e62;
L_478e10: /* 478e10: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 478e13: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 478e16: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 478e19: test byte ptr [edx + ecx*2], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 478e1d: jne 0x478e62 */
  if (!zf) goto L_478e62;
L_478e1f: /* 478e1f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 478e22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478e23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 478e25: call 0x466156 */
  esp -= 4; W32(esp, 0x478e2au); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 478e2a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478e2c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478e2f: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 478e33: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 478e37: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 478e38: call 0x465c50 */
  esp -= 4; W32(esp, 0x478e3du); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 478e3d: jmp 0x478e01 */
  goto L_478e01;
L_478e62: /* 478e62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478e64: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478e67: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478e69: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478e6c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478e6f: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 478e72: jne 0x478e78 */
  if (!zf) goto L_478e78;
L_478e74: /* 478e74: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_478e78: /* 478e78: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478e7a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478e7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478e7e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 478e81: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478e83: call 0x461453 */
  esp -= 4; W32(esp, 0x478e88u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 478e88: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478e8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 478e8f: call 0x46228e */
  esp -= 4; W32(esp, 0x478e94u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 478e94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478e97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478e98: mov eax, esi */
  eax = esi;
/* 478e9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478e9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478ea3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478ea4: ret  */
  esp += 4; SPILL(); return;
}

void f_478e3f(void) {
  LOAD_REGS();
L_478e3f: /* 478e3f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 478e42: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 478e44: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 478e47: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478e49: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 478e4c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 478e4e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 478e51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478e52: call 0x464bb2 */
  esp -= 4; W32(esp, 0x478e57u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 478e57: mov eax, 0x478e5d */
  eax = 0x478e5du;
/* 478e5c: ret  */
  esp += 4; SPILL(); return;
}

void f_478e5d(void) {
  LOAD_REGS();
L_478e5d: /* 478e5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478e60: xor ebx, ebx */
  ebx = 0;
/* 478e62: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478e64: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478e67: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478e69: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478e6c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478e6f: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 478e72: jne 0x478e78 */
  if (!zf) goto L_478e78;
L_478e74: /* 478e74: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_478e78: /* 478e78: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478e7a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478e7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478e7e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 478e81: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478e83: call 0x461453 */
  esp -= 4; W32(esp, 0x478e88u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x478e5du: guest_unwind_done(); RELOAD(); goto L_478e5d; } return; } RELOAD();
/* 478e88: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478e8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 478e8f: call 0x46228e */
  esp -= 4; W32(esp, 0x478e94u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x478e5du: guest_unwind_done(); RELOAD(); goto L_478e5d; } return; } RELOAD();
/* 478e94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478e97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478e98: mov eax, esi */
  eax = esi;
/* 478e9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478e9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478ea3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478ea4: ret  */
  esp += 4; SPILL(); return;
}

void f_478ea5(void) {
  LOAD_REGS();
L_478ea5: /* 478ea5: mov eax, 0x48d081 */
  eax = 0x48d081u;
/* 478eaa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478eafu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478eaf: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478eb2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478eb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478eb4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478eb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478eb8: xor ebx, ebx */
  ebx = 0;
/* 478eba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 478ebd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478ebe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478ebf: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 478ec2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 478ec5: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 478ec8: call 0x466d56 */
  esp -= 4; W32(esp, 0x478ecdu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 478ecd: cmp byte ptr [ebp - 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478ed0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478ed3: je 0x478fa0 */
  if (zf) goto L_478fa0;
L_478ed9: /* 478ed9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 478edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478edd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478edf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478ee2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478ee4: call 0x464a5a */
  esp -= 4; W32(esp, 0x478ee9u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 478ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478eea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 478eee: call 0x46591c */
  esp -= 4; W32(esp, 0x478ef3u); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 478ef3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 478ef4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 478ef7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 478efa: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 478efd: call 0x461389 */
  esp -= 4; W32(esp, 0x478f02u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 478f02: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 478f05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 478f07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478f08: call 0x47349c */
  esp -= 4; W32(esp, 0x478f0du); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 478f0d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478f0f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478f12: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478f14: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 478f17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 478f19: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 478f1d: jle 0x478f2a */
  if ((zf || sf != of)) goto L_478f2a;
L_478f1f: /* 478f1f: cmp ecx, 0x7ffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 478f25: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 478f28: jb 0x478f31 */
  if (cf) goto L_478f31;
L_478f2a: /* 478f2a: mov dword ptr [ebp - 0x1c], 0x7ffffffe */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7ffffffeu);
L_478f31: /* 478f31: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 478f34: call 0x4657fc */
  esp -= 4; W32(esp, 0x478f39u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_478f39: /* 478f39: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 478f3c: mov edi, eax */
  edi = eax;
/* 478f3e: jbe 0x478fa0 */
  if ((cf | zf)) goto L_478fa0;
L_478f40: /* 478f40: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 478f44: jne 0x478f4c */
  if (!zf) goto L_478f4c;
L_478f46: /* 478f46: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 478f4a: jmp 0x478fa0 */
  goto L_478fa0;
L_478f4c: /* 478f4c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 478f4f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 478f51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478f52: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 478f54: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x478f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 478f57: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478f59: jne 0x478fa0 */
  if (!zf) goto L_478fa0;
L_478f5b: /* 478f5b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 478f5e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478f5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 478f61: call 0x473236 */
  esp -= 4; W32(esp, 0x478f66u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 478f66: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478f68: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478f6b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 478f6f: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 478f72: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 478f76: call 0x465c69 */
  esp -= 4; W32(esp, 0x478f7bu); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 478f7b: jmp 0x478f39 */
  goto L_478f39;
L_478fa0: /* 478fa0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478fa2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478fa5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478fa7: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478faa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478fad: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 478fb0: jne 0x478fb6 */
  if (!zf) goto L_478fb6;
L_478fb2: /* 478fb2: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_478fb6: /* 478fb6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478fb8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478fbc: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 478fbf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478fc1: call 0x461453 */
  esp -= 4; W32(esp, 0x478fc6u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 478fc6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478fca: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 478fcd: call 0x46228e */
  esp -= 4; W32(esp, 0x478fd2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 478fd2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478fd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478fd6: mov eax, esi */
  eax = esi;
/* 478fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478fd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478fe0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478fe1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478fe2: ret  */
  esp += 4; SPILL(); return;
}

void f_478f7d(void) {
  LOAD_REGS();
L_478f7d: /* 478f7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 478f80: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 478f82: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 478f85: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478f87: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 478f8a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 478f8c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 478f8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 478f90: call 0x464bb2 */
  esp -= 4; W32(esp, 0x478f95u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 478f95: mov eax, 0x478f9b */
  eax = 0x478f9bu;
/* 478f9a: ret  */
  esp += 4; SPILL(); return;
}

void f_478f9b(void) {
  LOAD_REGS();
L_478f9b: /* 478f9b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478f9e: xor ebx, ebx */
  ebx = 0;
/* 478fa0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478fa2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 478fa5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 478fa7: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 478faa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 478fad: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 478fb0: jne 0x478fb6 */
  if (!zf) goto L_478fb6;
L_478fb2: /* 478fb2: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_478fb6: /* 478fb6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 478fb8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 478fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478fbc: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 478fbf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 478fc1: call 0x461453 */
  esp -= 4; W32(esp, 0x478fc6u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x478f9bu: guest_unwind_done(); RELOAD(); goto L_478f9b; } return; } RELOAD();
/* 478fc6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 478fca: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 478fcd: call 0x46228e */
  esp -= 4; W32(esp, 0x478fd2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x478f9bu: guest_unwind_done(); RELOAD(); goto L_478f9b; } return; } RELOAD();
/* 478fd2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 478fd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 478fd6: mov eax, esi */
  eax = esi;
/* 478fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 478fd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 478fe0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 478fe1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 478fe2: ret  */
  esp += 4; SPILL(); return;
}

void f_478fe3(void) {
  LOAD_REGS();
L_478fe3: /* 478fe3: mov eax, 0x48d09b */
  eax = 0x48d09bu;
/* 478fe8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x478fedu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 478fed: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 478ff0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478ff1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478ff2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 478ff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 478ff6: xor ebx, ebx */
  ebx = 0;
/* 478ff8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 478ffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 478ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 478ffd: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 479000: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 479003: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 479006: call 0x466d91 */
  esp -= 4; W32(esp, 0x47900bu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47900b: cmp byte ptr [ebp - 0x28], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47900e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 479011: je 0x4790de */
  if (zf) goto L_4790de;
L_479017: /* 479017: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 47901a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47901b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47901d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 479020: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479022: call 0x464a5a */
  esp -= 4; W32(esp, 0x479027u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 479027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479028: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47902c: call 0x4659be */
  esp -= 4; W32(esp, 0x479031u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 479031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479032: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 479035: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 479038: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47903b: call 0x461389 */
  esp -= 4; W32(esp, 0x479040u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 479040: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 479043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 479045: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479046: call 0x47349c */
  esp -= 4; W32(esp, 0x47904bu); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47904b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47904d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 479050: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 479052: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 479055: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 479057: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47905b: jle 0x479068 */
  if ((zf || sf != of)) goto L_479068;
L_47905d: /* 47905d: cmp ecx, 0x7ffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 479063: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 479066: jb 0x47906f */
  if (cf) goto L_47906f;
L_479068: /* 479068: mov dword ptr [ebp - 0x1c], 0x7ffffffe */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x7ffffffeu);
L_47906f: /* 47906f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 479072: call 0x4657fc */
  esp -= 4; W32(esp, 0x479077u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_479077: /* 479077: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47907a: mov edi, eax */
  edi = eax;
/* 47907c: jbe 0x4790de */
  if ((cf | zf)) goto L_4790de;
L_47907e: /* 47907e: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479082: jne 0x47908a */
  if (!zf) goto L_47908a;
L_479084: /* 479084: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 479088: jmp 0x4790de */
  goto L_4790de;
L_47908a: /* 47908a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 47908d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47908f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479090: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 479092: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x479095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 479095: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 479097: jne 0x4790de */
  if (!zf) goto L_4790de;
L_479099: /* 479099: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47909c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47909d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47909f: call 0x473236 */
  esp -= 4; W32(esp, 0x4790a4u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 4790a4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4790a6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4790a9: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4790ad: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 4790b0: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 4790b4: call 0x465c69 */
  esp -= 4; W32(esp, 0x4790b9u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 4790b9: jmp 0x479077 */
  goto L_479077;
L_4790de: /* 4790de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4790e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4790e3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4790e5: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4790e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4790eb: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4790ee: jne 0x4790f4 */
  if (!zf) goto L_4790f4;
L_4790f0: /* 4790f0: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_4790f4: /* 4790f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4790f6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4790f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4790fa: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4790fd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4790ff: call 0x461453 */
  esp -= 4; W32(esp, 0x479104u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 479104: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479108: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 47910b: call 0x46228e */
  esp -= 4; W32(esp, 0x479110u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 479110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 479114: mov eax, esi */
  eax = esi;
/* 479116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47911e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47911f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479120: ret  */
  esp += 4; SPILL(); return;
}

void f_4790bb(void) {
  LOAD_REGS();
L_4790bb: /* 4790bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4790be: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4790c0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4790c3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4790c5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4790c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4790ca: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4790cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4790ce: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4790d3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4790d3: mov eax, 0x4790d9 */
  eax = 0x4790d9u;
/* 4790d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4790d9(void) {
  LOAD_REGS();
L_4790d9: /* 4790d9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4790dc: xor ebx, ebx */
  ebx = 0;
/* 4790de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4790e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4790e3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4790e5: cmp byte ptr [ebp - 0x11], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4790e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4790eb: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 4790ee: jne 0x4790f4 */
  if (!zf) goto L_4790f4;
L_4790f0: /* 4790f0: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_4790f4: /* 4790f4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4790f6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4790f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4790fa: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4790fd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4790ff: call 0x461453 */
  esp -= 4; W32(esp, 0x479104u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4790d9u: guest_unwind_done(); RELOAD(); goto L_4790d9; } return; } RELOAD();
/* 479104: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479108: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 47910b: call 0x46228e */
  esp -= 4; W32(esp, 0x479110u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4790d9u: guest_unwind_done(); RELOAD(); goto L_4790d9; } return; } RELOAD();
/* 479110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479113: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 479114: mov eax, esi */
  eax = esi;
/* 479116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47911e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47911f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479120: ret  */
  esp += 4; SPILL(); return;
}

void f_479121(void) {
  LOAD_REGS();
L_479121: /* 479121: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 479122: mov ebp, esp */
  ebp = esp;
/* 479124: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479127: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479128: fldz  */
  FPUSH(0.0);
/* 47912a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47912d: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 479130: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 479133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479135: call 0x4722fb */
  esp -= 4; W32(esp, 0x47913au); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 47913a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47913c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47913d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47913e: jne 0x479144 */
  if (!zf) goto L_479144;
L_479140: /* 479140: xor ecx, ecx */
  ecx = 0;
/* 479142: jmp 0x47914b */
  goto L_47914b;
L_479144: /* 479144: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479146: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479149: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47914b: /* 47914b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47914e: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479150: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479152: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479154: not eax */
  eax = ~eax;
/* 479156: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479158: je 0x479177 */
  if (zf) goto L_479177;
L_47915a: /* 47915a: cmp byte ptr [ebp + 8], 0x28 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x28u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47915e: je 0x479177 */
  if (zf) goto L_479177;
L_479160: /* 479160: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 479163: mov ecx, esi */
  ecx = esi;
/* 479165: call 0x475085 */
  esp -= 4; W32(esp, 0x47916au); SPILL(); f_475085(); if (g_unwind) return; RELOAD();
/* 47916a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47916d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47916e: mov ecx, esi */
  ecx = esi;
/* 479170: call 0x474791 */
  esp -= 4; W32(esp, 0x479175u); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 479175: jmp 0x4791b8 */
  goto L_4791b8;
L_479177: /* 479177: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47917a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47917b: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47917e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47917f: mov ecx, esi */
  ecx = esi;
/* 479181: call 0x474791 */
  esp -= 4; W32(esp, 0x479186u); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 479186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479187: call 0x4722fb */
  esp -= 4; W32(esp, 0x47918cu); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 47918c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47918e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47918f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479190: jne 0x479196 */
  if (!zf) goto L_479196;
L_479192: /* 479192: xor ecx, ecx */
  ecx = 0;
/* 479194: jmp 0x47919d */
  goto L_47919d;
L_479196: /* 479196: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479198: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47919b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47919d: /* 47919d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4791a0: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4791a2: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4791a4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4791a6: not eax */
  eax = ~eax;
/* 4791a8: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4791aa: je 0x4791bf */
  if (zf) goto L_4791bf;
L_4791ac: /* 4791ac: cmp byte ptr [ebp + 8], 0x2c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4791b0: je 0x4791bf */
  if (zf) goto L_4791bf;
L_4791b2: /* 4791b2: cmp byte ptr [ebp + 8], 0x29 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x29u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4791b6: jne 0x4791fa */
  if (!zf) goto L_4791fa;
L_4791b8: /* 4791b8: fldz  */
  FPUSH(0.0);
/* 4791ba: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4791bd: jmp 0x479219 */
  goto L_479219;
L_4791bf: /* 4791bf: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4791c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4791c3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4791c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4791c7: mov ecx, esi */
  ecx = esi;
/* 4791c9: call 0x474791 */
  esp -= 4; W32(esp, 0x4791ceu); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 4791ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4791cf: call 0x4722fb */
  esp -= 4; W32(esp, 0x4791d4u); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 4791d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4791d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4791d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4791d8: jne 0x4791de */
  if (!zf) goto L_4791de;
L_4791da: /* 4791da: xor ecx, ecx */
  ecx = 0;
/* 4791dc: jmp 0x4791e5 */
  goto L_4791e5;
L_4791de: /* 4791de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4791e0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4791e3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4791e5: /* 4791e5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4791e8: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4791ea: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4791ec: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4791ee: not eax */
  eax = ~eax;
/* 4791f0: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4791f2: je 0x479219 */
  if (zf) goto L_479219;
L_4791f4: /* 4791f4: cmp byte ptr [ebp + 8], 0x29 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x29u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4791f8: je 0x479219 */
  if (zf) goto L_479219;
L_4791fa: /* 4791fa: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4791fd: mov ecx, esi */
  ecx = esi;
/* 4791ff: call 0x475085 */
  esp -= 4; W32(esp, 0x479204u); SPILL(); f_475085(); if (g_unwind) return; RELOAD();
/* 479204: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 479206: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 479209: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47920b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47920e: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 479211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479213: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479214: call 0x464bb2 */
  esp -= 4; W32(esp, 0x479219u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_479219: /* 479219: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47921b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47921e: test byte ptr [eax + esi + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479223: jne 0x47923f */
  if (!zf) goto L_47923f;
L_479225: /* 479225: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 479228: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47922b: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 47922e: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 479231: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 479234: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 479237: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 479239: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47923c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_47923f: /* 47923f: mov eax, esi */
  eax = esi;
/* 479241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479242: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479243: ret  */
  esp += 4; SPILL(); return;
}

void f_479244(void) {
  LOAD_REGS();
L_479244: /* 479244: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 479245: mov ebp, esp */
  ebp = esp;
/* 479247: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47924a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47924b: fldz  */
  FPUSH(0.0);
/* 47924d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 479250: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 479253: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 479256: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479258: call 0x4724db */
  esp -= 4; W32(esp, 0x47925du); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 47925d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47925f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479260: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479261: jne 0x479267 */
  if (!zf) goto L_479267;
L_479263: /* 479263: xor ecx, ecx */
  ecx = 0;
/* 479265: jmp 0x47926e */
  goto L_47926e;
L_479267: /* 479267: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479269: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47926c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47926e: /* 47926e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479271: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479273: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479275: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479277: not eax */
  eax = ~eax;
/* 479279: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47927b: je 0x47929b */
  if (zf) goto L_47929b;
L_47927d: /* 47927d: cmp word ptr [ebp + 8], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479282: je 0x47929b */
  if (zf) goto L_47929b;
L_479284: /* 479284: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 479287: mov ecx, esi */
  ecx = esi;
/* 479289: call 0x4764ef */
  esp -= 4; W32(esp, 0x47928eu); SPILL(); f_4764ef(); if (g_unwind) return; RELOAD();
/* 47928e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 479291: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479292: mov ecx, esi */
  ecx = esi;
/* 479294: call 0x475be1 */
  esp -= 4; W32(esp, 0x479299u); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 479299: jmp 0x4792de */
  goto L_4792de;
L_47929b: /* 47929b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47929e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47929f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4792a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4792a3: mov ecx, esi */
  ecx = esi;
/* 4792a5: call 0x475be1 */
  esp -= 4; W32(esp, 0x4792aau); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 4792aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4792ab: call 0x4724db */
  esp -= 4; W32(esp, 0x4792b0u); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 4792b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4792b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4792b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4792b4: jne 0x4792ba */
  if (!zf) goto L_4792ba;
L_4792b6: /* 4792b6: xor ecx, ecx */
  ecx = 0;
/* 4792b8: jmp 0x4792c1 */
  goto L_4792c1;
L_4792ba: /* 4792ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4792bc: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4792bf: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4792c1: /* 4792c1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4792c4: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4792c6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4792c8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4792ca: not eax */
  eax = ~eax;
/* 4792cc: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4792ce: je 0x4792e5 */
  if (zf) goto L_4792e5;
L_4792d0: /* 4792d0: cmp word ptr [ebp + 8], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4792d5: je 0x4792e5 */
  if (zf) goto L_4792e5;
L_4792d7: /* 4792d7: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4792dc: jne 0x479321 */
  if (!zf) goto L_479321;
L_4792de: /* 4792de: fldz  */
  FPUSH(0.0);
/* 4792e0: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4792e3: jmp 0x479340 */
  goto L_479340;
L_4792e5: /* 4792e5: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4792e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4792e9: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4792ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4792ed: mov ecx, esi */
  ecx = esi;
/* 4792ef: call 0x475be1 */
  esp -= 4; W32(esp, 0x4792f4u); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 4792f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4792f5: call 0x4724db */
  esp -= 4; W32(esp, 0x4792fau); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 4792fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4792fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4792fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4792fe: jne 0x479304 */
  if (!zf) goto L_479304;
L_479300: /* 479300: xor ecx, ecx */
  ecx = 0;
/* 479302: jmp 0x47930b */
  goto L_47930b;
L_479304: /* 479304: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479306: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479309: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47930b: /* 47930b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47930e: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479310: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479312: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479314: not eax */
  eax = ~eax;
/* 479316: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479318: je 0x479340 */
  if (zf) goto L_479340;
L_47931a: /* 47931a: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47931f: je 0x479340 */
  if (zf) goto L_479340;
L_479321: /* 479321: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 479324: mov ecx, esi */
  ecx = esi;
/* 479326: call 0x4764ef */
  esp -= 4; W32(esp, 0x47932bu); SPILL(); f_4764ef(); if (g_unwind) return; RELOAD();
/* 47932b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47932d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 479330: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479332: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479335: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 479338: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47933a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47933b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x479340u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_479340: /* 479340: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 479342: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 479345: test byte ptr [eax + esi + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47934a: jne 0x479366 */
  if (!zf) goto L_479366;
L_47934c: /* 47934c: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 47934f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 479352: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 479355: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 479358: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47935b: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 47935e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 479360: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479363: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_479366: /* 479366: mov eax, esi */
  eax = esi;
/* 479368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479369: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47936a: ret  */
  esp += 4; SPILL(); return;
}

void f_47936b(void) {
  LOAD_REGS();
L_47936b: /* 47936b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47936c: mov ebp, esp */
  ebp = esp;
/* 47936e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479372: fldz  */
  FPUSH(0.0);
/* 479374: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 479377: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 47937a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47937d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47937e: mov ecx, esi */
  ecx = esi;
/* 479380: call 0x476831 */
  esp -= 4; W32(esp, 0x479385u); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 479385: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479387: jne 0x47938d */
  if (!zf) goto L_47938d;
L_479389: /* 479389: xor ecx, ecx */
  ecx = 0;
/* 47938b: jmp 0x479394 */
  goto L_479394;
L_47938d: /* 47938d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47938f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479392: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_479394: /* 479394: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479397: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479399: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47939b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47939d: not eax */
  eax = ~eax;
/* 47939f: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4793a1: je 0x4793c1 */
  if (zf) goto L_4793c1;
L_4793a3: /* 4793a3: cmp word ptr [ebp + 8], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4793a8: je 0x4793c1 */
  if (zf) goto L_4793c1;
L_4793aa: /* 4793aa: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4793ad: mov ecx, esi */
  ecx = esi;
/* 4793af: call 0x47795b */
  esp -= 4; W32(esp, 0x4793b4u); SPILL(); f_47795b(); if (g_unwind) return; RELOAD();
/* 4793b4: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4793b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4793b8: mov ecx, esi */
  ecx = esi;
/* 4793ba: call 0x47704d */
  esp -= 4; W32(esp, 0x4793bfu); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 4793bf: jmp 0x479403 */
  goto L_479403;
L_4793c1: /* 4793c1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4793c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4793c5: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4793c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4793c9: mov ecx, esi */
  ecx = esi;
/* 4793cb: call 0x47704d */
  esp -= 4; W32(esp, 0x4793d0u); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 4793d0: mov ecx, eax */
  ecx = eax;
/* 4793d2: call 0x476831 */
  esp -= 4; W32(esp, 0x4793d7u); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 4793d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4793d9: jne 0x4793df */
  if (!zf) goto L_4793df;
L_4793db: /* 4793db: xor ecx, ecx */
  ecx = 0;
/* 4793dd: jmp 0x4793e6 */
  goto L_4793e6;
L_4793df: /* 4793df: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4793e1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4793e4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4793e6: /* 4793e6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4793e9: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4793eb: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4793ed: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4793ef: not eax */
  eax = ~eax;
/* 4793f1: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4793f3: je 0x47940a */
  if (zf) goto L_47940a;
L_4793f5: /* 4793f5: cmp word ptr [ebp + 8], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4793fa: je 0x47940a */
  if (zf) goto L_47940a;
L_4793fc: /* 4793fc: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479401: jne 0x479445 */
  if (!zf) goto L_479445;
L_479403: /* 479403: fldz  */
  FPUSH(0.0);
/* 479405: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 479408: jmp 0x479464 */
  goto L_479464;
L_47940a: /* 47940a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47940d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47940e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 479411: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479412: mov ecx, esi */
  ecx = esi;
/* 479414: call 0x47704d */
  esp -= 4; W32(esp, 0x479419u); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 479419: mov ecx, eax */
  ecx = eax;
/* 47941b: call 0x476831 */
  esp -= 4; W32(esp, 0x479420u); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 479420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479422: jne 0x479428 */
  if (!zf) goto L_479428;
L_479424: /* 479424: xor ecx, ecx */
  ecx = 0;
/* 479426: jmp 0x47942f */
  goto L_47942f;
L_479428: /* 479428: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47942a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47942d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47942f: /* 47942f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479432: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479434: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479436: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479438: not eax */
  eax = ~eax;
/* 47943a: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47943c: je 0x479464 */
  if (zf) goto L_479464;
L_47943e: /* 47943e: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479443: je 0x479464 */
  if (zf) goto L_479464;
L_479445: /* 479445: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 479448: mov ecx, esi */
  ecx = esi;
/* 47944a: call 0x47795b */
  esp -= 4; W32(esp, 0x47944fu); SPILL(); f_47795b(); if (g_unwind) return; RELOAD();
/* 47944f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 479451: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 479454: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479456: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479459: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47945c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47945e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47945f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x479464u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_479464: /* 479464: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 479466: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 479469: test byte ptr [eax + esi + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47946e: jne 0x47948a */
  if (!zf) goto L_47948a;
L_479470: /* 479470: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 479473: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 479476: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 479479: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 47947c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47947f: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* 479482: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 479484: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479487: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
L_47948a: /* 47948a: mov eax, esi */
  eax = esi;
/* 47948c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47948d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47948e: ret  */
  esp += 4; SPILL(); return;
}

void f_47948f(void) {
  LOAD_REGS();
L_47948f: /* 47948f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 479490: mov ebp, esp */
  ebp = esp;
/* 479492: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479495: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479496: fldz  */
  FPUSH(0.0);
/* 479498: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 47949b: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 47949e: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4794a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4794a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4794a3: call 0x4722fb */
  esp -= 4; W32(esp, 0x4794a8u); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 4794a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4794aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4794ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4794ac: jne 0x4794b2 */
  if (!zf) goto L_4794b2;
L_4794ae: /* 4794ae: xor ecx, ecx */
  ecx = 0;
/* 4794b0: jmp 0x4794b9 */
  goto L_4794b9;
L_4794b2: /* 4794b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4794b4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4794b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4794b9: /* 4794b9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4794bc: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4794be: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4794c0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4794c2: not eax */
  eax = ~eax;
/* 4794c4: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4794c6: je 0x4794e5 */
  if (zf) goto L_4794e5;
L_4794c8: /* 4794c8: cmp byte ptr [ebp + 8], 0x28 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x28u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4794cc: je 0x4794e5 */
  if (zf) goto L_4794e5;
L_4794ce: /* 4794ce: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4794d1: mov ecx, ebx */
  ecx = ebx;
/* 4794d3: call 0x475085 */
  esp -= 4; W32(esp, 0x4794d8u); SPILL(); f_475085(); if (g_unwind) return; RELOAD();
/* 4794d8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4794db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4794dc: mov ecx, ebx */
  ecx = ebx;
/* 4794de: call 0x474791 */
  esp -= 4; W32(esp, 0x4794e3u); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 4794e3: jmp 0x479526 */
  goto L_479526;
L_4794e5: /* 4794e5: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4794e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4794e9: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4794ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4794ed: mov ecx, ebx */
  ecx = ebx;
/* 4794ef: call 0x474791 */
  esp -= 4; W32(esp, 0x4794f4u); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 4794f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4794f5: call 0x4722fb */
  esp -= 4; W32(esp, 0x4794fau); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 4794fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4794fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4794fd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4794fe: jne 0x479504 */
  if (!zf) goto L_479504;
L_479500: /* 479500: xor ecx, ecx */
  ecx = 0;
/* 479502: jmp 0x47950b */
  goto L_47950b;
L_479504: /* 479504: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479506: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479509: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47950b: /* 47950b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47950e: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479510: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479512: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479514: not eax */
  eax = ~eax;
/* 479516: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479518: je 0x47952d */
  if (zf) goto L_47952d;
L_47951a: /* 47951a: cmp byte ptr [ebp + 8], 0x2c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47951e: je 0x47952d */
  if (zf) goto L_47952d;
L_479520: /* 479520: cmp byte ptr [ebp + 8], 0x29 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x29u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 479524: jne 0x479568 */
  if (!zf) goto L_479568;
L_479526: /* 479526: fldz  */
  FPUSH(0.0);
/* 479528: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 47952b: jmp 0x479587 */
  goto L_479587;
L_47952d: /* 47952d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 479530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479531: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 479534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479535: mov ecx, ebx */
  ecx = ebx;
/* 479537: call 0x474791 */
  esp -= 4; W32(esp, 0x47953cu); SPILL(); f_474791(); if (g_unwind) return; RELOAD();
/* 47953c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47953d: call 0x4722fb */
  esp -= 4; W32(esp, 0x479542u); SPILL(); f_4722fb(); if (g_unwind) return; RELOAD();
/* 479542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479544: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479545: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479546: jne 0x47954c */
  if (!zf) goto L_47954c;
L_479548: /* 479548: xor ecx, ecx */
  ecx = 0;
/* 47954a: jmp 0x479553 */
  goto L_479553;
L_47954c: /* 47954c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47954e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479551: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_479553: /* 479553: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479556: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479558: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47955a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47955c: not eax */
  eax = ~eax;
/* 47955e: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479560: je 0x479587 */
  if (zf) goto L_479587;
L_479562: /* 479562: cmp byte ptr [ebp + 8], 0x29 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x29u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 479566: je 0x479587 */
  if (zf) goto L_479587;
L_479568: /* 479568: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47956b: mov ecx, ebx */
  ecx = ebx;
/* 47956d: call 0x475085 */
  esp -= 4; W32(esp, 0x479572u); SPILL(); f_475085(); if (g_unwind) return; RELOAD();
/* 479572: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 479574: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 479577: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479579: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47957c: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47957f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479582: call 0x464bb2 */
  esp -= 4; W32(esp, 0x479587u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_479587: /* 479587: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 479589: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47958c: test byte ptr [eax + ebx + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479591: jne 0x4795ad */
  if (!zf) goto L_4795ad;
L_479593: /* 479593: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 479596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479597: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 47959a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47959b: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 47959e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4795a1: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4795a4: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 4795a7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4795a8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4795a9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4795aa: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4795ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4795ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4795ad: /* 4795ad: mov eax, ebx */
  eax = ebx;
/* 4795af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4795b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4795b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4795b2(void) {
  LOAD_REGS();
L_4795b2: /* 4795b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4795b3: mov ebp, esp */
  ebp = esp;
/* 4795b5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4795b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4795b9: fldz  */
  FPUSH(0.0);
/* 4795bb: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4795be: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4795c1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4795c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4795c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4795c6: call 0x4724db */
  esp -= 4; W32(esp, 0x4795cbu); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 4795cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4795cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4795ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4795cf: jne 0x4795d5 */
  if (!zf) goto L_4795d5;
L_4795d1: /* 4795d1: xor ecx, ecx */
  ecx = 0;
/* 4795d3: jmp 0x4795dc */
  goto L_4795dc;
L_4795d5: /* 4795d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4795d7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4795da: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4795dc: /* 4795dc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4795df: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4795e1: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4795e3: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4795e5: not eax */
  eax = ~eax;
/* 4795e7: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4795e9: je 0x479609 */
  if (zf) goto L_479609;
L_4795eb: /* 4795eb: cmp word ptr [ebp + 8], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4795f0: je 0x479609 */
  if (zf) goto L_479609;
L_4795f2: /* 4795f2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4795f5: mov ecx, ebx */
  ecx = ebx;
/* 4795f7: call 0x4764ef */
  esp -= 4; W32(esp, 0x4795fcu); SPILL(); f_4764ef(); if (g_unwind) return; RELOAD();
/* 4795fc: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4795ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479600: mov ecx, ebx */
  ecx = ebx;
/* 479602: call 0x475be1 */
  esp -= 4; W32(esp, 0x479607u); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 479607: jmp 0x47964c */
  goto L_47964c;
L_479609: /* 479609: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47960c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47960d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 479610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479611: mov ecx, ebx */
  ecx = ebx;
/* 479613: call 0x475be1 */
  esp -= 4; W32(esp, 0x479618u); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 479618: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479619: call 0x4724db */
  esp -= 4; W32(esp, 0x47961eu); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 47961e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479620: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479621: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479622: jne 0x479628 */
  if (!zf) goto L_479628;
L_479624: /* 479624: xor ecx, ecx */
  ecx = 0;
/* 479626: jmp 0x47962f */
  goto L_47962f;
L_479628: /* 479628: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47962a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47962d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47962f: /* 47962f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479632: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479634: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479636: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479638: not eax */
  eax = ~eax;
/* 47963a: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47963c: je 0x479653 */
  if (zf) goto L_479653;
L_47963e: /* 47963e: cmp word ptr [ebp + 8], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479643: je 0x479653 */
  if (zf) goto L_479653;
L_479645: /* 479645: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47964a: jne 0x47968f */
  if (!zf) goto L_47968f;
L_47964c: /* 47964c: fldz  */
  FPUSH(0.0);
/* 47964e: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 479651: jmp 0x4796ae */
  goto L_4796ae;
L_479653: /* 479653: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 479656: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479657: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 47965a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47965b: mov ecx, ebx */
  ecx = ebx;
/* 47965d: call 0x475be1 */
  esp -= 4; W32(esp, 0x479662u); SPILL(); f_475be1(); if (g_unwind) return; RELOAD();
/* 479662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479663: call 0x4724db */
  esp -= 4; W32(esp, 0x479668u); SPILL(); f_4724db(); if (g_unwind) return; RELOAD();
/* 479668: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47966a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47966b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47966c: jne 0x479672 */
  if (!zf) goto L_479672;
L_47966e: /* 47966e: xor ecx, ecx */
  ecx = 0;
/* 479670: jmp 0x479679 */
  goto L_479679;
L_479672: /* 479672: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479674: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479677: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_479679: /* 479679: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47967c: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47967e: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479680: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 479682: not eax */
  eax = ~eax;
/* 479684: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479686: je 0x4796ae */
  if (zf) goto L_4796ae;
L_479688: /* 479688: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47968d: je 0x4796ae */
  if (zf) goto L_4796ae;
L_47968f: /* 47968f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 479692: mov ecx, ebx */
  ecx = ebx;
/* 479694: call 0x4764ef */
  esp -= 4; W32(esp, 0x479699u); SPILL(); f_4764ef(); if (g_unwind) return; RELOAD();
/* 479699: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 47969b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47969e: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4796a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4796a3: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4796a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4796a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4796a9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4796aeu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4796ae: /* 4796ae: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4796b0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4796b3: test byte ptr [eax + ebx + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4796b8: jne 0x4796d4 */
  if (!zf) goto L_4796d4;
L_4796ba: /* 4796ba: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4796bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4796be: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 4796c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4796c2: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4796c5: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4796c8: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4796cb: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 4796ce: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4796cf: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4796d0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4796d1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4796d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4796d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4796d4: /* 4796d4: mov eax, ebx */
  eax = ebx;
/* 4796d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4796d7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4796d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4796d9(void) {
  LOAD_REGS();
L_4796d9: /* 4796d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4796da: mov ebp, esp */
  ebp = esp;
/* 4796dc: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4796df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4796e0: fldz  */
  FPUSH(0.0);
/* 4796e2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4796e5: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 4796e8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 4796eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4796ec: mov ecx, ebx */
  ecx = ebx;
/* 4796ee: call 0x476831 */
  esp -= 4; W32(esp, 0x4796f3u); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 4796f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4796f5: jne 0x4796fb */
  if (!zf) goto L_4796fb;
L_4796f7: /* 4796f7: xor ecx, ecx */
  ecx = 0;
/* 4796f9: jmp 0x479702 */
  goto L_479702;
L_4796fb: /* 4796fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4796fd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479700: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_479702: /* 479702: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479705: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479707: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479709: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47970b: not eax */
  eax = ~eax;
/* 47970d: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47970f: je 0x47972f */
  if (zf) goto L_47972f;
L_479711: /* 479711: cmp word ptr [ebp + 8], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479716: je 0x47972f */
  if (zf) goto L_47972f;
L_479718: /* 479718: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47971b: mov ecx, ebx */
  ecx = ebx;
/* 47971d: call 0x47795b */
  esp -= 4; W32(esp, 0x479722u); SPILL(); f_47795b(); if (g_unwind) return; RELOAD();
/* 479722: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 479725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479726: mov ecx, ebx */
  ecx = ebx;
/* 479728: call 0x47704d */
  esp -= 4; W32(esp, 0x47972du); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 47972d: jmp 0x479771 */
  goto L_479771;
L_47972f: /* 47972f: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 479732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479733: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 479736: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479737: mov ecx, ebx */
  ecx = ebx;
/* 479739: call 0x47704d */
  esp -= 4; W32(esp, 0x47973eu); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 47973e: mov ecx, eax */
  ecx = eax;
/* 479740: call 0x476831 */
  esp -= 4; W32(esp, 0x479745u); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 479745: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479747: jne 0x47974d */
  if (!zf) goto L_47974d;
L_479749: /* 479749: xor ecx, ecx */
  ecx = 0;
/* 47974b: jmp 0x479754 */
  goto L_479754;
L_47974d: /* 47974d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47974f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 479752: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_479754: /* 479754: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 479757: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 479759: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 47975b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47975d: not eax */
  eax = ~eax;
/* 47975f: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479761: je 0x479778 */
  if (zf) goto L_479778;
L_479763: /* 479763: cmp word ptr [ebp + 8], 0x2c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x2cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 479768: je 0x479778 */
  if (zf) goto L_479778;
L_47976a: /* 47976a: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47976f: jne 0x4797b3 */
  if (!zf) goto L_4797b3;
L_479771: /* 479771: fldz  */
  FPUSH(0.0);
/* 479773: fstp qword ptr [ebp - 8] */
  WF64((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 479776: jmp 0x4797d2 */
  goto L_4797d2;
L_479778: /* 479778: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 47977b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47977c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 47977f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479780: mov ecx, ebx */
  ecx = ebx;
/* 479782: call 0x47704d */
  esp -= 4; W32(esp, 0x479787u); SPILL(); f_47704d(); if (g_unwind) return; RELOAD();
/* 479787: mov ecx, eax */
  ecx = eax;
/* 479789: call 0x476831 */
  esp -= 4; W32(esp, 0x47978eu); SPILL(); f_476831(); if (g_unwind) return; RELOAD();
/* 47978e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479790: jne 0x479796 */
  if (!zf) goto L_479796;
L_479792: /* 479792: xor ecx, ecx */
  ecx = 0;
/* 479794: jmp 0x47979d */
  goto L_47979d;
L_479796: /* 479796: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 479798: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47979b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_47979d: /* 47979d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4797a0: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4797a2: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4797a4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4797a6: not eax */
  eax = ~eax;
/* 4797a8: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4797aa: je 0x4797d2 */
  if (zf) goto L_4797d2;
L_4797ac: /* 4797ac: cmp word ptr [ebp + 8], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x8u))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4797b1: je 0x4797d2 */
  if (zf) goto L_4797d2;
L_4797b3: /* 4797b3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4797b6: mov ecx, ebx */
  ecx = ebx;
/* 4797b8: call 0x47795b */
  esp -= 4; W32(esp, 0x4797bdu); SPILL(); f_47795b(); if (g_unwind) return; RELOAD();
/* 4797bd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4797bf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4797c2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4797c4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4797c7: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4797ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4797cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4797cd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4797d2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
L_4797d2: /* 4797d2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4797d4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4797d7: test byte ptr [eax + ebx + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4797dc: jne 0x4797f8 */
  if (!zf) goto L_4797f8;
L_4797de: /* 4797de: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4797e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4797e2: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 4797e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4797e6: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4797e9: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4797ec: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4797ef: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 4797f2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4797f3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4797f4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4797f5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4797f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4797f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4797f8: /* 4797f8: mov eax, ebx */
  eax = ebx;
/* 4797fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4797fb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4797fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4797fd(void) {
  LOAD_REGS();
L_4797fd: /* 4797fd: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 479802: call 0x4616c0 */
  esp -= 4; W32(esp, 0x479807u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 479807: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47980a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47980b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47980d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479810: call 0x4612ba */
  esp -= 4; W32(esp, 0x479815u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 479815: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479819: mov ecx, 0x4d08c0 */
  ecx = 0x4d08c0u;
/* 47981e: call 0x464006 */
  esp -= 4; W32(esp, 0x479823u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 479823: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 479826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479827: call 0x488d6c */
  esp -= 4; W32(esp, 0x47982cu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 47982c: mov esi, eax */
  esi = eax;
/* 47982e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479830: jne 0x479884 */
  if (!zf) goto L_479884;
L_479832: /* 479832: mov eax, dword ptr [0x4d10c8] */
  eax = R32((uint32_t)(0x4d10c8u));
/* 479837: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479839: je 0x47983f */
  if (zf) goto L_47983f;
L_47983b: /* 47983b: mov esi, eax */
  esi = eax;
/* 47983d: jmp 0x479884 */
  goto L_479884;
L_47983f: /* 47983f: push 0x4d10c8 */
  { uint32_t v = 0x4d10c8u; esp -= 4; W32(esp, v); }
/* 479844: call 0x473b79 */
  esp -= 4; W32(esp, 0x479849u); SPILL(); f_473b79(); if (g_unwind) return; RELOAD();
/* 479849: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47984c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47984d: jne 0x47986b */
  if (!zf) goto L_47986b;
L_47984f: /* 47984f: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 479854: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 479857: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x47985du); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 47985d: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 479862: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 479865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479866: call 0x48bed8 */
  esp -= 4; W32(esp, 0x47986bu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_47986b: /* 47986b: mov eax, dword ptr [0x4d10c8] */
  eax = R32((uint32_t)(0x4d10c8u));
/* 479870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479871: mov edi, eax */
  edi = eax;
/* 479873: mov ecx, edi */
  ecx = edi;
/* 479875: mov esi, eax */
  esi = eax;
/* 479877: call 0x461292 */
  esp -= 4; W32(esp, 0x47987cu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 47987c: mov ecx, edi */
  ecx = edi;
/* 47987e: call 0x488de4 */
  esp -= 4; W32(esp, 0x479883u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 479883: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_479884: /* 479884: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479888: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47988b: call 0x4613d8 */
  esp -= 4; W32(esp, 0x479890u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 479890: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479893: mov eax, esi */
  eax = esi;
/* 479895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47989d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47989e: ret  */
  esp += 4; SPILL(); return;
}

void f_47989f(void) {
  LOAD_REGS();
L_47989f: /* 47989f: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 4798a4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4798a9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4798a9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4798ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4798ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4798af: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4798b2: call 0x4612ba */
  esp -= 4; W32(esp, 0x4798b7u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4798b7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4798bb: mov ecx, 0x4d08b8 */
  ecx = 0x4d08b8u;
/* 4798c0: call 0x464006 */
  esp -= 4; W32(esp, 0x4798c5u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4798c5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4798c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4798c9: call 0x488d6c */
  esp -= 4; W32(esp, 0x4798ceu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4798ce: mov esi, eax */
  esi = eax;
/* 4798d0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4798d2: jne 0x479926 */
  if (!zf) goto L_479926;
L_4798d4: /* 4798d4: mov eax, dword ptr [0x4d10cc] */
  eax = R32((uint32_t)(0x4d10ccu));
/* 4798d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4798db: je 0x4798e1 */
  if (zf) goto L_4798e1;
L_4798dd: /* 4798dd: mov esi, eax */
  esi = eax;
/* 4798df: jmp 0x479926 */
  goto L_479926;
L_4798e1: /* 4798e1: push 0x4d10cc */
  { uint32_t v = 0x4d10ccu; esp -= 4; W32(esp, v); }
/* 4798e6: call 0x473c5b */
  esp -= 4; W32(esp, 0x4798ebu); SPILL(); f_473c5b(); if (g_unwind) return; RELOAD();
/* 4798eb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4798ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4798ef: jne 0x47990d */
  if (!zf) goto L_47990d;
L_4798f1: /* 4798f1: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4798f6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4798f9: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4798ffu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4798ff: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 479904: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 479907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479908: call 0x48bed8 */
  esp -= 4; W32(esp, 0x47990du); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_47990d: /* 47990d: mov eax, dword ptr [0x4d10cc] */
  eax = R32((uint32_t)(0x4d10ccu));
/* 479912: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479913: mov edi, eax */
  edi = eax;
/* 479915: mov ecx, edi */
  ecx = edi;
/* 479917: mov esi, eax */
  esi = eax;
/* 479919: call 0x461292 */
  esp -= 4; W32(esp, 0x47991eu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 47991e: mov ecx, edi */
  ecx = edi;
/* 479920: call 0x488de4 */
  esp -= 4; W32(esp, 0x479925u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 479925: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_479926: /* 479926: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47992a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47992d: call 0x4613d8 */
  esp -= 4; W32(esp, 0x479932u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 479932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479935: mov eax, esi */
  eax = esi;
/* 479937: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479938: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47993f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479940: ret  */
  esp += 4; SPILL(); return;
}

void f_479941(void) {
  LOAD_REGS();
L_479941: /* 479941: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 479946: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47994bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47994b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47994e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47994f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479951: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479954: call 0x4612ba */
  esp -= 4; W32(esp, 0x479959u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 479959: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47995d: mov ecx, 0x4d08a4 */
  ecx = 0x4d08a4u;
/* 479962: call 0x464006 */
  esp -= 4; W32(esp, 0x479967u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 479967: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47996a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47996b: call 0x488d6c */
  esp -= 4; W32(esp, 0x479970u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 479970: mov esi, eax */
  esi = eax;
/* 479972: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479974: jne 0x4799c8 */
  if (!zf) goto L_4799c8;
L_479976: /* 479976: mov eax, dword ptr [0x4d10d0] */
  eax = R32((uint32_t)(0x4d10d0u));
/* 47997b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47997d: je 0x479983 */
  if (zf) goto L_479983;
L_47997f: /* 47997f: mov esi, eax */
  esi = eax;
/* 479981: jmp 0x4799c8 */
  goto L_4799c8;
L_479983: /* 479983: push 0x4d10d0 */
  { uint32_t v = 0x4d10d0u; esp -= 4; W32(esp, v); }
/* 479988: call 0x473d3d */
  esp -= 4; W32(esp, 0x47998du); SPILL(); f_473d3d(); if (g_unwind) return; RELOAD();
/* 47998d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 479990: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479991: jne 0x4799af */
  if (!zf) goto L_4799af;
L_479993: /* 479993: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 479998: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47999b: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4799a1u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4799a1: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4799a6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4799a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4799aa: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4799afu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4799af: /* 4799af: mov eax, dword ptr [0x4d10d0] */
  eax = R32((uint32_t)(0x4d10d0u));
/* 4799b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4799b5: mov edi, eax */
  edi = eax;
/* 4799b7: mov ecx, edi */
  ecx = edi;
/* 4799b9: mov esi, eax */
  esi = eax;
/* 4799bb: call 0x461292 */
  esp -= 4; W32(esp, 0x4799c0u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4799c0: mov ecx, edi */
  ecx = edi;
/* 4799c2: call 0x488de4 */
  esp -= 4; W32(esp, 0x4799c7u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4799c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4799c8: /* 4799c8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4799cc: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4799cf: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4799d4u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4799d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4799d7: mov eax, esi */
  eax = esi;
/* 4799d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4799da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4799e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4799e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4799e3(void) {
  LOAD_REGS();
L_4799e3: /* 4799e3: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 4799e8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4799edu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4799ed: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4799f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4799f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4799f3: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4799f6: call 0x4612ba */
  esp -= 4; W32(esp, 0x4799fbu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4799fb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4799ff: mov ecx, 0x4d08cc */
  ecx = 0x4d08ccu;
/* 479a04: call 0x464006 */
  esp -= 4; W32(esp, 0x479a09u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 479a09: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 479a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479a0d: call 0x488d6c */
  esp -= 4; W32(esp, 0x479a12u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 479a12: mov esi, eax */
  esi = eax;
/* 479a14: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479a16: jne 0x479a6a */
  if (!zf) goto L_479a6a;
L_479a18: /* 479a18: mov eax, dword ptr [0x4d10d4] */
  eax = R32((uint32_t)(0x4d10d4u));
/* 479a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479a1f: je 0x479a25 */
  if (zf) goto L_479a25;
L_479a21: /* 479a21: mov esi, eax */
  esi = eax;
/* 479a23: jmp 0x479a6a */
  goto L_479a6a;
L_479a25: /* 479a25: push 0x4d10d4 */
  { uint32_t v = 0x4d10d4u; esp -= 4; W32(esp, v); }
/* 479a2a: call 0x478759 */
  esp -= 4; W32(esp, 0x479a2fu); SPILL(); f_478759(); if (g_unwind) return; RELOAD();
/* 479a2f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 479a32: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479a33: jne 0x479a51 */
  if (!zf) goto L_479a51;
L_479a35: /* 479a35: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 479a3a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 479a3d: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x479a43u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 479a43: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 479a48: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 479a4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479a4c: call 0x48bed8 */
  esp -= 4; W32(esp, 0x479a51u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_479a51: /* 479a51: mov eax, dword ptr [0x4d10d4] */
  eax = R32((uint32_t)(0x4d10d4u));
/* 479a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479a57: mov edi, eax */
  edi = eax;
/* 479a59: mov ecx, edi */
  ecx = edi;
/* 479a5b: mov esi, eax */
  esi = eax;
/* 479a5d: call 0x461292 */
  esp -= 4; W32(esp, 0x479a62u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 479a62: mov ecx, edi */
  ecx = edi;
/* 479a64: call 0x488de4 */
  esp -= 4; W32(esp, 0x479a69u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 479a69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_479a6a: /* 479a6a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479a6e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479a71: call 0x4613d8 */
  esp -= 4; W32(esp, 0x479a76u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 479a76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479a79: mov eax, esi */
  eax = esi;
/* 479a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479a7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 479a83: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479a84: ret  */
  esp += 4; SPILL(); return;
}

void f_479a85(void) {
  LOAD_REGS();
L_479a85: /* 479a85: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 479a8a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x479a8fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 479a8f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479a93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479a95: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479a98: call 0x4612ba */
  esp -= 4; W32(esp, 0x479a9du); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 479a9d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479aa1: mov ecx, 0x4d08b4 */
  ecx = 0x4d08b4u;
/* 479aa6: call 0x464006 */
  esp -= 4; W32(esp, 0x479aabu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 479aab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 479aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479aaf: call 0x488d6c */
  esp -= 4; W32(esp, 0x479ab4u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 479ab4: mov esi, eax */
  esi = eax;
/* 479ab6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479ab8: jne 0x479b0c */
  if (!zf) goto L_479b0c;
L_479aba: /* 479aba: mov eax, dword ptr [0x4d10d8] */
  eax = R32((uint32_t)(0x4d10d8u));
/* 479abf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479ac1: je 0x479ac7 */
  if (zf) goto L_479ac7;
L_479ac3: /* 479ac3: mov esi, eax */
  esi = eax;
/* 479ac5: jmp 0x479b0c */
  goto L_479b0c;
L_479ac7: /* 479ac7: push 0x4d10d8 */
  { uint32_t v = 0x4d10d8u; esp -= 4; W32(esp, v); }
/* 479acc: call 0x47887f */
  esp -= 4; W32(esp, 0x479ad1u); SPILL(); f_47887f(); if (g_unwind) return; RELOAD();
/* 479ad1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 479ad4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479ad5: jne 0x479af3 */
  if (!zf) goto L_479af3;
L_479ad7: /* 479ad7: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 479adc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 479adf: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x479ae5u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 479ae5: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 479aea: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 479aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479aee: call 0x48bed8 */
  esp -= 4; W32(esp, 0x479af3u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_479af3: /* 479af3: mov eax, dword ptr [0x4d10d8] */
  eax = R32((uint32_t)(0x4d10d8u));
/* 479af8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479af9: mov edi, eax */
  edi = eax;
/* 479afb: mov ecx, edi */
  ecx = edi;
/* 479afd: mov esi, eax */
  esi = eax;
/* 479aff: call 0x461292 */
  esp -= 4; W32(esp, 0x479b04u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 479b04: mov ecx, edi */
  ecx = edi;
/* 479b06: call 0x488de4 */
  esp -= 4; W32(esp, 0x479b0bu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 479b0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_479b0c: /* 479b0c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479b10: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479b13: call 0x4613d8 */
  esp -= 4; W32(esp, 0x479b18u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 479b18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479b1b: mov eax, esi */
  eax = esi;
/* 479b1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479b1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 479b25: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479b26: ret  */
  esp += 4; SPILL(); return;
}

void f_479b27(void) {
  LOAD_REGS();
L_479b27: /* 479b27: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 479b2c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x479b31u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 479b31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479b34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479b35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479b37: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479b3a: call 0x4612ba */
  esp -= 4; W32(esp, 0x479b3fu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 479b3f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479b43: mov ecx, 0x4d0880 */
  ecx = 0x4d0880u;
/* 479b48: call 0x464006 */
  esp -= 4; W32(esp, 0x479b4du); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 479b4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 479b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479b51: call 0x488d6c */
  esp -= 4; W32(esp, 0x479b56u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 479b56: mov esi, eax */
  esi = eax;
/* 479b58: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479b5a: jne 0x479bae */
  if (!zf) goto L_479bae;
L_479b5c: /* 479b5c: mov eax, dword ptr [0x4d10dc] */
  eax = R32((uint32_t)(0x4d10dcu));
/* 479b61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 479b63: je 0x479b69 */
  if (zf) goto L_479b69;
L_479b65: /* 479b65: mov esi, eax */
  esi = eax;
/* 479b67: jmp 0x479bae */
  goto L_479bae;
L_479b69: /* 479b69: push 0x4d10dc */
  { uint32_t v = 0x4d10dcu; esp -= 4; W32(esp, v); }
/* 479b6e: call 0x4789a5 */
  esp -= 4; W32(esp, 0x479b73u); SPILL(); f_4789a5(); if (g_unwind) return; RELOAD();
/* 479b73: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 479b76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 479b77: jne 0x479b95 */
  if (!zf) goto L_479b95;
L_479b79: /* 479b79: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 479b7e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 479b81: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x479b87u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 479b87: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 479b8c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 479b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479b90: call 0x48bed8 */
  esp -= 4; W32(esp, 0x479b95u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_479b95: /* 479b95: mov eax, dword ptr [0x4d10dc] */
  eax = R32((uint32_t)(0x4d10dcu));
/* 479b9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479b9b: mov edi, eax */
  edi = eax;
/* 479b9d: mov ecx, edi */
  ecx = edi;
/* 479b9f: mov esi, eax */
  esi = eax;
/* 479ba1: call 0x461292 */
  esp -= 4; W32(esp, 0x479ba6u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 479ba6: mov ecx, edi */
  ecx = edi;
/* 479ba8: call 0x488de4 */
  esp -= 4; W32(esp, 0x479badu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 479bad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_479bae: /* 479bae: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 479bb2: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 479bb5: call 0x4613d8 */
  esp -= 4; W32(esp, 0x479bbau); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 479bba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 479bbd: mov eax, esi */
  eax = esi;
/* 479bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479bc0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 479bc7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 479bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_479bc9(void) {
  LOAD_REGS();
L_479bc9: /* 479bc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479bcb: call 0x473ae0 */
  esp -= 4; W32(esp, 0x479bd0u); SPILL(); f_473ae0(); if (g_unwind) return; RELOAD();
/* 479bd0: ret  */
  esp += 4; SPILL(); return;
}

void f_479bd1(void) {
  LOAD_REGS();
L_479bd1: /* 479bd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479bd3: call 0x473bc2 */
  esp -= 4; W32(esp, 0x479bd8u); SPILL(); f_473bc2(); if (g_unwind) return; RELOAD();
/* 479bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_479bd9(void) {
  LOAD_REGS();
L_479bd9: /* 479bd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479bdb: call 0x473ca4 */
  esp -= 4; W32(esp, 0x479be0u); SPILL(); f_473ca4(); if (g_unwind) return; RELOAD();
/* 479be0: ret  */
  esp += 4; SPILL(); return;
}

void f_479be1(void) {
  LOAD_REGS();
L_479be1: /* 479be1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479be3: call 0x477aae */
  esp -= 4; W32(esp, 0x479be8u); SPILL(); f_477aae(); if (g_unwind) return; RELOAD();
/* 479be8: ret  */
  esp += 4; SPILL(); return;
}

void f_479be9(void) {
  LOAD_REGS();
L_479be9: /* 479be9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479beb: call 0x477b74 */
  esp -= 4; W32(esp, 0x479bf0u); SPILL(); f_477b74(); if (g_unwind) return; RELOAD();
/* 479bf0: ret  */
  esp += 4; SPILL(); return;
}

void f_479bf1(void) {
  LOAD_REGS();
L_479bf1: /* 479bf1: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479bf3: call 0x477c0d */
  esp -= 4; W32(esp, 0x479bf8u); SPILL(); f_477c0d(); if (g_unwind) return; RELOAD();
/* 479bf8: ret  */
  esp += 4; SPILL(); return;
}

void f_479bf9(void) {
  LOAD_REGS();
L_479bf9: /* 479bf9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479bfb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479bfd: call 0x477cd3 */
  esp -= 4; W32(esp, 0x479c02u); SPILL(); f_477cd3(); if (g_unwind) return; RELOAD();
/* 479c02: ret  */
  esp += 4; SPILL(); return;
}

void f_479c03(void) {
  LOAD_REGS();
L_479c03: /* 479c03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479c04: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479c08: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c0c: je 0x479c33 */
  if (zf) goto L_479c33;
L_479c0e: /* 479c0e: push 0x472cc5 */
  { uint32_t v = 0x472cc5u; esp -= 4; W32(esp, v); }
/* 479c13: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479c16: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479c18: add ecx, -0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479c1b: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 479c20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479c21: call 0x48be30 */
  esp -= 4; W32(esp, 0x479c26u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479c26: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c29: je 0x479c49 */
  if (zf) goto L_479c49;
L_479c2b: /* 479c2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c2c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479c31u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479c31: jmp 0x479c48 */
  goto L_479c48;
L_479c33: /* 479c33: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479c36: mov ecx, esi */
  ecx = esi;
/* 479c38: call 0x472cc5 */
  esp -= 4; W32(esp, 0x479c3du); SPILL(); f_472cc5(); if (g_unwind) return; RELOAD();
/* 479c3d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c40: je 0x479c49 */
  if (zf) goto L_479c49;
L_479c42: /* 479c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c43: call 0x461c65 */
  esp -= 4; W32(esp, 0x479c48u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479c48: /* 479c48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479c49: /* 479c49: mov eax, esi */
  eax = esi;
/* 479c4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479c4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479c4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479c50(void) {
  LOAD_REGS();
L_479c50: /* 479c50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479c52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479c54: call 0x477dc6 */
  esp -= 4; W32(esp, 0x479c59u); SPILL(); f_477dc6(); if (g_unwind) return; RELOAD();
/* 479c59: ret  */
  esp += 4; SPILL(); return;
}

void f_479c5a(void) {
  LOAD_REGS();
L_479c5a: /* 479c5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479c5b: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479c5f: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c63: je 0x479c8a */
  if (zf) goto L_479c8a;
L_479c65: /* 479c65: push 0x472cd8 */
  { uint32_t v = 0x472cd8u; esp -= 4; W32(esp, v); }
/* 479c6a: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479c6d: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479c6f: add ecx, -0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479c72: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 479c77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479c78: call 0x48be30 */
  esp -= 4; W32(esp, 0x479c7du); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479c7d: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c80: je 0x479ca0 */
  if (zf) goto L_479ca0;
L_479c82: /* 479c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c83: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479c88u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479c88: jmp 0x479c9f */
  goto L_479c9f;
L_479c8a: /* 479c8a: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479c8d: mov ecx, esi */
  ecx = esi;
/* 479c8f: call 0x472cd8 */
  esp -= 4; W32(esp, 0x479c94u); SPILL(); f_472cd8(); if (g_unwind) return; RELOAD();
/* 479c94: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479c97: je 0x479ca0 */
  if (zf) goto L_479ca0;
L_479c99: /* 479c99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479c9a: call 0x461c65 */
  esp -= 4; W32(esp, 0x479c9fu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479c9f: /* 479c9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479ca0: /* 479ca0: mov eax, esi */
  eax = esi;
/* 479ca2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479ca3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479ca4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479ca7(void) {
  LOAD_REGS();
L_479ca7: /* 479ca7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479ca9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479cab: call 0x477eb9 */
  esp -= 4; W32(esp, 0x479cb0u); SPILL(); f_477eb9(); if (g_unwind) return; RELOAD();
/* 479cb0: ret  */
  esp += 4; SPILL(); return;
}

void f_479cb1(void) {
  LOAD_REGS();
L_479cb1: /* 479cb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479cb2: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479cb6: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479cb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479cba: je 0x479ce1 */
  if (zf) goto L_479ce1;
L_479cbc: /* 479cbc: push 0x472ceb */
  { uint32_t v = 0x472cebu; esp -= 4; W32(esp, v); }
/* 479cc1: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479cc4: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479cc6: add ecx, -0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479cc9: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 479cce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479ccf: call 0x48be30 */
  esp -= 4; W32(esp, 0x479cd4u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479cd4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479cd7: je 0x479cf7 */
  if (zf) goto L_479cf7;
L_479cd9: /* 479cd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479cda: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479cdfu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479cdf: jmp 0x479cf6 */
  goto L_479cf6;
L_479ce1: /* 479ce1: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479ce4: mov ecx, esi */
  ecx = esi;
/* 479ce6: call 0x472ceb */
  esp -= 4; W32(esp, 0x479cebu); SPILL(); f_472ceb(); if (g_unwind) return; RELOAD();
/* 479ceb: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479cee: je 0x479cf7 */
  if (zf) goto L_479cf7;
L_479cf0: /* 479cf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479cf1: call 0x461c65 */
  esp -= 4; W32(esp, 0x479cf6u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479cf6: /* 479cf6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479cf7: /* 479cf7: mov eax, esi */
  eax = esi;
/* 479cf9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479cfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479cfb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479cfe(void) {
  LOAD_REGS();
L_479cfe: /* 479cfe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479d00: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 479d02: call 0x477fa4 */
  esp -= 4; W32(esp, 0x479d07u); SPILL(); f_477fa4(); if (g_unwind) return; RELOAD();
/* 479d07: ret  */
  esp += 4; SPILL(); return;
}

void f_479d08(void) {
  LOAD_REGS();
L_479d08: /* 479d08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479d09: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479d0d: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d11: je 0x479d38 */
  if (zf) goto L_479d38;
L_479d13: /* 479d13: push 0x472cfe */
  { uint32_t v = 0x472cfeu; esp -= 4; W32(esp, v); }
/* 479d18: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479d1b: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479d1d: add ecx, -0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479d20: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 479d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479d26: call 0x48be30 */
  esp -= 4; W32(esp, 0x479d2bu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479d2b: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d2e: je 0x479d4e */
  if (zf) goto L_479d4e;
L_479d30: /* 479d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d31: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479d36u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479d36: jmp 0x479d4d */
  goto L_479d4d;
L_479d38: /* 479d38: lea esi, [ecx - 0x4c] */
  esi = (uint32_t)(ecx + 0xffffffb4u);
/* 479d3b: mov ecx, esi */
  ecx = esi;
/* 479d3d: call 0x472cfe */
  esp -= 4; W32(esp, 0x479d42u); SPILL(); f_472cfe(); if (g_unwind) return; RELOAD();
/* 479d42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d45: je 0x479d4e */
  if (zf) goto L_479d4e;
L_479d47: /* 479d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d48: call 0x461c65 */
  esp -= 4; W32(esp, 0x479d4du); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479d4d: /* 479d4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479d4e: /* 479d4e: mov eax, esi */
  eax = esi;
/* 479d50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479d51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479d52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479d55(void) {
  LOAD_REGS();
L_479d55: /* 479d55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479d57: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 479d59: call 0x478097 */
  esp -= 4; W32(esp, 0x479d5eu); SPILL(); f_478097(); if (g_unwind) return; RELOAD();
/* 479d5e: ret  */
  esp += 4; SPILL(); return;
}

void f_479d5f(void) {
  LOAD_REGS();
L_479d5f: /* 479d5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479d60: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479d64: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d68: je 0x479d8f */
  if (zf) goto L_479d8f;
L_479d6a: /* 479d6a: push 0x472d11 */
  { uint32_t v = 0x472d11u; esp -= 4; W32(esp, v); }
/* 479d6f: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479d72: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479d74: add ecx, -0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479d77: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 479d7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479d7d: call 0x48be30 */
  esp -= 4; W32(esp, 0x479d82u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479d82: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d85: je 0x479da5 */
  if (zf) goto L_479da5;
L_479d87: /* 479d87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d88: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479d8du); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479d8d: jmp 0x479da4 */
  goto L_479da4;
L_479d8f: /* 479d8f: lea esi, [ecx - 0x4c] */
  esi = (uint32_t)(ecx + 0xffffffb4u);
/* 479d92: mov ecx, esi */
  ecx = esi;
/* 479d94: call 0x472d11 */
  esp -= 4; W32(esp, 0x479d99u); SPILL(); f_472d11(); if (g_unwind) return; RELOAD();
/* 479d99: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479d9c: je 0x479da5 */
  if (zf) goto L_479da5;
L_479d9e: /* 479d9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479d9f: call 0x461c65 */
  esp -= 4; W32(esp, 0x479da4u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479da4: /* 479da4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479da5: /* 479da5: mov eax, esi */
  eax = esi;
/* 479da7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479da8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479da9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479dac(void) {
  LOAD_REGS();
L_479dac: /* 479dac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479dae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 479db0: call 0x47818a */
  esp -= 4; W32(esp, 0x479db5u); SPILL(); f_47818a(); if (g_unwind) return; RELOAD();
/* 479db5: ret  */
  esp += 4; SPILL(); return;
}

void f_479db6(void) {
  LOAD_REGS();
L_479db6: /* 479db6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479db7: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479dbb: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479dbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479dbf: je 0x479de6 */
  if (zf) goto L_479de6;
L_479dc1: /* 479dc1: push 0x472d24 */
  { uint32_t v = 0x472d24u; esp -= 4; W32(esp, v); }
/* 479dc6: lea esi, [ecx - 0x50] */
  esi = (uint32_t)(ecx + 0xffffffb0u);
/* 479dc9: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479dcb: add ecx, -0x4c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffb4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479dce: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 479dd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479dd4: call 0x48be30 */
  esp -= 4; W32(esp, 0x479dd9u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479dd9: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479ddc: je 0x479dfc */
  if (zf) goto L_479dfc;
L_479dde: /* 479dde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479ddf: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479de4u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479de4: jmp 0x479dfb */
  goto L_479dfb;
L_479de6: /* 479de6: lea esi, [ecx - 0x4c] */
  esi = (uint32_t)(ecx + 0xffffffb4u);
/* 479de9: mov ecx, esi */
  ecx = esi;
/* 479deb: call 0x472d24 */
  esp -= 4; W32(esp, 0x479df0u); SPILL(); f_472d24(); if (g_unwind) return; RELOAD();
/* 479df0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479df3: je 0x479dfc */
  if (zf) goto L_479dfc;
L_479df5: /* 479df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479df6: call 0x461c65 */
  esp -= 4; W32(esp, 0x479dfbu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479dfb: /* 479dfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479dfc: /* 479dfc: mov eax, esi */
  eax = esi;
/* 479dfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479dff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479e00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479e03(void) {
  LOAD_REGS();
L_479e03: /* 479e03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479e05: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479e07: call 0x478275 */
  esp -= 4; W32(esp, 0x479e0cu); SPILL(); f_478275(); if (g_unwind) return; RELOAD();
/* 479e0c: ret  */
  esp += 4; SPILL(); return;
}

void f_479e0d(void) {
  LOAD_REGS();
L_479e0d: /* 479e0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479e0e: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479e12: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479e15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479e16: je 0x479e3d */
  if (zf) goto L_479e3d;
L_479e18: /* 479e18: push 0x472d37 */
  { uint32_t v = 0x472d37u; esp -= 4; W32(esp, v); }
/* 479e1d: lea esi, [ecx - 0x58] */
  esi = (uint32_t)(ecx + 0xffffffa8u);
/* 479e20: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479e22: add ecx, -0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479e25: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 479e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479e2b: call 0x48be30 */
  esp -= 4; W32(esp, 0x479e30u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479e30: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479e33: je 0x479e53 */
  if (zf) goto L_479e53;
L_479e35: /* 479e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479e36: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479e3bu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479e3b: jmp 0x479e52 */
  goto L_479e52;
L_479e3d: /* 479e3d: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479e40: mov ecx, esi */
  ecx = esi;
/* 479e42: call 0x472d37 */
  esp -= 4; W32(esp, 0x479e47u); SPILL(); f_472d37(); if (g_unwind) return; RELOAD();
/* 479e47: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479e4a: je 0x479e53 */
  if (zf) goto L_479e53;
L_479e4c: /* 479e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479e4d: call 0x461c65 */
  esp -= 4; W32(esp, 0x479e52u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479e52: /* 479e52: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479e53: /* 479e53: mov eax, esi */
  eax = esi;
/* 479e55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479e56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479e57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479e5a(void) {
  LOAD_REGS();
L_479e5a: /* 479e5a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479e5c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479e5e: call 0x47836c */
  esp -= 4; W32(esp, 0x479e63u); SPILL(); f_47836c(); if (g_unwind) return; RELOAD();
/* 479e63: ret  */
  esp += 4; SPILL(); return;
}

void f_479e64(void) {
  LOAD_REGS();
L_479e64: /* 479e64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479e65: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479e69: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479e6d: je 0x479e94 */
  if (zf) goto L_479e94;
L_479e6f: /* 479e6f: push 0x472d4a */
  { uint32_t v = 0x472d4au; esp -= 4; W32(esp, v); }
/* 479e74: lea esi, [ecx - 0x58] */
  esi = (uint32_t)(ecx + 0xffffffa8u);
/* 479e77: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479e79: add ecx, -0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479e7c: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 479e81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479e82: call 0x48be30 */
  esp -= 4; W32(esp, 0x479e87u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479e87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479e8a: je 0x479eaa */
  if (zf) goto L_479eaa;
L_479e8c: /* 479e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479e8d: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479e92u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479e92: jmp 0x479ea9 */
  goto L_479ea9;
L_479e94: /* 479e94: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479e97: mov ecx, esi */
  ecx = esi;
/* 479e99: call 0x472d4a */
  esp -= 4; W32(esp, 0x479e9eu); SPILL(); f_472d4a(); if (g_unwind) return; RELOAD();
/* 479e9e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479ea1: je 0x479eaa */
  if (zf) goto L_479eaa;
L_479ea3: /* 479ea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479ea4: call 0x461c65 */
  esp -= 4; W32(esp, 0x479ea9u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479ea9: /* 479ea9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479eaa: /* 479eaa: mov eax, esi */
  eax = esi;
/* 479eac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479ead: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479eae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479eb1(void) {
  LOAD_REGS();
L_479eb1: /* 479eb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 479eb3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 479eb5: call 0x478463 */
  esp -= 4; W32(esp, 0x479ebau); SPILL(); f_478463(); if (g_unwind) return; RELOAD();
/* 479eba: ret  */
  esp += 4; SPILL(); return;
}

void f_479ebb(void) {
  LOAD_REGS();
L_479ebb: /* 479ebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479ebc: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 479ec0: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479ec3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479ec4: je 0x479eeb */
  if (zf) goto L_479eeb;
L_479ec6: /* 479ec6: push 0x472d5d */
  { uint32_t v = 0x472d5du; esp -= 4; W32(esp, v); }
/* 479ecb: lea esi, [ecx - 0x58] */
  esi = (uint32_t)(ecx + 0xffffffa8u);
/* 479ece: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 479ed0: add ecx, -0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 479ed3: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 479ed8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479ed9: call 0x48be30 */
  esp -= 4; W32(esp, 0x479edeu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 479ede: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479ee1: je 0x479f01 */
  if (zf) goto L_479f01;
L_479ee3: /* 479ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479ee4: call 0x48bdcd */
  esp -= 4; W32(esp, 0x479ee9u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 479ee9: jmp 0x479f00 */
  goto L_479f00;
L_479eeb: /* 479eeb: lea esi, [ecx - 0x54] */
  esi = (uint32_t)(ecx + 0xffffffacu);
/* 479eee: mov ecx, esi */
  ecx = esi;
/* 479ef0: call 0x472d5d */
  esp -= 4; W32(esp, 0x479ef5u); SPILL(); f_472d5d(); if (g_unwind) return; RELOAD();
/* 479ef5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479ef8: je 0x479f01 */
  if (zf) goto L_479f01;
L_479efa: /* 479efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479efb: call 0x461c65 */
  esp -= 4; W32(esp, 0x479f00u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
L_479f00: /* 479f00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_479f01: /* 479f01: mov eax, esi */
  eax = esi;
/* 479f03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 479f04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 479f05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_479f08(void) {
  LOAD_REGS();
L_479f08: /* 479f08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479f0a: call 0x478721 */
  esp -= 4; W32(esp, 0x479f0fu); SPILL(); f_478721(); if (g_unwind) return; RELOAD();
/* 479f0f: ret  */
  esp += 4; SPILL(); return;
}

void f_479f10(void) {
  LOAD_REGS();
L_479f10: /* 479f10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479f12: call 0x478847 */
  esp -= 4; W32(esp, 0x479f17u); SPILL(); f_478847(); if (g_unwind) return; RELOAD();
/* 479f17: ret  */
  esp += 4; SPILL(); return;
}

void f_479f18(void) {
  LOAD_REGS();
L_479f18: /* 479f18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 479f1a: call 0x47896d */
  esp -= 4; W32(esp, 0x479f1fu); SPILL(); f_47896d(); if (g_unwind) return; RELOAD();
/* 479f1f: ret  */
  esp += 4; SPILL(); return;
}

void f_479f20(void) {
  LOAD_REGS();
L_479f20: /* 479f20: mov eax, 0x48d0bf */
  eax = 0x48d0bfu;
/* 479f25: call 0x4616c0 */
  esp -= 4; W32(esp, 0x479f2au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 479f2a: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 479f2d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 479f32: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 479f35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479f36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479f37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479f38: mov esi, 0x4c8ea4 */
  esi = 0x4c8ea4u;
/* 479f3d: lea edi, [ebp - 0x20] */
  edi = (uint32_t)(ebp + 0xffffffe0u);
/* 479f40: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 479f41: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* 479f42: mov ebx, ecx */
  ebx = ecx;
/* 479f44: xor esi, esi */
  esi = 0;
/* 479f46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479f47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 479f4a: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 479f4d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 479f50: mov dword ptr [ebp - 0x24], 0xf */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xfu);
/* 479f57: call 0x461ed0 */
  esp -= 4; W32(esp, 0x479f5cu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 479f5c: mov al, byte ptr [ebp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x24u))) & 0xffu);
/* 479f5f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 479f61: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 479f64: jne 0x479f6e */
  if (!zf) goto L_479f6e;
L_479f66: /* 479f66: mov al, byte ptr [ebp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x20u))) & 0xffu);
/* 479f69: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 479f6c: jmp 0x479f77 */
  goto L_479f77;
L_479f6e: /* 479f6e: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 479f71: mov al, byte ptr [ebp + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x20u))) & 0xffu);
/* 479f74: mov byte ptr [ebp - 0x1d], al */
  W8((uint32_t)(ebp + 0xffffffe3u), (eax & 0xffu));
L_479f77: /* 479f77: mov dword ptr [ebp + 0x20], 0x10 */
  W32((uint32_t)(ebp + 0x20u), 0x10u);
L_479f7e: /* 479f7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 479f7f: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 479f82: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 479f85: call 0x466156 */
  esp -= 4; W32(esp, 0x479f8au); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 479f8a: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 479f8e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 479f91: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 479f94: jae 0x479f99 */
  if (!cf) goto L_479f99;
L_479f96: /* 479f96: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
L_479f99: /* 479f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479f9a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 479f9d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 479fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479fa1: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 479fa4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 479fa5: call dword ptr [0x48e0b4] */
  esp -= 4; W32(esp, 0x479fabu); SPILL(); f_41511c(); if (g_unwind) return; /* MSVCR70!_Strftime */ RELOAD();
/* 479fab: mov edi, eax */
  edi = eax;
/* 479fad: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 479fb0: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 479fb2: ja 0x479fbe */
  if ((!cf && !zf)) goto L_479fbe;
L_479fb4: /* 479fb4: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 479fb7: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 479fb9: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 479fbc: jmp 0x479f7e */
  goto L_479f7e;
L_479fbe: /* 479fbe: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 479fc1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 479fc2: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 479fc6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 479fc9: jae 0x479fce */
  if (!cf) goto L_479fce;
L_479fcb: /* 479fcb: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_479fce: /* 479fce: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 479fd0: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 479fd3: jbe 0x47a01b */
  if ((cf | zf)) goto L_47a01b;
L_479fd5: /* 479fd5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 479fd8: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 479fdb: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_479fde: /* 479fde: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 479fe1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 479fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479fe5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 479fe6: lea eax, [ebp + 0x24] */
  eax = (uint32_t)(ebp + 0x24u);
/* 479fe9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 479fea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 479feb: call 0x461dae */
  esp -= 4; W32(esp, 0x479ff0u); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 479ff0: mov esi, eax */
  esi = eax;
/* 479ff2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 479ff5: cmp esi, -2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 479ff8: jl 0x47a00a */
  if ((sf != of)) goto L_47a00a;
L_479ffa: /* 479ffa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 479ffc: jl 0x47a01b */
  if ((sf != of)) goto L_47a01b;
L_479ffe: /* 479ffe: jne 0x47a00a */
  if (!zf) goto L_47a00a;
L_47a000: /* 47a000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a001: call 0x461028 */
  esp -= 4; W32(esp, 0x47a006u); SPILL(); hle_strlen(); RELOAD();
/* 47a006: mov esi, eax */
  esi = eax;
/* 47a008: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a009: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_47a00a: /* 47a00a: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 47a00d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47a010: call 0x46b41f */
  esp -= 4; W32(esp, 0x47a015u); SPILL(); f_46b41f(); if (g_unwind) return; RELOAD();
/* 47a015: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47a017: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 47a019: jne 0x479fde */
  if (!zf) goto L_479fde;
L_47a01b: /* 47a01b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47a01e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47a021: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 47a023: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 47a026: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47a029: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a02b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 47a02e: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47a033u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47a033: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47a036: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47a03d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47a040: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47a043: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47a044: mov eax, esi */
  eax = esi;
/* 47a046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47a048: call 0x46190c */
  esp -= 4; W32(esp, 0x47a04du); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47a04d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47a04e: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47a051(void) {
  LOAD_REGS();
L_47a051: /* 47a051: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47a055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a057: call 0x473236 */
  esp -= 4; W32(esp, 0x47a05cu); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 47a05c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47a05f(void) {
  LOAD_REGS();
L_47a05f: /* 47a05f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a060: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a064: mov esi, ecx */
  esi = ecx;
/* 47a066: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a06a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a06b: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 47a06c: call 0x46adc2 */
  esp -= 4; W32(esp, 0x47a071u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 47a071: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a072: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 47a073: mov ecx, esi */
  ecx = esi;
/* 47a075: call 0x46adf7 */
  esp -= 4; W32(esp, 0x47a07au); SPILL(); f_46adf7(); if (g_unwind) return; RELOAD();
/* 47a07a: mov ecx, esi */
  ecx = esi;
/* 47a07c: call 0x4739f9 */
  esp -= 4; W32(esp, 0x47a081u); SPILL(); f_4739f9(); if (g_unwind) return; RELOAD();
/* 47a081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a082: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47a085(void) {
  LOAD_REGS();
L_47a085: /* 47a085: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47a087: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a089: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a08d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a091: call 0x472e07 */
  esp -= 4; W32(esp, 0x47a096u); SPILL(); f_472e07(); if (g_unwind) return; RELOAD();
/* 47a096: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47a099(void) {
  LOAD_REGS();
L_47a099: /* 47a099: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 47a09d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a09f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a0a0: mov eax, esp */
  eax = esp;
/* 47a0a2: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a0a6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 47a0a8: call 0x472f4c */
  esp -= 4; W32(esp, 0x47a0adu); SPILL(); f_472f4c(); if (g_unwind) return; RELOAD();
/* 47a0ad: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 47a0b1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47a0b4(void) {
  LOAD_REGS();
L_47a0b4: /* 47a0b4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a0b8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 47a0bc: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a0c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a0c1: mov edx, esp */
  edx = esp;
/* 47a0c3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 47a0c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a0c6: mov edx, esp */
  edx = esp;
/* 47a0c8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 47a0ca: call 0x4739f9 */
  esp -= 4; W32(esp, 0x47a0cfu); SPILL(); f_4739f9(); if (g_unwind) return; RELOAD();
/* 47a0cf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47a0d2(void) {
  LOAD_REGS();
L_47a0d2: /* 47a0d2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47a0d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a0d6: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47a0da: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47a0de: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47a0e2: call 0x47351d */
  esp -= 4; W32(esp, 0x47a0e7u); SPILL(); f_47351d(); if (g_unwind) return; RELOAD();
/* 47a0e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47a0ea(void) {
  LOAD_REGS();
L_47a0ea: /* 47a0ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a0eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a0ed: mov esi, ecx */
  esi = ecx;
/* 47a0ef: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47a0f4u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47a0f4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a0f8: mov ecx, esi */
  ecx = esi;
/* 47a0fa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a0fe: call 0x473297 */
  esp -= 4; W32(esp, 0x47a103u); SPILL(); f_473297(); if (g_unwind) return; RELOAD();
/* 47a103: mov eax, esi */
  eax = esi;
/* 47a105: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a106: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47a109(void) {
  LOAD_REGS();
L_47a109: /* 47a109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a10a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a10c: mov esi, ecx */
  esi = ecx;
/* 47a10e: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47a113u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47a113: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a117: mov ecx, esi */
  ecx = esi;
/* 47a119: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a11d: call 0x473297 */
  esp -= 4; W32(esp, 0x47a122u); SPILL(); f_473297(); if (g_unwind) return; RELOAD();
/* 47a122: mov eax, esi */
  eax = esi;
/* 47a124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a125: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47a128(void) {
  LOAD_REGS();
L_47a128: /* 47a128: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 47a12c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a12e: call 0x473297 */
  esp -= 4; W32(esp, 0x47a133u); SPILL(); f_473297(); if (g_unwind) return; RELOAD();
/* 47a133: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47a136(void) {
  LOAD_REGS();
L_47a136: /* 47a136: jmp 0x473218 */
  SPILL(); f_473218(); return;
}

void f_47a13b(void) {
  LOAD_REGS();
L_47a13b: /* 47a13b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47a13d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a13f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a143: call 0x472d70 */
  esp -= 4; W32(esp, 0x47a148u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 47a148: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47a14b(void) {
  LOAD_REGS();
L_47a14b: /* 47a14b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a14c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a150: mov esi, ecx */
  esi = ecx;
/* 47a152: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a156: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a157: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 47a158: call 0x46adc2 */
  esp -= 4; W32(esp, 0x47a15du); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 47a15d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a15e: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 47a15f: mov ecx, esi */
  ecx = esi;
/* 47a161: call 0x46adc2 */
  esp -= 4; W32(esp, 0x47a166u); SPILL(); f_46adc2(); if (g_unwind) return; RELOAD();
/* 47a166: mov ecx, esi */
  ecx = esi;
/* 47a168: call 0x4739f9 */
  esp -= 4; W32(esp, 0x47a16du); SPILL(); f_4739f9(); if (g_unwind) return; RELOAD();
/* 47a16d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a16e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47a171(void) {
  LOAD_REGS();
L_47a171: /* 47a171: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47a172: mov ebp, esp */
  ebp = esp;
/* 47a174: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47a177: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47a17a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47a17d: cmp dword ptr [edi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a180: mov ebx, ecx */
  ebx = ecx;
/* 47a182: jae 0x47a189 */
  if (!cf) goto L_47a189;
L_47a184: /* 47a184: call 0x487763 */
  esp -= 4; W32(esp, 0x47a189u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_47a189: /* 47a189: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 47a18c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 47a18f: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47a191: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a194: jae 0x47a199 */
  if (!cf) goto L_47a199;
L_47a196: /* 47a196: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_47a199: /* 47a199: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a19b: mov ecx, ebx */
  ecx = ebx;
/* 47a19d: jne 0x47a1b7 */
  if (!zf) goto L_47a1b7;
L_47a19f: /* 47a19f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47a1a1: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 47a1a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a1a4: call 0x47349c */
  esp -= 4; W32(esp, 0x47a1a9u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47a1a9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47a1ac: mov ecx, ebx */
  ecx = ebx;
/* 47a1ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a1b0: call 0x47349c */
  esp -= 4; W32(esp, 0x47a1b5u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47a1b5: jmp 0x47a1f8 */
  goto L_47a1f8;
L_47a1b7: /* 47a1b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a1b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a1ba: call 0x462402 */
  esp -= 4; W32(esp, 0x47a1bfu); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 47a1bf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a1c1: je 0x47a1f8 */
  if (zf) goto L_47a1f8;
L_47a1c3: /* 47a1c3: cmp dword ptr [edi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a1c7: jb 0x47a1ce */
  if (cf) goto L_47a1ce;
L_47a1c9: /* 47a1c9: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 47a1cc: jmp 0x47a1d1 */
  goto L_47a1d1;
L_47a1ce: /* 47a1ce: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_47a1d1: /* 47a1d1: cmp dword ptr [ebx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a1d5: jb 0x47a1dc */
  if (cf) goto L_47a1dc;
L_47a1d7: /* 47a1d7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 47a1da: jmp 0x47a1df */
  goto L_47a1df;
L_47a1dc: /* 47a1dc: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_47a1df: /* 47a1df: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47a1e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a1e3: lea ecx, [edi + ecx*2] */
  ecx = (uint32_t)(edi + ecx*2);
/* 47a1e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47a1e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a1e8: call 0x462cb0 */
  esp -= 4; W32(esp, 0x47a1edu); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 47a1ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47a1f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a1f1: mov ecx, ebx */
  ecx = ebx;
/* 47a1f3: call 0x4624dd */
  esp -= 4; W32(esp, 0x47a1f8u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_47a1f8: /* 47a1f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47a1f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a1fa: mov eax, ebx */
  eax = ebx;
/* 47a1fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47a1fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 47a1fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47a201(void) {
  LOAD_REGS();
L_47a201: /* 47a201: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 47a205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a207: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 47a20b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a20c: jne 0x47a212 */
  if (!zf) goto L_47a212;
L_47a20e: /* 47a20e: xor eax, eax */
  eax = 0;
/* 47a210: jmp 0x47a216 */
  goto L_47a216;
L_47a212: /* 47a212: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47a214: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_47a216: /* 47a216: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a21a: jb 0x47a221 */
  if (cf) goto L_47a221;
L_47a21c: /* 47a21c: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 47a21f: jmp 0x47a224 */
  goto L_47a224;
L_47a221: /* 47a221: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_47a224: /* 47a224: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a226: je 0x47a22c */
  if (zf) goto L_47a22c;
L_47a228: /* 47a228: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 47a22a: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
L_47a22c: /* 47a22c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47a22e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a230: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47a234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47a236: call 0x47351d */
  esp -= 4; W32(esp, 0x47a23bu); SPILL(); f_47351d(); if (g_unwind) return; RELOAD();
/* 47a23b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a23c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47a23f(void) {
  LOAD_REGS();
L_47a23f: /* 47a23f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a241: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47a245: call 0x473a90 */
  esp -= 4; W32(esp, 0x47a24au); SPILL(); f_473a90(); if (g_unwind) return; RELOAD();
/* 47a24a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47a24d(void) {
  LOAD_REGS();
L_47a24d: /* 47a24d: mov eax, 0x48d0d9 */
  eax = 0x48d0d9u;
/* 47a252: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47a257u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47a257: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47a25a: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47a25f: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47a262: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a263: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a264: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47a265: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47a268: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47a26b: call 0x4797fd */
  esp -= 4; W32(esp, 0x47a270u); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47a270: mov esi, eax */
  esi = eax;
/* 47a272: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a273: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 47a276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a277: mov ecx, esi */
  ecx = esi;
/* 47a279: call 0x471e93 */
  esp -= 4; W32(esp, 0x47a27eu); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47a27e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47a280: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47a284: mov ecx, esi */
  ecx = esi;
/* 47a286: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47a289u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47a289: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 47a28c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 47a28f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a292: mov ecx, edi */
  ecx = edi;
/* 47a294: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 47a297: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47a29a: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a29fu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a29f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a2a1: jne 0x47a2cc */
  if (!zf) goto L_47a2cc;
L_47a2a3: /* 47a2a3: mov ecx, edi */
  ecx = edi;
/* 47a2a5: call 0x47215a */
  esp -= 4; W32(esp, 0x47a2aau); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a2aa: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a2ac: mov ecx, edi */
  ecx = edi;
/* 47a2ae: jne 0x47a2b4 */
  if (!zf) goto L_47a2b4;
L_47a2b0: /* 47a2b0: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 47a2b2: jmp 0x47a2c1 */
  goto L_47a2c1;
L_47a2b4: /* 47a2b4: call 0x47215a */
  esp -= 4; W32(esp, 0x47a2b9u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a2b9: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a2bb: jne 0x47a2cc */
  if (!zf) goto L_47a2cc;
L_47a2bd: /* 47a2bd: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 47a2bf: mov ecx, edi */
  ecx = edi;
L_47a2c1: /* 47a2c1: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 47a2c4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47a2c7: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a2ccu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a2cc: /* 47a2cc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47a2cf: and eax, 0xe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a2d4: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a2d9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 47a2db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a2dc: jne 0x47a2e3 */
  if (!zf) goto L_47a2e3;
L_47a2de: /* 47a2de: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 47a2e1: jmp 0x47a2fd */
  goto L_47a2fd;
L_47a2e3: /* 47a2e3: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a2e8: jne 0x47a2f3 */
  if (!zf) goto L_47a2f3;
L_47a2ea: /* 47a2ea: mov dword ptr [ebp - 0x1c], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x10u);
/* 47a2f1: jmp 0x47a2fd */
  goto L_47a2fd;
L_47a2f3: /* 47a2f3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 47a2f5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47a2f7: and eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a2fa: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_47a2fd: /* 47a2fd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a300: and byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 47a304: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47a308: mov ecx, edi */
  ecx = edi;
/* 47a30a: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a30fu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a30f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a311: jne 0x47a376 */
  if (!zf) goto L_47a376;
L_47a313: /* 47a313: mov ecx, edi */
  ecx = edi;
/* 47a315: call 0x47215a */
  esp -= 4; W32(esp, 0x47a31au); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a31a: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a31c: jne 0x47a376 */
  if (!zf) goto L_47a376;
L_47a31e: /* 47a31e: mov ecx, edi */
  ecx = edi;
/* 47a320: mov byte ptr [ebp - 0x20], 1 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 47a324: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a329u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a329: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a32c: mov ecx, edi */
  ecx = edi;
/* 47a32e: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a333u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a333: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a335: jne 0x47a36d */
  if (!zf) goto L_47a36d;
L_47a337: /* 47a337: mov ecx, edi */
  ecx = edi;
/* 47a339: call 0x47215a */
  esp -= 4; W32(esp, 0x47a33eu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a33e: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a340: je 0x47a34d */
  if (zf) goto L_47a34d;
L_47a342: /* 47a342: mov ecx, edi */
  ecx = edi;
/* 47a344: call 0x47215a */
  esp -= 4; W32(esp, 0x47a349u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a349: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a34b: jne 0x47a36d */
  if (!zf) goto L_47a36d;
L_47a34d: /* 47a34d: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a351: je 0x47a359 */
  if (zf) goto L_47a359;
L_47a353: /* 47a353: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a357: jne 0x47a36d */
  if (!zf) goto L_47a36d;
L_47a359: /* 47a359: and byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 47a35d: mov ecx, edi */
  ecx = edi;
/* 47a35f: mov dword ptr [ebp - 0x1c], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x10u);
/* 47a366: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a36bu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a36b: jmp 0x47a382 */
  goto L_47a382;
L_47a36d: /* 47a36d: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a371: jne 0x47a37c */
  if (!zf) goto L_47a37c;
L_47a373: /* 47a373: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_47a376: /* 47a376: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a37a: je 0x47a396 */
  if (zf) goto L_47a396;
L_47a37c: /* 47a37c: cmp dword ptr [ebp - 0x1c], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a380: je 0x47a396 */
  if (zf) goto L_47a396;
L_47a382: /* 47a382: xor eax, eax */
  eax = 0;
/* 47a384: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a387: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47a38a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 47a38b: and eax, 0xfffffff2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a38e: add eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47a391: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 47a394: jmp 0x47a39d */
  goto L_47a39d;
L_47a396: /* 47a396: mov dword ptr [ebp - 0x24], 0xa */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xau);
L_47a39d: /* 47a39d: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47a3a0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47a3a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a3a5: call 0x46729b */
  esp -= 4; W32(esp, 0x47a3aau); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 47a3aa: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a3ad: mov ecx, edi */
  ecx = edi;
/* 47a3af: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47a3b3: xor esi, esi */
  esi = 0;
/* 47a3b5: add ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47a3b8: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a3bdu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a3bd: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a3bf: jne 0x47a493 */
  if (!zf) goto L_47a493;
L_47a3c5: /* 47a3c5: mov ecx, edi */
  ecx = edi;
/* 47a3c7: call 0x47215a */
  esp -= 4; W32(esp, 0x47a3ccu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a3cc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47a3cf: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 47a3d2: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 47a3d4: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47a3d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a3d8: push 0x4c8eac */
  { uint32_t v = 0x4c8eacu; esp -= 4; W32(esp, v); }
/* 47a3dd: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47a3e3u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47a3e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47a3e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a3e8: je 0x47a42c */
  if (zf) goto L_47a42c;
L_47a3ea: /* 47a3ea: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a3ee: jne 0x47a3f8 */
  if (!zf) goto L_47a3f8;
L_47a3f0: /* 47a3f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47a3f3: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a3f6: je 0x47a404 */
  if (zf) goto L_47a404;
L_47a3f8: /* 47a3f8: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a3fb: jae 0x47a404 */
  if (!cf) goto L_47a404;
L_47a3fd: /* 47a3fd: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47a400: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_47a404: /* 47a404: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a408: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a40b: mov byte ptr [ebp - 0x20], 1 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 47a40f: jae 0x47a414 */
  if (!cf) goto L_47a414;
L_47a411: /* 47a411: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a414: /* 47a414: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a418: je 0x47a45d */
  if (zf) goto L_47a45d;
L_47a41a: /* 47a41a: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a41e: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a421: jae 0x47a426 */
  if (!cf) goto L_47a426;
L_47a423: /* 47a423: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a426: /* 47a426: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47a428: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 47a42a: jmp 0x47a45d */
  goto L_47a45d;
L_47a42c: /* 47a42c: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a430: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a433: jae 0x47a438 */
  if (!cf) goto L_47a438;
L_47a435: /* 47a435: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a438: /* 47a438: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a43c: je 0x47a476 */
  if (zf) goto L_47a476;
L_47a43e: /* 47a43e: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a442: je 0x47a476 */
  if (zf) goto L_47a476;
L_47a444: /* 47a444: mov ecx, edi */
  ecx = edi;
/* 47a446: call 0x47215a */
  esp -= 4; W32(esp, 0x47a44bu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a44b: cmp al, byte ptr [ebp - 0x11] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a44e: jne 0x47a476 */
  if (!zf) goto L_47a476;
L_47a450: /* 47a450: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47a452: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a454: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47a457: call 0x466156 */
  esp -= 4; W32(esp, 0x47a45cu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47a45c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_47a45d: /* 47a45d: mov ecx, edi */
  ecx = edi;
/* 47a45f: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a464u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a464: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a467: mov ecx, edi */
  ecx = edi;
/* 47a469: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a46eu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a46e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a470: je 0x47a3c5 */
  if (zf) goto L_47a3c5;
L_47a476: /* 47a476: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a478: je 0x47a493 */
  if (zf) goto L_47a493;
L_47a47a: /* 47a47a: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a47e: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a481: jae 0x47a486 */
  if (!cf) goto L_47a486;
L_47a483: /* 47a483: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a486: /* 47a486: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47a48a: jle 0x47a48f */
  if ((zf || sf != of)) goto L_47a48f;
L_47a48c: /* 47a48c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47a48d: jmp 0x47a493 */
  goto L_47a493;
L_47a48f: /* 47a48f: and byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_47a493: /* 47a493: cmp dword ptr [ebp - 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a497: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 47a49a: jae 0x47a49f */
  if (!cf) goto L_47a49f;
L_47a49c: /* 47a49c: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
L_47a49f: /* 47a49f: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a4a3: je 0x47a4f5 */
  if (zf) goto L_47a4f5;
L_47a4a5: /* 47a4a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 47a4a7: jbe 0x47a4e4 */
  if ((cf | zf)) goto L_47a4e4;
L_47a4a9: /* 47a4a9: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 47a4ab: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a4ad: je 0x47a4e4 */
  if (zf) goto L_47a4e4;
L_47a4af: /* 47a4af: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 47a4b0: je 0x47a4c3 */
  if (zf) goto L_47a4c3;
L_47a4b2: /* 47a4b2: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a4b6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a4b9: jae 0x47a4be */
  if (!cf) goto L_47a4be;
L_47a4bb: /* 47a4bb: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47a4be: /* 47a4be: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a4c1: jne 0x47a4f5 */
  if (!zf) goto L_47a4f5;
L_47a4c3: /* 47a4c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a4c5: jne 0x47a4d8 */
  if (!zf) goto L_47a4d8;
L_47a4c7: /* 47a4c7: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a4cb: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a4ce: jae 0x47a4d3 */
  if (!cf) goto L_47a4d3;
L_47a4d0: /* 47a4d0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47a4d3: /* 47a4d3: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47a4d6: jl 0x47a4f5 */
  if ((sf != of)) goto L_47a4f5;
L_47a4d8: /* 47a4d8: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 47a4db: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47a4de: jle 0x47a4a5 */
  if ((zf || sf != of)) goto L_47a4a5;
L_47a4e0: /* 47a4e0: mov edx, eax */
  edx = eax;
/* 47a4e2: jmp 0x47a4a5 */
  goto L_47a4a5;
L_47a4e4: /* 47a4e4: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a4e8: jne 0x47a4fb */
  if (!zf) goto L_47a4fb;
L_47a4ea: /* 47a4ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47a4ed: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47a4f0: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* 47a4f3: jmp 0x47a4fb */
  goto L_47a4fb;
L_47a4f5: /* 47a4f5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47a4f8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_47a4fb: /* 47a4fb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47a4fe: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 47a501: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a503: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47a506: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47a50bu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47a50b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a50d: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 47a510: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47a515u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47a515: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47a518: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47a51b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47a522: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47a525: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47a528: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47a529: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a52a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47a52b: call 0x46190c */
  esp -= 4; W32(esp, 0x47a530u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47a530: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47a531: ret  */
  esp += 4; SPILL(); return;
}

void f_47a532(void) {
  LOAD_REGS();
L_47a532: /* 47a532: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47a533: mov ebp, esp */
  ebp = esp;
/* 47a535: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47a538: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a539: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a53a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47a53b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47a53e: call 0x4797fd */
  esp -= 4; W32(esp, 0x47a543u); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47a543: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47a546: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 47a549: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47a54c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a54d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a54e: mov ecx, esi */
  ecx = esi;
/* 47a550: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47a553: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a558u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a558: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a55a: jne 0x47a583 */
  if (!zf) goto L_47a583;
L_47a55c: /* 47a55c: mov ecx, esi */
  ecx = esi;
/* 47a55e: call 0x47215a */
  esp -= 4; W32(esp, 0x47a563u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a563: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a565: mov ecx, esi */
  ecx = esi;
/* 47a567: jne 0x47a56d */
  if (!zf) goto L_47a56d;
L_47a569: /* 47a569: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a56b: jmp 0x47a57d */
  goto L_47a57d;
L_47a56d: /* 47a56d: call 0x47215a */
  esp -= 4; W32(esp, 0x47a572u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a572: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a574: jne 0x47a583 */
  if (!zf) goto L_47a583;
L_47a576: /* 47a576: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47a579: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a57b: mov ecx, esi */
  ecx = esi;
L_47a57d: /* 47a57d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a57e: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a583u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a583: /* 47a583: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47a587: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a588: mov ecx, esi */
  ecx = esi;
/* 47a58a: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a58fu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a58f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a591: jne 0x47a5bf */
  if (!zf) goto L_47a5bf;
L_47a593: /* 47a593: mov ecx, esi */
  ecx = esi;
/* 47a595: call 0x47215a */
  esp -= 4; W32(esp, 0x47a59au); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a59a: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a59c: jne 0x47a5b5 */
  if (!zf) goto L_47a5b5;
L_47a59e: /* 47a59e: mov ecx, esi */
  ecx = esi;
/* 47a5a0: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a5a4: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a5a9u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a5a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a5aa: mov ecx, esi */
  ecx = esi;
/* 47a5ac: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a5b1u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a5b1: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a5b3: je 0x47a593 */
  if (zf) goto L_47a593;
L_47a5b5: /* 47a5b5: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a5b9: je 0x47a5bf */
  if (zf) goto L_47a5bf;
L_47a5bb: /* 47a5bb: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47a5be: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_47a5bf: /* 47a5bf: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47a5c3: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47a5c7: jmp 0x47a5fb */
  goto L_47a5fb;
L_47a5c9: /* 47a5c9: mov ecx, esi */
  ecx = esi;
/* 47a5cb: call 0x47215a */
  esp -= 4; W32(esp, 0x47a5d0u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a5d0: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a5d2: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47a5d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a5d6: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47a5dcu); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47a5dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a5de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a5df: je 0x47a607 */
  if (zf) goto L_47a607;
L_47a5e1: /* 47a5e1: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47a5e5: jge 0x47a5ed */
  if ((sf == of)) goto L_47a5ed;
L_47a5e7: /* 47a5e7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a5e8: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47a5eb: jmp 0x47a5f0 */
  goto L_47a5f0;
L_47a5ed: /* 47a5ed: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47a5f0: /* 47a5f0: mov ecx, esi */
  ecx = esi;
/* 47a5f2: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a5f6: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a5fbu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a5fb: /* 47a5fb: mov ecx, esi */
  ecx = esi;
/* 47a5fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a5fe: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a603u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a603: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a605: je 0x47a5c9 */
  if (zf) goto L_47a5c9;
L_47a607: /* 47a607: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a608: mov ecx, esi */
  ecx = esi;
/* 47a60a: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a60fu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a60f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a611: jne 0x47a63f */
  if (!zf) goto L_47a63f;
L_47a613: /* 47a613: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47a616: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47a618: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47a61bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47a61b: mov ecx, esi */
  ecx = esi;
/* 47a61d: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 47a61f: call 0x47215a */
  esp -= 4; W32(esp, 0x47a624u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a624: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a626: jne 0x47a63c */
  if (!zf) goto L_47a63c;
L_47a628: /* 47a628: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47a62eu); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47a62e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47a630: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47a632: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a634: mov ecx, esi */
  ecx = esi;
/* 47a636: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a637: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a63cu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a63c: /* 47a63c: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_47a63f: /* 47a63f: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a643: jne 0x47a6a8 */
  if (!zf) goto L_47a6a8;
L_47a645: /* 47a645: jmp 0x47a660 */
  goto L_47a660;
L_47a647: /* 47a647: mov ecx, esi */
  ecx = esi;
/* 47a649: call 0x47215a */
  esp -= 4; W32(esp, 0x47a64eu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a64e: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a650: jne 0x47a66c */
  if (!zf) goto L_47a66c;
L_47a652: /* 47a652: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47a655: mov ecx, esi */
  ecx = esi;
/* 47a657: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a65b: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a660u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a660: /* 47a660: mov ecx, esi */
  ecx = esi;
/* 47a662: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a663: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a668u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a668: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a66a: je 0x47a647 */
  if (zf) goto L_47a647;
L_47a66c: /* 47a66c: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47a670: jge 0x47a6a8 */
  if ((sf == of)) goto L_47a6a8;
L_47a672: /* 47a672: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47a675: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a676: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47a679: jmp 0x47a6a8 */
  goto L_47a6a8;
L_47a67b: /* 47a67b: mov ecx, esi */
  ecx = esi;
/* 47a67d: call 0x47215a */
  esp -= 4; W32(esp, 0x47a682u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a682: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a684: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47a687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a688: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47a68eu); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47a68e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a690: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a691: je 0x47a6b4 */
  if (zf) goto L_47a6b4;
L_47a693: /* 47a693: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47a697: jge 0x47a69d */
  if ((sf == of)) goto L_47a69d;
L_47a699: /* 47a699: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a69a: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47a69d: /* 47a69d: mov ecx, esi */
  ecx = esi;
/* 47a69f: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a6a3: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a6a8u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a6a8: /* 47a6a8: mov ecx, esi */
  ecx = esi;
/* 47a6aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a6ab: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a6b0u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a6b0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a6b2: je 0x47a67b */
  if (zf) goto L_47a67b;
L_47a6b4: /* 47a6b4: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a6b8: je 0x47a7a4 */
  if (zf) goto L_47a7a4;
L_47a6be: /* 47a6be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a6bf: mov ecx, esi */
  ecx = esi;
/* 47a6c1: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a6c6u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a6c6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a6c8: jne 0x47a79e */
  if (!zf) goto L_47a79e;
L_47a6ce: /* 47a6ce: mov ecx, esi */
  ecx = esi;
/* 47a6d0: call 0x47215a */
  esp -= 4; W32(esp, 0x47a6d5u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a6d5: cmp al, 0x65 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a6d7: je 0x47a6e8 */
  if (zf) goto L_47a6e8;
L_47a6d9: /* 47a6d9: mov ecx, esi */
  ecx = esi;
/* 47a6db: call 0x47215a */
  esp -= 4; W32(esp, 0x47a6e0u); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a6e0: cmp al, 0x45 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a6e2: jne 0x47a79e */
  if (!zf) goto L_47a79e;
L_47a6e8: /* 47a6e8: mov byte ptr [edi], 0x65 */
  W8((uint32_t)(edi), 0x65u);
/* 47a6eb: mov ecx, esi */
  ecx = esi;
/* 47a6ed: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a6ee: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a6f3u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a6f3: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47a6f7: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47a6fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a6fc: mov ecx, esi */
  ecx = esi;
/* 47a6fe: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a703u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a703: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a705: jne 0x47a72b */
  if (!zf) goto L_47a72b;
L_47a707: /* 47a707: mov ecx, esi */
  ecx = esi;
/* 47a709: call 0x47215a */
  esp -= 4; W32(esp, 0x47a70eu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a70e: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a710: mov ecx, esi */
  ecx = esi;
/* 47a712: jne 0x47a718 */
  if (!zf) goto L_47a718;
L_47a714: /* 47a714: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a716: jmp 0x47a725 */
  goto L_47a725;
L_47a718: /* 47a718: call 0x47215a */
  esp -= 4; W32(esp, 0x47a71du); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a71d: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a71f: jne 0x47a72b */
  if (!zf) goto L_47a72b;
L_47a721: /* 47a721: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a723: mov ecx, esi */
  ecx = esi;
L_47a725: /* 47a725: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a726: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a72bu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a72b: /* 47a72b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a72c: mov ecx, esi */
  ecx = esi;
/* 47a72e: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a733u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a733: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a735: jne 0x47a792 */
  if (!zf) goto L_47a792;
L_47a737: /* 47a737: mov ecx, esi */
  ecx = esi;
/* 47a739: call 0x47215a */
  esp -= 4; W32(esp, 0x47a73eu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a73e: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a740: jne 0x47a759 */
  if (!zf) goto L_47a759;
L_47a742: /* 47a742: mov ecx, esi */
  ecx = esi;
/* 47a744: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a748: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a74du); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47a74d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a74e: mov ecx, esi */
  ecx = esi;
/* 47a750: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a755u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a755: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a757: je 0x47a737 */
  if (zf) goto L_47a737;
L_47a759: /* 47a759: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a75d: je 0x47a792 */
  if (zf) goto L_47a792;
L_47a75f: /* 47a75f: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47a762: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a763: jmp 0x47a792 */
  goto L_47a792;
L_47a765: /* 47a765: mov ecx, esi */
  ecx = esi;
/* 47a767: call 0x47215a */
  esp -= 4; W32(esp, 0x47a76cu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47a76c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47a76e: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47a771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a772: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47a778u); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47a778: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a77a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a77b: je 0x47a79e */
  if (zf) goto L_47a79e;
L_47a77d: /* 47a77d: cmp dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47a781: jge 0x47a787 */
  if ((sf == of)) goto L_47a787;
L_47a783: /* 47a783: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47a784: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47a787: /* 47a787: mov ecx, esi */
  ecx = esi;
/* 47a789: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47a78d: call 0x46c710 */
  esp -= 4; W32(esp, 0x47a792u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47a792: /* 47a792: mov ecx, esi */
  ecx = esi;
/* 47a794: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a795: call 0x46e745 */
  esp -= 4; W32(esp, 0x47a79au); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47a79a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a79c: je 0x47a765 */
  if (zf) goto L_47a765;
L_47a79e: /* 47a79e: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a7a2: jne 0x47a7a7 */
  if (!zf) goto L_47a7a7;
L_47a7a4: /* 47a7a4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_47a7a7: /* 47a7a7: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
/* 47a7aa: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47a7ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47a7ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47a7af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47a7b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47a7b1: ret  */
  esp += 4; SPILL(); return;
}

void f_47a7b2(void) {
  LOAD_REGS();
L_47a7b2: /* 47a7b2: mov eax, 0x48d0d9 */
  eax = 0x48d0d9u;
/* 47a7b7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47a7bcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47a7bc: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47a7bf: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47a7c4: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47a7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47a7c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47a7c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47a7ca: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47a7cc: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47a7cf: call 0x461d6f */
  esp -= 4; W32(esp, 0x47a7d4u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47a7d4: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47a7d7: mov ebx, eax */
  ebx = eax;
/* 47a7d9: call 0x47989f */
  esp -= 4; W32(esp, 0x47a7deu); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47a7de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a7df: mov esi, eax */
  esi = eax;
/* 47a7e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a7e2: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 47a7e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a7e6: mov ecx, esi */
  ecx = esi;
/* 47a7e8: call 0x471e93 */
  esp -= 4; W32(esp, 0x47a7edu); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47a7ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47a7ef: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47a7f3: mov ecx, esi */
  ecx = esi;
/* 47a7f5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47a7f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47a7f8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 47a7fb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a7fe: mov ecx, edi */
  ecx = edi;
/* 47a800: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 47a803: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47a806: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47a809: call 0x46e77f */
  esp -= 4; W32(esp, 0x47a80eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47a80e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a810: jne 0x47a857 */
  if (!zf) goto L_47a857;
L_47a812: /* 47a812: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47a814: call 0x461d6f */
  esp -= 4; W32(esp, 0x47a819u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47a819: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a81a: mov ecx, edi */
  ecx = edi;
/* 47a81c: mov esi, eax */
  esi = eax;
/* 47a81e: call 0x472198 */
  esp -= 4; W32(esp, 0x47a823u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a823: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a826: jne 0x47a830 */
  if (!zf) goto L_47a830;
L_47a828: /* 47a828: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47a82b: mov byte ptr [eax], 0x2b */
  W8((uint32_t)(eax), 0x2bu);
/* 47a82e: jmp 0x47a84c */
  goto L_47a84c;
L_47a830: /* 47a830: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47a832: call 0x461d6f */
  esp -= 4; W32(esp, 0x47a837u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47a837: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a838: mov ecx, edi */
  ecx = edi;
/* 47a83a: mov esi, eax */
  esi = eax;
/* 47a83c: call 0x472198 */
  esp -= 4; W32(esp, 0x47a841u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a841: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a844: jne 0x47a857 */
  if (!zf) goto L_47a857;
L_47a846: /* 47a846: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47a849: mov byte ptr [eax], 0x2d */
  W8((uint32_t)(eax), 0x2du);
L_47a84c: /* 47a84c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47a84d: mov ecx, edi */
  ecx = edi;
/* 47a84f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47a852: call 0x46c756 */
  esp -= 4; W32(esp, 0x47a857u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47a857: /* 47a857: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47a85a: and eax, 0xe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a85f: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a864: jne 0x47a86f */
  if (!zf) goto L_47a86f;
L_47a866: /* 47a866: mov dword ptr [ebp - 0x18], 8 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x8u);
/* 47a86d: jmp 0x47a889 */
  goto L_47a889;
L_47a86f: /* 47a86f: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a874: jne 0x47a87f */
  if (!zf) goto L_47a87f;
L_47a876: /* 47a876: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 47a87d: jmp 0x47a889 */
  goto L_47a889;
L_47a87f: /* 47a87f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 47a881: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47a883: and eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a886: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_47a889: /* 47a889: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a88c: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 47a890: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47a894: mov ecx, edi */
  ecx = edi;
/* 47a896: call 0x46e77f */
  esp -= 4; W32(esp, 0x47a89bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47a89b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a89d: jne 0x47a91d */
  if (!zf) goto L_47a91d;
L_47a89f: /* 47a89f: mov ecx, edi */
  ecx = edi;
/* 47a8a1: call 0x472198 */
  esp -= 4; W32(esp, 0x47a8a6u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a8a6: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a8a9: jne 0x47a91d */
  if (!zf) goto L_47a91d;
L_47a8ab: /* 47a8ab: mov ecx, edi */
  ecx = edi;
/* 47a8ad: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47a8b1: call 0x46c756 */
  esp -= 4; W32(esp, 0x47a8b6u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47a8b6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a8b9: mov ecx, edi */
  ecx = edi;
/* 47a8bb: call 0x46e77f */
  esp -= 4; W32(esp, 0x47a8c0u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47a8c0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a8c2: jne 0x47a910 */
  if (!zf) goto L_47a910;
L_47a8c4: /* 47a8c4: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 47a8c6: call 0x461d6f */
  esp -= 4; W32(esp, 0x47a8cbu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47a8cb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a8cc: mov ecx, edi */
  ecx = edi;
/* 47a8ce: mov esi, eax */
  esi = eax;
/* 47a8d0: call 0x472198 */
  esp -= 4; W32(esp, 0x47a8d5u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a8d5: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a8d8: je 0x47a8f0 */
  if (zf) goto L_47a8f0;
L_47a8da: /* 47a8da: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 47a8dc: call 0x461d6f */
  esp -= 4; W32(esp, 0x47a8e1u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47a8e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47a8e2: mov ecx, edi */
  ecx = edi;
/* 47a8e4: mov esi, eax */
  esi = eax;
/* 47a8e6: call 0x472198 */
  esp -= 4; W32(esp, 0x47a8ebu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a8eb: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a8ee: jne 0x47a910 */
  if (!zf) goto L_47a910;
L_47a8f0: /* 47a8f0: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a8f4: je 0x47a8fc */
  if (zf) goto L_47a8fc;
L_47a8f6: /* 47a8f6: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a8fa: jne 0x47a910 */
  if (!zf) goto L_47a910;
L_47a8fc: /* 47a8fc: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 47a900: mov ecx, edi */
  ecx = edi;
/* 47a902: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 47a909: call 0x46c756 */
  esp -= 4; W32(esp, 0x47a90eu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47a90e: jmp 0x47a929 */
  goto L_47a929;
L_47a910: /* 47a910: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a914: jne 0x47a923 */
  if (!zf) goto L_47a923;
L_47a916: /* 47a916: mov dword ptr [ebp - 0x18], 8 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x8u);
L_47a91d: /* 47a91d: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a921: je 0x47a93e */
  if (zf) goto L_47a93e;
L_47a923: /* 47a923: cmp dword ptr [ebp - 0x18], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a927: je 0x47a93e */
  if (zf) goto L_47a93e;
L_47a929: /* 47a929: xor eax, eax */
  eax = 0;
/* 47a92b: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47a92f: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47a932: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 47a933: and eax, 0xfffffff2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47a936: add eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47a939: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47a93c: jmp 0x47a945 */
  goto L_47a945;
L_47a93e: /* 47a93e: mov dword ptr [ebp - 0x20], 0xa */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xau);
L_47a945: /* 47a945: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47a948: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47a94b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47a94d: call 0x46729b */
  esp -= 4; W32(esp, 0x47a952u); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 47a952: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 47a955: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47a958: mov ecx, edi */
  ecx = edi;
/* 47a95a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47a95e: xor esi, esi */
  esi = 0;
/* 47a960: add ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47a963: call 0x46e77f */
  esp -= 4; W32(esp, 0x47a968u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47a968: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47a96a: jne 0x47aa46 */
  if (!zf) goto L_47aa46;
L_47a970: /* 47a970: mov ecx, edi */
  ecx = edi;
/* 47a972: call 0x472198 */
  esp -= 4; W32(esp, 0x47a977u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a978: call 0x488a88 */
  esp -= 4; W32(esp, 0x47a97du); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47a97d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47a980: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47a983: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 47a985: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47a988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47a989: push 0x4c8eac */
  { uint32_t v = 0x4c8eacu; esp -= 4; W32(esp, v); }
/* 47a98e: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47a994u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47a994: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47a997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47a999: je 0x47a9dd */
  if (zf) goto L_47a9dd;
L_47a99b: /* 47a99b: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a99f: jne 0x47a9a9 */
  if (!zf) goto L_47a9a9;
L_47a9a1: /* 47a9a1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47a9a4: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a9a7: je 0x47a9b5 */
  if (zf) goto L_47a9b5;
L_47a9a9: /* 47a9a9: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a9ac: jae 0x47a9b5 */
  if (!cf) goto L_47a9b5;
L_47a9ae: /* 47a9ae: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47a9b1: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_47a9b5: /* 47a9b5: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a9b9: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a9bc: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47a9c0: jae 0x47a9c5 */
  if (!cf) goto L_47a9c5;
L_47a9c2: /* 47a9c2: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a9c5: /* 47a9c5: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a9c9: je 0x47aa10 */
  if (zf) goto L_47aa10;
L_47a9cb: /* 47a9cb: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a9cf: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a9d2: jae 0x47a9d7 */
  if (!cf) goto L_47a9d7;
L_47a9d4: /* 47a9d4: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a9d7: /* 47a9d7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47a9d9: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 47a9db: jmp 0x47aa10 */
  goto L_47aa10;
L_47a9dd: /* 47a9dd: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47a9e1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47a9e4: jae 0x47a9e9 */
  if (!cf) goto L_47a9e9;
L_47a9e6: /* 47a9e6: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47a9e9: /* 47a9e9: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47a9ed: je 0x47aa29 */
  if (zf) goto L_47aa29;
L_47a9ef: /* 47a9ef: cmp word ptr [ebp - 0x24], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47a9f4: je 0x47aa29 */
  if (zf) goto L_47aa29;
L_47a9f6: /* 47a9f6: mov ecx, edi */
  ecx = edi;
/* 47a9f8: call 0x472198 */
  esp -= 4; W32(esp, 0x47a9fdu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47a9fd: cmp ax, word ptr [ebp - 0x24] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47aa01: jne 0x47aa29 */
  if (!zf) goto L_47aa29;
L_47aa03: /* 47aa03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47aa05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47aa07: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47aa0a: call 0x466156 */
  esp -= 4; W32(esp, 0x47aa0fu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47aa0f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_47aa10: /* 47aa10: mov ecx, edi */
  ecx = edi;
/* 47aa12: call 0x46c756 */
  esp -= 4; W32(esp, 0x47aa17u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47aa17: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47aa1a: mov ecx, edi */
  ecx = edi;
/* 47aa1c: call 0x46e77f */
  esp -= 4; W32(esp, 0x47aa21u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47aa21: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47aa23: je 0x47a970 */
  if (zf) goto L_47a970;
L_47aa29: /* 47aa29: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47aa2b: je 0x47aa46 */
  if (zf) goto L_47aa46;
L_47aa2d: /* 47aa2d: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47aa31: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47aa34: jae 0x47aa39 */
  if (!cf) goto L_47aa39;
L_47aa36: /* 47aa36: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47aa39: /* 47aa39: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47aa3d: jle 0x47aa42 */
  if ((zf || sf != of)) goto L_47aa42;
L_47aa3f: /* 47aa3f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47aa40: jmp 0x47aa46 */
  goto L_47aa46;
L_47aa42: /* 47aa42: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_47aa46: /* 47aa46: cmp dword ptr [ebp - 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47aa4a: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 47aa4d: jae 0x47aa52 */
  if (!cf) goto L_47aa52;
L_47aa4f: /* 47aa4f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
L_47aa52: /* 47aa52: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aa56: je 0x47aaa8 */
  if (zf) goto L_47aaa8;
L_47aa58: /* 47aa58: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 47aa5a: jbe 0x47aa97 */
  if ((cf | zf)) goto L_47aa97;
L_47aa5c: /* 47aa5c: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 47aa5e: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aa60: je 0x47aa97 */
  if (zf) goto L_47aa97;
L_47aa62: /* 47aa62: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 47aa63: je 0x47aa76 */
  if (zf) goto L_47aa76;
L_47aa65: /* 47aa65: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47aa69: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47aa6c: jae 0x47aa71 */
  if (!cf) goto L_47aa71;
L_47aa6e: /* 47aa6e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47aa71: /* 47aa71: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aa74: jne 0x47aaa8 */
  if (!zf) goto L_47aaa8;
L_47aa76: /* 47aa76: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47aa78: jne 0x47aa8b */
  if (!zf) goto L_47aa8b;
L_47aa7a: /* 47aa7a: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47aa7e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47aa81: jae 0x47aa86 */
  if (!cf) goto L_47aa86;
L_47aa83: /* 47aa83: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47aa86: /* 47aa86: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47aa89: jl 0x47aaa8 */
  if ((sf != of)) goto L_47aaa8;
L_47aa8b: /* 47aa8b: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 47aa8e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47aa91: jle 0x47aa58 */
  if ((zf || sf != of)) goto L_47aa58;
L_47aa93: /* 47aa93: mov edx, eax */
  edx = eax;
/* 47aa95: jmp 0x47aa58 */
  goto L_47aa58;
L_47aa97: /* 47aa97: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aa9b: jne 0x47aaae */
  if (!zf) goto L_47aaae;
L_47aa9d: /* 47aa9d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47aaa0: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47aaa3: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* 47aaa6: jmp 0x47aaae */
  goto L_47aaae;
L_47aaa8: /* 47aaa8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47aaab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_47aaae: /* 47aaae: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47aab1: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 47aab4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47aab6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47aab9: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47aabeu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47aabe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47aac0: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 47aac3: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47aac8u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47aac8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47aacb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47aace: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47aad5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47aad8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47aadb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47aadc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47aadd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47aade: call 0x46190c */
  esp -= 4; W32(esp, 0x47aae3u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47aae3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47aae4: ret  */
  esp += 4; SPILL(); return;
}

void f_47aae5(void) {
  LOAD_REGS();
L_47aae5: /* 47aae5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47aae6: mov ebp, esp */
  ebp = esp;
/* 47aae8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47aaeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47aaec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47aaed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47aaee: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47aaf0: call 0x461d6f */
  esp -= 4; W32(esp, 0x47aaf5u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47aaf5: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47aaf8: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47aafb: call 0x47989f */
  esp -= 4; W32(esp, 0x47ab00u); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47ab00: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 47ab03: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47ab06: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ab07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ab08: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ab0b: mov ecx, esi */
  ecx = esi;
/* 47ab0d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47ab10: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ab15u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ab15: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ab17: jne 0x47ab58 */
  if (!zf) goto L_47ab58;
L_47ab19: /* 47ab19: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47ab1b: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ab20u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ab20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ab21: mov ecx, esi */
  ecx = esi;
/* 47ab23: mov ebx, eax */
  ebx = eax;
/* 47ab25: call 0x472198 */
  esp -= 4; W32(esp, 0x47ab2au); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ab2a: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ab2d: jne 0x47ab34 */
  if (!zf) goto L_47ab34;
L_47ab2f: /* 47ab2f: mov byte ptr [edi], 0x2b */
  W8((uint32_t)(edi), 0x2bu);
/* 47ab32: jmp 0x47ab50 */
  goto L_47ab50;
L_47ab34: /* 47ab34: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47ab36: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ab3bu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ab3b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ab3c: mov ecx, esi */
  ecx = esi;
/* 47ab3e: mov ebx, eax */
  ebx = eax;
/* 47ab40: call 0x472198 */
  esp -= 4; W32(esp, 0x47ab45u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ab45: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ab48: jne 0x47ab58 */
  if (!zf) goto L_47ab58;
L_47ab4a: /* 47ab4a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47ab4d: mov byte ptr [edi], 0x2d */
  W8((uint32_t)(edi), 0x2du);
L_47ab50: /* 47ab50: mov ecx, esi */
  ecx = esi;
/* 47ab52: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ab53: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ab58u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ab58: /* 47ab58: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47ab5b: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47ab5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ab60: mov ecx, esi */
  ecx = esi;
/* 47ab62: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ab67u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ab67: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ab69: jne 0x47ab99 */
  if (!zf) goto L_47ab99;
L_47ab6b: /* 47ab6b: mov ecx, esi */
  ecx = esi;
/* 47ab6d: call 0x472198 */
  esp -= 4; W32(esp, 0x47ab72u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ab72: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ab76: jne 0x47ab8f */
  if (!zf) goto L_47ab8f;
L_47ab78: /* 47ab78: mov ecx, esi */
  ecx = esi;
/* 47ab7a: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47ab7e: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ab83u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47ab83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ab84: mov ecx, esi */
  ecx = esi;
/* 47ab86: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ab8bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ab8b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ab8d: je 0x47ab6b */
  if (zf) goto L_47ab6b;
L_47ab8f: /* 47ab8f: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47ab93: je 0x47ab99 */
  if (zf) goto L_47ab99;
L_47ab95: /* 47ab95: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47ab98: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_47ab99: /* 47ab99: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47ab9d: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47aba1: jmp 0x47abdc */
  goto L_47abdc;
L_47aba3: /* 47aba3: mov ecx, esi */
  ecx = esi;
/* 47aba5: call 0x472198 */
  esp -= 4; W32(esp, 0x47abaau); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47abaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47abab: call 0x488a88 */
  esp -= 4; W32(esp, 0x47abb0u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47abb0: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47abb2: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47abb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47abb6: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47abbcu); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47abbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47abbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47abbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47abc0: je 0x47abe8 */
  if (zf) goto L_47abe8;
L_47abc2: /* 47abc2: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47abc6: jge 0x47abce */
  if ((sf == of)) goto L_47abce;
L_47abc8: /* 47abc8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47abc9: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47abcc: jmp 0x47abd1 */
  goto L_47abd1;
L_47abce: /* 47abce: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47abd1: /* 47abd1: mov ecx, esi */
  ecx = esi;
/* 47abd3: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47abd7: call 0x46c756 */
  esp -= 4; W32(esp, 0x47abdcu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47abdc: /* 47abdc: mov ecx, esi */
  ecx = esi;
/* 47abde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47abdf: call 0x46e77f */
  esp -= 4; W32(esp, 0x47abe4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47abe4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47abe6: je 0x47aba3 */
  if (zf) goto L_47aba3;
L_47abe8: /* 47abe8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47abe9: mov ecx, esi */
  ecx = esi;
/* 47abeb: call 0x46e77f */
  esp -= 4; W32(esp, 0x47abf0u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47abf0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47abf2: jne 0x47ac1e */
  if (!zf) goto L_47ac1e;
L_47abf4: /* 47abf4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47abf7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47abf9: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47abfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47abfc: mov ecx, esi */
  ecx = esi;
/* 47abfe: mov ebx, eax */
  ebx = eax;
/* 47ac00: call 0x472198 */
  esp -= 4; W32(esp, 0x47ac05u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ac05: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ac08: jne 0x47ac1e */
  if (!zf) goto L_47ac1e;
L_47ac0a: /* 47ac0a: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47ac10u); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47ac10: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47ac12: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47ac14: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47ac16: mov ecx, esi */
  ecx = esi;
/* 47ac18: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ac19: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ac1eu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ac1e: /* 47ac1e: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ac22: jne 0x47ac92 */
  if (!zf) goto L_47ac92;
L_47ac24: /* 47ac24: jmp 0x47ac41 */
  goto L_47ac41;
L_47ac26: /* 47ac26: mov ecx, esi */
  ecx = esi;
/* 47ac28: call 0x472198 */
  esp -= 4; W32(esp, 0x47ac2du); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ac2d: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ac31: jne 0x47ac4f */
  if (!zf) goto L_47ac4f;
L_47ac33: /* 47ac33: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47ac36: mov ecx, esi */
  ecx = esi;
/* 47ac38: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47ac3c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ac41u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ac41: /* 47ac41: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ac44: mov ecx, esi */
  ecx = esi;
/* 47ac46: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ac4bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ac4b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ac4d: je 0x47ac26 */
  if (zf) goto L_47ac26;
L_47ac4f: /* 47ac4f: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ac53: jge 0x47ac92 */
  if ((sf == of)) goto L_47ac92;
L_47ac55: /* 47ac55: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47ac58: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ac59: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47ac5c: jmp 0x47ac92 */
  goto L_47ac92;
L_47ac5e: /* 47ac5e: mov ecx, esi */
  ecx = esi;
/* 47ac60: call 0x472198 */
  esp -= 4; W32(esp, 0x47ac65u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ac65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ac66: call 0x488a88 */
  esp -= 4; W32(esp, 0x47ac6bu); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47ac6b: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47ac6d: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47ac70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ac71: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47ac77u); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47ac77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47ac79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ac7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ac7b: je 0x47aca0 */
  if (zf) goto L_47aca0;
L_47ac7d: /* 47ac7d: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ac81: jge 0x47ac87 */
  if ((sf == of)) goto L_47ac87;
L_47ac83: /* 47ac83: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ac84: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47ac87: /* 47ac87: mov ecx, esi */
  ecx = esi;
/* 47ac89: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47ac8d: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ac92u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ac92: /* 47ac92: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ac95: mov ecx, esi */
  ecx = esi;
/* 47ac97: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ac9cu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ac9c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ac9e: je 0x47ac5e */
  if (zf) goto L_47ac5e;
L_47aca0: /* 47aca0: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aca4: je 0x47adce */
  if (zf) goto L_47adce;
L_47acaa: /* 47acaa: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47acad: mov ecx, esi */
  ecx = esi;
/* 47acaf: call 0x46e77f */
  esp -= 4; W32(esp, 0x47acb4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47acb4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47acb6: jne 0x47adc8 */
  if (!zf) goto L_47adc8;
L_47acbc: /* 47acbc: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 47acbe: call 0x461d6f */
  esp -= 4; W32(esp, 0x47acc3u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47acc3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47acc4: mov ecx, esi */
  ecx = esi;
/* 47acc6: mov ebx, eax */
  ebx = eax;
/* 47acc8: call 0x472198 */
  esp -= 4; W32(esp, 0x47accdu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47accd: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47acd0: je 0x47acec */
  if (zf) goto L_47acec;
L_47acd2: /* 47acd2: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* 47acd4: call 0x461d6f */
  esp -= 4; W32(esp, 0x47acd9u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47acd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47acda: mov ecx, esi */
  ecx = esi;
/* 47acdc: mov ebx, eax */
  ebx = eax;
/* 47acde: call 0x472198 */
  esp -= 4; W32(esp, 0x47ace3u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ace3: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ace6: jne 0x47adc8 */
  if (!zf) goto L_47adc8;
L_47acec: /* 47acec: mov byte ptr [edi], 0x65 */
  W8((uint32_t)(edi), 0x65u);
/* 47acef: mov ecx, esi */
  ecx = esi;
/* 47acf1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47acf2: call 0x46c756 */
  esp -= 4; W32(esp, 0x47acf7u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47acf7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47acfa: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47acfe: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47ad02: mov ecx, esi */
  ecx = esi;
/* 47ad04: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ad09u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ad09: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ad0b: jne 0x47ad49 */
  if (!zf) goto L_47ad49;
L_47ad0d: /* 47ad0d: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47ad0f: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ad14u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ad14: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ad15: mov ecx, esi */
  ecx = esi;
/* 47ad17: mov ebx, eax */
  ebx = eax;
/* 47ad19: call 0x472198 */
  esp -= 4; W32(esp, 0x47ad1eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ad1e: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ad21: jne 0x47ad28 */
  if (!zf) goto L_47ad28;
L_47ad23: /* 47ad23: mov byte ptr [edi], 0x2b */
  W8((uint32_t)(edi), 0x2bu);
/* 47ad26: jmp 0x47ad41 */
  goto L_47ad41;
L_47ad28: /* 47ad28: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47ad2a: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ad2fu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ad2f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ad30: mov ecx, esi */
  ecx = esi;
/* 47ad32: mov ebx, eax */
  ebx = eax;
/* 47ad34: call 0x472198 */
  esp -= 4; W32(esp, 0x47ad39u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ad39: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ad3c: jne 0x47ad49 */
  if (!zf) goto L_47ad49;
L_47ad3e: /* 47ad3e: mov byte ptr [edi], 0x2d */
  W8((uint32_t)(edi), 0x2du);
L_47ad41: /* 47ad41: mov ecx, esi */
  ecx = esi;
/* 47ad43: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ad44: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ad49u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ad49: /* 47ad49: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47ad4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ad4d: mov ecx, esi */
  ecx = esi;
/* 47ad4f: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ad54u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ad54: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ad56: jne 0x47adbc */
  if (!zf) goto L_47adbc;
L_47ad58: /* 47ad58: mov ecx, esi */
  ecx = esi;
/* 47ad5a: call 0x472198 */
  esp -= 4; W32(esp, 0x47ad5fu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ad5f: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ad63: jne 0x47ad7c */
  if (!zf) goto L_47ad7c;
L_47ad65: /* 47ad65: mov ecx, esi */
  ecx = esi;
/* 47ad67: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47ad6b: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ad70u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47ad70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ad71: mov ecx, esi */
  ecx = esi;
/* 47ad73: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ad78u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ad78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ad7a: je 0x47ad58 */
  if (zf) goto L_47ad58;
L_47ad7c: /* 47ad7c: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47ad80: je 0x47adbc */
  if (zf) goto L_47adbc;
L_47ad82: /* 47ad82: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47ad85: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47ad86: jmp 0x47adbc */
  goto L_47adbc;
L_47ad88: /* 47ad88: mov ecx, esi */
  ecx = esi;
/* 47ad8a: call 0x472198 */
  esp -= 4; W32(esp, 0x47ad8fu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ad8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ad90: call 0x488a88 */
  esp -= 4; W32(esp, 0x47ad95u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47ad95: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47ad97: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47ad9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ad9b: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47ada1u); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47ada1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47ada3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ada4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ada5: je 0x47adc8 */
  if (zf) goto L_47adc8;
L_47ada7: /* 47ada7: cmp dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47adab: jge 0x47adb1 */
  if ((sf == of)) goto L_47adb1;
L_47adad: /* 47adad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47adae: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47adb1: /* 47adb1: mov ecx, esi */
  ecx = esi;
/* 47adb3: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47adb7: call 0x46c756 */
  esp -= 4; W32(esp, 0x47adbcu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47adbc: /* 47adbc: mov ecx, esi */
  ecx = esi;
/* 47adbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47adbf: call 0x46e77f */
  esp -= 4; W32(esp, 0x47adc4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47adc4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47adc6: je 0x47ad88 */
  if (zf) goto L_47ad88;
L_47adc8: /* 47adc8: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47adcc: jne 0x47add1 */
  if (!zf) goto L_47add1;
L_47adce: /* 47adce: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_47add1: /* 47add1: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
/* 47add4: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47add7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47add8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47add9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47adda: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47addb: ret  */
  esp += 4; SPILL(); return;
}

void f_47addc(void) {
  LOAD_REGS();
L_47addc: /* 47addc: mov eax, 0x48d0d9 */
  eax = 0x48d0d9u;
/* 47ade1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ade6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ade6: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ade9: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47adee: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47adf1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47adf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47adf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47adf4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47adf6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47adf9: call 0x461d6f */
  esp -= 4; W32(esp, 0x47adfeu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47adfe: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47ae01: mov ebx, eax */
  ebx = eax;
/* 47ae03: call 0x479941 */
  esp -= 4; W32(esp, 0x47ae08u); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 47ae08: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ae09: mov esi, eax */
  esi = eax;
/* 47ae0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ae0c: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 47ae0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ae10: mov ecx, esi */
  ecx = esi;
/* 47ae12: call 0x471e93 */
  esp -= 4; W32(esp, 0x47ae17u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47ae17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47ae19: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ae1d: mov ecx, esi */
  ecx = esi;
/* 47ae1f: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47ae22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ae22: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 47ae25: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ae28: mov ecx, edi */
  ecx = edi;
/* 47ae2a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 47ae2d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ae30: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47ae33: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ae38u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ae38: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ae3a: jne 0x47ae81 */
  if (!zf) goto L_47ae81;
L_47ae3c: /* 47ae3c: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47ae3e: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ae43u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ae43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ae44: mov ecx, edi */
  ecx = edi;
/* 47ae46: mov esi, eax */
  esi = eax;
/* 47ae48: call 0x472198 */
  esp -= 4; W32(esp, 0x47ae4du); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ae4d: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ae50: jne 0x47ae5a */
  if (!zf) goto L_47ae5a;
L_47ae52: /* 47ae52: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ae55: mov byte ptr [eax], 0x2b */
  W8((uint32_t)(eax), 0x2bu);
/* 47ae58: jmp 0x47ae76 */
  goto L_47ae76;
L_47ae5a: /* 47ae5a: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47ae5c: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ae61u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ae61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ae62: mov ecx, edi */
  ecx = edi;
/* 47ae64: mov esi, eax */
  esi = eax;
/* 47ae66: call 0x472198 */
  esp -= 4; W32(esp, 0x47ae6bu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47ae6b: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47ae6e: jne 0x47ae81 */
  if (!zf) goto L_47ae81;
L_47ae70: /* 47ae70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ae73: mov byte ptr [eax], 0x2d */
  W8((uint32_t)(eax), 0x2du);
L_47ae76: /* 47ae76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47ae77: mov ecx, edi */
  ecx = edi;
/* 47ae79: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47ae7c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47ae81u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47ae81: /* 47ae81: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47ae84: and eax, 0xe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47ae89: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ae8e: jne 0x47ae99 */
  if (!zf) goto L_47ae99;
L_47ae90: /* 47ae90: mov dword ptr [ebp - 0x18], 8 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x8u);
/* 47ae97: jmp 0x47aeb3 */
  goto L_47aeb3;
L_47ae99: /* 47ae99: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ae9e: jne 0x47aea9 */
  if (!zf) goto L_47aea9;
L_47aea0: /* 47aea0: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 47aea7: jmp 0x47aeb3 */
  goto L_47aeb3;
L_47aea9: /* 47aea9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 47aeab: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 47aead: and eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47aeb0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_47aeb3: /* 47aeb3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47aeb6: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 47aeba: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47aebe: mov ecx, edi */
  ecx = edi;
/* 47aec0: call 0x46e77f */
  esp -= 4; W32(esp, 0x47aec5u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47aec5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47aec7: jne 0x47af47 */
  if (!zf) goto L_47af47;
L_47aec9: /* 47aec9: mov ecx, edi */
  ecx = edi;
/* 47aecb: call 0x472198 */
  esp -= 4; W32(esp, 0x47aed0u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47aed0: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47aed3: jne 0x47af47 */
  if (!zf) goto L_47af47;
L_47aed5: /* 47aed5: mov ecx, edi */
  ecx = edi;
/* 47aed7: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47aedb: call 0x46c756 */
  esp -= 4; W32(esp, 0x47aee0u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47aee0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47aee3: mov ecx, edi */
  ecx = edi;
/* 47aee5: call 0x46e77f */
  esp -= 4; W32(esp, 0x47aeeau); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47aeea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47aeec: jne 0x47af3a */
  if (!zf) goto L_47af3a;
L_47aeee: /* 47aeee: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 47aef0: call 0x461d6f */
  esp -= 4; W32(esp, 0x47aef5u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47aef5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47aef6: mov ecx, edi */
  ecx = edi;
/* 47aef8: mov esi, eax */
  esi = eax;
/* 47aefa: call 0x472198 */
  esp -= 4; W32(esp, 0x47aeffu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47aeff: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47af02: je 0x47af1a */
  if (zf) goto L_47af1a;
L_47af04: /* 47af04: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 47af06: call 0x461d6f */
  esp -= 4; W32(esp, 0x47af0bu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47af0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47af0c: mov ecx, edi */
  ecx = edi;
/* 47af0e: mov esi, eax */
  esi = eax;
/* 47af10: call 0x472198 */
  esp -= 4; W32(esp, 0x47af15u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47af15: cmp ax, si */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47af18: jne 0x47af3a */
  if (!zf) goto L_47af3a;
L_47af1a: /* 47af1a: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af1e: je 0x47af26 */
  if (zf) goto L_47af26;
L_47af20: /* 47af20: cmp dword ptr [ebp - 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af24: jne 0x47af3a */
  if (!zf) goto L_47af3a;
L_47af26: /* 47af26: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 47af2a: mov ecx, edi */
  ecx = edi;
/* 47af2c: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 47af33: call 0x46c756 */
  esp -= 4; W32(esp, 0x47af38u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47af38: jmp 0x47af53 */
  goto L_47af53;
L_47af3a: /* 47af3a: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af3e: jne 0x47af4d */
  if (!zf) goto L_47af4d;
L_47af40: /* 47af40: mov dword ptr [ebp - 0x18], 8 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x8u);
L_47af47: /* 47af47: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af4b: je 0x47af68 */
  if (zf) goto L_47af68;
L_47af4d: /* 47af4d: cmp dword ptr [ebp - 0x18], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af51: je 0x47af68 */
  if (zf) goto L_47af68;
L_47af53: /* 47af53: xor eax, eax */
  eax = 0;
/* 47af55: cmp dword ptr [ebp - 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47af59: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47af5c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 47af5d: and eax, 0xfffffff2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47af60: add eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47af63: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47af66: jmp 0x47af6f */
  goto L_47af6f;
L_47af68: /* 47af68: mov dword ptr [ebp - 0x20], 0xa */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xau);
L_47af6f: /* 47af6f: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47af72: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47af75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47af77: call 0x46729b */
  esp -= 4; W32(esp, 0x47af7cu); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 47af7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 47af7f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47af82: mov ecx, edi */
  ecx = edi;
/* 47af84: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47af88: xor esi, esi */
  esi = 0;
/* 47af8a: add ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47af8d: call 0x46e77f */
  esp -= 4; W32(esp, 0x47af92u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47af92: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47af94: jne 0x47b070 */
  if (!zf) goto L_47b070;
L_47af9a: /* 47af9a: mov ecx, edi */
  ecx = edi;
/* 47af9c: call 0x472198 */
  esp -= 4; W32(esp, 0x47afa1u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47afa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47afa2: call 0x488a88 */
  esp -= 4; W32(esp, 0x47afa7u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47afa7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47afaa: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47afad: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 47afaf: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47afb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47afb3: push 0x4c8eac */
  { uint32_t v = 0x4c8eacu; esp -= 4; W32(esp, v); }
/* 47afb8: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47afbeu); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47afbe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47afc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47afc3: je 0x47b007 */
  if (zf) goto L_47b007;
L_47afc5: /* 47afc5: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47afc9: jne 0x47afd3 */
  if (!zf) goto L_47afd3;
L_47afcb: /* 47afcb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47afce: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47afd1: je 0x47afdf */
  if (zf) goto L_47afdf;
L_47afd3: /* 47afd3: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47afd6: jae 0x47afdf */
  if (!cf) goto L_47afdf;
L_47afd8: /* 47afd8: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47afdb: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
L_47afdf: /* 47afdf: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47afe3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47afe6: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47afea: jae 0x47afef */
  if (!cf) goto L_47afef;
L_47afec: /* 47afec: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47afef: /* 47afef: cmp byte ptr [eax + esi], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47aff3: je 0x47b03a */
  if (zf) goto L_47b03a;
L_47aff5: /* 47aff5: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47aff9: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47affc: jae 0x47b001 */
  if (!cf) goto L_47b001;
L_47affe: /* 47affe: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47b001: /* 47b001: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b003: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
/* 47b005: jmp 0x47b03a */
  goto L_47b03a;
L_47b007: /* 47b007: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b00b: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47b00e: jae 0x47b013 */
  if (!cf) goto L_47b013;
L_47b010: /* 47b010: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47b013: /* 47b013: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b017: je 0x47b053 */
  if (zf) goto L_47b053;
L_47b019: /* 47b019: cmp word ptr [ebp - 0x24], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b01e: je 0x47b053 */
  if (zf) goto L_47b053;
L_47b020: /* 47b020: mov ecx, edi */
  ecx = edi;
/* 47b022: call 0x472198 */
  esp -= 4; W32(esp, 0x47b027u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b027: cmp ax, word ptr [ebp - 0x24] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b02b: jne 0x47b053 */
  if (!zf) goto L_47b053;
L_47b02d: /* 47b02d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47b02f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b031: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47b034: call 0x466156 */
  esp -= 4; W32(esp, 0x47b039u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47b039: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_47b03a: /* 47b03a: mov ecx, edi */
  ecx = edi;
/* 47b03c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b041u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47b041: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b044: mov ecx, edi */
  ecx = edi;
/* 47b046: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b04bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b04b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b04d: je 0x47af9a */
  if (zf) goto L_47af9a;
L_47b053: /* 47b053: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b055: je 0x47b070 */
  if (zf) goto L_47b070;
L_47b057: /* 47b057: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b05b: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47b05e: jae 0x47b063 */
  if (!cf) goto L_47b063;
L_47b060: /* 47b060: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
L_47b063: /* 47b063: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47b067: jle 0x47b06c */
  if ((zf || sf != of)) goto L_47b06c;
L_47b069: /* 47b069: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47b06a: jmp 0x47b070 */
  goto L_47b070;
L_47b06c: /* 47b06c: and byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_47b070: /* 47b070: cmp dword ptr [ebp - 0x44], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b074: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 47b077: jae 0x47b07c */
  if (!cf) goto L_47b07c;
L_47b079: /* 47b079: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
L_47b07c: /* 47b07c: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b080: je 0x47b0d2 */
  if (zf) goto L_47b0d2;
L_47b082: /* 47b082: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 47b084: jbe 0x47b0c1 */
  if ((cf | zf)) goto L_47b0c1;
L_47b086: /* 47b086: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 47b088: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b08a: je 0x47b0c1 */
  if (zf) goto L_47b0c1;
L_47b08c: /* 47b08c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 47b08d: je 0x47b0a0 */
  if (zf) goto L_47b0a0;
L_47b08f: /* 47b08f: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b093: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47b096: jae 0x47b09b */
  if (!cf) goto L_47b09b;
L_47b098: /* 47b098: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47b09b: /* 47b09b: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b09e: jne 0x47b0d2 */
  if (!zf) goto L_47b0d2;
L_47b0a0: /* 47b0a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b0a2: jne 0x47b0b5 */
  if (!zf) goto L_47b0b5;
L_47b0a4: /* 47b0a4: cmp dword ptr [ebp - 0x28], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b0a8: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 47b0ab: jae 0x47b0b0 */
  if (!cf) goto L_47b0b0;
L_47b0ad: /* 47b0ad: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_47b0b0: /* 47b0b0: cmp al, byte ptr [ecx + esi] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + esi)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47b0b3: jl 0x47b0d2 */
  if ((sf != of)) goto L_47b0d2;
L_47b0b5: /* 47b0b5: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 47b0b8: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47b0bb: jle 0x47b082 */
  if ((zf || sf != of)) goto L_47b082;
L_47b0bd: /* 47b0bd: mov edx, eax */
  edx = eax;
/* 47b0bf: jmp 0x47b082 */
  goto L_47b082;
L_47b0c1: /* 47b0c1: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b0c5: jne 0x47b0d8 */
  if (!zf) goto L_47b0d8;
L_47b0c7: /* 47b0c7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47b0ca: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47b0cd: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* 47b0d0: jmp 0x47b0d8 */
  goto L_47b0d8;
L_47b0d2: /* 47b0d2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47b0d5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_47b0d8: /* 47b0d8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47b0db: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 47b0de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b0e0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 47b0e3: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47b0e8u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47b0e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b0ea: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 47b0ed: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47b0f2u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47b0f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47b0f5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47b0f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47b0ff: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47b102: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47b105: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47b106: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47b107: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47b108: call 0x46190c */
  esp -= 4; W32(esp, 0x47b10du); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47b10d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47b10e: ret  */
  esp += 4; SPILL(); return;
}
