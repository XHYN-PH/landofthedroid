#include "recomp.h"
#include "rec_mod.h"

void f_7002a0(void) {
  LOAD_REGS();
L_7002a0: /* 7002a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7002a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7002a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7002a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7002c0(void) {
  LOAD_REGS();
L_7002c0: /* 7002c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7002c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7002c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7002c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7002e0(void) {
  LOAD_REGS();
L_7002e0: /* 7002e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7002e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7002e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7002e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700300(void) {
  LOAD_REGS();
L_700300: /* 700300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700304: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700306: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700309: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70030b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700320(void) {
  LOAD_REGS();
L_700320: /* 700320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700324: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700326: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700329: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70032b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700340(void) {
  LOAD_REGS();
L_700340: /* 700340: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700342: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700346: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700349: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700360(void) {
  LOAD_REGS();
L_700360: /* 700360: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700362: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700366: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700369: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700380(void) {
  LOAD_REGS();
L_700380: /* 700380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700384: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700386: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700389: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70038b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7003a0(void) {
  LOAD_REGS();
L_7003a0: /* 7003a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7003a4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7003a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7003a7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7003adu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7003ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7003c0(void) {
  LOAD_REGS();
L_7003c0: /* 7003c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7003c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7003c6: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 7003c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7003cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7003e0(void) {
  LOAD_REGS();
L_7003e0: /* 7003e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7003e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7003e6: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 7003e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7003eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700400(void) {
  LOAD_REGS();
L_700400: /* 700400: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700402: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700406: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700409: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700420(void) {
  LOAD_REGS();
L_700420: /* 700420: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700422: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700426: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700429: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700440(void) {
  LOAD_REGS();
L_700440: /* 700440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700442: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700446: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700449: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700460(void) {
  LOAD_REGS();
L_700460: /* 700460: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700462: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700466: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700469: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700480(void) {
  LOAD_REGS();
L_700480: /* 700480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700485: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 700487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 700488: mov esi, ecx */
  esi = ecx;
/* 70048a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x700490u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 700490: mov eax, esi */
  eax = esi;
/* 700492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 700493: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7004b0(void) {
  LOAD_REGS();
L_7004b0: /* 7004b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7004b4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7004b6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7004b9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7004bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7004d0(void) {
  LOAD_REGS();
L_7004d0: /* 7004d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7004d4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7004d6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7004d9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7004dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7004f0(void) {
  LOAD_REGS();
L_7004f0: /* 7004f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7004f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7004f6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 7004f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700510(void) {
  LOAD_REGS();
L_700510: /* 700510: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700512: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700516: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700519: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700530(void) {
  LOAD_REGS();
L_700530: /* 700530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700534: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700536: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700539: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70053b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700550(void) {
  LOAD_REGS();
L_700550: /* 700550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700554: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700556: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700559: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70055b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700570(void) {
  LOAD_REGS();
L_700570: /* 700570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700574: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700576: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700579: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 70057c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700590(void) {
  LOAD_REGS();
L_700590: /* 700590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700594: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700596: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700599: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 70059c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7005b0(void) {
  LOAD_REGS();
L_7005b0: /* 7005b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7005b4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7005b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7005b7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7005bdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7005bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7005d0(void) {
  LOAD_REGS();
L_7005d0: /* 7005d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7005d4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7005d6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7005d9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7005dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7005f0(void) {
  LOAD_REGS();
L_7005f0: /* 7005f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7005f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7005f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7005f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7005f8: mov esi, ecx */
  esi = ecx;
/* 7005fa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x700600u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 700600: mov eax, esi */
  eax = esi;
/* 700602: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 700603: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700620(void) {
  LOAD_REGS();
L_700620: /* 700620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700624: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700626: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700629: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70062c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700640(void) {
  LOAD_REGS();
L_700640: /* 700640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700644: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700646: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700649: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70064c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700660(void) {
  LOAD_REGS();
L_700660: /* 700660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700664: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700666: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700669: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70066b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700680(void) {
  LOAD_REGS();
L_700680: /* 700680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700684: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700686: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700689: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70068c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7006a0(void) {
  LOAD_REGS();
L_7006a0: /* 7006a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7006a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7006a5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7006a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7006a8: mov esi, ecx */
  esi = ecx;
/* 7006aa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7006b0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7006b0: mov eax, esi */
  eax = esi;
/* 7006b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7006b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7006d0(void) {
  LOAD_REGS();
L_7006d0: /* 7006d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7006d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7006d6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 7006d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7006f0(void) {
  LOAD_REGS();
L_7006f0: /* 7006f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7006f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7006f6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 7006f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700710(void) {
  LOAD_REGS();
L_700710: /* 700710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700714: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700716: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700719: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70071c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700730(void) {
  LOAD_REGS();
L_700730: /* 700730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700734: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700736: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700739: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70073c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700750(void) {
  LOAD_REGS();
L_700750: /* 700750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700754: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700756: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700759: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70075c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70075e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700780(void) {
  LOAD_REGS();
L_700780: /* 700780: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700784: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700786: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700789: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70078c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70078e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7007b0(void) {
  LOAD_REGS();
L_7007b0: /* 7007b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7007b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7007b6: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 7007b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7007bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7007d0(void) {
  LOAD_REGS();
L_7007d0: /* 7007d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7007d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7007d6: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 7007d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7007db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7007f0(void) {
  LOAD_REGS();
L_7007f0: /* 7007f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7007f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7007f6: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7007f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7007fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700810(void) {
  LOAD_REGS();
L_700810: /* 700810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700814: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700816: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 700819: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70081b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700830(void) {
  LOAD_REGS();
L_700830: /* 700830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700834: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700836: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 700839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70083b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700850(void) {
  LOAD_REGS();
L_700850: /* 700850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700854: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700856: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 700859: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70085b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700870(void) {
  LOAD_REGS();
L_700870: /* 700870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700874: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700876: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700879: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70087b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700890(void) {
  LOAD_REGS();
L_700890: /* 700890: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700894: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700896: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700899: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70089b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7008b0(void) {
  LOAD_REGS();
L_7008b0: /* 7008b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7008b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7008b6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7008b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7008d0(void) {
  LOAD_REGS();
L_7008d0: /* 7008d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7008d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7008d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7008d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7008f0(void) {
  LOAD_REGS();
L_7008f0: /* 7008f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7008f4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7008f6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7008f9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7008fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700910(void) {
  LOAD_REGS();
L_700910: /* 700910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700914: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700916: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700919: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70091c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700930(void) {
  LOAD_REGS();
L_700930: /* 700930: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700935: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 700937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 700938: mov esi, ecx */
  esi = ecx;
/* 70093a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x700940u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 700940: mov eax, esi */
  eax = esi;
/* 700942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 700943: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700960(void) {
  LOAD_REGS();
L_700960: /* 700960: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700962: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700966: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700969: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700980(void) {
  LOAD_REGS();
L_700980: /* 700980: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700982: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700986: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700989: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7009a0(void) {
  LOAD_REGS();
L_7009a0: /* 7009a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7009a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7009a6: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7009a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7009ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7009c0(void) {
  LOAD_REGS();
L_7009c0: /* 7009c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7009c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7009c6: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7009c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7009cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7009e0(void) {
  LOAD_REGS();
L_7009e0: /* 7009e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7009e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7009e6: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 7009ec: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7009ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700a10(void) {
  LOAD_REGS();
L_700a10: /* 700a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700a14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700a16: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 700a1c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700a1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700a40(void) {
  LOAD_REGS();
L_700a40: /* 700a40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700a44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700a46: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700a49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700a4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700a60(void) {
  LOAD_REGS();
L_700a60: /* 700a60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700a64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700a66: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700a69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700a6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700a80(void) {
  LOAD_REGS();
L_700a80: /* 700a80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700a82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700a86: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700a89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700aa0(void) {
  LOAD_REGS();
L_700aa0: /* 700aa0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700aa2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700aa6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700aa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ac0(void) {
  LOAD_REGS();
L_700ac0: /* 700ac0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ac4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700ac6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700ac9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700acb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ae0(void) {
  LOAD_REGS();
L_700ae0: /* 700ae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ae4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700ae6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700ae9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700aeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700b00(void) {
  LOAD_REGS();
L_700b00: /* 700b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700b04: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700b06: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700b09: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700b0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700b20(void) {
  LOAD_REGS();
L_700b20: /* 700b20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700b24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700b26: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700b29: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700b2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700b40(void) {
  LOAD_REGS();
L_700b40: /* 700b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700b44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700b46: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 700b49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700b4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700b60(void) {
  LOAD_REGS();
L_700b60: /* 700b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700b64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700b66: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 700b69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700b6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700b80(void) {
  LOAD_REGS();
L_700b80: /* 700b80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700b82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700b86: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700b89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ba0(void) {
  LOAD_REGS();
L_700ba0: /* 700ba0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700ba2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700ba6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700ba9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700bc0(void) {
  LOAD_REGS();
L_700bc0: /* 700bc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700bc4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700bc6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700bc9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700bcc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700be0(void) {
  LOAD_REGS();
L_700be0: /* 700be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700be4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700be6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700be9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700bec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700c00(void) {
  LOAD_REGS();
L_700c00: /* 700c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700c04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700c06: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 700c09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700c0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700c20(void) {
  LOAD_REGS();
L_700c20: /* 700c20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700c24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700c26: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 700c29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700c2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700c40(void) {
  LOAD_REGS();
L_700c40: /* 700c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700c44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700c46: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700c49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700c4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700c60(void) {
  LOAD_REGS();
L_700c60: /* 700c60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700c64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700c66: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700c69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700c6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700c80(void) {
  LOAD_REGS();
L_700c80: /* 700c80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700c84: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 700c86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 700c87: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x700c8du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 700c8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ca0(void) {
  LOAD_REGS();
L_700ca0: /* 700ca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ca4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700ca6: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 700ca9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700cab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700cc0(void) {
  LOAD_REGS();
L_700cc0: /* 700cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700cc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700cc6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 700cc9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700ccb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ce0(void) {
  LOAD_REGS();
L_700ce0: /* 700ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ce4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700ce6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 700ce9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700cec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700d00(void) {
  LOAD_REGS();
L_700d00: /* 700d00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700d04: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700d06: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 700d09: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700d0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700d20(void) {
  LOAD_REGS();
L_700d20: /* 700d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700d24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700d26: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700d29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700d2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700d40(void) {
  LOAD_REGS();
L_700d40: /* 700d40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700d44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700d46: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 700d49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700d4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700d60(void) {
  LOAD_REGS();
L_700d60: /* 700d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700d64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700d66: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 700d69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700d6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700d80(void) {
  LOAD_REGS();
L_700d80: /* 700d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700d84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700d86: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 700d89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700d8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700da0(void) {
  LOAD_REGS();
L_700da0: /* 700da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700da4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700da6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700da9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700dac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700dc0(void) {
  LOAD_REGS();
L_700dc0: /* 700dc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700dc4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700dc6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700dc9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700dcc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700de0(void) {
  LOAD_REGS();
L_700de0: /* 700de0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700de2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700de6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700de9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700e00(void) {
  LOAD_REGS();
L_700e00: /* 700e00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700e02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700e06: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700e09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700e20(void) {
  LOAD_REGS();
L_700e20: /* 700e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700e24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700e26: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700e29: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 700e2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700e40(void) {
  LOAD_REGS();
L_700e40: /* 700e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700e44: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700e46: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700e49: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 700e4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700e60(void) {
  LOAD_REGS();
L_700e60: /* 700e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700e64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700e66: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700e69: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700e6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700e80(void) {
  LOAD_REGS();
L_700e80: /* 700e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700e84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700e86: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700e89: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700e8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ea0(void) {
  LOAD_REGS();
L_700ea0: /* 700ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ea4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700ea6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700ea9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700eac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ec0(void) {
  LOAD_REGS();
L_700ec0: /* 700ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ec4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700ec6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700ec9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 700ecc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700ee0(void) {
  LOAD_REGS();
L_700ee0: /* 700ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700ee4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700ee6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 700ee9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700eeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700f00(void) {
  LOAD_REGS();
L_700f00: /* 700f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700f04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700f06: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 700f09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700f0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700f20(void) {
  LOAD_REGS();
L_700f20: /* 700f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700f24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700f26: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 700f29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700f2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700f40(void) {
  LOAD_REGS();
L_700f40: /* 700f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700f44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 700f46: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 700f49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 700f4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700f60(void) {
  LOAD_REGS();
L_700f60: /* 700f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700f62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700f66: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700f69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700f80(void) {
  LOAD_REGS();
L_700f80: /* 700f80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700f82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700f86: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700f89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700fa0(void) {
  LOAD_REGS();
L_700fa0: /* 700fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700fa4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700fa6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700fa9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 700fac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700fc0(void) {
  LOAD_REGS();
L_700fc0: /* 700fc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700fc4: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 700fc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 700fc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x700fcdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 700fcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700fe0(void) {
  LOAD_REGS();
L_700fe0: /* 700fe0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700fe2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700fe6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 700fe9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701000(void) {
  LOAD_REGS();
L_701000: /* 701000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701004: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 701006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 701007: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x70100du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 70100d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701020(void) {
  LOAD_REGS();
L_701020: /* 701020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701024: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 701026: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 701029: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70102b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701040(void) {
  LOAD_REGS();
L_701040: /* 701040: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701044: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 701046: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 701049: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70104b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701060(void) {
  LOAD_REGS();
L_701060: /* 701060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701064: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 701066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 701067: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x70106du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 70106d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701080(void) {
  LOAD_REGS();
L_701080: /* 701080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701084: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 701086: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 701089: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70108b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7010a0(void) {
  LOAD_REGS();
L_7010a0: /* 7010a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7010a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7010a6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7010a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7010ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7010c0(void) {
  LOAD_REGS();
L_7010c0: /* 7010c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7010c4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 7010c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7010c7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7010cdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7010cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7010e0(void) {
  LOAD_REGS();
L_7010e0: /* 7010e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7010e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7010e6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 7010e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701100(void) {
  LOAD_REGS();
L_701100: /* 701100: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 701102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 701106: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 701109: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701120(void) {
  LOAD_REGS();
L_701120: /* 701120: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701124: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 701126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 701127: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x70112du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 70112d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701140(void) {
  LOAD_REGS();
L_701140: /* 701140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701144: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701146: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 701149: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70114c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701160(void) {
  LOAD_REGS();
L_701160: /* 701160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701164: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701166: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 701169: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70116c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701180(void) {
  LOAD_REGS();
L_701180: /* 701180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701184: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701186: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 701189: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70118c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7011a0(void) {
  LOAD_REGS();
L_7011a0: /* 7011a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7011a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7011a6: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 7011ac: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7011ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7011d0(void) {
  LOAD_REGS();
L_7011d0: /* 7011d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7011d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7011d6: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 7011dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7011de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701200(void) {
  LOAD_REGS();
L_701200: /* 701200: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 701202: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 701206: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 701209: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701220(void) {
  LOAD_REGS();
L_701220: /* 701220: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 701222: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 701226: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 701229: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701240(void) {
  LOAD_REGS();
L_701240: /* 701240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701244: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701246: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 701249: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70124c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701260(void) {
  LOAD_REGS();
L_701260: /* 701260: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701264: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701266: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 701269: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70126c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701280(void) {
  LOAD_REGS();
L_701280: /* 701280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701284: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 701286: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 701289: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70128c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7012a0(void) {
  LOAD_REGS();
L_7012a0: /* 7012a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7012a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7012a6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7012a9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7012ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7012c0(void) {
  LOAD_REGS();
L_7012c0: /* 7012c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7012c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7012c6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7012c9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7012cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7012e0(void) {
  LOAD_REGS();
L_7012e0: /* 7012e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7012e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7012e3: mov esi, ecx */
  esi = ecx;
/* 7012e5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7012ebu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7012eb: mov eax, esi */
  eax = esi;
/* 7012ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7012ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701310(void) {
  LOAD_REGS();
L_701310: /* 701310: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 701312: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 701316: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 701319: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701330(void) {
  LOAD_REGS();
L_701330: /* 701330: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 701332: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 701336: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 701339: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701350(void) {
  LOAD_REGS();
L_701350: /* 701350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701354: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 701356: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 701359: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70135b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701370(void) {
  LOAD_REGS();
L_701370: /* 701370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 701374: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 701376: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 701379: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70137b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_701390(void) {
  LOAD_REGS();
L_701390: /* 701390: mov eax, 1 */
  eax = 0x1u;
/* 701395: ret  */
  esp += 4; SPILL(); return;
}

void f_7013b0(void) {
  LOAD_REGS();
L_7013b0: /* 7013b0: mov eax, 1 */
  eax = 0x1u;
/* 7013b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7013d0(void) {
  LOAD_REGS();
L_7013d0: /* 7013d0: mov eax, 1 */
  eax = 0x1u;
/* 7013d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7013f0(void) {
  LOAD_REGS();
L_7013f0: /* 7013f0: mov eax, 1 */
  eax = 0x1u;
/* 7013f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701410(void) {
  LOAD_REGS();
L_701410: /* 701410: mov eax, 1 */
  eax = 0x1u;
/* 701415: ret  */
  esp += 4; SPILL(); return;
}

void f_701430(void) {
  LOAD_REGS();
L_701430: /* 701430: mov eax, 1 */
  eax = 0x1u;
/* 701435: ret  */
  esp += 4; SPILL(); return;
}

void f_701450(void) {
  LOAD_REGS();
L_701450: /* 701450: mov eax, 1 */
  eax = 0x1u;
/* 701455: ret  */
  esp += 4; SPILL(); return;
}

void f_701470(void) {
  LOAD_REGS();
L_701470: /* 701470: mov eax, 1 */
  eax = 0x1u;
/* 701475: ret  */
  esp += 4; SPILL(); return;
}

void f_701490(void) {
  LOAD_REGS();
L_701490: /* 701490: mov eax, 1 */
  eax = 0x1u;
/* 701495: ret  */
  esp += 4; SPILL(); return;
}

void f_7014b0(void) {
  LOAD_REGS();
L_7014b0: /* 7014b0: mov eax, 1 */
  eax = 0x1u;
/* 7014b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7014d0(void) {
  LOAD_REGS();
L_7014d0: /* 7014d0: mov eax, 1 */
  eax = 0x1u;
/* 7014d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7014f0(void) {
  LOAD_REGS();
L_7014f0: /* 7014f0: mov eax, 1 */
  eax = 0x1u;
/* 7014f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701510(void) {
  LOAD_REGS();
L_701510: /* 701510: mov eax, 1 */
  eax = 0x1u;
/* 701515: ret  */
  esp += 4; SPILL(); return;
}

void f_701530(void) {
  LOAD_REGS();
L_701530: /* 701530: mov eax, 1 */
  eax = 0x1u;
/* 701535: ret  */
  esp += 4; SPILL(); return;
}

void f_701550(void) {
  LOAD_REGS();
L_701550: /* 701550: mov eax, 1 */
  eax = 0x1u;
/* 701555: ret  */
  esp += 4; SPILL(); return;
}

void f_701570(void) {
  LOAD_REGS();
L_701570: /* 701570: mov eax, 1 */
  eax = 0x1u;
/* 701575: ret  */
  esp += 4; SPILL(); return;
}

void f_701590(void) {
  LOAD_REGS();
L_701590: /* 701590: mov eax, 1 */
  eax = 0x1u;
/* 701595: ret  */
  esp += 4; SPILL(); return;
}

void f_7015b0(void) {
  LOAD_REGS();
L_7015b0: /* 7015b0: mov eax, 1 */
  eax = 0x1u;
/* 7015b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7015d0(void) {
  LOAD_REGS();
L_7015d0: /* 7015d0: mov eax, 1 */
  eax = 0x1u;
/* 7015d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7015f0(void) {
  LOAD_REGS();
L_7015f0: /* 7015f0: mov eax, 1 */
  eax = 0x1u;
/* 7015f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701610(void) {
  LOAD_REGS();
L_701610: /* 701610: mov eax, 1 */
  eax = 0x1u;
/* 701615: ret  */
  esp += 4; SPILL(); return;
}

void f_701630(void) {
  LOAD_REGS();
L_701630: /* 701630: mov eax, 1 */
  eax = 0x1u;
/* 701635: ret  */
  esp += 4; SPILL(); return;
}

void f_701650(void) {
  LOAD_REGS();
L_701650: /* 701650: mov eax, 1 */
  eax = 0x1u;
/* 701655: ret  */
  esp += 4; SPILL(); return;
}

void f_701670(void) {
  LOAD_REGS();
L_701670: /* 701670: mov eax, 1 */
  eax = 0x1u;
/* 701675: ret  */
  esp += 4; SPILL(); return;
}

void f_701690(void) {
  LOAD_REGS();
L_701690: /* 701690: mov eax, 1 */
  eax = 0x1u;
/* 701695: ret  */
  esp += 4; SPILL(); return;
}

void f_7016b0(void) {
  LOAD_REGS();
L_7016b0: /* 7016b0: mov eax, 1 */
  eax = 0x1u;
/* 7016b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7016d0(void) {
  LOAD_REGS();
L_7016d0: /* 7016d0: mov eax, 1 */
  eax = 0x1u;
/* 7016d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7016f0(void) {
  LOAD_REGS();
L_7016f0: /* 7016f0: mov eax, 1 */
  eax = 0x1u;
/* 7016f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701710(void) {
  LOAD_REGS();
L_701710: /* 701710: mov eax, 1 */
  eax = 0x1u;
/* 701715: ret  */
  esp += 4; SPILL(); return;
}

void f_701730(void) {
  LOAD_REGS();
L_701730: /* 701730: mov eax, 1 */
  eax = 0x1u;
/* 701735: ret  */
  esp += 4; SPILL(); return;
}

void f_701750(void) {
  LOAD_REGS();
L_701750: /* 701750: mov eax, 1 */
  eax = 0x1u;
/* 701755: ret  */
  esp += 4; SPILL(); return;
}

void f_701770(void) {
  LOAD_REGS();
L_701770: /* 701770: mov eax, 1 */
  eax = 0x1u;
/* 701775: ret  */
  esp += 4; SPILL(); return;
}

void f_701790(void) {
  LOAD_REGS();
L_701790: /* 701790: mov eax, 1 */
  eax = 0x1u;
/* 701795: ret  */
  esp += 4; SPILL(); return;
}

void f_7017b0(void) {
  LOAD_REGS();
L_7017b0: /* 7017b0: mov eax, 1 */
  eax = 0x1u;
/* 7017b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7017d0(void) {
  LOAD_REGS();
L_7017d0: /* 7017d0: mov eax, 1 */
  eax = 0x1u;
/* 7017d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7017f0(void) {
  LOAD_REGS();
L_7017f0: /* 7017f0: mov eax, 1 */
  eax = 0x1u;
/* 7017f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701810(void) {
  LOAD_REGS();
L_701810: /* 701810: mov eax, 1 */
  eax = 0x1u;
/* 701815: ret  */
  esp += 4; SPILL(); return;
}

void f_701830(void) {
  LOAD_REGS();
L_701830: /* 701830: mov eax, 1 */
  eax = 0x1u;
/* 701835: ret  */
  esp += 4; SPILL(); return;
}

void f_701850(void) {
  LOAD_REGS();
L_701850: /* 701850: mov eax, 1 */
  eax = 0x1u;
/* 701855: ret  */
  esp += 4; SPILL(); return;
}

void f_701870(void) {
  LOAD_REGS();
L_701870: /* 701870: mov eax, 1 */
  eax = 0x1u;
/* 701875: ret  */
  esp += 4; SPILL(); return;
}

void f_701890(void) {
  LOAD_REGS();
L_701890: /* 701890: mov eax, 1 */
  eax = 0x1u;
/* 701895: ret  */
  esp += 4; SPILL(); return;
}

void f_7018b0(void) {
  LOAD_REGS();
L_7018b0: /* 7018b0: mov eax, 1 */
  eax = 0x1u;
/* 7018b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7018d0(void) {
  LOAD_REGS();
L_7018d0: /* 7018d0: mov eax, 1 */
  eax = 0x1u;
/* 7018d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7018f0(void) {
  LOAD_REGS();
L_7018f0: /* 7018f0: mov eax, 1 */
  eax = 0x1u;
/* 7018f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701910(void) {
  LOAD_REGS();
L_701910: /* 701910: mov eax, 1 */
  eax = 0x1u;
/* 701915: ret  */
  esp += 4; SPILL(); return;
}

void f_701930(void) {
  LOAD_REGS();
L_701930: /* 701930: mov eax, 1 */
  eax = 0x1u;
/* 701935: ret  */
  esp += 4; SPILL(); return;
}

void f_701950(void) {
  LOAD_REGS();
L_701950: /* 701950: mov eax, 1 */
  eax = 0x1u;
/* 701955: ret  */
  esp += 4; SPILL(); return;
}

void f_701970(void) {
  LOAD_REGS();
L_701970: /* 701970: mov eax, 1 */
  eax = 0x1u;
/* 701975: ret  */
  esp += 4; SPILL(); return;
}

void f_701990(void) {
  LOAD_REGS();
L_701990: /* 701990: mov eax, 1 */
  eax = 0x1u;
/* 701995: ret  */
  esp += 4; SPILL(); return;
}

void f_7019b0(void) {
  LOAD_REGS();
L_7019b0: /* 7019b0: mov eax, 1 */
  eax = 0x1u;
/* 7019b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7019d0(void) {
  LOAD_REGS();
L_7019d0: /* 7019d0: mov eax, 1 */
  eax = 0x1u;
/* 7019d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7019f0(void) {
  LOAD_REGS();
L_7019f0: /* 7019f0: mov eax, 1 */
  eax = 0x1u;
/* 7019f5: ret  */
  esp += 4; SPILL(); return;
}

void f_701a10(void) {
  LOAD_REGS();
L_701a10: /* 701a10: mov eax, 1 */
  eax = 0x1u;
/* 701a15: ret  */
  esp += 4; SPILL(); return;
}

void f_701a30(void) {
  LOAD_REGS();
L_701a30: /* 701a30: mov eax, 1 */
  eax = 0x1u;
/* 701a35: ret  */
  esp += 4; SPILL(); return;
}

void f_701a50(void) {
  LOAD_REGS();
L_701a50: /* 701a50: mov eax, 1 */
  eax = 0x1u;
/* 701a55: ret  */
  esp += 4; SPILL(); return;
}

void f_701a70(void) {
  LOAD_REGS();
L_701a70: /* 701a70: mov eax, 1 */
  eax = 0x1u;
/* 701a75: ret  */
  esp += 4; SPILL(); return;
}

void f_701a90(void) {
  LOAD_REGS();
L_701a90: /* 701a90: mov eax, 1 */
  eax = 0x1u;
/* 701a95: ret  */
  esp += 4; SPILL(); return;
}

void f_701ab0(void) {
  LOAD_REGS();
L_701ab0: /* 701ab0: mov eax, 1 */
  eax = 0x1u;
/* 701ab5: ret  */
  esp += 4; SPILL(); return;
}

void f_701ad0(void) {
  LOAD_REGS();
L_701ad0: /* 701ad0: mov eax, 1 */
  eax = 0x1u;
/* 701ad5: ret  */
  esp += 4; SPILL(); return;
}

void f_701af0(void) {
  LOAD_REGS();
L_701af0: /* 701af0: mov eax, 1 */
  eax = 0x1u;
/* 701af5: ret  */
  esp += 4; SPILL(); return;
}

void f_701b10(void) {
  LOAD_REGS();
L_701b10: /* 701b10: mov eax, 1 */
  eax = 0x1u;
/* 701b15: ret  */
  esp += 4; SPILL(); return;
}

void f_701b30(void) {
  LOAD_REGS();
L_701b30: /* 701b30: mov eax, 1 */
  eax = 0x1u;
/* 701b35: ret  */
  esp += 4; SPILL(); return;
}

void f_701b50(void) {
  LOAD_REGS();
L_701b50: /* 701b50: mov eax, 1 */
  eax = 0x1u;
/* 701b55: ret  */
  esp += 4; SPILL(); return;
}

void f_701b70(void) {
  LOAD_REGS();
L_701b70: /* 701b70: mov eax, 1 */
  eax = 0x1u;
/* 701b75: ret  */
  esp += 4; SPILL(); return;
}

void f_701b90(void) {
  LOAD_REGS();
L_701b90: /* 701b90: mov eax, 1 */
  eax = 0x1u;
/* 701b95: ret  */
  esp += 4; SPILL(); return;
}

void f_701bb0(void) {
  LOAD_REGS();
L_701bb0: /* 701bb0: mov eax, 1 */
  eax = 0x1u;
/* 701bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_701bd0(void) {
  LOAD_REGS();
L_701bd0: /* 701bd0: mov eax, 1 */
  eax = 0x1u;
/* 701bd5: ret  */
  esp += 4; SPILL(); return;
}

void f_701bf0(void) {
  LOAD_REGS();
L_701bf0: /* 701bf0: mov eax, 1 */
  eax = 0x1u;
/* 701bf5: ret  */
  esp += 4; SPILL(); return;
}

void f_701c10(void) {
  LOAD_REGS();
L_701c10: /* 701c10: mov eax, 1 */
  eax = 0x1u;
/* 701c15: ret  */
  esp += 4; SPILL(); return;
}

void f_701c30(void) {
  LOAD_REGS();
L_701c30: /* 701c30: mov eax, 1 */
  eax = 0x1u;
/* 701c35: ret  */
  esp += 4; SPILL(); return;
}

void f_701c50(void) {
  LOAD_REGS();
L_701c50: /* 701c50: mov eax, 1 */
  eax = 0x1u;
/* 701c55: ret  */
  esp += 4; SPILL(); return;
}

void f_701c70(void) {
  LOAD_REGS();
L_701c70: /* 701c70: mov eax, 1 */
  eax = 0x1u;
/* 701c75: ret  */
  esp += 4; SPILL(); return;
}

void f_701c90(void) {
  LOAD_REGS();
L_701c90: /* 701c90: mov eax, 1 */
  eax = 0x1u;
/* 701c95: ret  */
  esp += 4; SPILL(); return;
}

void f_701cb0(void) {
  LOAD_REGS();
L_701cb0: /* 701cb0: mov eax, 1 */
  eax = 0x1u;
/* 701cb5: ret  */
  esp += 4; SPILL(); return;
}

void f_701cd0(void) {
  LOAD_REGS();
L_701cd0: /* 701cd0: mov eax, 1 */
  eax = 0x1u;
/* 701cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_701cf0(void) {
  LOAD_REGS();
L_701cf0: /* 701cf0: mov eax, 1 */
  eax = 0x1u;
/* 701cf5: ret  */
  esp += 4; SPILL(); return;
}

void f_701d10(void) {
  LOAD_REGS();
L_701d10: /* 701d10: mov eax, 1 */
  eax = 0x1u;
/* 701d15: ret  */
  esp += 4; SPILL(); return;
}

void f_701d30(void) {
  LOAD_REGS();
L_701d30: /* 701d30: mov eax, 1 */
  eax = 0x1u;
/* 701d35: ret  */
  esp += 4; SPILL(); return;
}

void f_701d50(void) {
  LOAD_REGS();
L_701d50: /* 701d50: mov eax, 1 */
  eax = 0x1u;
/* 701d55: ret  */
  esp += 4; SPILL(); return;
}

void f_701d70(void) {
  LOAD_REGS();
L_701d70: /* 701d70: mov eax, 1 */
  eax = 0x1u;
/* 701d75: ret  */
  esp += 4; SPILL(); return;
}

void f_701d90(void) {
  LOAD_REGS();
L_701d90: /* 701d90: mov eax, 1 */
  eax = 0x1u;
/* 701d95: ret  */
  esp += 4; SPILL(); return;
}

void f_701db0(void) {
  LOAD_REGS();
L_701db0: /* 701db0: mov eax, 1 */
  eax = 0x1u;
/* 701db5: ret  */
  esp += 4; SPILL(); return;
}

void f_701dd0(void) {
  LOAD_REGS();
L_701dd0: /* 701dd0: mov eax, 1 */
  eax = 0x1u;
/* 701dd5: ret  */
  esp += 4; SPILL(); return;
}

void f_701df0(void) {
  LOAD_REGS();
L_701df0: /* 701df0: mov eax, 1 */
  eax = 0x1u;
/* 701df5: ret  */
  esp += 4; SPILL(); return;
}

void f_701e10(void) {
  LOAD_REGS();
L_701e10: /* 701e10: mov eax, 1 */
  eax = 0x1u;
/* 701e15: ret  */
  esp += 4; SPILL(); return;
}

void f_701e30(void) {
  LOAD_REGS();
L_701e30: /* 701e30: mov eax, 1 */
  eax = 0x1u;
/* 701e35: ret  */
  esp += 4; SPILL(); return;
}

void f_701e50(void) {
  LOAD_REGS();
L_701e50: /* 701e50: mov eax, 1 */
  eax = 0x1u;
/* 701e55: ret  */
  esp += 4; SPILL(); return;
}

void f_701e70(void) {
  LOAD_REGS();
L_701e70: /* 701e70: mov eax, 1 */
  eax = 0x1u;
/* 701e75: ret  */
  esp += 4; SPILL(); return;
}

void f_701e90(void) {
  LOAD_REGS();
L_701e90: /* 701e90: mov eax, 1 */
  eax = 0x1u;
/* 701e95: ret  */
  esp += 4; SPILL(); return;
}

void f_701eb0(void) {
  LOAD_REGS();
L_701eb0: /* 701eb0: mov eax, 1 */
  eax = 0x1u;
/* 701eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_701ed0(void) {
  LOAD_REGS();
L_701ed0: /* 701ed0: mov eax, 1 */
  eax = 0x1u;
/* 701ed5: ret  */
  esp += 4; SPILL(); return;
}

void f_701ef0(void) {
  LOAD_REGS();
L_701ef0: /* 701ef0: mov eax, 1 */
  eax = 0x1u;
/* 701ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_701f10(void) {
  LOAD_REGS();
L_701f10: /* 701f10: mov eax, 1 */
  eax = 0x1u;
/* 701f15: ret  */
  esp += 4; SPILL(); return;
}

void f_701f30(void) {
  LOAD_REGS();
L_701f30: /* 701f30: mov eax, 1 */
  eax = 0x1u;
/* 701f35: ret  */
  esp += 4; SPILL(); return;
}

void f_701f50(void) {
  LOAD_REGS();
L_701f50: /* 701f50: mov eax, 1 */
  eax = 0x1u;
/* 701f55: ret  */
  esp += 4; SPILL(); return;
}

void f_701f70(void) {
  LOAD_REGS();
L_701f70: /* 701f70: mov eax, 1 */
  eax = 0x1u;
/* 701f75: ret  */
  esp += 4; SPILL(); return;
}

void f_701f90(void) {
  LOAD_REGS();
L_701f90: /* 701f90: mov eax, 1 */
  eax = 0x1u;
/* 701f95: ret  */
  esp += 4; SPILL(); return;
}

void f_701fb0(void) {
  LOAD_REGS();
L_701fb0: /* 701fb0: mov eax, 1 */
  eax = 0x1u;
/* 701fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_701fd0(void) {
  LOAD_REGS();
L_701fd0: /* 701fd0: mov eax, 1 */
  eax = 0x1u;
/* 701fd5: ret  */
  esp += 4; SPILL(); return;
}

void f_701ff0(void) {
  LOAD_REGS();
L_701ff0: /* 701ff0: mov eax, 1 */
  eax = 0x1u;
/* 701ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_702010(void) {
  LOAD_REGS();
L_702010: /* 702010: mov eax, 1 */
  eax = 0x1u;
/* 702015: ret  */
  esp += 4; SPILL(); return;
}

void f_702030(void) {
  LOAD_REGS();
L_702030: /* 702030: mov eax, 1 */
  eax = 0x1u;
/* 702035: ret  */
  esp += 4; SPILL(); return;
}

void f_702050(void) {
  LOAD_REGS();
L_702050: /* 702050: mov eax, 1 */
  eax = 0x1u;
/* 702055: ret  */
  esp += 4; SPILL(); return;
}

void f_702070(void) {
  LOAD_REGS();
L_702070: /* 702070: mov eax, 1 */
  eax = 0x1u;
/* 702075: ret  */
  esp += 4; SPILL(); return;
}

void f_702090(void) {
  LOAD_REGS();
L_702090: /* 702090: mov eax, 1 */
  eax = 0x1u;
/* 702095: ret  */
  esp += 4; SPILL(); return;
}

void f_7020b0(void) {
  LOAD_REGS();
L_7020b0: /* 7020b0: mov eax, 1 */
  eax = 0x1u;
/* 7020b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7020d0(void) {
  LOAD_REGS();
L_7020d0: /* 7020d0: mov eax, 1 */
  eax = 0x1u;
/* 7020d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7020f0(void) {
  LOAD_REGS();
L_7020f0: /* 7020f0: mov eax, 1 */
  eax = 0x1u;
/* 7020f5: ret  */
  esp += 4; SPILL(); return;
}

void f_702110(void) {
  LOAD_REGS();
L_702110: /* 702110: mov eax, 1 */
  eax = 0x1u;
/* 702115: ret  */
  esp += 4; SPILL(); return;
}

void f_702130(void) {
  LOAD_REGS();
L_702130: /* 702130: mov eax, 1 */
  eax = 0x1u;
/* 702135: ret  */
  esp += 4; SPILL(); return;
}

void f_702150(void) {
  LOAD_REGS();
L_702150: /* 702150: mov eax, 1 */
  eax = 0x1u;
/* 702155: ret  */
  esp += 4; SPILL(); return;
}

void f_702170(void) {
  LOAD_REGS();
L_702170: /* 702170: mov eax, 1 */
  eax = 0x1u;
/* 702175: ret  */
  esp += 4; SPILL(); return;
}

void f_702190(void) {
  LOAD_REGS();
L_702190: /* 702190: mov eax, 1 */
  eax = 0x1u;
/* 702195: ret  */
  esp += 4; SPILL(); return;
}

void f_7021b0(void) {
  LOAD_REGS();
L_7021b0: /* 7021b0: mov eax, 1 */
  eax = 0x1u;
/* 7021b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7021d0(void) {
  LOAD_REGS();
L_7021d0: /* 7021d0: mov eax, 1 */
  eax = 0x1u;
/* 7021d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7021f0(void) {
  LOAD_REGS();
L_7021f0: /* 7021f0: mov eax, 1 */
  eax = 0x1u;
/* 7021f5: ret  */
  esp += 4; SPILL(); return;
}

void f_702210(void) {
  LOAD_REGS();
L_702210: /* 702210: mov eax, 1 */
  eax = 0x1u;
/* 702215: ret  */
  esp += 4; SPILL(); return;
}

void f_702230(void) {
  LOAD_REGS();
L_702230: /* 702230: mov eax, 1 */
  eax = 0x1u;
/* 702235: ret  */
  esp += 4; SPILL(); return;
}

void f_702250(void) {
  LOAD_REGS();
L_702250: /* 702250: mov eax, 1 */
  eax = 0x1u;
/* 702255: ret  */
  esp += 4; SPILL(); return;
}

void f_702270(void) {
  LOAD_REGS();
L_702270: /* 702270: mov eax, 1 */
  eax = 0x1u;
/* 702275: ret  */
  esp += 4; SPILL(); return;
}

void f_702290(void) {
  LOAD_REGS();
L_702290: /* 702290: mov eax, 1 */
  eax = 0x1u;
/* 702295: ret  */
  esp += 4; SPILL(); return;
}

void f_7022b0(void) {
  LOAD_REGS();
L_7022b0: /* 7022b0: mov eax, 1 */
  eax = 0x1u;
/* 7022b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7022d0(void) {
  LOAD_REGS();
L_7022d0: /* 7022d0: mov eax, 1 */
  eax = 0x1u;
/* 7022d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7022f0(void) {
  LOAD_REGS();
L_7022f0: /* 7022f0: mov eax, 1 */
  eax = 0x1u;
/* 7022f5: ret  */
  esp += 4; SPILL(); return;
}

void f_702310(void) {
  LOAD_REGS();
L_702310: /* 702310: mov eax, 1 */
  eax = 0x1u;
/* 702315: ret  */
  esp += 4; SPILL(); return;
}

void f_702330(void) {
  LOAD_REGS();
L_702330: /* 702330: mov eax, 1 */
  eax = 0x1u;
/* 702335: ret  */
  esp += 4; SPILL(); return;
}

void f_702350(void) {
  LOAD_REGS();
L_702350: /* 702350: mov eax, 1 */
  eax = 0x1u;
/* 702355: ret  */
  esp += 4; SPILL(); return;
}

void f_702370(void) {
  LOAD_REGS();
L_702370: /* 702370: mov eax, 1 */
  eax = 0x1u;
/* 702375: ret  */
  esp += 4; SPILL(); return;
}

void f_702390(void) {
  LOAD_REGS();
L_702390: /* 702390: mov eax, 1 */
  eax = 0x1u;
/* 702395: ret  */
  esp += 4; SPILL(); return;
}

void f_7023b0(void) {
  LOAD_REGS();
L_7023b0: /* 7023b0: mov eax, 1 */
  eax = 0x1u;
/* 7023b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7023d0(void) {
  LOAD_REGS();
L_7023d0: /* 7023d0: mov eax, 1 */
  eax = 0x1u;
/* 7023d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7023f0(void) {
  LOAD_REGS();
L_7023f0: /* 7023f0: mov eax, 1 */
  eax = 0x1u;
/* 7023f5: ret  */
  esp += 4; SPILL(); return;
}

void f_702410(void) {
  LOAD_REGS();
L_702410: /* 702410: mov eax, 1 */
  eax = 0x1u;
/* 702415: ret  */
  esp += 4; SPILL(); return;
}

void f_702430(void) {
  LOAD_REGS();
L_702430: /* 702430: mov eax, 1 */
  eax = 0x1u;
/* 702435: ret  */
  esp += 4; SPILL(); return;
}

void f_702450(void) {
  LOAD_REGS();
L_702450: /* 702450: mov eax, 1 */
  eax = 0x1u;
/* 702455: ret  */
  esp += 4; SPILL(); return;
}

void f_702470(void) {
  LOAD_REGS();
L_702470: /* 702470: mov eax, 1 */
  eax = 0x1u;
/* 702475: ret  */
  esp += 4; SPILL(); return;
}

void f_702490(void) {
  LOAD_REGS();
L_702490: /* 702490: mov eax, 1 */
  eax = 0x1u;
/* 702495: ret  */
  esp += 4; SPILL(); return;
}

void f_7024b0(void) {
  LOAD_REGS();
L_7024b0: /* 7024b0: mov eax, 1 */
  eax = 0x1u;
/* 7024b5: ret  */
  esp += 4; SPILL(); return;
}

void f_7024d0(void) {
  LOAD_REGS();
L_7024d0: /* 7024d0: mov eax, 1 */
  eax = 0x1u;
/* 7024d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7024f0(void) {
  LOAD_REGS();
L_7024f0: /* 7024f0: mov eax, 1 */
  eax = 0x1u;
/* 7024f5: ret  */
  esp += 4; SPILL(); return;
}

void f_702510(void) {
  LOAD_REGS();
L_702510: /* 702510: mov eax, 1 */
  eax = 0x1u;
/* 702515: ret  */
  esp += 4; SPILL(); return;
}

void f_702530(void) {
  LOAD_REGS();
L_702530: /* 702530: mov eax, 1 */
  eax = 0x1u;
/* 702535: ret  */
  esp += 4; SPILL(); return;
}

void f_702550(void) {
  LOAD_REGS();
L_702550: /* 702550: mov eax, 1 */
  eax = 0x1u;
/* 702555: ret  */
  esp += 4; SPILL(); return;
}

void f_702570(void) {
  LOAD_REGS();
L_702570: /* 702570: mov eax, 1 */
  eax = 0x1u;
/* 702575: ret  */
  esp += 4; SPILL(); return;
}

void f_702590(void) {
  LOAD_REGS();
L_702590: /* 702590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702591: mov esi, ecx */
  esi = ecx;
/* 702593: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x702599u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 702599: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 70259e: je 0x7025ad */
  if (zf) goto L_7025ad;
L_7025a0: /* 7025a0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7025a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7025a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7025a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7025aa: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7025adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7025ad: /* 7025ad: mov eax, esi */
  eax = esi;
/* 7025af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7025b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7025d0(void) {
  LOAD_REGS();
L_7025d0: /* 7025d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7025d1: mov esi, ecx */
  esi = ecx;
/* 7025d3: call 0x6ccc16 */
  esp -= 4; W32(esp, 0x7025d8u); SPILL(); f_6ccc16(); if (g_unwind) return; RELOAD();
/* 7025d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7025dd: je 0x7025ec */
  if (zf) goto L_7025ec;
L_7025df: /* 7025df: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7025e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7025e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7025e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7025e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7025ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7025ec: /* 7025ec: mov eax, esi */
  eax = esi;
/* 7025ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7025ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702610(void) {
  LOAD_REGS();
L_702610: /* 702610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702611: mov esi, ecx */
  esi = ecx;
/* 702613: call 0x6c627b */
  esp -= 4; W32(esp, 0x702618u); SPILL(); f_6c627b(); if (g_unwind) return; RELOAD();
/* 702618: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 70261d: je 0x70262c */
  if (zf) goto L_70262c;
L_70261f: /* 70261f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 702624: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 702626: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702629: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x70262cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_70262c: /* 70262c: mov eax, esi */
  eax = esi;
/* 70262e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70262f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702650(void) {
  LOAD_REGS();
L_702650: /* 702650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702651: mov esi, ecx */
  esi = ecx;
/* 702653: call 0x6c9fb1 */
  esp -= 4; W32(esp, 0x702658u); SPILL(); f_6c9fb1(); if (g_unwind) return; RELOAD();
/* 702658: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 70265d: je 0x70266c */
  if (zf) goto L_70266c;
L_70265f: /* 70265f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 702664: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 702666: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702669: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x70266cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_70266c: /* 70266c: mov eax, esi */
  eax = esi;
/* 70266e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70266f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702690(void) {
  LOAD_REGS();
L_702690: /* 702690: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 702692: push 0x9c145c */
  { uint32_t v = 0x9c145cu; esp -= 4; W32(esp, v); }
/* 702697: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70269d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70269e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7026a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7026a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7026a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7026a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7026ac: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7026ae: mov esi, ecx */
  esi = ecx;
/* 7026b0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7026b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7026b4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7026b7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7026bb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7026bd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7026c3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7026c3: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7026c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7026c7: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7026ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7026d2: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7026d8u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7026d8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7026dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7026dd: mov eax, esi */
  eax = esi;
/* 7026df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7026e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7026e7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7026ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702710(void) {
  LOAD_REGS();
L_702710: /* 702710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 702712: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 702716: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 702718: mov esi, ecx */
  esi = ecx;
/* 70271a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 70271d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70271e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 702721: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 702723: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x702729u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 702729: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 70272c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70272d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 702730: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x702736u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 702736: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 702737: mov eax, esi */
  eax = esi;
/* 702739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70273a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702750(void) {
  LOAD_REGS();
L_702750: /* 702750: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 702755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702756: mov esi, ecx */
  esi = ecx;
/* 702758: je 0x702767 */
  if (zf) goto L_702767;
L_70275a: /* 70275a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 70275f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 702761: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702764: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x702767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_702767: /* 702767: mov eax, esi */
  eax = esi;
/* 702769: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70276a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702780(void) {
  LOAD_REGS();
L_702780: /* 702780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 702782: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 702786: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 702788: mov esi, ecx */
  esi = ecx;
/* 70278a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 70278d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70278e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 702791: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 702793: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x702799u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 702799: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 70279c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70279d: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7027a0: mov eax, esi */
  eax = esi;
/* 7027a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7027a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7027c0(void) {
  LOAD_REGS();
L_7027c0: /* 7027c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7027c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7027c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7027c6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7027c8: mov esi, ecx */
  esi = ecx;
/* 7027ca: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7027cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7027ce: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7027d1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7027d3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7027d9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7027d9: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7027dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7027dd: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7027e0: mov eax, esi */
  eax = esi;
/* 7027e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7027e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702800(void) {
  LOAD_REGS();
L_702800: /* 702800: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 702802: push 0x9c1479 */
  { uint32_t v = 0x9c1479u; esp -= 4; W32(esp, v); }
/* 702807: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70280d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70280e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 702815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 702816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702817: mov esi, ecx */
  esi = ecx;
/* 702819: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 70281d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 702820: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 702828: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x70282eu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 70282e: mov ecx, esi */
  ecx = esi;
/* 702830: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 702838: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x70283eu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 70283e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 702842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 702843: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70284a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70284d: ret  */
  esp += 4; SPILL(); return;
}

void f_702870(void) {
  LOAD_REGS();
L_702870: /* 702870: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_702890(void) {
  LOAD_REGS();
L_702890: /* 702890: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 702893: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_7028b0(void) {
  LOAD_REGS();
L_7028b0: /* 7028b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7028b4: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 7028b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7028ba: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7028c0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7028c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7028e0(void) {
  LOAD_REGS();
L_7028e0: /* 7028e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7028e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7028e6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 7028e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702900(void) {
  LOAD_REGS();
L_702900: /* 702900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702904: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702906: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 702909: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70290c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702920(void) {
  LOAD_REGS();
L_702920: /* 702920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702925: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 702927: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70292du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70292d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702940(void) {
  LOAD_REGS();
L_702940: /* 702940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702945: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 702947: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70294du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70294d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702960(void) {
  LOAD_REGS();
L_702960: /* 702960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702965: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 702967: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70296du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70296d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702980(void) {
  LOAD_REGS();
L_702980: /* 702980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702985: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 702987: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70298du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70298d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7029a0(void) {
  LOAD_REGS();
L_7029a0: /* 7029a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7029a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7029a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7029a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7029adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7029ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7029c0(void) {
  LOAD_REGS();
L_7029c0: /* 7029c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7029c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7029c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7029c7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7029cdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7029cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7029e0(void) {
  LOAD_REGS();
L_7029e0: /* 7029e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7029e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7029e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7029e7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7029edu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7029ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702a00(void) {
  LOAD_REGS();
L_702a00: /* 702a00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702a05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702a07: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702a0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702a0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702a20(void) {
  LOAD_REGS();
L_702a20: /* 702a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702a25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702a27: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702a2du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702a2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702a40(void) {
  LOAD_REGS();
L_702a40: /* 702a40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702a44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702a45: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702a47: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702a4du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702a4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702a60(void) {
  LOAD_REGS();
L_702a60: /* 702a60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702a64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702a65: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 702a67: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702a6du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702a6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702a80(void) {
  LOAD_REGS();
L_702a80: /* 702a80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702a84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702a85: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702a87: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702a8du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702a8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702aa0(void) {
  LOAD_REGS();
L_702aa0: /* 702aa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702aa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702aa5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702aa7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702aadu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702aad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ac0(void) {
  LOAD_REGS();
L_702ac0: /* 702ac0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702ac5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702ac7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702acdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702acd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ae0(void) {
  LOAD_REGS();
L_702ae0: /* 702ae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ae4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702ae5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702ae7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702aedu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702aed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702b00(void) {
  LOAD_REGS();
L_702b00: /* 702b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702b04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702b05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702b07: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702b0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702b0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702b20(void) {
  LOAD_REGS();
L_702b20: /* 702b20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702b24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702b25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702b27: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702b2du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702b2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702b40(void) {
  LOAD_REGS();
L_702b40: /* 702b40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702b44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702b45: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702b47: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702b4du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702b4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702b60(void) {
  LOAD_REGS();
L_702b60: /* 702b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702b65: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702b67: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702b6du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702b6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702b80(void) {
  LOAD_REGS();
L_702b80: /* 702b80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702b85: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 702b87: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702b8du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702b8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ba0(void) {
  LOAD_REGS();
L_702ba0: /* 702ba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702ba5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 702ba7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702badu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702bad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702bc0(void) {
  LOAD_REGS();
L_702bc0: /* 702bc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702bc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702bc5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 702bc7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702bcdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702bcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702be0(void) {
  LOAD_REGS();
L_702be0: /* 702be0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702be4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702be5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 702be7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702bedu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702bed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702c00(void) {
  LOAD_REGS();
L_702c00: /* 702c00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702c05: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 702c07: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702c0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702c0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702c20(void) {
  LOAD_REGS();
L_702c20: /* 702c20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702c24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702c25: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 702c2a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702c30u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702c30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702c50(void) {
  LOAD_REGS();
L_702c50: /* 702c50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702c55: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 702c57: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702c5du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702c5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702c70(void) {
  LOAD_REGS();
L_702c70: /* 702c70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702c74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702c75: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 702c77: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702c7du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702c7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702c90(void) {
  LOAD_REGS();
L_702c90: /* 702c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702c94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702c95: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 702c97: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702c9du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702c9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702cb0(void) {
  LOAD_REGS();
L_702cb0: /* 702cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702cb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702cb5: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 702cb7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702cbdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702cbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702cd0(void) {
  LOAD_REGS();
L_702cd0: /* 702cd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702cd5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 702cd7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702cddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702cdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702cf0(void) {
  LOAD_REGS();
L_702cf0: /* 702cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702cf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702cf5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 702cf7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702cfdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702cfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702d10(void) {
  LOAD_REGS();
L_702d10: /* 702d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 702d11: mov esi, ecx */
  esi = ecx;
/* 702d13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 702d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 702d17: xor edi, edi */
  edi = 0;
/* 702d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 702d1b: jle 0x702d35 */
  if ((zf || sf != of)) goto L_702d35;
L_702d1d: /* 702d1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 702d1e: xor ebx, ebx */
  ebx = 0;
L_702d20: /* 702d20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 702d22: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 702d24: call 0x6c9fb1 */
  esp -= 4; W32(esp, 0x702d29u); SPILL(); f_6c9fb1(); if (g_unwind) return; RELOAD();
/* 702d29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 702d2c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 702d2d: add ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 702d30: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 702d32: jl 0x702d20 */
  if ((sf != of)) goto L_702d20;
L_702d34: /* 702d34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_702d35: /* 702d35: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 702d39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702d3a: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 702d3c: mov ecx, esi */
  ecx = esi;
/* 702d3e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702d44u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702d44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 702d45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 702d46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702d60(void) {
  LOAD_REGS();
L_702d60: /* 702d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702d65: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 702d67: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702d6du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702d6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702d80(void) {
  LOAD_REGS();
L_702d80: /* 702d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702d84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702d85: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702d87: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702d8du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702d8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702da0(void) {
  LOAD_REGS();
L_702da0: /* 702da0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702da4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702da6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 702da9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702dab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702dc0(void) {
  LOAD_REGS();
L_702dc0: /* 702dc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702dc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702dc6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 702dc9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702dcb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702de0(void) {
  LOAD_REGS();
L_702de0: /* 702de0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702de4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702de6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 702de9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702deb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702e00(void) {
  LOAD_REGS();
L_702e00: /* 702e00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702e04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702e06: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 702e09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702e0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702e20(void) {
  LOAD_REGS();
L_702e20: /* 702e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702e24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702e26: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 702e29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702e2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702e40(void) {
  LOAD_REGS();
L_702e40: /* 702e40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702e44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702e46: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 702e49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702e4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702e60(void) {
  LOAD_REGS();
L_702e60: /* 702e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702e64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702e66: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 702e69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702e6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702e80(void) {
  LOAD_REGS();
L_702e80: /* 702e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702e84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702e86: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 702e89: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 702e8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ea0(void) {
  LOAD_REGS();
L_702ea0: /* 702ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ea4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702ea6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 702ea9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 702eac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ec0(void) {
  LOAD_REGS();
L_702ec0: /* 702ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ec4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 702ec6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 702ec9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 702ecb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702ee0(void) {
  LOAD_REGS();
L_702ee0: /* 702ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702ee4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702ee6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 702ee9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 702eec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702f00(void) {
  LOAD_REGS();
L_702f00: /* 702f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702f04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 702f05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 702f07: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x702f0du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 702f0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702f20(void) {
  LOAD_REGS();
L_702f20: /* 702f20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702f24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702f26: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 702f29: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 702f2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702f40(void) {
  LOAD_REGS();
L_702f40: /* 702f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 702f44: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 702f46: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 702f49: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 702f4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_702f60(void) {
  LOAD_REGS();
L_702f60: /* 702f60: mov eax, 1 */
  eax = 0x1u;
/* 702f65: ret  */
  esp += 4; SPILL(); return;
}

void f_702f80(void) {
  LOAD_REGS();
L_702f80: /* 702f80: mov eax, 1 */
  eax = 0x1u;
/* 702f85: ret  */
  esp += 4; SPILL(); return;
}

void f_702fa0(void) {
  LOAD_REGS();
L_702fa0: /* 702fa0: mov eax, 1 */
  eax = 0x1u;
/* 702fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_702fc0(void) {
  LOAD_REGS();
L_702fc0: /* 702fc0: mov eax, 1 */
  eax = 0x1u;
/* 702fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_702fe0(void) {
  LOAD_REGS();
L_702fe0: /* 702fe0: mov eax, 1 */
  eax = 0x1u;
/* 702fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_703000(void) {
  LOAD_REGS();
L_703000: /* 703000: mov eax, 1 */
  eax = 0x1u;
/* 703005: ret  */
  esp += 4; SPILL(); return;
}

void f_703020(void) {
  LOAD_REGS();
L_703020: /* 703020: mov eax, 1 */
  eax = 0x1u;
/* 703025: ret  */
  esp += 4; SPILL(); return;
}

void f_703040(void) {
  LOAD_REGS();
L_703040: /* 703040: mov eax, 1 */
  eax = 0x1u;
/* 703045: ret  */
  esp += 4; SPILL(); return;
}

void f_703060(void) {
  LOAD_REGS();
L_703060: /* 703060: mov eax, 1 */
  eax = 0x1u;
/* 703065: ret  */
  esp += 4; SPILL(); return;
}

void f_703080(void) {
  LOAD_REGS();
L_703080: /* 703080: mov eax, 1 */
  eax = 0x1u;
/* 703085: ret  */
  esp += 4; SPILL(); return;
}

void f_7030a0(void) {
  LOAD_REGS();
L_7030a0: /* 7030a0: mov eax, 1 */
  eax = 0x1u;
/* 7030a5: ret  */
  esp += 4; SPILL(); return;
}

void f_7030c0(void) {
  LOAD_REGS();
L_7030c0: /* 7030c0: mov eax, 1 */
  eax = 0x1u;
/* 7030c5: ret  */
  esp += 4; SPILL(); return;
}

void f_7030e0(void) {
  LOAD_REGS();
L_7030e0: /* 7030e0: mov eax, 1 */
  eax = 0x1u;
/* 7030e5: ret  */
  esp += 4; SPILL(); return;
}

void f_703100(void) {
  LOAD_REGS();
L_703100: /* 703100: mov eax, 1 */
  eax = 0x1u;
/* 703105: ret  */
  esp += 4; SPILL(); return;
}

void f_703120(void) {
  LOAD_REGS();
L_703120: /* 703120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 703122: push 0x9c149c */
  { uint32_t v = 0x9c149cu; esp -= 4; W32(esp, v); }
/* 703127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70312d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70312e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 703135: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 703136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703137: mov esi, ecx */
  esi = ecx;
/* 703139: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 70313d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 703140: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 703148: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70314eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70314e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 703151: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 703159: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70315fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70315f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 703163: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703164: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70316b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70316e: ret  */
  esp += 4; SPILL(); return;
}

void f_703190(void) {
  LOAD_REGS();
L_703190: /* 703190: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 703193: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_7031b0(void) {
  LOAD_REGS();
L_7031b0: /* 7031b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7031b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7031b5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7031b7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7031bdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7031bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7031d0(void) {
  LOAD_REGS();
L_7031d0: /* 7031d0: jmp 0x6c6659 */
  SPILL(); f_6c6659(); return;
}

void f_7031f0(void) {
  LOAD_REGS();
L_7031f0: /* 7031f0: jmp 0x6cb537 */
  SPILL(); f_6cb537(); return;
}

void f_703210(void) {
  LOAD_REGS();
L_703210: /* 703210: ret  */
  esp += 4; SPILL(); return;
}

void f_703230(void) {
  LOAD_REGS();
L_703230: /* 703230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 703234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703235: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 703237: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70323du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70323d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_703250(void) {
  LOAD_REGS();
L_703250: /* 703250: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 703254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703255: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 70325b: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 70325e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70325f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 703262: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 703263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703264: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 703268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703269: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x70326bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70326b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70326e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70326f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x703271u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 703271: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 703274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703275: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x703277u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 703277: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70327a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70327b: ret  */
  esp += 4; SPILL(); return;
}

void f_703290(void) {
  LOAD_REGS();
L_703290: /* 703290: ret  */
  esp += 4; SPILL(); return;
}

void f_7032b0(void) {
  LOAD_REGS();
L_7032b0: /* 7032b0: jmp 0x6c1e74 */
  SPILL(); f_6c1e74(); return;
}

void f_7032d0(void) {
  LOAD_REGS();
L_7032d0: /* 7032d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7032d4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7032d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7032da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7032db: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7032deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7032de: ret  */
  esp += 4; SPILL(); return;
}

void f_7032f0(void) {
  LOAD_REGS();
L_7032f0: /* 7032f0: ret  */
  esp += 4; SPILL(); return;
}

void f_703310(void) {
  LOAD_REGS();
L_703310: /* 703310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 703314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703315: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 703317: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70331du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70331d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_703330(void) {
  LOAD_REGS();
L_703330: /* 703330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 703334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703335: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 703337: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70333du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70333d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_703350(void) {
  LOAD_REGS();
L_703350: /* 703350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 703354: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 703356: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 703359: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70335b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_703370(void) {
  LOAD_REGS();
L_703370: /* 703370: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 703374: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 703378: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70337a: jl 0x703386 */
  if ((sf != of)) goto L_703386;
L_70337c: /* 70337c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 703380: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 703382: jge 0x703386 */
  if ((sf == of)) goto L_703386;
L_703384: /* 703384: mov eax, ecx */
  eax = ecx;
L_703386: /* 703386: ret  */
  esp += 4; SPILL(); return;
}

void f_7033a0(void) {
  LOAD_REGS();
L_7033a0: /* 7033a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7033a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7033a5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7033a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7033a9: mov ecx, esi */
  ecx = esi;
/* 7033ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7033b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7033b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7033b3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7033b6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7033b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7033ba: ret  */
  esp += 4; SPILL(); return;
}

void f_7033d0(void) {
  LOAD_REGS();
L_7033d0: /* 7033d0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7033d4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7033da: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7033de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7033e0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7033e3: je 0x7033e7 */
  if (zf) goto L_7033e7;
L_7033e5: /* 7033e5: fchs  */
  ST0 = -ST0;
L_7033e7: /* 7033e7: ret  */
  esp += 4; SPILL(); return;
}

void f_703400(void) {
  LOAD_REGS();
L_703400: /* 703400: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 703404: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* 703408: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 70340a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 70340d: jp 0x703414 */
  if (pf) goto L_703414;
L_70340f: /* 70340f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 703413: ret  */
  esp += 4; SPILL(); return;
L_703414: /* 703414: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 703418: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 70341c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 70341e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 703421: jp 0x703428 */
  if (pf) goto L_703428;
L_703423: /* 703423: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 703427: ret  */
  esp += 4; SPILL(); return;
L_703428: /* 703428: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 70342c: ret  */
  esp += 4; SPILL(); return;
}

void f_703440(void) {
  LOAD_REGS();
L_703440: /* 703440: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 703444: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 703448: ret  */
  esp += 4; SPILL(); return;
}

void f_703460(void) {
  LOAD_REGS();
L_703460: /* 703460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703461: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 703465: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 703467: je 0x70347e */
  if (zf) goto L_70347e;
L_703469: /* 703469: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 70346e: mov ecx, esi */
  ecx = esi;
/* 703470: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x703476u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 703476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 703478: je 0x70347e */
  if (zf) goto L_70347e;
L_70347a: /* 70347a: mov eax, esi */
  eax = esi;
/* 70347c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70347d: ret  */
  esp += 4; SPILL(); return;
L_70347e: /* 70347e: xor eax, eax */
  eax = 0;
/* 703480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703481: ret  */
  esp += 4; SPILL(); return;
}

void f_7034a0(void) {
  LOAD_REGS();
L_7034a0: /* 7034a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7034a4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7034a8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7034aa: jge 0x7034ae */
  if ((sf == of)) goto L_7034ae;
L_7034ac: /* 7034ac: mov eax, ecx */
  eax = ecx;
L_7034ae: /* 7034ae: ret  */
  esp += 4; SPILL(); return;
}

void f_7034c0(void) {
  LOAD_REGS();
L_7034c0: /* 7034c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7034c4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7034c8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7034ca: jle 0x7034ce */
  if ((zf || sf != of)) goto L_7034ce;
L_7034cc: /* 7034cc: mov eax, ecx */
  eax = ecx;
L_7034ce: /* 7034ce: ret  */
  esp += 4; SPILL(); return;
}

void f_7034e0(void) {
  LOAD_REGS();
L_7034e0: /* 7034e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7034e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7034e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7034e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7034e8: je 0x703508 */
  if (zf) goto L_703508;
L_7034ea: /* 7034ea: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7034ef: mov ecx, esi */
  ecx = esi;
/* 7034f1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7034f7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7034f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7034f9: jne 0x703530 */
  if (!zf) goto L_703530;
L_7034fb: /* 7034fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7034fc: mov ecx, esi */
  ecx = esi;
/* 7034fe: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x703504u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 703504: mov edi, eax */
  edi = eax;
/* 703506: jmp 0x70350d */
  goto L_70350d;
L_703508: /* 703508: mov edi, 0xac3780 */
  edi = 0xac3780u;
L_70350d: /* 70350d: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 703512: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x703518u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 703518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703519: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 70351e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 703520: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 703521: push 0xac378c */
  { uint32_t v = 0xac378cu; esp -= 4; W32(esp, v); }
/* 703526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 703527: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x70352du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 70352d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_703530: /* 703530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 703531: mov eax, esi */
  eax = esi;
/* 703533: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703534: ret  */
  esp += 4; SPILL(); return;
}

void f_703560(void) {
  LOAD_REGS();
L_703560: /* 703560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703561: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703565: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 703567: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703569: mov ecx, esi */
  ecx = esi;
/* 70356b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703571u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 703572: mov ecx, esi */
  ecx = esi;
/* 703574: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x70357au); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 70357a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70357b: ret  */
  esp += 4; SPILL(); return;
}

void f_703590(void) {
  LOAD_REGS();
L_703590: /* 703590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703591: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703595: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703597: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703599: mov ecx, esi */
  ecx = esi;
/* 70359b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7035a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7035a1: mov ecx, eax */
  ecx = eax;
/* 7035a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7035a5: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7035a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7035a8: ret  */
  esp += 4; SPILL(); return;
}

void f_7035c0(void) {
  LOAD_REGS();
L_7035c0: /* 7035c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7035c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7035c5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7035c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7035c9: mov ecx, esi */
  ecx = esi;
/* 7035cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7035d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7035d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7035d3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7035d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7035d7: ret  */
  esp += 4; SPILL(); return;
}

void f_7035f0(void) {
  LOAD_REGS();
L_7035f0: /* 7035f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7035f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7035f5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7035f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7035f9: mov ecx, esi */
  ecx = esi;
/* 7035fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703601u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703601: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703603: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703606: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703607: ret  */
  esp += 4; SPILL(); return;
}

void f_703620(void) {
  LOAD_REGS();
L_703620: /* 703620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703621: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703625: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 703627: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703629: mov ecx, esi */
  ecx = esi;
/* 70362b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703631u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703631: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 703634: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703636: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703637: ret  */
  esp += 4; SPILL(); return;
}

void f_703650(void) {
  LOAD_REGS();
L_703650: /* 703650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703651: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703655: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 703657: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703659: mov ecx, esi */
  ecx = esi;
/* 70365b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703661u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703661: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703663: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 703666: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703669: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70366a: ret  */
  esp += 4; SPILL(); return;
}

void f_703680(void) {
  LOAD_REGS();
L_703680: /* 703680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703681: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703685: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703689: mov ecx, esi */
  ecx = esi;
/* 70368b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703691u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703691: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703693: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703696: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703697: ret  */
  esp += 4; SPILL(); return;
}

void f_7036b0(void) {
  LOAD_REGS();
L_7036b0: /* 7036b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7036b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7036b5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7036b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7036b9: mov ecx, esi */
  ecx = esi;
/* 7036bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7036c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7036c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7036c3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7036c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7036c7: ret  */
  esp += 4; SPILL(); return;
}

void f_7036e0(void) {
  LOAD_REGS();
L_7036e0: /* 7036e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7036e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7036e5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7036e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7036e9: mov ecx, esi */
  ecx = esi;
/* 7036eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7036f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7036f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7036f3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7036f6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7036f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7036fa: ret  */
  esp += 4; SPILL(); return;
}

void f_703710(void) {
  LOAD_REGS();
L_703710: /* 703710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703711: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703715: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 703717: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703719: mov ecx, esi */
  ecx = esi;
/* 70371b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703721u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703721: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 703724: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703726: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703727: ret  */
  esp += 4; SPILL(); return;
}

void f_703740(void) {
  LOAD_REGS();
L_703740: /* 703740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703741: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703745: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703747: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703749: mov ecx, esi */
  ecx = esi;
/* 70374b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703751u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703751: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703753: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703756: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703757: ret  */
  esp += 4; SPILL(); return;
}

void f_703770(void) {
  LOAD_REGS();
L_703770: /* 703770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703771: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703775: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 70377a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70377c: mov ecx, esi */
  ecx = esi;
/* 70377e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703784u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703784: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 70378a: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70378c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70378d: ret  */
  esp += 4; SPILL(); return;
}

void f_7037a0(void) {
  LOAD_REGS();
L_7037a0: /* 7037a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7037a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7037a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7037a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7037a9: mov ecx, esi */
  ecx = esi;
/* 7037ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7037b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7037b1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7037b4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7037b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7037b7: ret  */
  esp += 4; SPILL(); return;
}

void f_7037d0(void) {
  LOAD_REGS();
L_7037d0: /* 7037d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7037d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7037d5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7037d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7037d9: mov ecx, esi */
  ecx = esi;
/* 7037db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7037e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7037e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7037e3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7037e6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7037e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7037e9: ret  */
  esp += 4; SPILL(); return;
}

void f_703800(void) {
  LOAD_REGS();
L_703800: /* 703800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703801: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703805: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 703807: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703809: mov ecx, esi */
  ecx = esi;
/* 70380b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703811u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703811: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 703814: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703816: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703817: ret  */
  esp += 4; SPILL(); return;
}

void f_703830(void) {
  LOAD_REGS();
L_703830: /* 703830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703831: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703835: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703839: mov ecx, esi */
  ecx = esi;
/* 70383b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703841u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703841: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703843: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703846: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703847: ret  */
  esp += 4; SPILL(); return;
}

void f_703860(void) {
  LOAD_REGS();
L_703860: /* 703860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703861: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703865: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 703867: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703869: mov ecx, esi */
  ecx = esi;
/* 70386b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703871u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703871: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703873: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703877: ret  */
  esp += 4; SPILL(); return;
}

void f_703890(void) {
  LOAD_REGS();
L_703890: /* 703890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703891: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703895: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 703897: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703899: mov ecx, esi */
  ecx = esi;
/* 70389b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7038a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7038a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7038a3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7038a6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7038a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7038aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7038c0(void) {
  LOAD_REGS();
L_7038c0: /* 7038c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7038c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7038c5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7038c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7038c9: mov ecx, esi */
  ecx = esi;
/* 7038cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7038d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7038d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7038d3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7038d6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7038d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7038d9: ret  */
  esp += 4; SPILL(); return;
}

void f_7038f0(void) {
  LOAD_REGS();
L_7038f0: /* 7038f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7038f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7038f5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7038f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7038f9: mov ecx, esi */
  ecx = esi;
/* 7038fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703901u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703901: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703903: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 703906: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703908: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703909: ret  */
  esp += 4; SPILL(); return;
}

void f_703920(void) {
  LOAD_REGS();
L_703920: /* 703920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703921: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703925: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703927: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703929: mov ecx, esi */
  ecx = esi;
/* 70392b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703931u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703931: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703933: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703937: ret  */
  esp += 4; SPILL(); return;
}

void f_703950(void) {
  LOAD_REGS();
L_703950: /* 703950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703951: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703955: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 703957: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703959: mov ecx, esi */
  ecx = esi;
/* 70395b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703961u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703961: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 703964: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703966: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703967: ret  */
  esp += 4; SPILL(); return;
}

void f_703980(void) {
  LOAD_REGS();
L_703980: /* 703980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703981: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703985: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 703987: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703989: mov ecx, esi */
  ecx = esi;
/* 70398b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703991u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703991: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703993: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 703996: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70399a: ret  */
  esp += 4; SPILL(); return;
}

void f_7039b0(void) {
  LOAD_REGS();
L_7039b0: /* 7039b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7039b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7039b5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7039b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7039b9: mov ecx, esi */
  ecx = esi;
/* 7039bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7039c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7039c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7039c3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7039c6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7039c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7039ca: ret  */
  esp += 4; SPILL(); return;
}

void f_7039e0(void) {
  LOAD_REGS();
L_7039e0: /* 7039e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7039e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7039e5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7039e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7039e9: mov ecx, esi */
  ecx = esi;
/* 7039eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7039f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7039f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7039f3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7039f6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7039f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7039fa: ret  */
  esp += 4; SPILL(); return;
}

void f_703a10(void) {
  LOAD_REGS();
L_703a10: /* 703a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703a11: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703a15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703a17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703a19: mov ecx, esi */
  ecx = esi;
/* 703a1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703a21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703a21: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703a23: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703a26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703a27: ret  */
  esp += 4; SPILL(); return;
}

void f_703a40(void) {
  LOAD_REGS();
L_703a40: /* 703a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703a41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703a45: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 703a47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703a49: mov ecx, esi */
  ecx = esi;
/* 703a4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703a51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703a51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703a53: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 703a56: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703a59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703a5a: ret  */
  esp += 4; SPILL(); return;
}

void f_703a70(void) {
  LOAD_REGS();
L_703a70: /* 703a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703a71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703a75: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 703a77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703a79: mov ecx, esi */
  ecx = esi;
/* 703a7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703a81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703a81: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 703a84: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703a86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703a87: ret  */
  esp += 4; SPILL(); return;
}

void f_703aa0(void) {
  LOAD_REGS();
L_703aa0: /* 703aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703aa1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703aa5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703aa7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703aa9: mov ecx, esi */
  ecx = esi;
/* 703aab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ab1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ab1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703ab3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703ab6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703ab7: ret  */
  esp += 4; SPILL(); return;
}

void f_703ad0(void) {
  LOAD_REGS();
L_703ad0: /* 703ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703ad1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703ad5: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 703ad7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703ad9: mov ecx, esi */
  ecx = esi;
/* 703adb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ae1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ae1: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 703ae4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703ae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703ae7: ret  */
  esp += 4; SPILL(); return;
}

void f_703b00(void) {
  LOAD_REGS();
L_703b00: /* 703b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703b01: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703b05: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 703b07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703b09: mov ecx, esi */
  ecx = esi;
/* 703b0b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703b11u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703b11: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703b13: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703b16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703b17: ret  */
  esp += 4; SPILL(); return;
}

void f_703b30(void) {
  LOAD_REGS();
L_703b30: /* 703b30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703b31: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703b35: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 703b37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703b39: mov ecx, esi */
  ecx = esi;
/* 703b3b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703b41u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703b41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703b43: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 703b46: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703b48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703b49: ret  */
  esp += 4; SPILL(); return;
}

void f_703b60(void) {
  LOAD_REGS();
L_703b60: /* 703b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703b61: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703b65: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 703b67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703b69: mov ecx, esi */
  ecx = esi;
/* 703b6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703b71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703b71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703b73: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 703b76: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703b79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703b7a: ret  */
  esp += 4; SPILL(); return;
}

void f_703b90(void) {
  LOAD_REGS();
L_703b90: /* 703b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703b91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703b95: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 703b97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703b99: mov ecx, esi */
  ecx = esi;
/* 703b9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ba1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ba1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 703ba4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703ba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703ba7: ret  */
  esp += 4; SPILL(); return;
}

void f_703bc0(void) {
  LOAD_REGS();
L_703bc0: /* 703bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703bc1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703bc5: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 703bc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703bc9: mov ecx, esi */
  ecx = esi;
/* 703bcb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703bd1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703bd1: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 703bd4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703bd7: ret  */
  esp += 4; SPILL(); return;
}

void f_703bf0(void) {
  LOAD_REGS();
L_703bf0: /* 703bf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703bf1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703bf5: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 703bfa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703bfc: mov ecx, esi */
  ecx = esi;
/* 703bfe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703c04u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703c04: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 703c0a: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703c0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703c0d: ret  */
  esp += 4; SPILL(); return;
}

void f_703c20(void) {
  LOAD_REGS();
L_703c20: /* 703c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703c21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703c25: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 703c27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703c29: mov ecx, esi */
  ecx = esi;
/* 703c2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703c31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703c31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703c33: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 703c36: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703c3a: ret  */
  esp += 4; SPILL(); return;
}

void f_703c50(void) {
  LOAD_REGS();
L_703c50: /* 703c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703c51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703c55: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703c57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703c59: mov ecx, esi */
  ecx = esi;
/* 703c5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703c61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703c61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703c63: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703c66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703c67: ret  */
  esp += 4; SPILL(); return;
}

void f_703c80(void) {
  LOAD_REGS();
L_703c80: /* 703c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703c81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703c85: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 703c87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703c89: mov ecx, esi */
  ecx = esi;
/* 703c8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703c91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703c91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703c93: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 703c96: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703c98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703c99: ret  */
  esp += 4; SPILL(); return;
}

void f_703cb0(void) {
  LOAD_REGS();
L_703cb0: /* 703cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703cb1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703cb5: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 703cb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703cb9: mov ecx, esi */
  ecx = esi;
/* 703cbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703cc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703cc1: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 703cc4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703cc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703cc7: ret  */
  esp += 4; SPILL(); return;
}

void f_703ce0(void) {
  LOAD_REGS();
L_703ce0: /* 703ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703ce1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703ce5: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 703ce7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703ce9: mov ecx, esi */
  ecx = esi;
/* 703ceb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703cf1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703cf1: imul eax, eax, 0x4c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x4cu);
  eax = (uint32_t)r;
  }
/* 703cf4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703cf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703cf7: ret  */
  esp += 4; SPILL(); return;
}

void f_703d10(void) {
  LOAD_REGS();
L_703d10: /* 703d10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703d11: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703d15: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 703d17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703d19: mov ecx, esi */
  ecx = esi;
/* 703d1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703d21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703d21: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703d23: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 703d26: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703d29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703d2a: ret  */
  esp += 4; SPILL(); return;
}

void f_703d40(void) {
  LOAD_REGS();
L_703d40: /* 703d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703d41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703d45: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 703d47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703d49: mov ecx, esi */
  ecx = esi;
/* 703d4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703d51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703d51: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 703d54: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703d56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703d57: ret  */
  esp += 4; SPILL(); return;
}

void f_703d70(void) {
  LOAD_REGS();
L_703d70: /* 703d70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703d71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703d75: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 703d77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703d79: mov ecx, esi */
  ecx = esi;
/* 703d7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703d81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703d81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703d83: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703d86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703d87: ret  */
  esp += 4; SPILL(); return;
}

void f_703da0(void) {
  LOAD_REGS();
L_703da0: /* 703da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703da1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703da5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 703da7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703da9: mov ecx, esi */
  ecx = esi;
/* 703dab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703db1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703db1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703db3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703db6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703db7: ret  */
  esp += 4; SPILL(); return;
}

void f_703dd0(void) {
  LOAD_REGS();
L_703dd0: /* 703dd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703dd1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703dd5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703dd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703dd9: mov ecx, esi */
  ecx = esi;
/* 703ddb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703de1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703de1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703de3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703de6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703de7: ret  */
  esp += 4; SPILL(); return;
}

void f_703e00(void) {
  LOAD_REGS();
L_703e00: /* 703e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703e01: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703e05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703e07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703e09: mov ecx, esi */
  ecx = esi;
/* 703e0b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703e11u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703e11: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703e13: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703e16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703e17: ret  */
  esp += 4; SPILL(); return;
}

void f_703e30(void) {
  LOAD_REGS();
L_703e30: /* 703e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703e31: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703e35: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 703e37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703e39: mov ecx, esi */
  ecx = esi;
/* 703e3b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703e41u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703e41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703e43: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 703e46: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703e48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703e49: ret  */
  esp += 4; SPILL(); return;
}

void f_703e60(void) {
  LOAD_REGS();
L_703e60: /* 703e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703e61: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703e65: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 703e67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703e69: mov ecx, esi */
  ecx = esi;
/* 703e6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703e71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703e71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703e73: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 703e76: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703e79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703e7a: ret  */
  esp += 4; SPILL(); return;
}

void f_703e90(void) {
  LOAD_REGS();
L_703e90: /* 703e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703e91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703e95: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 703e97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703e99: mov ecx, esi */
  ecx = esi;
/* 703e9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ea1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ea1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703ea3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 703ea6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 703ea9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703eaa: ret  */
  esp += 4; SPILL(); return;
}

void f_703ec0(void) {
  LOAD_REGS();
L_703ec0: /* 703ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703ec1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703ec5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 703ec7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703ec9: mov ecx, esi */
  ecx = esi;
/* 703ecb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ed1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ed1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 703ed4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 703ed6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703ed7: ret  */
  esp += 4; SPILL(); return;
}

void f_703ef0(void) {
  LOAD_REGS();
L_703ef0: /* 703ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703ef1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703ef5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703ef7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703ef9: mov ecx, esi */
  ecx = esi;
/* 703efb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703f01u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703f01: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703f03: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703f06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703f07: ret  */
  esp += 4; SPILL(); return;
}

void f_703f20(void) {
  LOAD_REGS();
L_703f20: /* 703f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703f21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703f25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703f27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703f29: mov ecx, esi */
  ecx = esi;
/* 703f2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703f31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703f31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703f33: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703f36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703f37: ret  */
  esp += 4; SPILL(); return;
}

void f_703f50(void) {
  LOAD_REGS();
L_703f50: /* 703f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703f51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703f55: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703f57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703f59: mov ecx, esi */
  ecx = esi;
/* 703f5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703f61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703f61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703f63: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703f66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703f67: ret  */
  esp += 4; SPILL(); return;
}

void f_703f80(void) {
  LOAD_REGS();
L_703f80: /* 703f80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703f81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703f85: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703f87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703f89: mov ecx, esi */
  ecx = esi;
/* 703f8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703f91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703f91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703f93: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703f96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703f97: ret  */
  esp += 4; SPILL(); return;
}

void f_703fb0(void) {
  LOAD_REGS();
L_703fb0: /* 703fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703fb1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703fb5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703fb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703fb9: mov ecx, esi */
  ecx = esi;
/* 703fbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703fc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703fc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703fc3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703fc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703fc7: ret  */
  esp += 4; SPILL(); return;
}

void f_703fe0(void) {
  LOAD_REGS();
L_703fe0: /* 703fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 703fe1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 703fe5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 703fe7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 703fe9: mov ecx, esi */
  ecx = esi;
/* 703feb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x703ff1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 703ff1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 703ff3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 703ff6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 703ff7: ret  */
  esp += 4; SPILL(); return;
}

void f_704010(void) {
  LOAD_REGS();
L_704010: /* 704010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704011: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704015: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704017: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704019: mov ecx, esi */
  ecx = esi;
/* 70401b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704021u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704021: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704023: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704026: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704029: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70402a: ret  */
  esp += 4; SPILL(); return;
}

void f_704040(void) {
  LOAD_REGS();
L_704040: /* 704040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704041: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704045: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704047: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704049: mov ecx, esi */
  ecx = esi;
/* 70404b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704051u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704053: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704056: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704057: ret  */
  esp += 4; SPILL(); return;
}

void f_704070(void) {
  LOAD_REGS();
L_704070: /* 704070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704071: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704075: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704077: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704079: mov ecx, esi */
  ecx = esi;
/* 70407b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704081u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704081: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704083: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704086: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704087: ret  */
  esp += 4; SPILL(); return;
}

void f_7040a0(void) {
  LOAD_REGS();
L_7040a0: /* 7040a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7040a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7040a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7040a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7040a9: mov ecx, esi */
  ecx = esi;
/* 7040ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7040b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7040b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7040b3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7040b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7040b7: ret  */
  esp += 4; SPILL(); return;
}

void f_7040d0(void) {
  LOAD_REGS();
L_7040d0: /* 7040d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7040d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7040d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7040d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7040d9: mov ecx, esi */
  ecx = esi;
/* 7040db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7040e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7040e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7040e3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7040e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7040e7: ret  */
  esp += 4; SPILL(); return;
}

void f_704100(void) {
  LOAD_REGS();
L_704100: /* 704100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704101: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704105: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704107: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704109: mov ecx, esi */
  ecx = esi;
/* 70410b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704111u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704111: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704113: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704117: ret  */
  esp += 4; SPILL(); return;
}

void f_704130(void) {
  LOAD_REGS();
L_704130: /* 704130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704131: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704135: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704137: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704139: mov ecx, esi */
  ecx = esi;
/* 70413b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704141u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704141: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704143: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704147: ret  */
  esp += 4; SPILL(); return;
}

void f_704160(void) {
  LOAD_REGS();
L_704160: /* 704160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704161: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704165: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704167: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704169: mov ecx, esi */
  ecx = esi;
/* 70416b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704171u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704171: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704173: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704176: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704177: ret  */
  esp += 4; SPILL(); return;
}

void f_704190(void) {
  LOAD_REGS();
L_704190: /* 704190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704191: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704195: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704197: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704199: mov ecx, esi */
  ecx = esi;
/* 70419b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7041a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7041a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7041a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7041a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7041a7: ret  */
  esp += 4; SPILL(); return;
}

void f_7041c0(void) {
  LOAD_REGS();
L_7041c0: /* 7041c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7041c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7041c5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7041c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7041c9: mov ecx, esi */
  ecx = esi;
/* 7041cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7041d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7041d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7041d3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7041d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7041d7: ret  */
  esp += 4; SPILL(); return;
}

void f_7041f0(void) {
  LOAD_REGS();
L_7041f0: /* 7041f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7041f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7041f5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7041f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7041f9: mov ecx, esi */
  ecx = esi;
/* 7041fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704201u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704201: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704203: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704206: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704209: ret  */
  esp += 4; SPILL(); return;
}

void f_704220(void) {
  LOAD_REGS();
L_704220: /* 704220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704221: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704225: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704227: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704229: mov ecx, esi */
  ecx = esi;
/* 70422b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704231u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704231: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704233: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704236: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704237: ret  */
  esp += 4; SPILL(); return;
}

void f_704250(void) {
  LOAD_REGS();
L_704250: /* 704250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704251: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704255: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 704257: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704259: mov ecx, esi */
  ecx = esi;
/* 70425b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704261u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704261: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704263: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704266: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70426a: ret  */
  esp += 4; SPILL(); return;
}

void f_704280(void) {
  LOAD_REGS();
L_704280: /* 704280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704281: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704285: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704287: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704289: mov ecx, esi */
  ecx = esi;
/* 70428b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704291u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704291: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704293: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704296: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704299: ret  */
  esp += 4; SPILL(); return;
}

void f_7042b0(void) {
  LOAD_REGS();
L_7042b0: /* 7042b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7042b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7042b5: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 7042ba: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7042bc: mov ecx, esi */
  ecx = esi;
/* 7042be: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7042c4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7042c4: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 7042ca: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7042cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7042cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7042e0(void) {
  LOAD_REGS();
L_7042e0: /* 7042e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7042e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7042e5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7042e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7042e9: mov ecx, esi */
  ecx = esi;
/* 7042eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7042f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7042f1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7042f4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7042f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7042f7: ret  */
  esp += 4; SPILL(); return;
}

void f_704310(void) {
  LOAD_REGS();
L_704310: /* 704310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704311: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704315: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 704317: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704319: mov ecx, esi */
  ecx = esi;
/* 70431b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704321u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704321: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704323: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704326: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70432a: ret  */
  esp += 4; SPILL(); return;
}

void f_704340(void) {
  LOAD_REGS();
L_704340: /* 704340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704341: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704345: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 704347: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704349: mov ecx, esi */
  ecx = esi;
/* 70434b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704351u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704351: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704353: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704356: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704359: ret  */
  esp += 4; SPILL(); return;
}

void f_704370(void) {
  LOAD_REGS();
L_704370: /* 704370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704371: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704375: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 704377: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704379: mov ecx, esi */
  ecx = esi;
/* 70437b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704381u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704381: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704383: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704386: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704388: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704389: ret  */
  esp += 4; SPILL(); return;
}

void f_7043a0(void) {
  LOAD_REGS();
L_7043a0: /* 7043a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7043a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7043a5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7043a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7043a9: mov ecx, esi */
  ecx = esi;
/* 7043ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7043b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7043b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7043b3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7043b6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7043b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7043b9: ret  */
  esp += 4; SPILL(); return;
}

void f_7043d0(void) {
  LOAD_REGS();
L_7043d0: /* 7043d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7043d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7043d5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7043d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7043d9: mov ecx, esi */
  ecx = esi;
/* 7043db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7043e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7043e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7043e3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7043e6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7043e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7043e9: ret  */
  esp += 4; SPILL(); return;
}

void f_704400(void) {
  LOAD_REGS();
L_704400: /* 704400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704401: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704405: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 704407: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704409: mov ecx, esi */
  ecx = esi;
/* 70440b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704411u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704411: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704413: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 704416: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70441a: ret  */
  esp += 4; SPILL(); return;
}

void f_704430(void) {
  LOAD_REGS();
L_704430: /* 704430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704431: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704435: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704437: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704439: mov ecx, esi */
  ecx = esi;
/* 70443b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704441u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704441: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704443: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704446: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704449: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70444a: ret  */
  esp += 4; SPILL(); return;
}

void f_704460(void) {
  LOAD_REGS();
L_704460: /* 704460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704461: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704465: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704467: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704469: mov ecx, esi */
  ecx = esi;
/* 70446b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704471u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704471: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704473: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704477: ret  */
  esp += 4; SPILL(); return;
}

void f_704490(void) {
  LOAD_REGS();
L_704490: /* 704490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704491: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704495: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704497: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704499: mov ecx, esi */
  ecx = esi;
/* 70449b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7044a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7044a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7044a3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7044a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7044a7: ret  */
  esp += 4; SPILL(); return;
}

void f_7044c0(void) {
  LOAD_REGS();
L_7044c0: /* 7044c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7044c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7044c5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7044c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7044c9: mov ecx, esi */
  ecx = esi;
/* 7044cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7044d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7044d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7044d3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7044d6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7044d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7044da: ret  */
  esp += 4; SPILL(); return;
}

void f_7044f0(void) {
  LOAD_REGS();
L_7044f0: /* 7044f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7044f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7044f5: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7044f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7044f9: mov ecx, esi */
  ecx = esi;
/* 7044fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704501u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704501: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704503: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 704506: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704509: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70450a: ret  */
  esp += 4; SPILL(); return;
}

void f_704520(void) {
  LOAD_REGS();
L_704520: /* 704520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704521: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704525: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704527: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704529: mov ecx, esi */
  ecx = esi;
/* 70452b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704531u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704531: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704533: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704536: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704539: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70453a: ret  */
  esp += 4; SPILL(); return;
}

void f_704550(void) {
  LOAD_REGS();
L_704550: /* 704550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704551: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704555: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704557: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704559: mov ecx, esi */
  ecx = esi;
/* 70455b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704561u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704561: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704563: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704566: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70456a: ret  */
  esp += 4; SPILL(); return;
}

void f_704580(void) {
  LOAD_REGS();
L_704580: /* 704580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704581: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704585: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704587: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704589: mov ecx, esi */
  ecx = esi;
/* 70458b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704591u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704591: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704593: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704596: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704597: ret  */
  esp += 4; SPILL(); return;
}

void f_7045b0(void) {
  LOAD_REGS();
L_7045b0: /* 7045b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7045b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7045b5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7045b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7045b9: mov ecx, esi */
  ecx = esi;
/* 7045bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7045c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7045c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7045c3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7045c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7045c7: ret  */
  esp += 4; SPILL(); return;
}

void f_7045e0(void) {
  LOAD_REGS();
L_7045e0: /* 7045e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7045e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7045e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7045e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7045e9: mov ecx, esi */
  ecx = esi;
/* 7045eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7045f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7045f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7045f3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7045f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7045f7: ret  */
  esp += 4; SPILL(); return;
}

void f_704610(void) {
  LOAD_REGS();
L_704610: /* 704610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704611: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704615: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704617: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704619: mov ecx, esi */
  ecx = esi;
/* 70461b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704621u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704621: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704623: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704626: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704629: ret  */
  esp += 4; SPILL(); return;
}

void f_704640(void) {
  LOAD_REGS();
L_704640: /* 704640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704641: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704645: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704647: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704649: mov ecx, esi */
  ecx = esi;
/* 70464b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704651u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704651: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704653: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704657: ret  */
  esp += 4; SPILL(); return;
}

void f_704670(void) {
  LOAD_REGS();
L_704670: /* 704670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704671: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704675: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 704677: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704679: mov ecx, esi */
  ecx = esi;
/* 70467b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704681u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704681: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704683: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704686: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704688: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704689: ret  */
  esp += 4; SPILL(); return;
}

void f_7046a0(void) {
  LOAD_REGS();
L_7046a0: /* 7046a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7046a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7046a5: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7046a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7046a9: mov ecx, esi */
  ecx = esi;
/* 7046ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7046b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7046b1: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 7046b4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7046b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7046b7: ret  */
  esp += 4; SPILL(); return;
}

void f_7046d0(void) {
  LOAD_REGS();
L_7046d0: /* 7046d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7046d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7046d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7046d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7046d9: mov ecx, esi */
  ecx = esi;
/* 7046db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7046e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7046e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7046e3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7046e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7046e7: ret  */
  esp += 4; SPILL(); return;
}

void f_704700(void) {
  LOAD_REGS();
L_704700: /* 704700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704701: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704705: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704707: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704709: mov ecx, esi */
  ecx = esi;
/* 70470b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704711u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704711: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704713: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704716: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704717: ret  */
  esp += 4; SPILL(); return;
}

void f_704730(void) {
  LOAD_REGS();
L_704730: /* 704730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704731: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704735: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704737: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704739: mov ecx, esi */
  ecx = esi;
/* 70473b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704741u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704741: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704743: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704746: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704749: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70474a: ret  */
  esp += 4; SPILL(); return;
}

void f_704760(void) {
  LOAD_REGS();
L_704760: /* 704760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704761: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704765: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704767: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704769: mov ecx, esi */
  ecx = esi;
/* 70476b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704771u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704771: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704773: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704777: ret  */
  esp += 4; SPILL(); return;
}

void f_704790(void) {
  LOAD_REGS();
L_704790: /* 704790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704791: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704795: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704797: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704799: mov ecx, esi */
  ecx = esi;
/* 70479b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7047a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7047a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7047a3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7047a6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7047a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7047a9: ret  */
  esp += 4; SPILL(); return;
}

void f_7047c0(void) {
  LOAD_REGS();
L_7047c0: /* 7047c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7047c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7047c5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 7047c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7047c9: mov ecx, esi */
  ecx = esi;
/* 7047cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7047d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7047d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7047d3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7047d6: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 7047d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7047da: ret  */
  esp += 4; SPILL(); return;
}

void f_7047f0(void) {
  LOAD_REGS();
L_7047f0: /* 7047f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7047f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7047f5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7047f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7047f9: mov ecx, esi */
  ecx = esi;
/* 7047fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704801u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704801: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704803: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704806: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704809: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70480a: ret  */
  esp += 4; SPILL(); return;
}

void f_704820(void) {
  LOAD_REGS();
L_704820: /* 704820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704821: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704825: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704827: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704829: mov ecx, esi */
  ecx = esi;
/* 70482b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704831u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704831: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704833: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704836: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704837: ret  */
  esp += 4; SPILL(); return;
}

void f_704850(void) {
  LOAD_REGS();
L_704850: /* 704850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704851: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704855: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704857: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704859: mov ecx, esi */
  ecx = esi;
/* 70485b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704861u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704861: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704863: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704866: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704869: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70486a: ret  */
  esp += 4; SPILL(); return;
}

void f_704880(void) {
  LOAD_REGS();
L_704880: /* 704880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704881: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704885: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704887: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704889: mov ecx, esi */
  ecx = esi;
/* 70488b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704891u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704891: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704893: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704896: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704899: ret  */
  esp += 4; SPILL(); return;
}

void f_7048b0(void) {
  LOAD_REGS();
L_7048b0: /* 7048b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7048b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7048b5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7048b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7048b9: mov ecx, esi */
  ecx = esi;
/* 7048bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7048c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7048c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7048c3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7048c6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7048c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7048ca: ret  */
  esp += 4; SPILL(); return;
}

void f_7048e0(void) {
  LOAD_REGS();
L_7048e0: /* 7048e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7048e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7048e5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7048e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7048e9: mov ecx, esi */
  ecx = esi;
/* 7048eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7048f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7048f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7048f3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7048f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7048f7: ret  */
  esp += 4; SPILL(); return;
}

void f_704910(void) {
  LOAD_REGS();
L_704910: /* 704910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704911: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704915: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 704917: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704919: mov ecx, esi */
  ecx = esi;
/* 70491b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704921u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704921: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704923: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704926: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704929: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70492a: ret  */
  esp += 4; SPILL(); return;
}

void f_704940(void) {
  LOAD_REGS();
L_704940: /* 704940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704941: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704945: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 704947: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704949: mov ecx, esi */
  ecx = esi;
/* 70494b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704951u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704951: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704953: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704956: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704959: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70495b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70495c: ret  */
  esp += 4; SPILL(); return;
}

void f_704970(void) {
  LOAD_REGS();
L_704970: /* 704970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704971: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704975: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 704977: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704979: mov ecx, esi */
  ecx = esi;
/* 70497b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704981u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704981: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 704984: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704987: ret  */
  esp += 4; SPILL(); return;
}

void f_7049a0(void) {
  LOAD_REGS();
L_7049a0: /* 7049a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7049a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7049a5: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7049a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7049a9: mov ecx, esi */
  ecx = esi;
/* 7049ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7049b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7049b1: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 7049b4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7049b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7049b7: ret  */
  esp += 4; SPILL(); return;
}

void f_7049d0(void) {
  LOAD_REGS();
L_7049d0: /* 7049d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7049d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7049d5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7049d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7049d9: mov ecx, esi */
  ecx = esi;
/* 7049db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7049e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7049e1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7049e4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7049e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7049e7: ret  */
  esp += 4; SPILL(); return;
}

void f_704a00(void) {
  LOAD_REGS();
L_704a00: /* 704a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704a01: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704a05: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 704a07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704a09: mov ecx, esi */
  ecx = esi;
/* 704a0b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704a11u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704a11: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704a13: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704a16: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704a18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704a19: ret  */
  esp += 4; SPILL(); return;
}

void f_704a30(void) {
  LOAD_REGS();
L_704a30: /* 704a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704a31: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704a35: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704a37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704a39: mov ecx, esi */
  ecx = esi;
/* 704a3b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704a41u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704a41: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704a43: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704a46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704a47: ret  */
  esp += 4; SPILL(); return;
}

void f_704a60(void) {
  LOAD_REGS();
L_704a60: /* 704a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704a61: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704a65: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 704a67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704a69: mov ecx, esi */
  ecx = esi;
/* 704a6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704a71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704a71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704a73: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704a76: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704a79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_704a90(void) {
  LOAD_REGS();
L_704a90: /* 704a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704a91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704a95: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704a97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704a99: mov ecx, esi */
  ecx = esi;
/* 704a9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704aa1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704aa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704aa3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704aa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704aa7: ret  */
  esp += 4; SPILL(); return;
}

void f_704ac0(void) {
  LOAD_REGS();
L_704ac0: /* 704ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704ac1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704ac5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 704ac7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704ac9: mov ecx, esi */
  ecx = esi;
/* 704acb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704ad1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704ad1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704ad3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704ad6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704ad8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704ad9: ret  */
  esp += 4; SPILL(); return;
}

void f_704af0(void) {
  LOAD_REGS();
L_704af0: /* 704af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704af1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704af5: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 704afa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704afc: mov ecx, esi */
  ecx = esi;
/* 704afe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704b04u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704b04: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 704b0a: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704b0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704b0d: ret  */
  esp += 4; SPILL(); return;
}

void f_704b20(void) {
  LOAD_REGS();
L_704b20: /* 704b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704b21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704b25: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704b27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704b29: mov ecx, esi */
  ecx = esi;
/* 704b2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704b31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704b31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704b33: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704b36: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704b38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704b39: ret  */
  esp += 4; SPILL(); return;
}

void f_704b50(void) {
  LOAD_REGS();
L_704b50: /* 704b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704b51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704b55: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704b57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704b59: mov ecx, esi */
  ecx = esi;
/* 704b5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704b61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704b61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704b63: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704b66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704b67: ret  */
  esp += 4; SPILL(); return;
}

void f_704b80(void) {
  LOAD_REGS();
L_704b80: /* 704b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704b81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704b85: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704b87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704b89: mov ecx, esi */
  ecx = esi;
/* 704b8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704b91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704b91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704b93: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704b96: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704b98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704b99: ret  */
  esp += 4; SPILL(); return;
}

void f_704bb0(void) {
  LOAD_REGS();
L_704bb0: /* 704bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704bb1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704bb5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 704bb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704bb9: mov ecx, esi */
  ecx = esi;
/* 704bbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704bc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704bc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704bc3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704bc6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704bc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704bca: ret  */
  esp += 4; SPILL(); return;
}

void f_704be0(void) {
  LOAD_REGS();
L_704be0: /* 704be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704be1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704be5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 704be7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704be9: mov ecx, esi */
  ecx = esi;
/* 704beb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704bf1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704bf1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 704bf4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704bf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704bf7: ret  */
  esp += 4; SPILL(); return;
}

void f_704c10(void) {
  LOAD_REGS();
L_704c10: /* 704c10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704c11: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704c15: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704c17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704c19: mov ecx, esi */
  ecx = esi;
/* 704c1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704c21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704c21: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704c23: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704c26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704c27: ret  */
  esp += 4; SPILL(); return;
}

void f_704c40(void) {
  LOAD_REGS();
L_704c40: /* 704c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704c41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704c45: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704c47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704c49: mov ecx, esi */
  ecx = esi;
/* 704c4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704c51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704c51: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704c53: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704c56: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704c5a: ret  */
  esp += 4; SPILL(); return;
}

void f_704c70(void) {
  LOAD_REGS();
L_704c70: /* 704c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704c71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704c75: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 704c77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704c79: mov ecx, esi */
  ecx = esi;
/* 704c7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704c81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704c81: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 704c84: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704c86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704c87: ret  */
  esp += 4; SPILL(); return;
}

void f_704ca0(void) {
  LOAD_REGS();
L_704ca0: /* 704ca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704ca1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704ca5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 704ca7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704ca9: mov ecx, esi */
  ecx = esi;
/* 704cab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704cb1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704cb1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 704cb4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704cb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704cb7: ret  */
  esp += 4; SPILL(); return;
}

void f_704cd0(void) {
  LOAD_REGS();
L_704cd0: /* 704cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704cd1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704cd5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704cd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704cd9: mov ecx, esi */
  ecx = esi;
/* 704cdb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704ce1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704ce1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704ce3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704ce6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704ce8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704ce9: ret  */
  esp += 4; SPILL(); return;
}

void f_704d00(void) {
  LOAD_REGS();
L_704d00: /* 704d00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704d01: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704d05: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 704d07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704d09: mov ecx, esi */
  ecx = esi;
/* 704d0b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704d11u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704d11: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704d13: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 704d16: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704d19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704d1a: ret  */
  esp += 4; SPILL(); return;
}

void f_704d30(void) {
  LOAD_REGS();
L_704d30: /* 704d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704d31: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704d35: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 704d37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704d39: mov ecx, esi */
  ecx = esi;
/* 704d3b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704d41u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704d41: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 704d44: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704d46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704d47: ret  */
  esp += 4; SPILL(); return;
}

void f_704d60(void) {
  LOAD_REGS();
L_704d60: /* 704d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704d61: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704d65: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 704d67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704d69: mov ecx, esi */
  ecx = esi;
/* 704d6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704d71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704d71: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 704d74: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704d76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704d77: ret  */
  esp += 4; SPILL(); return;
}

void f_704d90(void) {
  LOAD_REGS();
L_704d90: /* 704d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704d91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704d95: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 704d97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704d99: mov ecx, esi */
  ecx = esi;
/* 704d9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704da1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704da1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704da3: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 704da6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704da9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704daa: ret  */
  esp += 4; SPILL(); return;
}

void f_704dc0(void) {
  LOAD_REGS();
L_704dc0: /* 704dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704dc1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704dc5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 704dc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704dc9: mov ecx, esi */
  ecx = esi;
/* 704dcb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704dd1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704dd1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704dd3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 704dd6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704dd9: ret  */
  esp += 4; SPILL(); return;
}

void f_704df0(void) {
  LOAD_REGS();
L_704df0: /* 704df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704df1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704df5: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 704df7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704df9: mov ecx, esi */
  ecx = esi;
/* 704dfb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704e01u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704e01: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 704e04: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704e06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704e07: ret  */
  esp += 4; SPILL(); return;
}

void f_704e20(void) {
  LOAD_REGS();
L_704e20: /* 704e20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704e21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704e25: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 704e27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704e29: mov ecx, esi */
  ecx = esi;
/* 704e2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704e31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704e31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704e33: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704e36: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704e39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704e3a: ret  */
  esp += 4; SPILL(); return;
}

void f_704e50(void) {
  LOAD_REGS();
L_704e50: /* 704e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704e51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704e55: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 704e57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704e59: mov ecx, esi */
  ecx = esi;
/* 704e5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704e61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704e61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704e63: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704e66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704e67: ret  */
  esp += 4; SPILL(); return;
}

void f_704e80(void) {
  LOAD_REGS();
L_704e80: /* 704e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704e81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704e85: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 704e87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704e89: mov ecx, esi */
  ecx = esi;
/* 704e8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704e91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704e91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704e93: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704e96: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704e99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704e9a: ret  */
  esp += 4; SPILL(); return;
}

void f_704eb0(void) {
  LOAD_REGS();
L_704eb0: /* 704eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704eb1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704eb5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 704eb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704eb9: mov ecx, esi */
  ecx = esi;
/* 704ebb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704ec1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704ec1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704ec3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704ec6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704ec9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704eca: ret  */
  esp += 4; SPILL(); return;
}

void f_704ee0(void) {
  LOAD_REGS();
L_704ee0: /* 704ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704ee1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704ee5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 704ee7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704ee9: mov ecx, esi */
  ecx = esi;
/* 704eeb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704ef1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704ef1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704ef3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 704ef6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 704ef9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704efa: ret  */
  esp += 4; SPILL(); return;
}

void f_704f10(void) {
  LOAD_REGS();
L_704f10: /* 704f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704f11: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704f15: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 704f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704f19: mov ecx, esi */
  ecx = esi;
/* 704f1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704f21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704f21: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 704f24: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704f27: ret  */
  esp += 4; SPILL(); return;
}

void f_704f40(void) {
  LOAD_REGS();
L_704f40: /* 704f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704f41: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704f45: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 704f47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704f49: mov ecx, esi */
  ecx = esi;
/* 704f4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704f51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704f51: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 704f54: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 704f56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704f57: ret  */
  esp += 4; SPILL(); return;
}

void f_704f70(void) {
  LOAD_REGS();
L_704f70: /* 704f70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704f71: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704f75: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704f77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704f79: mov ecx, esi */
  ecx = esi;
/* 704f7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704f81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704f81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704f83: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704f86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704f87: ret  */
  esp += 4; SPILL(); return;
}

void f_704fa0(void) {
  LOAD_REGS();
L_704fa0: /* 704fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704fa1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704fa5: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 704fa7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704fa9: mov ecx, esi */
  ecx = esi;
/* 704fab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704fb1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704fb1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704fb3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 704fb6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704fb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704fba: ret  */
  esp += 4; SPILL(); return;
}

void f_704fd0(void) {
  LOAD_REGS();
L_704fd0: /* 704fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 704fd1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 704fd5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 704fd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 704fd9: mov ecx, esi */
  ecx = esi;
/* 704fdb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x704fe1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 704fe1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 704fe3: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 704fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 704fe7: ret  */
  esp += 4; SPILL(); return;
}

void f_705000(void) {
  LOAD_REGS();
L_705000: /* 705000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705001: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705005: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 705007: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705009: mov ecx, esi */
  ecx = esi;
/* 70500b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705011u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705011: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705013: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 705016: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 705018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705019: ret  */
  esp += 4; SPILL(); return;
}

void f_705030(void) {
  LOAD_REGS();
L_705030: /* 705030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705031: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705035: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 705037: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705039: mov ecx, esi */
  ecx = esi;
/* 70503b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705041u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705041: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705043: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 705046: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 705048: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705049: ret  */
  esp += 4; SPILL(); return;
}

void f_705060(void) {
  LOAD_REGS();
L_705060: /* 705060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705061: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705065: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 705067: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705069: mov ecx, esi */
  ecx = esi;
/* 70506b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705071u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705071: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705073: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 705076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705077: ret  */
  esp += 4; SPILL(); return;
}

void f_705090(void) {
  LOAD_REGS();
L_705090: /* 705090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705091: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705095: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 705097: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705099: mov ecx, esi */
  ecx = esi;
/* 70509b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7050a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7050a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7050a3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7050a6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7050a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7050aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7050c0(void) {
  LOAD_REGS();
L_7050c0: /* 7050c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7050c1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7050c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7050c7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7050c9: mov ecx, esi */
  ecx = esi;
/* 7050cb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7050d1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7050d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7050d3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7050d6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7050d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7050da: ret  */
  esp += 4; SPILL(); return;
}

void f_7050f0(void) {
  LOAD_REGS();
L_7050f0: /* 7050f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7050f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7050f5: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 7050fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7050fc: mov ecx, esi */
  ecx = esi;
/* 7050fe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705104u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705104: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 70510a: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70510c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70510d: ret  */
  esp += 4; SPILL(); return;
}

void f_705120(void) {
  LOAD_REGS();
L_705120: /* 705120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705121: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705125: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 705127: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705129: mov ecx, esi */
  ecx = esi;
/* 70512b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705131u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705131: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705133: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 705136: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705137: ret  */
  esp += 4; SPILL(); return;
}

void f_705150(void) {
  LOAD_REGS();
L_705150: /* 705150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705151: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705155: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 705157: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705159: mov ecx, esi */
  ecx = esi;
/* 70515b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705161u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705161: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705163: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 705166: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 705169: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70516a: ret  */
  esp += 4; SPILL(); return;
}

void f_705180(void) {
  LOAD_REGS();
L_705180: /* 705180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705181: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705185: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 705187: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705189: mov ecx, esi */
  ecx = esi;
/* 70518b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705191u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705191: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705193: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 705196: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 705199: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70519a: ret  */
  esp += 4; SPILL(); return;
}

void f_7051b0(void) {
  LOAD_REGS();
L_7051b0: /* 7051b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7051b1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7051b5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7051b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7051b9: mov ecx, esi */
  ecx = esi;
/* 7051bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7051c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7051c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7051c3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7051c6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7051c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7051ca: ret  */
  esp += 4; SPILL(); return;
}

void f_7051e0(void) {
  LOAD_REGS();
L_7051e0: /* 7051e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7051e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7051e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7051e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7051e9: mov ecx, esi */
  ecx = esi;
/* 7051eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7051f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7051f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7051f3: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7051f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7051f7: ret  */
  esp += 4; SPILL(); return;
}

void f_705210(void) {
  LOAD_REGS();
L_705210: /* 705210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705211: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705215: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 705217: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705219: mov ecx, esi */
  ecx = esi;
/* 70521b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705221u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705221: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 705224: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 705226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705227: ret  */
  esp += 4; SPILL(); return;
}

void f_705240(void) {
  LOAD_REGS();
L_705240: /* 705240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705241: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705245: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 705247: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705249: mov ecx, esi */
  ecx = esi;
/* 70524b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705251u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705251: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705253: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 705256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705257: ret  */
  esp += 4; SPILL(); return;
}

void f_705270(void) {
  LOAD_REGS();
L_705270: /* 705270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705271: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705275: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 705277: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705279: mov ecx, esi */
  ecx = esi;
/* 70527b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705281u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705281: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 705284: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 705286: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705287: ret  */
  esp += 4; SPILL(); return;
}

void f_7052a0(void) {
  LOAD_REGS();
L_7052a0: /* 7052a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7052a1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7052a5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7052a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7052a9: mov ecx, esi */
  ecx = esi;
/* 7052ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7052b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7052b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7052b3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7052b6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7052b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7052b9: ret  */
  esp += 4; SPILL(); return;
}

void f_7052d0(void) {
  LOAD_REGS();
L_7052d0: /* 7052d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7052d1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7052d5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7052d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7052d9: mov ecx, esi */
  ecx = esi;
/* 7052db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7052e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7052e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7052e3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7052e6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7052e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7052e9: ret  */
  esp += 4; SPILL(); return;
}

void f_705300(void) {
  LOAD_REGS();
L_705300: /* 705300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705301: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 705305: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 705307: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705309: mov ecx, esi */
  ecx = esi;
/* 70530b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705311u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705311: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 705313: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 705316: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 705319: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70531a: ret  */
  esp += 4; SPILL(); return;
}

void f_705330(void) {
  LOAD_REGS();
L_705330: /* 705330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 705331: mov ebp, esp */
  ebp = esp;
/* 705333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 705335: push 0x9c14b9 */
  { uint32_t v = 0x9c14b9u; esp -= 4; W32(esp, v); }
/* 70533a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 705340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 705348: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70534b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70534c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70534d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70534e: mov ebx, ecx */
  ebx = ecx;
/* 705350: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 705353: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 705356: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 70535d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x705363u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 705363: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 705366: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 705369: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 70536c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 70536f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 705370: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 705373: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 705376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705377: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 70537c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70537d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 705381: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x705384u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705384: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 705387: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 705388: mov eax, edx */
  eax = edx;
/* 70538a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 70538d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 705390: jne 0x7053a8 */
  if (!zf) goto L_7053a8;
L_705392: /* 705392: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 705395: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 705396: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 705398: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 70539b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7053a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7053a2: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7053a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7053a8: /* 7053a8: mov edi, dword ptr [0xcfa3c4] */
  edi = R32((uint32_t)(0xcfa3c4u));
/* 7053ae: xor esi, esi */
  esi = 0;
L_7053b0: /* 7053b0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7053b3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7053b9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7053b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7053ba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7053bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7053bc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7053bf: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7053c1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7053c4: jge 0x7053f5 */
  if ((sf == of)) goto L_7053f5;
L_7053c6: /* 7053c6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7053ccu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7053cc: cmp word ptr [eax + esi*2], 0x5c */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + esi*2))); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7053d1: je 0x7053e3 */
  if (zf) goto L_7053e3;
L_7053d3: /* 7053d3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7053d6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7053dcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7053dc: cmp word ptr [eax + esi*2], 0x2e */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + esi*2))); uint16_t b = (uint16_t)(0x2eu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7053e1: jne 0x7053f2 */
  if (!zf) goto L_7053f2;
L_7053e3: /* 7053e3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7053e6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7053ecu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7053ec: mov word ptr [eax + esi*2], 0x5f */
  W16((uint32_t)(eax + esi*2), 0x5fu);
L_7053f2: /* 7053f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7053f3: jmp 0x7053b0 */
  goto L_7053b0;
L_7053f5: /* 7053f5: push 0xac37d0 */
  { uint32_t v = 0xac37d0u; esp -= 4; W32(esp, v); }
/* 7053fa: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x705400u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 705400: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 705403: lea esi, [ebx + 0x340] */
  esi = (uint32_t)(ebx + 0x340u);
/* 705409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70540a: mov ecx, esi */
  ecx = esi;
/* 70540c: call dword ptr [0xcfa3bc] */
  esp -= 4; W32(esp, 0x705412u); SPILL(); f_4e4390(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABVFString@@@Z */ RELOAD();
/* 705412: mov ecx, esi */
  ecx = esi;
/* 705414: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x70541au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 70541a: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 705420: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 705422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705423: push 0xac37dc */
  { uint32_t v = 0xac37dcu; esp -= 4; W32(esp, v); }
/* 705428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 705429: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x70542fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 70542f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705432: mov ecx, esi */
  ecx = esi;
/* 705434: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x70543au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 70543a: mov esi, dword ptr [0xcfa3b4] */
  esi = R32((uint32_t)(0xcfa3b4u));
/* 705440: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 705442: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 705448: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 70544a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70544c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70544d: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 70544f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705450: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x705453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705453: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 705456: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 70545c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 705460: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x705466u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 705466: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 705469: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70546a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70546b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 705472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 705473: mov esp, ebp */
  esp = ebp;
/* 705475: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 705476: ret 8 */
  esp += 12; SPILL(); return;
}

void f_705479(void) {
  LOAD_REGS();
L_705479: /* 705479: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 70547c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 705481: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 705484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705485: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 705488: call 0x99caf8 */
  esp -= 4; W32(esp, 0x70548du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_70548d(); return;
}

void f_70548d(void) {
  LOAD_REGS();
L_70548d: /* 70548d: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 705493: push 0x9f7b6c */
  { uint32_t v = 0x9f7b6cu; esp -= 4; W32(esp, v); }
/* 705498: push 0xac3804 */
  { uint32_t v = 0xac3804u; esp -= 4; W32(esp, v); }
/* 70549d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x70549fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70549f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7054a2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7054a5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7054a8: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7054ab: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7054b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7054b4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7054b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7054b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7054b9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7054bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7054bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7054be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7054bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7054c1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7054c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7054c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7054c4: push 0xac380c */
  { uint32_t v = 0xac380cu; esp -= 4; W32(esp, v); }
/* 7054c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7054cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7054cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7054ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7054d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7054d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7054d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7054d7: guest_badaddr(0x7054d7); return;
}

void f_705550(void) {
  LOAD_REGS();
L_705550: /* 705550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 705551: mov ebp, esp */
  ebp = esp;
/* 705553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 705555: push 0x9c14d0 */
  { uint32_t v = 0x9c14d0u; esp -= 4; W32(esp, v); }
/* 70555a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 705560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 705568: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70556b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 70556e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 705571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705572: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705573: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705574: xor edi, edi */
  edi = 0;
/* 705576: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 705577: mov esi, ecx */
  esi = ecx;
/* 705579: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 70557c: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 70557f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 705582: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 705585: jne 0x70559b */
  if (!zf) goto L_70559b;
L_705587: /* 705587: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 70558a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 70558b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70558c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 70558f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705590: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 705595: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x70559bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_70559b: /* 70559b: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7055a1: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7055a3: je 0x7055ab */
  if (zf) goto L_7055ab;
L_7055a5: /* 7055a5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7055a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7055a9: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7055abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7055ab: /* 7055ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7055ae: mov dword ptr [esi + 0x33c], edi */
  W32((uint32_t)(esi + 0x33cu), edi);
/* 7055b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7055b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7055b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7055bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7055be: mov esp, ebp */
  esp = ebp;
/* 7055c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7055c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7055c4(void) {
  LOAD_REGS();
L_7055c4: /* 7055c4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7055c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7055cc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7055cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7055d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7055d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7055d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7055d8(); return;
}

void f_7055d8(void) {
  LOAD_REGS();
L_7055d8: /* 7055d8: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7055de: push 0x9f7ba0 */
  { uint32_t v = 0x9f7ba0u; esp -= 4; W32(esp, v); }
/* 7055e3: push 0xac3830 */
  { uint32_t v = 0xac3830u; esp -= 4; W32(esp, v); }
/* 7055e8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7055eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7055ea: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7055ed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7055f0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7055f3: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7055f6: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7055fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7055ff: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 705601: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 705602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 705604: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x705606u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705606: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 705609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70560a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70560c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x70560eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70560e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70560f: push 0xac3838 */
  { uint32_t v = 0xac3838u; esp -= 4; W32(esp, v); }
/* 705614: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x705616u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705616: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70561b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70561d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x705622u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_705622: guest_badaddr(0x705622); return;
}

void f_705670(void) {
  LOAD_REGS();
L_705670: /* 705670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 705671: mov ebp, esp */
  ebp = esp;
/* 705673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 705675: push 0x9c14f2 */
  { uint32_t v = 0x9c14f2u; esp -= 4; W32(esp, v); }
/* 70567a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 705680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 705688: sub esp, 0x424 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x424u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70568e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70568f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705690: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705691: mov edi, ecx */
  edi = ecx;
/* 705693: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 705696: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 705699: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7056a0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7056a6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7056a6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7056a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7056ac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7056af: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7056b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7056b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7056b6: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7056b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7056ba: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7056bf: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7056c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7056c2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7056c5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7056c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7056c8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7056cb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7056cc: mov eax, edx */
  eax = edx;
/* 7056ce: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7056d1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7056d4: jne 0x7056ec */
  if (!zf) goto L_7056ec;
L_7056d6: /* 7056d6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7056d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7056da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7056dc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7056df: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7056e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7056e6: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7056ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7056ec: /* 7056ec: push 0xac385c */
  { uint32_t v = 0xac385cu; esp -= 4; W32(esp, v); }
/* 7056f1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7056f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7056f5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7056f8: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x7056feu); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 7056fe: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 705702: xor esi, esi */
  esi = 0;
L_705704: /* 705704: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 705707: call dword ptr [0xcfa3cc] */
  esp -= 4; W32(esp, 0x70570du); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* 70570d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70570f: jge 0x705736 */
  if ((sf == of)) goto L_705736;
L_705711: /* 705711: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 705714: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x70571au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 70571a: mov ax, word ptr [eax + esi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*2))) & 0xffffu);
/* 70571e: cmp ax, 0x100 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 705722: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 705725: jb 0x70572c */
  if (cf) goto L_70572c;
L_705727: /* 705727: mov eax, 0x7f */
  eax = 0x7fu;
L_70572c: /* 70572c: mov byte ptr [ebp + esi - 0x430], al */
  W8((uint32_t)(ebp + esi + 0xfffffbd0u), (eax & 0xffu));
/* 705733: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 705734: jmp 0x705704 */
  goto L_705704;
L_705736: /* 705736: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 70573c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70573d: lea eax, [ebp - 0x430] */
  eax = (uint32_t)(ebp + 0xfffffbd0u);
/* 705743: mov byte ptr [ebp + esi - 0x430], 0 */
  W8((uint32_t)(ebp + esi + 0xfffffbd0u), 0x0u);
/* 70574b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70574d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70574e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x705751u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705751: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 705754: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 705757: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70575du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70575d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 705760: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 705764: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70576au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70576a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 70576d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70576e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70576f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 705776: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 705777: mov esp, ebp */
  esp = ebp;
/* 705779: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70577a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_70577d(void) {
  LOAD_REGS();
L_70577d: /* 70577d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 705780: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 705785: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 705788: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 705789: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 70578c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x705791u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_705791(); return;
}

void f_705791(void) {
  LOAD_REGS();
L_705791: /* 705791: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 705797: push 0x9f7bd8 */
  { uint32_t v = 0x9f7bd8u; esp -= 4; W32(esp, v); }
/* 70579c: push 0xac3864 */
  { uint32_t v = 0xac3864u; esp -= 4; W32(esp, v); }
/* 7057a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7057a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7057a3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7057a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7057a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7057ac: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 7057af: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7057b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7057b8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7057ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7057bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7057bd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7057bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7057bf: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7057c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7057c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7057c5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7057c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7057c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7057c8: push 0xac386c */
  { uint32_t v = 0xac386cu; esp -= 4; W32(esp, v); }
/* 7057cd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7057cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7057cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7057d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7057d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7057d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7057dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7057db: guest_badaddr(0x7057db); return;
}

void f_705840(void) {
  LOAD_REGS();
L_705840: /* 705840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705841: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 705845: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705846: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705847: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 705849: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70584a: mov esi, ecx */
  esi = ecx;
/* 70584c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705852u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705852: mov edi, eax */
  edi = eax;
/* 705854: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 705859: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 70585b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70585d: je 0x705879 */
  if (zf) goto L_705879;
L_70585f: /* 70585f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 705862: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 705864: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 705869: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 70586e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 705870: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705872: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705873: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705876: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x705879u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_705879: /* 705879: mov eax, edi */
  eax = edi;
/* 70587b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70587c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70587d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70587e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7058b0(void) {
  LOAD_REGS();
L_7058b0: /* 7058b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7058b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7058b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7058b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7058b7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7058b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7058ba: mov esi, ecx */
  esi = ecx;
/* 7058bc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7058c2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7058c2: mov edi, eax */
  edi = eax;
/* 7058c4: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 7058c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7058cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7058cd: je 0x7058e9 */
  if (zf) goto L_7058e9;
L_7058cf: /* 7058cf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7058d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7058d4: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 7058d9: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 7058de: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7058e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7058e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7058e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7058e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7058e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7058e6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7058e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7058e9: /* 7058e9: mov eax, edi */
  eax = edi;
/* 7058eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7058ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7058ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7058ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705920(void) {
  LOAD_REGS();
L_705920: /* 705920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705921: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 705925: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705927: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 705929: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70592a: mov esi, ecx */
  esi = ecx;
/* 70592c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x705932u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 705932: mov edi, eax */
  edi = eax;
/* 705934: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 705939: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 70593b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70593d: je 0x705959 */
  if (zf) goto L_705959;
L_70593f: /* 70593f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 705942: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 705944: push 0x6cae2f */
  { uint32_t v = 0x6cae2fu; esp -= 4; W32(esp, v); }
/* 705949: push 0x6c26b7 */
  { uint32_t v = 0x6c26b7u; esp -= 4; W32(esp, v); }
/* 70594e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 705950: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 705952: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705953: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705954: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705956: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x705959u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_705959: /* 705959: mov eax, edi */
  eax = edi;
/* 70595b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70595c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70595d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70595e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705990(void) {
  LOAD_REGS();
L_705990: /* 705990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705991: mov esi, ecx */
  esi = ecx;
L_705993: /* 705993: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 705996: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 705997: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 70599a: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7059a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7059a3: jge 0x7059bb */
  if ((sf == of)) goto L_7059bb;
L_7059a5: /* 7059a5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7059a7: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 7059aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7059ac: je 0x705993 */
  if (zf) goto L_705993;
L_7059ae: /* 7059ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7059b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7059b1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7059b7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7059b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7059b9: je 0x705993 */
  if (zf) goto L_705993;
L_7059bb: /* 7059bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7059bc: ret  */
  esp += 4; SPILL(); return;
}

void f_7059d0(void) {
  LOAD_REGS();
L_7059d0: /* 7059d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7059d3: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7059d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7059db: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7059de: ret  */
  esp += 4; SPILL(); return;
}

void f_7059f0(void) {
  LOAD_REGS();
L_7059f0: /* 7059f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7059f4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7059f8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7059fa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7059fc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7059ff: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 705a02: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 705a05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 705a08: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 705a0b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 705a0d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 705a0f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 705a11: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 705a13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705a15: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 705a17: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 705a19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705a1b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 705a1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 705a20: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 705a22: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 705a24: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x705a2au); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 705a2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705a2d: ret  */
  esp += 4; SPILL(); return;
}

void f_705a40(void) {
  LOAD_REGS();
L_705a40: /* 705a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 705a42: push 0x9c152f */
  { uint32_t v = 0x9c152fu; esp -= 4; W32(esp, v); }
/* 705a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 705a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 705a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705a57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705a58: mov esi, ecx */
  esi = ecx;
/* 705a5a: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 705a62: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 705a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705a67: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 705a6f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x705a75u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 705a75: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 705a79: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 705a7d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 705a81: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 705a85: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 705a88: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 705a8c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 705a8f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 705a93: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 705a96: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 705a9a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 705a9d: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 705aa1: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 705aa4: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 705aa8: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 705aab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705aac: mov ecx, edi */
  ecx = edi;
/* 705aae: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 705ab1: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 705ab4: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x705abau); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 705aba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 705abd: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 705ac0: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 705ac3: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 705ac6: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 705ac9: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 705acc: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 705acf: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 705ad2: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 705ad5: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 705ad8: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 705adb: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 705ade: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 705ae1: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 705ae4: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 705ae7: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 705aea: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 705aee: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 705af6: mov byte ptr [esp + 0x14], 0 */
  W8((uint32_t)(esp + 0x14u), 0x0u);
/* 705afb: call 0x6ccc16 */
  esp -= 4; W32(esp, 0x705b00u); SPILL(); f_6ccc16(); if (g_unwind) return; RELOAD();
/* 705b00: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 705b04: mov eax, edi */
  eax = edi;
/* 705b06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 705b07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705b08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 705b0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705b12: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_705b60(void) {
  LOAD_REGS();
L_705b60: /* 705b60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 705b64: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 705b66: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 705b68: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 705b6b: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 705b6e: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 705b71: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 705b74: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 705b77: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 705b79: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 705b7c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705b7e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 705b80: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 705b83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705b85: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 705b8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 705b8d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 705b90: je 0x705b94 */
  if (zf) goto L_705b94;
L_705b92: /* 705b92: fchs  */
  ST0 = -ST0;
L_705b94: /* 705b94: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 705b9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 705b9c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 705b9f: jp 0x705bdb */
  if (pf) goto L_705bdb;
L_705ba1: /* 705ba1: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 705ba4: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 705ba7: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 705baa: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 705bad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705baf: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 705bb2: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 705bb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 705bb7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 705bbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 705bbf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 705bc2: je 0x705bc6 */
  if (zf) goto L_705bc6;
L_705bc4: /* 705bc4: fchs  */
  ST0 = -ST0;
L_705bc6: /* 705bc6: fcomp dword ptr [0x9f7c08] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c08u)));
  FPOP();
/* 705bcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 705bce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 705bd1: jne 0x705bdb */
  if (!zf) goto L_705bdb;
L_705bd3: /* 705bd3: mov eax, 1 */
  eax = 0x1u;
/* 705bd8: ret 4 */
  esp += 8; SPILL(); return;
L_705bdb: /* 705bdb: xor eax, eax */
  eax = 0;
/* 705bdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705c00(void) {
  LOAD_REGS();
L_705c00: /* 705c00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 705c04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 705c06: je 0x705c0d */
  if (zf) goto L_705c0d;
L_705c08: /* 705c08: jmp 0x6cc93c */
  SPILL(); f_6cc93c(); return;
L_705c0d: /* 705c0d: ret  */
  esp += 4; SPILL(); return;
}

void f_705c20(void) {
  LOAD_REGS();
L_705c20: /* 705c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 705c21: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 705c27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705c28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705c29: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 705c2d: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 705c30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705c31: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 705c37: mov esi, ecx */
  esi = ecx;
/* 705c39: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 705c3c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x705c3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705c3e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705c41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 705c43: jge 0x705c49 */
  if ((sf == of)) goto L_705c49;
L_705c45: /* 705c45: xor eax, eax */
  eax = 0;
/* 705c47: jmp 0x705c55 */
  goto L_705c55;
L_705c49: /* 705c49: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 705c4e: jl 0x705c55 */
  if ((sf != of)) goto L_705c55;
L_705c50: /* 705c50: mov eax, 0xff */
  eax = 0xffu;
L_705c55: /* 705c55: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 705c57: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 705c5a: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 705c60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705c61: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 705c64: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x705c66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705c66: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705c69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 705c6b: jge 0x705c71 */
  if ((sf == of)) goto L_705c71;
L_705c6d: /* 705c6d: xor eax, eax */
  eax = 0;
/* 705c6f: jmp 0x705c7d */
  goto L_705c7d;
L_705c71: /* 705c71: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 705c76: jl 0x705c7d */
  if ((sf != of)) goto L_705c7d;
L_705c78: /* 705c78: mov eax, 0xff */
  eax = 0xffu;
L_705c7d: /* 705c7d: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
/* 705c80: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 705c82: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 705c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705c89: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 705c8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x705c8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705c8e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705c91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 705c93: jge 0x705c99 */
  if ((sf == of)) goto L_705c99;
L_705c95: /* 705c95: xor eax, eax */
  eax = 0;
/* 705c97: jmp 0x705ca5 */
  goto L_705ca5;
L_705c99: /* 705c99: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 705c9e: jl 0x705ca5 */
  if ((sf != of)) goto L_705ca5;
L_705ca0: /* 705ca0: mov eax, 0xff */
  eax = 0xffu;
L_705ca5: /* 705ca5: mov byte ptr [esi + 2], al */
  W8((uint32_t)(esi + 0x2u), (eax & 0xffu));
/* 705ca8: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 705cab: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 705cb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705cb2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 705cb5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x705cb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 705cb7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705cba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 705cbc: jge 0x705ccb */
  if ((sf == of)) goto L_705ccb;
L_705cbe: /* 705cbe: xor eax, eax */
  eax = 0;
/* 705cc0: mov byte ptr [esi + 3], al */
  W8((uint32_t)(esi + 0x3u), (eax & 0xffu));
/* 705cc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 705cc4: mov eax, esi */
  eax = esi;
/* 705cc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705cc7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 705cc8: ret 4 */
  esp += 8; SPILL(); return;
L_705ccb: /* 705ccb: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 705cd0: jl 0x705cd7 */
  if ((sf != of)) goto L_705cd7;
L_705cd2: /* 705cd2: mov eax, 0xff */
  eax = 0xffu;
L_705cd7: /* 705cd7: mov byte ptr [esi + 3], al */
  W8((uint32_t)(esi + 0x3u), (eax & 0xffu));
/* 705cda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 705cdb: mov eax, esi */
  eax = esi;
/* 705cdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705cde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 705cdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705d30(void) {
  LOAD_REGS();
L_705d30: /* 705d30: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 705d33: movzx eax, byte ptr [ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 705d37: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 705d3b: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 705d3f: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 705d42: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 705d46: movzx ecx, byte ptr [ecx + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x3u)));
/* 705d4a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 705d50: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 705d54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705d55: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 705d59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 705d5a: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 705d5e: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 705d62: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 705d66: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 705d6c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 705d70: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 705d74: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 705d78: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 705d7c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 705d82: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 705d86: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 705d8a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 705d90: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 705d94: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 705d98: fmul dword ptr [0x9f7c14] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c14u)));
/* 705d9e: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 705da4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 705da7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 705da8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x705daeu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 705dae: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 705db2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705db3: mov ecx, esi */
  ecx = esi;
/* 705db5: call 0x6c576d */
  esp -= 4; W32(esp, 0x705dbau); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 705dba: mov eax, esi */
  eax = esi;
/* 705dbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705dbd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 705dc0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_705e00(void) {
  LOAD_REGS();
L_705e00: /* 705e00: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 705e03: ret  */
  esp += 4; SPILL(); return;
}

void f_705e20(void) {
  LOAD_REGS();
L_705e20: /* 705e20: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 705e23: ret  */
  esp += 4; SPILL(); return;
}

void f_705e40(void) {
  LOAD_REGS();
L_705e40: /* 705e40: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 705e43: ret  */
  esp += 4; SPILL(); return;
}

void f_705e60(void) {
  LOAD_REGS();
L_705e60: /* 705e60: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 705e63: ret  */
  esp += 4; SPILL(); return;
}

void f_705e80(void) {
  LOAD_REGS();
L_705e80: /* 705e80: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 705e83: ret  */
  esp += 4; SPILL(); return;
}

void f_705ea0(void) {
  LOAD_REGS();
L_705ea0: /* 705ea0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 705ea4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 705ea6: je 0x705ead */
  if (zf) goto L_705ead;
L_705ea8: /* 705ea8: jmp 0x6c9502 */
  SPILL(); f_6c9502(); return;
L_705ead: /* 705ead: ret  */
  esp += 4; SPILL(); return;
}

void f_705ec0(void) {
  LOAD_REGS();
L_705ec0: /* 705ec0: mov eax, ecx */
  eax = ecx;
/* 705ec2: mov dword ptr [eax], 0x9f7c18 */
  W32((uint32_t)(eax), 0x9f7c18u);
/* 705ec8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705ee0(void) {
  LOAD_REGS();
L_705ee0: /* 705ee0: xor eax, eax */
  eax = 0;
/* 705ee2: ret  */
  esp += 4; SPILL(); return;
}

void f_705f00(void) {
  LOAD_REGS();
L_705f00: /* 705f00: xor eax, eax */
  eax = 0;
/* 705f02: ret  */
  esp += 4; SPILL(); return;
}

void f_705f20(void) {
  LOAD_REGS();
L_705f20: /* 705f20: mov eax, ecx */
  eax = ecx;
/* 705f22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705f40(void) {
  LOAD_REGS();
L_705f40: /* 705f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705f41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705f42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 705f46: mov esi, ecx */
  esi = ecx;
/* 705f48: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 705f4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705f4c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 705f4f: mov dword ptr [esi], 0x9f7c44 */
  W32((uint32_t)(esi), 0x9f7c44u);
/* 705f55: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x705f5bu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 705f5b: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 705f5e: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 705f61: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 705f64: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 705f67: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 705f6a: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 705f6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 705f6e: mov eax, esi */
  eax = esi;
/* 705f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705f71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705f90(void) {
  LOAD_REGS();
L_705f90: /* 705f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 705f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 705f92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 705f96: mov esi, ecx */
  esi = ecx;
/* 705f98: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 705f9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 705f9c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 705f9f: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x705fa5u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 705fa5: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 705fa8: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 705fab: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 705fae: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 705fb1: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 705fb4: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 705fb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 705fb8: mov eax, esi */
  eax = esi;
/* 705fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 705fbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705fd0(void) {
  LOAD_REGS();
L_705fd0: /* 705fd0: mov eax, ecx */
  eax = ecx;
/* 705fd2: mov dword ptr [eax], 0x9f7c68 */
  W32((uint32_t)(eax), 0x9f7c68u);
/* 705fd8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_705ff0(void) {
  LOAD_REGS();
L_705ff0: /* 705ff0: mov eax, ecx */
  eax = ecx;
/* 705ff2: ret  */
  esp += 4; SPILL(); return;
}

void f_706010(void) {
  LOAD_REGS();
L_706010: /* 706010: mov eax, ecx */
  eax = ecx;
/* 706012: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706030(void) {
  LOAD_REGS();
L_706030: /* 706030: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 706034: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 706036: je 0x70603d */
  if (zf) goto L_70603d;
L_706038: /* 706038: jmp 0x6c3ea9 */
  SPILL(); f_6c3ea9(); return;
L_70603d: /* 70603d: ret  */
  esp += 4; SPILL(); return;
}

void f_706050(void) {
  LOAD_REGS();
L_706050: /* 706050: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 706054: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 706056: je 0x70605d */
  if (zf) goto L_70605d;
L_706058: /* 706058: jmp 0x6c8cbf */
  SPILL(); f_6c8cbf(); return;
L_70605d: /* 70605d: ret  */
  esp += 4; SPILL(); return;
}

void f_706070(void) {
  LOAD_REGS();
L_706070: /* 706070: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706073: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 706077: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 70607a: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 70607d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70607e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70607f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 706083: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 706087: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70608b: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 70608f: xor eax, eax */
  eax = 0;
/* 706091: mov ebx, ecx */
  ebx = ecx;
/* 706093: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 706096: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 706099: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 70609b: mov ecx, ebx */
  ecx = ebx;
/* 70609d: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 70609f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7060a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7060a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7060a4: ret  */
  esp += 4; SPILL(); return;
}

void f_7060c0(void) {
  LOAD_REGS();
L_7060c0: /* 7060c0: mov eax, ecx */
  eax = ecx;
/* 7060c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7060c6: mov dword ptr [eax], 0x9f7cc8 */
  W32((uint32_t)(eax), 0x9f7cc8u);
/* 7060cc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7060cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7060d2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 7060d5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7060d8: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 7060db: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7060de: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 7060e1: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 7060e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706100(void) {
  LOAD_REGS();
L_706100: /* 706100: mov eax, ecx */
  eax = ecx;
/* 706102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 706106: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 706109: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70610c: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70610f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 706112: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 706115: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 706118: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 70611b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 70611e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706140(void) {
  LOAD_REGS();
L_706140: /* 706140: mov eax, ecx */
  eax = ecx;
/* 706142: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 706146: mov dword ptr [eax], 0x9f7d28 */
  W32((uint32_t)(eax), 0x9f7d28u);
/* 70614c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70614f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 706152: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 706155: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 706158: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 70615b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 70615e: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 706161: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 706164: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706180(void) {
  LOAD_REGS();
L_706180: /* 706180: mov eax, ecx */
  eax = ecx;
/* 706182: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 706186: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 706189: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70618c: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70618f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 706192: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 706195: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 706198: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 70619b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 70619e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7061c0(void) {
  LOAD_REGS();
L_7061c0: /* 7061c0: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 7061c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7061c5: je 0x7061cb */
  if (zf) goto L_7061cb;
L_7061c7: /* 7061c7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 7061ca: ret  */
  esp += 4; SPILL(); return;
L_7061cb: /* 7061cb: xor eax, eax */
  eax = 0;
/* 7061cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7061e0(void) {
  LOAD_REGS();
L_7061e0: /* 7061e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7061e4: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 7061ea: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7061ed: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7061f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706210(void) {
  LOAD_REGS();
L_706210: /* 706210: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 706213: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 706216: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 70621a: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 70621d: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 706220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706221: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706222: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 706223: call 0x6ca83f */
  esp -= 4; W32(esp, 0x706228u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 706228: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70622b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706240(void) {
  LOAD_REGS();
L_706240: /* 706240: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 706244: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 706247: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 70624a: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 70624d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 706251: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 706253: ret 8 */
  esp += 12; SPILL(); return;
}

void f_706270(void) {
  LOAD_REGS();
L_706270: /* 706270: mov eax, ecx */
  eax = ecx;
/* 706272: mov dword ptr [eax], 0x9f7c18 */
  W32((uint32_t)(eax), 0x9f7c18u);
/* 706278: ret  */
  esp += 4; SPILL(); return;
}

void f_706290(void) {
  LOAD_REGS();
L_706290: /* 706290: mov eax, ecx */
  eax = ecx;
/* 706292: mov dword ptr [eax], 0x9f7c68 */
  W32((uint32_t)(eax), 0x9f7c68u);
/* 706298: ret  */
  esp += 4; SPILL(); return;
}

void f_7062b0(void) {
  LOAD_REGS();
L_7062b0: /* 7062b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7062b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7062b4: mov esi, ecx */
  esi = ecx;
/* 7062b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7062b7: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7062bb: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7062c1u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7062c1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7062c5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7062c9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7062cd: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7062cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7062d1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 7062d5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7062d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7062da: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7062de: mov ecx, dword ptr [0xb7e430] */
  ecx = R32((uint32_t)(0xb7e430u));
/* 7062e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7062e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7062e7: mov ecx, esi */
  ecx = esi;
/* 7062e9: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 7062ed: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7062f3u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7062f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7062f4: mov ecx, esi */
  ecx = esi;
/* 7062f6: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7062f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7062f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7062fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7062fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7062fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_706330(void) {
  LOAD_REGS();
L_706330: /* 706330: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706333: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 706337: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 70633b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70633c: mov esi, ecx */
  esi = ecx;
/* 70633e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 706342: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 706346: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 70634a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70634b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70634d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 706351: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 706355: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 706359: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 70635d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 706361: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 706365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706367: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70636b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 70636f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 706373: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 706377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706378: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 70637c: mov ecx, dword ptr [0xb7e398] */
  ecx = R32((uint32_t)(0xb7e398u));
/* 706382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706384: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 706388: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 70638c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70638d: mov ecx, esi */
  ecx = esi;
/* 70638f: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 706393: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706399u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70639a: mov ecx, esi */
  ecx = esi;
/* 70639c: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x70639fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70639f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7063a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7063a1: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7063a4: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_7063d0(void) {
  LOAD_REGS();
L_7063d0: /* 7063d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7063d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7063d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7063d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7063d6: mov esi, ecx */
  esi = ecx;
/* 7063d8: mov ecx, esp */
  ecx = esp;
/* 7063da: push 0x137 */
  { uint32_t v = 0x137u; esp -= 4; W32(esp, v); }
/* 7063df: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7063e5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7063e5: mov ecx, esi */
  ecx = esi;
/* 7063e7: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7063edu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7063ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7063ef: je 0x706429 */
  if (zf) goto L_706429;
L_7063f1: /* 7063f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7063f5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7063f9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7063fd: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7063ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706401: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 706405: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 706409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70640a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 70640e: mov ecx, dword ptr [0xb7e2ac] */
  ecx = R32((uint32_t)(0xb7e2acu));
/* 706414: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706416: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706417: mov ecx, esi */
  ecx = esi;
/* 706419: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 70641d: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706423u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706424: mov ecx, esi */
  ecx = esi;
/* 706426: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x706429u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_706429: /* 706429: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70642a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70642b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70642e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_706460(void) {
  LOAD_REGS();
L_706460: /* 706460: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706464: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706466: mov esi, ecx */
  esi = ecx;
/* 706468: mov ecx, esp */
  ecx = esp;
/* 70646a: push 0x135 */
  { uint32_t v = 0x135u; esp -= 4; W32(esp, v); }
/* 70646f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x706475u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 706475: mov ecx, esi */
  ecx = esi;
/* 706477: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x70647du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 70647d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70647f: je 0x7064c1 */
  if (zf) goto L_7064c1;
L_706481: /* 706481: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 706485: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 706489: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 70648d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70648f: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 706493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706495: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70649a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 70649e: mov edx, dword ptr [0xb7e2a4] */
  edx = R32((uint32_t)(0xb7e2a4u));
/* 7064a4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7064a8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7064ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7064ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7064af: mov ecx, esi */
  ecx = esi;
/* 7064b1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7064b5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7064bbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7064bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7064bc: mov ecx, esi */
  ecx = esi;
/* 7064be: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7064c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7064c1: /* 7064c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7064c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7064c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7064c6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7064f0(void) {
  LOAD_REGS();
L_7064f0: /* 7064f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7064f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7064f4: mov esi, ecx */
  esi = ecx;
/* 7064f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7064f7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7064fb: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x706501u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 706501: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 706505: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 706509: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 70650d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70650f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706511: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 706515: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 706519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70651a: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 70651e: mov ecx, dword ptr [0xb7e548] */
  ecx = R32((uint32_t)(0xb7e548u));
/* 706524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706526: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706527: mov ecx, esi */
  ecx = esi;
/* 706529: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 70652d: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706533u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706533: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706534: mov ecx, esi */
  ecx = esi;
/* 706536: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x706539u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 706539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70653a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70653b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70653e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_706570(void) {
  LOAD_REGS();
L_706570: /* 706570: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706573: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 706574: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 706578: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 706579: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70657a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70657b: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 70657f: mov esi, ecx */
  esi = ecx;
/* 706581: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 706583: mov eax, edi */
  eax = edi;
/* 706585: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 706587: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 70658a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 70658d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 706591: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 706595: mov ecx, ebx */
  ecx = ebx;
/* 706597: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 706599: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70659b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 70659f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7065a2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7065a5: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 7065a9: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 7065ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7065ae: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7065b2: mov eax, dword ptr [0xb7e4d8] */
  eax = R32((uint32_t)(0xb7e4d8u));
/* 7065b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7065b9: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 7065bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7065be: mov ecx, esi */
  ecx = esi;
/* 7065c0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7065c6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7065c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7065c7: mov ecx, esi */
  ecx = esi;
/* 7065c9: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x7065ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7065cc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7065d0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 7065d4: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7065d8: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7065da: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7065de: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7065e1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7065e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7065e8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7065ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7065ed: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7065ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7065f0: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 7065f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7065f4: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 7065f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7065f8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7065fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_706630(void) {
  LOAD_REGS();
L_706630: /* 706630: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706633: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 706637: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 70663b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70663c: mov esi, ecx */
  esi = ecx;
/* 70663e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 706642: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 706646: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 70664a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70664b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70664d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 706651: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 706655: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 706659: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 70665d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 706661: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 706665: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 706669: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70666b: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 70666f: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 706673: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 706677: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 70667b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 70667f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706680: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 706684: mov edx, dword ptr [0xb7e44c] */
  edx = R32((uint32_t)(0xb7e44cu));
/* 70668a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 70668e: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 706692: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706694: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 706695: mov ecx, esi */
  ecx = esi;
/* 706697: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 70669b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7066a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7066a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7066a2: mov ecx, esi */
  ecx = esi;
/* 7066a4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7066a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7066a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7066a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7066a9: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7066ac: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_7066d0(void) {
  LOAD_REGS();
L_7066d0: /* 7066d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7066d2: push 0x9c15d0 */
  { uint32_t v = 0x9c15d0u; esp -= 4; W32(esp, v); }
/* 7066d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7066dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7066de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7066e5: sub esp, 0x328 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x328u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7066eb: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7066f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7066f4: mov ebp, ecx */
  ebp = ecx;
/* 7066f6: lea eax, [ebp + 0x294] */
  eax = (uint32_t)(ebp + 0x294u);
/* 7066fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7066fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 706701: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 706704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706706: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 70670a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 70670e: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 706712: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* 70671a: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 706722: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 70672a: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 706732: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 70673a: mov dword ptr [esp + 0x7c], 0x3f800000 */
  W32((uint32_t)(esp + 0x7cu), 0x3f800000u);
/* 706742: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 70674d: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 706758: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 706763: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 70676e: mov dword ptr [esp + 0x90], 0x3f800000 */
  W32((uint32_t)(esp + 0x90u), 0x3f800000u);
/* 706779: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 706784: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 70678b: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 706792: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 706799: mov dword ptr [esp + 0xa4], 0x3f800000 */
  W32((uint32_t)(esp + 0xa4u), 0x3f800000u);
/* 7067a4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7067a9: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* 7067ad: lea edi, [esp + 0x2f4] */
  edi = (uint32_t)(esp + 0x2f4u);
/* 7067b4: mov dword ptr [esp + 0x33c], 1 */
  W32((uint32_t)(esp + 0x33cu), 0x1u);
/* 7067bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7067c1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7067c6: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7067cc: lea esi, [esp + 0x68] */
  esi = (uint32_t)(esp + 0x68u);
/* 7067d0: fdiv dword ptr [ebp + 0x290] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x290u)));
/* 7067d6: lea edi, [esp + 0x1b4] */
  edi = (uint32_t)(esp + 0x1b4u);
/* 7067dd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7067df: mov ecx, dword ptr [ebp + 0x284] */
  ecx = R32((uint32_t)(ebp + 0x284u));
/* 7067e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7067e6: lea edx, [esp + 0xec] */
  edx = (uint32_t)(esp + 0xecu);
/* 7067ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7067ee: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7067f2: mov byte ptr [esp + 0x344], 2 */
  W8((uint32_t)(esp + 0x344u), 0x2u);
/* 7067fa: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 706800: fdiv dword ptr [ebp + 0x28c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x28cu)));
/* 706806: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 70680c: fdiv dword ptr [ebp + 0x288] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x288u)));
/* 706812: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 706816: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 70681a: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 70681e: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x706824u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 706824: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 706826: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 706829: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 70682c: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 706830: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 706834: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 706838: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 70683c: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 706844: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 70684c: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 706854: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 70685c: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 706860: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 706868: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 706870: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 706878: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 706880: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 706884: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 70688c: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 706894: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 70689c: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 7068a4: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* 7068ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7068b1: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 7068b5: lea edi, [esp + 0x274] */
  edi = (uint32_t)(esp + 0x274u);
/* 7068bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7068be: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7068c3: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 7068c7: lea edi, [esp + 0x234] */
  edi = (uint32_t)(esp + 0x234u);
/* 7068ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7068d0: lea ecx, [ebp + 0x17c] */
  ecx = (uint32_t)(ebp + 0x17cu);
/* 7068d6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7068d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7068db: mov edx, esp */
  edx = esp;
/* 7068dd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7068df: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7068e2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7068e5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7068e8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7068eb: lea ecx, [esp + 0x200] */
  ecx = (uint32_t)(esp + 0x200u);
/* 7068f2: mov byte ptr [esp + 0x348], 4 */
  W8((uint32_t)(esp + 0x348u), 0x4u);
/* 7068fa: call 0x6c818e */
  esp -= 4; W32(esp, 0x7068ffu); SPILL(); f_6c818e(); if (g_unwind) return; RELOAD();
/* 7068ff: mov ecx, 0x10 */
  ecx = 0x10u;
/* 706904: mov esi, eax */
  esi = eax;
/* 706906: lea edi, [esp + 0x174] */
  edi = (uint32_t)(esp + 0x174u);
/* 70690d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 70690f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 706914: fld dword ptr [ebp + 0x178] */
  { double v = F32((uint32_t)(ebp + 0x178u)); FPUSH(v); }
/* 70691a: mov esi, eax */
  esi = eax;
/* 70691c: fchs  */
  ST0 = -ST0;
/* 70691e: lea edi, [esp + 0xf4] */
  edi = (uint32_t)(esp + 0xf4u);
/* 706925: fld dword ptr [ebp + 0x174] */
  { double v = F32((uint32_t)(ebp + 0x174u)); FPUSH(v); }
/* 70692b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 70692d: fchs  */
  ST0 = -ST0;
/* 70692f: fld dword ptr [ebp + 0x170] */
  { double v = F32((uint32_t)(ebp + 0x170u)); FPUSH(v); }
/* 706935: fchs  */
  ST0 = -ST0;
/* 706937: fstp dword ptr [esp + 0xd8] */
  WF32((uint32_t)(esp + 0xd8u), ST0); FPOP();
/* 70693e: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 706945: fstp dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0); FPOP();
/* 70694c: mov dword ptr [esp + 0xa8], 0x3f800000 */
  W32((uint32_t)(esp + 0xa8u), 0x3f800000u);
/* 706957: mov dword ptr [esp + 0xac], 0 */
  W32((uint32_t)(esp + 0xacu), 0x0u);
/* 706962: mov dword ptr [esp + 0xb0], 0 */
  W32((uint32_t)(esp + 0xb0u), 0x0u);
/* 70696d: mov dword ptr [esp + 0xb4], 0 */
  W32((uint32_t)(esp + 0xb4u), 0x0u);
/* 706978: mov dword ptr [esp + 0xb8], 0 */
  W32((uint32_t)(esp + 0xb8u), 0x0u);
/* 706983: mov dword ptr [esp + 0xbc], 0x3f800000 */
  W32((uint32_t)(esp + 0xbcu), 0x3f800000u);
/* 70698e: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 706999: mov dword ptr [esp + 0xc4], 0 */
  W32((uint32_t)(esp + 0xc4u), 0x0u);
/* 7069a4: mov dword ptr [esp + 0xc8], 0 */
  W32((uint32_t)(esp + 0xc8u), 0x0u);
/* 7069af: mov dword ptr [esp + 0xcc], 0 */
  W32((uint32_t)(esp + 0xccu), 0x0u);
/* 7069ba: mov dword ptr [esp + 0xd0], 0x3f800000 */
  W32((uint32_t)(esp + 0xd0u), 0x3f800000u);
/* 7069c5: mov dword ptr [esp + 0xd4], 0 */
  W32((uint32_t)(esp + 0xd4u), 0x0u);
/* 7069d0: mov dword ptr [esp + 0xe4], 0x3f800000 */
  W32((uint32_t)(esp + 0xe4u), 0x3f800000u);
/* 7069db: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7069de: mov edi, esp */
  edi = esp;
/* 7069e0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7069e5: lea esi, [esp + 0x134] */
  esi = (uint32_t)(esp + 0x134u);
/* 7069ec: lea edx, [esp + 0x174] */
  edx = (uint32_t)(esp + 0x174u);
/* 7069f3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7069f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7069f6: lea ecx, [esp + 0xec] */
  ecx = (uint32_t)(esp + 0xecu);
/* 7069fd: mov byte ptr [esp + 0x380], 7 */
  W8((uint32_t)(esp + 0x380u), 0x7u);
/* 706a05: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x706a0bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 706a0b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706a0e: mov edi, esp */
  edi = esp;
/* 706a10: mov ecx, 0x10 */
  ecx = 0x10u;
/* 706a15: lea esi, [esp + 0x274] */
  esi = (uint32_t)(esp + 0x274u);
/* 706a1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 706a1e: lea ecx, [esp + 0x2f4] */
  ecx = (uint32_t)(esp + 0x2f4u);
/* 706a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706a26: mov ecx, eax */
  ecx = eax;
/* 706a28: mov byte ptr [esp + 0x380], 8 */
  W8((uint32_t)(esp + 0x380u), 0x8u);
/* 706a30: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x706a36u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 706a36: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706a39: mov edi, esp */
  edi = esp;
/* 706a3b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 706a40: lea esi, [esp + 0x1f4] */
  esi = (uint32_t)(esp + 0x1f4u);
/* 706a47: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 706a49: mov esi, dword ptr [esp + 0x384] */
  esi = R32((uint32_t)(esp + 0x384u));
/* 706a50: mov byte ptr [esp + 0x37c], 9 */
  W8((uint32_t)(esp + 0x37cu), 0x9u);
/* 706a58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706a59: mov ecx, eax */
  ecx = eax;
/* 706a5b: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x706a61u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 706a61: lea ecx, [esp + 0x2b4] */
  ecx = (uint32_t)(esp + 0x2b4u);
/* 706a68: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 706a70: mov byte ptr [esp + 0x33c], 8 */
  W8((uint32_t)(esp + 0x33cu), 0x8u);
/* 706a78: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706a7eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706a7e: lea ecx, [esp + 0x134] */
  ecx = (uint32_t)(esp + 0x134u);
/* 706a85: mov byte ptr [esp + 0x33c], 7 */
  W8((uint32_t)(esp + 0x33cu), 0x7u);
/* 706a8d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706a93u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706a93: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 706a9a: mov byte ptr [esp + 0x33c], 6 */
  W8((uint32_t)(esp + 0x33cu), 0x6u);
/* 706aa2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706aa8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706aa8: lea ecx, [esp + 0x174] */
  ecx = (uint32_t)(esp + 0x174u);
/* 706aaf: mov byte ptr [esp + 0x33c], 5 */
  W8((uint32_t)(esp + 0x33cu), 0x5u);
/* 706ab7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706abdu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706abd: lea ecx, [esp + 0x1f4] */
  ecx = (uint32_t)(esp + 0x1f4u);
/* 706ac4: mov byte ptr [esp + 0x33c], 4 */
  W8((uint32_t)(esp + 0x33cu), 0x4u);
/* 706acc: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706ad2u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706ad2: lea ecx, [esp + 0x274] */
  ecx = (uint32_t)(esp + 0x274u);
/* 706ad9: mov byte ptr [esp + 0x33c], 3 */
  W8((uint32_t)(esp + 0x33cu), 0x3u);
/* 706ae1: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706ae7u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706ae7: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 706aeb: mov byte ptr [esp + 0x33c], 2 */
  W8((uint32_t)(esp + 0x33cu), 0x2u);
/* 706af3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706af9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706af9: lea ecx, [esp + 0x2f4] */
  ecx = (uint32_t)(esp + 0x2f4u);
/* 706b00: mov byte ptr [esp + 0x33c], 1 */
  W8((uint32_t)(esp + 0x33cu), 0x1u);
/* 706b08: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706b0eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706b0e: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 706b12: mov byte ptr [esp + 0x33c], 0 */
  W8((uint32_t)(esp + 0x33cu), 0x0u);
/* 706b1a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x706b20u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 706b20: mov ecx, dword ptr [esp + 0x334] */
  ecx = R32((uint32_t)(esp + 0x334u));
/* 706b27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 706b28: mov eax, esi */
  eax = esi;
/* 706b2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706b2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 706b32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 706b33: add esp, 0x334 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x334u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 706b39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_706c60(void) {
  LOAD_REGS();
L_706c60: /* 706c60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706c61: mov esi, ecx */
  esi = ecx;
/* 706c63: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x706c69u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 706c69: mov ecx, eax */
  ecx = eax;
/* 706c6b: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x706c71u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 706c71: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 706c77: fdiv dword ptr [eax + 0xb8] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0xb8u)));
/* 706c7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706c7e: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 706c84: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 706c8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 706c8c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 706c8f: jp 0x706c9a */
  if (pf) goto L_706c9a;
L_706c91: /* 706c91: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 706c93: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 706c99: ret  */
  esp += 4; SPILL(); return;
L_706c9a: /* 706c9a: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 706ca0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 706ca2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 706ca5: jnp 0x706caf */
  if (!pf) goto L_706caf;
L_706ca7: /* 706ca7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 706ca9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_706caf: /* 706caf: ret  */
  esp += 4; SPILL(); return;
}

void f_706cd0(void) {
  LOAD_REGS();
L_706cd0: /* 706cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706cd1: mov esi, ecx */
  esi = ecx;
/* 706cd3: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 706cd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 706cd8: je 0x706ce9 */
  if (zf) goto L_706ce9;
L_706cda: /* 706cda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_706ce0: /* 706ce0: mov esi, eax */
  esi = eax;
/* 706ce2: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 706ce5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 706ce7: jne 0x706ce0 */
  if (!zf) goto L_706ce0;
L_706ce9: /* 706ce9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 706ceb: mov ecx, esi */
  ecx = esi;
/* 706ced: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x706cf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 706cf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 706cf5: je 0x706d0c */
  if (zf) goto L_706d0c;
L_706cf7: /* 706cf7: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 706cfc: mov ecx, esi */
  ecx = esi;
/* 706cfe: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x706d04u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 706d04: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 706d06: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 706d08: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 706d0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706d0b: ret  */
  esp += 4; SPILL(); return;
L_706d0c: /* 706d0c: xor eax, eax */
  eax = 0;
/* 706d0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706d0f: ret  */
  esp += 4; SPILL(); return;
}

void f_706d20(void) {
  LOAD_REGS();
L_706d20: /* 706d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706d21: mov esi, ecx */
  esi = ecx;
/* 706d23: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 706d26: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x706d2cu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 706d2c: mov eax, esi */
  eax = esi;
/* 706d2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706d2f: ret  */
  esp += 4; SPILL(); return;
}

void f_706d40(void) {
  LOAD_REGS();
L_706d40: /* 706d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 706d42: push 0x9c1608 */
  { uint32_t v = 0x9c1608u; esp -= 4; W32(esp, v); }
/* 706d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 706d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 706d55: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706d59: mov esi, ecx */
  esi = ecx;
/* 706d5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706d5c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706d60: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x706d66u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 706d66: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 706d6a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 706d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706d6f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 706d73: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 706d7b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 706d7f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x706d85u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 706d85: mov eax, dword ptr [0xb7e4b4] */
  eax = R32((uint32_t)(0xb7e4b4u));
/* 706d8a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 706d8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706d8e: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 706d92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 706d93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706d95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706d96: mov ecx, esi */
  ecx = esi;
/* 706d98: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706d9eu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706d9f: mov ecx, esi */
  ecx = esi;
/* 706da1: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x706da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 706da4: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706da8: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 706db0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x706db6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 706db6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 706dba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 706dbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706dbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 706dc3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 706dc6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_706e00(void) {
  LOAD_REGS();
L_706e00: /* 706e00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 706e02: push 0x9c1628 */
  { uint32_t v = 0x9c1628u; esp -= 4; W32(esp, v); }
/* 706e07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 706e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706e0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 706e15: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706e19: mov esi, ecx */
  esi = ecx;
/* 706e1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706e1c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 706e20: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x706e26u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 706e26: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 706e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706e2b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706e2f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 706e37: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x706e3du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 706e3d: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 706e41: mov eax, dword ptr [0xb7e3dc] */
  eax = R32((uint32_t)(0xb7e3dcu));
/* 706e46: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 706e48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706e4a: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 706e4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 706e4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706e51: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 706e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706e56: mov ecx, esi */
  ecx = esi;
/* 706e58: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706e5eu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706e5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706e5f: mov ecx, esi */
  ecx = esi;
/* 706e61: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x706e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 706e64: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 706e68: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 706e70: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x706e76u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 706e76: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 706e7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 706e7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706e7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 706e83: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 706e86: ret 8 */
  esp += 12; SPILL(); return;
}

void f_706ec0(void) {
  LOAD_REGS();
L_706ec0: /* 706ec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 706ec2: push 0x9c1651 */
  { uint32_t v = 0x9c1651u; esp -= 4; W32(esp, v); }
/* 706ec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 706ecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706ece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 706ed5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706ed8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706ed9: mov esi, ecx */
  esi = ecx;
/* 706edb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706edc: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706ee0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x706ee6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 706ee6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 706eea: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 706ef2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x706ef8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 706ef8: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 706efc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 706f00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706f01: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 706f05: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 706f0d: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 706f11: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x706f17u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 706f17: mov ecx, dword ptr [0xb7e410] */
  ecx = R32((uint32_t)(0xb7e410u));
/* 706f1d: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 706f21: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 706f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706f25: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 706f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706f2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 706f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706f2d: mov ecx, esi */
  ecx = esi;
/* 706f2f: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 706f33: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x706f39u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 706f39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706f3a: mov ecx, esi */
  ecx = esi;
/* 706f3c: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x706f3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 706f3f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706f43: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 706f4b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x706f51u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 706f51: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 706f55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 706f56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 706f57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 706f5e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 706f61: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_706fa0(void) {
  LOAD_REGS();
L_706fa0: /* 706fa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 706fa2: push 0x9c1678 */
  { uint32_t v = 0x9c1678u; esp -= 4; W32(esp, v); }
/* 706fa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 706fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706fae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 706fb5: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 706fb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 706fb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 706fba: mov esi, ecx */
  esi = ecx;
/* 706fbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706fbd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 706fc1: call 0x6c518c */
  esp -= 4; W32(esp, 0x706fc6u); SPILL(); f_6c518c(); if (g_unwind) return; RELOAD();
/* 706fc6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 706fca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 706fcb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 706fcf: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 706fd7: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 706fdf: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x706fe5u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 706fe5: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 706fe9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 706fea: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 706fee: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x706ff4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 706ff4: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 706ff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 706ff9: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 706ffd: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707003u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707003: mov eax, dword ptr [0xb7e378] */
  eax = R32((uint32_t)(0xb7e378u));
/* 707008: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 70700a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70700c: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 707010: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707014: mov ecx, esi */
  ecx = esi;
/* 707016: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x70701cu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 70701c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70701d: mov ecx, esi */
  ecx = esi;
/* 70701f: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x707022u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707022: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 707026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707027: mov ecx, edi */
  ecx = edi;
/* 707029: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x70702fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 70702f: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 707033: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707037: mov dword ptr [esp + 0x3c], 0xffffffff */
  W32((uint32_t)(esp + 0x3cu), 0xffffffffu);
/* 70703f: call 0x6c4d18 */
  esp -= 4; W32(esp, 0x707044u); SPILL(); f_6c4d18(); if (g_unwind) return; RELOAD();
/* 707044: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 707048: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707049: mov eax, esi */
  eax = esi;
/* 70704b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70704c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70704d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707054: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707057: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_707090(void) {
  LOAD_REGS();
L_707090: /* 707090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707092: push 0x9c1698 */
  { uint32_t v = 0x9c1698u; esp -= 4; W32(esp, v); }
/* 707097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70709d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70709e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7070a5: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7070a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7070a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7070aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7070ab: mov esi, ecx */
  esi = ecx;
/* 7070ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7070ae: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7070b2: call 0x6c4ad4 */
  esp -= 4; W32(esp, 0x7070b7u); SPILL(); f_6c4ad4(); if (g_unwind) return; RELOAD();
/* 7070b7: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7070bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7070bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7070c0: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 7070c8: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7070ceu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7070ce: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 7070d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7070d3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7070d7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7070ddu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7070dd: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7070e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7070e2: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7070e6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7070ecu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7070ec: mov ebx, dword ptr [esp + 0x5c] */
  ebx = R32((uint32_t)(esp + 0x5cu));
/* 7070f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7070f1: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 7070f5: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7070fbu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7070fb: mov eax, dword ptr [0xb7e3bc] */
  eax = R32((uint32_t)(0xb7e3bcu));
/* 707100: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 707102: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707104: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 707108: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707109: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70710b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70710c: mov ecx, esi */
  ecx = esi;
/* 70710e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707114u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707114: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707115: mov ecx, esi */
  ecx = esi;
/* 707117: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x70711au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70711a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 70711e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70711f: mov ecx, edi */
  ecx = edi;
/* 707121: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707127u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707127: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 70712b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 70712c: mov ecx, ebx */
  ecx = ebx;
/* 70712e: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707134u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707134: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 707138: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* 707140: call 0x6c12fd */
  esp -= 4; W32(esp, 0x707145u); SPILL(); f_6c12fd(); if (g_unwind) return; RELOAD();
/* 707145: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 707149: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70714a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70714b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70714c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70714d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707154: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707157: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7071a0(void) {
  LOAD_REGS();
L_7071a0: /* 7071a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7071a2: push 0x9c16d0 */
  { uint32_t v = 0x9c16d0u; esp -= 4; W32(esp, v); }
/* 7071a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7071ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7071ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7071b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7071b8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7071b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7071ba: mov esi, ecx */
  esi = ecx;
/* 7071bc: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7071c0: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 7071c8: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7071ceu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7071ce: mov ecx, dword ptr [0xb7e3b4] */
  ecx = R32((uint32_t)(0xb7e3b4u));
/* 7071d4: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 7071d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7071d8: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 7071dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7071dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7071df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7071e0: mov ecx, esi */
  ecx = esi;
/* 7071e2: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 7071ea: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7071f0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7071f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7071f1: mov ecx, esi */
  ecx = esi;
/* 7071f3: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x7071f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7071f6: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 7071fa: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 7071fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7071ff: mov ecx, esi */
  ecx = esi;
/* 707201: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x707207u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 707207: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 70720b: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* 707213: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 707218: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70721eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70721e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 707222: mov eax, esi */
  eax = esi;
/* 707224: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707225: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 707226: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70722d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707230: ret 4 */
  esp += 8; SPILL(); return;
}

void f_707270(void) {
  LOAD_REGS();
L_707270: /* 707270: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707272: push 0x9c170a */
  { uint32_t v = 0x9c170au; esp -= 4; W32(esp, v); }
/* 707277: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70727d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70727e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707285: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707288: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 707289: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70728a: mov esi, ecx */
  esi = ecx;
/* 70728c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70728d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707291: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707297u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707297: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 70729b: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7072a3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7072a9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7072a9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 7072ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7072ae: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7072b2: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 7072ba: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7072c0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7072c0: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 7072c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7072c5: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7072c9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7072cfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7072cf: mov edx, dword ptr [0xb7e3ac] */
  edx = R32((uint32_t)(0xb7e3acu));
/* 7072d5: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 7072d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7072d9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7072dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7072de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7072e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7072e1: mov ecx, esi */
  ecx = esi;
/* 7072e3: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7072e9u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7072e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7072ea: mov ecx, esi */
  ecx = esi;
/* 7072ec: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0x7072efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7072ef: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 7072f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7072f4: mov ecx, edi */
  ecx = edi;
/* 7072f6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7072fcu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7072fc: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 707300: mov dword ptr [esp + 0x2c], 2 */
  W32((uint32_t)(esp + 0x2cu), 0x2u);
/* 707308: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x70730eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 70730e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707312: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 70731a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707320u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707320: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 707324: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707325: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707326: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 707327: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70732e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707331: ret 8 */
  esp += 12; SPILL(); return;
}

void f_707380(void) {
  LOAD_REGS();
L_707380: /* 707380: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707383: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 707387: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 70738b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70738c: mov esi, ecx */
  esi = ecx;
/* 70738e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 707392: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707393: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707395: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 707399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70739b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 70739f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7073a0: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7073a4: mov edx, dword ptr [0xb7e480] */
  edx = R32((uint32_t)(0xb7e480u));
/* 7073aa: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7073ae: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7073b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7073b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7073b5: mov ecx, esi */
  ecx = esi;
/* 7073b7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7073bb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7073c1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7073c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7073c2: mov ecx, esi */
  ecx = esi;
/* 7073c4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7073c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7073c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7073c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7073c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7073cc: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7073f0(void) {
  LOAD_REGS();
L_7073f0: /* 7073f0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7073f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7073f4: mov esi, ecx */
  esi = ecx;
/* 7073f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7073f7: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7073fb: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x707401u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 707401: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 707405: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 707409: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 70740d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70740f: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 707413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707415: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707419: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70741a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 70741e: mov edx, dword ptr [0xb7e48c] */
  edx = R32((uint32_t)(0xb7e48cu));
/* 707424: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 707428: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 70742c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70742e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 70742f: mov ecx, esi */
  ecx = esi;
/* 707431: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 707435: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x70743bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 70743b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70743c: mov ecx, esi */
  ecx = esi;
/* 70743e: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707441u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707441: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707442: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707443: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707446: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_707470(void) {
  LOAD_REGS();
L_707470: /* 707470: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707473: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707474: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707476: mov esi, ecx */
  esi = ecx;
/* 707478: mov ecx, esp */
  ecx = esp;
/* 70747a: push 0x152 */
  { uint32_t v = 0x152u; esp -= 4; W32(esp, v); }
/* 70747f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x707485u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 707485: mov ecx, esi */
  ecx = esi;
/* 707487: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x70748du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 70748d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70748f: je 0x7074d1 */
  if (zf) goto L_7074d1;
L_707491: /* 707491: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 707495: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 707499: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 70749d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70749f: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 7074a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7074a5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7074a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7074aa: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7074ae: mov edx, dword ptr [0xb7e304] */
  edx = R32((uint32_t)(0xb7e304u));
/* 7074b4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7074b8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7074bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7074be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7074bf: mov ecx, esi */
  ecx = esi;
/* 7074c1: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7074c5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7074cbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7074cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7074cc: mov ecx, esi */
  ecx = esi;
/* 7074ce: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7074d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7074d1: /* 7074d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7074d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7074d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7074d6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_707500(void) {
  LOAD_REGS();
L_707500: /* 707500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707502: push 0x9c1731 */
  { uint32_t v = 0x9c1731u; esp -= 4; W32(esp, v); }
/* 707507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70750d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70750e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707515: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707519: mov esi, ecx */
  esi = ecx;
/* 70751b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70751c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707520: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707526u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707526: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 70752a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 707532: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x707538u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 707538: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 70753c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70753d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707541: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 707549: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x70754fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 70754f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 707553: mov eax, dword ptr [0xb7e384] */
  eax = R32((uint32_t)(0xb7e384u));
/* 707558: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70755a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70755c: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 707560: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707563: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 707567: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707568: mov ecx, esi */
  ecx = esi;
/* 70756a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707570u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707571: mov ecx, esi */
  ecx = esi;
/* 707573: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707576u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707576: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 70757a: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 707582: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707588u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707588: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 70758c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70758d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70758e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707595: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707598: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7075d0(void) {
  LOAD_REGS();
L_7075d0: /* 7075d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7075d3: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7075d7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7075db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7075dc: mov esi, ecx */
  esi = ecx;
/* 7075de: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7075e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7075e3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7075e5: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 7075e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7075eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7075ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7075f0: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7075f4: mov edx, dword ptr [0xb7e408] */
  edx = R32((uint32_t)(0xb7e408u));
/* 7075fa: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7075fe: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 707602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707604: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707605: mov ecx, esi */
  ecx = esi;
/* 707607: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70760b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707611u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707612: mov ecx, esi */
  ecx = esi;
/* 707614: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707619: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70761c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_707640(void) {
  LOAD_REGS();
L_707640: /* 707640: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707643: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707644: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707646: mov esi, ecx */
  esi = ecx;
/* 707648: mov ecx, esp */
  ecx = esp;
/* 70764a: push 0x161 */
  { uint32_t v = 0x161u; esp -= 4; W32(esp, v); }
/* 70764f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 707657: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x70765du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 70765d: mov ecx, esi */
  ecx = esi;
/* 70765f: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x707665u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 707665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 707667: je 0x7076a9 */
  if (zf) goto L_7076a9;
L_707669: /* 707669: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 70766d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 707671: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 707675: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707677: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 70767b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70767d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707681: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707682: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 707686: mov edx, dword ptr [0xb7e334] */
  edx = R32((uint32_t)(0xb7e334u));
/* 70768c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 707690: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 707694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707697: mov ecx, esi */
  ecx = esi;
/* 707699: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70769d: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7076a3u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7076a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7076a4: mov ecx, esi */
  ecx = esi;
/* 7076a6: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7076a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7076a9: /* 7076a9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7076ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7076ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7076af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7076b2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7076e0(void) {
  LOAD_REGS();
L_7076e0: /* 7076e0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7076e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7076e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7076e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7076e6: mov esi, ecx */
  esi = ecx;
/* 7076e8: mov ecx, esp */
  ecx = esp;
/* 7076ea: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 7076ef: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7076f7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7076fdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7076fd: mov ecx, esi */
  ecx = esi;
/* 7076ff: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x707705u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 707705: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 707707: je 0x707741 */
  if (zf) goto L_707741;
L_707709: /* 707709: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 70770d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 707711: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 707715: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707717: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707719: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 70771d: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 707721: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707722: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 707726: mov ecx, dword ptr [0xb7e330] */
  ecx = R32((uint32_t)(0xb7e330u));
/* 70772c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70772e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70772f: mov ecx, esi */
  ecx = esi;
/* 707731: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 707735: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x70773bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 70773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70773c: mov ecx, esi */
  ecx = esi;
/* 70773e: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707741u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_707741: /* 707741: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 707745: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707747: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70774a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_707770(void) {
  LOAD_REGS();
L_707770: /* 707770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707772: push 0x9c1758 */
  { uint32_t v = 0x9c1758u; esp -= 4; W32(esp, v); }
/* 707777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70777d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70777e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707785: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707789: mov esi, ecx */
  esi = ecx;
/* 70778b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70778c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707790: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707796u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707796: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 70779a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70779b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 70779f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7077a7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7077adu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7077ad: mov edx, dword ptr [0xb7e4f4] */
  edx = R32((uint32_t)(0xb7e4f4u));
/* 7077b3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7077b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7077b7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7077bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7077bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7077be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7077bf: mov ecx, esi */
  ecx = esi;
/* 7077c1: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7077c7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7077c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7077c8: mov ecx, esi */
  ecx = esi;
/* 7077ca: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7077cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7077cd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7077d1: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 7077d9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7077dfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7077df: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7077e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7077e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7077e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7077ec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7077ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_707830(void) {
  LOAD_REGS();
L_707830: /* 707830: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707834: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707836: mov esi, ecx */
  esi = ecx;
/* 707838: mov ecx, esp */
  ecx = esp;
/* 70783a: push 0x15e */
  { uint32_t v = 0x15eu; esp -= 4; W32(esp, v); }
/* 70783f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x707845u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 707845: mov ecx, esi */
  ecx = esi;
/* 707847: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x70784du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 70784d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70784f: je 0x7078c1 */
  if (zf) goto L_7078c1;
L_707851: /* 707851: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 707855: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 707859: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 70785d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70785f: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 707863: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 707867: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 70786b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 70786f: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 707873: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 707877: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70787b: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 70787f: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 707883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707885: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 707889: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 70788d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 707891: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 707895: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707899: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70789a: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 70789e: mov edx, dword ptr [0xb7e328] */
  edx = R32((uint32_t)(0xb7e328u));
/* 7078a4: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7078a8: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 7078ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7078ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7078af: mov ecx, esi */
  ecx = esi;
/* 7078b1: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 7078b5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7078bbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7078bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7078bc: mov ecx, esi */
  ecx = esi;
/* 7078be: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7078c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7078c1: /* 7078c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7078c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7078c3: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7078c6: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_707900(void) {
  LOAD_REGS();
L_707900: /* 707900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707902: push 0x9c1778 */
  { uint32_t v = 0x9c1778u; esp -= 4; W32(esp, v); }
/* 707907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70790d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70790e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707915: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707919: mov esi, ecx */
  esi = ecx;
/* 70791b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70791c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707920: call 0x6ca0d8 */
  esp -= 4; W32(esp, 0x707925u); SPILL(); f_6ca0d8(); if (g_unwind) return; RELOAD();
/* 707925: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 707929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70792a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 70792e: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 707936: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x70793cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 70793c: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 707940: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 707944: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 707948: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707949: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 70794d: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707953u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707953: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 707957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707958: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 70795c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707962u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707962: mov edx, dword ptr [0xb7e508] */
  edx = R32((uint32_t)(0xb7e508u));
/* 707968: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 70796a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70796c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707973: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707974: mov ecx, esi */
  ecx = esi;
/* 707976: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x70797cu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 70797c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70797d: mov ecx, esi */
  ecx = esi;
/* 70797f: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707982u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707982: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707986: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 70798e: call 0x6c8701 */
  esp -= 4; W32(esp, 0x707993u); SPILL(); f_6c8701(); if (g_unwind) return; RELOAD();
/* 707993: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 707997: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707999: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7079a0: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7079a3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7079e0(void) {
  LOAD_REGS();
L_7079e0: /* 7079e0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7079e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7079e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7079e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7079e6: mov esi, ecx */
  esi = ecx;
/* 7079e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7079e9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7079ed: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7079f3u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7079f3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7079f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7079f9: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 7079fd: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 707a01: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 707a03: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 707a07: mov edx, edi */
  edx = edi;
/* 707a09: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 707a0b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 707a0e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 707a11: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 707a15: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 707a19: mov eax, ebx */
  eax = ebx;
/* 707a1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 707a1d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 707a21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707a23: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 707a27: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 707a2a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 707a2d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 707a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707a32: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 707a36: mov edx, dword ptr [0xb7e36c] */
  edx = R32((uint32_t)(0xb7e36cu));
/* 707a3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707a3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707a3f: mov ecx, esi */
  ecx = esi;
/* 707a41: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 707a45: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707a4bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707a4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707a4c: mov ecx, esi */
  ecx = esi;
/* 707a4e: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x707a51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707a51: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 707a55: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 707a59: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 707a5d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 707a5f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 707a63: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 707a67: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 707a69: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 707a6d: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 707a70: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 707a74: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 707a77: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 707a7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707a7c: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 707a7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707a7f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 707a82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 707a83: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 707a86: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 707a87: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707a8a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_707ac0(void) {
  LOAD_REGS();
L_707ac0: /* 707ac0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707ac2: push 0x9c1798 */
  { uint32_t v = 0x9c1798u; esp -= 4; W32(esp, v); }
/* 707ac7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707acd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707ace: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707ad5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707ad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707ad9: mov esi, ecx */
  esi = ecx;
/* 707adb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707adc: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707ae0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707ae6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707ae6: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 707aea: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 707aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707aef: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 707af3: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 707afb: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 707aff: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707b05u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707b05: mov ecx, dword ptr [0xb7e400] */
  ecx = R32((uint32_t)(0xb7e400u));
/* 707b0b: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 707b0f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707b11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707b13: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 707b17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707b1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707b1b: mov ecx, esi */
  ecx = esi;
/* 707b1d: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 707b21: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707b27u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707b28: mov ecx, esi */
  ecx = esi;
/* 707b2a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707b2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707b2d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707b31: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 707b39: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707b3fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707b3f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 707b43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707b44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707b45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707b4c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707b4f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_707b90(void) {
  LOAD_REGS();
L_707b90: /* 707b90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707b92: push 0x9c17c1 */
  { uint32_t v = 0x9c17c1u; esp -= 4; W32(esp, v); }
/* 707b97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707b9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707b9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707ba5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707ba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707ba9: mov esi, ecx */
  esi = ecx;
/* 707bab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707bac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707bb0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707bb6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707bb6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 707bba: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 707bc2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x707bc8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 707bc8: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 707bcc: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 707bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707bd1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 707bd5: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 707bdd: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 707be1: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707be7u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707be7: mov ecx, dword ptr [0xb7e3c8] */
  ecx = R32((uint32_t)(0xb7e3c8u));
/* 707bed: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 707bf1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707bf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707bf5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 707bf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707bfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707bfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707bfd: mov ecx, esi */
  ecx = esi;
/* 707bff: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 707c03: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707c09u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707c0a: mov ecx, esi */
  ecx = esi;
/* 707c0c: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707c0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707c0f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707c13: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 707c1b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707c21u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707c21: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 707c25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707c26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707c27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707c2e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707c31: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_707c70(void) {
  LOAD_REGS();
L_707c70: /* 707c70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707c72: push 0x9c17f1 */
  { uint32_t v = 0x9c17f1u; esp -= 4; W32(esp, v); }
/* 707c77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707c7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707c85: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707c88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707c89: mov esi, ecx */
  esi = ecx;
/* 707c8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707c8c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707c90: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707c96u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707c96: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 707c9a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 707ca2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x707ca8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 707ca8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 707cac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707cad: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707cb1: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 707cb9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707cbfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707cbf: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 707cc3: mov eax, dword ptr [0xb7e384] */
  eax = R32((uint32_t)(0xb7e384u));
/* 707cc8: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707cca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707ccc: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 707cd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707cd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707cd3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 707cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707cd8: mov ecx, esi */
  ecx = esi;
/* 707cda: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707ce0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707ce1: mov ecx, esi */
  ecx = esi;
/* 707ce3: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707ce6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707ce6: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707cea: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 707cf2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707cf8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707cf8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 707cfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707cfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707cfe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707d05: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707d08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_707d40(void) {
  LOAD_REGS();
L_707d40: /* 707d40: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707d43: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 707d47: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 707d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707d4c: mov esi, ecx */
  esi = ecx;
/* 707d4e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 707d52: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 707d56: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 707d5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707d5b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707d5d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 707d61: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 707d65: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 707d69: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 707d6d: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 707d71: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 707d75: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 707d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707d7b: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 707d7f: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 707d83: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 707d87: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 707d8b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707d8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707d90: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 707d94: mov edx, dword ptr [0xb7e380] */
  edx = R32((uint32_t)(0xb7e380u));
/* 707d9a: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 707d9e: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 707da2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707da4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707da5: mov ecx, esi */
  ecx = esi;
/* 707da7: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 707dab: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707db1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707db1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707db2: mov ecx, esi */
  ecx = esi;
/* 707db4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707db7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707db7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707db8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707db9: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707dbc: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_707de0(void) {
  LOAD_REGS();
L_707de0: /* 707de0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707de2: push 0x9c1818 */
  { uint32_t v = 0x9c1818u; esp -= 4; W32(esp, v); }
/* 707de7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707dee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707df5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707df8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707df9: mov esi, ecx */
  esi = ecx;
/* 707dfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707dfc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707e00: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707e06u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707e06: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 707e0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707e0b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707e0f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 707e17: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707e1du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707e1d: mov edx, dword ptr [0xb7e4c4] */
  edx = R32((uint32_t)(0xb7e4c4u));
/* 707e23: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707e25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707e27: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707e2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707e2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707e2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707e2f: mov ecx, esi */
  ecx = esi;
/* 707e31: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707e37u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707e38: mov ecx, esi */
  ecx = esi;
/* 707e3a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707e3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707e3d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707e41: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 707e49: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707e4fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707e4f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 707e53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707e54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707e55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707e5c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707e5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_707ea0(void) {
  LOAD_REGS();
L_707ea0: /* 707ea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707ea2: push 0x9c1838 */
  { uint32_t v = 0x9c1838u; esp -= 4; W32(esp, v); }
/* 707ea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707eb5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707eb9: mov esi, ecx */
  esi = ecx;
/* 707ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707ebc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707ec0: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707ec6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707ec6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 707eca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707ecb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707ecf: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 707ed7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707eddu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707edd: mov edx, dword ptr [0xb7e4c0] */
  edx = R32((uint32_t)(0xb7e4c0u));
/* 707ee3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707ee5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707ee7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707eeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707eec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707eee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 707eef: mov ecx, esi */
  ecx = esi;
/* 707ef1: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707ef7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707ef7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707ef8: mov ecx, esi */
  ecx = esi;
/* 707efa: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707efd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707f01: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 707f09: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707f0fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707f0f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 707f13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707f14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707f15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707f1c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707f1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_707f60(void) {
  LOAD_REGS();
L_707f60: /* 707f60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 707f62: push 0x9c1858 */
  { uint32_t v = 0x9c1858u; esp -= 4; W32(esp, v); }
/* 707f67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 707f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707f6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 707f75: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 707f78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 707f79: mov esi, ecx */
  esi = ecx;
/* 707f7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 707f7c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707f80: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x707f86u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 707f86: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 707f8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707f8b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 707f8f: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 707f97: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x707f9du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 707f9d: mov cl, byte ptr [esp + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x30u))) & 0xffu);
/* 707fa1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 707fa5: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 707fa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707fa9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 707fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707fae: mov byte ptr [esp + 0x1c], cl */
  W8((uint32_t)(esp + 0x1cu), (ecx & 0xffu));
/* 707fb2: mov ecx, dword ptr [0xb7e3c4] */
  ecx = R32((uint32_t)(0xb7e3c4u));
/* 707fb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 707fba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 707fbb: mov ecx, esi */
  ecx = esi;
/* 707fbd: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 707fc1: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x707fc7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 707fc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 707fc8: mov ecx, esi */
  ecx = esi;
/* 707fca: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x707fcdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 707fcd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 707fd1: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 707fd9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x707fdfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 707fdf: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 707fe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 707fe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 707fe5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 707fec: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 707fef: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_708030(void) {
  LOAD_REGS();
L_708030: /* 708030: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 708032: push 0x9c188a */
  { uint32_t v = 0x9c188au; esp -= 4; W32(esp, v); }
/* 708037: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70803d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70803e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 708045: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 708048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708049: mov esi, ecx */
  esi = ecx;
/* 70804b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70804c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 708050: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x708056u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 708056: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 70805a: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 708062: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x708068u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 708068: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 70806c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70806d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 708071: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* 708079: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x70807fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 70807f: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 708083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 708084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 708088: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x70808eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 70808e: mov eax, dword ptr [0xb7e364] */
  eax = R32((uint32_t)(0xb7e364u));
/* 708093: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 708095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 708097: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 70809b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 70809c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70809e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70809f: mov ecx, esi */
  ecx = esi;
/* 7080a1: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7080a7u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7080a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7080a8: mov ecx, esi */
  ecx = esi;
/* 7080aa: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7080adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7080ad: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7080b1: mov dword ptr [esp + 0x28], 2 */
  W32((uint32_t)(esp + 0x28u), 0x2u);
/* 7080b9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7080bfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7080bf: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7080c3: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 7080cb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7080d1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7080d1: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7080d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7080d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7080d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7080de: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7080e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_708120(void) {
  LOAD_REGS();
L_708120: /* 708120: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708124: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708126: je 0x70812d */
  if (zf) goto L_70812d;
L_708128: /* 708128: jmp 0x6c5fd8 */
  SPILL(); f_6c5fd8(); return;
L_70812d: /* 70812d: ret  */
  esp += 4; SPILL(); return;
}

void f_708140(void) {
  LOAD_REGS();
L_708140: /* 708140: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708144: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708146: je 0x70814d */
  if (zf) goto L_70814d;
L_708148: /* 708148: jmp 0x6c210d */
  SPILL(); f_6c210d(); return;
L_70814d: /* 70814d: ret  */
  esp += 4; SPILL(); return;
}

void f_708160(void) {
  LOAD_REGS();
L_708160: /* 708160: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708164: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708166: je 0x70816d */
  if (zf) goto L_70816d;
L_708168: /* 708168: jmp 0x6c46e7 */
  SPILL(); f_6c46e7(); return;
L_70816d: /* 70816d: ret  */
  esp += 4; SPILL(); return;
}

void f_708180(void) {
  LOAD_REGS();
L_708180: /* 708180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 708182: push 0x9c18be */
  { uint32_t v = 0x9c18beu; esp -= 4; W32(esp, v); }
/* 708187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70818d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70818e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 708195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 708196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708197: mov esi, ecx */
  esi = ecx;
/* 708199: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 70819d: mov dword ptr [esi], 0x9f4b88 */
  W32((uint32_t)(esi), 0x9f4b88u);
/* 7081a3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7081ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7081b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7081b1: push 0x6cb582 */
  { uint32_t v = 0x6cb582u; esp -= 4; W32(esp, v); }
/* 7081b6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7081b8: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7081ba: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 7081bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7081be: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 7081c3: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7081c8u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7081c8: mov ecx, esi */
  ecx = esi;
/* 7081ca: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7081d2: call 0x6caf88 */
  esp -= 4; W32(esp, 0x7081d7u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 7081d7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7081db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7081dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7081e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7081e6: ret  */
  esp += 4; SPILL(); return;
}

void f_708210(void) {
  LOAD_REGS();
L_708210: /* 708210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 708212: push 0x9c18e8 */
  { uint32_t v = 0x9c18e8u; esp -= 4; W32(esp, v); }
/* 708217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70821d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70821e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 708225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 708226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708227: mov esi, ecx */
  esi = ecx;
/* 708229: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 70822d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x708232u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 708232: push 0x6cb582 */
  { uint32_t v = 0x6cb582u; esp -= 4; W32(esp, v); }
/* 708237: push 0x6cafd3 */
  { uint32_t v = 0x6cafd3u; esp -= 4; W32(esp, v); }
/* 70823c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70823e: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 708240: lea eax, [esi + 0x68] */
  eax = (uint32_t)(esi + 0x68u);
/* 708243: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 708244: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 70824c: mov dword ptr [esi], 0x9f4b88 */
  W32((uint32_t)(esi), 0x9f4b88u);
/* 708252: call 0x99cafe */
  esp -= 4; W32(esp, 0x708257u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 708257: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 70825b: mov eax, esi */
  eax = esi;
/* 70825d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70825e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 708265: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 708268: ret  */
  esp += 4; SPILL(); return;
}

void f_708290(void) {
  LOAD_REGS();
L_708290: /* 708290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708291: mov esi, ecx */
  esi = ecx;
/* 708293: call 0x6c6933 */
  esp -= 4; W32(esp, 0x708298u); SPILL(); f_6c6933(); if (g_unwind) return; RELOAD();
/* 708298: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 70829d: je 0x7082ae */
  if (zf) goto L_7082ae;
L_70829f: /* 70829f: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 7082a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7082a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7082abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7082ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7082ae: /* 7082ae: mov eax, esi */
  eax = esi;
/* 7082b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7082b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7082d0(void) {
  LOAD_REGS();
L_7082d0: /* 7082d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7082d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7082d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7082d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7082d9: mov esi, ecx */
  esi = ecx;
/* 7082db: je 0x708310 */
  if (zf) goto L_708310;
L_7082dd: /* 7082dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7082e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7082e1: push 0x6c6933 */
  { uint32_t v = 0x6c6933u; esp -= 4; W32(esp, v); }
/* 7082e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7082e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7082ea: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 7082ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7082f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7082f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7082f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7082f8: je 0x708308 */
  if (zf) goto L_708308;
L_7082fa: /* 7082fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 708300: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 708302: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 708304: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 708305: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x708308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_708308: /* 708308: mov eax, edi */
  eax = edi;
/* 70830a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70830b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70830c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70830d: ret 4 */
  esp += 8; SPILL(); return;
L_708310: /* 708310: mov ecx, esi */
  ecx = esi;
/* 708312: call 0x6c6933 */
  esp -= 4; W32(esp, 0x708317u); SPILL(); f_6c6933(); if (g_unwind) return; RELOAD();
/* 708317: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 70831a: je 0x70832b */
  if (zf) goto L_70832b;
L_70831c: /* 70831c: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* 708321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708322: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x708328u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 708328: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_70832b: /* 70832b: mov eax, esi */
  eax = esi;
/* 70832d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70832e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70832f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_708360(void) {
  LOAD_REGS();
L_708360: /* 708360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708364: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708366: je 0x70836d */
  if (zf) goto L_70836d;
L_708368: /* 708368: jmp 0x6c4d13 */
  SPILL(); f_6c4d13(); return;
L_70836d: /* 70836d: ret  */
  esp += 4; SPILL(); return;
}

void f_708380(void) {
  LOAD_REGS();
L_708380: /* 708380: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708384: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708386: je 0x70838d */
  if (zf) goto L_70838d;
L_708388: /* 708388: jmp 0x6cc1da */
  SPILL(); f_6cc1da(); return;
L_70838d: /* 70838d: ret  */
  esp += 4; SPILL(); return;
}

void f_7083a0(void) {
  LOAD_REGS();
L_7083a0: /* 7083a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7083a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7083a6: je 0x7083ad */
  if (zf) goto L_7083ad;
L_7083a8: /* 7083a8: jmp 0x6c8c15 */
  SPILL(); f_6c8c15(); return;
L_7083ad: /* 7083ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7083c0(void) {
  LOAD_REGS();
L_7083c0: /* 7083c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7083c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7083c6: je 0x7083cd */
  if (zf) goto L_7083cd;
L_7083c8: /* 7083c8: jmp 0x6cb64f */
  SPILL(); f_6cb64f(); return;
L_7083cd: /* 7083cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7083e0(void) {
  LOAD_REGS();
L_7083e0: /* 7083e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7083e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7083e6: je 0x7083ed */
  if (zf) goto L_7083ed;
L_7083e8: /* 7083e8: jmp 0x6c7bc6 */
  SPILL(); f_6c7bc6(); return;
L_7083ed: /* 7083ed: ret  */
  esp += 4; SPILL(); return;
}

void f_708400(void) {
  LOAD_REGS();
L_708400: /* 708400: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708404: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708406: je 0x70840d */
  if (zf) goto L_70840d;
L_708408: /* 708408: jmp 0x6c1cd0 */
  SPILL(); f_6c1cd0(); return;
L_70840d: /* 70840d: ret  */
  esp += 4; SPILL(); return;
}

void f_708420(void) {
  LOAD_REGS();
L_708420: /* 708420: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708424: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708426: je 0x70842d */
  if (zf) goto L_70842d;
L_708428: /* 708428: jmp 0x6c560a */
  SPILL(); f_6c560a(); return;
L_70842d: /* 70842d: ret  */
  esp += 4; SPILL(); return;
}

void f_708440(void) {
  LOAD_REGS();
L_708440: /* 708440: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708446: je 0x70844d */
  if (zf) goto L_70844d;
L_708448: /* 708448: jmp 0x6c85c1 */
  SPILL(); f_6c85c1(); return;
L_70844d: /* 70844d: ret  */
  esp += 4; SPILL(); return;
}

void f_708460(void) {
  LOAD_REGS();
L_708460: /* 708460: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708464: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708466: je 0x70846d */
  if (zf) goto L_70846d;
L_708468: /* 708468: jmp 0x6cc97d */
  SPILL(); f_6cc97d(); return;
L_70846d: /* 70846d: ret  */
  esp += 4; SPILL(); return;
}

void f_708480(void) {
  LOAD_REGS();
L_708480: /* 708480: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708484: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708486: je 0x70848d */
  if (zf) goto L_70848d;
L_708488: /* 708488: jmp 0x6c6622 */
  SPILL(); f_6c6622(); return;
L_70848d: /* 70848d: ret  */
  esp += 4; SPILL(); return;
}

void f_7084a0(void) {
  LOAD_REGS();
L_7084a0: /* 7084a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7084a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7084a6: je 0x7084ad */
  if (zf) goto L_7084ad;
L_7084a8: /* 7084a8: jmp 0x6c1e3d */
  SPILL(); f_6c1e3d(); return;
L_7084ad: /* 7084ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7084c0(void) {
  LOAD_REGS();
L_7084c0: /* 7084c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7084c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7084c6: je 0x7084cd */
  if (zf) goto L_7084cd;
L_7084c8: /* 7084c8: jmp 0x6c34c2 */
  SPILL(); f_6c34c2(); return;
L_7084cd: /* 7084cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7084e0(void) {
  LOAD_REGS();
L_7084e0: /* 7084e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7084e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7084e6: je 0x7084ed */
  if (zf) goto L_7084ed;
L_7084e8: /* 7084e8: jmp 0x6c17c6 */
  SPILL(); f_6c17c6(); return;
L_7084ed: /* 7084ed: ret  */
  esp += 4; SPILL(); return;
}

void f_708500(void) {
  LOAD_REGS();
L_708500: /* 708500: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708504: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708506: je 0x70850d */
  if (zf) goto L_70850d;
L_708508: /* 708508: jmp 0x6c4075 */
  SPILL(); f_6c4075(); return;
L_70850d: /* 70850d: ret  */
  esp += 4; SPILL(); return;
}

void f_708520(void) {
  LOAD_REGS();
L_708520: /* 708520: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708524: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708526: je 0x70852d */
  if (zf) goto L_70852d;
L_708528: /* 708528: jmp 0x6c73d8 */
  SPILL(); f_6c73d8(); return;
L_70852d: /* 70852d: ret  */
  esp += 4; SPILL(); return;
}

void f_708540(void) {
  LOAD_REGS();
L_708540: /* 708540: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708546: je 0x70854d */
  if (zf) goto L_70854d;
L_708548: /* 708548: jmp 0x6c731a */
  SPILL(); f_6c731a(); return;
L_70854d: /* 70854d: ret  */
  esp += 4; SPILL(); return;
}

void f_708560(void) {
  LOAD_REGS();
L_708560: /* 708560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708564: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708566: je 0x70856d */
  if (zf) goto L_70856d;
L_708568: /* 708568: jmp 0x6c6e65 */
  SPILL(); f_6c6e65(); return;
L_70856d: /* 70856d: ret  */
  esp += 4; SPILL(); return;
}

void f_708580(void) {
  LOAD_REGS();
L_708580: /* 708580: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708584: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708586: je 0x70858d */
  if (zf) goto L_70858d;
L_708588: /* 708588: jmp 0x6c587b */
  SPILL(); f_6c587b(); return;
L_70858d: /* 70858d: ret  */
  esp += 4; SPILL(); return;
}

void f_7085a0(void) {
  LOAD_REGS();
L_7085a0: /* 7085a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7085a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7085a6: je 0x7085ad */
  if (zf) goto L_7085ad;
L_7085a8: /* 7085a8: jmp 0x6c9327 */
  SPILL(); f_6c9327(); return;
L_7085ad: /* 7085ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7085c0(void) {
  LOAD_REGS();
L_7085c0: /* 7085c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7085c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7085c6: je 0x7085cd */
  if (zf) goto L_7085cd;
L_7085c8: /* 7085c8: jmp 0x6ccdd3 */
  SPILL(); f_6ccdd3(); return;
L_7085cd: /* 7085cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7085e0(void) {
  LOAD_REGS();
L_7085e0: /* 7085e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7085e1: mov esi, ecx */
  esi = ecx;
/* 7085e3: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7085e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7085e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7085e9: je 0x7085f4 */
  if (zf) goto L_7085f4;
L_7085eb: /* 7085eb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7085ed: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7085f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7085f0: mov edi, eax */
  edi = eax;
/* 7085f2: jmp 0x7085f6 */
  goto L_7085f6;
L_7085f4: /* 7085f4: xor edi, edi */
  edi = 0;
L_7085f6: /* 7085f6: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7085f9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7085fb: je 0x708604 */
  if (zf) goto L_708604;
L_7085fd: /* 7085fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7085ff: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x708602u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 708602: jmp 0x708606 */
  goto L_708606;
L_708604: /* 708604: xor eax, eax */
  eax = 0;
L_708606: /* 708606: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 708608: jge 0x70860c */
  if ((sf == of)) goto L_70860c;
L_70860a: /* 70860a: mov eax, edi */
  eax = edi;
L_70860c: /* 70860c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70860d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70860e: ret  */
  esp += 4; SPILL(); return;
}

void f_708620(void) {
  LOAD_REGS();
L_708620: /* 708620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 708621: mov esi, ecx */
  esi = ecx;
/* 708623: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 708626: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708628: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 708629: je 0x708634 */
  if (zf) goto L_708634;
L_70862b: /* 70862b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 70862d: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x708630u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 708630: mov edi, eax */
  edi = eax;
/* 708632: jmp 0x708636 */
  goto L_708636;
L_708634: /* 708634: xor edi, edi */
  edi = 0;
L_708636: /* 708636: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 708639: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70863b: je 0x708644 */
  if (zf) goto L_708644;
L_70863d: /* 70863d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70863f: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x708642u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 708642: jmp 0x708646 */
  goto L_708646;
L_708644: /* 708644: xor eax, eax */
  eax = 0;
L_708646: /* 708646: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 708648: jge 0x70864c */
  if ((sf == of)) goto L_70864c;
L_70864a: /* 70864a: mov eax, edi */
  eax = edi;
L_70864c: /* 70864c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70864d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70864e: ret  */
  esp += 4; SPILL(); return;
}

void f_708660(void) {
  LOAD_REGS();
L_708660: /* 708660: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708666: je 0x70866d */
  if (zf) goto L_70866d;
L_708668: /* 708668: jmp 0x6c2f95 */
  SPILL(); f_6c2f95(); return;
L_70866d: /* 70866d: ret  */
  esp += 4; SPILL(); return;
}

void f_708680(void) {
  LOAD_REGS();
L_708680: /* 708680: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708684: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708686: je 0x70868d */
  if (zf) goto L_70868d;
L_708688: /* 708688: jmp 0x6c9dcc */
  SPILL(); f_6c9dcc(); return;
L_70868d: /* 70868d: ret  */
  esp += 4; SPILL(); return;
}

void f_7086a0(void) {
  LOAD_REGS();
L_7086a0: /* 7086a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7086a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7086a6: je 0x7086ad */
  if (zf) goto L_7086ad;
L_7086a8: /* 7086a8: jmp 0x6c57e0 */
  SPILL(); f_6c57e0(); return;
L_7086ad: /* 7086ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7086c0(void) {
  LOAD_REGS();
L_7086c0: /* 7086c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7086c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7086c6: je 0x7086cd */
  if (zf) goto L_7086cd;
L_7086c8: /* 7086c8: jmp 0x6ca2f4 */
  SPILL(); f_6ca2f4(); return;
L_7086cd: /* 7086cd: ret  */
  esp += 4; SPILL(); return;
}

void f_7086e0(void) {
  LOAD_REGS();
L_7086e0: /* 7086e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7086e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7086e6: je 0x7086ed */
  if (zf) goto L_7086ed;
L_7086e8: /* 7086e8: jmp 0x6cad03 */
  SPILL(); f_6cad03(); return;
L_7086ed: /* 7086ed: ret  */
  esp += 4; SPILL(); return;
}

void f_708700(void) {
  LOAD_REGS();
L_708700: /* 708700: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708704: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708706: je 0x70870d */
  if (zf) goto L_70870d;
L_708708: /* 708708: jmp 0x6c4f70 */
  SPILL(); f_6c4f70(); return;
L_70870d: /* 70870d: ret  */
  esp += 4; SPILL(); return;
}

void f_708720(void) {
  LOAD_REGS();
L_708720: /* 708720: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708724: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708726: je 0x70872d */
  if (zf) goto L_70872d;
L_708728: /* 708728: jmp 0x6c6b54 */
  SPILL(); f_6c6b54(); return;
L_70872d: /* 70872d: ret  */
  esp += 4; SPILL(); return;
}

void f_708740(void) {
  LOAD_REGS();
L_708740: /* 708740: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 708744: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 708746: je 0x70874d */
  if (zf) goto L_70874d;
L_708748: /* 708748: jmp 0x6c1b6d */
  SPILL(); f_6c1b6d(); return;
L_70874d: /* 70874d: ret  */
  esp += 4; SPILL(); return;
}
