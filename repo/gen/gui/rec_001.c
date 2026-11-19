#include "recomp.h"
#include "rec_mod.h"

void f_f79860(void) {
  LOAD_REGS();
L_f79860: /* f79860: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f79864: ret  */
  esp += 4; SPILL(); return;
}

void f_f79880(void) {
  LOAD_REGS();
L_f79880: /* f79880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79882: push 0xf98bb7 */
  { uint32_t v = 0xf98bb7u; esp -= 4; W32(esp, v); }
/* f79887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7988d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7988e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79896: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79897: mov esi, ecx */
  esi = ecx;
/* f79899: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7989d: mov dword ptr [esi], 0xfa1730 */
  W32((uint32_t)(esi), 0xfa1730u);
/* f798a3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f798ab: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf798b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f798b1: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f798b7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f798bc: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf798c2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f798c2: mov ecx, esi */
  ecx = esi;
/* f798c4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f798cc: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf798d1u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f798d1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f798d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f798d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f798dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f798e0: ret  */
  esp += 4; SPILL(); return;
}

void f_f79910(void) {
  LOAD_REGS();
L_f79910: /* f79910: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79912: push 0xf98bd8 */
  { uint32_t v = 0xf98bd8u; esp -= 4; W32(esp, v); }
/* f79917: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7991d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7991e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79927: mov esi, ecx */
  esi = ecx;
/* f79929: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7992d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf79932u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f79932: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79938: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f79940: mov dword ptr [esi], 0xfa1730 */
  W32((uint32_t)(esi), 0xfa1730u);
/* f79946: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7994cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7994c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f79950: mov eax, esi */
  eax = esi;
/* f79952: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79953: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7995a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7995d: ret  */
  esp += 4; SPILL(); return;
}

void f_f79980(void) {
  LOAD_REGS();
L_f79980: /* f79980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79982: push 0xf98bf8 */
  { uint32_t v = 0xf98bf8u; esp -= 4; W32(esp, v); }
/* f79987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7998d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7998e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79998: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f7999c: mov esi, ecx */
  esi = ecx;
/* f7999e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7999f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f799a3: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf799a8u); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f799a8: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f799ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f799af: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f799b5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f799bd: mov dword ptr [esi], 0xfa1730 */
  W32((uint32_t)(esi), 0xfa1730u);
/* f799c3: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf799c9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f799c9: mov cl, byte ptr [edi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d8u))) & 0xffu);
/* f799cf: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f799d5: mov byte ptr [esi + 0x1d8], cl */
  W8((uint32_t)(esi + 0x1d8u), (ecx & 0xffu));
/* f799db: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* f799e1: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* f799e7: xor eax, dword ptr [edi + 0x1e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f799ed: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* f799f3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f799f6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f799f8: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f799fe: mov eax, ecx */
  eax = ecx;
/* f79a00: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f79a06: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f79a08: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f79a0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f79a0d: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f79a13: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f79a19: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f79a1d: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f79a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79a24: mov eax, esi */
  eax = esi;
/* f79a26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79a27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f79a2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79a31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79a70(void) {
  LOAD_REGS();
L_f79a70: /* f79a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79a71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79a72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f79a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79a77: mov esi, ecx */
  esi = ecx;
/* f79a79: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf79a7eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f79a7e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f79a84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79a85: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79a8b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf79a91u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f79a91: mov cl, byte ptr [edi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d8u))) & 0xffu);
/* f79a97: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f79a9d: mov byte ptr [esi + 0x1d8], cl */
  W8((uint32_t)(esi + 0x1d8u), (ecx & 0xffu));
/* f79aa3: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* f79aa9: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* f79aaf: xor eax, dword ptr [edi + 0x1e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f79ab5: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* f79abb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f79abe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f79ac0: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f79ac6: mov eax, ecx */
  eax = ecx;
/* f79ac8: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f79ace: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f79ad0: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f79ad3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f79ad5: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f79adb: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f79ae1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79ae2: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f79ae8: mov eax, esi */
  eax = esi;
/* f79aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79aeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79b10(void) {
  LOAD_REGS();
L_f79b10: /* f79b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79b11: mov esi, ecx */
  esi = ecx;
/* f79b13: call 0xf717f8 */
  esp -= 4; W32(esp, 0xf79b18u); SPILL(); f_f717f8(); if (g_unwind) return; RELOAD();
/* f79b18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79b1d: je 0xf79b2e */
  if (zf) goto L_f79b2e;
L_f79b1f: /* f79b1f: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f79b24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79b25: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf79b2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f79b2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f79b2e: /* f79b2e: mov eax, esi */
  eax = esi;
/* f79b30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79b31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79b50(void) {
  LOAD_REGS();
L_f79b50: /* f79b50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f79b51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f79b55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79b58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79b59: mov esi, ecx */
  esi = ecx;
/* f79b5b: je 0xf79b90 */
  if (zf) goto L_f79b90;
L_f79b5d: /* f79b5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f79b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79b61: push 0xf717f8 */
  { uint32_t v = 0xf717f8u; esp -= 4; W32(esp, v); }
/* f79b66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f79b69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79b6a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f79b6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79b70: call 0xf97850 */
  esp -= 4; W32(esp, 0xf79b75u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f79b75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79b78: je 0xf79b88 */
  if (zf) goto L_f79b88;
L_f79b7a: /* f79b7a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f79b80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f79b82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f79b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79b85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf79b88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f79b88: /* f79b88: mov eax, edi */
  eax = edi;
/* f79b8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79b8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79b8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f79b8d: ret 4 */
  esp += 8; SPILL(); return;
L_f79b90: /* f79b90: mov ecx, esi */
  ecx = esi;
/* f79b92: call 0xf717f8 */
  esp -= 4; W32(esp, 0xf79b97u); SPILL(); f_f717f8(); if (g_unwind) return; RELOAD();
/* f79b97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79b9a: je 0xf79bab */
  if (zf) goto L_f79bab;
L_f79b9c: /* f79b9c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f79ba1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79ba2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf79ba8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f79ba8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f79bab: /* f79bab: mov eax, esi */
  eax = esi;
/* f79bad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79bae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f79baf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79be0(void) {
  LOAD_REGS();
L_f79be0: /* f79be0: mov eax, dword ptr [0xfba36c] */
  eax = R32((uint32_t)(0xfba36cu));
/* f79be5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79be9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79bed: mov esi, ecx */
  esi = ecx;
/* f79bef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f79bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79bf2: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf79bf8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f79bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79bf9: mov ecx, esi */
  ecx = esi;
/* f79bfb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf79bfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f79bfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79bff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79c00: ret  */
  esp += 4; SPILL(); return;
}

void f_f79c20(void) {
  LOAD_REGS();
L_f79c20: /* f79c20: mov eax, dword ptr [0xfba4a8] */
  eax = R32((uint32_t)(0xfba4a8u));
/* f79c25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79c26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79c27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c2d: mov esi, ecx */
  esi = ecx;
/* f79c2f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f79c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79c32: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf79c38u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f79c38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79c39: mov ecx, esi */
  ecx = esi;
/* f79c3b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf79c3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f79c3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79c3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79c40: ret  */
  esp += 4; SPILL(); return;
}

void f_f79c60(void) {
  LOAD_REGS();
L_f79c60: /* f79c60: mov eax, 0xfbcee8 */
  eax = 0xfbcee8u;
/* f79c65: ret  */
  esp += 4; SPILL(); return;
}

void f_f79c80(void) {
  LOAD_REGS();
L_f79c80: /* f79c80: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f79c85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f79c87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f79c8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f79c8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79c94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f79c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79c9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f79c9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79c9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79c9d: push 0xfbcee8 */
  { uint32_t v = 0xfbcee8u; esp -= 4; W32(esp, v); }
/* f79ca2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf79ca8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f79ca8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79cab: ret  */
  esp += 4; SPILL(); return;
}

void f_f79cc0(void) {
  LOAD_REGS();
L_f79cc0: /* f79cc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f79cc4: ret  */
  esp += 4; SPILL(); return;
}

void f_f79ce0(void) {
  LOAD_REGS();
L_f79ce0: /* f79ce0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79ce2: push 0xf98c27 */
  { uint32_t v = 0xf98c27u; esp -= 4; W32(esp, v); }
/* f79ce7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f79ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79cee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79cf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79cf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79cf7: mov esi, ecx */
  esi = ecx;
/* f79cf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f79cfd: mov dword ptr [esi], 0xfa1820 */
  W32((uint32_t)(esi), 0xfa1820u);
/* f79d03: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* f79d0b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf79d11u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f79d11: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79d17: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f79d1c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf79d22u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f79d22: mov ecx, esi */
  ecx = esi;
/* f79d24: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f79d2c: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf79d31u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f79d31: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f79d35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79d36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f79d3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79d40: ret  */
  esp += 4; SPILL(); return;
}

void f_f79d70(void) {
  LOAD_REGS();
L_f79d70: /* f79d70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79d72: push 0xf98c48 */
  { uint32_t v = 0xf98c48u; esp -= 4; W32(esp, v); }
/* f79d77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f79d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79d7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79d85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79d87: mov esi, ecx */
  esi = ecx;
/* f79d89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f79d8d: call 0xf716fe */
  esp -= 4; W32(esp, 0xf79d92u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f79d92: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79d98: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f79da0: mov dword ptr [esi], 0xfa1820 */
  W32((uint32_t)(esi), 0xfa1820u);
/* f79da6: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf79dacu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f79dac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f79db0: mov eax, esi */
  eax = esi;
/* f79db2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79db3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f79dba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79dbd: ret  */
  esp += 4; SPILL(); return;
}

void f_f79de0(void) {
  LOAD_REGS();
L_f79de0: /* f79de0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79de2: push 0xf98c68 */
  { uint32_t v = 0xf98c68u; esp -= 4; W32(esp, v); }
/* f79de7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f79ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79dee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f79df5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79df7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79df8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f79dfc: mov esi, ecx */
  esi = ecx;
/* f79dfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79dff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f79e03: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf79e08u); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f79e08: add edi, 0x1cc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f79e0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79e0f: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79e15: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f79e1d: mov dword ptr [esi], 0xfa1820 */
  W32((uint32_t)(esi), 0xfa1820u);
/* f79e23: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf79e29u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f79e29: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f79e2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79e2e: mov eax, esi */
  eax = esi;
/* f79e30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79e31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f79e38: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79e3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79e60(void) {
  LOAD_REGS();
L_f79e60: /* f79e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79e61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79e62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f79e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79e67: mov esi, ecx */
  esi = ecx;
/* f79e69: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf79e6eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f79e6e: add edi, 0x1cc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1ccu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f79e74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79e75: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f79e7b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf79e81u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f79e81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79e82: mov eax, esi */
  eax = esi;
/* f79e84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79e85: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79ea0(void) {
  LOAD_REGS();
L_f79ea0: /* f79ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79ea1: mov esi, ecx */
  esi = ecx;
/* f79ea3: call 0xf71a55 */
  esp -= 4; W32(esp, 0xf79ea8u); SPILL(); f_f71a55(); if (g_unwind) return; RELOAD();
/* f79ea8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79ead: je 0xf79ebe */
  if (zf) goto L_f79ebe;
L_f79eaf: /* f79eaf: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f79eb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79eb5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf79ebbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f79ebb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f79ebe: /* f79ebe: mov eax, esi */
  eax = esi;
/* f79ec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79ec1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79ee0(void) {
  LOAD_REGS();
L_f79ee0: /* f79ee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f79ee1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f79ee5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79ee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79ee9: mov esi, ecx */
  esi = ecx;
/* f79eeb: je 0xf79f20 */
  if (zf) goto L_f79f20;
L_f79eed: /* f79eed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f79ef0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79ef1: push 0xf71a55 */
  { uint32_t v = 0xf71a55u; esp -= 4; W32(esp, v); }
/* f79ef6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f79ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79efa: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f79eff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79f00: call 0xf97850 */
  esp -= 4; W32(esp, 0xf79f05u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f79f05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79f08: je 0xf79f18 */
  if (zf) goto L_f79f18;
L_f79f0a: /* f79f0a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f79f10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f79f12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f79f14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f79f15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf79f18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f79f18: /* f79f18: mov eax, edi */
  eax = edi;
/* f79f1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f79f1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79f1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f79f1d: ret 4 */
  esp += 8; SPILL(); return;
L_f79f20: /* f79f20: mov ecx, esi */
  ecx = esi;
/* f79f22: call 0xf71a55 */
  esp -= 4; W32(esp, 0xf79f27u); SPILL(); f_f71a55(); if (g_unwind) return; RELOAD();
/* f79f27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f79f2a: je 0xf79f3b */
  if (zf) goto L_f79f3b;
L_f79f2c: /* f79f2c: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f79f31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f79f32: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf79f38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f79f38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f79f3b: /* f79f3b: mov eax, esi */
  eax = esi;
/* f79f3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f79f3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f79f3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f79f70(void) {
  LOAD_REGS();
L_f79f70: /* f79f70: mov eax, 0xfbbf48 */
  eax = 0xfbbf48u;
/* f79f75: ret  */
  esp += 4; SPILL(); return;
}

void f_f79f90(void) {
  LOAD_REGS();
L_f79f90: /* f79f90: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f79f95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f79f97: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f79f9b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f79f9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79fa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79fa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79fa4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f79fa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f79faa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f79fab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79fac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f79fad: push 0xfbbf48 */
  { uint32_t v = 0xfbbf48u; esp -= 4; W32(esp, v); }
/* f79fb2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf79fb8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f79fb8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f79fbb: ret  */
  esp += 4; SPILL(); return;
}

void f_f79fd0(void) {
  LOAD_REGS();
L_f79fd0: /* f79fd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f79fd4: ret  */
  esp += 4; SPILL(); return;
}

void f_f79ff0(void) {
  LOAD_REGS();
L_f79ff0: /* f79ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f79ff2: push 0xf98c88 */
  { uint32_t v = 0xf98c88u; esp -= 4; W32(esp, v); }
/* f79ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f79ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f79ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7a005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a007: mov esi, ecx */
  esi = ecx;
/* f7a009: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7a00d: mov dword ptr [esi], 0xfa1910 */
  W32((uint32_t)(esi), 0xfa1910u);
/* f7a013: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7a01b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7a021u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7a021: mov ecx, esi */
  ecx = esi;
/* f7a023: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7a02b: call 0xf71a55 */
  esp -= 4; W32(esp, 0xf7a030u); SPILL(); f_f71a55(); if (g_unwind) return; RELOAD();
/* f7a030: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7a034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a035: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7a03c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a03f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a060(void) {
  LOAD_REGS();
L_f7a060: /* f7a060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a061: mov esi, ecx */
  esi = ecx;
/* f7a063: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7a068u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7a068: mov dword ptr [esi], 0xfa1910 */
  W32((uint32_t)(esi), 0xfa1910u);
/* f7a06e: mov eax, esi */
  eax = esi;
/* f7a070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a071: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a090(void) {
  LOAD_REGS();
L_f7a090: /* f7a090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a092: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a097: mov esi, ecx */
  esi = ecx;
/* f7a099: call 0xf7164a */
  esp -= 4; W32(esp, 0xf7a09eu); SPILL(); f_f7164a(); if (g_unwind) return; RELOAD();
/* f7a09e: mov eax, dword ptr [esi + 0x1d8] */
  eax = R32((uint32_t)(esi + 0x1d8u));
/* f7a0a4: mov dword ptr [esi], 0xfa1910 */
  W32((uint32_t)(esi), 0xfa1910u);
/* f7a0aa: xor eax, dword ptr [edi + 0x1d8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1d8u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a0b0: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f7a0b6: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a0b9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a0bb: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* f7a0c1: mov eax, ecx */
  eax = ecx;
/* f7a0c3: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* f7a0c9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a0cb: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7a0ce: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a0d0: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* f7a0d6: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* f7a0dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a0dd: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* f7a0e3: mov eax, esi */
  eax = esi;
/* f7a0e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a0e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a110(void) {
  LOAD_REGS();
L_f7a110: /* f7a110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a112: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a116: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a117: mov esi, ecx */
  esi = ecx;
/* f7a119: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7a11eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7a11e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f7a124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a125: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7a12b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7a131u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7a131: mov edx, dword ptr [edi + 0x1d8] */
  edx = R32((uint32_t)(edi + 0x1d8u));
/* f7a137: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* f7a13d: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a13f: mov edx, dword ptr [esi + 0x1d8] */
  edx = R32((uint32_t)(esi + 0x1d8u));
/* f7a145: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7a148: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7a14a: mov dword ptr [esi + 0x1d8], edx */
  W32((uint32_t)(esi + 0x1d8u), edx);
/* f7a150: mov eax, edx */
  eax = edx;
/* f7a152: mov edx, dword ptr [edi + 0x1d8] */
  edx = R32((uint32_t)(edi + 0x1d8u));
/* f7a158: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7a15a: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7a15d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7a15f: mov dword ptr [esi + 0x1d8], edx */
  W32((uint32_t)(esi + 0x1d8u), edx);
/* f7a165: mov eax, dword ptr [edi + 0x1dc] */
  eax = R32((uint32_t)(edi + 0x1dcu));
/* f7a16b: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* f7a171: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a172: mov eax, esi */
  eax = esi;
/* f7a174: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a1a0(void) {
  LOAD_REGS();
L_f7a1a0: /* f7a1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a1a1: mov esi, ecx */
  esi = ecx;
/* f7a1a3: call 0xf7191f */
  esp -= 4; W32(esp, 0xf7a1a8u); SPILL(); f_f7191f(); if (g_unwind) return; RELOAD();
/* f7a1a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a1ad: je 0xf7a1be */
  if (zf) goto L_f7a1be;
L_f7a1af: /* f7a1af: push 0x1e0 */
  { uint32_t v = 0x1e0u; esp -= 4; W32(esp, v); }
/* f7a1b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a1b5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a1bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a1bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a1be: /* f7a1be: mov eax, esi */
  eax = esi;
/* f7a1c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a1c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a1e0(void) {
  LOAD_REGS();
L_f7a1e0: /* f7a1e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7a1e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7a1e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a1e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a1e9: mov esi, ecx */
  esi = ecx;
/* f7a1eb: je 0xf7a220 */
  if (zf) goto L_f7a220;
L_f7a1ed: /* f7a1ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7a1f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a1f1: push 0xf7191f */
  { uint32_t v = 0xf7191fu; esp -= 4; W32(esp, v); }
/* f7a1f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7a1f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a1fa: push 0x1e0 */
  { uint32_t v = 0x1e0u; esp -= 4; W32(esp, v); }
/* f7a1ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a200: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7a205u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7a205: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a208: je 0xf7a218 */
  if (zf) goto L_f7a218;
L_f7a20a: /* f7a20a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7a210: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7a212: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7a214: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a215: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7a218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7a218: /* f7a218: mov eax, edi */
  eax = edi;
/* f7a21a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a21b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a21c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a21d: ret 4 */
  esp += 8; SPILL(); return;
L_f7a220: /* f7a220: mov ecx, esi */
  ecx = esi;
/* f7a222: call 0xf7191f */
  esp -= 4; W32(esp, 0xf7a227u); SPILL(); f_f7191f(); if (g_unwind) return; RELOAD();
/* f7a227: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a22a: je 0xf7a23b */
  if (zf) goto L_f7a23b;
L_f7a22c: /* f7a22c: push 0x1e0 */
  { uint32_t v = 0x1e0u; esp -= 4; W32(esp, v); }
/* f7a231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a232: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a238u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a238: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a23b: /* f7a23b: mov eax, esi */
  eax = esi;
/* f7a23d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a23e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a23f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a270(void) {
  LOAD_REGS();
L_f7a270: /* f7a270: mov eax, 0xfc17a0 */
  eax = 0xfc17a0u;
/* f7a275: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a290(void) {
  LOAD_REGS();
L_f7a290: /* f7a290: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7a295: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7a297: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7a29b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7a29f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a2a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a2a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a2a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7a2a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a2aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7a2ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a2ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a2ad: push 0xfc17a0 */
  { uint32_t v = 0xfc17a0u; esp -= 4; W32(esp, v); }
/* f7a2b2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7a2b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7a2b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a2bb: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a2d0(void) {
  LOAD_REGS();
L_f7a2d0: /* f7a2d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7a2d4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a2f0(void) {
  LOAD_REGS();
L_f7a2f0: /* f7a2f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7a2f2: push 0xf98ca8 */
  { uint32_t v = 0xf98ca8u; esp -= 4; W32(esp, v); }
/* f7a2f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7a2fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a2fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7a305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a307: mov esi, ecx */
  esi = ecx;
/* f7a309: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7a30d: mov dword ptr [esi], 0xfa1a00 */
  W32((uint32_t)(esi), 0xfa1a00u);
/* f7a313: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7a31b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7a321u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7a321: mov ecx, esi */
  ecx = esi;
/* f7a323: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7a32b: call 0xf71a55 */
  esp -= 4; W32(esp, 0xf7a330u); SPILL(); f_f71a55(); if (g_unwind) return; RELOAD();
/* f7a330: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7a334: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a335: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7a33c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a33f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a360(void) {
  LOAD_REGS();
L_f7a360: /* f7a360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a361: mov esi, ecx */
  esi = ecx;
/* f7a363: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7a368u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7a368: mov dword ptr [esi], 0xfa1a00 */
  W32((uint32_t)(esi), 0xfa1a00u);
/* f7a36e: mov eax, esi */
  eax = esi;
/* f7a370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a371: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a390(void) {
  LOAD_REGS();
L_f7a390: /* f7a390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a391: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a392: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a396: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a397: mov esi, ecx */
  esi = ecx;
/* f7a399: call 0xf7164a */
  esp -= 4; W32(esp, 0xf7a39eu); SPILL(); f_f7164a(); if (g_unwind) return; RELOAD();
/* f7a39e: mov edx, dword ptr [esi + 0x1e0] */
  edx = R32((uint32_t)(esi + 0x1e0u));
/* f7a3a4: mov dword ptr [esi], 0xfa1a00 */
  W32((uint32_t)(esi), 0xfa1a00u);
/* f7a3aa: mov eax, dword ptr [edi + 0x1d8] */
  eax = R32((uint32_t)(edi + 0x1d8u));
/* f7a3b0: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* f7a3b6: mov cl, byte ptr [edi + 0x1dc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1dcu))) & 0xffu);
/* f7a3bc: mov byte ptr [esi + 0x1dc], cl */
  W8((uint32_t)(esi + 0x1dcu), (ecx & 0xffu));
/* f7a3c2: xor edx, dword ptr [edi + 0x1e0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7a3c8: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f7a3ce: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7a3d1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a3d3: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f7a3d9: mov ecx, eax */
  ecx = eax;
/* f7a3db: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* f7a3e1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a3e3: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a3e6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a3e8: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f7a3ee: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f7a3f4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a3f6: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7a3f9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a3fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a3fc: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f7a402: mov eax, esi */
  eax = esi;
/* f7a404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a405: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a430(void) {
  LOAD_REGS();
L_f7a430: /* f7a430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a432: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a437: mov esi, ecx */
  esi = ecx;
/* f7a439: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7a43eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7a43e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f7a444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a445: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7a44b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7a451u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7a451: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* f7a457: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* f7a45d: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* f7a463: mov dl, byte ptr [edi + 0x1dc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1dcu))) & 0xffu);
/* f7a469: mov byte ptr [esi + 0x1dc], dl */
  W8((uint32_t)(esi + 0x1dcu), (edx & 0xffu));
/* f7a46f: xor eax, dword ptr [edi + 0x1e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1e0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a475: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* f7a47b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a47e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a480: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f7a486: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* f7a48c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a48e: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a491: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a493: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f7a499: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f7a49f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a4a1: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7a4a4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a4a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a4a7: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f7a4ad: mov eax, esi */
  eax = esi;
/* f7a4af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a4b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a4f0(void) {
  LOAD_REGS();
L_f7a4f0: /* f7a4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a4f1: mov esi, ecx */
  esi = ecx;
/* f7a4f3: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7a4f8u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7a4f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a4fd: je 0xf7a50e */
  if (zf) goto L_f7a50e;
L_f7a4ff: /* f7a4ff: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a505: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a50bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a50b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a50e: /* f7a50e: mov eax, esi */
  eax = esi;
/* f7a510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a511: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a530(void) {
  LOAD_REGS();
L_f7a530: /* f7a530: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7a531: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7a535: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a538: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a539: mov esi, ecx */
  esi = ecx;
/* f7a53b: je 0xf7a570 */
  if (zf) goto L_f7a570;
L_f7a53d: /* f7a53d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7a540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a541: push 0xf71ef6 */
  { uint32_t v = 0xf71ef6u; esp -= 4; W32(esp, v); }
/* f7a546: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7a549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a54a: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a54f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a550: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7a555u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7a555: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a558: je 0xf7a568 */
  if (zf) goto L_f7a568;
L_f7a55a: /* f7a55a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7a560: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7a562: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7a564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a565: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7a568u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7a568: /* f7a568: mov eax, edi */
  eax = edi;
/* f7a56a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a56b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a56c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a56d: ret 4 */
  esp += 8; SPILL(); return;
L_f7a570: /* f7a570: mov ecx, esi */
  ecx = esi;
/* f7a572: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7a577u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7a577: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a57a: je 0xf7a58b */
  if (zf) goto L_f7a58b;
L_f7a57c: /* f7a57c: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a582: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a588u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a588: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a58b: /* f7a58b: mov eax, esi */
  eax = esi;
/* f7a58d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a58e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a58f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a5c0(void) {
  LOAD_REGS();
L_f7a5c0: /* f7a5c0: mov eax, 0xfc5b38 */
  eax = 0xfc5b38u;
/* f7a5c5: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a5e0(void) {
  LOAD_REGS();
L_f7a5e0: /* f7a5e0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7a5e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7a5e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7a5eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7a5ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a5f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a5f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a5f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7a5f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a5fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7a5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a5fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a5fd: push 0xfc5b38 */
  { uint32_t v = 0xfc5b38u; esp -= 4; W32(esp, v); }
/* f7a602: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7a608u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7a608: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a60b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a620(void) {
  LOAD_REGS();
L_f7a620: /* f7a620: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7a624: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a640(void) {
  LOAD_REGS();
L_f7a640: /* f7a640: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7a642: push 0xf98cc8 */
  { uint32_t v = 0xf98cc8u; esp -= 4; W32(esp, v); }
/* f7a647: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7a64d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a64e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7a655: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a657: mov esi, ecx */
  esi = ecx;
/* f7a659: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7a65d: mov dword ptr [esi], 0xfa1af0 */
  W32((uint32_t)(esi), 0xfa1af0u);
/* f7a663: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7a66b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7a671u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7a671: mov ecx, esi */
  ecx = esi;
/* f7a673: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7a67b: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7a680u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7a680: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7a684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7a68c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a68f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a6b0(void) {
  LOAD_REGS();
L_f7a6b0: /* f7a6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a6b1: mov esi, ecx */
  esi = ecx;
/* f7a6b3: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7a6b8u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7a6b8: mov dword ptr [esi], 0xfa1af0 */
  W32((uint32_t)(esi), 0xfa1af0u);
/* f7a6be: mov eax, esi */
  eax = esi;
/* f7a6c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a6c1: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a6e0(void) {
  LOAD_REGS();
L_f7a6e0: /* f7a6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7a6e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a6e6: mov esi, ecx */
  esi = ecx;
/* f7a6e8: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7a6edu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7a6ed: mov dword ptr [esi], 0xfa1af0 */
  W32((uint32_t)(esi), 0xfa1af0u);
/* f7a6f3: mov eax, esi */
  eax = esi;
/* f7a6f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a6f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a710(void) {
  LOAD_REGS();
L_f7a710: /* f7a710: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7a714: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a716: mov esi, ecx */
  esi = ecx;
/* f7a718: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7a71du); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7a71d: mov eax, esi */
  eax = esi;
/* f7a71f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a720: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a740(void) {
  LOAD_REGS();
L_f7a740: /* f7a740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a741: mov esi, ecx */
  esi = ecx;
/* f7a743: call 0xf71852 */
  esp -= 4; W32(esp, 0xf7a748u); SPILL(); f_f71852(); if (g_unwind) return; RELOAD();
/* f7a748: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a74d: je 0xf7a75e */
  if (zf) goto L_f7a75e;
L_f7a74f: /* f7a74f: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a755: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a75bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a75b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a75e: /* f7a75e: mov eax, esi */
  eax = esi;
/* f7a760: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a761: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a780(void) {
  LOAD_REGS();
L_f7a780: /* f7a780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7a781: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7a785: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a789: mov esi, ecx */
  esi = ecx;
/* f7a78b: je 0xf7a7c0 */
  if (zf) goto L_f7a7c0;
L_f7a78d: /* f7a78d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7a790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a791: push 0xf71852 */
  { uint32_t v = 0xf71852u; esp -= 4; W32(esp, v); }
/* f7a796: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7a799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a79a: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a79f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a7a0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7a7a5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7a7a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a7a8: je 0xf7a7b8 */
  if (zf) goto L_f7a7b8;
L_f7a7aa: /* f7a7aa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7a7b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7a7b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7a7b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a7b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7a7b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7a7b8: /* f7a7b8: mov eax, edi */
  eax = edi;
/* f7a7ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a7bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a7bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a7bd: ret 4 */
  esp += 8; SPILL(); return;
L_f7a7c0: /* f7a7c0: mov ecx, esi */
  ecx = esi;
/* f7a7c2: call 0xf71852 */
  esp -= 4; W32(esp, 0xf7a7c7u); SPILL(); f_f71852(); if (g_unwind) return; RELOAD();
/* f7a7c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a7ca: je 0xf7a7db */
  if (zf) goto L_f7a7db;
L_f7a7cc: /* f7a7cc: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7a7d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a7d2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a7d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a7d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a7db: /* f7a7db: mov eax, esi */
  eax = esi;
/* f7a7dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a7de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7a7df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a810(void) {
  LOAD_REGS();
L_f7a810: /* f7a810: mov eax, 0xfc4658 */
  eax = 0xfc4658u;
/* f7a815: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a830(void) {
  LOAD_REGS();
L_f7a830: /* f7a830: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7a835: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7a837: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7a83b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7a83f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a843: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a844: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7a848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7a84a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7a84b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a84c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a84d: push 0xfc4658 */
  { uint32_t v = 0xfc4658u; esp -= 4; W32(esp, v); }
/* f7a852: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7a858u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7a858: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a85b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a870(void) {
  LOAD_REGS();
L_f7a870: /* f7a870: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7a874: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a890(void) {
  LOAD_REGS();
L_f7a890: /* f7a890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7a892: push 0xf98ce8 */
  { uint32_t v = 0xf98ce8u; esp -= 4; W32(esp, v); }
/* f7a897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7a89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7a89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7a8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7a8a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a8a7: mov esi, ecx */
  esi = ecx;
/* f7a8a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7a8ad: mov dword ptr [esi], 0xfa1be0 */
  W32((uint32_t)(esi), 0xfa1be0u);
/* f7a8b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7a8bb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7a8c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7a8c1: mov ecx, esi */
  ecx = esi;
/* f7a8c3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7a8cb: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7a8d0u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7a8d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7a8d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a8d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7a8dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7a8df: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a900(void) {
  LOAD_REGS();
L_f7a900: /* f7a900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a901: mov esi, ecx */
  esi = ecx;
/* f7a903: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7a908u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7a908: mov dword ptr [esi], 0xfa1be0 */
  W32((uint32_t)(esi), 0xfa1be0u);
/* f7a90e: mov eax, esi */
  eax = esi;
/* f7a910: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a911: ret  */
  esp += 4; SPILL(); return;
}

void f_f7a930(void) {
  LOAD_REGS();
L_f7a930: /* f7a930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a937: mov esi, ecx */
  esi = ecx;
/* f7a939: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7a93eu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7a93e: mov dword ptr [esi], 0xfa1be0 */
  W32((uint32_t)(esi), 0xfa1be0u);
/* f7a944: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7a94a: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7a950: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a952: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a955: mov ecx, edi */
  ecx = edi;
/* f7a957: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a959: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a95a: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7a960: mov eax, esi */
  eax = esi;
/* f7a962: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a963: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a980(void) {
  LOAD_REGS();
L_f7a980: /* f7a980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a982: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7a986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7a987: mov esi, ecx */
  esi = ecx;
/* f7a989: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7a98eu); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7a98e: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7a994: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7a99a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7a99c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7a99f: mov ecx, edi */
  ecx = edi;
/* f7a9a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7a9a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7a9a4: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7a9aa: mov eax, esi */
  eax = esi;
/* f7a9ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a9ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7a9c0(void) {
  LOAD_REGS();
L_f7a9c0: /* f7a9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a9c1: mov esi, ecx */
  esi = ecx;
/* f7a9c3: call 0xf71ffa */
  esp -= 4; W32(esp, 0xf7a9c8u); SPILL(); f_f71ffa(); if (g_unwind) return; RELOAD();
/* f7a9c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7a9cd: je 0xf7a9de */
  if (zf) goto L_f7a9de;
L_f7a9cf: /* f7a9cf: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7a9d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7a9d5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7a9dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7a9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7a9de: /* f7a9de: mov eax, esi */
  eax = esi;
/* f7a9e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7a9e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7aa00(void) {
  LOAD_REGS();
L_f7aa00: /* f7aa00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7aa01: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7aa05: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7aa08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aa09: mov esi, ecx */
  esi = ecx;
/* f7aa0b: je 0xf7aa40 */
  if (zf) goto L_f7aa40;
L_f7aa0d: /* f7aa0d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7aa10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7aa11: push 0xf71ffa */
  { uint32_t v = 0xf71ffau; esp -= 4; W32(esp, v); }
/* f7aa16: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7aa19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7aa1a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7aa1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aa20: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7aa25u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7aa25: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7aa28: je 0xf7aa38 */
  if (zf) goto L_f7aa38;
L_f7aa2a: /* f7aa2a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7aa30: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7aa32: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7aa34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7aa35: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7aa38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7aa38: /* f7aa38: mov eax, edi */
  eax = edi;
/* f7aa3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7aa3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7aa3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7aa3d: ret 4 */
  esp += 8; SPILL(); return;
L_f7aa40: /* f7aa40: mov ecx, esi */
  ecx = esi;
/* f7aa42: call 0xf71ffa */
  esp -= 4; W32(esp, 0xf7aa47u); SPILL(); f_f71ffa(); if (g_unwind) return; RELOAD();
/* f7aa47: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7aa4a: je 0xf7aa5b */
  if (zf) goto L_f7aa5b;
L_f7aa4c: /* f7aa4c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7aa51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aa52: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7aa58u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7aa58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7aa5b: /* f7aa5b: mov eax, esi */
  eax = esi;
/* f7aa5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7aa5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7aa5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7aa90(void) {
  LOAD_REGS();
L_f7aa90: /* f7aa90: mov eax, 0xfbd418 */
  eax = 0xfbd418u;
/* f7aa95: ret  */
  esp += 4; SPILL(); return;
}

void f_f7aab0(void) {
  LOAD_REGS();
L_f7aab0: /* f7aab0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7aab5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7aab7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7aabb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7aabf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7aac1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7aac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7aac4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7aac8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7aaca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7aacb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7aacc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7aacd: push 0xfbd418 */
  { uint32_t v = 0xfbd418u; esp -= 4; W32(esp, v); }
/* f7aad2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7aad8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7aad8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7aadb: ret  */
  esp += 4; SPILL(); return;
}

void f_f7aaf0(void) {
  LOAD_REGS();
L_f7aaf0: /* f7aaf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7aaf4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ab10(void) {
  LOAD_REGS();
L_f7ab10: /* f7ab10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ab12: push 0xf98d08 */
  { uint32_t v = 0xf98d08u; esp -= 4; W32(esp, v); }
/* f7ab17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ab1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ab1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ab25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ab26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ab27: mov esi, ecx */
  esi = ecx;
/* f7ab29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7ab2d: mov dword ptr [esi], 0xfa1cd0 */
  W32((uint32_t)(esi), 0xfa1cd0u);
/* f7ab33: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7ab3b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7ab41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7ab41: mov ecx, esi */
  ecx = esi;
/* f7ab43: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7ab4b: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7ab50u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7ab50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7ab54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ab55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7ab5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ab5f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ab80(void) {
  LOAD_REGS();
L_f7ab80: /* f7ab80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ab81: mov esi, ecx */
  esi = ecx;
/* f7ab83: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7ab88u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7ab88: mov dword ptr [esi], 0xfa1cd0 */
  W32((uint32_t)(esi), 0xfa1cd0u);
/* f7ab8e: mov eax, esi */
  eax = esi;
/* f7ab90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ab91: ret  */
  esp += 4; SPILL(); return;
}

void f_f7abb0(void) {
  LOAD_REGS();
L_f7abb0: /* f7abb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7abb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7abb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7abb6: mov esi, ecx */
  esi = ecx;
/* f7abb8: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7abbdu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7abbd: mov dword ptr [esi], 0xfa1cd0 */
  W32((uint32_t)(esi), 0xfa1cd0u);
/* f7abc3: mov eax, esi */
  eax = esi;
/* f7abc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7abc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7abe0(void) {
  LOAD_REGS();
L_f7abe0: /* f7abe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7abe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7abe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7abe6: mov esi, ecx */
  esi = ecx;
/* f7abe8: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7abedu); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7abed: mov eax, esi */
  eax = esi;
/* f7abef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7abf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ac10(void) {
  LOAD_REGS();
L_f7ac10: /* f7ac10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ac11: mov esi, ecx */
  esi = ecx;
/* f7ac13: call 0xf718f2 */
  esp -= 4; W32(esp, 0xf7ac18u); SPILL(); f_f718f2(); if (g_unwind) return; RELOAD();
/* f7ac18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ac1d: je 0xf7ac2e */
  if (zf) goto L_f7ac2e;
L_f7ac1f: /* f7ac1f: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7ac24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ac25: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7ac2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7ac2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ac2e: /* f7ac2e: mov eax, esi */
  eax = esi;
/* f7ac30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ac31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ac50(void) {
  LOAD_REGS();
L_f7ac50: /* f7ac50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ac51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7ac55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ac58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ac59: mov esi, ecx */
  esi = ecx;
/* f7ac5b: je 0xf7ac90 */
  if (zf) goto L_f7ac90;
L_f7ac5d: /* f7ac5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7ac60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ac61: push 0xf718f2 */
  { uint32_t v = 0xf718f2u; esp -= 4; W32(esp, v); }
/* f7ac66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7ac69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ac6a: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7ac6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ac70: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7ac75u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7ac75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ac78: je 0xf7ac88 */
  if (zf) goto L_f7ac88;
L_f7ac7a: /* f7ac7a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7ac80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7ac82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7ac84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ac85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7ac88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7ac88: /* f7ac88: mov eax, edi */
  eax = edi;
/* f7ac8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ac8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ac8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ac8d: ret 4 */
  esp += 8; SPILL(); return;
L_f7ac90: /* f7ac90: mov ecx, esi */
  ecx = esi;
/* f7ac92: call 0xf718f2 */
  esp -= 4; W32(esp, 0xf7ac97u); SPILL(); f_f718f2(); if (g_unwind) return; RELOAD();
/* f7ac97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ac9a: je 0xf7acab */
  if (zf) goto L_f7acab;
L_f7ac9c: /* f7ac9c: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7aca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aca2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7aca8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7aca8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7acab: /* f7acab: mov eax, esi */
  eax = esi;
/* f7acad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7acae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7acaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ace0(void) {
  LOAD_REGS();
L_f7ace0: /* f7ace0: mov eax, 0xfbe3b0 */
  eax = 0xfbe3b0u;
/* f7ace5: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ad00(void) {
  LOAD_REGS();
L_f7ad00: /* f7ad00: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7ad05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7ad07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7ad0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7ad0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ad11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ad13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ad14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7ad18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ad1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7ad1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ad1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ad1d: push 0xfbe3b0 */
  { uint32_t v = 0xfbe3b0u; esp -= 4; W32(esp, v); }
/* f7ad22: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7ad28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7ad28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ad2b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ad40(void) {
  LOAD_REGS();
L_f7ad40: /* f7ad40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7ad44: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ad60(void) {
  LOAD_REGS();
L_f7ad60: /* f7ad60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ad62: push 0xf98d28 */
  { uint32_t v = 0xf98d28u; esp -= 4; W32(esp, v); }
/* f7ad67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ad6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ad6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ad75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ad76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ad77: mov esi, ecx */
  esi = ecx;
/* f7ad79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7ad7d: mov dword ptr [esi], 0xfa1dc0 */
  W32((uint32_t)(esi), 0xfa1dc0u);
/* f7ad83: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7ad8b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7ad91u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7ad91: mov ecx, esi */
  ecx = esi;
/* f7ad93: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7ad9b: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7ada0u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7ada0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7ada4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ada5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7adac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7adaf: ret  */
  esp += 4; SPILL(); return;
}

void f_f7add0(void) {
  LOAD_REGS();
L_f7add0: /* f7add0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7add1: mov esi, ecx */
  esi = ecx;
/* f7add3: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7add8u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7add8: mov dword ptr [esi], 0xfa1dc0 */
  W32((uint32_t)(esi), 0xfa1dc0u);
/* f7adde: mov eax, esi */
  eax = esi;
/* f7ade0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ade1: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ae00(void) {
  LOAD_REGS();
L_f7ae00: /* f7ae00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ae01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ae02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7ae06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ae07: mov esi, ecx */
  esi = ecx;
/* f7ae09: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7ae0eu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7ae0e: mov dword ptr [esi], 0xfa1dc0 */
  W32((uint32_t)(esi), 0xfa1dc0u);
/* f7ae14: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7ae1a: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7ae20: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7ae22: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7ae25: mov ecx, edi */
  ecx = edi;
/* f7ae27: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7ae29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ae2a: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7ae30: mov eax, esi */
  eax = esi;
/* f7ae32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ae33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ae50(void) {
  LOAD_REGS();
L_f7ae50: /* f7ae50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ae51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ae52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7ae56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ae57: mov esi, ecx */
  esi = ecx;
/* f7ae59: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7ae5eu); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7ae5e: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7ae64: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7ae6a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7ae6c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7ae6f: mov ecx, edi */
  ecx = edi;
/* f7ae71: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7ae73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ae74: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7ae7a: mov eax, esi */
  eax = esi;
/* f7ae7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ae7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ae90(void) {
  LOAD_REGS();
L_f7ae90: /* f7ae90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ae91: mov esi, ecx */
  esi = ecx;
/* f7ae93: call 0xf71712 */
  esp -= 4; W32(esp, 0xf7ae98u); SPILL(); f_f71712(); if (g_unwind) return; RELOAD();
/* f7ae98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ae9d: je 0xf7aeae */
  if (zf) goto L_f7aeae;
L_f7ae9f: /* f7ae9f: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7aea4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aea5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7aeabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7aeab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7aeae: /* f7aeae: mov eax, esi */
  eax = esi;
/* f7aeb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7aeb1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7aed0(void) {
  LOAD_REGS();
L_f7aed0: /* f7aed0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7aed1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7aed5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7aed8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aed9: mov esi, ecx */
  esi = ecx;
/* f7aedb: je 0xf7af10 */
  if (zf) goto L_f7af10;
L_f7aedd: /* f7aedd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7aee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7aee1: push 0xf71712 */
  { uint32_t v = 0xf71712u; esp -= 4; W32(esp, v); }
/* f7aee6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7aee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7aeea: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7aeef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aef0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7aef5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7aef5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7aef8: je 0xf7af08 */
  if (zf) goto L_f7af08;
L_f7aefa: /* f7aefa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7af00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7af02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7af04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7af05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7af08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7af08: /* f7af08: mov eax, edi */
  eax = edi;
/* f7af0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7af0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7af0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7af0d: ret 4 */
  esp += 8; SPILL(); return;
L_f7af10: /* f7af10: mov ecx, esi */
  ecx = esi;
/* f7af12: call 0xf71712 */
  esp -= 4; W32(esp, 0xf7af17u); SPILL(); f_f71712(); if (g_unwind) return; RELOAD();
/* f7af17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7af1a: je 0xf7af2b */
  if (zf) goto L_f7af2b;
L_f7af1c: /* f7af1c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7af21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7af22: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7af28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7af28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7af2b: /* f7af2b: mov eax, esi */
  eax = esi;
/* f7af2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7af2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7af2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7af60(void) {
  LOAD_REGS();
L_f7af60: /* f7af60: mov eax, 0xfc4b88 */
  eax = 0xfc4b88u;
/* f7af65: ret  */
  esp += 4; SPILL(); return;
}

void f_f7af80(void) {
  LOAD_REGS();
L_f7af80: /* f7af80: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7af85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7af87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7af8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7af8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7af91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7af93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7af94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7af98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7af9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7af9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7af9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7af9d: push 0xfc4b88 */
  { uint32_t v = 0xfc4b88u; esp -= 4; W32(esp, v); }
/* f7afa2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7afa8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7afa8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7afab: ret  */
  esp += 4; SPILL(); return;
}

void f_f7afc0(void) {
  LOAD_REGS();
L_f7afc0: /* f7afc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7afc4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7afe0(void) {
  LOAD_REGS();
L_f7afe0: /* f7afe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7afe2: push 0xf98d48 */
  { uint32_t v = 0xf98d48u; esp -= 4; W32(esp, v); }
/* f7afe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7afed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7afee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7aff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7aff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7aff7: mov esi, ecx */
  esi = ecx;
/* f7aff9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7affd: mov dword ptr [esi], 0xfa1eb0 */
  W32((uint32_t)(esi), 0xfa1eb0u);
/* f7b003: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7b00b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7b011u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7b011: mov ecx, esi */
  ecx = esi;
/* f7b013: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7b01b: call 0xf71712 */
  esp -= 4; W32(esp, 0xf7b020u); SPILL(); f_f71712(); if (g_unwind) return; RELOAD();
/* f7b020: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7b024: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b025: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b02c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b02f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b050(void) {
  LOAD_REGS();
L_f7b050: /* f7b050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b051: mov esi, ecx */
  esi = ecx;
/* f7b053: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7b058u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7b058: mov dword ptr [esi], 0xfa1eb0 */
  W32((uint32_t)(esi), 0xfa1eb0u);
/* f7b05e: mov eax, esi */
  eax = esi;
/* f7b060: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b061: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b080(void) {
  LOAD_REGS();
L_f7b080: /* f7b080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b081: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b082: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7b086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b087: mov esi, ecx */
  esi = ecx;
/* f7b089: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7b08eu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7b08e: mov dword ptr [esi], 0xfa1dc0 */
  W32((uint32_t)(esi), 0xfa1dc0u);
/* f7b094: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7b09a: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7b0a0: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b0a2: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b0a5: mov ecx, edi */
  ecx = edi;
/* f7b0a7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b0a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b0aa: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7b0b0: mov dword ptr [esi], 0xfa1eb0 */
  W32((uint32_t)(esi), 0xfa1eb0u);
/* f7b0b6: mov eax, esi */
  eax = esi;
/* f7b0b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b0b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b0d0(void) {
  LOAD_REGS();
L_f7b0d0: /* f7b0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b0d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b0d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7b0d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b0d7: mov esi, ecx */
  esi = ecx;
/* f7b0d9: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7b0deu); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7b0de: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7b0e4: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7b0ea: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b0ec: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b0ef: mov ecx, edi */
  ecx = edi;
/* f7b0f1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b0f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b0f4: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7b0fa: mov eax, esi */
  eax = esi;
/* f7b0fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b0fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b110(void) {
  LOAD_REGS();
L_f7b110: /* f7b110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b111: mov esi, ecx */
  esi = ecx;
/* f7b113: call 0xf71965 */
  esp -= 4; W32(esp, 0xf7b118u); SPILL(); f_f71965(); if (g_unwind) return; RELOAD();
/* f7b118: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b11d: je 0xf7b12e */
  if (zf) goto L_f7b12e;
L_f7b11f: /* f7b11f: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b124: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b125: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b12bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b12b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b12e: /* f7b12e: mov eax, esi */
  eax = esi;
/* f7b130: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b131: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b150(void) {
  LOAD_REGS();
L_f7b150: /* f7b150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7b151: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7b155: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b159: mov esi, ecx */
  esi = ecx;
/* f7b15b: je 0xf7b190 */
  if (zf) goto L_f7b190;
L_f7b15d: /* f7b15d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7b160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b161: push 0xf71965 */
  { uint32_t v = 0xf71965u; esp -= 4; W32(esp, v); }
/* f7b166: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7b169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b16a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b16f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b170: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7b175u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7b175: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b178: je 0xf7b188 */
  if (zf) goto L_f7b188;
L_f7b17a: /* f7b17a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7b180: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7b182: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7b184: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b185: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7b188u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7b188: /* f7b188: mov eax, edi */
  eax = edi;
/* f7b18a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b18b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b18c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b18d: ret 4 */
  esp += 8; SPILL(); return;
L_f7b190: /* f7b190: mov ecx, esi */
  ecx = esi;
/* f7b192: call 0xf71965 */
  esp -= 4; W32(esp, 0xf7b197u); SPILL(); f_f71965(); if (g_unwind) return; RELOAD();
/* f7b197: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b19a: je 0xf7b1ab */
  if (zf) goto L_f7b1ab;
L_f7b19c: /* f7b19c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b1a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b1a2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b1a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b1a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b1ab: /* f7b1ab: mov eax, esi */
  eax = esi;
/* f7b1ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b1ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b1af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b1e0(void) {
  LOAD_REGS();
L_f7b1e0: /* f7b1e0: mov eax, 0xfc84c8 */
  eax = 0xfc84c8u;
/* f7b1e5: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b200(void) {
  LOAD_REGS();
L_f7b200: /* f7b200: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7b205: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7b207: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7b20b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7b20f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b213: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b214: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7b218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b21a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7b21b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b21c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b21d: push 0xfc84c8 */
  { uint32_t v = 0xfc84c8u; esp -= 4; W32(esp, v); }
/* f7b222: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7b228u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7b228: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b22b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b240(void) {
  LOAD_REGS();
L_f7b240: /* f7b240: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7b244: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b260(void) {
  LOAD_REGS();
L_f7b260: /* f7b260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7b262: push 0xf98d68 */
  { uint32_t v = 0xf98d68u; esp -= 4; W32(esp, v); }
/* f7b267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7b26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7b275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b277: mov esi, ecx */
  esi = ecx;
/* f7b279: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7b27d: mov dword ptr [esi], 0xfa1fa0 */
  W32((uint32_t)(esi), 0xfa1fa0u);
/* f7b283: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7b28b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7b291u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7b291: mov ecx, esi */
  ecx = esi;
/* f7b293: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7b29b: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7b2a0u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7b2a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7b2a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b2a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b2ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b2af: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b2d0(void) {
  LOAD_REGS();
L_f7b2d0: /* f7b2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b2d1: mov esi, ecx */
  esi = ecx;
/* f7b2d3: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7b2d8u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7b2d8: mov dword ptr [esi], 0xfa1fa0 */
  W32((uint32_t)(esi), 0xfa1fa0u);
/* f7b2de: mov eax, esi */
  eax = esi;
/* f7b2e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b2e1: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b300(void) {
  LOAD_REGS();
L_f7b300: /* f7b300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7b304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b306: mov esi, ecx */
  esi = ecx;
/* f7b308: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7b30du); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7b30d: mov dword ptr [esi], 0xfa1fa0 */
  W32((uint32_t)(esi), 0xfa1fa0u);
/* f7b313: mov eax, esi */
  eax = esi;
/* f7b315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b316: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b330(void) {
  LOAD_REGS();
L_f7b330: /* f7b330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7b334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b336: mov esi, ecx */
  esi = ecx;
/* f7b338: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7b33du); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7b33d: mov eax, esi */
  eax = esi;
/* f7b33f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b340: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b360(void) {
  LOAD_REGS();
L_f7b360: /* f7b360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b361: mov esi, ecx */
  esi = ecx;
/* f7b363: call 0xf71820 */
  esp -= 4; W32(esp, 0xf7b368u); SPILL(); f_f71820(); if (g_unwind) return; RELOAD();
/* f7b368: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b36d: je 0xf7b37e */
  if (zf) goto L_f7b37e;
L_f7b36f: /* f7b36f: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7b374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b375: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b37bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b37b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b37e: /* f7b37e: mov eax, esi */
  eax = esi;
/* f7b380: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b381: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b3a0(void) {
  LOAD_REGS();
L_f7b3a0: /* f7b3a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7b3a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7b3a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b3a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b3a9: mov esi, ecx */
  esi = ecx;
/* f7b3ab: je 0xf7b3e0 */
  if (zf) goto L_f7b3e0;
L_f7b3ad: /* f7b3ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7b3b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b3b1: push 0xf71820 */
  { uint32_t v = 0xf71820u; esp -= 4; W32(esp, v); }
/* f7b3b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7b3b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b3ba: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7b3bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b3c0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7b3c5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7b3c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b3c8: je 0xf7b3d8 */
  if (zf) goto L_f7b3d8;
L_f7b3ca: /* f7b3ca: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7b3d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7b3d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7b3d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b3d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7b3d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7b3d8: /* f7b3d8: mov eax, edi */
  eax = edi;
/* f7b3da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b3db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b3dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b3dd: ret 4 */
  esp += 8; SPILL(); return;
L_f7b3e0: /* f7b3e0: mov ecx, esi */
  ecx = esi;
/* f7b3e2: call 0xf71820 */
  esp -= 4; W32(esp, 0xf7b3e7u); SPILL(); f_f71820(); if (g_unwind) return; RELOAD();
/* f7b3e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b3ea: je 0xf7b3fb */
  if (zf) goto L_f7b3fb;
L_f7b3ec: /* f7b3ec: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* f7b3f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b3f2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b3f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b3f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b3fb: /* f7b3fb: mov eax, esi */
  eax = esi;
/* f7b3fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b3fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b3ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b430(void) {
  LOAD_REGS();
L_f7b430: /* f7b430: mov eax, 0xfc0d40 */
  eax = 0xfc0d40u;
/* f7b435: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b450(void) {
  LOAD_REGS();
L_f7b450: /* f7b450: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7b455: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7b457: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7b45b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7b45f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b463: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7b468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b46a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7b46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b46c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b46d: push 0xfc0d40 */
  { uint32_t v = 0xfc0d40u; esp -= 4; W32(esp, v); }
/* f7b472: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7b478u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7b478: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b47b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b490(void) {
  LOAD_REGS();
L_f7b490: /* f7b490: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7b494: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b4b0(void) {
  LOAD_REGS();
L_f7b4b0: /* f7b4b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7b4b2: push 0xf98d88 */
  { uint32_t v = 0xf98d88u; esp -= 4; W32(esp, v); }
/* f7b4b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7b4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b4be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7b4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b4c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b4c7: mov esi, ecx */
  esi = ecx;
/* f7b4c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7b4cd: mov dword ptr [esi], 0xfa2090 */
  W32((uint32_t)(esi), 0xfa2090u);
/* f7b4d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7b4db: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7b4e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7b4e1: mov ecx, esi */
  ecx = esi;
/* f7b4e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7b4eb: call 0xf71ef6 */
  esp -= 4; W32(esp, 0xf7b4f0u); SPILL(); f_f71ef6(); if (g_unwind) return; RELOAD();
/* f7b4f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7b4f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b4f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b4fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b4ff: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b520(void) {
  LOAD_REGS();
L_f7b520: /* f7b520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b521: mov esi, ecx */
  esi = ecx;
/* f7b523: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7b528u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7b528: mov dword ptr [esi], 0xfa2090 */
  W32((uint32_t)(esi), 0xfa2090u);
/* f7b52e: mov eax, esi */
  eax = esi;
/* f7b530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b531: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b550(void) {
  LOAD_REGS();
L_f7b550: /* f7b550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b551: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b552: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7b556: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b557: mov esi, ecx */
  esi = ecx;
/* f7b559: call 0xf7132f */
  esp -= 4; W32(esp, 0xf7b55eu); SPILL(); f_f7132f(); if (g_unwind) return; RELOAD();
/* f7b55e: mov dword ptr [esi], 0xfa2090 */
  W32((uint32_t)(esi), 0xfa2090u);
/* f7b564: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7b56a: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7b570: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b572: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b575: mov ecx, edi */
  ecx = edi;
/* f7b577: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b579: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b57a: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7b580: mov eax, esi */
  eax = esi;
/* f7b582: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b583: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b5a0(void) {
  LOAD_REGS();
L_f7b5a0: /* f7b5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b5a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b5a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7b5a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b5a7: mov esi, ecx */
  esi = ecx;
/* f7b5a9: call 0xf71532 */
  esp -= 4; W32(esp, 0xf7b5aeu); SPILL(); f_f71532(); if (g_unwind) return; RELOAD();
/* f7b5ae: mov eax, dword ptr [edi + 0x1e4] */
  eax = R32((uint32_t)(edi + 0x1e4u));
/* f7b5b4: mov edi, dword ptr [esi + 0x1e4] */
  edi = R32((uint32_t)(esi + 0x1e4u));
/* f7b5ba: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b5bc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b5bf: mov ecx, edi */
  ecx = edi;
/* f7b5c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b5c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b5c4: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* f7b5ca: mov eax, esi */
  eax = esi;
/* f7b5cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b5cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b5e0(void) {
  LOAD_REGS();
L_f7b5e0: /* f7b5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b5e1: mov esi, ecx */
  esi = ecx;
/* f7b5e3: call 0xf7128f */
  esp -= 4; W32(esp, 0xf7b5e8u); SPILL(); f_f7128f(); if (g_unwind) return; RELOAD();
/* f7b5e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b5ed: je 0xf7b5fe */
  if (zf) goto L_f7b5fe;
L_f7b5ef: /* f7b5ef: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b5f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b5f5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b5fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b5fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b5fe: /* f7b5fe: mov eax, esi */
  eax = esi;
/* f7b600: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b601: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b620(void) {
  LOAD_REGS();
L_f7b620: /* f7b620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7b621: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7b625: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b629: mov esi, ecx */
  esi = ecx;
/* f7b62b: je 0xf7b660 */
  if (zf) goto L_f7b660;
L_f7b62d: /* f7b62d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7b630: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b631: push 0xf7128f */
  { uint32_t v = 0xf7128fu; esp -= 4; W32(esp, v); }
/* f7b636: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7b639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b63a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b63f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b640: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7b645u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7b645: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b648: je 0xf7b658 */
  if (zf) goto L_f7b658;
L_f7b64a: /* f7b64a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7b650: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7b652: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7b654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b655: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7b658u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7b658: /* f7b658: mov eax, edi */
  eax = edi;
/* f7b65a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b65b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b65c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b65d: ret 4 */
  esp += 8; SPILL(); return;
L_f7b660: /* f7b660: mov ecx, esi */
  ecx = esi;
/* f7b662: call 0xf7128f */
  esp -= 4; W32(esp, 0xf7b667u); SPILL(); f_f7128f(); if (g_unwind) return; RELOAD();
/* f7b667: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7b66a: je 0xf7b67b */
  if (zf) goto L_f7b67b;
L_f7b66c: /* f7b66c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7b671: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b672: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7b678u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7b678: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7b67b: /* f7b67b: mov eax, esi */
  eax = esi;
/* f7b67d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b67e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7b67f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7b6b0(void) {
  LOAD_REGS();
L_f7b6b0: /* f7b6b0: mov eax, 0xfbaa78 */
  eax = 0xfbaa78u;
/* f7b6b5: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b6d0(void) {
  LOAD_REGS();
L_f7b6d0: /* f7b6d0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7b6d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7b6d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7b6db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7b6df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b6e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b6e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b6e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7b6e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7b6ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7b6eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b6ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b6ed: push 0xfbaa78 */
  { uint32_t v = 0xfbaa78u; esp -= 4; W32(esp, v); }
/* f7b6f2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7b6f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7b6f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b6fb: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b710(void) {
  LOAD_REGS();
L_f7b710: /* f7b710: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7b714: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b730(void) {
  LOAD_REGS();
L_f7b730: /* f7b730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7b732: push 0xf98dc6 */
  { uint32_t v = 0xf98dc6u; esp -= 4; W32(esp, v); }
/* f7b737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7b73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7b745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b747: mov esi, ecx */
  esi = ecx;
/* f7b749: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7b74d: mov dword ptr [esi], 0xfa2180 */
  W32((uint32_t)(esi), 0xfa2180u);
/* f7b753: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* f7b75b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7b761u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7b761: lea ecx, [esi + 0x1e4] */
  ecx = (uint32_t)(esi + 0x1e4u);
/* f7b767: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f7b76c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf7b772u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f7b772: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f7b778: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f7b77d: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf7b783u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f7b783: mov ecx, esi */
  ecx = esi;
/* f7b785: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7b78d: call 0xf71a55 */
  esp -= 4; W32(esp, 0xf7b792u); SPILL(); f_f71a55(); if (g_unwind) return; RELOAD();
/* f7b792: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7b796: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b797: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b79e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b7a1: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b7d0(void) {
  LOAD_REGS();
L_f7b7d0: /* f7b7d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7b7d2: push 0xf98df7 */
  { uint32_t v = 0xf98df7u; esp -= 4; W32(esp, v); }
/* f7b7d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7b7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b7de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7b7e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b7e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b7e7: mov esi, ecx */
  esi = ecx;
/* f7b7e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7b7ed: call 0xf71fb9 */
  esp -= 4; W32(esp, 0xf7b7f2u); SPILL(); f_f71fb9(); if (g_unwind) return; RELOAD();
/* f7b7f2: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f7b7f8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7b800: mov dword ptr [esi], 0xfa2180 */
  W32((uint32_t)(esi), 0xfa2180u);
/* f7b806: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7b80cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7b80c: lea ecx, [esi + 0x1e4] */
  ecx = (uint32_t)(esi + 0x1e4u);
/* f7b812: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f7b817: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7b81du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7b81d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7b821: mov eax, esi */
  eax = esi;
/* f7b823: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b824: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b82b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b82e: ret  */
  esp += 4; SPILL(); return;
}

void f_f7b850(void) {
  LOAD_REGS();
L_f7b850: /* f7b850: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7b852: push 0xf98e27 */
  { uint32_t v = 0xf98e27u; esp -= 4; W32(esp, v); }
/* f7b857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7b85d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b85e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7b865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7b867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b868: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f7b86c: mov esi, ecx */
  esi = ecx;
/* f7b86e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7b86f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7b873: call 0xf7164a */
  esp -= 4; W32(esp, 0xf7b878u); SPILL(); f_f7164a(); if (g_unwind) return; RELOAD();
/* f7b878: lea eax, [edi + 0x1d8] */
  eax = (uint32_t)(edi + 0x1d8u);
/* f7b87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7b87f: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f7b885: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7b88d: mov dword ptr [esi], 0xfa2180 */
  W32((uint32_t)(esi), 0xfa2180u);
/* f7b893: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7b899u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7b899: lea ecx, [edi + 0x1e4] */
  ecx = (uint32_t)(edi + 0x1e4u);
/* f7b89f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7b8a0: lea ecx, [esi + 0x1e4] */
  ecx = (uint32_t)(esi + 0x1e4u);
/* f7b8a6: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f7b8ab: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7b8b1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7b8b1: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f7b8b7: mov edx, dword ptr [esi + 0x1f0] */
  edx = R32((uint32_t)(esi + 0x1f0u));
/* f7b8bd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7b8bf: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f7b8c5: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7b8c8: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b8ca: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f7b8d0: mov ecx, eax */
  ecx = eax;
/* f7b8d2: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f7b8d8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b8da: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b8dd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b8df: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f7b8e5: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f7b8eb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b8ed: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7b8f0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b8f2: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f7b8f8: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f7b8fe: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b900: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7b903: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b905: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f7b90b: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f7b911: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b913: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7b916: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b918: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f7b91e: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f7b924: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f7b92a: mov al, byte ptr [edi + 0x1f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f8u))) & 0xffu);
/* f7b930: mov byte ptr [esi + 0x1f8], al */
  W8((uint32_t)(esi + 0x1f8u), (eax & 0xffu));
/* f7b936: lea ecx, [edi + 0x1fc] */
  ecx = (uint32_t)(edi + 0x1fcu);
/* f7b93c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f7b93e: lea edx, [esi + 0x1fc] */
  edx = (uint32_t)(esi + 0x1fcu);
/* f7b944: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f7b946: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f7b949: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f7b94c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* f7b94f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f7b952: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* f7b955: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* f7b958: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f7b95e: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f7b964: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7b966: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7b969: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7b96b: mov dword ptr [esi + 0x20c], ecx */
  W32((uint32_t)(esi + 0x20cu), ecx);
/* f7b971: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* f7b977: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* f7b97d: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f7b983: mov dword ptr [esi + 0x214], ecx */
  W32((uint32_t)(esi + 0x214u), ecx);
/* f7b989: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f7b98f: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f7b995: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f7b99b: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f7b9a1: mov ecx, dword ptr [edi + 0x220] */
  ecx = R32((uint32_t)(edi + 0x220u));
/* f7b9a7: mov eax, dword ptr [esi + 0x224] */
  eax = R32((uint32_t)(esi + 0x224u));
/* f7b9ad: mov dword ptr [esi + 0x220], ecx */
  W32((uint32_t)(esi + 0x220u), ecx);
/* f7b9b3: mov edx, dword ptr [edi + 0x224] */
  edx = R32((uint32_t)(edi + 0x224u));
/* f7b9b9: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7b9bb: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7b9be: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7b9c0: mov dword ptr [esi + 0x224], eax */
  W32((uint32_t)(esi + 0x224u), eax);
/* f7b9c6: mov al, byte ptr [edi + 0x228] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x228u))) & 0xffu);
/* f7b9cc: mov byte ptr [esi + 0x228], al */
  W8((uint32_t)(esi + 0x228u), (eax & 0xffu));
/* f7b9d2: mov ecx, dword ptr [edi + 0x22c] */
  ecx = R32((uint32_t)(edi + 0x22cu));
/* f7b9d8: mov dword ptr [esi + 0x22c], ecx */
  W32((uint32_t)(esi + 0x22cu), ecx);
/* f7b9de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f7b9e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7b9e3: mov eax, esi */
  eax = esi;
/* f7b9e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7b9e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7b9ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7b9f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ba70(void) {
  LOAD_REGS();
L_f7ba70: /* f7ba70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ba71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ba72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7ba76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ba77: mov esi, ecx */
  esi = ecx;
/* f7ba79: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7ba7eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7ba7e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f7ba84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ba85: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7ba8b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7ba91u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7ba91: lea ecx, [edi + 0x1d8] */
  ecx = (uint32_t)(edi + 0x1d8u);
/* f7ba97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ba98: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* f7ba9e: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7baa4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7baa4: lea edx, [edi + 0x1e4] */
  edx = (uint32_t)(edi + 0x1e4u);
/* f7baaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7baab: lea ecx, [esi + 0x1e4] */
  ecx = (uint32_t)(esi + 0x1e4u);
/* f7bab1: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7bab7u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7bab7: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f7babd: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* f7bac3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bac5: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* f7bacb: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7bace: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7bad0: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f7bad6: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f7badc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bade: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7bae1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bae3: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f7bae9: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f7baef: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7baf1: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7baf4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7baf6: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f7bafc: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* f7bb02: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bb04: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7bb07: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bb09: mov dword ptr [esi + 0x1f0], eax */
  W32((uint32_t)(esi + 0x1f0u), eax);
/* f7bb0f: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* f7bb15: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7bb17: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7bb1a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7bb1c: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* f7bb22: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* f7bb28: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* f7bb2e: mov al, byte ptr [edi + 0x1f8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1f8u))) & 0xffu);
/* f7bb34: mov byte ptr [esi + 0x1f8], al */
  W8((uint32_t)(esi + 0x1f8u), (eax & 0xffu));
/* f7bb3a: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* f7bb40: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* f7bb46: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* f7bb4c: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* f7bb52: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* f7bb58: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* f7bb5e: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* f7bb64: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* f7bb6a: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* f7bb70: mov ecx, dword ptr [esi + 0x20c] */
  ecx = R32((uint32_t)(esi + 0x20cu));
/* f7bb76: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7bb78: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7bb7b: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7bb7d: mov dword ptr [esi + 0x20c], ecx */
  W32((uint32_t)(esi + 0x20cu), ecx);
/* f7bb83: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* f7bb89: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* f7bb8f: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* f7bb95: mov dword ptr [esi + 0x214], ecx */
  W32((uint32_t)(esi + 0x214u), ecx);
/* f7bb9b: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* f7bba1: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* f7bba7: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* f7bbad: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* f7bbb3: mov ecx, dword ptr [edi + 0x220] */
  ecx = R32((uint32_t)(edi + 0x220u));
/* f7bbb9: mov eax, dword ptr [esi + 0x224] */
  eax = R32((uint32_t)(esi + 0x224u));
/* f7bbbf: mov dword ptr [esi + 0x220], ecx */
  W32((uint32_t)(esi + 0x220u), ecx);
/* f7bbc5: mov edx, dword ptr [edi + 0x224] */
  edx = R32((uint32_t)(edi + 0x224u));
/* f7bbcb: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* f7bbcd: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* f7bbd0: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7bbd2: mov dword ptr [esi + 0x224], eax */
  W32((uint32_t)(esi + 0x224u), eax);
/* f7bbd8: mov al, byte ptr [edi + 0x228] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x228u))) & 0xffu);
/* f7bbde: mov byte ptr [esi + 0x228], al */
  W8((uint32_t)(esi + 0x228u), (eax & 0xffu));
/* f7bbe4: mov ecx, dword ptr [edi + 0x22c] */
  ecx = R32((uint32_t)(edi + 0x22cu));
/* f7bbea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7bbeb: mov dword ptr [esi + 0x22c], ecx */
  W32((uint32_t)(esi + 0x22cu), ecx);
/* f7bbf1: mov eax, esi */
  eax = esi;
/* f7bbf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bbf4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bc70(void) {
  LOAD_REGS();
L_f7bc70: /* f7bc70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bc71: mov esi, ecx */
  esi = ecx;
/* f7bc73: call 0xf717cb */
  esp -= 4; W32(esp, 0xf7bc78u); SPILL(); f_f717cb(); if (g_unwind) return; RELOAD();
/* f7bc78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bc7d: je 0xf7bc8e */
  if (zf) goto L_f7bc8e;
L_f7bc7f: /* f7bc7f: push 0x230 */
  { uint32_t v = 0x230u; esp -= 4; W32(esp, v); }
/* f7bc84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bc85: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7bc8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7bc8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7bc8e: /* f7bc8e: mov eax, esi */
  eax = esi;
/* f7bc90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bc91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bcb0(void) {
  LOAD_REGS();
L_f7bcb0: /* f7bcb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7bcb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7bcb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bcb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bcb9: mov esi, ecx */
  esi = ecx;
/* f7bcbb: je 0xf7bcf0 */
  if (zf) goto L_f7bcf0;
L_f7bcbd: /* f7bcbd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7bcc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bcc1: push 0xf717cb */
  { uint32_t v = 0xf717cbu; esp -= 4; W32(esp, v); }
/* f7bcc6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7bcc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7bcca: push 0x230 */
  { uint32_t v = 0x230u; esp -= 4; W32(esp, v); }
/* f7bccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bcd0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7bcd5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7bcd5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bcd8: je 0xf7bce8 */
  if (zf) goto L_f7bce8;
L_f7bcda: /* f7bcda: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7bce0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7bce2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7bce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bce5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7bce8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7bce8: /* f7bce8: mov eax, edi */
  eax = edi;
/* f7bcea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7bceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bcec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7bced: ret 4 */
  esp += 8; SPILL(); return;
L_f7bcf0: /* f7bcf0: mov ecx, esi */
  ecx = esi;
/* f7bcf2: call 0xf717cb */
  esp -= 4; W32(esp, 0xf7bcf7u); SPILL(); f_f717cb(); if (g_unwind) return; RELOAD();
/* f7bcf7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bcfa: je 0xf7bd0b */
  if (zf) goto L_f7bd0b;
L_f7bcfc: /* f7bcfc: push 0x230 */
  { uint32_t v = 0x230u; esp -= 4; W32(esp, v); }
/* f7bd01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bd02: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7bd08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7bd08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7bd0b: /* f7bd0b: mov eax, esi */
  eax = esi;
/* f7bd0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bd0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7bd0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bd40(void) {
  LOAD_REGS();
L_f7bd40: /* f7bd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bd41: mov esi, ecx */
  esi = ecx;
/* f7bd43: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7bd49u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7bd49: mov eax, esi */
  eax = esi;
/* f7bd4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bd4c: ret  */
  esp += 4; SPILL(); return;
}

void f_f7bd60(void) {
  LOAD_REGS();
L_f7bd60: /* f7bd60: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f7bd80(void) {
  LOAD_REGS();
L_f7bd80: /* f7bd80: mov eax, 0xfc36c0 */
  eax = 0xfc36c0u;
/* f7bd85: ret  */
  esp += 4; SPILL(); return;
}

void f_f7bda0(void) {
  LOAD_REGS();
L_f7bda0: /* f7bda0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7bda5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7bda7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7bdab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7bdaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7bdb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7bdb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7bdb4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7bdb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7bdba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7bdbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7bdbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7bdbd: push 0xfc36c0 */
  { uint32_t v = 0xfc36c0u; esp -= 4; W32(esp, v); }
/* f7bdc2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7bdc8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7bdc8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7bdcb: ret  */
  esp += 4; SPILL(); return;
}

void f_f7bde0(void) {
  LOAD_REGS();
L_f7bde0: /* f7bde0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7bde4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7be00(void) {
  LOAD_REGS();
L_f7be00: /* f7be00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7be02: push 0xf98e48 */
  { uint32_t v = 0xf98e48u; esp -= 4; W32(esp, v); }
/* f7be07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7be0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7be0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7be15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7be16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7be17: mov esi, ecx */
  esi = ecx;
/* f7be19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7be1d: mov dword ptr [esi], 0xfa2270 */
  W32((uint32_t)(esi), 0xfa2270u);
/* f7be23: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7be2b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7be31u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7be31: mov ecx, esi */
  ecx = esi;
/* f7be33: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7be3b: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf7be40u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f7be40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7be44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7be45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7be4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7be4f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7be70(void) {
  LOAD_REGS();
L_f7be70: /* f7be70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7be71: mov esi, ecx */
  esi = ecx;
/* f7be73: call 0xf716fe */
  esp -= 4; W32(esp, 0xf7be78u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f7be78: mov dword ptr [esi], 0xfa2270 */
  W32((uint32_t)(esi), 0xfa2270u);
/* f7be7e: mov eax, esi */
  eax = esi;
/* f7be80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7be81: ret  */
  esp += 4; SPILL(); return;
}

void f_f7bea0(void) {
  LOAD_REGS();
L_f7bea0: /* f7bea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bea1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bea2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7bea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bea7: mov esi, ecx */
  esi = ecx;
/* f7bea9: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf7beaeu); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f7beae: mov dword ptr [esi], 0xfa2270 */
  W32((uint32_t)(esi), 0xfa2270u);
/* f7beb4: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7beba: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7bec0: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7bec6: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7becc: mov edx, dword ptr [edi + 0x1d4] */
  edx = R32((uint32_t)(edi + 0x1d4u));
/* f7bed2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7bed3: mov dword ptr [esi + 0x1d4], edx */
  W32((uint32_t)(esi + 0x1d4u), edx);
/* f7bed9: mov eax, esi */
  eax = esi;
/* f7bedb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bedc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bef0(void) {
  LOAD_REGS();
L_f7bef0: /* f7bef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bef1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bef2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7bef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bef7: mov esi, ecx */
  esi = ecx;
/* f7bef9: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7befeu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7befe: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7bf04: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7bf0a: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7bf10: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7bf16: mov edx, dword ptr [edi + 0x1d4] */
  edx = R32((uint32_t)(edi + 0x1d4u));
/* f7bf1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7bf1d: mov dword ptr [esi + 0x1d4], edx */
  W32((uint32_t)(esi + 0x1d4u), edx);
/* f7bf23: mov eax, esi */
  eax = esi;
/* f7bf25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bf26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bf40(void) {
  LOAD_REGS();
L_f7bf40: /* f7bf40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bf41: mov esi, ecx */
  esi = ecx;
/* f7bf43: call 0xf721bc */
  esp -= 4; W32(esp, 0xf7bf48u); SPILL(); f_f721bc(); if (g_unwind) return; RELOAD();
/* f7bf48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bf4d: je 0xf7bf5e */
  if (zf) goto L_f7bf5e;
L_f7bf4f: /* f7bf4f: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f7bf54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bf55: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7bf5bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7bf5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7bf5e: /* f7bf5e: mov eax, esi */
  eax = esi;
/* f7bf60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bf61: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7bf80(void) {
  LOAD_REGS();
L_f7bf80: /* f7bf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7bf81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7bf85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bf88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bf89: mov esi, ecx */
  esi = ecx;
/* f7bf8b: je 0xf7bfc0 */
  if (zf) goto L_f7bfc0;
L_f7bf8d: /* f7bf8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7bf90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bf91: push 0xf721bc */
  { uint32_t v = 0xf721bcu; esp -= 4; W32(esp, v); }
/* f7bf96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7bf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7bf9a: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f7bf9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bfa0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7bfa5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7bfa5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bfa8: je 0xf7bfb8 */
  if (zf) goto L_f7bfb8;
L_f7bfaa: /* f7bfaa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7bfb0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7bfb2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7bfb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7bfb5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7bfb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7bfb8: /* f7bfb8: mov eax, edi */
  eax = edi;
/* f7bfba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7bfbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bfbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7bfbd: ret 4 */
  esp += 8; SPILL(); return;
L_f7bfc0: /* f7bfc0: mov ecx, esi */
  ecx = esi;
/* f7bfc2: call 0xf721bc */
  esp -= 4; W32(esp, 0xf7bfc7u); SPILL(); f_f721bc(); if (g_unwind) return; RELOAD();
/* f7bfc7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7bfca: je 0xf7bfdb */
  if (zf) goto L_f7bfdb;
L_f7bfcc: /* f7bfcc: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* f7bfd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7bfd2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7bfd8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7bfd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7bfdb: /* f7bfdb: mov eax, esi */
  eax = esi;
/* f7bfdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7bfde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7bfdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c010(void) {
  LOAD_REGS();
L_f7c010: /* f7c010: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7c014: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7c016: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f7c01a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c01c: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f7c020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c021: lea eax, [ecx + 0x1cc] */
  eax = (uint32_t)(ecx + 0x1ccu);
/* f7c027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c028: mov eax, dword ptr [0xfba37c] */
  eax = R32((uint32_t)(0xfba37cu));
/* f7c02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c02e: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7c031u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7c031: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c050(void) {
  LOAD_REGS();
L_f7c050: /* f7c050: mov eax, 0xfc0810 */
  eax = 0xfc0810u;
/* f7c055: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c070(void) {
  LOAD_REGS();
L_f7c070: /* f7c070: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7c075: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7c077: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7c07b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7c07f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c084: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7c088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c08a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7c08b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c08c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c08d: push 0xfc0810 */
  { uint32_t v = 0xfc0810u; esp -= 4; W32(esp, v); }
/* f7c092: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7c098u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7c098: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c09b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c0b0(void) {
  LOAD_REGS();
L_f7c0b0: /* f7c0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7c0b4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c0d0(void) {
  LOAD_REGS();
L_f7c0d0: /* f7c0d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7c0d2: push 0xf98e68 */
  { uint32_t v = 0xf98e68u; esp -= 4; W32(esp, v); }
/* f7c0d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7c0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c0de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7c0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c0e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c0e7: mov esi, ecx */
  esi = ecx;
/* f7c0e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7c0ed: mov dword ptr [esi], 0xfa2360 */
  W32((uint32_t)(esi), 0xfa2360u);
/* f7c0f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7c0fb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7c101u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7c101: mov ecx, esi */
  ecx = esi;
/* f7c103: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7c10b: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf7c110u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f7c110: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7c114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c115: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7c11c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c11f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c140(void) {
  LOAD_REGS();
L_f7c140: /* f7c140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c141: mov esi, ecx */
  esi = ecx;
/* f7c143: call 0xf716fe */
  esp -= 4; W32(esp, 0xf7c148u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f7c148: mov dword ptr [esi], 0xfa2360 */
  W32((uint32_t)(esi), 0xfa2360u);
/* f7c14e: mov eax, esi */
  eax = esi;
/* f7c150: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c151: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c170(void) {
  LOAD_REGS();
L_f7c170: /* f7c170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c171: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c172: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7c176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c177: mov esi, ecx */
  esi = ecx;
/* f7c179: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf7c17eu); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f7c17e: mov dword ptr [esi], 0xfa2360 */
  W32((uint32_t)(esi), 0xfa2360u);
/* f7c184: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7c18a: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7c190: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7c196: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c197: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7c19d: mov eax, esi */
  eax = esi;
/* f7c19f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c1a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c1c0(void) {
  LOAD_REGS();
L_f7c1c0: /* f7c1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c1c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c1c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7c1c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c1c7: mov esi, ecx */
  esi = ecx;
/* f7c1c9: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7c1ceu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7c1ce: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7c1d4: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7c1da: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7c1e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c1e1: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7c1e7: mov eax, esi */
  eax = esi;
/* f7c1e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c1ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c200(void) {
  LOAD_REGS();
L_f7c200: /* f7c200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c201: mov esi, ecx */
  esi = ecx;
/* f7c203: call 0xf716f4 */
  esp -= 4; W32(esp, 0xf7c208u); SPILL(); f_f716f4(); if (g_unwind) return; RELOAD();
/* f7c208: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c20d: je 0xf7c21e */
  if (zf) goto L_f7c21e;
L_f7c20f: /* f7c20f: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c215: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c21bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c21b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c21e: /* f7c21e: mov eax, esi */
  eax = esi;
/* f7c220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c221: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c240(void) {
  LOAD_REGS();
L_f7c240: /* f7c240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7c241: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7c245: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c249: mov esi, ecx */
  esi = ecx;
/* f7c24b: je 0xf7c280 */
  if (zf) goto L_f7c280;
L_f7c24d: /* f7c24d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7c250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c251: push 0xf716f4 */
  { uint32_t v = 0xf716f4u; esp -= 4; W32(esp, v); }
/* f7c256: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7c259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c25a: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c25f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c260: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7c265u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7c265: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c268: je 0xf7c278 */
  if (zf) goto L_f7c278;
L_f7c26a: /* f7c26a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7c270: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7c272: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7c274: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c275: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7c278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7c278: /* f7c278: mov eax, edi */
  eax = edi;
/* f7c27a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c27b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c27c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c27d: ret 4 */
  esp += 8; SPILL(); return;
L_f7c280: /* f7c280: mov ecx, esi */
  ecx = esi;
/* f7c282: call 0xf716f4 */
  esp -= 4; W32(esp, 0xf7c287u); SPILL(); f_f716f4(); if (g_unwind) return; RELOAD();
/* f7c287: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c28a: je 0xf7c29b */
  if (zf) goto L_f7c29b;
L_f7c28c: /* f7c28c: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c292: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c298u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c298: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c29b: /* f7c29b: mov eax, esi */
  eax = esi;
/* f7c29d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c29e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c29f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c2d0(void) {
  LOAD_REGS();
L_f7c2d0: /* f7c2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7c2d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7c2d6: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f7c2da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c2dc: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f7c2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c2e1: lea eax, [ecx + 0x1cc] */
  eax = (uint32_t)(ecx + 0x1ccu);
/* f7c2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c2e8: mov eax, dword ptr [0xfba37c] */
  eax = R32((uint32_t)(0xfba37cu));
/* f7c2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c2ee: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7c2f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7c2f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c310(void) {
  LOAD_REGS();
L_f7c310: /* f7c310: mov eax, 0xfc8f28 */
  eax = 0xfc8f28u;
/* f7c315: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c330(void) {
  LOAD_REGS();
L_f7c330: /* f7c330: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7c335: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7c337: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7c33b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7c33f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c341: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c344: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7c348: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c34a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7c34b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c34c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c34d: push 0xfc8f28 */
  { uint32_t v = 0xfc8f28u; esp -= 4; W32(esp, v); }
/* f7c352: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7c358u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7c358: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c35b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c370(void) {
  LOAD_REGS();
L_f7c370: /* f7c370: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7c374: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c390(void) {
  LOAD_REGS();
L_f7c390: /* f7c390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7c392: push 0xf98e88 */
  { uint32_t v = 0xf98e88u; esp -= 4; W32(esp, v); }
/* f7c397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7c39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c39e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7c3a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c3a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c3a7: mov esi, ecx */
  esi = ecx;
/* f7c3a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7c3ad: mov dword ptr [esi], 0xfa2450 */
  W32((uint32_t)(esi), 0xfa2450u);
/* f7c3b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7c3bb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7c3c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7c3c1: mov ecx, esi */
  ecx = esi;
/* f7c3c3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7c3cb: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf7c3d0u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f7c3d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7c3d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c3d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7c3dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c3df: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c400(void) {
  LOAD_REGS();
L_f7c400: /* f7c400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c401: mov esi, ecx */
  esi = ecx;
/* f7c403: call 0xf716fe */
  esp -= 4; W32(esp, 0xf7c408u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f7c408: mov dword ptr [esi], 0xfa2450 */
  W32((uint32_t)(esi), 0xfa2450u);
/* f7c40e: mov eax, esi */
  eax = esi;
/* f7c410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c411: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c430(void) {
  LOAD_REGS();
L_f7c430: /* f7c430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c432: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7c436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c437: mov esi, ecx */
  esi = ecx;
/* f7c439: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf7c43eu); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f7c43e: mov dword ptr [esi], 0xfa2450 */
  W32((uint32_t)(esi), 0xfa2450u);
/* f7c444: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7c44a: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7c450: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7c456: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c457: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7c45d: mov eax, esi */
  eax = esi;
/* f7c45f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c460: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c480(void) {
  LOAD_REGS();
L_f7c480: /* f7c480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c481: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c482: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7c486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c487: mov esi, ecx */
  esi = ecx;
/* f7c489: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7c48eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7c48e: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7c494: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7c49a: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7c4a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c4a1: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7c4a7: mov eax, esi */
  eax = esi;
/* f7c4a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c4aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c4c0(void) {
  LOAD_REGS();
L_f7c4c0: /* f7c4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c4c1: mov esi, ecx */
  esi = ecx;
/* f7c4c3: call 0xf72220 */
  esp -= 4; W32(esp, 0xf7c4c8u); SPILL(); f_f72220(); if (g_unwind) return; RELOAD();
/* f7c4c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c4cd: je 0xf7c4de */
  if (zf) goto L_f7c4de;
L_f7c4cf: /* f7c4cf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c4d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c4d5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c4dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c4db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c4de: /* f7c4de: mov eax, esi */
  eax = esi;
/* f7c4e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c4e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c500(void) {
  LOAD_REGS();
L_f7c500: /* f7c500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7c501: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7c505: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c509: mov esi, ecx */
  esi = ecx;
/* f7c50b: je 0xf7c540 */
  if (zf) goto L_f7c540;
L_f7c50d: /* f7c50d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7c510: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c511: push 0xf72220 */
  { uint32_t v = 0xf72220u; esp -= 4; W32(esp, v); }
/* f7c516: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7c519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c51a: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c520: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7c525u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7c525: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c528: je 0xf7c538 */
  if (zf) goto L_f7c538;
L_f7c52a: /* f7c52a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7c530: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7c532: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7c534: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c535: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7c538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7c538: /* f7c538: mov eax, edi */
  eax = edi;
/* f7c53a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c53b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c53c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c53d: ret 4 */
  esp += 8; SPILL(); return;
L_f7c540: /* f7c540: mov ecx, esi */
  ecx = esi;
/* f7c542: call 0xf72220 */
  esp -= 4; W32(esp, 0xf7c547u); SPILL(); f_f72220(); if (g_unwind) return; RELOAD();
/* f7c547: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c54a: je 0xf7c55b */
  if (zf) goto L_f7c55b;
L_f7c54c: /* f7c54c: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* f7c551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c552: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c558u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c55b: /* f7c55b: mov eax, esi */
  eax = esi;
/* f7c55d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c55e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c55f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c590(void) {
  LOAD_REGS();
L_f7c590: /* f7c590: mov eax, 0xfba540 */
  eax = 0xfba540u;
/* f7c595: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c5b0(void) {
  LOAD_REGS();
L_f7c5b0: /* f7c5b0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7c5b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7c5b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7c5bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7c5bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c5c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c5c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c5c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7c5c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7c5ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7c5cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c5cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c5cd: push 0xfba540 */
  { uint32_t v = 0xfba540u; esp -= 4; W32(esp, v); }
/* f7c5d2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7c5d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7c5d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c5db: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c5f0(void) {
  LOAD_REGS();
L_f7c5f0: /* f7c5f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7c5f4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c610(void) {
  LOAD_REGS();
L_f7c610: /* f7c610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7c612: push 0xf98ec6 */
  { uint32_t v = 0xf98ec6u; esp -= 4; W32(esp, v); }
/* f7c617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7c61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c61e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7c625: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c626: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c627: mov esi, ecx */
  esi = ecx;
/* f7c629: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7c62d: mov dword ptr [esi], 0xfa2540 */
  W32((uint32_t)(esi), 0xfa2540u);
/* f7c633: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* f7c63b: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7c641u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7c641: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* f7c647: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f7c64c: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf7c652u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f7c652: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7c658: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f7c65d: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf7c663u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f7c663: mov ecx, esi */
  ecx = esi;
/* f7c665: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7c66d: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf7c672u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f7c672: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7c676: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c677: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7c67e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c681: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c6b0(void) {
  LOAD_REGS();
L_f7c6b0: /* f7c6b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7c6b2: push 0xf98ef7 */
  { uint32_t v = 0xf98ef7u; esp -= 4; W32(esp, v); }
/* f7c6b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7c6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c6be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7c6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c6c7: mov esi, ecx */
  esi = ecx;
/* f7c6c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7c6cd: call 0xf716fe */
  esp -= 4; W32(esp, 0xf7c6d2u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f7c6d2: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7c6d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7c6e0: mov dword ptr [esi], 0xfa2540 */
  W32((uint32_t)(esi), 0xfa2540u);
/* f7c6e6: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7c6ecu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7c6ec: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* f7c6f2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* f7c6f7: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7c6fdu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7c6fd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7c701: mov eax, esi */
  eax = esi;
/* f7c703: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c704: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7c70b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c70e: ret  */
  esp += 4; SPILL(); return;
}

void f_f7c730(void) {
  LOAD_REGS();
L_f7c730: /* f7c730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7c732: push 0xf98f27 */
  { uint32_t v = 0xf98f27u; esp -= 4; W32(esp, v); }
/* f7c737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7c73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7c745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7c746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c747: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c748: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* f7c74c: mov esi, ecx */
  esi = ecx;
/* f7c74e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c74f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7c753: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf7c758u); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f7c758: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f7c75e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c75f: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7c765: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7c76d: mov dword ptr [esi], 0xfa2540 */
  W32((uint32_t)(esi), 0xfa2540u);
/* f7c773: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7c779u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7c779: mov cl, byte ptr [edi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d8u))) & 0xffu);
/* f7c77f: mov byte ptr [esi + 0x1d8], cl */
  W8((uint32_t)(esi + 0x1d8u), (ecx & 0xffu));
/* f7c785: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* f7c78b: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* f7c791: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* f7c797: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f7c79d: mov cl, byte ptr [edi + 0x1e4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1e4u))) & 0xffu);
/* f7c7a3: lea edx, [edi + 0x1e8] */
  edx = (uint32_t)(edi + 0x1e8u);
/* f7c7a9: mov byte ptr [esi + 0x1e4], cl */
  W8((uint32_t)(esi + 0x1e4u), (ecx & 0xffu));
/* f7c7af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7c7b0: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* f7c7b6: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f7c7bb: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7c7c1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7c7c1: mov ecx, dword ptr [edi + 0x1f4] */
  ecx = R32((uint32_t)(edi + 0x1f4u));
/* f7c7c7: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f7c7cd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7c7cf: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f7c7d5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7c7d8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c7da: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f7c7e0: mov eax, ecx */
  eax = ecx;
/* f7c7e2: mov ecx, dword ptr [edi + 0x1f4] */
  ecx = R32((uint32_t)(edi + 0x1f4u));
/* f7c7e8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c7ea: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7c7ed: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c7ef: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f7c7f5: mov edx, dword ptr [edi + 0x1f8] */
  edx = R32((uint32_t)(edi + 0x1f8u));
/* f7c7fb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* f7c7ff: mov dword ptr [esi + 0x1f8], edx */
  W32((uint32_t)(esi + 0x1f8u), edx);
/* f7c805: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c806: mov eax, esi */
  eax = esi;
/* f7c808: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7c810: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7c813: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c860(void) {
  LOAD_REGS();
L_f7c860: /* f7c860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c861: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c862: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7c866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c867: mov esi, ecx */
  esi = ecx;
/* f7c869: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7c86eu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7c86e: lea eax, [edi + 0x1cc] */
  eax = (uint32_t)(edi + 0x1ccu);
/* f7c874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c875: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* f7c87b: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7c881u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7c881: mov cl, byte ptr [edi + 0x1d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d8u))) & 0xffu);
/* f7c887: mov byte ptr [esi + 0x1d8], cl */
  W8((uint32_t)(esi + 0x1d8u), (ecx & 0xffu));
/* f7c88d: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* f7c893: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* f7c899: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* f7c89f: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* f7c8a5: mov cl, byte ptr [edi + 0x1e4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1e4u))) & 0xffu);
/* f7c8ab: lea edx, [edi + 0x1e8] */
  edx = (uint32_t)(edi + 0x1e8u);
/* f7c8b1: mov byte ptr [esi + 0x1e4], cl */
  W8((uint32_t)(esi + 0x1e4u), (ecx & 0xffu));
/* f7c8b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7c8b8: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* f7c8be: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7c8c4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7c8c4: mov ecx, dword ptr [edi + 0x1f4] */
  ecx = R32((uint32_t)(edi + 0x1f4u));
/* f7c8ca: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* f7c8d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7c8d2: mov ecx, dword ptr [esi + 0x1f4] */
  ecx = R32((uint32_t)(esi + 0x1f4u));
/* f7c8d8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7c8db: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c8dd: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f7c8e3: mov eax, ecx */
  eax = ecx;
/* f7c8e5: mov ecx, dword ptr [edi + 0x1f4] */
  ecx = R32((uint32_t)(edi + 0x1f4u));
/* f7c8eb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c8ed: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7c8f0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7c8f2: mov dword ptr [esi + 0x1f4], ecx */
  W32((uint32_t)(esi + 0x1f4u), ecx);
/* f7c8f8: mov edx, dword ptr [edi + 0x1f8] */
  edx = R32((uint32_t)(edi + 0x1f8u));
/* f7c8fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c8ff: mov dword ptr [esi + 0x1f8], edx */
  W32((uint32_t)(esi + 0x1f8u), edx);
/* f7c905: mov eax, esi */
  eax = esi;
/* f7c907: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c908: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c940(void) {
  LOAD_REGS();
L_f7c940: /* f7c940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c941: mov esi, ecx */
  esi = ecx;
/* f7c943: call 0xf7131b */
  esp -= 4; W32(esp, 0xf7c948u); SPILL(); f_f7131b(); if (g_unwind) return; RELOAD();
/* f7c948: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c94d: je 0xf7c95e */
  if (zf) goto L_f7c95e;
L_f7c94f: /* f7c94f: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f7c954: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c955: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c95bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c95b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c95e: /* f7c95e: mov eax, esi */
  eax = esi;
/* f7c960: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c961: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7c980(void) {
  LOAD_REGS();
L_f7c980: /* f7c980: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7c981: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7c985: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c989: mov esi, ecx */
  esi = ecx;
/* f7c98b: je 0xf7c9c0 */
  if (zf) goto L_f7c9c0;
L_f7c98d: /* f7c98d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7c990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c991: push 0xf7131b */
  { uint32_t v = 0xf7131bu; esp -= 4; W32(esp, v); }
/* f7c996: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7c999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7c99a: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f7c99f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c9a0: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7c9a5u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7c9a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c9a8: je 0xf7c9b8 */
  if (zf) goto L_f7c9b8;
L_f7c9aa: /* f7c9aa: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7c9b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7c9b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7c9b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7c9b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7c9b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7c9b8: /* f7c9b8: mov eax, edi */
  eax = edi;
/* f7c9ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7c9bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c9bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c9bd: ret 4 */
  esp += 8; SPILL(); return;
L_f7c9c0: /* f7c9c0: mov ecx, esi */
  ecx = esi;
/* f7c9c2: call 0xf7131b */
  esp -= 4; W32(esp, 0xf7c9c7u); SPILL(); f_f7131b(); if (g_unwind) return; RELOAD();
/* f7c9c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7c9ca: je 0xf7c9db */
  if (zf) goto L_f7c9db;
L_f7c9cc: /* f7c9cc: push 0x1fc */
  { uint32_t v = 0x1fcu; esp -= 4; W32(esp, v); }
/* f7c9d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7c9d2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7c9d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7c9d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7c9db: /* f7c9db: mov eax, esi */
  eax = esi;
/* f7c9dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7c9de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7c9df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ca10(void) {
  LOAD_REGS();
L_f7ca10: /* f7ca10: mov eax, 0xfc9458 */
  eax = 0xfc9458u;
/* f7ca15: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ca30(void) {
  LOAD_REGS();
L_f7ca30: /* f7ca30: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7ca35: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7ca37: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7ca3b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7ca3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ca41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ca43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ca44: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7ca48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ca4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7ca4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ca4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ca4d: push 0xfc9458 */
  { uint32_t v = 0xfc9458u; esp -= 4; W32(esp, v); }
/* f7ca52: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7ca58u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7ca58: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ca5b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ca70(void) {
  LOAD_REGS();
L_f7ca70: /* f7ca70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7ca74: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ca90(void) {
  LOAD_REGS();
L_f7ca90: /* f7ca90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ca92: push 0xf98f48 */
  { uint32_t v = 0xf98f48u; esp -= 4; W32(esp, v); }
/* f7ca97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ca9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ca9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7caa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7caa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7caa7: mov esi, ecx */
  esi = ecx;
/* f7caa9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7caad: mov dword ptr [esi], 0xfa2630 */
  W32((uint32_t)(esi), 0xfa2630u);
/* f7cab3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* f7cabb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7cac1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7cac1: mov ecx, esi */
  ecx = esi;
/* f7cac3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7cacb: call 0xf71c94 */
  esp -= 4; W32(esp, 0xf7cad0u); SPILL(); f_f71c94(); if (g_unwind) return; RELOAD();
/* f7cad0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7cad4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cad5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7cadc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7cadf: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cb00(void) {
  LOAD_REGS();
L_f7cb00: /* f7cb00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cb01: mov esi, ecx */
  esi = ecx;
/* f7cb03: call 0xf716fe */
  esp -= 4; W32(esp, 0xf7cb08u); SPILL(); f_f716fe(); if (g_unwind) return; RELOAD();
/* f7cb08: mov dword ptr [esi], 0xfa2630 */
  W32((uint32_t)(esi), 0xfa2630u);
/* f7cb0e: mov eax, esi */
  eax = esi;
/* f7cb10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cb11: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cb30(void) {
  LOAD_REGS();
L_f7cb30: /* f7cb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cb31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cb32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7cb36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cb37: mov esi, ecx */
  esi = ecx;
/* f7cb39: call 0xf71ff0 */
  esp -= 4; W32(esp, 0xf7cb3eu); SPILL(); f_f71ff0(); if (g_unwind) return; RELOAD();
/* f7cb3e: mov dword ptr [esi], 0xfa2630 */
  W32((uint32_t)(esi), 0xfa2630u);
/* f7cb44: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7cb4a: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7cb50: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7cb56: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7cb5c: mov dl, byte ptr [edi + 0x1d4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d4u))) & 0xffu);
/* f7cb62: mov byte ptr [esi + 0x1d4], dl */
  W8((uint32_t)(esi + 0x1d4u), (edx & 0xffu));
/* f7cb68: mov al, byte ptr [edi + 0x1d5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d5u))) & 0xffu);
/* f7cb6e: mov byte ptr [esi + 0x1d5], al */
  W8((uint32_t)(esi + 0x1d5u), (eax & 0xffu));
/* f7cb74: mov cl, byte ptr [edi + 0x1d6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d6u))) & 0xffu);
/* f7cb7a: mov byte ptr [esi + 0x1d6], cl */
  W8((uint32_t)(esi + 0x1d6u), (ecx & 0xffu));
/* f7cb80: mov edx, dword ptr [edi + 0x1d8] */
  edx = R32((uint32_t)(edi + 0x1d8u));
/* f7cb86: mov dword ptr [esi + 0x1d8], edx */
  W32((uint32_t)(esi + 0x1d8u), edx);
/* f7cb8c: mov eax, dword ptr [edi + 0x1dc] */
  eax = R32((uint32_t)(edi + 0x1dcu));
/* f7cb92: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* f7cb98: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f7cb9e: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f7cba4: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f7cbaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7cbab: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f7cbb1: mov eax, esi */
  eax = esi;
/* f7cbb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cbb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7cbf0(void) {
  LOAD_REGS();
L_f7cbf0: /* f7cbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cbf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cbf2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* f7cbf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cbf7: mov esi, ecx */
  esi = ecx;
/* f7cbf9: call 0xf71c49 */
  esp -= 4; W32(esp, 0xf7cbfeu); SPILL(); f_f71c49(); if (g_unwind) return; RELOAD();
/* f7cbfe: mov eax, dword ptr [edi + 0x1cc] */
  eax = R32((uint32_t)(edi + 0x1ccu));
/* f7cc04: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* f7cc0a: mov ecx, dword ptr [edi + 0x1d0] */
  ecx = R32((uint32_t)(edi + 0x1d0u));
/* f7cc10: mov dword ptr [esi + 0x1d0], ecx */
  W32((uint32_t)(esi + 0x1d0u), ecx);
/* f7cc16: mov dl, byte ptr [edi + 0x1d4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d4u))) & 0xffu);
/* f7cc1c: mov byte ptr [esi + 0x1d4], dl */
  W8((uint32_t)(esi + 0x1d4u), (edx & 0xffu));
/* f7cc22: mov al, byte ptr [edi + 0x1d5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d5u))) & 0xffu);
/* f7cc28: mov byte ptr [esi + 0x1d5], al */
  W8((uint32_t)(esi + 0x1d5u), (eax & 0xffu));
/* f7cc2e: mov cl, byte ptr [edi + 0x1d6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1d6u))) & 0xffu);
/* f7cc34: mov byte ptr [esi + 0x1d6], cl */
  W8((uint32_t)(esi + 0x1d6u), (ecx & 0xffu));
/* f7cc3a: mov edx, dword ptr [edi + 0x1d8] */
  edx = R32((uint32_t)(edi + 0x1d8u));
/* f7cc40: mov dword ptr [esi + 0x1d8], edx */
  W32((uint32_t)(esi + 0x1d8u), edx);
/* f7cc46: mov eax, dword ptr [edi + 0x1dc] */
  eax = R32((uint32_t)(edi + 0x1dcu));
/* f7cc4c: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* f7cc52: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* f7cc58: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* f7cc5e: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* f7cc64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7cc65: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* f7cc6b: mov eax, esi */
  eax = esi;
/* f7cc6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cc6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ccb0(void) {
  LOAD_REGS();
L_f7ccb0: /* f7ccb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ccb1: mov esi, ecx */
  esi = ecx;
/* f7ccb3: call 0xf71dac */
  esp -= 4; W32(esp, 0xf7ccb8u); SPILL(); f_f71dac(); if (g_unwind) return; RELOAD();
/* f7ccb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ccbd: je 0xf7ccce */
  if (zf) goto L_f7ccce;
L_f7ccbf: /* f7ccbf: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7ccc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ccc5: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7cccbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7cccb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ccce: /* f7ccce: mov eax, esi */
  eax = esi;
/* f7ccd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ccd1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ccf0(void) {
  LOAD_REGS();
L_f7ccf0: /* f7ccf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ccf1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7ccf5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ccf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ccf9: mov esi, ecx */
  esi = ecx;
/* f7ccfb: je 0xf7cd30 */
  if (zf) goto L_f7cd30;
L_f7ccfd: /* f7ccfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7cd00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cd01: push 0xf71dac */
  { uint32_t v = 0xf71dacu; esp -= 4; W32(esp, v); }
/* f7cd06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7cd09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cd0a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7cd0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cd10: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7cd15u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7cd15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7cd18: je 0xf7cd28 */
  if (zf) goto L_f7cd28;
L_f7cd1a: /* f7cd1a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7cd20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7cd22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7cd24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cd25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7cd28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7cd28: /* f7cd28: mov eax, edi */
  eax = edi;
/* f7cd2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7cd2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cd2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7cd2d: ret 4 */
  esp += 8; SPILL(); return;
L_f7cd30: /* f7cd30: mov ecx, esi */
  ecx = esi;
/* f7cd32: call 0xf71dac */
  esp -= 4; W32(esp, 0xf7cd37u); SPILL(); f_f71dac(); if (g_unwind) return; RELOAD();
/* f7cd37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7cd3a: je 0xf7cd4b */
  if (zf) goto L_f7cd4b;
L_f7cd3c: /* f7cd3c: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* f7cd41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cd42: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7cd48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7cd48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7cd4b: /* f7cd4b: mov eax, esi */
  eax = esi;
/* f7cd4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cd4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7cd4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7cd80(void) {
  LOAD_REGS();
L_f7cd80: /* f7cd80: mov eax, dword ptr [0xfba41c] */
  eax = R32((uint32_t)(0xfba41cu));
/* f7cd85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cd86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cd87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7cd89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7cd8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7cd8d: mov esi, ecx */
  esi = ecx;
/* f7cd8f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f7cd91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cd92: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7cd98u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7cd98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cd99: mov ecx, esi */
  ecx = esi;
/* f7cd9b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf7cd9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7cd9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7cd9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cda0: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cdc0(void) {
  LOAD_REGS();
L_f7cdc0: /* f7cdc0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7cdc3: mov dl, byte ptr [esp + 0x24] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* f7cdc7: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* f7cdcb: mov byte ptr [esp + 4], dl */
  W8((uint32_t)(esp + 0x4u), (edx & 0xffu));
/* f7cdcf: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* f7cdd3: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* f7cdd7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* f7cddb: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* f7cddf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7cde1: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f7cde5: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f7cde9: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* f7cded: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7cdee: lea edx, [ecx + 0xe8] */
  edx = (uint32_t)(ecx + 0xe8u);
/* f7cdf4: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f7cdf8: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* f7cdfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7cdfd: mov edx, dword ptr [0xfba474] */
  edx = R32((uint32_t)(0xfba474u));
/* f7ce03: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f7ce07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f7ce09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7ce0a: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* f7ce12: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xf7ce15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ce15: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f7ce19: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ce1c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_f7ce40(void) {
  LOAD_REGS();
L_f7ce40: /* f7ce40: mov eax, 0xfc7538 */
  eax = 0xfc7538u;
/* f7ce45: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ce60(void) {
  LOAD_REGS();
L_f7ce60: /* f7ce60: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7ce65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7ce67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7ce6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7ce6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ce71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ce73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ce74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7ce78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ce7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7ce7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ce7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ce7d: push 0xfc7538 */
  { uint32_t v = 0xfc7538u; esp -= 4; W32(esp, v); }
/* f7ce82: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7ce88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7ce88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ce8b: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cea0(void) {
  LOAD_REGS();
L_f7cea0: /* f7cea0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7cea4: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cec0(void) {
  LOAD_REGS();
L_f7cec0: /* f7cec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7cec2: push 0xf98f8e */
  { uint32_t v = 0xf98f8eu; esp -= 4; W32(esp, v); }
/* f7cec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7cecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ced5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ced6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ced7: mov esi, ecx */
  esi = ecx;
/* f7ced9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7cedd: mov dword ptr [esi], 0xfa2720 */
  W32((uint32_t)(esi), 0xfa2720u);
/* f7cee3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* f7ceeb: call dword ptr [0xfce3ac] */
  esp -= 4; W32(esp, 0xf7cef1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* f7cef1: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f7cef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cef7: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* f7cef9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7cefb: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* f7cf01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7cf02: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* f7cf07: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7cf0cu); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7cf0c: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f7cf0f: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* f7cf14: call dword ptr [0xfce3c0] */
  esp -= 4; W32(esp, 0xf7cf1au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* f7cf1a: mov ecx, esi */
  ecx = esi;
/* f7cf1c: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7cf24: call 0xf71154 */
  esp -= 4; W32(esp, 0xf7cf29u); SPILL(); f_f71154(); if (g_unwind) return; RELOAD();
/* f7cf29: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7cf2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cf2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7cf35: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7cf38: ret  */
  esp += 4; SPILL(); return;
}

void f_f7cf60(void) {
  LOAD_REGS();
L_f7cf60: /* f7cf60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7cf62: push 0xf98fc4 */
  { uint32_t v = 0xf98fc4u; esp -= 4; W32(esp, v); }
/* f7cf67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7cf6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cf6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7cf75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7cf76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7cf77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7cf78: mov esi, ecx */
  esi = ecx;
/* f7cf7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7cf7b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7cf7f: call dword ptr [0xfce3b0] */
  esp -= 4; W32(esp, 0xf7cf85u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* f7cf85: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f7cf88: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7cf90: mov dword ptr [esi], 0xfa2720 */
  W32((uint32_t)(esi), 0xfa2720u);
/* f7cf96: call dword ptr [0xfce3c4] */
  esp -= 4; W32(esp, 0xf7cf9cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* f7cf9c: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* f7cfa1: lea edi, [esi + 0x5c] */
  edi = (uint32_t)(esi + 0x5cu);
/* f7cfa4: mov ebx, 5 */
  ebx = 0x5u;
/* f7cfa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_f7cfb0: /* f7cfb0: mov ecx, edi */
  ecx = edi;
/* f7cfb2: call dword ptr [0xfce504] */
  esp -= 4; W32(esp, 0xf7cfb8u); SPILL(); f_6cb5fa(); if (g_unwind) return; /* Engine!??0FColor@@QAE@XZ */ RELOAD();
/* f7cfb8: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f7cfbb: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* f7cfbc: jne 0xf7cfb0 */
  if (!zf) goto L_f7cfb0;
L_f7cfbe: /* f7cfbe: lea edi, [esi + 0x70] */
  edi = (uint32_t)(esi + 0x70u);
/* f7cfc1: mov ebx, 5 */
  ebx = 0x5u;
L_f7cfc6: /* f7cfc6: mov ecx, edi */
  ecx = edi;
/* f7cfc8: call dword ptr [0xfce504] */
  esp -= 4; W32(esp, 0xf7cfceu); SPILL(); f_6cb5fa(); if (g_unwind) return; /* Engine!??0FColor@@QAE@XZ */ RELOAD();
/* f7cfce: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f7cfd1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* f7cfd2: jne 0xf7cfc6 */
  if (!zf) goto L_f7cfc6;
L_f7cfd4: /* f7cfd4: mov eax, dword ptr [0xfce3c0] */
  eax = R32((uint32_t)(0xfce3c0u));
/* f7cfd9: mov ecx, dword ptr [0xfce3c4] */
  ecx = R32((uint32_t)(0xfce3c4u));
/* f7cfdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7cfe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7cfe1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* f7cfe3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7cfe5: lea edx, [esi + 0xa8] */
  edx = (uint32_t)(esi + 0xa8u);
/* f7cfeb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7cfec: call 0xf978b0 */
  esp -= 4; W32(esp, 0xf7cff1u); SPILL(); f_f978b0(); if (g_unwind) return; RELOAD();
/* f7cff1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7cff5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7cff6: mov eax, esi */
  eax = esi;
/* f7cff8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7cff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7cffa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d001: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d004: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d040(void) {
  LOAD_REGS();
L_f7d040: /* f7d040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7d042: push 0xf98ff4 */
  { uint32_t v = 0xf98ff4u; esp -= 4; W32(esp, v); }
/* f7d047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7d04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d04e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7d055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d056: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d057: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d058: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f7d05c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d05d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d05e: mov ebx, ecx */
  ebx = ecx;
/* f7d060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d061: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* f7d065: call dword ptr [0xfce3b4] */
  esp -= 4; W32(esp, 0xf7d06bu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* f7d06b: mov dword ptr [ebx], 0xfa1020 */
  W32((uint32_t)(ebx), 0xfa1020u);
/* f7d071: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* f7d074: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* f7d077: lea ecx, [ebp + 0x2c] */
  ecx = (uint32_t)(ebp + 0x2cu);
/* f7d07a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d07b: lea ecx, [ebx + 0x2c] */
  ecx = (uint32_t)(ebx + 0x2cu);
/* f7d07e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f7d086: mov dword ptr [ebx], 0xfa2720 */
  W32((uint32_t)(ebx), 0xfa2720u);
/* f7d08c: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7d092u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7d092: lea edx, [ebp + 0x38] */
  edx = (uint32_t)(ebp + 0x38u);
/* f7d095: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f7d097: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* f7d09a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f7d09c: mov dl, byte ptr [edx + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4u))) & 0xffu);
/* f7d09f: mov byte ptr [eax + 4], dl */
  W8((uint32_t)(eax + 0x4u), (edx & 0xffu));
/* f7d0a2: lea esi, [ebp + 0x40] */
  esi = (uint32_t)(ebp + 0x40u);
/* f7d0a5: lea edi, [ebx + 0x40] */
  edi = (uint32_t)(ebx + 0x40u);
/* f7d0a8: mov ecx, 5 */
  ecx = 0x5u;
/* f7d0ad: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f7d0af: lea eax, [ebp + 0x54] */
  eax = (uint32_t)(ebp + 0x54u);
/* f7d0b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* f7d0b4: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* f7d0b7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* f7d0b9: mov al, byte ptr [eax + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* f7d0bc: mov byte ptr [ecx + 4], al */
  W8((uint32_t)(ecx + 0x4u), (eax & 0xffu));
/* f7d0bf: lea esi, [ebp + 0x5c] */
  esi = (uint32_t)(ebp + 0x5cu);
/* f7d0c2: lea edi, [ebx + 0x5c] */
  edi = (uint32_t)(ebx + 0x5cu);
/* f7d0c5: mov ecx, 5 */
  ecx = 0x5u;
/* f7d0ca: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f7d0cc: lea esi, [ebp + 0x70] */
  esi = (uint32_t)(ebp + 0x70u);
/* f7d0cf: lea edi, [ebx + 0x70] */
  edi = (uint32_t)(ebx + 0x70u);
/* f7d0d2: mov ecx, 5 */
  ecx = 0x5u;
/* f7d0d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f7d0d9: lea esi, [ebp + 0x84] */
  esi = (uint32_t)(ebp + 0x84u);
/* f7d0df: lea edi, [ebx + 0x84] */
  edi = (uint32_t)(ebx + 0x84u);
/* f7d0e5: mov ecx, 5 */
  ecx = 0x5u;
/* f7d0ea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* f7d0ec: lea ecx, [ebp + 0x98] */
  ecx = (uint32_t)(ebp + 0x98u);
/* f7d0f2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* f7d0f4: lea edx, [ebx + 0x98] */
  edx = (uint32_t)(ebx + 0x98u);
/* f7d0fa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* f7d0fc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* f7d0ff: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* f7d102: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* f7d105: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* f7d108: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* f7d10b: mov eax, dword ptr [0xfce3c8] */
  eax = R32((uint32_t)(0xfce3c8u));
/* f7d110: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* f7d113: mov edx, dword ptr [0xfce3c0] */
  edx = R32((uint32_t)(0xfce3c0u));
/* f7d119: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7d11a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d11b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* f7d11d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d11f: lea ecx, [ebp + 0xa8] */
  ecx = (uint32_t)(ebp + 0xa8u);
/* f7d125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d126: lea edx, [ebx + 0xa8] */
  edx = (uint32_t)(ebx + 0xa8u);
/* f7d12c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7d12d: mov byte ptr [esp + 0x34], 1 */
  W8((uint32_t)(esp + 0x34u), 0x1u);
/* f7d132: call 0xf97912 */
  esp -= 4; W32(esp, 0xf7d137u); SPILL(); f_f97912(); if (g_unwind) return; RELOAD();
/* f7d137: mov eax, dword ptr [ebp + 0xe4] */
  eax = R32((uint32_t)(ebp + 0xe4u));
/* f7d13d: mov esi, dword ptr [ebx + 0xe4] */
  esi = R32((uint32_t)(ebx + 0xe4u));
/* f7d143: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7d145: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* f7d148: mov ecx, esi */
  ecx = esi;
/* f7d14a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7d14c: mov dword ptr [ebx + 0xe4], ecx */
  W32((uint32_t)(ebx + 0xe4u), ecx);
/* f7d152: mov ecx, dword ptr [ebp + 0xe8] */
  ecx = R32((uint32_t)(ebp + 0xe8u));
/* f7d158: mov dword ptr [ebx + 0xe8], ecx */
  W32((uint32_t)(ebx + 0xe8u), ecx);
/* f7d15e: mov edx, dword ptr [ebp + 0xec] */
  edx = R32((uint32_t)(ebp + 0xecu));
/* f7d164: mov dword ptr [ebx + 0xec], edx */
  W32((uint32_t)(ebx + 0xecu), edx);
/* f7d16a: mov eax, dword ptr [ebp + 0xf0] */
  eax = R32((uint32_t)(ebp + 0xf0u));
/* f7d170: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* f7d176: mov ecx, dword ptr [ebp + 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xf4u));
/* f7d17c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d17d: mov dword ptr [ebx + 0xf4], ecx */
  W32((uint32_t)(ebx + 0xf4u), ecx);
/* f7d183: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7d187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d188: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7d189: mov eax, ebx */
  eax = ebx;
/* f7d18b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d18c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d193: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d200(void) {
  LOAD_REGS();
L_f7d200: /* f7d200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d201: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d203: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d204: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7d208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d209: mov esi, ecx */
  esi = ecx;
/* f7d20b: call dword ptr [0xfce3b8] */
  esp -= 4; W32(esp, 0xf7d211u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7d211: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* f7d214: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* f7d217: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d218: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* f7d21b: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* f7d21e: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7d224u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7d224: mov dl, byte ptr [edi + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x38u))) & 0xffu);
/* f7d227: mov byte ptr [esi + 0x38], dl */
  W8((uint32_t)(esi + 0x38u), (edx & 0xffu));
/* f7d22a: mov al, byte ptr [edi + 0x39] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x39u))) & 0xffu);
/* f7d22d: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* f7d230: mov cl, byte ptr [edi + 0x3a] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3au))) & 0xffu);
/* f7d233: mov byte ptr [esi + 0x3a], cl */
  W8((uint32_t)(esi + 0x3au), (ecx & 0xffu));
/* f7d236: mov dl, byte ptr [edi + 0x3b] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3bu))) & 0xffu);
/* f7d239: mov byte ptr [esi + 0x3b], dl */
  W8((uint32_t)(esi + 0x3bu), (edx & 0xffu));
/* f7d23c: mov al, byte ptr [edi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* f7d23f: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* f7d242: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* f7d245: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* f7d248: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* f7d24b: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* f7d24e: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* f7d251: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* f7d254: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* f7d257: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* f7d25a: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* f7d25d: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* f7d260: mov al, byte ptr [edi + 0x54] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x54u))) & 0xffu);
/* f7d263: mov byte ptr [esi + 0x54], al */
  W8((uint32_t)(esi + 0x54u), (eax & 0xffu));
/* f7d266: mov cl, byte ptr [edi + 0x55] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x55u))) & 0xffu);
/* f7d269: mov byte ptr [esi + 0x55], cl */
  W8((uint32_t)(esi + 0x55u), (ecx & 0xffu));
/* f7d26c: mov dl, byte ptr [edi + 0x56] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* f7d26f: mov byte ptr [esi + 0x56], dl */
  W8((uint32_t)(esi + 0x56u), (edx & 0xffu));
/* f7d272: mov al, byte ptr [edi + 0x57] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x57u))) & 0xffu);
/* f7d275: mov byte ptr [esi + 0x57], al */
  W8((uint32_t)(esi + 0x57u), (eax & 0xffu));
/* f7d278: mov cl, byte ptr [edi + 0x58] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x58u))) & 0xffu);
/* f7d27b: mov byte ptr [esi + 0x58], cl */
  W8((uint32_t)(esi + 0x58u), (ecx & 0xffu));
/* f7d27e: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* f7d281: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* f7d284: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* f7d287: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* f7d28a: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* f7d28d: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* f7d290: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* f7d293: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* f7d296: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* f7d299: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* f7d29c: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* f7d29f: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* f7d2a2: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* f7d2a5: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* f7d2a8: mov eax, dword ptr [edi + 0x78] */
  eax = R32((uint32_t)(edi + 0x78u));
/* f7d2ab: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* f7d2ae: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* f7d2b1: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* f7d2b4: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* f7d2ba: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* f7d2c0: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* f7d2c6: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* f7d2cc: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* f7d2d2: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* f7d2d8: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* f7d2de: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* f7d2e4: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* f7d2ea: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* f7d2f0: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* f7d2f6: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* f7d2fc: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* f7d302: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* f7d308: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* f7d30e: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* f7d314: mov ecx, dword ptr [edi + 0xa0] */
  ecx = R32((uint32_t)(edi + 0xa0u));
/* f7d31a: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* f7d320: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* f7d326: mov ebp, edi */
  ebp = edi;
/* f7d328: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* f7d32e: lea ebx, [esi + 0xa8] */
  ebx = (uint32_t)(esi + 0xa8u);
/* f7d334: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* f7d336: mov dword ptr [esp + 0x14], 5 */
  W32((uint32_t)(esp + 0x14u), 0x5u);
/* f7d33e: mov edi, edi */
  edi = edi;
L_f7d340: /* f7d340: lea eax, [ebx + ebp] */
  eax = (uint32_t)(ebx + ebp);
/* f7d343: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d344: mov ecx, ebx */
  ecx = ebx;
/* f7d346: call dword ptr [0xfce3cc] */
  esp -= 4; W32(esp, 0xf7d34cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* f7d34c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* f7d350: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f7d353: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* f7d354: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* f7d358: jne 0xf7d340 */
  if (!zf) goto L_f7d340;
L_f7d35a: /* f7d35a: mov ecx, dword ptr [edi + 0xe4] */
  ecx = R32((uint32_t)(edi + 0xe4u));
/* f7d360: mov ebx, dword ptr [esi + 0xe4] */
  ebx = R32((uint32_t)(esi + 0xe4u));
/* f7d366: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* f7d368: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* f7d36b: mov eax, ebx */
  eax = ebx;
/* f7d36d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* f7d36f: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* f7d375: mov edx, dword ptr [edi + 0xe8] */
  edx = R32((uint32_t)(edi + 0xe8u));
/* f7d37b: mov dword ptr [esi + 0xe8], edx */
  W32((uint32_t)(esi + 0xe8u), edx);
/* f7d381: mov eax, dword ptr [edi + 0xec] */
  eax = R32((uint32_t)(edi + 0xecu));
/* f7d387: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* f7d38d: mov ecx, dword ptr [edi + 0xf0] */
  ecx = R32((uint32_t)(edi + 0xf0u));
/* f7d393: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* f7d399: mov edx, dword ptr [edi + 0xf4] */
  edx = R32((uint32_t)(edi + 0xf4u));
/* f7d39f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d3a0: mov dword ptr [esi + 0xf4], edx */
  W32((uint32_t)(esi + 0xf4u), edx);
/* f7d3a6: mov eax, esi */
  eax = esi;
/* f7d3a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d3a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7d3aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d3ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d420(void) {
  LOAD_REGS();
L_f7d420: /* f7d420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d421: mov esi, ecx */
  esi = ecx;
/* f7d423: call 0xf7206d */
  esp -= 4; W32(esp, 0xf7d428u); SPILL(); f_f7206d(); if (g_unwind) return; RELOAD();
/* f7d428: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7d42d: je 0xf7d43e */
  if (zf) goto L_f7d43e;
L_f7d42f: /* f7d42f: push 0xf8 */
  { uint32_t v = 0xf8u; esp -= 4; W32(esp, v); }
/* f7d434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d435: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7d43bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7d43b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7d43e: /* f7d43e: mov eax, esi */
  eax = esi;
/* f7d440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d441: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d460(void) {
  LOAD_REGS();
L_f7d460: /* f7d460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d461: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7d465: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7d468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d469: mov esi, ecx */
  esi = ecx;
/* f7d46b: je 0xf7d4a0 */
  if (zf) goto L_f7d4a0;
L_f7d46d: /* f7d46d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* f7d470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d471: push 0xf7206d */
  { uint32_t v = 0xf7206du; esp -= 4; W32(esp, v); }
/* f7d476: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* f7d479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d47a: push 0xf8 */
  { uint32_t v = 0xf8u; esp -= 4; W32(esp, v); }
/* f7d47f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d480: call 0xf97850 */
  esp -= 4; W32(esp, 0xf7d485u); SPILL(); f_f97850(); if (g_unwind) return; RELOAD();
/* f7d485: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7d488: je 0xf7d498 */
  if (zf) goto L_f7d498;
L_f7d48a: /* f7d48a: mov ecx, dword ptr [0xfce318] */
  ecx = R32((uint32_t)(0xfce318u));
/* f7d490: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* f7d492: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7d494: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d495: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7d498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7d498: /* f7d498: mov eax, edi */
  eax = edi;
/* f7d49a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d49b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d49c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d49d: ret 4 */
  esp += 8; SPILL(); return;
L_f7d4a0: /* f7d4a0: mov ecx, esi */
  ecx = esi;
/* f7d4a2: call 0xf7206d */
  esp -= 4; W32(esp, 0xf7d4a7u); SPILL(); f_f7206d(); if (g_unwind) return; RELOAD();
/* f7d4a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7d4aa: je 0xf7d4bb */
  if (zf) goto L_f7d4bb;
L_f7d4ac: /* f7d4ac: push 0xf8 */
  { uint32_t v = 0xf8u; esp -= 4; W32(esp, v); }
/* f7d4b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d4b2: call dword ptr [0xfce3bc] */
  esp -= 4; W32(esp, 0xf7d4b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* f7d4b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7d4bb: /* f7d4bb: mov eax, esi */
  eax = esi;
/* f7d4bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d4be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d4bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d4f0(void) {
  LOAD_REGS();
L_f7d4f0: /* f7d4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d4f1: mov esi, ecx */
  esi = ecx;
/* f7d4f3: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* f7d4f6: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7d4fcu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7d4fc: mov eax, esi */
  eax = esi;
/* f7d4fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d4ff: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d510(void) {
  LOAD_REGS();
L_f7d510: /* f7d510: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f7d513: jmp dword ptr [0xfce31c] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_f7d530(void) {
  LOAD_REGS();
L_f7d530: /* f7d530: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7d533: mov edx, dword ptr [0xfba3ec] */
  edx = R32((uint32_t)(0xfba3ecu));
/* f7d539: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7d53d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d53e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d53f: mov esi, ecx */
  esi = ecx;
/* f7d541: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f7d543: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d545: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7d549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d54a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d54c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7d54d: mov ecx, esi */
  ecx = esi;
/* f7d54f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* f7d557: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* f7d55b: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7d561u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7d561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d562: mov ecx, esi */
  ecx = esi;
/* f7d564: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf7d567u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7d567: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7d56b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d56c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d56d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d570: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d5a0(void) {
  LOAD_REGS();
L_f7d5a0: /* f7d5a0: mov eax, 0xfc4128 */
  eax = 0xfc4128u;
/* f7d5a5: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d5c0(void) {
  LOAD_REGS();
L_f7d5c0: /* f7d5c0: mov eax, dword ptr [0xfce33c] */
  eax = R32((uint32_t)(0xfce33cu));
/* f7d5c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7d5c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* f7d5cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7d5cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d5d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d5d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7d5d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d5da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7d5db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d5dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d5dd: push 0xfc4128 */
  { uint32_t v = 0xfc4128u; esp -= 4; W32(esp, v); }
/* f7d5e2: call dword ptr [0xfce338] */
  esp -= 4; W32(esp, 0xf7d5e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* f7d5e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d5eb: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d600(void) {
  LOAD_REGS();
L_f7d600: /* f7d600: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* f7d604: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d620(void) {
  LOAD_REGS();
L_f7d620: /* f7d620: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7d622: push 0xf99019 */
  { uint32_t v = 0xf99019u; esp -= 4; W32(esp, v); }
/* f7d627: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7d62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d62e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7d635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d636: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d637: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d638: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d639: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7d63d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d640: mov esi, ecx */
  esi = ecx;
/* f7d642: xor ebx, ebx */
  ebx = 0;
/* f7d644: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d646: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7d64a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* f7d64c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7d64f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7d652: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7d658u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7d658: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* f7d65b: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d65e: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* f7d662: jle 0xf7d696 */
  if ((zf || sf != of)) goto L_f7d696;
L_f7d664: /* f7d664: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d665: xor ebp, ebp */
  ebp = 0;
L_f7d667: /* f7d667: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d669: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7d66b: mov ecx, esi */
  ecx = esi;
/* f7d66d: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7d673u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7d673: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7d675: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* f7d678: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* f7d67b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7d67d: je 0xf7d68a */
  if (zf) goto L_f7d68a;
L_f7d67f: /* f7d67f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7d681: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f7d683: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7d684: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf7d68au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_f7d68a: /* f7d68a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d68d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7d68e: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f7d691: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d693: jl 0xf7d667 */
  if ((sf != of)) goto L_f7d667;
L_f7d695: /* f7d695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f7d696: /* f7d696: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7d69a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d69b: mov eax, esi */
  eax = esi;
/* f7d69d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d69e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d69f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d6a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d6a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d6e0(void) {
  LOAD_REGS();
L_f7d6e0: /* f7d6e0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7d6e6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7d6e8: push 0xf99039 */
  { uint32_t v = 0xf99039u; esp -= 4; W32(esp, v); }
/* f7d6ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d6ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7d6f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d6f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d6f7: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* f7d6fb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d6fe: mov esi, ecx */
  esi = ecx;
/* f7d700: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7d702: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7d708: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7d70b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7d70e: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7d714u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7d714: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7d717: xor eax, eax */
  eax = 0;
/* f7d719: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7d71b: jle 0xf7d732 */
  if ((zf || sf != of)) goto L_f7d732;
L_f7d71d: /* f7d71d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7d720: /* f7d720: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f7d722: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* f7d725: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7d727: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* f7d72a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7d72d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f7d72e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d730: jl 0xf7d720 */
  if ((sf != of)) goto L_f7d720;
L_f7d732: /* f7d732: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7d736: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d737: mov eax, esi */
  eax = esi;
/* f7d739: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d741: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d744: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d770(void) {
  LOAD_REGS();
L_f7d770: /* f7d770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7d772: push 0xf99059 */
  { uint32_t v = 0xf99059u; esp -= 4; W32(esp, v); }
/* f7d777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7d77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d77e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7d785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d786: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d788: mov esi, ecx */
  esi = ecx;
/* f7d78a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d78b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7d78f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f7d792: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7d794: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f7d79a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7d7a2: jge 0xf7d7b8 */
  if ((sf == of)) goto L_f7d7b8;
L_f7d7a4: /* f7d7a4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7d7a9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7d7ae: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7d7b3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf7d7b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7d7b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7d7b8: /* f7d7b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d7bb: jle 0xf7d7d1 */
  if ((zf || sf != of)) goto L_f7d7d1;
L_f7d7bd: /* f7d7bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7d7c2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7d7c7: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7d7cc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf7d7ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7d7ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7d7d1: /* f7d7d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7d7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d7d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7d7d6: mov ecx, esi */
  ecx = esi;
/* f7d7d8: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7d7deu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7d7de: mov ecx, esi */
  ecx = esi;
/* f7d7e0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f7d7e8: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf7d7eeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f7d7ee: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7d7f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d7f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d7f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d7f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d7fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d7ff: ret  */
  esp += 4; SPILL(); return;
}

void f_f7d830(void) {
  LOAD_REGS();
L_f7d830: /* f7d830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7d834: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* f7d83b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* f7d83e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* f7d846: jmp dword ptr [0xfce32c] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f7d860(void) {
  LOAD_REGS();
L_f7d860: /* f7d860: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d861: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d862: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d863: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7d867: mov esi, ecx */
  esi = ecx;
/* f7d869: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7d86b: je 0xf7d8b4 */
  if (zf) goto L_f7d8b4;
L_f7d86d: /* f7d86d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d870: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7d872: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7d879: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7d87c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7d882u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7d882: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d885: xor ebx, ebx */
  ebx = 0;
/* f7d887: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7d889: jle 0xf7d8b4 */
  if ((zf || sf != of)) goto L_f7d8b4;
L_f7d88b: /* f7d88b: jmp 0xf7d890 */
  goto L_f7d890;
L_f7d890: /* f7d890: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7d892: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7d894: mov ecx, esi */
  ecx = esi;
/* f7d896: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7d89cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7d89c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7d89e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7d8a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7d8a3: je 0xf7d8ac */
  if (zf) goto L_f7d8ac;
L_f7d8a5: /* f7d8a5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7d8a7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7d8aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7d8ac: /* f7d8ac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d8af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7d8b0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d8b2: jl 0xf7d890 */
  if ((sf != of)) goto L_f7d890;
L_f7d8b4: /* f7d8b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d8b5: mov eax, esi */
  eax = esi;
/* f7d8b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d8b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d8b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d88d(void) {
  LOAD_REGS();
L_f7d88d: /* f7d88d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7d890: /* f7d890: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7d892: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7d894: mov ecx, esi */
  ecx = esi;
/* f7d896: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7d89cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7d89c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7d89e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7d8a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7d8a3: je 0xf7d8ac */
  if (zf) goto L_f7d8ac;
L_f7d8a5: /* f7d8a5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7d8a7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7d8aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7d8ac: /* f7d8ac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d8af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7d8b0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d8b2: jl 0xf7d890 */
  if ((sf != of)) goto L_f7d890;
L_f7d8b4: /* f7d8b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d8b5: mov eax, esi */
  eax = esi;
/* f7d8b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d8b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d8b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d8e0(void) {
  LOAD_REGS();
L_f7d8e0: /* f7d8e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7d8e2: push 0xf99079 */
  { uint32_t v = 0xf99079u; esp -= 4; W32(esp, v); }
/* f7d8e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7d8ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7d8ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7d8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7d8f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d8f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d8f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d8f9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7d8fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d900: mov esi, ecx */
  esi = ecx;
/* f7d902: xor ebx, ebx */
  ebx = 0;
/* f7d904: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d906: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7d90a: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* f7d90c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7d90f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7d912: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7d918u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7d918: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* f7d91b: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d91e: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* f7d922: jle 0xf7d95f */
  if ((zf || sf != of)) goto L_f7d95f;
L_f7d924: /* f7d924: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d925: xor ebp, ebp */
  ebp = 0;
L_f7d927: /* f7d927: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d929: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7d92b: mov ecx, esi */
  ecx = esi;
/* f7d92d: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7d933u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7d933: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7d935: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* f7d938: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7d93b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7d93d: je 0xf7d953 */
  if (zf) goto L_f7d953;
L_f7d93f: /* f7d93f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7d941: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f7d943: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f7d945: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f7d947: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f7d94a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f7d94d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f7d950: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_f7d953: /* f7d953: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d956: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7d957: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f7d95a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7d95c: jl 0xf7d927 */
  if ((sf != of)) goto L_f7d927;
L_f7d95e: /* f7d95e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f7d95f: /* f7d95f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7d963: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7d964: mov eax, esi */
  eax = esi;
/* f7d966: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7d967: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7d968: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7d96f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7d972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7d9b0(void) {
  LOAD_REGS();
L_f7d9b0: /* f7d9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7d9b4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* f7d9bb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* f7d9be: mov dword ptr [esp + 4], 0xc */
  W32((uint32_t)(esp + 0x4u), 0xcu);
/* f7d9c6: jmp dword ptr [0xfce32c] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f7d9e0(void) {
  LOAD_REGS();
L_f7d9e0: /* f7d9e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7d9e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7d9e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7d9e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7d9e4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7d9e8: mov esi, ecx */
  esi = ecx;
/* f7d9ea: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7d9ec: je 0xf7da47 */
  if (zf) goto L_f7da47;
L_f7d9ee: /* f7d9ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7d9f1: xor ebp, ebp */
  ebp = 0;
/* f7d9f3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7d9f5: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* f7d9f8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7d9fb: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7da01u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7da01: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7da04: xor ebx, ebx */
  ebx = 0;
/* f7da06: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7da08: jle 0xf7da47 */
  if ((zf || sf != of)) goto L_f7da47;
L_f7da0a: /* f7da0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_f7da10: /* f7da10: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7da12: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7da14: mov ecx, esi */
  ecx = esi;
/* f7da16: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7da1cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7da1c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7da1e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* f7da21: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7da24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7da26: je 0xf7da3c */
  if (zf) goto L_f7da3c;
L_f7da28: /* f7da28: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7da2a: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f7da2c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* f7da2e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* f7da30: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* f7da33: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* f7da36: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* f7da39: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_f7da3c: /* f7da3c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7da3f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7da40: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f7da43: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7da45: jl 0xf7da10 */
  if ((sf != of)) goto L_f7da10;
L_f7da47: /* f7da47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7da48: mov eax, esi */
  eax = esi;
/* f7da4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7da4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7da4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7da4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7da70(void) {
  LOAD_REGS();
L_f7da70: /* f7da70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7da72: push 0xf99099 */
  { uint32_t v = 0xf99099u; esp -= 4; W32(esp, v); }
/* f7da77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7da7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7da7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7da85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7da86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7da87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7da88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7da89: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7da8d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7da90: mov esi, ecx */
  esi = ecx;
/* f7da92: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7da94: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7da98: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7da9e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7daa1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7daa4: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7daaau); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7daaa: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7dab1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dab4: xor ebx, ebx */
  ebx = 0;
/* f7dab6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7dab8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7dac0: jle 0xf7dae6 */
  if ((zf || sf != of)) goto L_f7dae6;
L_f7dac2: /* f7dac2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7dac4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7dac6: mov ecx, esi */
  ecx = esi;
/* f7dac8: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7daceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7dace: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7dad0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7dad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7dad5: je 0xf7dade */
  if (zf) goto L_f7dade;
L_f7dad7: /* f7dad7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7dad9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7dadc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7dade: /* f7dade: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dae1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7dae2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dae4: jl 0xf7dac2 */
  if ((sf != of)) goto L_f7dac2;
L_f7dae6: /* f7dae6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7daea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7daeb: mov eax, esi */
  eax = esi;
/* f7daed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7daee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7daef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7daf6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7daf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7db30(void) {
  LOAD_REGS();
L_f7db30: /* f7db30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7db34: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* f7db3b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* f7db3e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* f7db46: jmp dword ptr [0xfce32c] */
  SPILL(); f_4e4502(); return; /* Core!?Realloc@FArray@@IAEXH@Z */
}

void f_f7db60(void) {
  LOAD_REGS();
L_f7db60: /* f7db60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7db61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7db62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7db63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7db67: mov esi, ecx */
  esi = ecx;
/* f7db69: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7db6b: je 0xf7dbb4 */
  if (zf) goto L_f7dbb4;
L_f7db6d: /* f7db6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7db70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7db72: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7db79: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7db7c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7db82u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7db82: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7db85: xor ebx, ebx */
  ebx = 0;
/* f7db87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7db89: jle 0xf7dbb4 */
  if ((zf || sf != of)) goto L_f7dbb4;
L_f7db8b: /* f7db8b: jmp 0xf7db90 */
  goto L_f7db90;
L_f7db90: /* f7db90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7db92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7db94: mov ecx, esi */
  ecx = esi;
/* f7db96: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7db9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7db9c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7db9e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7dba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7dba3: je 0xf7dbac */
  if (zf) goto L_f7dbac;
L_f7dba5: /* f7dba5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7dba7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7dbaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7dbac: /* f7dbac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dbaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7dbb0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dbb2: jl 0xf7db90 */
  if ((sf != of)) goto L_f7db90;
L_f7dbb4: /* f7dbb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7dbb5: mov eax, esi */
  eax = esi;
/* f7dbb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dbb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7dbb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7db8d(void) {
  LOAD_REGS();
L_f7db8d: /* f7db8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7db90: /* f7db90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7db92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7db94: mov ecx, esi */
  ecx = esi;
/* f7db96: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7db9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7db9c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7db9e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7dba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7dba3: je 0xf7dbac */
  if (zf) goto L_f7dbac;
L_f7dba5: /* f7dba5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7dba7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7dbaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7dbac: /* f7dbac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dbaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7dbb0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dbb2: jl 0xf7db90 */
  if ((sf != of)) goto L_f7db90;
L_f7dbb4: /* f7dbb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7dbb5: mov eax, esi */
  eax = esi;
/* f7dbb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dbb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7dbb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7dbe0(void) {
  LOAD_REGS();
L_f7dbe0: /* f7dbe0: mov eax, ecx */
  eax = ecx;
/* f7dbe2: ret  */
  esp += 4; SPILL(); return;
}

void f_f7dc00(void) {
  LOAD_REGS();
L_f7dc00: /* f7dc00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7dc04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dc05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dc06: mov esi, ecx */
  esi = ecx;
/* f7dc08: call 0xf718b1 */
  esp -= 4; W32(esp, 0xf7dc0du); SPILL(); f_f718b1(); if (g_unwind) return; RELOAD();
/* f7dc0d: mov eax, esi */
  eax = esi;
/* f7dc0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dc10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7dc30(void) {
  LOAD_REGS();
L_f7dc30: /* f7dc30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7dc32: push 0xf990b9 */
  { uint32_t v = 0xf990b9u; esp -= 4; W32(esp, v); }
/* f7dc37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7dc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dc3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7dc45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7dc46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7dc47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dc48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7dc49: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7dc4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dc50: mov esi, ecx */
  esi = ecx;
/* f7dc52: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7dc54: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7dc58: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7dc5e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7dc61: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7dc64: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7dc6au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7dc6a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7dc71: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dc74: xor ebx, ebx */
  ebx = 0;
/* f7dc76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7dc78: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7dc80: jle 0xf7dca6 */
  if ((zf || sf != of)) goto L_f7dca6;
L_f7dc82: /* f7dc82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7dc84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7dc86: mov ecx, esi */
  ecx = esi;
/* f7dc88: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7dc8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7dc8e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7dc90: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7dc93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7dc95: je 0xf7dc9e */
  if (zf) goto L_f7dc9e;
L_f7dc97: /* f7dc97: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7dc99: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7dc9c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7dc9e: /* f7dc9e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dca1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7dca2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dca4: jl 0xf7dc82 */
  if ((sf != of)) goto L_f7dc82;
L_f7dca6: /* f7dca6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7dcaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7dcab: mov eax, esi */
  eax = esi;
/* f7dcad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dcae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7dcaf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7dcb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7dcb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7dcf0(void) {
  LOAD_REGS();
L_f7dcf0: /* f7dcf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7dcf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dcf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dcf6: mov esi, ecx */
  esi = ecx;
/* f7dcf8: call 0xf7208b */
  esp -= 4; W32(esp, 0xf7dcfdu); SPILL(); f_f7208b(); if (g_unwind) return; RELOAD();
/* f7dcfd: mov eax, esi */
  eax = esi;
/* f7dcff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dd00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7dd20(void) {
  LOAD_REGS();
L_f7dd20: /* f7dd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7dd24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dd25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dd26: mov esi, ecx */
  esi = ecx;
/* f7dd28: call 0xf72068 */
  esp -= 4; W32(esp, 0xf7dd2du); SPILL(); f_f72068(); if (g_unwind) return; RELOAD();
/* f7dd2d: mov eax, esi */
  eax = esi;
/* f7dd2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7dd30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7dd50(void) {
  LOAD_REGS();
L_f7dd50: /* f7dd50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7dd52: push 0xf990d9 */
  { uint32_t v = 0xf990d9u; esp -= 4; W32(esp, v); }
/* f7dd57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7dd5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dd5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7dd65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7dd66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7dd67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dd68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7dd69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7dd6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dd70: mov esi, ecx */
  esi = ecx;
/* f7dd72: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7dd74: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7dd78: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7dd7e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7dd81: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7dd84: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7dd8au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7dd8a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7dd91: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dd94: xor ebx, ebx */
  ebx = 0;
/* f7dd96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7dd98: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7dda0: jle 0xf7ddc6 */
  if ((zf || sf != of)) goto L_f7ddc6;
L_f7dda2: /* f7dda2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7dda4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7dda6: mov ecx, esi */
  ecx = esi;
/* f7dda8: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ddaeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ddae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ddb0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7ddb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7ddb5: je 0xf7ddbe */
  if (zf) goto L_f7ddbe;
L_f7ddb7: /* f7ddb7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7ddb9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7ddbc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7ddbe: /* f7ddbe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ddc1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7ddc2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ddc4: jl 0xf7dda2 */
  if ((sf != of)) goto L_f7dda2;
L_f7ddc6: /* f7ddc6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7ddca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ddcb: mov eax, esi */
  eax = esi;
/* f7ddcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ddce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ddcf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7ddd6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ddd9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7de10(void) {
  LOAD_REGS();
L_f7de10: /* f7de10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7de12: push 0xf990f9 */
  { uint32_t v = 0xf990f9u; esp -= 4; W32(esp, v); }
/* f7de17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7de1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7de1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7de25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7de26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7de27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7de28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7de29: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7de2d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7de30: mov esi, ecx */
  esi = ecx;
/* f7de32: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7de34: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7de38: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7de3e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7de41: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7de44: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7de4au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7de4a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7de51: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7de54: xor ebx, ebx */
  ebx = 0;
/* f7de56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7de58: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7de60: jle 0xf7de86 */
  if ((zf || sf != of)) goto L_f7de86;
L_f7de62: /* f7de62: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7de64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7de66: mov ecx, esi */
  ecx = esi;
/* f7de68: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7de6eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7de6e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7de70: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7de73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7de75: je 0xf7de7e */
  if (zf) goto L_f7de7e;
L_f7de77: /* f7de77: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7de79: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7de7c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7de7e: /* f7de7e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7de81: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7de82: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7de84: jl 0xf7de62 */
  if ((sf != of)) goto L_f7de62;
L_f7de86: /* f7de86: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7de8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7de8b: mov eax, esi */
  eax = esi;
/* f7de8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7de8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7de8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7de96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7de99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ded0(void) {
  LOAD_REGS();
L_f7ded0: /* f7ded0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ded2: push 0xf99119 */
  { uint32_t v = 0xf99119u; esp -= 4; W32(esp, v); }
/* f7ded7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7dedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7dede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7dee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7dee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7dee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7dee9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7deed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7def0: mov esi, ecx */
  esi = ecx;
/* f7def2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7def4: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7def8: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7defe: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7df01: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7df04: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7df0au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7df0a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7df11: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7df14: xor ebx, ebx */
  ebx = 0;
/* f7df16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7df18: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7df20: jle 0xf7df46 */
  if ((zf || sf != of)) goto L_f7df46;
L_f7df22: /* f7df22: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7df24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7df26: mov ecx, esi */
  ecx = esi;
/* f7df28: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7df2eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7df2e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7df30: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7df33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7df35: je 0xf7df3e */
  if (zf) goto L_f7df3e;
L_f7df37: /* f7df37: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7df39: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7df3c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7df3e: /* f7df3e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7df41: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7df42: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7df44: jl 0xf7df22 */
  if ((sf != of)) goto L_f7df22;
L_f7df46: /* f7df46: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7df4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7df4b: mov eax, esi */
  eax = esi;
/* f7df4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7df4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7df4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7df56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7df59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7df90(void) {
  LOAD_REGS();
L_f7df90: /* f7df90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7df92: push 0xf99139 */
  { uint32_t v = 0xf99139u; esp -= 4; W32(esp, v); }
/* f7df97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7df9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7df9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7dfa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7dfa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7dfa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7dfa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7dfa9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7dfad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dfb0: mov esi, ecx */
  esi = ecx;
/* f7dfb2: xor ebx, ebx */
  ebx = 0;
/* f7dfb4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f7dfb6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7dfba: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* f7dfbc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7dfbf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7dfc2: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7dfc8u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7dfc8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* f7dfcb: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dfce: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* f7dfd2: jle 0xf7e002 */
  if ((zf || sf != of)) goto L_f7e002;
L_f7dfd4: /* f7dfd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7dfd5: xor ebp, ebp */
  ebp = 0;
L_f7dfd7: /* f7dfd7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f7dfd9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7dfdb: mov ecx, esi */
  ecx = esi;
/* f7dfdd: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7dfe3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7dfe3: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* f7dfe6: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* f7dfe8: je 0xf7dff6 */
  if (zf) goto L_f7dff6;
L_f7dfea: /* f7dfea: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* f7dfec: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f7dfee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7dfef: mov ecx, eax */
  ecx = eax;
/* f7dff1: call 0xf7165e */
  esp -= 4; W32(esp, 0xf7dff6u); SPILL(); f_f7165e(); if (g_unwind) return; RELOAD();
L_f7dff6: /* f7dff6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7dff9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7dffa: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f7dffd: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7dfff: jl 0xf7dfd7 */
  if ((sf != of)) goto L_f7dfd7;
L_f7e001: /* f7e001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f7e002: /* f7e002: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7e006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e007: mov eax, esi */
  eax = esi;
/* f7e009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e00b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7e012: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7e015: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e050(void) {
  LOAD_REGS();
L_f7e050: /* f7e050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7e052: push 0xf99159 */
  { uint32_t v = 0xf99159u; esp -= 4; W32(esp, v); }
/* f7e057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7e05d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e05e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7e065: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7e068: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e069: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* f7e06d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* f7e070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e071: mov esi, ecx */
  esi = ecx;
/* f7e073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e074: xor edi, edi */
  edi = 0;
/* f7e076: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f7e078: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* f7e07c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* f7e07e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7e081: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e084: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e08au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e08a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* f7e08d: cmp dword ptr [ebp + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e090: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* f7e094: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* f7e098: jle 0xf7e0e9 */
  if ((zf || sf != of)) goto L_f7e0e9;
L_f7e09a: /* f7e09a: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* f7e09e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e09f: nop  */
L_f7e0a0: /* f7e0a0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f7e0a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e0a4: mov ecx, esi */
  ecx = esi;
/* f7e0a6: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e0acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e0ac: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e0ae: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* f7e0b1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* f7e0b3: mov ebx, eax */
  ebx = eax;
/* f7e0b5: je 0xf7e0cd */
  if (zf) goto L_f7e0cd;
L_f7e0b7: /* f7e0b7: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* f7e0ba: add edi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* f7e0be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e0bf: mov ecx, ebx */
  ecx = ebx;
/* f7e0c1: call dword ptr [0xfce3c8] */
  esp -= 4; W32(esp, 0xf7e0c7u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* f7e0c7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* f7e0ca: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
L_f7e0cd: /* f7e0cd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* f7e0d1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* f7e0d5: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* f7e0d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* f7e0d9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* f7e0dc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e0de: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f7e0e2: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* f7e0e6: jl 0xf7e0a0 */
  if ((sf != of)) goto L_f7e0a0;
L_f7e0e8: /* f7e0e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f7e0e9: /* f7e0e9: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7e0ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e0ee: mov eax, esi */
  eax = esi;
/* f7e0f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e0f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e0f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7e0f9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7e0fc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e130(void) {
  LOAD_REGS();
L_f7e130: /* f7e130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7e132: push 0xf99179 */
  { uint32_t v = 0xf99179u; esp -= 4; W32(esp, v); }
/* f7e137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7e13d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e13e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7e145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7e146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e147: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e148: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e149: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7e14d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e150: mov esi, ecx */
  esi = ecx;
/* f7e152: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e154: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7e158: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7e15e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7e161: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e164: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e16au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e16a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e171: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e174: xor ebx, ebx */
  ebx = 0;
/* f7e176: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e178: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7e180: jle 0xf7e1a6 */
  if ((zf || sf != of)) goto L_f7e1a6;
L_f7e182: /* f7e182: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e184: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e186: mov ecx, esi */
  ecx = esi;
/* f7e188: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e18eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e18e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e190: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e195: je 0xf7e19e */
  if (zf) goto L_f7e19e;
L_f7e197: /* f7e197: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e199: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e19c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e19e: /* f7e19e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e1a1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e1a2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e1a4: jl 0xf7e182 */
  if ((sf != of)) goto L_f7e182;
L_f7e1a6: /* f7e1a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7e1aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e1ab: mov eax, esi */
  eax = esi;
/* f7e1ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e1ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e1af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7e1b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7e1b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e1f0(void) {
  LOAD_REGS();
L_f7e1f0: /* f7e1f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7e1f2: push 0xf99199 */
  { uint32_t v = 0xf99199u; esp -= 4; W32(esp, v); }
/* f7e1f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7e1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e1fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7e205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7e206: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e207: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e209: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7e20d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e210: mov esi, ecx */
  esi = ecx;
/* f7e212: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e214: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7e218: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7e21e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7e221: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e224: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e22au); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e22a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e231: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e234: xor ebx, ebx */
  ebx = 0;
/* f7e236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e238: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7e240: jle 0xf7e266 */
  if ((zf || sf != of)) goto L_f7e266;
L_f7e242: /* f7e242: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e244: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e246: mov ecx, esi */
  ecx = esi;
/* f7e248: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e24eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e24e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e250: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e253: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e255: je 0xf7e25e */
  if (zf) goto L_f7e25e;
L_f7e257: /* f7e257: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e259: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e25c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e25e: /* f7e25e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e261: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e262: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e264: jl 0xf7e242 */
  if ((sf != of)) goto L_f7e242;
L_f7e266: /* f7e266: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7e26a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e26b: mov eax, esi */
  eax = esi;
/* f7e26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e26e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e26f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7e276: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7e279: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e2b0(void) {
  LOAD_REGS();
L_f7e2b0: /* f7e2b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7e2b2: push 0xf991b9 */
  { uint32_t v = 0xf991b9u; esp -= 4; W32(esp, v); }
/* f7e2b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7e2bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e2be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7e2c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7e2c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e2c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e2c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e2c9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* f7e2cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e2d0: mov esi, ecx */
  esi = ecx;
/* f7e2d2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e2d4: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* f7e2d8: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* f7e2de: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* f7e2e1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e2e4: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e2eau); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e2ea: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e2f1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e2f4: xor ebx, ebx */
  ebx = 0;
/* f7e2f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e2f8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7e300: jle 0xf7e326 */
  if ((zf || sf != of)) goto L_f7e326;
L_f7e302: /* f7e302: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e304: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e306: mov ecx, esi */
  ecx = esi;
/* f7e308: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e30eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e30e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e310: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e313: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e315: je 0xf7e31e */
  if (zf) goto L_f7e31e;
L_f7e317: /* f7e317: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e319: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e31c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e31e: /* f7e31e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e321: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e322: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e324: jl 0xf7e302 */
  if ((sf != of)) goto L_f7e302;
L_f7e326: /* f7e326: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7e32a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e32b: mov eax, esi */
  eax = esi;
/* f7e32d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e32e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e32f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7e336: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7e339: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e370(void) {
  LOAD_REGS();
L_f7e370: /* f7e370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e371: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* f7e375: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e377: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e379: mov esi, dword ptr [0xfce328] */
  esi = R32((uint32_t)(0xfce328u));
/* f7e37f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e380: mov ebp, ecx */
  ebp = ecx;
/* f7e382: jge 0xf7e398 */
  if ((sf == of)) goto L_f7e398;
L_f7e384: /* f7e384: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e389: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e38e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e393: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf7e395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e395: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e398: /* f7e398: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e39b: jle 0xf7e3b1 */
  if ((zf || sf != of)) goto L_f7e3b1;
L_f7e39d: /* f7e39d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e3a2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e3a7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e3ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf7e3aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e3ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e3b1: /* f7e3b1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* f7e3b5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* f7e3b8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e3bb: jle 0xf7e3d1 */
  if ((zf || sf != of)) goto L_f7e3d1;
L_f7e3bd: /* f7e3bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e3c2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e3c7: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e3cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xf7e3ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e3ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e3d1: /* f7e3d1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e3d3: jge 0xf7e3f1 */
  if ((sf == of)) goto L_f7e3f1;
L_f7e3d5: /* f7e3d5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* f7e3d8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* f7e3db: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* f7e3dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7e3e0: /* f7e3e0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* f7e3e3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f7e3e5: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7e3ebu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7e3eb: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* f7e3ee: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* f7e3ef: jne 0xf7e3e0 */
  if (!zf) goto L_f7e3e0;
L_f7e3f1: /* f7e3f1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7e3f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7e3f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7e3f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e3f9: mov ecx, ebp */
  ecx = ebp;
/* f7e3fb: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e401u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e401: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e402: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e403: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e405: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e440(void) {
  LOAD_REGS();
L_f7e440: /* f7e440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e442: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e443: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7e447: mov esi, ecx */
  esi = ecx;
/* f7e449: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7e44b: je 0xf7e491 */
  if (zf) goto L_f7e491;
L_f7e44d: /* f7e44d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e451: call 0xf718c5 */
  esp -= 4; W32(esp, 0xf7e456u); SPILL(); f_f718c5(); if (g_unwind) return; RELOAD();
/* f7e456: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e459: xor ebx, ebx */
  ebx = 0;
/* f7e45b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e45d: jle 0xf7e491 */
  if ((zf || sf != of)) goto L_f7e491;
L_f7e45f: /* f7e45f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e460: xor ebp, ebp */
  ebp = 0;
L_f7e462: /* f7e462: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7e464: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e466: mov ecx, esi */
  ecx = esi;
/* f7e468: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e46eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e46e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7e470: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* f7e473: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* f7e476: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e478: je 0xf7e485 */
  if (zf) goto L_f7e485;
L_f7e47a: /* f7e47a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* f7e47c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* f7e47e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7e47f: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf7e485u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_f7e485: /* f7e485: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e488: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e489: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* f7e48c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e48e: jl 0xf7e462 */
  if ((sf != of)) goto L_f7e462;
L_f7e490: /* f7e490: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_f7e491: /* f7e491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e492: mov eax, esi */
  eax = esi;
/* f7e494: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e495: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e496: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e4c0(void) {
  LOAD_REGS();
L_f7e4c0: /* f7e4c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e4c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e4c2: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e4c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e4c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e4ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e4ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e4d0: mov esi, ecx */
  esi = ecx;
/* f7e4d2: jge 0xf7e4e8 */
  if ((sf == of)) goto L_f7e4e8;
L_f7e4d4: /* f7e4d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e4d9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e4de: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e4e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e4e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e4e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e4e8: /* f7e4e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e4eb: jle 0xf7e501 */
  if ((zf || sf != of)) goto L_f7e501;
L_f7e4ed: /* f7e4ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e4f2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e4f7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e4fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e4feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e4fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e501: /* f7e501: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e505: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e508: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e50b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e50d: jle 0xf7e523 */
  if ((zf || sf != of)) goto L_f7e523;
L_f7e50f: /* f7e50f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e514: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e519: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e51e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e520u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e520: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e523: /* f7e523: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7e525: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e527: mov ecx, esi */
  ecx = esi;
/* f7e529: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e52fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e52f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e530: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e531: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e533: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e560(void) {
  LOAD_REGS();
L_f7e560: /* f7e560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e561: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e562: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e569: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e56a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e56e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e570: mov esi, ecx */
  esi = ecx;
/* f7e572: jge 0xf7e588 */
  if ((sf == of)) goto L_f7e588;
L_f7e574: /* f7e574: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e579: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e57e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e583: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e585: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e588: /* f7e588: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e58b: jle 0xf7e5a1 */
  if ((zf || sf != of)) goto L_f7e5a1;
L_f7e58d: /* f7e58d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e592: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e597: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e59c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e59eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e59e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e5a1: /* f7e5a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e5a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e5a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e5ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e5ad: jle 0xf7e5c3 */
  if ((zf || sf != of)) goto L_f7e5c3;
L_f7e5af: /* f7e5af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e5b4: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e5b9: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e5be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e5c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e5c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e5c3: /* f7e5c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e5c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e5c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e5c7: mov ecx, esi */
  ecx = esi;
/* f7e5c9: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e5cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e5cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e5d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e5d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e5d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e5d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e600(void) {
  LOAD_REGS();
L_f7e600: /* f7e600: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e601: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e602: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e608: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e609: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e60a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e60e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e610: mov esi, ecx */
  esi = ecx;
/* f7e612: jge 0xf7e628 */
  if ((sf == of)) goto L_f7e628;
L_f7e614: /* f7e614: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e619: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e61e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e623: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e625u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e625: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e628: /* f7e628: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e62b: jle 0xf7e641 */
  if ((zf || sf != of)) goto L_f7e641;
L_f7e62d: /* f7e62d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e632: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e637: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e63c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e63eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e63e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e641: /* f7e641: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e645: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e648: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e64b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e64d: jle 0xf7e663 */
  if ((zf || sf != of)) goto L_f7e663;
L_f7e64f: /* f7e64f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e654: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e659: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e65e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e660u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e660: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e663: /* f7e663: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e665: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e667: mov ecx, esi */
  ecx = esi;
/* f7e669: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e66fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e66f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e670: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e671: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e672: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e673: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e6a0(void) {
  LOAD_REGS();
L_f7e6a0: /* f7e6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e6a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e6a3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7e6a7: mov esi, ecx */
  esi = ecx;
/* f7e6a9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7e6ab: je 0xf7e6f4 */
  if (zf) goto L_f7e6f4;
L_f7e6ad: /* f7e6ad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e6b0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e6b2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e6b9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e6bc: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e6c2u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e6c2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e6c5: xor ebx, ebx */
  ebx = 0;
/* f7e6c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e6c9: jle 0xf7e6f4 */
  if ((zf || sf != of)) goto L_f7e6f4;
L_f7e6cb: /* f7e6cb: jmp 0xf7e6d0 */
  goto L_f7e6d0;
L_f7e6d0: /* f7e6d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e6d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e6d4: mov ecx, esi */
  ecx = esi;
/* f7e6d6: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e6dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e6dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e6de: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e6e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e6e3: je 0xf7e6ec */
  if (zf) goto L_f7e6ec;
L_f7e6e5: /* f7e6e5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e6e7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e6ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e6ec: /* f7e6ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e6ef: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e6f0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e6f2: jl 0xf7e6d0 */
  if ((sf != of)) goto L_f7e6d0;
L_f7e6f4: /* f7e6f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e6f5: mov eax, esi */
  eax = esi;
/* f7e6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e6f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e6f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e6cd(void) {
  LOAD_REGS();
L_f7e6cd: /* f7e6cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7e6d0: /* f7e6d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e6d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e6d4: mov ecx, esi */
  ecx = esi;
/* f7e6d6: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e6dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e6dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e6de: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e6e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e6e3: je 0xf7e6ec */
  if (zf) goto L_f7e6ec;
L_f7e6e5: /* f7e6e5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e6e7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e6ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e6ec: /* f7e6ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e6ef: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e6f0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e6f2: jl 0xf7e6d0 */
  if ((sf != of)) goto L_f7e6d0;
L_f7e6f4: /* f7e6f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e6f5: mov eax, esi */
  eax = esi;
/* f7e6f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e6f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e6f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e720(void) {
  LOAD_REGS();
L_f7e720: /* f7e720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e721: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e722: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e728: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e729: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e72a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e72e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e730: mov esi, ecx */
  esi = ecx;
/* f7e732: jge 0xf7e748 */
  if ((sf == of)) goto L_f7e748;
L_f7e734: /* f7e734: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e739: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e73e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e743: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e745: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e748: /* f7e748: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e74b: jle 0xf7e761 */
  if ((zf || sf != of)) goto L_f7e761;
L_f7e74d: /* f7e74d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e752: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e757: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e75c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e75eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e75e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e761: /* f7e761: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e765: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e768: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e76b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e76d: jle 0xf7e783 */
  if ((zf || sf != of)) goto L_f7e783;
L_f7e76f: /* f7e76f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e774: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e779: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e77e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e780u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e780: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e783: /* f7e783: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e785: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e787: mov ecx, esi */
  ecx = esi;
/* f7e789: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e78fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e78f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e791: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e792: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e793: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e7c0(void) {
  LOAD_REGS();
L_f7e7c0: /* f7e7c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e7c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e7c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e7c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7e7c7: mov esi, ecx */
  esi = ecx;
/* f7e7c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7e7cb: je 0xf7e814 */
  if (zf) goto L_f7e814;
L_f7e7cd: /* f7e7cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e7d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e7d2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e7d9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e7dc: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e7e2u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e7e2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e7e5: xor ebx, ebx */
  ebx = 0;
/* f7e7e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e7e9: jle 0xf7e814 */
  if ((zf || sf != of)) goto L_f7e814;
L_f7e7eb: /* f7e7eb: jmp 0xf7e7f0 */
  goto L_f7e7f0;
L_f7e7f0: /* f7e7f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e7f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e7f4: mov ecx, esi */
  ecx = esi;
/* f7e7f6: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e7fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e7fc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e7fe: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e801: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e803: je 0xf7e80c */
  if (zf) goto L_f7e80c;
L_f7e805: /* f7e805: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e807: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e80a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e80c: /* f7e80c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e80f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e810: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e812: jl 0xf7e7f0 */
  if ((sf != of)) goto L_f7e7f0;
L_f7e814: /* f7e814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e815: mov eax, esi */
  eax = esi;
/* f7e817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e818: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e819: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e7ed(void) {
  LOAD_REGS();
L_f7e7ed: /* f7e7ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7e7f0: /* f7e7f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e7f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e7f4: mov ecx, esi */
  ecx = esi;
/* f7e7f6: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e7fcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e7fc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e7fe: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e801: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e803: je 0xf7e80c */
  if (zf) goto L_f7e80c;
L_f7e805: /* f7e805: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e807: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e80a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e80c: /* f7e80c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e80f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e810: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e812: jl 0xf7e7f0 */
  if ((sf != of)) goto L_f7e7f0;
L_f7e814: /* f7e814: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e815: mov eax, esi */
  eax = esi;
/* f7e817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e818: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e819: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e840(void) {
  LOAD_REGS();
L_f7e840: /* f7e840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e841: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e842: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e848: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e849: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e84a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e84e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e850: mov esi, ecx */
  esi = ecx;
/* f7e852: jge 0xf7e868 */
  if ((sf == of)) goto L_f7e868;
L_f7e854: /* f7e854: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e859: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e85e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e863: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e868: /* f7e868: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e86b: jle 0xf7e881 */
  if ((zf || sf != of)) goto L_f7e881;
L_f7e86d: /* f7e86d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e872: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e877: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e87c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e87eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e87e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e881: /* f7e881: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e885: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e888: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e88b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e88d: jle 0xf7e8a3 */
  if ((zf || sf != of)) goto L_f7e8a3;
L_f7e88f: /* f7e88f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e894: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e899: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e89e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e8a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e8a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e8a3: /* f7e8a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e8a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e8a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e8a7: mov ecx, esi */
  ecx = esi;
/* f7e8a9: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e8afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e8af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e8b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e8b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e8b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e8b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7e8e0(void) {
  LOAD_REGS();
L_f7e8e0: /* f7e8e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e8e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e8e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7e8e7: mov esi, ecx */
  esi = ecx;
/* f7e8e9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7e8eb: je 0xf7e934 */
  if (zf) goto L_f7e934;
L_f7e8ed: /* f7e8ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e8f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e8f2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7e8f9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7e8fc: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7e902u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7e902: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e905: xor ebx, ebx */
  ebx = 0;
/* f7e907: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e909: jle 0xf7e934 */
  if ((zf || sf != of)) goto L_f7e934;
L_f7e90b: /* f7e90b: jmp 0xf7e910 */
  goto L_f7e910;
L_f7e910: /* f7e910: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e912: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e914: mov ecx, esi */
  ecx = esi;
/* f7e916: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e91cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e91c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e91e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e923: je 0xf7e92c */
  if (zf) goto L_f7e92c;
L_f7e925: /* f7e925: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e927: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e92a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e92c: /* f7e92c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e92f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e930: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e932: jl 0xf7e910 */
  if ((sf != of)) goto L_f7e910;
L_f7e934: /* f7e934: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e935: mov eax, esi */
  eax = esi;
/* f7e937: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e939: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e90d(void) {
  LOAD_REGS();
L_f7e90d: /* f7e90d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7e910: /* f7e910: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e912: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7e914: mov ecx, esi */
  ecx = esi;
/* f7e916: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7e91cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7e91c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7e91e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7e921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7e923: je 0xf7e92c */
  if (zf) goto L_f7e92c;
L_f7e925: /* f7e925: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7e927: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7e92a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7e92c: /* f7e92c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7e92f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7e930: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e932: jl 0xf7e910 */
  if ((sf != of)) goto L_f7e910;
L_f7e934: /* f7e934: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e935: mov eax, esi */
  eax = esi;
/* f7e937: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e939: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7e960(void) {
  LOAD_REGS();
L_f7e960: /* f7e960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e961: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7e962: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7e968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7e969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e96a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7e96e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7e970: mov esi, ecx */
  esi = ecx;
/* f7e972: jge 0xf7e988 */
  if ((sf == of)) goto L_f7e988;
L_f7e974: /* f7e974: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7e979: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e97e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7e983: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e985u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e985: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e988: /* f7e988: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e98b: jle 0xf7e9a1 */
  if ((zf || sf != of)) goto L_f7e9a1;
L_f7e98d: /* f7e98d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7e992: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e997: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7e99c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e99eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e99e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e9a1: /* f7e9a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7e9a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7e9a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7e9ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7e9ad: jle 0xf7e9c3 */
  if ((zf || sf != of)) goto L_f7e9c3;
L_f7e9af: /* f7e9af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7e9b4: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7e9b9: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7e9be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7e9c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7e9c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7e9c3: /* f7e9c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7e9c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7e9c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7e9c7: mov ecx, esi */
  ecx = esi;
/* f7e9c9: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7e9cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7e9cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7e9d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7e9d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7e9d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7e9d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7ea00(void) {
  LOAD_REGS();
L_f7ea00: /* f7ea00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ea01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ea02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ea03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7ea07: mov esi, ecx */
  esi = ecx;
/* f7ea09: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7ea0b: je 0xf7ea54 */
  if (zf) goto L_f7ea54;
L_f7ea0d: /* f7ea0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ea10: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ea12: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7ea19: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7ea1c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7ea22u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7ea22: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ea25: xor ebx, ebx */
  ebx = 0;
/* f7ea27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ea29: jle 0xf7ea54 */
  if ((zf || sf != of)) goto L_f7ea54;
L_f7ea2b: /* f7ea2b: jmp 0xf7ea30 */
  goto L_f7ea30;
L_f7ea30: /* f7ea30: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ea32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ea34: mov ecx, esi */
  ecx = esi;
/* f7ea36: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ea3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ea3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ea3e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7ea41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7ea43: je 0xf7ea4c */
  if (zf) goto L_f7ea4c;
L_f7ea45: /* f7ea45: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7ea47: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7ea4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7ea4c: /* f7ea4c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ea4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7ea50: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ea52: jl 0xf7ea30 */
  if ((sf != of)) goto L_f7ea30;
L_f7ea54: /* f7ea54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ea55: mov eax, esi */
  eax = esi;
/* f7ea57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ea58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ea59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ea2d(void) {
  LOAD_REGS();
L_f7ea2d: /* f7ea2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7ea30: /* f7ea30: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ea32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ea34: mov ecx, esi */
  ecx = esi;
/* f7ea36: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ea3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ea3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ea3e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7ea41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7ea43: je 0xf7ea4c */
  if (zf) goto L_f7ea4c;
L_f7ea45: /* f7ea45: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7ea47: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7ea4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7ea4c: /* f7ea4c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ea4f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7ea50: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ea52: jl 0xf7ea30 */
  if ((sf != of)) goto L_f7ea30;
L_f7ea54: /* f7ea54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ea55: mov eax, esi */
  eax = esi;
/* f7ea57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ea58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ea59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ea80(void) {
  LOAD_REGS();
L_f7ea80: /* f7ea80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ea81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7ea82: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7ea88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ea89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ea8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7ea8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ea90: mov esi, ecx */
  esi = ecx;
/* f7ea92: jge 0xf7eaa8 */
  if ((sf == of)) goto L_f7eaa8;
L_f7ea94: /* f7ea94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7ea99: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ea9e: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7eaa3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7eaa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7eaa5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7eaa8: /* f7eaa8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eaab: jle 0xf7eac1 */
  if ((zf || sf != of)) goto L_f7eac1;
L_f7eaad: /* f7eaad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7eab2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7eab7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7eabc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7eabeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7eabe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7eac1: /* f7eac1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7eac5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7eac8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7eacb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eacd: jle 0xf7eae3 */
  if ((zf || sf != of)) goto L_f7eae3;
L_f7eacf: /* f7eacf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7ead4: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ead9: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7eade: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7eae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7eae0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7eae3: /* f7eae3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7eae5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7eae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7eae7: mov ecx, esi */
  ecx = esi;
/* f7eae9: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7eaefu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7eaef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7eaf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7eaf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7eaf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7eaf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7eb20(void) {
  LOAD_REGS();
L_f7eb20: /* f7eb20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7eb21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7eb22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7eb23: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7eb27: mov esi, ecx */
  esi = ecx;
/* f7eb29: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7eb2b: je 0xf7eb74 */
  if (zf) goto L_f7eb74;
L_f7eb2d: /* f7eb2d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7eb30: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7eb32: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7eb39: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7eb3c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7eb42u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7eb42: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7eb45: xor ebx, ebx */
  ebx = 0;
/* f7eb47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7eb49: jle 0xf7eb74 */
  if ((zf || sf != of)) goto L_f7eb74;
L_f7eb4b: /* f7eb4b: jmp 0xf7eb50 */
  goto L_f7eb50;
L_f7eb50: /* f7eb50: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7eb52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7eb54: mov ecx, esi */
  ecx = esi;
/* f7eb56: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7eb5cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7eb5c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7eb5e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7eb61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7eb63: je 0xf7eb6c */
  if (zf) goto L_f7eb6c;
L_f7eb65: /* f7eb65: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7eb67: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7eb6a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7eb6c: /* f7eb6c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7eb6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7eb70: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eb72: jl 0xf7eb50 */
  if ((sf != of)) goto L_f7eb50;
L_f7eb74: /* f7eb74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7eb75: mov eax, esi */
  eax = esi;
/* f7eb77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7eb78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7eb79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7eb4d(void) {
  LOAD_REGS();
L_f7eb4d: /* f7eb4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7eb50: /* f7eb50: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7eb52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7eb54: mov ecx, esi */
  ecx = esi;
/* f7eb56: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7eb5cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7eb5c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7eb5e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7eb61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7eb63: je 0xf7eb6c */
  if (zf) goto L_f7eb6c;
L_f7eb65: /* f7eb65: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7eb67: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7eb6a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7eb6c: /* f7eb6c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7eb6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7eb70: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eb72: jl 0xf7eb50 */
  if ((sf != of)) goto L_f7eb50;
L_f7eb74: /* f7eb74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7eb75: mov eax, esi */
  eax = esi;
/* f7eb77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7eb78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7eb79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7eba0(void) {
  LOAD_REGS();
L_f7eba0: /* f7eba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7eba1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7eba2: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7eba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7eba9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ebaa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7ebae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ebb0: mov esi, ecx */
  esi = ecx;
/* f7ebb2: jge 0xf7ebc8 */
  if ((sf == of)) goto L_f7ebc8;
L_f7ebb4: /* f7ebb4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7ebb9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ebbe: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7ebc3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ebc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ebc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ebc8: /* f7ebc8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ebcb: jle 0xf7ebe1 */
  if ((zf || sf != of)) goto L_f7ebe1;
L_f7ebcd: /* f7ebcd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7ebd2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ebd7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7ebdc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ebdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ebde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ebe1: /* f7ebe1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7ebe5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7ebe8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7ebeb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ebed: jle 0xf7ec03 */
  if ((zf || sf != of)) goto L_f7ec03;
L_f7ebef: /* f7ebef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7ebf4: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ebf9: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7ebfe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ec00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ec00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ec03: /* f7ec03: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ec05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ec06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ec07: mov ecx, esi */
  ecx = esi;
/* f7ec09: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7ec0fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7ec0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ec10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ec11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7ec12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ec13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7ec40(void) {
  LOAD_REGS();
L_f7ec40: /* f7ec40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ec41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ec42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ec43: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7ec47: mov esi, ecx */
  esi = ecx;
/* f7ec49: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7ec4b: je 0xf7ec94 */
  if (zf) goto L_f7ec94;
L_f7ec4d: /* f7ec4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ec50: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ec52: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7ec59: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7ec5c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7ec62u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7ec62: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ec65: xor ebx, ebx */
  ebx = 0;
/* f7ec67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ec69: jle 0xf7ec94 */
  if ((zf || sf != of)) goto L_f7ec94;
L_f7ec6b: /* f7ec6b: jmp 0xf7ec70 */
  goto L_f7ec70;
L_f7ec70: /* f7ec70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ec72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ec74: mov ecx, esi */
  ecx = esi;
/* f7ec76: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ec7cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ec7c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ec7e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7ec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7ec83: je 0xf7ec8c */
  if (zf) goto L_f7ec8c;
L_f7ec85: /* f7ec85: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7ec87: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7ec8a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7ec8c: /* f7ec8c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ec8f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7ec90: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ec92: jl 0xf7ec70 */
  if ((sf != of)) goto L_f7ec70;
L_f7ec94: /* f7ec94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ec95: mov eax, esi */
  eax = esi;
/* f7ec97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ec98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ec99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ec6d(void) {
  LOAD_REGS();
L_f7ec6d: /* f7ec6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7ec70: /* f7ec70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ec72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ec74: mov ecx, esi */
  ecx = esi;
/* f7ec76: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ec7cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ec7c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ec7e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7ec81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7ec83: je 0xf7ec8c */
  if (zf) goto L_f7ec8c;
L_f7ec85: /* f7ec85: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7ec87: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7ec8a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7ec8c: /* f7ec8c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ec8f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7ec90: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ec92: jl 0xf7ec70 */
  if ((sf != of)) goto L_f7ec70;
L_f7ec94: /* f7ec94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ec95: mov eax, esi */
  eax = esi;
/* f7ec97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ec98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ec99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ecc0(void) {
  LOAD_REGS();
L_f7ecc0: /* f7ecc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ecc1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7ecc2: mov ebp, dword ptr [0xfce328] */
  ebp = R32((uint32_t)(0xfce328u));
/* f7ecc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ecc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ecca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* f7ecce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ecd0: mov esi, ecx */
  esi = ecx;
/* f7ecd2: jge 0xf7ece8 */
  if ((sf == of)) goto L_f7ece8;
L_f7ecd4: /* f7ecd4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* f7ecd9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ecde: push 0xfb90e4 */
  { uint32_t v = 0xfb90e4u; esp -= 4; W32(esp, v); }
/* f7ece3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ece5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ece5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ece8: /* f7ece8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eceb: jle 0xf7ed01 */
  if ((zf || sf != of)) goto L_f7ed01;
L_f7eced: /* f7eced: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7ecf2: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ecf7: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7ecfc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ecfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ecfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ed01: /* f7ed01: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* f7ed05: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* f7ed08: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* f7ed0b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ed0d: jle 0xf7ed23 */
  if ((zf || sf != of)) goto L_f7ed23;
L_f7ed0f: /* f7ed0f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7ed14: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ed19: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7ed1e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xf7ed20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ed20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ed23: /* f7ed23: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ed25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ed26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ed27: mov ecx, esi */
  ecx = esi;
/* f7ed29: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7ed2fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7ed2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ed30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ed31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7ed32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ed33: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7ed60(void) {
  LOAD_REGS();
L_f7ed60: /* f7ed60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ed61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ed62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ed63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* f7ed67: mov esi, ecx */
  esi = ecx;
/* f7ed69: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* f7ed6b: je 0xf7edb4 */
  if (zf) goto L_f7edb4;
L_f7ed6d: /* f7ed6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ed70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ed72: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7ed79: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7ed7c: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7ed82u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7ed82: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7ed85: xor ebx, ebx */
  ebx = 0;
/* f7ed87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ed89: jle 0xf7edb4 */
  if ((zf || sf != of)) goto L_f7edb4;
L_f7ed8b: /* f7ed8b: jmp 0xf7ed90 */
  goto L_f7ed90;
L_f7ed90: /* f7ed90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ed92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ed94: mov ecx, esi */
  ecx = esi;
/* f7ed96: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ed9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ed9c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ed9e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7eda1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7eda3: je 0xf7edac */
  if (zf) goto L_f7edac;
L_f7eda5: /* f7eda5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7eda7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7edaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7edac: /* f7edac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7edaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7edb0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7edb2: jl 0xf7ed90 */
  if ((sf != of)) goto L_f7ed90;
L_f7edb4: /* f7edb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7edb5: mov eax, esi */
  eax = esi;
/* f7edb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7edb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7edb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ed8d(void) {
  LOAD_REGS();
L_f7ed8d: /* f7ed8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_f7ed90: /* f7ed90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f7ed92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* f7ed94: mov ecx, esi */
  ecx = esi;
/* f7ed96: call dword ptr [0xfce330] */
  esp -= 4; W32(esp, 0xf7ed9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* f7ed9c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ed9e: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* f7eda1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7eda3: je 0xf7edac */
  if (zf) goto L_f7edac;
L_f7eda5: /* f7eda5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* f7eda7: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* f7edaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_f7edac: /* f7edac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* f7edaf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* f7edb0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7edb2: jl 0xf7ed90 */
  if ((sf != of)) goto L_f7ed90;
L_f7edb4: /* f7edb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7edb5: mov eax, esi */
  eax = esi;
/* f7edb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7edb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7edb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ede0(void) {
  LOAD_REGS();
L_f7ede0: /* f7ede0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ede1: mov esi, ecx */
  esi = ecx;
/* f7ede3: call 0xf71172 */
  esp -= 4; W32(esp, 0xf7ede8u); SPILL(); f_f71172(); if (g_unwind) return; RELOAD();
/* f7ede8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7eded: je 0xf7edfc */
  if (zf) goto L_f7edfc;
L_f7edef: /* f7edef: mov eax, dword ptr [0xfce318] */
  eax = R32((uint32_t)(0xfce318u));
/* f7edf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7edf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7edf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7edf9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7edfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7edfc: /* f7edfc: mov eax, esi */
  eax = esi;
/* f7edfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7edff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ee20(void) {
  LOAD_REGS();
L_f7ee20: /* f7ee20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ee21: mov esi, ecx */
  esi = ecx;
/* f7ee23: call 0xf71a05 */
  esp -= 4; W32(esp, 0xf7ee28u); SPILL(); f_f71a05(); if (g_unwind) return; RELOAD();
/* f7ee28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* f7ee2d: je 0xf7ee3c */
  if (zf) goto L_f7ee3c;
L_f7ee2f: /* f7ee2f: mov eax, dword ptr [0xfce318] */
  eax = R32((uint32_t)(0xfce318u));
/* f7ee34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* f7ee36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* f7ee38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ee39: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xf7ee3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_f7ee3c: /* f7ee3c: mov eax, esi */
  eax = esi;
/* f7ee3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ee3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ee60(void) {
  LOAD_REGS();
L_f7ee60: /* f7ee60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ee61: mov esi, ecx */
  esi = ecx;
/* f7ee63: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f7ee66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ee67: xor edi, edi */
  edi = 0;
/* f7ee69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ee6b: jle 0xf7ee85 */
  if ((zf || sf != of)) goto L_f7ee85;
L_f7ee6d: /* f7ee6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ee6e: xor ebx, ebx */
  ebx = 0;
L_f7ee70: /* f7ee70: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7ee72: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f7ee74: call 0xf71172 */
  esp -= 4; W32(esp, 0xf7ee79u); SPILL(); f_f71172(); if (g_unwind) return; RELOAD();
/* f7ee79: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f7ee7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f7ee7d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f7ee80: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ee82: jl 0xf7ee70 */
  if ((sf != of)) goto L_f7ee70;
L_f7ee84: /* f7ee84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f7ee85: /* f7ee85: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7ee89: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* f7ee8b: mov ecx, esi */
  ecx = esi;
/* f7ee8d: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7ee94: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7ee97: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7ee9du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7ee9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ee9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ee9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7eed0(void) {
  LOAD_REGS();
L_f7eed0: /* f7eed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7eed1: mov esi, ecx */
  esi = ecx;
/* f7eed3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f7eed6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7eed7: xor edi, edi */
  edi = 0;
/* f7eed9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7eedb: jle 0xf7eef5 */
  if ((zf || sf != of)) goto L_f7eef5;
L_f7eedd: /* f7eedd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7eede: xor ebx, ebx */
  ebx = 0;
L_f7eee0: /* f7eee0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* f7eee2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* f7eee4: call 0xf71a05 */
  esp -= 4; W32(esp, 0xf7eee9u); SPILL(); f_f71a05(); if (g_unwind) return; RELOAD();
/* f7eee9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f7eeec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* f7eeed: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* f7eef0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7eef2: jl 0xf7eee0 */
  if ((sf != of)) goto L_f7eee0;
L_f7eef4: /* f7eef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_f7eef5: /* f7eef5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* f7eef9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* f7eefb: mov ecx, esi */
  ecx = esi;
/* f7eefd: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* f7ef04: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* f7ef07: call dword ptr [0xfce32c] */
  esp -= 4; W32(esp, 0xf7ef0du); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* f7ef0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ef0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ef0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7ef40(void) {
  LOAD_REGS();
L_f7ef40: /* f7ef40: jmp 0xf71e9c */
  SPILL(); f_f71e9c(); return;
}

void f_f7ef60(void) {
  LOAD_REGS();
L_f7ef60: /* f7ef60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ef62: push 0xf991d8 */
  { uint32_t v = 0xf991d8u; esp -= 4; W32(esp, v); }
/* f7ef67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ef6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ef6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ef75: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7ef78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ef79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ef7a: mov esi, ecx */
  esi = ecx;
/* f7ef7c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7ef80: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7ef86u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7ef86: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f7ef8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ef8b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7ef8f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f7ef97: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7ef9f: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7efa5u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7efa5: mov edx, dword ptr [0xfba394] */
  edx = R32((uint32_t)(0xfba394u));
/* f7efab: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f7efad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7efaf: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7efb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7efb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7efb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7efb7: mov ecx, esi */
  ecx = esi;
/* f7efb9: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7efbfu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7efbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7efc0: mov ecx, esi */
  ecx = esi;
/* f7efc2: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xf7efc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7efc5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* f7efc9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7efcd: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* f7efd5: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7efdbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7efdb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7efdf: mov eax, esi */
  eax = esi;
/* f7efe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7efe2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7efe3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7efea: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7efed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f020(void) {
  LOAD_REGS();
L_f7f020: /* f7f020: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f022: push 0xf991f8 */
  { uint32_t v = 0xf991f8u; esp -= 4; W32(esp, v); }
/* f7f027: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f02e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f035: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f038: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7f039: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f03a: mov esi, ecx */
  esi = ecx;
/* f7f03c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f040: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f046u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f046: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f7f04a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f04b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f04f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f7f057: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7f05f: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f065u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f065: mov edx, dword ptr [0xfba3dc] */
  edx = R32((uint32_t)(0xfba3dcu));
/* f7f06b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f7f06d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f06f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f073: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f074: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f076: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f077: mov ecx, esi */
  ecx = esi;
/* f7f079: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f07fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f07f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f080: mov ecx, esi */
  ecx = esi;
/* f7f082: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xf7f085u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f085: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* f7f089: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f08d: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* f7f095: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f09bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f09b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7f09f: mov eax, esi */
  eax = esi;
/* f7f0a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f0a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7f0a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f0aa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f0ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f0e0(void) {
  LOAD_REGS();
L_f7f0e0: /* f7f0e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f0e2: push 0xf99218 */
  { uint32_t v = 0xf99218u; esp -= 4; W32(esp, v); }
/* f7f0e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f0ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f0ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f0f5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f0f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7f0f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f0fa: mov esi, ecx */
  esi = ecx;
/* f7f0fc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f100: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f106u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f106: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f7f10a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f10b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f10f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f7f117: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7f11f: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f125u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f125: mov edx, dword ptr [0xfba4ac] */
  edx = R32((uint32_t)(0xfba4acu));
/* f7f12b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f7f12d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f12f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f133: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f134: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f137: mov ecx, esi */
  ecx = esi;
/* f7f139: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f13fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f140: mov ecx, esi */
  ecx = esi;
/* f7f142: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xf7f145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f145: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* f7f149: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f14d: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* f7f155: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f15bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f15b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7f15f: mov eax, esi */
  eax = esi;
/* f7f161: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f162: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7f163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f16a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f16d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f1a0(void) {
  LOAD_REGS();
L_f7f1a0: /* f7f1a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f1a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f1a6: je 0xf7f1ad */
  if (zf) goto L_f7f1ad;
L_f7f1a8: /* f7f1a8: jmp 0xf721c1 */
  SPILL(); f_f721c1(); return;
L_f7f1ad: /* f7f1ad: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f1c0(void) {
  LOAD_REGS();
L_f7f1c0: /* f7f1c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f1c2: push 0xf99250 */
  { uint32_t v = 0xf99250u; esp -= 4; W32(esp, v); }
/* f7f1c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f1ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f1d5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f1d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f1d9: mov esi, ecx */
  esi = ecx;
/* f7f1db: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f1df: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* f7f1e7: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f1edu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f1ed: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* f7f1f1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7f1f3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* f7f1f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f1f9: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* f7f1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f1fe: mov eax, dword ptr [0xfba3c8] */
  eax = R32((uint32_t)(0xfba3c8u));
/* f7f203: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* f7f209: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f20a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f20b: mov ecx, esi */
  ecx = esi;
/* f7f20d: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* f7f215: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7f218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f218: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* f7f21c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f221: mov ecx, esi */
  ecx = esi;
/* f7f223: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf7f229u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* f7f229: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f22d: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* f7f235: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* f7f23a: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f240u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f240: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7f244: mov eax, esi */
  eax = esi;
/* f7f246: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f24e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f251: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f290(void) {
  LOAD_REGS();
L_f7f290: /* f7f290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f292: push 0xf99278 */
  { uint32_t v = 0xf99278u; esp -= 4; W32(esp, v); }
/* f7f297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f29e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f2a5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f2a9: mov esi, ecx */
  esi = ecx;
/* f7f2ab: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f2af: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f2b5u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f2b5: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* f7f2b9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f7f2bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f2be: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f2c2: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f7f2ca: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* f7f2ce: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f2d4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f2d4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7f2d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f2d8: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f7f2dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f2dd: mov eax, dword ptr [0xfba400] */
  eax = R32((uint32_t)(0xfba400u));
/* f7f2e2: lea ecx, [esi + 0x1bc] */
  ecx = (uint32_t)(esi + 0x1bcu);
/* f7f2e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f2ea: mov ecx, esi */
  ecx = esi;
/* f7f2ec: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7f2efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f2ef: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f2f3: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* f7f2fb: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f301u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f301: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7f305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f306: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f30d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f310: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f350(void) {
  LOAD_REGS();
L_f7f350: /* f7f350: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f352: push 0xf99298 */
  { uint32_t v = 0xf99298u; esp -= 4; W32(esp, v); }
/* f7f357: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f35e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f365: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f369: mov esi, ecx */
  esi = ecx;
/* f7f36b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7f36c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f370: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f376u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f376: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* f7f37a: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* f7f37e: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* f7f380: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f381: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f7f385: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* f7f38d: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* f7f395: mov byte ptr [esp + 0xc], al */
  W8((uint32_t)(esp + 0xcu), (eax & 0xffu));
/* f7f399: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f39fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f39f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7f3a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f3a3: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* f7f3a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f3a8: mov eax, dword ptr [0xfba378] */
  eax = R32((uint32_t)(0xfba378u));
/* f7f3ad: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* f7f3b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f3b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f3b5: mov ecx, esi */
  ecx = esi;
/* f7f3b7: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7f3bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f3ba: mov cl, byte ptr [esp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* f7f3be: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* f7f3c2: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
/* f7f3c4: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f3c8: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* f7f3d0: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f3d6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f3d6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* f7f3da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7f3db: mov eax, esi */
  eax = esi;
/* f7f3dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f3de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f3e5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f3e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f420(void) {
  LOAD_REGS();
L_f7f420: /* f7f420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f422: push 0xf992b8 */
  { uint32_t v = 0xf992b8u; esp -= 4; W32(esp, v); }
/* f7f427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f435: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f438: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f439: mov esi, ecx */
  esi = ecx;
/* f7f43b: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* f7f43f: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f445u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f445: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f7f449: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f44a: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f44e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f7f456: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f45cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f45c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* f7f460: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7f462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f464: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* f7f468: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f7f46c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f46d: mov eax, dword ptr [0xfba3b8] */
  eax = R32((uint32_t)(0xfba3b8u));
/* f7f472: lea ecx, [esi + 0x144] */
  ecx = (uint32_t)(esi + 0x144u);
/* f7f478: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f479: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f47a: mov ecx, esi */
  ecx = esi;
/* f7f47c: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7f47fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f47f: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* f7f483: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* f7f48b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f491u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f491: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7f495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f496: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f49d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f4a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f4e0(void) {
  LOAD_REGS();
L_f7f4e0: /* f7f4e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f4e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f4e6: je 0xf7f4ed */
  if (zf) goto L_f7f4ed;
L_f7f4e8: /* f7f4e8: jmp 0xf716fe */
  SPILL(); f_f716fe(); return;
L_f7f4ed: /* f7f4ed: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f500(void) {
  LOAD_REGS();
L_f7f500: /* f7f500: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f504: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f506: je 0xf7f50d */
  if (zf) goto L_f7f50d;
L_f7f508: /* f7f508: jmp 0xf71c7b */
  SPILL(); f_f71c7b(); return;
L_f7f50d: /* f7f50d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f520(void) {
  LOAD_REGS();
L_f7f520: /* f7f520: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f524: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f526: je 0xf7f52d */
  if (zf) goto L_f7f52d;
L_f7f528: /* f7f528: jmp 0xf71b45 */
  SPILL(); f_f71b45(); return;
L_f7f52d: /* f7f52d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f540(void) {
  LOAD_REGS();
L_f7f540: /* f7f540: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f546: je 0xf7f54d */
  if (zf) goto L_f7f54d;
L_f7f548: /* f7f548: jmp 0xf71244 */
  SPILL(); f_f71244(); return;
L_f7f54d: /* f7f54d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f560(void) {
  LOAD_REGS();
L_f7f560: /* f7f560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f564: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f566: je 0xf7f56d */
  if (zf) goto L_f7f56d;
L_f7f568: /* f7f568: jmp 0xf7210d */
  SPILL(); f_f7210d(); return;
L_f7f56d: /* f7f56d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f580(void) {
  LOAD_REGS();
L_f7f580: /* f7f580: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f582: push 0xf992ea */
  { uint32_t v = 0xf992eau; esp -= 4; W32(esp, v); }
/* f7f587: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f58d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f58e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f595: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f599: mov esi, ecx */
  esi = ecx;
/* f7f59b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7f59c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* f7f5a0: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f5a6u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f5a6: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* f7f5a9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7f5b1: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f5b7u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f5b7: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* f7f5ba: mov ecx, edi */
  ecx = edi;
/* f7f5bc: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* f7f5c4: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* f7f5c8: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f5ceu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f5ce: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* f7f5d1: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* f7f5d6: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f5dcu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f5dc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7f5e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7f5e1: mov eax, esi */
  eax = esi;
/* f7f5e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f5e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f5eb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f5ee: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f610(void) {
  LOAD_REGS();
L_f7f610: /* f7f610: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f612: push 0xf99320 */
  { uint32_t v = 0xf99320u; esp -= 4; W32(esp, v); }
/* f7f617: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f61e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f625: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f628: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* f7f629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f62a: mov esi, ecx */
  esi = ecx;
/* f7f62c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f7f630: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* f7f638: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f63eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f63e: mov edx, dword ptr [0xfba4b4] */
  edx = R32((uint32_t)(0xfba4b4u));
/* f7f644: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f7f648: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* f7f64a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f64c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f7f650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f653: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f654: mov ecx, esi */
  ecx = esi;
/* f7f656: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* f7f65e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* f7f662: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f668u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f669: mov ecx, esi */
  ecx = esi;
/* f7f66b: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0xf7f66eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f66e: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* f7f672: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* f7f676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f677: mov ecx, esi */
  ecx = esi;
/* f7f679: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf7f67fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* f7f67f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* f7f683: mov dword ptr [esp + 8], 1 */
  W32((uint32_t)(esp + 0x8u), 0x1u);
/* f7f68b: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* f7f690: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f696u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f696: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* f7f69a: mov eax, esi */
  eax = esi;
/* f7f69c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f69d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* f7f69e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f6a5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f6a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f6e0(void) {
  LOAD_REGS();
L_f7f6e0: /* f7f6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f7f6e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f6e6: mov esi, ecx */
  esi = ecx;
/* f7f6e8: call 0xf71884 */
  esp -= 4; W32(esp, 0xf7f6edu); SPILL(); f_f71884(); if (g_unwind) return; RELOAD();
/* f7f6ed: mov eax, esi */
  eax = esi;
/* f7f6ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f6f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f710(void) {
  LOAD_REGS();
L_f7f710: /* f7f710: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7f714: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7f716: je 0xf7f71d */
  if (zf) goto L_f7f71d;
L_f7f718: /* f7f718: jmp 0xf71f9b */
  SPILL(); f_f71f9b(); return;
L_f7f71d: /* f7f71d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7f730(void) {
  LOAD_REGS();
L_f7f730: /* f7f730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f732: push 0xf99348 */
  { uint32_t v = 0xf99348u; esp -= 4; W32(esp, v); }
/* f7f737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f745: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f748: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7f749: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f74a: mov esi, ecx */
  esi = ecx;
/* f7f74c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f750: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f756u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f756: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* f7f75a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f75b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f75f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* f7f767: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7f76f: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f775u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f775: mov edx, dword ptr [0xfba3cc] */
  edx = R32((uint32_t)(0xfba3ccu));
/* f7f77b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* f7f77d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f77f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f786: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f787: mov ecx, esi */
  ecx = esi;
/* f7f789: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f78fu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f78f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f790: mov ecx, esi */
  ecx = esi;
/* f7f792: call dword ptr [ebx + 0x10] */
  { uint32_t t = R32((uint32_t)(ebx + 0x10u)); esp -= 4; W32(esp, 0xf7f795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f795: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* f7f799: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f79d: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* f7f7a5: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f7abu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f7ab: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* f7f7af: mov eax, esi */
  eax = esi;
/* f7f7b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f7b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7f7b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f7ba: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f7bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f7f0(void) {
  LOAD_REGS();
L_f7f7f0: /* f7f7f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f7f2: push 0xf9937a */
  { uint32_t v = 0xf9937au; esp -= 4; W32(esp, v); }
/* f7f7f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f7fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f7fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f805: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f809: mov esi, ecx */
  esi = ecx;
/* f7f80b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7f80c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f810: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f816u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f816: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* f7f81a: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* f7f822: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f828u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f828: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* f7f82c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f82d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f831: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* f7f839: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f83fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f83f: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* f7f843: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f844: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* f7f848: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f84eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f84e: mov eax, dword ptr [0xfba398] */
  eax = R32((uint32_t)(0xfba398u));
/* f7f853: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f7f855: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f857: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* f7f85b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f85c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f85f: mov ecx, esi */
  ecx = esi;
/* f7f861: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f867u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f867: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f868: mov ecx, esi */
  ecx = esi;
/* f7f86a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf7f86du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f86d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* f7f871: mov dword ptr [esp + 0x28], 2 */
  W32((uint32_t)(esp + 0x28u), 0x2u);
/* f7f879: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f87fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f87f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f883: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* f7f88b: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f891u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f891: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* f7f895: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7f896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f897: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f89e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f8a1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_f7f8e0(void) {
  LOAD_REGS();
L_f7f8e0: /* f7f8e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f8e2: push 0xf99398 */
  { uint32_t v = 0xf99398u; esp -= 4; W32(esp, v); }
/* f7f8e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f8ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f8ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f8f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f8f9: mov esi, ecx */
  esi = ecx;
/* f7f8fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7f8fc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f900: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f906u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f906: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f7f90a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f90b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f90f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f7f917: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7f91du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7f91d: mov edx, dword ptr [0xfba3e4] */
  edx = R32((uint32_t)(0xfba3e4u));
/* f7f923: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f7f925: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f927: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f92b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f92c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f92e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f92f: mov ecx, esi */
  ecx = esi;
/* f7f931: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7f937u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7f937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f938: mov ecx, esi */
  ecx = esi;
/* f7f93a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf7f93du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f93d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f941: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* f7f949: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7f94fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7f94f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7f953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7f954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7f955: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7f95c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7f95f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7f9a0(void) {
  LOAD_REGS();
L_f7f9a0: /* f7f9a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7f9a2: push 0xf993d0 */
  { uint32_t v = 0xf993d0u; esp -= 4; W32(esp, v); }
/* f7f9a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7f9ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7f9ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7f9b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7f9b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7f9b9: mov esi, ecx */
  esi = ecx;
/* f7f9bb: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7f9bf: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* f7f9c7: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7f9cdu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7f9cd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* f7f9cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7f9d1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7f9d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f9d6: mov ecx, dword ptr [0xfba418] */
  ecx = R32((uint32_t)(0xfba418u));
/* f7f9dc: lea edx, [esi + 0x1f0] */
  edx = (uint32_t)(esi + 0x1f0u);
/* f7f9e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f9e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7f9e4: mov ecx, esi */
  ecx = esi;
/* f7f9e6: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* f7f9ee: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xf7f9f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7f9f1: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* f7f9f5: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* f7f9f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7f9fa: mov ecx, esi */
  ecx = esi;
/* f7f9fc: call dword ptr [0xfce320] */
  esp -= 4; W32(esp, 0xf7fa02u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* f7fa02: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7fa06: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* f7fa0e: mov byte ptr [esp + 0x1c], 0 */
  W8((uint32_t)(esp + 0x1cu), 0x0u);
/* f7fa13: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7fa19u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7fa19: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7fa1d: mov eax, esi */
  eax = esi;
/* f7fa1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7fa20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7fa27: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7fa2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7fa60(void) {
  LOAD_REGS();
L_f7fa60: /* f7fa60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fa64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fa66: je 0xf7fa6d */
  if (zf) goto L_f7fa6d;
L_f7fa68: /* f7fa68: jmp 0xf7219e */
  SPILL(); f_f7219e(); return;
L_f7fa6d: /* f7fa6d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fa80(void) {
  LOAD_REGS();
L_f7fa80: /* f7fa80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fa84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fa86: je 0xf7fa8d */
  if (zf) goto L_f7fa8d;
L_f7fa88: /* f7fa88: jmp 0xf71ae6 */
  SPILL(); f_f71ae6(); return;
L_f7fa8d: /* f7fa8d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7faa0(void) {
  LOAD_REGS();
L_f7faa0: /* f7faa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7faa4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7faa6: je 0xf7faad */
  if (zf) goto L_f7faad;
L_f7faa8: /* f7faa8: jmp 0xf71fb9 */
  SPILL(); f_f71fb9(); return;
L_f7faad: /* f7faad: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fac0(void) {
  LOAD_REGS();
L_f7fac0: /* f7fac0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fac4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fac6: je 0xf7facd */
  if (zf) goto L_f7facd;
L_f7fac8: /* f7fac8: jmp 0xf7188e */
  SPILL(); f_f7188e(); return;
L_f7facd: /* f7facd: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fae0(void) {
  LOAD_REGS();
L_f7fae0: /* f7fae0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fae4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fae6: je 0xf7faed */
  if (zf) goto L_f7faed;
L_f7fae8: /* f7fae8: jmp 0xf713b6 */
  SPILL(); f_f713b6(); return;
L_f7faed: /* f7faed: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fb00(void) {
  LOAD_REGS();
L_f7fb00: /* f7fb00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fb04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fb06: je 0xf7fb0d */
  if (zf) goto L_f7fb0d;
L_f7fb08: /* f7fb08: jmp 0xf71d48 */
  SPILL(); f_f71d48(); return;
L_f7fb0d: /* f7fb0d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fb20(void) {
  LOAD_REGS();
L_f7fb20: /* f7fb20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fb24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fb26: je 0xf7fb2d */
  if (zf) goto L_f7fb2d;
L_f7fb28: /* f7fb28: jmp 0xf71f37 */
  SPILL(); f_f71f37(); return;
L_f7fb2d: /* f7fb2d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fb40(void) {
  LOAD_REGS();
L_f7fb40: /* f7fb40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fb44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fb46: je 0xf7fb4d */
  if (zf) goto L_f7fb4d;
L_f7fb48: /* f7fb48: jmp 0xf71041 */
  SPILL(); f_f71041(); return;
L_f7fb4d: /* f7fb4d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fb60(void) {
  LOAD_REGS();
L_f7fb60: /* f7fb60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fb64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fb66: je 0xf7fb6d */
  if (zf) goto L_f7fb6d;
L_f7fb68: /* f7fb68: jmp 0xf71122 */
  SPILL(); f_f71122(); return;
L_f7fb6d: /* f7fb6d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fb80(void) {
  LOAD_REGS();
L_f7fb80: /* f7fb80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fb84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fb86: je 0xf7fb8d */
  if (zf) goto L_f7fb8d;
L_f7fb88: /* f7fb88: jmp 0xf71f05 */
  SPILL(); f_f71f05(); return;
L_f7fb8d: /* f7fb8d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fba0(void) {
  LOAD_REGS();
L_f7fba0: /* f7fba0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fba6: je 0xf7fbad */
  if (zf) goto L_f7fbad;
L_f7fba8: /* f7fba8: jmp 0xf71c6c */
  SPILL(); f_f71c6c(); return;
L_f7fbad: /* f7fbad: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fbc0(void) {
  LOAD_REGS();
L_f7fbc0: /* f7fbc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fbc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fbc6: je 0xf7fbcd */
  if (zf) goto L_f7fbcd;
L_f7fbc8: /* f7fbc8: jmp 0xf7179e */
  SPILL(); f_f7179e(); return;
L_f7fbcd: /* f7fbcd: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fbe0(void) {
  LOAD_REGS();
L_f7fbe0: /* f7fbe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7fbe2: push 0xf993f8 */
  { uint32_t v = 0xf993f8u; esp -= 4; W32(esp, v); }
/* f7fbe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7fbed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fbee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7fbf5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7fbf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7fbf9: mov esi, ecx */
  esi = ecx;
/* f7fbfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7fbfc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7fc00: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7fc06u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7fc06: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* f7fc0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fc0b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7fc0f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* f7fc17: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7fc1du); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7fc1d: mov edx, dword ptr [0xfba48c] */
  edx = R32((uint32_t)(0xfba48cu));
/* f7fc23: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* f7fc25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7fc27: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* f7fc2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7fc2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7fc2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* f7fc2f: mov ecx, esi */
  ecx = esi;
/* f7fc31: call dword ptr [0xfce334] */
  esp -= 4; W32(esp, 0xf7fc37u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* f7fc37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fc38: mov ecx, esi */
  ecx = esi;
/* f7fc3a: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0xf7fc3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7fc3d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* f7fc41: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* f7fc49: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7fc4fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7fc4f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* f7fc53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7fc54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7fc55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7fc5c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7fc5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f7fca0(void) {
  LOAD_REGS();
L_f7fca0: /* f7fca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fca4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fca6: je 0xf7fcad */
  if (zf) goto L_f7fcad;
L_f7fca8: /* f7fca8: jmp 0xf721e4 */
  SPILL(); f_f721e4(); return;
L_f7fcad: /* f7fcad: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fcc0(void) {
  LOAD_REGS();
L_f7fcc0: /* f7fcc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fcc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fcc6: je 0xf7fccd */
  if (zf) goto L_f7fccd;
L_f7fcc8: /* f7fcc8: jmp 0xf71622 */
  SPILL(); f_f71622(); return;
L_f7fccd: /* f7fccd: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fce0(void) {
  LOAD_REGS();
L_f7fce0: /* f7fce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fce4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fce6: je 0xf7fced */
  if (zf) goto L_f7fced;
L_f7fce8: /* f7fce8: jmp 0xf71b18 */
  SPILL(); f_f71b18(); return;
L_f7fced: /* f7fced: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fd00(void) {
  LOAD_REGS();
L_f7fd00: /* f7fd00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fd04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fd06: je 0xf7fd0d */
  if (zf) goto L_f7fd0d;
L_f7fd08: /* f7fd08: jmp 0xf71aa0 */
  SPILL(); f_f71aa0(); return;
L_f7fd0d: /* f7fd0d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fd20(void) {
  LOAD_REGS();
L_f7fd20: /* f7fd20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fd24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fd26: je 0xf7fd2d */
  if (zf) goto L_f7fd2d;
L_f7fd28: /* f7fd28: jmp 0xf71203 */
  SPILL(); f_f71203(); return;
L_f7fd2d: /* f7fd2d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fd40(void) {
  LOAD_REGS();
L_f7fd40: /* f7fd40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fd44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fd46: je 0xf7fd4d */
  if (zf) goto L_f7fd4d;
L_f7fd48: /* f7fd48: jmp 0xf71181 */
  SPILL(); f_f71181(); return;
L_f7fd4d: /* f7fd4d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fd60(void) {
  LOAD_REGS();
L_f7fd60: /* f7fd60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7fd62: push 0xf99418 */
  { uint32_t v = 0xf99418u; esp -= 4; W32(esp, v); }
/* f7fd67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7fd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fd6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7fd75: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* f7fd78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7fd79: mov esi, ecx */
  esi = ecx;
/* f7fd7b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* f7fd7f: call dword ptr [0xfce340] */
  esp -= 4; W32(esp, 0xf7fd85u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* f7fd85: mov cl, byte ptr [esp + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x44u))) & 0xffu);
/* f7fd89: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* f7fd8d: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* f7fd91: mov byte ptr [esp + 8], cl */
  W8((uint32_t)(esp + 0x8u), (ecx & 0xffu));
/* f7fd95: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* f7fd99: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* f7fd9d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* f7fda1: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* f7fda5: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* f7fda9: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* f7fdad: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* f7fdb1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* f7fdb5: mov al, byte ptr [esp + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x58u))) & 0xffu);
/* f7fdb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7fdba: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* f7fdbe: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* f7fdc6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* f7fdce: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* f7fdd2: mov byte ptr [esp + 0x20], al */
  W8((uint32_t)(esp + 0x20u), (eax & 0xffu));
/* f7fdd6: call dword ptr [0xfce3d0] */
  esp -= 4; W32(esp, 0xf7fddcu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* f7fddc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* f7fdde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7fde0: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* f7fde4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fde5: mov eax, dword ptr [0xfba3d4] */
  eax = R32((uint32_t)(0xfba3d4u));
/* f7fdea: lea ecx, [esi + 0xf0] */
  ecx = (uint32_t)(esi + 0xf0u);
/* f7fdf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7fdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fdf2: mov ecx, esi */
  ecx = esi;
/* f7fdf4: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xf7fdf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7fdf7: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* f7fdfb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* f7fdff: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* f7fe07: call dword ptr [0xfce31c] */
  esp -= 4; W32(esp, 0xf7fe0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* f7fe0d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* f7fe11: mov eax, esi */
  eax = esi;
/* f7fe13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7fe14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7fe1b: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7fe1e: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_f7fe70(void) {
  LOAD_REGS();
L_f7fe70: /* f7fe70: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* f7fe74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* f7fe76: je 0xf7fe7d */
  if (zf) goto L_f7fe7d;
L_f7fe78: /* f7fe78: jmp 0xf71a96 */
  SPILL(); f_f71a96(); return;
L_f7fe7d: /* f7fe7d: ret  */
  esp += 4; SPILL(); return;
}

void f_f7fe90(void) {
  LOAD_REGS();
L_f7fe90: /* f7fe90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7fe92: push 0xf99439 */
  { uint32_t v = 0xf99439u; esp -= 4; W32(esp, v); }
/* f7fe97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7fe9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7fe9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7fea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7fea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7fea7: mov esi, ecx */
  esi = ecx;
/* f7fea9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* f7fead: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* f7feb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7feb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7feb3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7febb: call 0xf71bd1 */
  esp -= 4; W32(esp, 0xf7fec0u); SPILL(); f_f71bd1(); if (g_unwind) return; RELOAD();
/* f7fec0: mov ecx, esi */
  ecx = esi;
/* f7fec2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* f7feca: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf7fed0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f7fed0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* f7fed4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7fed5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7fedc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7fedf: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ff00(void) {
  LOAD_REGS();
L_f7ff00: /* f7ff00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ff02: push 0xf99459 */
  { uint32_t v = 0xf99459u; esp -= 4; W32(esp, v); }
/* f7ff07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ff0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ff0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ff15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ff16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ff17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ff18: mov esi, ecx */
  esi = ecx;
/* f7ff1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ff1b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7ff1f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f7ff22: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ff24: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f7ff2a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7ff32: jge 0xf7ff48 */
  if ((sf == of)) goto L_f7ff48;
L_f7ff34: /* f7ff34: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7ff39: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ff3e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f7ff43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf7ff45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ff45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ff48: /* f7ff48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f7ff4b: jle 0xf7ff61 */
  if ((zf || sf != of)) goto L_f7ff61;
L_f7ff4d: /* f7ff4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f7ff52: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7ff57: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f7ff5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf7ff5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f7ff5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f7ff61: /* f7ff61: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* f7ff63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ff64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f7ff66: mov ecx, esi */
  ecx = esi;
/* f7ff68: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf7ff6eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f7ff6e: mov ecx, esi */
  ecx = esi;
/* f7ff70: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f7ff78: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf7ff7eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f7ff7e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f7ff82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f7ff83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f7ff84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f7ff85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f7ff8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f7ff8f: ret  */
  esp += 4; SPILL(); return;
}

void f_f7ffc0(void) {
  LOAD_REGS();
L_f7ffc0: /* f7ffc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f7ffc2: push 0xf99479 */
  { uint32_t v = 0xf99479u; esp -= 4; W32(esp, v); }
/* f7ffc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f7ffcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f7ffce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f7ffd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f7ffd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f7ffd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f7ffd8: mov esi, ecx */
  esi = ecx;
/* f7ffda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f7ffdb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f7ffdf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f7ffe2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f7ffe4: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f7ffea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f7fff2: jge 0xf80008 */
  if ((sf == of)) goto L_f80008;
L_f7fff4: /* f7fff4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f7fff9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f7fffe: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80003: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80005: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80008: /* f80008: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8000b: jle 0xf80021 */
  if ((zf || sf != of)) goto L_f80021;
L_f8000d: /* f8000d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80012: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80017: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8001c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8001eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8001e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80021: /* f80021: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80023: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80026: mov ecx, esi */
  ecx = esi;
/* f80028: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8002eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8002e: mov ecx, esi */
  ecx = esi;
/* f80030: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80038: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8003eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8003e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80042: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80044: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80045: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8004c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8004f: ret  */
  esp += 4; SPILL(); return;
}

void f_f80080(void) {
  LOAD_REGS();
L_f80080: /* f80080: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f80084: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80085: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80086: mov esi, ecx */
  esi = ecx;
/* f80088: call 0xf710e6 */
  esp -= 4; W32(esp, 0xf8008du); SPILL(); f_f710e6(); if (g_unwind) return; RELOAD();
/* f8008d: mov eax, esi */
  eax = esi;
/* f8008f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80090: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f800b0(void) {
  LOAD_REGS();
L_f800b0: /* f800b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f800b2: push 0xf99499 */
  { uint32_t v = 0xf99499u; esp -= 4; W32(esp, v); }
/* f800b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f800bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f800be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f800c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f800c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f800c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f800c8: mov esi, ecx */
  esi = ecx;
/* f800ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f800cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f800cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f800d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f800d4: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f800da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f800e2: jge 0xf800f8 */
  if ((sf == of)) goto L_f800f8;
L_f800e4: /* f800e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f800e9: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f800ee: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f800f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf800f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f800f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f800f8: /* f800f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f800fb: jle 0xf80111 */
  if ((zf || sf != of)) goto L_f80111;
L_f800fd: /* f800fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80102: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80107: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8010c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8010eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8010e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80111: /* f80111: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80116: mov ecx, esi */
  ecx = esi;
/* f80118: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8011eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8011e: mov ecx, esi */
  ecx = esi;
/* f80120: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80128: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8012eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8012e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80132: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80134: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80135: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8013c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8013f: ret  */
  esp += 4; SPILL(); return;
}

void f_f80170(void) {
  LOAD_REGS();
L_f80170: /* f80170: mov eax, ecx */
  eax = ecx;
/* f80172: ret  */
  esp += 4; SPILL(); return;
}

void f_f80190(void) {
  LOAD_REGS();
L_f80190: /* f80190: mov eax, ecx */
  eax = ecx;
/* f80192: ret  */
  esp += 4; SPILL(); return;
}

void f_f801b0(void) {
  LOAD_REGS();
L_f801b0: /* f801b0: mov eax, ecx */
  eax = ecx;
/* f801b2: ret  */
  esp += 4; SPILL(); return;
}

void f_f801d0(void) {
  LOAD_REGS();
L_f801d0: /* f801d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f801d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f801d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f801d6: mov esi, ecx */
  esi = ecx;
/* f801d8: call 0xf71492 */
  esp -= 4; W32(esp, 0xf801ddu); SPILL(); f_f71492(); if (g_unwind) return; RELOAD();
/* f801dd: mov eax, esi */
  eax = esi;
/* f801df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f801e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80200(void) {
  LOAD_REGS();
L_f80200: /* f80200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f80204: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f80206: mov esi, ecx */
  esi = ecx;
/* f80208: call 0xf71dc0 */
  esp -= 4; W32(esp, 0xf8020du); SPILL(); f_f71dc0(); if (g_unwind) return; RELOAD();
/* f8020d: mov eax, esi */
  eax = esi;
/* f8020f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80210: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80230(void) {
  LOAD_REGS();
L_f80230: /* f80230: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f80232: push 0xf994b9 */
  { uint32_t v = 0xf994b9u; esp -= 4; W32(esp, v); }
/* f80237: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8023d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8023e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f80245: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80247: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80248: mov esi, ecx */
  esi = ecx;
/* f8024a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8024b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f8024f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80252: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80254: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8025a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80262: jge 0xf80278 */
  if ((sf == of)) goto L_f80278;
L_f80264: /* f80264: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80269: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8026e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80273: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80275u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80275: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80278: /* f80278: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8027b: jle 0xf80291 */
  if ((zf || sf != of)) goto L_f80291;
L_f8027d: /* f8027d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80282: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80287: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8028c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8028eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8028e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80291: /* f80291: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80293: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80296: mov ecx, esi */
  ecx = esi;
/* f80298: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8029eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8029e: mov ecx, esi */
  ecx = esi;
/* f802a0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f802a8: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf802aeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f802ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f802b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f802b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f802b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f802b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f802bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f802bf: ret  */
  esp += 4; SPILL(); return;
}

void f_f802f0(void) {
  LOAD_REGS();
L_f802f0: /* f802f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f802f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f802f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f802f6: mov esi, ecx */
  esi = ecx;
/* f802f8: call 0xf72275 */
  esp -= 4; W32(esp, 0xf802fdu); SPILL(); f_f72275(); if (g_unwind) return; RELOAD();
/* f802fd: mov eax, esi */
  eax = esi;
/* f802ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80300: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80320(void) {
  LOAD_REGS();
L_f80320: /* f80320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f80322: push 0xf994d9 */
  { uint32_t v = 0xf994d9u; esp -= 4; W32(esp, v); }
/* f80327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8032d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8032e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f80335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80337: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80338: mov esi, ecx */
  esi = ecx;
/* f8033a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8033b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f8033f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80342: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80344: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8034a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80352: jge 0xf80368 */
  if ((sf == of)) goto L_f80368;
L_f80354: /* f80354: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80359: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8035e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80363: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80365: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80368: /* f80368: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8036b: jle 0xf80381 */
  if ((zf || sf != of)) goto L_f80381;
L_f8036d: /* f8036d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80372: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80377: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8037c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8037eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8037e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80381: /* f80381: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80386: mov ecx, esi */
  ecx = esi;
/* f80388: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8038eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8038e: mov ecx, esi */
  ecx = esi;
/* f80390: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80398: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8039eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8039e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f803a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f803a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f803a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f803a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f803ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f803af: ret  */
  esp += 4; SPILL(); return;
}

void f_f803e0(void) {
  LOAD_REGS();
L_f803e0: /* f803e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f803e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f803e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f803e6: mov esi, ecx */
  esi = ecx;
/* f803e8: call 0xf71177 */
  esp -= 4; W32(esp, 0xf803edu); SPILL(); f_f71177(); if (g_unwind) return; RELOAD();
/* f803ed: mov eax, esi */
  eax = esi;
/* f803ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f803f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80410(void) {
  LOAD_REGS();
L_f80410: /* f80410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f80412: push 0xf994f9 */
  { uint32_t v = 0xf994f9u; esp -= 4; W32(esp, v); }
/* f80417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8041d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8041e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f80425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80426: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80427: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80428: mov esi, ecx */
  esi = ecx;
/* f8042a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8042b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f8042f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80432: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80434: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8043a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80442: jge 0xf80458 */
  if ((sf == of)) goto L_f80458;
L_f80444: /* f80444: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80449: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8044e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80453: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80455u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80455: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80458: /* f80458: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8045b: jle 0xf80471 */
  if ((zf || sf != of)) goto L_f80471;
L_f8045d: /* f8045d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80462: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80467: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8046c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8046eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8046e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80471: /* f80471: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80473: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80476: mov ecx, esi */
  ecx = esi;
/* f80478: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8047eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8047e: mov ecx, esi */
  ecx = esi;
/* f80480: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80488: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8048eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8048e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80494: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80495: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8049c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8049f: ret  */
  esp += 4; SPILL(); return;
}

void f_f804d0(void) {
  LOAD_REGS();
L_f804d0: /* f804d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* f804d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f804d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f804d6: mov esi, ecx */
  esi = ecx;
/* f804d8: call 0xf71992 */
  esp -= 4; W32(esp, 0xf804ddu); SPILL(); f_f71992(); if (g_unwind) return; RELOAD();
/* f804dd: mov eax, esi */
  eax = esi;
/* f804df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f804e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_f80500(void) {
  LOAD_REGS();
L_f80500: /* f80500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* f80502: push 0xf99519 */
  { uint32_t v = 0xf99519u; esp -= 4; W32(esp, v); }
/* f80507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* f8050d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* f8050e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* f80515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* f80516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* f80517: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* f80518: mov esi, ecx */
  esi = ecx;
/* f8051a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f8051b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* f8051f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* f80522: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* f80524: mov ebx, dword ptr [0xfce328] */
  ebx = R32((uint32_t)(0xfce328u));
/* f8052a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* f80532: jge 0xf80548 */
  if ((sf == of)) goto L_f80548;
L_f80534: /* f80534: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* f80539: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f8053e: push 0xfb90d0 */
  { uint32_t v = 0xfb90d0u; esp -= 4; W32(esp, v); }
/* f80543: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf80545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f80545: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80548: /* f80548: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* f8054b: jle 0xf80561 */
  if ((zf || sf != of)) goto L_f80561;
L_f8054d: /* f8054d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* f80552: push 0xfb90f0 */
  { uint32_t v = 0xfb90f0u; esp -= 4; W32(esp, v); }
/* f80557: push 0xfb90b4 */
  { uint32_t v = 0xfb90b4u; esp -= 4; W32(esp, v); }
/* f8055c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xf8055eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* f8055e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_f80561: /* f80561: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* f80563: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* f80564: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* f80566: mov ecx, esi */
  ecx = esi;
/* f80568: call dword ptr [0xfce324] */
  esp -= 4; W32(esp, 0xf8056eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* f8056e: mov ecx, esi */
  ecx = esi;
/* f80570: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* f80578: call dword ptr [0xfce3d4] */
  esp -= 4; W32(esp, 0xf8057eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* f8057e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* f80582: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* f80583: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* f80584: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* f80585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* f8058c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* f8058f: ret  */
  esp += 4; SPILL(); return;
}
